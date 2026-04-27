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
     NS = 656,
     SYSTEM_TIME = 657,
     TRANSACTION = 658,
     FEVO_CURRENT_XID = 659
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
#define SYSTEM_TIME 657
#define TRANSACTION 658
#define FEVO_CURRENT_XID 659




/* Copy the first part of user declarations.  */
#line 4 "evolution/parser/evoparser.y"

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
#line 72 "evolution/parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 977 "evolution/parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 990 "evolution/parser/evoparser.tab.c"

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
#define YYLAST   14142

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  422
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1016
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2606

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   659

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     417,   418,    28,    26,   419,    27,   416,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   415,
       2,   421,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   420,    32,     2,     2,     2,     2,     2,
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
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414
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
     232,   237,   244,   249,   256,   260,   264,   271,   278,   285,
     292,   297,   302,   307,   311,   315,   326,   339,   352,   353,
     355,   356,   363,   364,   372,   373,   380,   381,   389,   390,
     396,   401,   406,   411,   416,   421,   426,   431,   436,   443,
     444,   454,   455,   465,   466,   476,   477,   488,   489,   500,
     501,   512,   513,   524,   525,   536,   537,   548,   549,   560,
     561,   574,   575,   590,   591,   606,   607,   618,   619,   632,
     633,   648,   649,   664,   665,   676,   677,   687,   688,   698,
     707,   714,   721,   730,   735,   743,   750,   755,   760,   765,
     772,   781,   788,   795,   802,   811,   820,   825,   832,   839,
     846,   851,   856,   861,   868,   873,   880,   885,   892,   896,
     901,   906,   911,   915,   919,   926,   931,   936,   941,   946,
     951,   956,   963,   968,   973,   978,   983,   988,   993,   998,
    1003,  1012,  1021,  1030,  1037,  1044,  1053,  1062,  1069,  1080,
    1085,  1092,  1101,  1106,  1111,  1116,  1123,  1132,  1136,  1143,
    1150,  1157,  1164,  1173,  1177,  1186,  1197,  1201,  1205,  1209,
    1213,  1217,  1219,  1221,  1226,  1233,  1235,  1237,  1239,  1246,
    1253,  1257,  1261,  1265,  1269,  1273,  1277,  1281,  1285,  1289,
    1294,  1301,  1305,  1311,  1316,  1322,  1326,  1331,  1335,  1340,
    1342,  1344,  1346,  1348,  1350,  1354,  1368,  1381,  1382,  1385,
    1386,  1391,  1394,  1399,  1400,  1402,  1404,  1405,  1408,  1409,
    1412,  1413,  1417,  1419,  1423,  1424,  1428,  1431,  1436,  1437,
    1441,  1443,  1447,  1450,  1455,  1458,  1459,  1462,  1467,  1472,
    1473,  1480,  1481,  1484,  1487,  1492,  1497,  1498,  1501,  1503,
    1507,  1508,  1511,  1514,  1517,  1520,  1523,  1526,  1529,  1532,
    1534,  1538,  1540,  1543,  1546,  1548,  1549,  1551,  1555,  1557,
    1559,  1563,  1568,  1574,  1578,  1582,  1587,  1594,  1604,  1608,
    1609,  1615,  1617,  1618,  1624,  1628,  1634,  1641,  1647,  1648,
    1650,  1652,  1653,  1655,  1657,  1659,  1662,  1665,  1666,  1667,
    1669,  1672,  1677,  1684,  1691,  1698,  1699,  1702,  1703,  1705,
    1709,  1713,  1715,  1724,  1727,  1730,  1733,  1734,  1741,  1744,
    1749,  1750,  1753,  1761,  1763,  1768,  1775,  1776,  1778,  1780,
    1782,  1791,  1801,  1812,  1822,  1834,  1845,  1858,  1870,  1884,
    1894,  1906,  1917,  1930,  1942,  1955,  1968,  1983,  1984,  1986,
    1987,  1992,  1994,  1998,  2002,  2004,  2008,  2010,  2015,  2020,
    2025,  2032,  2034,  2038,  2041,  2045,  2051,  2053,  2057,  2058,
    2061,  2064,  2068,  2072,  2074,  2076,  2078,  2080,  2082,  2088,
    2096,  2097,  2104,  2109,  2115,  2122,  2124,  2126,  2128,  2149,
    2171,  2173,  2175,  2182,  2191,  2198,  2207,  2209,  2211,  2213,
    2215,  2217,  2219,  2221,  2228,  2237,  2238,  2239,  2244,  2246,
    2250,  2254,  2258,  2263,  2269,  2276,  2289,  2304,  2306,  2308,
    2321,  2328,  2337,  2350,  2356,  2364,  2367,  2371,  2374,  2377,
    2380,  2385,  2387,  2391,  2393,  2398,  2405,  2406,  2411,  2416,
    2419,  2420,  2425,  2433,  2438,  2440,  2444,  2446,  2448,  2450,
    2461,  2474,  2475,  2478,  2481,  2482,  2485,  2488,  2491,  2494,
    2497,  2498,  2501,  2503,  2507,  2508,  2513,  2514,  2520,  2526,
    2534,  2545,  2556,  2574,  2587,  2607,  2619,  2626,  2635,  2642,
    2649,  2656,  2666,  2673,  2679,  2688,  2696,  2706,  2715,  2726,
    2736,  2744,  2752,  2761,  2770,  2771,  2773,  2776,  2778,  2789,
    2796,  2797,  2798,  2804,  2805,  2810,  2811,  2815,  2820,  2823,
    2824,  2830,  2834,  2840,  2841,  2844,  2847,  2850,  2853,  2855,
    2856,  2857,  2861,  2863,  2867,  2871,  2872,  2879,  2881,  2883,
    2887,  2891,  2899,  2903,  2907,  2913,  2919,  2921,  2930,  2938,
    2946,  2948,  2949,  2957,  2958,  2962,  2964,  2968,  2970,  2972,
    2974,  2976,  2978,  2979,  2981,  2986,  2990,  2992,  2996,  2999,
    3002,  3005,  3007,  3010,  3013,  3016,  3018,  3020,  3030,  3031,
    3034,  3037,  3041,  3047,  3053,  3061,  3067,  3069,  3074,  3079,
    3083,  3089,  3093,  3099,  3100,  3103,  3105,  3111,  3119,  3127,
    3137,  3149,  3151,  3154,  3158,  3160,  3171,  3172,  3177,  3189,
    3208,  3209,  3214,  3218,  3224,  3230,  3240,  3251,  3259,  3261,
    3265,  3275,  3285,  3295,  3302,  3314,  3323,  3324,  3326,  3329,
    3331,  3335,  3341,  3349,  3354,  3359,  3365,  3371,  3376,  3383,
    3395,  3409,  3423,  3439,  3444,  3451,  3453,  3457,  3459,  3463,
    3465,  3469,  3470,  3475,  3481,  3486,  3492,  3497,  3503,  3508,
    3514,  3519,  3524,  3528,  3532,  3536,  3539,  3543,  3548,  3553,
    3555,  3559,  3560,  3565,  3566,  3570,  3573,  3577,  3581,  3585,
    3589,  3595,  3601,  3607,  3611,  3617,  3620,  3628,  3634,  3642,
    3648,  3651,  3655,  3658,  3662,  3665,  3669,  3675,  3680,  3686,
    3694,  3703,  3712,  3720,  3727,  3734,  3740,  3741,  3745,  3751,
    3752,  3754,  3755,  3758,  3761,  3762,  3767,  3771,  3774,  3778,
    3782,  3786,  3790,  3794,  3798,  3802,  3806,  3810,  3814,  3816,
    3818,  3820,  3822,  3824,  3828,  3834,  3837,  3842,  3844,  3846,
    3848,  3850,  3854,  3858,  3862,  3866,  3872,  3878,  3880,  3882,
    3884,  3889,  3893,  3895,  3899,  3903,  3904,  3906,  3908,  3910,
    3914,  3918,  3921,  3923,  3927,  3931,  3935,  3937,  3948,  3958,
    3971,  3983,  3996,  4008,  4023,  4037,  4038,  4040,  4042,  4046,
    4049,  4053,  4057,  4061,  4063,  4065,  4067,  4069,  4071,  4073,
    4075,  4077,  4079,  4081,  4082,  4085,  4090,  4096,  4102,  4108,
    4114,  4120,  4122,  4124,  4126,  4128,  4130,  4132,  4134,  4136,
    4138,  4140,  4142,  4144,  4146,  4148,  4150,  4152,  4154,  4156,
    4158,  4160,  4162,  4164,  4166,  4168,  4170,  4172,  4174,  4176,
    4178,  4180,  4182,  4184,  4186,  4188,  4190,  4192,  4194,  4196,
    4198,  4200,  4202,  4204,  4206,  4208,  4210,  4212,  4214,  4216,
    4218,  4220,  4222,  4224,  4226,  4228,  4230,  4232,  4234,  4236,
    4238,  4240,  4242,  4244,  4246,  4248,  4250,  4252,  4254,  4256,
    4258,  4260,  4262,  4264,  4266,  4268,  4270,  4272,  4274,  4276,
    4278,  4280,  4282,  4284,  4286,  4288,  4290,  4292,  4294,  4296,
    4298,  4300,  4302,  4304,  4306,  4308,  4310,  4312,  4314,  4316,
    4318,  4320,  4322,  4324,  4326,  4328,  4330,  4332,  4334,  4336,
    4338,  4340,  4342,  4344,  4346,  4348,  4350,  4352,  4354,  4356,
    4358,  4360,  4362,  4364,  4366,  4368,  4372,  4378,  4382,  4388,
    4390,  4395,  4401,  4403,  4407,  4409,  4411,  4413,  4415,  4417,
    4419,  4421,  4423,  4437,  4439,  4441,  4443,  4445,  4447,  4449,
    4453,  4459,  4464,  4469,  4471,  4477,  4478,  4481,  4485,  4488,
    4492,  4495,  4498,  4501,  4503,  4506,  4508,  4512,  4518,  4523,
    4528,  4535,  4542,  4543,  4546,  4549,  4551
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     423,     0,    -1,   462,   415,    -1,   462,   415,   423,    -1,
       3,    -1,     3,   416,     3,    -1,    89,   416,     3,    -1,
     183,   417,     3,   418,    91,   417,     4,   418,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   424,    26,   424,    -1,   424,    27,   424,    -1,   424,
      28,   424,    -1,   424,    29,   424,    -1,   424,    30,   424,
      -1,   424,    31,   424,    -1,    27,   424,    -1,   417,   424,
     418,    -1,   424,    12,   424,    -1,   424,    10,   424,    -1,
     424,    11,   424,    -1,   424,    23,   424,    -1,   424,    24,
     424,    -1,   424,    32,   424,    -1,   424,    25,   424,    -1,
     424,    34,   424,    -1,   424,    33,   424,    -1,    18,   424,
      -1,    17,   424,    -1,   424,    20,   424,    -1,    -1,   424,
      20,   417,   425,   463,   418,    -1,    -1,   424,    20,    47,
     417,   426,   463,   418,    -1,    -1,   424,    20,   232,   417,
     427,   463,   418,    -1,    -1,   424,    20,    40,   417,   428,
     463,   418,    -1,   424,    20,    47,   417,   432,   418,    -1,
     424,    20,   232,   417,   432,   418,    -1,   424,    15,   193,
      -1,   424,    15,    18,   193,    -1,   424,    15,     6,    -1,
     424,    15,    18,     6,    -1,     8,     9,   424,    -1,   424,
      19,   424,    50,   424,    -1,   424,    18,    19,   424,    50,
     424,    -1,   424,    -1,   424,   419,   429,    -1,   424,    -1,
     424,   419,   430,    -1,    -1,   263,    36,   431,   430,   420,
      -1,   263,    36,   420,    -1,   424,    36,   424,   420,    -1,
     424,    -1,   380,   417,   424,   418,    -1,   380,   417,   424,
     419,   424,   418,    -1,   381,   417,   424,   418,    -1,   382,
     417,   424,   419,   424,   418,    -1,   383,   417,   418,    -1,
     414,   417,   418,    -1,   384,   417,   424,   419,   424,   418,
      -1,   385,   417,   424,   419,   424,   418,    -1,   386,   417,
     424,   419,   424,   418,    -1,   387,   417,   424,   419,   424,
     418,    -1,   388,   417,   424,   418,    -1,   389,   417,   424,
     418,    -1,   390,   417,   424,   418,    -1,   424,    22,   424,
      -1,   424,    21,   424,    -1,   392,   417,   424,   419,   424,
     419,   424,   419,     5,   418,    -1,   393,   417,   424,   419,
     424,   419,   424,   419,     5,   419,     4,   418,    -1,   394,
     417,   424,   419,   424,   419,   424,   419,     5,   419,     4,
     418,    -1,    -1,   429,    -1,    -1,   424,    16,   417,   434,
     429,   418,    -1,    -1,   424,    18,    16,   417,   435,   429,
     418,    -1,    -1,   424,    16,   417,   436,   463,   418,    -1,
      -1,   424,    18,    16,   417,   437,   463,   418,    -1,    -1,
     281,   417,   438,   463,   418,    -1,     3,   417,   433,   418,
      -1,   322,   417,    28,   418,    -1,   322,   417,   424,   418,
      -1,   323,   417,   424,   418,    -1,   324,   417,   424,   418,
      -1,   325,   417,   424,   418,    -1,   326,   417,   424,   418,
      -1,   320,   417,   424,   418,    -1,   320,   417,   424,   321,
       4,   418,    -1,    -1,   342,   417,   418,   350,   417,   439,
     470,   472,   418,    -1,    -1,   343,   417,   418,   350,   417,
     440,   470,   472,   418,    -1,    -1,   344,   417,   418,   350,
     417,   441,   470,   472,   418,    -1,    -1,   323,   417,   424,
     418,   350,   417,   442,   470,   472,   418,    -1,    -1,   322,
     417,    28,   418,   350,   417,   443,   470,   472,   418,    -1,
      -1,   322,   417,   424,   418,   350,   417,   444,   470,   472,
     418,    -1,    -1,   324,   417,   424,   418,   350,   417,   445,
     470,   472,   418,    -1,    -1,   325,   417,   424,   418,   350,
     417,   446,   470,   472,   418,    -1,    -1,   326,   417,   424,
     418,   350,   417,   447,   470,   472,   418,    -1,    -1,   345,
     417,   424,   418,   350,   417,   448,   470,   472,   418,    -1,
      -1,   345,   417,   424,   419,     5,   418,   350,   417,   449,
     470,   472,   418,    -1,    -1,   345,   417,   424,   419,     5,
     419,     4,   418,   350,   417,   450,   470,   472,   418,    -1,
      -1,   345,   417,   424,   419,     5,   419,     5,   418,   350,
     417,   451,   470,   472,   418,    -1,    -1,   346,   417,   424,
     418,   350,   417,   452,   470,   472,   418,    -1,    -1,   346,
     417,   424,   419,     5,   418,   350,   417,   453,   470,   472,
     418,    -1,    -1,   346,   417,   424,   419,     5,   419,     4,
     418,   350,   417,   454,   470,   472,   418,    -1,    -1,   346,
     417,   424,   419,     5,   419,     5,   418,   350,   417,   455,
     470,   472,   418,    -1,    -1,   347,   417,     5,   418,   350,
     417,   456,   470,   472,   418,    -1,    -1,   348,   417,   418,
     350,   417,   457,   470,   472,   418,    -1,    -1,   349,   417,
     418,   350,   417,   458,   470,   472,   418,    -1,   282,   417,
     424,   419,   424,   419,   424,   418,    -1,   282,   417,   424,
     419,   424,   418,    -1,   282,   417,   424,   136,   424,   418,
      -1,   282,   417,   424,   136,   424,   140,   424,   418,    -1,
     283,   417,   424,   418,    -1,   283,   417,   459,   424,   136,
     424,   418,    -1,   283,   417,   459,   136,   424,   418,    -1,
     327,   417,   424,   418,    -1,   328,   417,   424,   418,    -1,
     329,   417,   424,   418,    -1,   330,   417,   424,   419,   424,
     418,    -1,   331,   417,   424,   419,   424,   419,   424,   418,
      -1,   332,   417,   424,   419,   424,   418,    -1,   294,   417,
     424,   419,   424,   418,    -1,   295,   417,   424,   419,   424,
     418,    -1,   296,   417,   424,   419,   424,   419,   424,   418,
      -1,   297,   417,   424,   419,   424,   419,   424,   418,    -1,
     298,   417,   424,   418,    -1,   299,   417,   424,   419,   424,
     418,    -1,   300,   417,   424,   419,   424,   418,    -1,   301,
     417,   424,   419,   424,   418,    -1,   302,   417,   424,   418,
      -1,   303,   417,   424,   418,    -1,   304,   417,   424,   418,
      -1,   305,   417,   424,   419,   424,   418,    -1,   305,   417,
     424,   418,    -1,   306,   417,   424,   419,   424,   418,    -1,
     307,   417,   424,   418,    -1,   308,   417,   424,   419,   424,
     418,    -1,   309,   417,   418,    -1,   310,   417,   424,   418,
      -1,   311,   417,   424,   418,    -1,   312,   417,   424,   418,
      -1,   313,   417,   418,    -1,   293,   417,   418,    -1,   286,
     417,   424,   419,   424,   418,    -1,   287,   417,   424,   418,
      -1,   288,   417,   424,   418,    -1,   289,   417,   424,   418,
      -1,   290,   417,   424,   418,    -1,   291,   417,   424,   418,
      -1,   292,   417,   424,   418,    -1,   352,   417,   424,   419,
     424,   418,    -1,   353,   417,   424,   418,    -1,   354,   417,
     424,   418,    -1,   355,   417,   424,   418,    -1,   356,   417,
     424,   418,    -1,   357,   417,   424,   418,    -1,   358,   417,
     424,   418,    -1,   359,   417,   424,   418,    -1,   360,   417,
     424,   418,    -1,   361,   417,   424,   419,   424,   419,   424,
     418,    -1,   362,   417,   424,   419,   424,   419,   424,   418,
      -1,   363,   417,   424,   419,   424,   419,   424,   418,    -1,
     364,   417,   424,   419,   424,   418,    -1,   365,   417,   424,
     419,   424,   418,    -1,   366,   417,   424,   419,   424,   419,
     424,   418,    -1,   367,   417,   424,   419,   424,   419,   424,
     418,    -1,   368,   417,   424,   419,   424,   418,    -1,   368,
     417,   424,   419,   424,   419,   424,   419,   424,   418,    -1,
     369,   417,   424,   418,    -1,   369,   417,   424,   419,   424,
     418,    -1,   369,   417,   424,   419,   424,   419,   424,   418,
      -1,   370,   417,   424,   418,    -1,   372,   417,   424,   418,
      -1,   373,   417,   424,   418,    -1,   374,   417,   424,   419,
     424,   418,    -1,   374,   417,   424,   419,   424,   419,   424,
     418,    -1,   375,   417,   418,    -1,   314,   417,   424,    51,
     610,   418,    -1,   315,   417,   424,   419,   610,   418,    -1,
     316,   417,   424,   419,   424,   418,    -1,   317,   417,   424,
     419,   424,   418,    -1,   318,   417,   424,   419,   424,   419,
     424,   418,    -1,   424,    15,   319,    -1,   330,   417,   424,
     419,   424,   419,   424,   418,    -1,   330,   417,   424,   419,
     424,   419,   424,   419,   424,   418,    -1,   333,   417,   418,
      -1,   334,   417,   418,    -1,   335,   417,   418,    -1,   336,
     417,   418,    -1,   337,   417,   418,    -1,   338,    -1,   339,
      -1,   340,   417,   424,   418,    -1,   341,   417,   424,   419,
     424,   418,    -1,   178,    -1,   254,    -1,    65,    -1,   284,
     417,   424,   419,   460,   418,    -1,   285,   417,   424,   419,
     460,   418,    -1,   161,   424,   278,    -1,   161,   424,   104,
      -1,   161,   424,   105,    -1,   161,   424,   109,    -1,   161,
     424,   111,    -1,   161,   424,   279,    -1,   161,   424,   145,
      -1,   161,   424,   144,    -1,   161,   424,   147,    -1,    77,
     424,   461,   124,    -1,    77,   424,   461,   125,   424,   124,
      -1,    77,   461,   124,    -1,    77,   461,   125,   424,   124,
      -1,   275,   424,   253,   424,    -1,   461,   275,   424,   253,
     424,    -1,   424,    14,   424,    -1,   424,    18,    14,   424,
      -1,   424,    13,   424,    -1,   424,    18,    13,   424,    -1,
      72,    -1,    80,    -1,    81,    -1,   225,    -1,   463,    -1,
     241,   482,   483,    -1,   241,   482,   483,   136,   486,   478,
     464,   465,   469,   474,   477,   479,   480,    -1,   241,   482,
     483,   159,     3,   136,   486,   464,   465,   469,   474,   477,
      -1,    -1,   274,   424,    -1,    -1,   141,    63,   466,   468,
      -1,   424,   467,    -1,   466,   419,   424,   467,    -1,    -1,
      49,    -1,   112,    -1,    -1,   277,   214,    -1,    -1,   148,
     424,    -1,    -1,   351,    63,   471,    -1,     3,    -1,   471,
     419,     3,    -1,    -1,   198,    63,   473,    -1,     3,   467,
      -1,   473,   419,     3,   467,    -1,    -1,   198,    63,   475,
      -1,   476,    -1,   475,   419,   476,    -1,     3,   467,    -1,
       3,   416,     3,   467,    -1,     5,   467,    -1,    -1,   179,
     424,    -1,   179,   424,   419,   424,    -1,   179,   424,   181,
     424,    -1,    -1,   140,   412,    51,    94,   413,     5,    -1,
      -1,   140,   258,    -1,   140,   230,    -1,   140,   258,   231,
     180,    -1,   140,   230,   231,   180,    -1,    -1,   159,   481,
      -1,     3,    -1,   481,   419,     3,    -1,    -1,   482,    40,
      -1,   482,   106,    -1,   482,   110,    -1,   482,   146,    -1,
     482,   238,    -1,   482,   226,    -1,   482,   234,    -1,   482,
     233,    -1,   484,    -1,   483,   419,   484,    -1,    28,    -1,
     424,   485,    -1,    51,     3,    -1,     3,    -1,    -1,   487,
      -1,   486,   419,   487,    -1,   488,    -1,   492,    -1,     3,
     485,   499,    -1,   173,     3,   485,   499,    -1,     3,   416,
       3,   485,   499,    -1,   502,   491,     3,    -1,   489,   491,
       3,    -1,   381,   417,   424,   418,    -1,   381,   417,   424,
     418,   491,     3,    -1,   381,   417,   424,   418,   491,     3,
     417,     3,   418,    -1,   417,   486,   418,    -1,    -1,   167,
     417,   490,   463,   418,    -1,    51,    -1,    -1,   487,   493,
     163,   488,   497,    -1,   487,   238,   488,    -1,   487,   238,
     488,   197,   424,    -1,   487,   495,   494,   163,   488,   498,
      -1,   487,   190,   496,   163,   488,    -1,    -1,   153,    -1,
      76,    -1,    -1,   196,    -1,   177,    -1,   215,    -1,   177,
     494,    -1,   215,   494,    -1,    -1,    -1,   498,    -1,   197,
     424,    -1,   266,   417,   481,   418,    -1,   267,   164,   500,
     417,   501,   418,    -1,   154,   164,   500,   417,   501,   418,
      -1,   133,   164,   500,   417,   501,   418,    -1,    -1,   140,
     163,    -1,    -1,     3,    -1,   501,   419,     3,    -1,   417,
     463,   418,    -1,   503,    -1,   107,   504,   136,     3,   464,
     474,   477,   636,    -1,   504,   176,    -1,   504,   203,    -1,
     504,   154,    -1,    -1,   107,   504,   505,   136,   486,   464,
      -1,     3,   506,    -1,   505,   419,     3,   506,    -1,    -1,
     416,    28,    -1,   107,   504,   136,   505,   266,   486,   464,
      -1,   507,    -1,   108,   252,     3,   508,    -1,   108,   252,
     156,   281,     3,   508,    -1,    -1,    74,    -1,   210,    -1,
     509,    -1,    73,   155,     3,   197,     3,   417,   514,   418,
      -1,    73,   138,   155,     3,   197,     3,   417,   514,   418,
      -1,    73,   155,   156,   281,     3,   197,     3,   417,   514,
     418,    -1,    73,   261,   155,     3,   197,     3,   417,   514,
     418,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     417,   514,   418,    -1,    73,   155,     3,   197,     3,   266,
     268,   417,   514,   418,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   268,   417,   514,   418,    -1,    73,   261,
     155,     3,   197,     3,   266,   268,   417,   514,   418,    -1,
      73,   261,   155,   156,   281,     3,   197,     3,   266,   268,
     417,   514,   418,    -1,    73,   155,    85,     3,   197,     3,
     417,   514,   418,    -1,    73,   155,    85,   156,   281,     3,
     197,     3,   417,   514,   418,    -1,    73,   261,   155,    85,
       3,   197,     3,   417,   514,   418,    -1,    73,   261,   155,
      85,   156,   281,     3,   197,     3,   417,   514,   418,    -1,
      73,   155,    85,     3,   197,     3,   266,   268,   417,   514,
     418,    -1,    73,   261,   155,    85,     3,   197,     3,   266,
     268,   417,   514,   418,    -1,    73,   155,     3,   197,     3,
     266,   391,   417,     3,   510,   418,   511,    -1,    73,   155,
     156,   281,     3,   197,     3,   266,   391,   417,     3,   510,
     418,   511,    -1,    -1,     3,    -1,    -1,   277,   417,   512,
     418,    -1,   513,    -1,   512,   419,   513,    -1,     3,    20,
       5,    -1,     3,    -1,   514,   419,     3,    -1,   515,    -1,
     327,   417,     3,   418,    -1,   328,   417,     3,   418,    -1,
     329,   417,     3,   418,    -1,   330,   417,     3,   419,     3,
     418,    -1,   516,    -1,   108,   155,     3,    -1,   517,   519,
      -1,   255,   252,     3,    -1,   255,   252,     3,   419,   518,
      -1,     3,    -1,   518,   419,     3,    -1,    -1,   519,    74,
      -1,   519,   210,    -1,   519,    55,    53,    -1,   519,    54,
      53,    -1,   539,    -1,   540,    -1,   541,    -1,   520,    -1,
     522,    -1,    73,   395,   396,     3,   521,    -1,    73,   395,
     396,   156,   281,     3,   521,    -1,    -1,   277,   417,   397,
      20,     4,   418,    -1,   108,   395,   396,     3,    -1,   108,
     395,   396,     3,    74,    -1,   108,   395,   396,   156,   281,
       3,    -1,   523,    -1,   525,    -1,   526,    -1,   395,   398,
     159,     3,   271,   417,   524,   419,   524,   419,   524,   419,
     524,   419,   524,   419,   524,   419,   524,   418,    -1,   395,
     398,   401,   159,     3,   271,   417,   524,   419,   524,   419,
     524,   419,   524,   419,   524,   419,   524,   419,   524,   418,
      -1,     4,    -1,   193,    -1,   395,   399,   136,     3,   402,
       4,    -1,   395,   399,   136,     3,   402,     4,   403,     4,
      -1,   395,   400,   136,     3,   402,     4,    -1,   395,   400,
     136,     3,   402,     4,   179,     5,    -1,   527,    -1,   532,
      -1,   533,    -1,   535,    -1,   536,    -1,   537,    -1,   538,
      -1,    73,   404,   396,     3,   528,   529,    -1,    73,   404,
     396,   156,   281,     3,   528,   529,    -1,    -1,    -1,   277,
     417,   530,   418,    -1,   531,    -1,   530,   419,   531,    -1,
     405,    20,     5,    -1,   406,    20,     4,    -1,   108,   404,
     396,     3,    -1,   108,   404,   396,     3,    74,    -1,   108,
     404,   396,   156,   281,     3,    -1,   404,   398,   159,     3,
     271,   417,   534,   419,   534,   419,   534,   418,    -1,   404,
     398,   159,     3,   271,   417,   534,   419,   534,   419,   534,
     419,   534,   418,    -1,     4,    -1,   193,    -1,   404,   399,
     136,     3,   274,   411,    20,     4,    12,   164,    20,     4,
      -1,   404,   407,     3,   266,   273,     4,    -1,   404,   407,
       3,   266,   273,     4,   179,     5,    -1,   404,   107,   136,
       3,   274,   411,    20,     4,    12,   164,    20,     4,    -1,
     404,   400,   409,    16,     3,    -1,   404,   400,   409,    16,
       3,   410,     4,    -1,   168,     3,    -1,   168,     3,   171,
      -1,   170,     3,    -1,   170,    28,    -1,   169,     3,    -1,
     169,     3,   419,     4,    -1,   542,    -1,   206,   252,     3,
      -1,   543,    -1,   545,     3,   544,   546,    -1,   545,     3,
     416,     3,   544,   546,    -1,    -1,   277,    44,     5,    45,
      -1,   277,    44,     5,    46,    -1,    41,   252,    -1,    -1,
     258,    42,   197,   547,    -1,   258,    42,   197,   547,   277,
       5,    43,    -1,   108,    42,   197,   547,    -1,     3,    -1,
     547,   419,     3,    -1,   556,    -1,   548,    -1,   555,    -1,
      73,   221,     3,   197,     3,   549,   550,   551,   553,   554,
      -1,    73,   221,     3,   197,   404,   396,     3,   549,   550,
     551,   553,   554,    -1,    -1,    51,   223,    -1,    51,   224,
      -1,    -1,   140,    40,    -1,   140,   241,    -1,   140,   157,
      -1,   140,   258,    -1,   140,   107,    -1,    -1,   245,   552,
      -1,     3,    -1,   552,   419,     3,    -1,    -1,   266,   417,
     424,   418,    -1,    -1,   277,    78,   417,   424,   418,    -1,
     108,   221,     3,   197,     3,    -1,   108,   221,     3,   197,
     404,   396,     3,    -1,    37,   252,     3,    38,    71,     3,
      78,   417,   424,   418,    -1,    37,   252,     3,    38,    71,
       3,   261,   417,   603,   418,    -1,    37,   252,     3,    38,
      71,     3,   134,   164,   417,   600,   418,   207,     3,   417,
     601,   418,   602,    -1,    37,   252,     3,    38,    71,     3,
      78,   417,   424,   418,    18,   269,    -1,    37,   252,     3,
      38,    71,     3,   134,   164,   417,   600,   418,   207,     3,
     417,   601,   418,   602,    18,   269,    -1,    37,   252,     3,
      38,    71,     3,   201,   164,   417,   599,   418,    -1,    37,
     252,     3,   108,    71,     3,    -1,    37,   252,     3,   208,
      71,     3,   245,     3,    -1,    37,   252,     3,   120,    71,
       3,    -1,    37,   252,     3,   100,    71,     3,    -1,    37,
     252,     3,   269,    71,     3,    -1,    37,   252,     3,    38,
      84,     3,   610,   605,   557,    -1,    37,   252,     3,   108,
      84,     3,    -1,    37,   252,     3,   108,     3,    -1,    37,
     252,     3,   208,    84,     3,   245,     3,    -1,    37,   252,
       3,   208,     3,   245,     3,    -1,    37,   252,     3,   187,
      84,     3,   610,   605,   557,    -1,    37,   252,     3,   187,
       3,   610,   605,   557,    -1,    37,   252,     3,    75,    84,
       3,     3,   610,   605,   557,    -1,    37,   252,     3,    75,
       3,     3,   610,   605,   557,    -1,    37,   252,     3,   120,
     217,     3,   222,    -1,    37,   252,     3,   100,   217,     3,
     222,    -1,    37,   404,   396,     3,   120,   217,     3,   222,
      -1,    37,   404,   396,     3,   100,   217,     3,   222,    -1,
      -1,   130,    -1,    39,     3,    -1,   558,    -1,   157,   566,
     567,     3,   568,   271,   570,   559,   561,   636,    -1,   157,
     566,   567,     3,   568,   463,    -1,    -1,    -1,   199,   164,
     258,   560,   565,    -1,    -1,   197,    88,   562,   563,    -1,
      -1,   417,     3,   418,    -1,   417,     3,   419,     3,    -1,
     101,    90,    -1,    -1,   101,   258,   564,   240,   565,    -1,
       3,    20,   424,    -1,   565,   419,     3,    20,   424,    -1,
      -1,   566,   176,    -1,   566,   103,    -1,   566,   146,    -1,
     566,   154,    -1,   159,    -1,    -1,    -1,   417,   569,   418,
      -1,     3,    -1,   569,   419,     3,    -1,   417,   572,   418,
      -1,    -1,   570,   419,   571,   417,   572,   418,    -1,   424,
      -1,   113,    -1,   572,   419,   424,    -1,   572,   419,   113,
      -1,   157,   566,   567,     3,   240,   573,   559,    -1,     3,
      20,   424,    -1,     3,    20,   113,    -1,   573,   419,     3,
      20,   424,    -1,   573,   419,     3,    20,   113,    -1,   574,
      -1,   216,   566,   567,     3,   568,   271,   570,   559,    -1,
     216,   566,   567,     3,   240,   573,   559,    -1,   216,   566,
     567,     3,   568,   463,   559,    -1,   575,    -1,    -1,    86,
       3,   576,   577,   579,   580,   581,    -1,    -1,   417,   578,
     418,    -1,     3,    -1,   578,   419,     3,    -1,   136,    -1,
     245,    -1,     4,    -1,   236,    -1,   237,    -1,    -1,   582,
      -1,   277,   417,   582,   418,    -1,   417,   582,   418,    -1,
     583,    -1,   582,   419,   583,    -1,   135,    87,    -1,   135,
     249,    -1,    99,     4,    -1,   143,    -1,   143,     6,    -1,
     193,     4,    -1,   242,     4,    -1,    87,    -1,   584,    -1,
     258,   585,   486,   240,   586,   464,   474,   477,   636,    -1,
      -1,   566,   176,    -1,   566,   154,    -1,     3,    20,   424,
      -1,     3,   416,     3,    20,   424,    -1,   586,   419,     3,
      20,   424,    -1,   586,   419,     3,   416,     3,    20,   424,
      -1,   208,   252,     3,   245,     3,    -1,   587,    -1,    73,
      95,   588,     3,    -1,    73,   227,   588,     3,    -1,   108,
      95,     3,    -1,   108,    95,   156,   281,     3,    -1,   108,
     227,     3,    -1,   108,   227,   156,   281,     3,    -1,    -1,
     156,   281,    -1,   589,    -1,    73,   102,     3,    51,   610,
      -1,    73,   102,     3,    51,   610,   113,   424,    -1,    73,
     102,     3,    51,   610,    18,   193,    -1,    73,   102,     3,
      51,   610,    78,   417,   424,   418,    -1,    73,   102,     3,
      51,   610,    18,   193,    78,   417,   424,   418,    -1,   590,
      -1,   267,     3,    -1,   267,    95,     3,    -1,   591,    -1,
      73,   596,   252,   588,     3,   417,   597,   418,   593,   592,
      -1,    -1,   172,   417,     3,   418,    -1,    73,   596,   252,
     588,     3,   416,     3,   417,   597,   418,   593,    -1,    73,
     596,   252,   588,     3,   351,    94,     3,   140,   271,   136,
     417,     5,   418,   245,   417,     5,   418,    -1,    -1,   593,
      48,    20,     5,    -1,   593,    48,     5,    -1,   593,   197,
       3,   107,     3,    -1,   593,   197,     3,   248,     3,    -1,
     593,   228,    63,   268,   417,     3,   418,   229,     5,    -1,
     593,   228,    63,   204,   417,     3,   418,   417,   594,   418,
      -1,   593,   351,    63,   204,   417,     3,   418,    -1,   595,
      -1,   594,   419,   595,    -1,   228,     3,   271,   174,   250,
       4,   197,   191,     5,    -1,   228,     3,   271,   174,   250,
     184,   197,   191,     5,    -1,    73,   596,   252,   588,     3,
     417,   597,   418,   612,    -1,    73,   596,   252,   588,     3,
     612,    -1,    73,   596,   252,   588,     3,   416,     3,   417,
     597,   418,   612,    -1,    73,   596,   252,   588,     3,   416,
       3,   612,    -1,    -1,   246,    -1,   247,   246,    -1,   598,
      -1,   597,   419,   598,    -1,   201,   164,   417,   599,   418,
      -1,    71,     3,   201,   164,   417,   599,   418,    -1,   164,
     417,   481,   418,    -1,   155,   417,   481,   418,    -1,   138,
     155,   417,   481,   418,    -1,   138,   164,   417,   481,   418,
      -1,    78,   417,   424,   418,    -1,    71,     3,    78,   417,
     424,   418,    -1,   134,   164,   417,   600,   418,   207,     3,
     417,   601,   418,   602,    -1,   134,   164,   417,   600,   418,
     207,     3,   416,     3,   417,   601,   418,   602,    -1,    71,
       3,   134,   164,   417,   600,   418,   207,     3,   417,   601,
     418,   602,    -1,    71,     3,   134,   164,   417,   600,   418,
     207,     3,   416,     3,   417,   601,   418,   602,    -1,   261,
     417,   603,   418,    -1,    71,     3,   261,   417,   603,   418,
      -1,     3,    -1,   599,   419,     3,    -1,     3,    -1,   600,
     419,     3,    -1,     3,    -1,   601,   419,     3,    -1,    -1,
     602,   197,   107,    74,    -1,   602,   197,   107,   240,   193,
      -1,   602,   197,   107,   210,    -1,   602,   197,   107,   240,
     113,    -1,   602,   197,   258,    74,    -1,   602,   197,   258,
     240,   193,    -1,   602,   197,   258,   210,    -1,   602,   197,
     258,   240,   113,    -1,   602,   197,   107,   192,    -1,   602,
     197,   258,   192,    -1,   602,   183,   137,    -1,   602,   183,
     235,    -1,   602,   183,   200,    -1,   602,    97,    -1,   602,
      18,    97,    -1,   602,    97,   151,    98,    -1,   602,    97,
     151,   149,    -1,     3,    -1,   603,   419,     3,    -1,    -1,
     604,     3,   610,   605,    -1,    -1,   605,    18,   193,    -1,
     605,   193,    -1,   605,   113,     4,    -1,   605,   113,     5,
      -1,   605,   113,     7,    -1,   605,   113,     6,    -1,   605,
     113,   333,   417,   418,    -1,   605,   113,   334,   417,   418,
      -1,   605,   113,   335,   417,   418,    -1,   605,   113,    72,
      -1,   605,   113,   417,   424,   418,    -1,   605,    48,    -1,
     605,    48,   417,     5,   419,     5,   418,    -1,   605,    48,
     417,     5,   418,    -1,   605,    53,   417,     5,   419,     5,
     418,    -1,   605,    53,   417,     5,   418,    -1,   605,    53,
      -1,   605,   261,   164,    -1,   605,   261,    -1,   605,   201,
     164,    -1,   605,   164,    -1,   605,    79,     4,    -1,   605,
      78,   417,   424,   418,    -1,   605,    71,     3,   261,    -1,
     605,    71,     3,   201,   164,    -1,   605,    71,     3,    78,
     417,   424,   418,    -1,   605,    56,    52,    51,   417,   424,
     418,    57,    -1,   605,    56,    52,    51,   417,   424,   418,
      58,    -1,   605,    56,    52,    51,   417,   424,   418,    -1,
     605,    51,   417,   424,   418,    57,    -1,   605,    51,   417,
     424,   418,    58,    -1,   605,    51,   417,   424,   418,    -1,
      -1,   417,     5,   418,    -1,   417,     5,   419,     5,   418,
      -1,    -1,    64,    -1,    -1,   608,   259,    -1,   608,   280,
      -1,    -1,   609,    82,   240,     4,    -1,   609,    83,     4,
      -1,    67,   606,    -1,   244,   606,   608,    -1,   239,   606,
     608,    -1,   189,   606,   608,    -1,   160,   606,   608,    -1,
     152,   606,   608,    -1,    66,   606,   608,    -1,   205,   606,
     608,    -1,   114,   606,   608,    -1,   132,   606,   608,    -1,
     116,   606,   608,    -1,   117,    -1,   257,    -1,   251,    -1,
     115,    -1,   278,    -1,    82,   606,   609,    -1,   270,   417,
       5,   418,   609,    -1,    64,   606,    -1,   272,   417,     5,
     418,    -1,   256,    -1,    61,    -1,   188,    -1,   182,    -1,
     243,   607,   609,    -1,   249,   607,   609,    -1,   185,   607,
     609,    -1,   175,   607,   609,    -1,   123,   417,   611,   418,
     609,    -1,   240,   417,   611,   418,   609,    -1,    62,    -1,
     262,    -1,   264,    -1,   273,   417,     5,   418,    -1,   610,
      36,   420,    -1,     4,    -1,   611,   419,     4,    -1,   613,
     491,   463,    -1,    -1,   154,    -1,   216,    -1,   614,    -1,
     240,   227,     3,    -1,   240,   227,   113,    -1,   240,   615,
      -1,   616,    -1,   615,   419,   616,    -1,     8,    20,   424,
      -1,     8,     9,   424,    -1,   617,    -1,    73,   202,     3,
     417,   618,   418,    51,    60,   622,   124,    -1,    73,   202,
       3,   417,   618,   418,    60,   622,   124,    -1,    73,    10,
     216,   202,     3,   417,   618,   418,    51,    60,   622,   124,
      -1,    73,    10,   216,   202,     3,   417,   618,   418,    60,
     622,   124,    -1,    73,   139,     3,   417,   618,   418,   213,
     621,    51,    60,   622,   124,    -1,    73,   139,     3,   417,
     618,   418,   213,   621,    60,   622,   124,    -1,    73,    10,
     216,   139,     3,   417,   618,   418,   213,   621,    51,    60,
     622,   124,    -1,    73,    10,   216,   139,     3,   417,   618,
     418,   213,   621,    60,   622,   124,    -1,    -1,   619,    -1,
     620,    -1,   619,   419,   620,    -1,     3,   610,    -1,    16,
       3,   610,    -1,   195,     3,   610,    -1,   150,     3,   610,
      -1,   152,    -1,   160,    -1,   270,    -1,   249,    -1,    62,
      -1,   132,    -1,   114,    -1,    66,    -1,   117,    -1,   251,
      -1,    -1,   622,   623,    -1,   622,    60,   622,   124,    -1,
     622,   156,   622,   124,   156,    -1,   622,   276,   622,   124,
     276,    -1,   622,   166,   622,   124,   166,    -1,   622,   131,
     622,   124,   131,    -1,   622,    77,   622,   124,    77,    -1,
       3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,
      20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,    -1,
      50,    -1,   241,    -1,   157,    -1,   258,    -1,   107,    -1,
     136,    -1,   274,    -1,   240,    -1,   159,    -1,   271,    -1,
      73,    -1,   108,    -1,   252,    -1,   155,    -1,   253,    -1,
     125,    -1,   119,    -1,    96,    -1,   101,    -1,    68,    -1,
     211,    -1,   165,    -1,   162,    -1,    70,    -1,   194,    -1,
     129,    -1,    69,    -1,   142,    -1,   127,    -1,   195,    -1,
     150,    -1,   140,    -1,    54,    -1,   218,    -1,   209,    -1,
     126,    -1,   220,    -1,    59,    -1,   118,    -1,   217,    -1,
     219,    -1,    51,    -1,   197,    -1,   198,    -1,    63,    -1,
     141,    -1,   148,    -1,   179,    -1,   181,    -1,   163,    -1,
     177,    -1,   215,    -1,   153,    -1,   196,    -1,   137,    -1,
      76,    -1,   190,    -1,   266,    -1,   193,    -1,   113,    -1,
     201,    -1,   164,    -1,   261,    -1,    78,    -1,   134,    -1,
     207,    -1,    74,    -1,   210,    -1,   192,    -1,   152,    -1,
     160,    -1,   270,    -1,   249,    -1,    62,    -1,   132,    -1,
     114,    -1,    66,    -1,   117,    -1,   251,    -1,   239,    -1,
     116,    -1,    82,    -1,   262,    -1,    61,    -1,   260,    -1,
     122,    -1,   158,    -1,    40,    -1,   106,    -1,   281,    -1,
     275,    -1,   277,    -1,   202,    -1,   139,    -1,   213,    -1,
     417,    -1,   418,    -1,   419,    -1,   415,    -1,   416,    -1,
      26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,
      17,    -1,   421,    -1,   322,    -1,   323,    -1,   324,    -1,
     325,    -1,   326,    -1,     8,    -1,   624,    -1,   108,   202,
       3,    -1,   108,   202,   156,   281,     3,    -1,   108,   139,
       3,    -1,   108,   139,   156,   281,     3,    -1,   625,    -1,
      68,     3,   417,   418,    -1,    68,     3,   417,   626,   418,
      -1,   627,    -1,   626,   419,   627,    -1,     5,    -1,     4,
      -1,     7,    -1,   193,    -1,     6,    -1,     3,    -1,     8,
      -1,   628,    -1,    73,   219,     3,   629,   630,   197,     3,
     140,   118,   217,    60,   622,   124,    -1,    59,    -1,    39,
      -1,   157,    -1,   258,    -1,   107,    -1,   631,    -1,   108,
     219,     3,    -1,   108,   219,   156,   281,     3,    -1,    37,
     219,     3,   120,    -1,    37,   219,     3,   100,    -1,   632,
      -1,    73,   371,   588,     3,   633,    -1,    -1,   633,   634,
      -1,   376,   277,     5,    -1,   376,     5,    -1,   377,    63,
       5,    -1,   377,     5,    -1,   378,     5,    -1,   184,     5,
      -1,   379,    -1,    18,   379,    -1,   635,    -1,   108,   371,
       3,    -1,   108,   371,   156,   281,     3,    -1,    37,   371,
       3,   633,    -1,    37,   371,     3,    55,    -1,    37,   371,
       3,    55,   277,     5,    -1,    37,   371,     3,   208,   245,
       3,    -1,    -1,   212,    28,    -1,   212,   637,    -1,     3,
      -1,   637,   419,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   498,   498,   499,   504,   511,   512,   513,   527,   528,
     556,   564,   572,   578,   586,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   611,   611,   620,   620,   622,   622,
     624,   624,   629,   631,   635,   636,   637,   638,   639,   642,
     643,   646,   655,   673,   682,   702,   702,   762,   771,   778,
     782,   784,   786,   791,   796,   801,   809,   811,   813,   815,
     817,   819,   821,   823,   825,   827,   834,   845,   856,   857,
     860,   860,   861,   861,   862,   862,   870,   870,   878,   878,
     889,   893,   894,   895,   896,   897,   898,   899,   900,   904,
     904,   906,   906,   908,   908,   911,   911,   913,   913,   915,
     915,   917,   917,   919,   919,   921,   921,   924,   924,   926,
     926,   928,   928,   930,   930,   932,   932,   934,   934,   936,
     936,   938,   938,   941,   941,   943,   943,   945,   945,   949,
     950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     980,   981,   982,   984,   985,   986,   987,   988,   989,   990,
     991,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1016,  1017,  1018,  1019,  1020,  1022,  1023,
    1025,  1026,  1027,  1029,  1030,  1031,  1032,  1039,  1046,  1053,
    1057,  1061,  1065,  1069,  1073,  1079,  1080,  1081,  1084,  1090,
    1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1108,
    1110,  1112,  1114,  1118,  1126,  1137,  1138,  1141,  1142,  1145,
    1153,  1161,  1169,  1183,  1193,  1194,  1208,  1224,  1225,  1226,
    1227,  1230,  1237,  1245,  1246,  1247,  1250,  1251,  1254,  1255,
    1259,  1260,  1263,  1265,  1269,  1270,  1273,  1275,  1279,  1280,
    1283,  1284,  1287,  1293,  1300,  1309,  1310,  1311,  1312,  1322,
    1323,  1327,  1328,  1329,  1330,  1331,  1334,  1335,  1338,  1339,
    1342,  1343,  1344,  1345,  1346,  1347,  1348,  1349,  1350,  1353,
    1354,  1355,  1363,  1369,  1370,  1371,  1374,  1375,  1378,  1379,
    1383,  1391,  1401,  1402,  1403,  1412,  1417,  1423,  1431,  1435,
    1435,  1475,  1476,  1480,  1482,  1484,  1486,  1488,  1492,  1493,
    1494,  1497,  1498,  1501,  1502,  1505,  1506,  1507,  1510,  1511,
    1514,  1515,  1519,  1521,  1523,  1525,  1528,  1529,  1532,  1533,
    1536,  1540,  1550,  1558,  1559,  1560,  1561,  1565,  1569,  1571,
    1575,  1575,  1577,  1582,  1589,  1596,  1608,  1609,  1610,  1614,
    1621,  1628,  1636,  1646,  1654,  1664,  1672,  1681,  1690,  1700,
    1708,  1717,  1726,  1736,  1745,  1762,  1770,  1782,  1783,  1797,
    1798,  1801,  1802,  1814,  1824,  1829,  1834,  1840,  1847,  1854,
    1861,  1871,  1878,  1887,  1894,  1900,  1908,  1914,  1922,  1923,
    1924,  1925,  1926,  1942,  1943,  1944,  1953,  1954,  1958,  1968,
    1984,  1985,  1989,  1997,  2006,  2029,  2030,  2031,  2035,  2052,
    2074,  2075,  2080,  2089,  2103,  2112,  2138,  2139,  2140,  2141,
    2142,  2143,  2144,  2148,  2155,  2167,  2170,  2171,  2175,  2176,
    2180,  2182,  2187,  2195,  2204,  2216,  2228,  2243,  2244,  2249,
    2263,  2273,  2287,  2301,  2309,  2320,  2326,  2337,  2343,  2350,
    2356,  2372,  2379,  2388,  2396,  2402,  2417,  2419,  2423,  2432,
    2445,  2447,  2451,  2456,  2463,  2468,  2476,  2480,  2481,  2485,
    2497,  2508,  2509,  2510,  2514,  2515,  2516,  2517,  2518,  2519,
    2522,  2524,  2528,  2529,  2532,  2534,  2537,  2539,  2543,  2550,
    2559,  2565,  2571,  2578,  2584,  2591,  2597,  2603,  2609,  2615,
    2621,  2627,  2633,  2639,  2645,  2651,  2657,  2663,  2669,  2675,
    2681,  2694,  2704,  2714,  2726,  2727,  2728,  2731,  2739,  2745,
    2758,  2759,  2759,  2763,  2764,  2767,  2768,  2769,  2773,  2774,
    2774,  2778,  2786,  2796,  2797,  2798,  2799,  2800,  2803,  2803,
    2806,  2807,  2810,  2820,  2833,  2834,  2834,  2837,  2838,  2839,
    2840,  2843,  2847,  2848,  2849,  2850,  2856,  2859,  2865,  2870,
    2876,  2880,  2880,  2885,  2886,  2888,  2889,  2893,  2894,  2898,
    2899,  2900,  2903,  2904,  2905,  2906,  2910,  2911,  2915,  2916,
    2917,  2918,  2919,  2920,  2921,  2922,  2926,  2934,  2943,  2944,
    2945,  2949,  2960,  2972,  2983,  2998,  3003,  3007,  3008,  3012,
    3014,  3016,  3018,  3022,  3023,  3029,  3033,  3035,  3037,  3039,
    3041,  3046,  3050,  3051,  3055,  3064,  3077,  3078,  3086,  3094,
    3102,  3103,  3104,  3105,  3106,  3107,  3109,  3111,  3115,  3116,
    3119,  3134,  3141,  3156,  3169,  3184,  3197,  3198,  3199,  3202,
    3203,  3206,  3207,  3208,  3209,  3210,  3211,  3212,  3213,  3214,
    3216,  3218,  3220,  3222,  3224,  3228,  3229,  3232,  3233,  3236,
    3237,  3240,  3241,  3242,  3243,  3244,  3245,  3246,  3247,  3248,
    3249,  3250,  3251,  3252,  3253,  3254,  3255,  3256,  3257,  3260,
    3261,  3264,  3264,  3274,  3275,  3276,  3277,  3278,  3279,  3280,
    3281,  3282,  3283,  3284,  3285,  3292,  3293,  3294,  3295,  3296,
    3297,  3298,  3299,  3300,  3301,  3302,  3303,  3304,  3305,  3306,
    3307,  3308,  3309,  3310,  3311,  3312,  3315,  3316,  3317,  3320,
    3321,  3324,  3325,  3326,  3329,  3330,  3331,  3335,  3336,  3337,
    3338,  3339,  3340,  3341,  3342,  3343,  3344,  3345,  3346,  3347,
    3348,  3349,  3350,  3351,  3352,  3353,  3354,  3355,  3356,  3357,
    3358,  3359,  3360,  3361,  3362,  3363,  3364,  3365,  3366,  3367,
    3368,  3369,  3372,  3373,  3376,  3389,  3390,  3391,  3395,  3398,
    3399,  3400,  3401,  3401,  3403,  3404,  3412,  3416,  3422,  3428,
    3435,  3442,  3448,  3454,  3461,  3470,  3471,  3474,  3475,  3478,
    3479,  3480,  3481,  3484,  3485,  3486,  3487,  3488,  3489,  3490,
    3491,  3492,  3493,  3500,  3501,  3502,  3503,  3504,  3505,  3506,
    3507,  3510,  3511,  3512,  3512,  3512,  3513,  3513,  3513,  3513,
    3513,  3513,  3514,  3514,  3514,  3514,  3514,  3514,  3514,  3514,
    3514,  3515,  3515,  3515,  3515,  3515,  3515,  3515,  3516,  3516,
    3516,  3516,  3517,  3517,  3517,  3517,  3517,  3517,  3517,  3517,
    3517,  3517,  3517,  3517,  3518,  3518,  3518,  3518,  3518,  3518,
    3518,  3518,  3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,
    3520,  3520,  3520,  3520,  3520,  3520,  3520,  3520,  3520,  3521,
    3521,  3521,  3521,  3521,  3521,  3521,  3521,  3522,  3522,  3522,
    3523,  3523,  3523,  3523,  3523,  3523,  3523,  3523,  3524,  3524,
    3524,  3524,  3524,  3524,  3524,  3525,  3525,  3525,  3525,  3525,
    3525,  3525,  3526,  3526,  3526,  3526,  3527,  3527,  3527,  3527,
    3527,  3527,  3527,  3527,  3527,  3527,  3527,  3527,  3528,  3528,
    3528,  3528,  3528,  3529,  3536,  3540,  3546,  3552,  3558,  3570,
    3574,  3580,  3588,  3589,  3592,  3593,  3594,  3595,  3596,  3597,
    3598,  3605,  3609,  3617,  3618,  3621,  3622,  3623,  3626,  3630,
    3636,  3645,  3653,  3664,  3668,  3677,  3678,  3682,  3683,  3684,
    3685,  3686,  3687,  3688,  3689,  3692,  3696,  3702,  3712,  3719,
    3726,  3734,  3744,  3745,  3746,  3749,  3750
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
  "SEARCH", "NAMESPACE", "NAMESPACES", "PREFIX", "NS", "SYSTEM_TIME",
  "TRANSACTION", "FEVO_CURRENT_XID", "';'", "'.'", "'('", "')'", "','",
  "']'", "'='", "$accept", "stmt_list", "expr", "@1", "@2", "@3", "@4",
  "val_list", "array_val_list", "@5", "any_array_arg", "opt_val_list",
  "@6", "@7", "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16",
  "@17", "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26",
  "@27", "@28", "@29", "@30", "trim_ltb", "interval_exp", "case_list",
  "stmt", "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_window_partition",
  "window_partition_list", "opt_window_orderby", "window_orderby_list",
  "opt_orderby", "orderby_list", "orderby_item", "opt_limit",
  "opt_for_system_time", "opt_for_update", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "opt_as_alias",
  "table_references", "table_reference", "table_factor",
  "lateral_subquery", "@31", "opt_as", "join_table", "opt_inner_cross",
  "opt_outer", "left_or_right", "opt_left_or_right_outer",
  "opt_join_condition", "join_condition", "index_hint", "opt_for_join",
  "index_list", "table_subquery", "delete_stmt", "delete_opts",
  "delete_list", "opt_dot_star", "drop_table_stmt", "opt_drop_cascade",
  "create_index_stmt", "opt_hnsw_opclass", "opt_hnsw_with",
  "hnsw_with_list", "hnsw_with_item", "index_col_list", "index_expr",
  "drop_index_stmt", "truncate_table_stmt", "truncate_extra_tables",
  "opt_truncate_options", "create_checkpoint_store_stmt", "opt_ck_with",
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
     655,   656,   657,   658,   659,    59,    46,    40,    41,    44,
      93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   422,   423,   423,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   425,   424,   426,   424,   427,   424,
     428,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   429,   429,   430,   430,   431,   424,   424,   424,   432,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   433,   433,
     434,   424,   435,   424,   436,   424,   437,   424,   438,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   439,
     424,   440,   424,   441,   424,   442,   424,   443,   424,   444,
     424,   445,   424,   446,   424,   447,   424,   448,   424,   449,
     424,   450,   424,   451,   424,   452,   424,   453,   424,   454,
     424,   455,   424,   456,   424,   457,   424,   458,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   459,   459,   459,   424,   424,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   424,
     424,   424,   424,   461,   461,   424,   424,   424,   424,   424,
     424,   424,   424,   462,   463,   463,   463,   464,   464,   465,
     465,   466,   466,   467,   467,   467,   468,   468,   469,   469,
     470,   470,   471,   471,   472,   472,   473,   473,   474,   474,
     475,   475,   476,   476,   476,   477,   477,   477,   477,   478,
     478,   479,   479,   479,   479,   479,   480,   480,   481,   481,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   483,
     483,   483,   484,   485,   485,   485,   486,   486,   487,   487,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   490,
     489,   491,   491,   492,   492,   492,   492,   492,   493,   493,
     493,   494,   494,   495,   495,   496,   496,   496,   497,   497,
     498,   498,   499,   499,   499,   499,   500,   500,   501,   501,
     502,   462,   503,   504,   504,   504,   504,   503,   505,   505,
     506,   506,   503,   462,   507,   507,   508,   508,   508,   462,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   510,   510,   511,
     511,   512,   512,   513,   514,   514,   514,   515,   515,   515,
     515,   462,   516,   462,   517,   517,   518,   518,   519,   519,
     519,   519,   519,   462,   462,   462,   462,   462,   520,   520,
     521,   521,   522,   522,   522,   462,   462,   462,   523,   523,
     524,   524,   525,   525,   526,   526,   462,   462,   462,   462,
     462,   462,   462,   527,   527,   528,   529,   529,   530,   530,
     531,   531,   532,   532,   532,   533,   533,   534,   534,   535,
     536,   536,   537,   538,   538,   539,   539,   540,   540,   541,
     541,   462,   542,   462,   543,   543,   544,   544,   544,   545,
     546,   546,   546,   546,   547,   547,   462,   462,   462,   548,
     548,   549,   549,   549,   550,   550,   550,   550,   550,   550,
     551,   551,   552,   552,   553,   553,   554,   554,   555,   555,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   557,   557,   557,   462,   558,   558,
     559,   560,   559,   561,   561,   562,   562,   562,   563,   564,
     563,   565,   565,   566,   566,   566,   566,   566,   567,   567,
     568,   568,   569,   569,   570,   571,   570,   572,   572,   572,
     572,   558,   573,   573,   573,   573,   462,   574,   574,   574,
     462,   576,   575,   577,   577,   578,   578,   579,   579,   580,
     580,   580,   581,   581,   581,   581,   582,   582,   583,   583,
     583,   583,   583,   583,   583,   583,   462,   584,   585,   585,
     585,   586,   586,   586,   586,   462,   462,   587,   587,   462,
     462,   462,   462,   588,   588,   462,   589,   589,   589,   589,
     589,   462,   590,   590,   462,   591,   592,   592,   591,   591,
     593,   593,   593,   593,   593,   593,   593,   593,   594,   594,
     595,   595,   591,   591,   591,   591,   596,   596,   596,   597,
     597,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   599,   599,   600,   600,   601,
     601,   602,   602,   602,   602,   602,   602,   602,   602,   602,
     602,   602,   602,   602,   602,   602,   602,   602,   602,   603,
     603,   604,   598,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   606,   606,   606,   607,
     607,   608,   608,   608,   609,   609,   609,   610,   610,   610,
     610,   610,   610,   610,   610,   610,   610,   610,   610,   610,
     610,   610,   610,   610,   610,   610,   610,   610,   610,   610,
     610,   610,   610,   610,   610,   610,   610,   610,   610,   610,
     610,   610,   611,   611,   612,   613,   613,   613,   462,   614,
     614,   614,   615,   615,   616,   616,   462,   617,   617,   617,
     617,   617,   617,   617,   617,   618,   618,   619,   619,   620,
     620,   620,   620,   621,   621,   621,   621,   621,   621,   621,
     621,   621,   621,   622,   622,   622,   622,   622,   622,   622,
     622,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   462,   624,   624,   624,   624,   462,
     625,   625,   626,   626,   627,   627,   627,   627,   627,   627,
     627,   462,   628,   629,   629,   630,   630,   630,   462,   631,
     631,   462,   462,   462,   632,   633,   633,   634,   634,   634,
     634,   634,   634,   634,   634,   462,   635,   635,   462,   462,
     462,   462,   636,   636,   636,   637,   637
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
       4,     6,     4,     6,     3,     3,     6,     6,     6,     6,
       4,     4,     4,     3,     3,    10,    12,    12,     0,     1,
       0,     6,     0,     7,     0,     6,     0,     7,     0,     5,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     0,
       9,     0,     9,     0,     9,     0,    10,     0,    10,     0,
      10,     0,    10,     0,    10,     0,    10,     0,    10,     0,
      12,     0,    14,     0,    14,     0,    10,     0,    12,     0,
      14,     0,    14,     0,    10,     0,     9,     0,     9,     8,
       6,     6,     8,     4,     7,     6,     4,     4,     4,     6,
       8,     6,     6,     6,     8,     8,     4,     6,     6,     6,
       4,     4,     4,     6,     4,     6,     4,     6,     3,     4,
       4,     4,     3,     3,     6,     4,     4,     4,     4,     4,
       4,     6,     4,     4,     4,     4,     4,     4,     4,     4,
       8,     8,     8,     6,     6,     8,     8,     6,    10,     4,
       6,     8,     4,     4,     4,     6,     8,     3,     6,     6,
       6,     6,     8,     3,     8,    10,     3,     3,     3,     3,
       3,     1,     1,     4,     6,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     1,     1,     3,    13,    12,     0,     2,     0,
       4,     2,     4,     0,     1,     1,     0,     2,     0,     2,
       0,     3,     1,     3,     0,     3,     2,     4,     0,     3,
       1,     3,     2,     4,     2,     0,     2,     4,     4,     0,
       6,     0,     2,     2,     4,     4,     0,     2,     1,     3,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     2,     2,     1,     0,     1,     3,     1,     1,
       3,     4,     5,     3,     3,     4,     6,     9,     3,     0,
       5,     1,     0,     5,     3,     5,     6,     5,     0,     1,
       1,     0,     1,     1,     1,     2,     2,     0,     0,     1,
       2,     4,     6,     6,     6,     0,     2,     0,     1,     3,
       3,     1,     8,     2,     2,     2,     0,     6,     2,     4,
       0,     2,     7,     1,     4,     6,     0,     1,     1,     1,
       8,     9,    10,     9,    11,    10,    12,    11,    13,     9,
      11,    10,    12,    11,    12,    12,    14,     0,     1,     0,
       4,     1,     3,     3,     1,     3,     1,     4,     4,     4,
       6,     1,     3,     2,     3,     5,     1,     3,     0,     2,
       2,     3,     3,     1,     1,     1,     1,     1,     5,     7,
       0,     6,     4,     5,     6,     1,     1,     1,    20,    21,
       1,     1,     6,     8,     6,     8,     1,     1,     1,     1,
       1,     1,     1,     6,     8,     0,     0,     4,     1,     3,
       3,     3,     4,     5,     6,    12,    14,     1,     1,    12,
       6,     8,    12,     5,     7,     2,     3,     2,     2,     2,
       4,     1,     3,     1,     4,     6,     0,     4,     4,     2,
       0,     4,     7,     4,     1,     3,     1,     1,     1,    10,
      12,     0,     2,     2,     0,     2,     2,     2,     2,     2,
       0,     2,     1,     3,     0,     4,     0,     5,     5,     7,
      10,    10,    17,    12,    19,    11,     6,     8,     6,     6,
       6,     9,     6,     5,     8,     7,     9,     8,    10,     9,
       7,     7,     8,     8,     0,     1,     2,     1,    10,     6,
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
       4,     3,     1,     3,     3,     0,     1,     1,     1,     3,
       3,     2,     1,     3,     3,     3,     1,    10,     9,    12,
      11,    12,    11,    14,    13,     0,     1,     1,     3,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     4,     5,     5,     5,     5,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     3,     5,     3,     5,     1,
       4,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,    13,     1,     1,     1,     1,     1,     1,     3,
       5,     4,     4,     1,     5,     0,     2,     3,     2,     3,
       2,     2,     2,     1,     2,     1,     3,     5,     4,     4,
       6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   666,     0,   366,     0,   563,     0,
       0,     0,     0,     0,   563,     0,   300,     0,   618,     0,
       0,     0,     0,     0,   253,   361,   373,   379,   411,   418,
     426,   427,   435,   436,   437,   446,   447,   448,   449,   450,
     451,   452,   423,   424,   425,   481,   483,     0,   497,   498,
     496,   547,   586,   590,   616,   626,   635,   641,   644,   798,
     806,   964,   969,   981,   988,   993,  1005,     0,     0,     0,
       0,   489,     0,     0,   633,     0,     0,     0,     0,     0,
       0,     0,   633,   667,     0,     0,   633,     0,     0,     0,
     591,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   569,   475,   479,   477,   478,     0,     0,
     569,     0,     0,   801,   802,     0,     0,     0,     0,   642,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,   413,   486,     0,     0,   995,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   668,     0,     0,     0,     0,   633,   593,   370,     0,
     365,   363,   364,     0,   629,     0,   967,     0,   412,   965,
       0,   989,     0,     0,   631,     0,   376,     0,  1006,     0,
       0,     0,   565,   566,   567,   568,   564,     0,   476,     0,
     482,     0,     0,     0,     0,   799,   800,     0,     4,     9,
      10,    12,    11,     8,     0,     0,     0,   311,   301,   249,
       0,   250,   251,     0,   302,   303,   304,     0,    13,   252,
     306,   308,   307,   305,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     221,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   315,   254,   309,   414,   620,   619,   315,     0,     0,
       0,     0,     0,   316,   318,   332,   319,   332,   643,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,   419,   420,     0,     0,   490,   992,   991,     0,     0,
       0,     0,     0,     0,     0,     0,  1009,     0,  1008,     0,
     979,   975,   974,   978,   976,   980,   977,   970,     0,   972,
       0,     0,   634,   627,     0,     0,   815,     0,     0,     0,
       0,   815,   984,   983,     0,     0,   628,     0,     0,     0,
     995,   430,     0,   455,     0,     0,     0,     0,     0,   368,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     377,   378,   374,     0,     0,   432,     0,   462,     0,   570,
     480,     0,   570,   805,   804,   803,     0,    78,     0,    32,
      31,    20,     0,     0,     0,     0,     0,    55,    88,     0,
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
       0,     0,   314,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   312,
       0,     0,     0,     0,     0,   355,   329,   315,     0,     0,
       0,     0,     0,   340,   339,   343,   347,   344,     0,     0,
     341,   331,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,   421,     0,   486,     0,     0,   484,
       0,     0,     0,     0,     0,     0,   533,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1003,   996,     0,     0,   971,     0,
       0,     0,   778,   787,   746,   746,   746,   746,   746,   771,
     746,   768,     0,   746,   746,   746,   749,   780,   749,   779,
     746,   746,   746,     0,   749,   746,   749,   770,   777,   769,
     788,   789,     0,     0,     0,   772,   636,     0,     0,     0,
       0,     0,     0,   816,   817,     0,     0,     0,     0,     0,
     987,   985,   986,     0,   501,     0,     0,     0,     0,     0,
     994,     0,   428,     0,   456,     0,   795,   595,     0,   597,
     598,     0,   371,     0,   278,     0,   257,   370,   630,   968,
     966,   990,   518,     0,   632,   376,  1007,   433,     0,   463,
       0,     0,     0,     0,   625,     0,     0,     5,    51,    79,
       0,    48,     0,     0,   241,     0,     0,     6,     0,    57,
       0,     0,     0,   227,   225,   226,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,     0,     0,     0,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,   217,   218,   219,
     220,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   207,     0,     0,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    21,
      23,    24,    22,   247,   245,    46,     0,    44,   213,    80,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    33,
      74,    73,    25,    26,    28,    14,    15,    16,    17,    18,
      19,    27,    30,    29,     0,   313,   289,     0,   310,   416,
     415,   315,     0,     0,     0,   320,     0,   355,     0,   360,
     328,     0,   257,   317,   341,   341,     0,   334,     0,   342,
       0,   324,   323,     0,     0,     0,     0,     0,     0,     0,
     473,     0,     0,   490,     0,     0,     0,     0,     0,     0,
     529,     0,   526,   532,   528,     0,   713,     0,     0,     0,
       0,   530,  1010,  1011,  1004,  1002,   998,     0,  1000,     0,
    1001,     0,     0,   973,   815,   815,     0,   775,   751,   757,
     754,   751,   751,     0,   751,   751,   751,   750,   754,   754,
     751,   751,   751,     0,   754,   751,   754,     0,     0,     0,
       0,     0,     0,     0,     0,   819,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   504,
       0,     0,     0,     0,     0,     0,   430,     0,   453,   455,
     796,   797,     0,     0,   711,   663,   332,   594,     0,   599,
     600,   601,   602,   258,     0,   285,   257,   367,   369,     0,
     375,   434,   464,     0,   550,   572,     0,     0,   549,   550,
       0,   550,     0,    90,     0,   239,     0,     0,     0,     0,
      53,     0,     0,     0,     0,   143,     0,     0,     0,     0,
       0,   175,   176,   177,   178,   179,   180,     0,     0,     0,
       0,   156,     0,     0,     0,   160,   161,   162,   164,     0,
       0,   166,     0,   169,   170,   171,     0,     0,     0,     0,
       0,     0,    97,    91,    92,    93,    94,    95,    96,   146,
     147,   148,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   182,   183,
     184,   185,   186,   187,   188,   189,     0,     0,     0,     0,
       0,     0,     0,     0,   199,     0,   202,   203,   204,     0,
      60,     0,    62,     0,     0,     0,     0,     0,    70,    71,
      72,     0,     0,     0,    47,    45,     0,     0,   248,   246,
      82,     0,     0,    40,    36,    38,     0,    58,     0,   257,
       0,     0,   355,   357,   357,   357,     0,   321,   325,     0,
       0,     0,   278,   345,   346,     0,     0,   348,     0,     0,
       0,   442,   444,     0,     0,     0,     0,   470,   487,   488,
     485,     0,     0,     0,     0,     0,     0,   713,   713,     0,
     541,   540,   544,   713,   535,     0,     0,   997,   999,     0,
       0,     0,     0,     0,   763,   773,   765,   767,   792,     0,
     766,   762,   761,   784,   783,   760,   764,   759,     0,   781,
     758,   782,     0,     0,     0,   638,   791,     0,   637,     0,
     820,   822,   821,     0,   818,     0,     0,   404,     0,     0,
       0,     0,     0,   406,     0,     0,     0,     0,     0,   833,
       0,   502,   503,     0,   510,   501,     0,     0,     0,     0,
       0,     0,   429,     0,   456,     0,   795,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   669,     0,     0,   596,
     615,     0,     0,   611,     0,     0,     0,     0,   592,   603,
     606,     0,     0,  1012,   372,   519,     0,     0,     0,   581,
     571,     0,     0,   550,   588,   550,   589,    52,   243,     0,
     242,     0,     0,     0,    56,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,   101,   103,     0,     0,     0,     0,     0,   135,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    59,     0,     0,
       0,     0,     0,     0,   259,   257,   417,   322,     0,     0,
       0,     0,   330,     0,   621,     0,     0,   285,   337,   335,
       0,     0,   333,   349,     0,   440,   441,     0,     0,     0,
       0,     0,   467,   468,     0,     0,   474,     0,   494,   493,
     491,     0,     0,     0,     0,   544,   544,   713,     0,     0,
     725,     0,   730,     0,     0,     0,     0,     0,   545,   734,
     715,     0,   732,   537,   544,   527,   534,   543,   542,     0,
       0,   747,     0,   752,   753,     0,     0,   754,     0,   754,
     754,   776,   790,     0,     0,     0,   827,   830,   829,   831,
     828,   823,   824,   826,   832,   825,     0,     0,     0,     0,
       0,     0,     0,   380,     0,     0,     0,     0,     0,     0,
     833,     0,     0,   505,   509,   507,   506,   508,     0,   514,
     504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,   454,     0,   711,   665,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   650,   711,     0,   794,   610,
     608,   609,   612,   613,   614,     0,     0,     0,   263,   263,
     279,   280,   286,     0,   362,   583,   582,     0,     0,   573,
     578,   577,     0,   575,   553,   587,   240,   244,     0,    54,
       0,   141,   140,     0,   145,     0,     0,   228,   229,   174,
     152,   153,     0,     0,   157,   158,   159,   163,   165,   167,
     208,   209,   210,   211,     0,    98,   107,   109,   105,   111,
     113,   115,   149,     0,     0,   151,   224,   270,   270,   270,
     117,     0,     0,   125,     0,     0,   133,   270,   270,   181,
       0,     0,     0,   193,   194,     0,     0,   197,     0,   200,
       0,   205,     0,    61,    63,    66,    67,    68,    69,     0,
       0,     0,    81,    85,     0,     0,    50,     0,     0,    42,
       0,    43,    35,     0,     0,   268,   259,   356,     0,     0,
       0,   326,     0,     0,     0,  1012,   350,     0,   336,     0,
       0,   443,   445,     0,     0,     0,   471,     0,     0,     0,
       0,     0,   709,     0,   531,   539,   544,   714,   546,     0,
       0,     0,     0,     0,     0,   735,   716,   717,   719,   718,
     723,     0,     0,     0,     0,   733,   731,   536,     0,     0,
     833,     0,     0,   756,   785,   793,   786,   774,     0,   639,
     381,     0,   833,     0,   397,     0,     0,     0,     0,   405,
       0,   389,     0,     0,     0,     0,     0,   841,   842,   843,
     845,   844,   963,   848,   849,   850,   956,   847,   846,   951,
     952,   953,   954,   955,   938,   851,   892,   883,   888,   833,
     934,   924,   895,   927,   870,   877,   874,   861,   917,   906,
     833,   914,   932,   868,   869,   939,   855,   862,   910,   926,
     931,   928,   889,   867,   936,   808,   866,   886,   879,   876,
     833,   925,   915,   856,   905,   944,   882,   896,   878,   897,
     881,   920,   903,   864,   833,   853,   937,   859,   921,   873,
     900,   912,   872,   833,   901,   898,   899,   907,   919,   909,
     875,   880,   904,   893,   894,   911,   943,   916,   885,   918,
     871,   945,   902,   890,   884,   891,   887,   930,   858,   852,
     923,   929,   863,   865,   854,   935,   913,   933,   908,   922,
     860,   857,   941,   833,   942,   940,   958,   959,   960,   961,
     962,   949,   950,   946,   947,   948,   957,   834,     0,   512,
     511,     0,   516,   510,     0,   383,     0,     0,     0,     0,
       0,     0,     0,     0,   457,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   298,     0,     0,     0,
       0,   646,   662,   670,   713,     0,   605,   607,   264,   265,
       0,   282,   284,     0,     0,     0,  1015,  1013,  1014,   551,
       0,   574,     0,     0,     0,  1012,     0,     0,     0,   144,
     231,   232,   233,   234,   237,   236,   238,   230,   235,     0,
       0,     0,   270,   270,   270,   270,   270,   270,     0,     0,
       0,   274,   274,   274,   270,     0,     0,     0,   270,     0,
       0,     0,   270,   274,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    87,    41,    37,
      39,     0,     0,     0,   278,   268,   358,     0,     0,     0,
       0,   622,   623,     0,   617,     0,     0,     0,     0,     0,
       0,   495,     0,   520,   687,     0,   685,     0,   521,     0,
     538,     0,     0,     0,     0,     0,     0,   737,     0,     0,
       0,     0,     0,     0,   833,     0,   748,   755,     0,   833,
       0,   385,   398,     0,   407,   408,   409,     0,     0,     0,
       0,     0,   382,   807,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   499,   514,     0,     0,   391,     0,
       0,     0,   431,   460,   461,   459,     0,   650,     0,     0,
       0,     0,   677,     0,     0,     0,   674,     0,   673,     0,
     683,     0,     0,     0,     0,     0,   645,   712,   604,   263,
     281,   288,   287,     0,     0,   585,   584,   580,   579,     0,
     555,   548,     7,   142,   139,   154,   155,   212,   274,   274,
     274,   274,   274,   274,   214,     0,   150,     0,     0,     0,
       0,     0,   274,   119,     0,     0,   274,   127,     0,     0,
     274,     0,     0,   190,   191,   192,   195,   196,     0,   201,
     206,     0,     0,     0,     0,   263,   266,   269,   285,   278,
     354,     0,   353,   352,     0,     0,   351,     0,     0,     0,
       0,     0,   492,     0,     0,     0,   525,     0,   710,   727,
       0,   745,   729,     0,     0,     0,   738,   736,   720,   721,
     722,   724,     0,   833,     0,   810,   640,     0,   812,   399,
       0,   393,   390,     0,   397,   835,     0,     0,     0,     0,
       0,   833,   513,     0,     0,   516,   387,     0,     0,     0,
     384,     0,   648,   664,     0,     0,     0,     0,     0,   675,
     676,   299,   671,   652,     0,     0,     0,     0,     0,   283,
    1016,     0,   552,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   272,   271,     0,   100,   102,   104,     0,
     270,     0,     0,     0,   270,     0,     0,     0,   136,   138,
       0,     0,     0,     0,   290,   261,     0,     0,   260,   291,
     285,   359,   327,   624,     0,     0,     0,     0,     0,   523,
       0,   688,   686,     0,   743,   744,     0,     0,     0,   833,
       0,   809,   811,     0,   395,   410,   386,     0,   840,   839,
     836,   838,   837,     0,   515,     0,   500,   394,   392,     0,
       0,   678,     0,     0,   684,     0,   651,     0,     0,     0,
       0,     0,     0,     0,     0,   576,     0,     0,   554,   108,
     110,   106,   112,   114,   116,   215,     0,   263,   275,   118,
     274,   121,   123,   126,   274,   129,   131,   134,   198,    75,
       0,     0,   267,   263,     0,   296,   256,     0,     0,   472,
     465,     0,   469,     0,   726,   728,   742,   739,     0,   814,
       0,   399,   982,     0,   388,     0,     0,   672,     0,   647,
     653,   654,     0,     0,     0,   561,     0,   556,     0,   558,
     559,   273,   276,     0,     0,   270,   270,     0,   270,   270,
       0,     0,   262,   293,   292,     0,   255,     0,     0,     0,
       0,   740,   741,   813,     0,     0,   401,   396,   517,     0,
       0,     0,     0,     0,     0,     0,     0,   557,     0,   263,
     120,   274,   274,   128,   274,   274,    76,    77,     0,     0,
     297,     0,     0,   466,   689,     0,     0,   400,     0,     0,
       0,     0,     0,     0,     0,   657,   562,     0,   277,     0,
       0,     0,     0,   295,   294,     0,     0,   691,     0,   403,
     402,     0,     0,     0,     0,   691,     0,     0,   560,   122,
     124,   130,   132,     0,     0,   522,   690,     0,     0,     0,
       0,   679,     0,     0,   658,   655,     0,     0,     0,   705,
       0,     0,   649,     0,   691,   691,     0,     0,   656,     0,
       0,     0,   706,   524,     0,   702,   704,   703,     0,     0,
       0,   681,   680,     0,   659,     0,     0,   707,   708,   692,
     700,   694,     0,   696,   701,   698,     0,   691,     0,   438,
       0,   695,   693,   699,   697,   682,     0,   439,     0,     0,
       0,     0,     0,     0,   660,   661
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,   758,  1196,  1438,  1440,  1436,   759,  1081,   770,
    1439,   760,  1186,  1432,  1187,  1433,   771,  1657,  1658,  1659,
    1994,  1992,  1993,  1995,  1996,  1997,  2004,  2300,  2445,  2446,
    2008,  2304,  2448,  2449,  2012,  1667,  1668,   777,  1371,   454,
      23,    24,   734,  1705,  2196,  1961,  2318,  2034,  2001,  2294,
    2169,  2388,  1055,  1600,  1601,  1343,  1199,  2405,  2456,  1947,
     115,   332,   333,   589,   342,   343,   344,   345,   926,   612,
     346,   609,   940,   610,   936,  1462,  1463,   925,  1449,  2037,
     347,    25,    91,   163,   419,    26,   432,    27,  2083,  2344,
    2465,  2466,  1292,  1293,    28,    29,   920,   131,    30,   722,
      31,    32,  1467,    33,    34,    35,   724,  1038,  1570,  1571,
      36,    37,  1474,    38,    39,    40,    41,    42,    43,    44,
      45,    46,   365,    47,   629,  1479,    48,  1029,  1304,  1559,
    1920,  1922,  2104,    49,    50,  1503,    51,  1349,  2144,  1975,
    2285,  2378,  2478,  2282,   103,   187,   753,  1066,  1353,  1973,
    1612,  1064,    52,    53,   157,   417,   728,   731,  1052,  1338,
    1339,  1340,    54,   118,   932,    55,   140,    56,    57,    58,
    2136,  1951,  2543,  2544,    89,  1325,  1326,  2057,  2055,  2495,
    2535,  1733,  1327,  1242,   987,   998,  1254,  1255,   696,  1259,
    1045,  1046,    59,   113,   114,    60,   702,   703,   704,  1536,
    1551,  1917,    61,    62,   388,   389,    63,   404,   713,    64,
      65,   378,   655,    66,  1604,  1968
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2346
static const yytype_int16 yypact[] =
{
   13227,  -138,   -55,   231, 13155,   296, -2346,   505, -2346,   534,
     624,   709,   297,   368, -2346,    51, -2346,   378,   617,   174,
     415,   -75,   637,   255, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346,   739, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346,   744,   763,   777,
     399, -2346,   381,   585,   662,   821,   675,   836,   105,   854,
     859,   865,   662, -2346,   629,   728,   662,   468,   498,   647,
   -2346,    53,   144,   148,   908,   165,   178,   934,   215,   240,
     251,   509,   551,   615,   769,   531, -2346, -2346,   955,   957,
     615,   724,   175,   545, -2346,  6569,   971,   640,    74, -2346,
     975,  -111,   834,   850,   857,   837,   866,   605,  1013, -2346,
   13227,   454,   129,   516,   548,   455,  1017,    64,    36,   757,
    1037,  1004,  1046,   648,   860,   510,   782,   661,   691,   885,
    1082, -2346,   108,  1106,   511,   517,   662,   683,   726,  1155,
   -2346, -2346, -2346,  -108, -2346,   879, -2346,   890, -2346, -2346,
     917, -2346,   935,   992, -2346,   966,   519,   972, -2346,   982,
     544,   560, -2346, -2346, -2346, -2346, -2346,  1233, -2346,  1277,
   -2346,  1038,  1288, 10489, 10489, -2346, -2346,  1355,   337, -2346,
   -2346, -2346, -2346,  1300, 10489, 10489, 10489, -2346, -2346, -2346,
    7745, -2346, -2346,   920, -2346, -2346, -2346,   948, -2346, -2346,
   -2346, -2346, -2346, -2346,  1347,   977,   995,  1001,  1009,  1027,
    1063,  1080,  1118,  1120,  1134,  1141,  1142,  1145,  1147,  1149,
    1151,  1152,  1153,  1160,  1161,  1162,  1163,  1164,  1165,  1166,
    1168,  1169,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1179,  1184,  1187,  1188,  1189,  1190,  1191,  1193,  1194,  1195,
    1196,  1197,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1206,
   -2346, -2346,  1207,  1210,  1211,  1220,  1224,  1225,  1226,  1230,
    1232,  1234,  1235,  1242,  1243,  1244,  1245,  1249,  1250,  1252,
    1253,  1254,  1255,  1256,  1257,  1259,  1260,  1263,  1264,  1266,
    1267,  1268,  1269,  1278,  1282,  1283,  1286,  1290,  1291,  1292,
    1294,  1295,  1296,  1297,  1298,  1299,  1303,  1305,  1306,  1308,
   10489, 13953,  -109, -2346,  1035,   643,   646,    58,  1309,  1568,
    1310,    72,  -130,   550, -2346,  1558, -2346,  1558, -2346,  1647,
    1504,  1672,  1714,  1715,  1725,  1727,  1716,  1465, -2346,  1680,
    1684, -2346, -2346,  1694,  1736,    50, -2346, -2346,   140,   188,
      23,   541,    79,   547,   638,  1677,  1466,  1506,   109,   631,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,   391, -2346,
    1746,  1753, -2346, -2346, 13577,  1561,    85,  1758,  1566,  1485,
    1768,    85, -2346, -2346,   248,    71, -2346,  1575,   578,  1492,
   -2346,  1497,  1494, -2346,  1496,  1776,  1779,    46,  1761, -2346,
    -121,   287,    74,  1794,  1795,  1796,  1797,  1798,    80,  1799,
   -2346, -2346, -2346,  1800,  1801,  1732,  1527,  1737,  1529,  -164,
   -2346,  1809,  -143, 14106, 14106, -2346,  1810, 10489, 10489,  1348,
    1348,  1778, 10489,  1328,    63,  1812,  1813,  1397, -2346, 10489,
    6961, 10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489,
    1401, 10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489,
   10489, 10489, 10489, 10489, 10489, 10489,  1413, 10489, 10489, 10489,
    1414, 10489, 10489, 10489, 10489, 10489, 10489,  8137, 10489, 10489,
   10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489,  1415,  1416,
    1418,  1422,  1424, 10489, 10489,  1426,  1433,  1434, 10489, 10489,
    1848,  1436,  1438, 10489, 10489, 10489, 10489, 10489, 10489, 10489,
   10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489,
   10489, 10489, 10489, 10489, 10489,  1440, 10489, 10489, 10489,  1441,
   10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489,
    1442,  9881, -2346, 10489, 10489, 10489, 10489, 10489,    20,  1444,
     807, 10489,  7353, 10489, 10489, 10489, 10489, 10489, 10489, 10489,
   10489, 10489, 10489, 10489, 10489, 10489, 10489, 10489,  1859, -2346,
      74,  1860, 10489,  1862,  1863,   450, -2346,   180, 10489,  1452,
     409,  1868,    74, -2346, -2346, -2346,   -21, -2346,    74,  1709,
    1678, -2346,  1870,  1872,  1605,  1875,  1480,  1481,  1610,  1614,
    1613,  1888,  1619, -2346, -2346,  1890,  1616,  1854,  1855, -2346,
    1897,  1898,  1903,  1904,  1905,  1907, -2346,  1908,  1909,  1910,
    1912, 13577,  1913,  1669,  1916,  1917,  1925,  1941,  1946,  1569,
    1957,    32,   533,  1975, -2346, -2346,  1765,  1766, -2346,   528,
    1567,  1571, -2346, -2346,  1572,  1572,  1572,  1572,  1572, -2346,
    1572, -2346,  1573,  1572,  1572,  1572,  1921, -2346,  1921, -2346,
    1572,  1572,  1572,  1574,  1921,  1572,  1921, -2346, -2346, -2346,
   -2346, -2346,  1576,  1577,  1578, -2346,   692,  1983, 13577,  1989,
    1993,  1995,  1579,  1580, -2346,  -154,  1997,  1998,  1805,  1593,
   -2346, -2346, -2346,  1832,  1980,  1636,  2030,  1838,  1755,  2034,
     109,  1621, -2346,  2036,  1763,  2038,  -114, -2346,   462, -2346,
   -2346,    48, -2346, 10489,  1844,    74,  -171,   726, -2346, -2346,
   -2346, -2346, -2346,  1652, -2346,   519, -2346, -2346,  2048, -2346,
    2049,  2050,  2051,   -45, -2346,  2050,   362, -2346,  1945, -2346,
    1637, 14106, 13486,   463, -2346, 10489, 10489, -2346,  1638, -2346,
   10489,  1816,   546, -2346, -2346, -2346,  9913,  8529,  1994,  2404,
    2726, 10201, 10230, 10314, 10507, 10570, 10602, -2346,  3050,  3374,
    3698,  4022, 10631,  4346,  4670,  4994, 10665, 10697, 10908,   665,
    5318, 10935,  5642, -2346, 10971, 11003, 11032, -2346, 14006,  5966,
    6290,  6670,  6706,  9821,  1640, 11066, 11098, 11125, 11152, 11179,
   11206, 11233, 11260,  6754,  6979,  7033, -2346, -2346, -2346, -2346,
   -2346, 11287,  7072,  1710,  1711,  1712,   822,   902,  1645,  1717,
    1718,  7169, 11318, 11345, 11372, 11404, 11433, 11467, 11499, 11526,
    7435,  7474,  7501,  7529,  7579,  7763,  7817,  7845,  1107, 11553,
   11580, 11607,  7876, -2346,  1154, 11634,  7931, -2346,  7961,  8165,
    8219,  8247, 11661, 11688, 11719,  8278,  8313,  8345, -2346, -2346,
    6797,  7390,  8626,  9845,  9845, -2346,    56, -2346, -2346,  1823,
   10489, 10489,  1648, 10489, 14040,  1649,  1654,  1655, 10489,  1301,
    1121,  1121,  1516,   997,  1192,   979,   979,   827,   827,   827,
     827,   751,  1778,  1778,   110, -2346,  -104,  1933, -2346, -2346,
    1656,   180,  1914,  1915,  1918, -2346,  1816,   450, 11746, -2346,
   -2346,    38,  -102,   550,  1678,  1678,  1920,  1877,    74, -2346,
    1922, -2346, -2346,  1659,  1806,  2077,  2080,  1675,  1670,  1682,
    1681,  2084,   842,    50,  1899,  1901,    18, 13577, 13577,  2092,
   -2346,  1879, -2346, -2346, -2346,  1880,  2063, 13577,  2101,  1861,
    1866, -2346, -2346, -2346, -2346, -2346, -2346,  2102, -2346,  2108,
   -2346,  2111,  2112, -2346,    85,    85,  2113, -2346, -2346, -2346,
   -2346, -2346, -2346,  2117, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346,  2117, -2346, -2346, -2346,  2119,  2120,  2121,
    1923,  1697,  1705, 10489,  1722,  2063, 13577, 13577, 13577,  1919,
      85,  -161,   189,  -112,  1930,  2125,   555,  2126,   667,  2001,
    2140,   -97,  2141,  2142,  1952,  1754,  1497,  1735, -2346, -2346,
   -2346, -2346,  2059,  2152,    21, -2346,  1558, -2346,  2158, -2346,
   -2346, -2346,   522, 14106,  2099,  1984,  -171, -2346, -2346,  2161,
   -2346, -2346, -2346,  2146,  -144, -2346,   489,  1750, -2346,  -144,
    1750,  1969, 10489, -2346, 10489, -2346, 10489, 13846, 13585,  2078,
    8547,  1752,  1756, 10489, 10489, -2346, 10489, 13765,  2012,  2012,
   10489, -2346, -2346, -2346, -2346, -2346, -2346, 10489, 10489, 10489,
   10489, -2346, 10489, 10489, 10489, -2346, -2346, -2346, -2346, 10489,
   10489, -2346, 10489, -2346, -2346, -2346, 13577, 13577, 10489, 10489,
   10489,  2171, -2346,  1826,  1827,  1828,  1829,  1833,  1835, -2346,
   -2346, -2346, 10489, 10489, 10489, -2346, 10489,  1769,  1770,  1771,
    1845,  2177,  1847,  2189,  1851,  1792,  1793, 10489, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, 10489, 10489, 10489, 10489,
   10489, 10489, 10489, 10489, -2346, 10489, -2346, -2346, -2346, 10489,
   -2346, 10489, -2346, 10489, 10489, 10489, 10489, 10489, -2346, -2346,
   -2346, 10489, 10489, 10489, -2346, -2346, 10489,  1816,  9845,  9845,
    1970, 14073, 10489, -2346, 10489, 10489,  1816, -2346,  1802,  1939,
      74,  2212,   450,  2079,  2079,  2079,  1803, -2346,   581, 10489,
    2214,  2215,  1844, -2346, -2346,    74, 10489,    31,    74,    59,
    1807,  1817,  2043,  2203,    69,  2205,  2223,  2053, -2346, -2346,
   -2346,  2225,  2225,  1818,  2065,  2066,  1822,  2063,  2063, 13577,
   -2346, -2346,  2041,  2063, -2346,  2230,  2238, -2346, -2346,  2028,
    2029,  1842,  1850,   523,   333,   861,   333,   333, -2346,   527,
     333,   333,   333,   861,   861,   333,   333,   333,   535,   861,
     333,   861,  1856,  1857,  1858,  2185, -2346, 10489, 14106,   189,
    2063,  2063,  2063,  1470, -2346,  1864,  1867, -2346,  1874,  1881,
    1882,  1883,   538, -2346,  2005,   189,  2262,   237,  2217, -2346,
    2139, -2346, -2346,    60,  2056,  1980,  2035,   189,   257,  2100,
    2301,  2285, -2346,   557,  1763,  2303,  -103,  2305,  1893,  2148,
     603,  1900,  1902,  2150,  1927,   554, -2346,  2312,  1816, -2346,
   -2346,  2314,    92,  2310,  2317,  2329,  1929,   518, -2346,  1932,
   -2346,   774, 10489,  2122, -2346, -2346,  8921,  2172,  2332, -2346,
   -2346,  2335,  9313,  -142, -2346,  -142, -2346, -2346, 14106, 13884,
   -2346, 10489,  1935, 10489, -2346, -2346, 10169,  1181, 11773, 10489,
   10489,  1924,  1936, 11805, 11834, 11868,  8601,  8657, 11900, 11927,
   11954, 11981, 12008, 12035,   -17,   -16, 12062, 12089,  8715,  1937,
    1940,  1942,  1943,  1948,  1949,  1950,  1246,  8747, 12120, 12147,
   -2346, -2346, -2346,  1951,   558,  1955,   561,  1956, -2346, -2346,
   12174,  8949,  9017,  9059, 12206, 12235,  9097,  9129,  1274,  1377,
    1409, 12269, 12301, 12328, 12355, 12382, 12409,  9331,  9385,  9419,
    1938,  1944, 10489,  1816, 10489,  1462,  1816, 14106,  1816,  1958,
    1816,  1959,  1960,  2302,  2222,  -171, -2346, -2346,  2195,  1963,
    1967,  1968, -2346,  2371, 14106,  2355,    62,  1984, -2346, 14106,
   10489,  1972, -2346, -2346,    31, -2346, -2346,  1974,    59,  2382,
    2389,  2383, -2346, -2346,  1976,  2393, -2346,  2394, -2346,  1979,
     228, 10489,  1985,  1986,  2405,  2041,  2041,  2063,  2216,  2407,
    2004,  2022,  2024,  2360,  2439,  2026,  2440,   112, -2346, -2346,
   -2346,  2281,  2282, -2346,  2041, -2346, -2346, -2346, -2346,  2234,
     708, -2346,  2443, -2346, -2346,  2209,  2446, -2346,  2447, -2346,
   -2346, -2346, -2346,  2046, 12436,   573, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346,   721,   189,  2462,  2464,
    2465,  2466,  2470, -2346,  2472,  2060,   580,  2061,   244,   189,
   -2346,  1628,  2358, -2346, -2346, -2346, -2346, -2346,  2476,  2219,
    2001,  2069,   582,  2220,   189,  2484,   319,  2485,  2471,  2473,
     616, -2346, -2346,  2350,    21, -2346,    26, 10489,  2075,  2081,
    2082,  2492,  2492,  2083,  2405,     9,    21, 13577, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346,   518,   618,   518,   -19,   559,
    2087, -2346,  1445,   711, -2346, -2346, 14106,  2239,  2481, -2346,
   -2346, 14106,   634, -2346,  2299, -2346, -2346, 14106,  2498, -2346,
   10489, -2346, -2346, 10489, -2346, 12463, 13558, -2346, -2346, -2346,
   -2346, -2346, 10489, 10489, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, 10489, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, 10489, 10489, -2346, -2346,  2156,  2156,  2156,
   -2346,  2153,   962, -2346,  2159,  1065, -2346,  2156,  2156, -2346,
   10489, 10489, 10489, -2346, -2346, 10489, 10489, -2346, 10489, -2346,
   10489, -2346, 10489, -2346, -2346, -2346, -2346, -2346, -2346, 10489,
   10489, 10489, -2346, -2346,  2093,  2094,  1462,  2103,  2107, -2346,
    2115, -2346, -2346,  2416,  2455,  2378,  2222, -2346,  2516,  2516,
    2516,  2118, 10489, 10489,  2526,  2122, 14106,  2492, -2346,    59,
    2123, -2346, -2346,  2522,    69,  2525, -2346,  2535,  2534, 12490,
    2537,  2538, -2346,   653, -2346, -2346,  2041, -2346, -2346,  2539,
   10489,  2547,  2502,     7, 10489, -2346, -2346, -2346, -2346, -2346,
   -2346,  2137,  2147,  2149, 10489, -2346, -2346, -2346,  1470,  2483,
   -2346,  2138,  2553, -2346,   861, -2346,   861,   861, 10489, -2346,
   -2346,  2499, -2346,   655,  2555,  2145,  2151,  2157,  2155, -2346,
     189, -2346,   189,  2160,  2165,   657,  2130, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,  2348, -2346,
    2168,  2167,  2315,  2056,   189, -2346,  2180,   668,  2181,  2321,
     189,  2182,  2594,  2597, -2346,   557,  2334,   670,  2186,  2444,
    2451,  2204, 12521,  2537,  2492,  2492, -2346,   672,   674,  2538,
     678,   -24, -2346, -2346,  2063,   680, -2346, -2346, -2346, -2346,
    2619, -2346, -2346,   774, 10489, 10489, -2346, -2346,  2206, -2346,
    9705, -2346, 10097,  2207,  2540,  2122,  2208, 12548, 12575, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, 12607,
   12636, 12670,  2156,  2156,  2156,  2156,  2156,  2156,  1911, 12702,
    2560,  2429,  2429,  2429,  2156,  2213,  2211,  2218,  2156,  2221,
    2224,  2227,  2156,  2429,  2429, 12729, 12756, 12783, 12810, 12837,
    9461, 12864, 12891,  9499,  9531,  9733, -2346, -2346, -2346, -2346,
   -2346,  2226, 10489, 10489,  1844,  2378, -2346,   684,   686,   688,
    2629, 14106, 14106,  2614, -2346,   693,  2235,    59,  2477,  2240,
    2479, -2346,  2610,  2622, -2346,   695, -2346,   697, -2346,  2634,
   -2346,   811, 12922,   814,  2241,  2243,  2493, -2346, 12949,  2244,
    2248,  2250, 12976,   722, -2346,  2454, -2346, -2346, 13008, -2346,
    2778, -2346, -2346,  2252, -2346, -2346, -2346,  2672,   816,   820,
     189,  2673, -2346, -2346,  3102,  3426,  3750,  4074,  4398,  4722,
    2617,  2675, 10489,  2601, -2346,  2219,   824,   189, -2346,   189,
    2263,   826, -2346, -2346, -2346, -2346,  2545,     9, 10489,  2265,
    2266,  2405, -2346,   831,   833,   893, -2346,  2681, -2346,   895,
   -2346,   594,  2268,  2683,  2624,  2625, -2346,  2052, -2346,   559,
   -2346, 14106, 14106,  2686,  2687, -2346, 14106, -2346, 14106,  9313,
    2274, -2346, -2346, -2346, -2346, -2346, -2346, -2346,  2429,  2429,
    2429,  2429,  2429,  2429, -2346, 10489, -2346,  2689,  2633,  2279,
    2280,  2283,  2429, -2346,  2349,  2352,  2429, -2346,  2354,  2359,
    2429,  2290,  2292, -2346, -2346, -2346, -2346, -2346, 10489, -2346,
   -2346,  2695,  2706,  2708,  2712, 13911,   250, 14106,  1984,  1844,
   -2346,  2715, -2346, -2346,  2304, 10489, -2346,    59,  2300,  2701,
      69,  2703, -2346,  2457,  2520,  2729, -2346,  2730, -2346, -2346,
    2738,  1258, -2346,  2756, 10489, 10489, -2346, -2346, -2346, -2346,
   -2346, -2346,  2674, -2346,  5046, -2346, -2346,  5370, -2346,  2486,
    2346, -2346, -2346,   899,  2555, -2346,  2688,  2635,  2611,  2602,
    2494, -2346, -2346, 13037,  2356,  2315, -2346,   967,   996,   189,
   -2346,  2357,   -23, -2346, 13071,  2537,  2538,   998,  2562, -2346,
   -2346, -2346, -2346, -2346,  2766,  2769,    -2,   339,  2571, -2346,
   -2346,  2767,  2370,  1028,  2788,  2691,  2375,  2379,  2381,  2384,
    2385,  2391, 13103, -2346,  2392,  2797, -2346, -2346, -2346,  2395,
    2156,  2397,  2398,  2399,  2156,  2402,  2403,  2406, -2346, -2346,
   13130,  2408,  2411,  2412, -2346, -2346,  2587, 10489, -2346,  2670,
    1984, -2346, -2346, 14106,  2414,    59,  2808,  1030,  2812, -2346,
    2818, -2346, -2346,  2409, -2346, -2346,  2417, 13157, 13184, -2346,
    5694, -2346, -2346,  2419, -2346, -2346, -2346,  2424, -2346, -2346,
   -2346, -2346, -2346,  6018, -2346, 10489, -2346, -2346, -2346,  1032,
    2817, -2346,  1034,  1081, -2346,  2822, -2346,  2425,  2831,  2842,
    2432,  2433,  2436, 10489,  2854, -2346,  1083,    25, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346,  2855,   559,  2442, -2346,
    2429, -2346, -2346, -2346,  2429, -2346, -2346, -2346, -2346, -2346,
    2858,  2859, -2346, 13911,   -35,  2700, -2346,    59,  2445, -2346,
   -2346,    69, -2346,  2448, -2346, -2346,  1446, -2346,  6342, -2346,
    2863,  2486, -2346, 13211, -2346,  2449,  2661, -2346,  1090, -2346,
   -2346, -2346,  2873,  2874,  2875, 14106,  2860, -2346,  2878, -2346,
   -2346, -2346, -2346,  2879,  2469,  2156,  2156,  2475,  2156,  2156,
    2480,  2488, -2346,  2652,  2657,  2492, -2346,  2482,    59,  2490,
    2886, -2346, -2346, -2346,  2870,  1091, -2346, -2346, -2346,  2654,
    2908,  2910,  2886,  2503,  2504,  2505, 10489, -2346,  2676,   559,
   -2346,  2429,  2429, -2346,  2429,  2429, -2346, -2346,  2744,  2745,
    2508,    59,  2510, -2346, -2346,  1093,  2927, -2346,  2863,  2528,
    1097,  2529,  1101,  2530,  2710, -2346, 14106,  2687, -2346,  2531,
    2532,  2533,  2536, -2346, -2346,  2541,    59, -2346,  2945, -2346,
   -2346,  2947,  2950,  2886,  2886, -2346,  2728,  2953,  2370, -2346,
   -2346, -2346, -2346,    59,  2542,    68, -2346,  2544,  2546,  1103,
    1105,   139,  2961,  1109, -2346, -2346,  2548,    59,     1,  2814,
     389,   483, -2346,  2886, -2346, -2346,  2869,  2698, -2346,  2728,
      59,  2558, -2346, -2346,   496, -2346, -2346, -2346,   418,   419,
    1112,   139,   139,  2804, -2346,  2563,    59, -2346, -2346, -2346,
   -2346, -2346,    -7, -2346, -2346, -2346,   101, -2346,  2732, -2346,
    2565, -2346, -2346, -2346, -2346,   139,    76, -2346,  2787,  2789,
    2799,  2801,  2989,  2994, -2346, -2346
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2346,  2871,  -115, -2346, -2346, -2346, -2346, -1037,  1639, -2346,
    1808, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,  1926,  2551,
   -2346,  -277,  -726,  1302, -2346, -1597, -2346,   965, -1497, -2346,
   -1960, -2346, -1209, -2346,  1042, -1453, -2346, -2346, -2346, -1551,
   -2346, -2346,  2415,  -324,  -335,  2410,  -596, -2346, -2346,  -342,
   -2346, -2346,   599, -2346, -2346, -2346,  1542,  -883,   311,  -156,
   -2346, -2346, -2346,  2850,  2273, -2346,  2269, -2346,   767,   592,
   -2346,   524, -1278, -2346, -2346, -2346, -2346, -2346, -2346,  1987,
   -2346, -2346, -1452, -2346, -2346, -2346,  1977,  1706, -2346,  1086,
   -2346, -2346, -1709, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -2346, -2346,  2400, -2346,  2071,  1811, -2346,  1720,  1468,  1110,
   -2346,   927,   779, -2346, -2346, -1420, -2346, -1024, -2346, -2346,
   -2346, -2346, -2346,   530,   734,  2925,  2599, -2346,  1981, -2346,
     896,  2287, -2346, -2346, -2346, -2346, -2346, -2346, -2346, -2346,
   -1288,  1449, -2346, -2346, -2346, -2346,   552, -2346, -2346, -2346,
   -2346,   930, -2346,   491, -2346,  1482,  1471, -1926, -1922, -1881,
   -2345, -1573, -2346, -1229,   204,   118,   -99,  -965,  -477,  2055,
   -1309, -2346, -2346, -2346,  2888, -2346,  -383, -2346,  2047,  1329,
   -1528, -2346, -2346, -2346, -2346,  2430, -2346, -2346, -2346, -2346,
   -2346,  2678, -2346, -2346, -1669, -2346
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -796
static const yytype_int16 yytable[] =
{
     331,  1525,  1962,  1457,  1715,   613,   600,  1575,  1485,  1486,
    1057,  1950,   937,   595,  1504,  2049,  1720,  1546,   709,  1011,
    1011,  2123,  1786,  2129,  2131,  2131,   885,   590,   422,  1562,
    1958,  1948,   124,  1263,  1264,  1357,  1198,   976,   886,  1269,
    1040,  1271,  2170,  2171,  1207,  1354,  2044,  1356,   349,  1596,
     591,  1040,  1049,  2181,  2182,  1347,   158,  1347,  1209,   111,
    -795,   562,  1184,  1465,   599,  1734,  1735,   380,   381,   382,
     383,   384,   385,  1472,   714,   337,   751,   337,   443,   444,
    2598,    67,  1713,   742,  1757,  2065,  2548,   736,   698,   449,
     450,   451,  1317,  1959,   634,   453,  1233,   755,  2562,  1318,
    1553,   699,  1041,   733,  1938,  2368,  2591,  1285,   144,   588,
     601,   407,  1021,  1041,    68,  2439,  1746,  1747,  1748,  1749,
     563,   564,   565,   566,   567,   568,   569,   649,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,  -370,   587,   164,  2132,  1430,
     639,   166,  1234,   733,  1294,  1319,   934,  2556,   627,  1320,
    1939,  2002,  2003,  1040,   966,  2549,  2045,  1554,   169,  1306,
    2013,  2014,   733,  2133,  2133,   390,  1321,   119,   195,  1590,
    2541,   171,   729,   562,  1750,  1322,  2592,   764,   765,   159,
     145,   632,  1287,   408,   935,  2453,    16,    71,  2286,  2287,
    2288,  2289,  2290,  2291,  2134,  2134,  1212,   160,  2066,  2571,
    2572,   630,  2299,   887,  2593,   561,  2303,  1555,   174,  1235,
    2307,  1015,  1323,  2454,   631,  1041,  1067,  1940,  1460,   161,
    1286,   588,  2075,    69,    72,   700,  2549,  1042,   391,   338,
     635,   338,  2595,   176,  2080,   339,  2369,   339,   602,  1185,
    -795,  2550,  1466,   752,   178,   916,   162,   386,  1736,  1773,
    2599,   146,  1473,  1022,   409,  2551,    70,  2046,  2067,   120,
    2563,  1785,   633,   927,   752,  1348,  1952,  1613,   112,  1236,
     701,  2094,  1324,  2440,  1050,  1051,  1927,  1941,   196,   602,
     350,   730,  2095,   650,  2594,   418,   640,  1461,  -370,    90,
     165,  1556,  1043,  1044,   167,  1295,  2151,  1955,   628,   977,
     592,   423,  2096,    16,  1574,   602,  2060,  1211,  1557,  1447,
    1307,   170,  2550,   125,   126,   127,  2097,  2135,  2135,  1614,
    1344,  1615,   128,   761,   172,  2098,  2551,   762,   766,   888,
    2363,  1591,  1217,  2362,   772,   776,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   710,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   175,   804,   805,   806,  2099,   808,   809,   810,   811,
     812,   813,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,  2124,  2125,  1694,   177,  1960,   831,   832,
    1056,  1640,  1641,   836,   837,   711,   363,   179,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
     853,   854,   855,   856,   857,   858,   859,   860,   861,   862,
    2444,   864,   865,   866,  2447,   868,   869,   870,   871,   872,
     873,   874,   875,   876,   877,  1751,  1752,  1753,   880,   881,
     882,   883,   884,   340,  1210,   340,   894,   899,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   909,   910,   911,
     912,   913,   914,  1444,   594,   715,  1068,   331,  1714,  1071,
    1237,  1238,   387,   928,   743,   651,   652,   653,   654,   341,
    1243,   341,  2579,  2583,  1082,  2158,  2159,  2160,  2161,  2162,
    2163,  2327,  2088,  1548,  2089,  1728,   712,  2172,   359,   360,
     376,  2176,  1783,   398,   411,  2180,  1288,  1289,  1290,  1291,
     413,  2509,  2510,  1563,  2511,  2512,  2565,  2316,   361,  1754,
    1197,   380,   381,   382,   383,   384,   385,   104,   978,  1280,
    1281,  1282,  2279,  2370,   636,   364,  2234,   435,  2267,   108,
     641,  2237,  1764,   735,  1766,  1767,   563,   564,   565,   566,
     567,   568,   569,   437,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   717,   587,   922,  -332,  1929,   368,  1075,  1076,  2566,
    2568,  2502,  1513,   430,  2577,  2208,   979,  1202,  2315,  2273,
      92,  1251,  1252,    16,   923,  1330,  1298,  2371,  1958,  1330,
    2580,  2584,   637,  1514,  2274,  1299,   366,  1331,  1053,  1458,
     109,  1331,  1464,   369,  2567,   638,   603,   105,  2581,  2585,
     116,   642,   611,  1070,   150,  1784,   367,   129,   153,  1384,
    1385,   643,  2539,  2540,    93,  2578,  2106,  1727,   370,  1206,
    1077,  1078,  2111,  1332,  1549,  1080,   371,  1332,  2582,  2586,
      94,  1333,  1087,   377,   362,  1333,   399,   412,   372,  2317,
     130,  1959,  2570,   414,  1564,   563,   564,   565,   566,   567,
     568,   569,  1083,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     436,   587,  2459,   604,  1328,  2340,   423,    95,   415,   644,
    1010,  1334,   106,  -338,  1966,  1334,   438,   924,   182,  1706,
    -563,   386,   645,  2353,    96,  2137,    97,   605,  1011,   431,
     402,   656,    98,   193,   718,   373,  1930,   107,   766,  1967,
     606,  2569,   132,   182,   194,  2319,  -567,   133,   110,  -564,
     403,   657,   117,   446,   447,  2324,   374,    99,  1579,  1759,
    1335,   183,  1487,  -563,  1335,   607,   134,  1580,  1760,   184,
    1012,  -563,  1771,  2232,   185,  1188,  1189,  1598,  1191,  1599,
     135,  1772,  2233,   561,   585,   586,   183,   587,   608,  -567,
    2442,   186,  -564,  -563,   335,   136,   999,  -567,   137,  1336,
    -564,   138,  1004,  2390,  1006,  1013,  2452,  2394,  2263,   658,
     659,  2418,  2243,   121,   122,   123,   336,   375,   139,  -567,
     890,   891,  -564,   892,   141,  2198,   893,   930,   602,  2257,
     142,  2258,   563,   564,   565,   566,   567,   568,   569,   143,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   147,   587,   584,
     585,   586,   148,   587,   154,  1445,  1453,  2406,   149,   988,
     989,   990,   991,  2408,   992,   151,   100,   994,   995,   996,
    1047,  1048,  2508,   152,  1000,  1001,  1002,  1228,  1229,  1005,
    1301,  1302,  1256,  1257,   155,  1260,  1261,  1262,  1278,   156,
     101,  1265,  1266,  1267,  2490,   180,  1270,  1350,  1351,   102,
    1431,   168,   563,   564,   565,   566,   567,   568,   569,  1442,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   173,   587,  1337,
     188,  1511,  1512,  1515,  1516,  1517,  1518,   181,  2481,  2482,
     189,  2484,  2485,  1519,  1518,  2457,  1543,  1544,   190,  1358,
     191,  1359,  1568,  1569,   197,  1084,  2006,  2007,  1366,  1367,
     351,  1368,  1585,  1586,   334,  1373,  1661,  1662,   348,  1664,
    1665,  2359,  1374,  1375,  1376,  1377,   352,  1378,  1379,  1380,
    2320,  1770,  1544,   353,  1381,  1382,   354,  1383,  1781,  1544,
    1925,  1544,   355,  1386,  1387,  1388,  2492,   580,   581,   582,
     583,   584,   585,   586,   356,   587,   357,  1396,  1397,  1398,
     379,  1399,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,  1410,   587,  1934,  1935,  1956,  1597,   392,  2515,
     393,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,   395,
    1419,  1588,  1971,  1972,  1420,   394,  1421,   397,  1422,  1423,
    1424,  1425,  1426,   400,  2534,   396,  1427,  1428,  1429,  2010,
    2011,  2058,  2059,  2081,  1544,  2092,  1544,  1435,   401,  1437,
    1437,  2546,   405,  1108,  1109,   406,  2108,  1544,  2117,  1586,
    2126,  2127,  2128,  2127,  1454,  2561,  2130,  2059,  2138,  1597,
     416,  1459,  2200,  2201,  2202,  2201,  2203,  2201,  2575,   410,
    1954,  2206,  2127,  2214,  2215,  2216,  2217,   563,   564,   565,
     566,   567,   568,   569,  2590,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   418,   587,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,  1695,   587,   420,  1697,
     424,  1698,  1524,  1700,   563,   564,   565,   566,   567,   568,
     569,   425,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   428,
     587,   563,   564,   565,   566,   567,   568,   569,   426,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   427,   587,   578,   579,
     580,   581,   582,   583,   584,   585,   586,  1602,   587,  2219,
    2220,  1606,  2222,  2223,  2241,  1544,   439,  1611,  2242,  1544,
    1140,  1141,  2256,  1544,  2260,  1544,  1617,   429,  1080,  2268,
    2215,  2269,  2127,   433,  1625,  1626,   563,   564,   565,   566,
     567,   568,   569,   434,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   440,   587,   441,   563,   564,   565,   566,   567,   568,
     569,   442,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   448,
     587,  2270,  2127,  2272,  2217,  2334,  2335,  2346,  1544,  1696,
    1142,  1143,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   455,   587,   563,   564,
     565,   566,   567,   568,   569,  1716,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   111,   587,   456,  1729,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   457,   587,  2357,  1544,   563,   564,   565,
     566,   567,   568,   569,   458,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   459,   587,  2358,  1544,  2364,  2059,   460,   563,
     564,   565,   566,   567,   568,   569,   461,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   462,   587,  2375,  1972,  2410,  2411,
    2424,  1544,  2426,  2215,   593,   563,   564,   565,   566,   567,
     568,   569,  1942,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     463,   587,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   464,   587,  2427,
    2217,  2437,  2438,  2461,  2462,  1977,  2471,  2472,  1978,  2497,
    2498,  2517,  2518,  2522,  2523,  1450,  1451,  1989,  1990,  2525,
    2518,  2554,  2518,  2555,  2518,  1164,  1165,  2558,  2559,  1991,
    2587,  2518,  1526,  1213,  1214,   465,  1527,   466,  1998,  1999,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   467,   587,  2038,  2039,  2015,  2016,  2017,   468,   469,
    2018,  2019,   470,  2020,   471,  2021,   472,  2022,   473,   474,
     475,   597,  1170,  1171,  2023,  2024,  2025,   476,   477,   478,
     479,   480,   481,   482,  1528,   483,   484,  1529,   485,   486,
     487,   488,   489,   490,   491,   492,   493,  2041,  2042,  1622,
    1623,   494,  1530,   452,   495,   496,   497,   498,   499,   611,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,  1531,   512,   513,  2062,  1964,   514,   515,  2068,
    1532,  1787,  1788,  1789,  1790,  1791,  1792,   516,  1793,  2072,
    1794,   517,   518,   519,  1795,  1796,  1797,   520,  1798,   521,
     614,   522,   523,  2078,  1799,  1800,  1801,  1802,  1803,   524,
     525,   526,   527,   615,  1652,  1653,   528,   529,  1804,   530,
     531,   532,   533,   534,   535,   616,   536,   537,  1805,  1806,
     538,   539,  1807,   540,   541,   542,   543,  1808,  1809,  1810,
    1811,  1812,  1677,  1678,  1813,   544,  1814,  1815,  1816,   545,
     546,  1817,  1818,   547,  1819,  1820,  1821,   548,   549,   550,
    1822,   551,   552,   553,   554,   555,   556,   617,   618,  1533,
     557,  1534,   558,   559,  1823,   560,   596,   598,   619,  1824,
     620,   622,   621,   623,  1825,  1826,  1827,   624,   625,   626,
    1535,  1828,  1829,   647,  1830,  1831,  1832,  1833,   646,   660,
    1834,   648,  1835,  1836,  1837,  1838,   661,  1839,   697,  1840,
    1841,   705,  1842,   706,  1843,  1844,   707,  1845,  1846,  1847,
    1848,   708,   716,   719,   721,   723,  1849,   725,  1850,   726,
    1851,  1852,   727,  1853,  1854,  1855,  1856,  1857,  1858,   732,
    1859,  1860,  1861,  1862,  1863,  1679,  1680,   737,   738,   739,
     740,   741,   744,   745,   746,  1864,   747,  1865,   748,  1866,
     750,   749,   754,   757,   587,   767,   768,   769,  1867,   787,
    1868,  1869,  1870,  1871,  1872,  1873,  1874,  1681,  1682,  1875,
    1876,   803,   807,   826,   827,  1877,   828,  1878,  1879,  1880,
     829,  1881,   830,  1882,   833,  1883,  1884,  1885,  1886,  2141,
    2142,   834,   835,   838,   839,  2146,   840,  2148,   863,   867,
     878,   889,   915,   917,  1965,   919,   921,  1887,  1888,  1889,
     929,   931,   938,   941,   939,   942,   943,  1890,   944,  1891,
    1892,  1893,   945,   946,   947,   948,  1894,   949,  1895,  1896,
    1897,   950,   951,   363,  1898,   952,   954,   955,  1899,  1900,
     956,   957,  1901,  1902,  1903,  1904,   958,   959,   960,  1905,
     961,   962,   963,   964,   968,   965,   967,  2195,  2197,   969,
     970,   563,   564,   565,   566,   567,   568,   569,   971,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   972,   587,   974,   973,
    1906,  1907,  1908,  1909,  1910,   563,   564,   565,   566,   567,
     568,   569,   975,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     980,   587,   981,   982,   984,   997,  1014,  2253,   985,   986,
     993,  1003,  1016,  1007,  1008,  1009,  1017,  1019,  1018,  1020,
    1023,  1024,  1025,  2264,   563,   564,   565,   566,   567,   568,
     569,  1026,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,  1027,
     587,  1028,  1030,  1031,  1611,  1032,  1033,  1034,  1035,  1036,
    1037,  1039,  1054,  1911,  1912,  1913,  1914,  1915,  1059,  1916,
    2292,  1061,  1062,  1063,  1065,  1073,  1079,    16,  1123,  1488,
    1137,  1138,  1139,  1144,   -84,  1190,  1193,  1145,  1146,  1200,
    1488,  1194,  1195,  2310,  1216,  1201,  1219,  1220,  1203,  1204,
    1489,  1221,  1205,  1215,  1222,  1218,  1223,  1224,  1227,  1490,
    2323,  1226,  1491,  1225,  1492,  1239,  1231,  1493,  1232,  1011,
    1490,  1240,  1241,  1491,  1244,  1492,  1245,  1247,  1493,  2337,
    2338,  1246,  1494,  1248,  1249,  1250,  1275,  1276,  1253,  1495,
    1496,  1258,  1277,  1494,  1272,  1273,  1274,  1296,  1297,  1300,
    1495,  1496,  1283,  1787,  1788,  1789,  1790,  1791,  1792,  1279,
    1793,  1303,  1794,  1305,  1308,  1309,  1795,  1796,  1797,  1310,
    1798,  1311,  1313,  1315,  1497,  1316,  1799,  1800,  1801,  1802,
    1803,  1329,  1341,  1342,  1345,  1497,  1346,  1352,  1347,  1362,
    1804,  1498,  1364,  1370,  1365,  1389,  1390,  1391,  1392,  1393,
    1805,  1806,  1404,  1394,  1807,  1395,  1400,  1401,  1402,  1808,
    1809,  1810,  1811,  1812,  1406,  1403,  1813,  1405,  1814,  1815,
    1816,  1407,  2403,  1817,  1818,  1499,  1819,  1820,  1821,  1408,
    1409,   -86,  1822,   733,  1443,  1446,  1499,  1455,  1456,  1448,
    1469,  1452,  1470,  1471,  1468,  1475,  1823,  1476,  1478,  1482,
    1483,  1824,  1477,  1505,  1500,  1481,  1825,  1826,  1827,  1484,
    2423,  1506,  1501,  1828,  1829,  1500,  1830,  1831,  1832,  1833,
    1507,  1508,  1834,  1501,  2093,  1836,  1837,  1838,  2435,  1839,
    1509,  1840,  1841,  1523,  1842,  1547,  1843,  1844,  1510,  1845,
    1846,  1847,  1848,  1545,  1520,  1521,  1522,  1550,  1849,  1552,
    1850,  1537,  1851,  1852,  1538,  1853,  1854,  1855,  1856,  1857,
    1858,  1539,  1859,  1860,  1861,  1862,  1863,  1565,  1540,  1541,
    1542,  1558,  1502,  1561,  1566,  1567,  1573,  1864,  1576,  1865,
    1577,  1866,  1578,  1502,  1583,  1587,  1592,  1581,  1589,  1582,
    1867,  1593,  1868,  1869,  1870,  1871,  1872,  1873,  1874,  2164,
    2165,  1875,  1876,  1594,  1603,  1608,  1607,  1877,  1609,  1878,
    1879,  1880,  1627,  1881,  1584,  1882,  1595,  1883,  1884,  1885,
    1886,  1597,  1618,  1703,  1628,  1645,  1692,  1646,  1707,  1647,
    1648,  2506,  1693,  1704,  1072,  1649,  1650,  1651,  1660,  1887,
    1888,  1889,  1663,  1666,  1711,  1712,  1699,  1701,  1702,  1890,
    1708,  1891,  1892,  1893,  1709,  1710,  1721,  1723,  1894,  1717,
    1895,  1896,  1897,  1719,  1722,  1724,  1898,  1725,  1727,  1726,
    1899,  1900,  1730,  1731,  1901,  1902,  1903,  1904,  1732,  1737,
    1738,  1905,  1742,  1088,   563,   564,   565,   566,   567,   568,
     569,  1739,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,  1740,
     587,  1741,  1743,  1744,  1745,  1755,  1756,  1758,  1761,  1762,
    1763,  1765,  1906,  1907,  1908,  1909,  1910,  1787,  1788,  1789,
    1790,  1791,  1792,  1768,  1793,  1774,  1794,  1775,  1776,  1777,
    1795,  1796,  1797,  1778,  1798,  1779,  1918,  1780,  1782,  1919,
    1799,  1800,  1801,  1802,  1803,  1921,  1924,  1928,  1926,  1931,
    1936,  1932,  1943,  1933,  1804,  1946,  1974,  1969,  1944,  1945,
    1949,  1970,  1976,  2005,  1805,  1806,  1963,  2000,  1807,  2009,
    2031,  2026,  2027,  1808,  1809,  1810,  1811,  1812,  2032,  2036,
    1813,  2028,  1814,  1815,  1816,  2029,  2033,  1817,  1818,  2043,
    1819,  1820,  1821,  2030,  2048,  2040,  1822,  2050,  2051,  2052,
    2054,  2056,  2047,  2074,  2061,  1911,  1912,  1913,  1914,  1915,
    1823,  1916,  2063,  2064,  2069,  1824,  2076,  2077,  2082,  2079,
    1825,  1826,  1827,  2084,  2070,  2100,  2071,  1828,  1829,  2085,
    1830,  1831,  1832,  1833,  2087,  2086,  1834,  2090,  2235,  1836,
    1837,  1838,  2091,  1839,  2102,  1840,  1841,  2101,  1842,  2110,
    1843,  1844,  2103,  1845,  1846,  1847,  1848,  2107,  2109,  2113,
    2112,  2114,  1849,  2118,  1850,  2116,  1851,  1852,  2119,  1853,
    1854,  1855,  1856,  1857,  1858,  2120,  1859,  1860,  1861,  1862,
    1863,  2121,  2139,  2167,  2149,  2143,  2152,  2168,  2150,  2174,
    2173,  1864,  2204,  1865,  2205,  1866,  2175,  2218,  2177,  2194,
    2213,  2209,  2178,  2211,  1867,  2179,  1868,  1869,  1870,  1871,
    1872,  1873,  1874,  2212,  2207,  1875,  1876,  2226,  2224,  2210,
    2225,  1877,  2228,  1878,  1879,  1880,  2229,  1881,  2230,  1882,
    2239,  1883,  1884,  1885,  1886,  2240,  2244,  2251,  2252,  2254,
    2259,  2261,  2265,  2266,  2271,  2275,  2276,  2277,  2278,  2280,
    2281,  2284,  2293,  1887,  1888,  1889,  2295,  2296,  2297,  2301,
    2311,  2298,  2302,  1890,  2305,  1891,  1892,  1893,  2308,  2306,
    2309,  2312,  1894,  2313,  1895,  1896,  1897,  2314,  2321,  2325,
    1898,  2326,  2322,  2328,  1899,  1900,  2329,  2330,  1901,  1902,
    1903,  1904,  2331,  2332,  2339,  1905,   563,   564,   565,   566,
     567,   568,   569,  2333,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,  2336,   587,  2343,  2345,  2348,  2349,  2350,  2351,  2365,
    2352,  2366,  2367,  2355,  2360,  2372,  1906,  1907,  1908,  1909,
    1910,  1787,  1788,  1789,  1790,  1791,  1792,  2373,  1793,  2374,
    1794,  2376,  2377,  2379,  1795,  1796,  1797,  2380,  1798,  2381,
    2387,  2402,  2382,  2383,  1799,  1800,  1801,  1802,  1803,  2384,
    2404,  2386,  2409,  2389,  2391,  2392,  2412,  2393,  1804,  2395,
    2396,  2413,  2425,  1089,  2397,  2428,  2399,  2414,  1805,  1806,
    2400,  2401,  1807,  2407,  2430,  2415,  2420,  1808,  1809,  1810,
    1811,  1812,  2421,  2429,  1813,  2431,  1814,  1815,  1816,  2432,
    2433,  1817,  1818,  2434,  1819,  1820,  1821,  2436,  2441,  2455,
    1822,  2443,  2450,  2451,  2458,  2460,  2464,  2469,  2470,  1911,
    1912,  1913,  1914,  1915,  1823,  1916,  2473,  2474,  2475,  1824,
    2476,  2477,  2479,  2488,  1825,  1826,  1827,  2480,  2489,  2494,
    2496,  1828,  1829,  2483,  1830,  1831,  1832,  1833,  2486,  2499,
    1834,  2491,  2238,  1836,  1837,  1838,  2487,  1839,  2493,  1840,
    1841,  2500,  1842,  2501,  1843,  1844,  2507,  1845,  1846,  1847,
    1848,  2503,  2504,  2505,  2513,  2514,  1849,  2127,  1850,  2516,
    1851,  1852,  2519,  1853,  1854,  1855,  1856,  1857,  1858,  2527,
    1859,  1860,  1861,  1862,  1863,  2521,  2524,  2526,  2536,  2529,
    2530,  2531,  2537,  2538,  2532,  1864,  2542,  1865,  2545,  1866,
    2533,  2547,  2552,  2553,  2557,  2564,  2562,  2560,  1867,  2573,
    1868,  1869,  1870,  1871,  1872,  1873,  1874,  2576,  2588,  1875,
    1876,  2589,  2596,  2597,  2600,  1877,  2601,  1878,  1879,  1880,
    2602,  1881,  2603,  1882,  2604,  1883,  1884,  1885,  1886,  2605,
    2199,   358,  1619,  1441,   763,  2140,  1718,   918,  2035,   421,
    1058,  2347,   933,  2467,  1060,  1372,  1314,  1887,  1888,  1889,
    1572,  2115,  2520,  1312,  1230,  1560,   953,  1890,  1923,  1891,
    1892,  1893,  2255,  2105,  2356,   192,  1894,  2528,  1895,  1896,
    1897,   756,  1069,  1480,  1898,  2283,  1957,  2262,  1899,  1900,
    2574,  1355,  1901,  1902,  1903,  1904,  1937,  1953,  1268,  1905,
     563,   564,   565,   566,   567,   568,   569,  1284,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   445,   587,  2073,   720,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1906,  1907,  1908,  1909,  1910,  1787,  1788,  1789,  1790,  1791,
    1792,     0,  1793,     0,  1794,     0,     0,     0,  1795,  1796,
    1797,     0,  1798,     0,     0,     0,     0,     0,  1799,  1800,
    1801,  1802,  1803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1804,     0,     0,  1090,     0,     0,     0,     0,
       0,     0,  1805,  1806,     0,     0,  1807,     0,     0,     0,
       0,  1808,  1809,  1810,  1811,  1812,     0,     0,  1813,     0,
    1814,  1815,  1816,     0,     0,  1817,  1818,     0,  1819,  1820,
    1821,     0,     0,     0,  1822,     0,     0,     0,     0,     0,
       0,     0,     0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,
       0,     0,     0,  1824,     0,     0,     0,     0,  1825,  1826,
    1827,     0,     0,     0,     0,  1828,  1829,     0,  1830,  1831,
    1832,  1833,     0,     0,  1834,     0,  2245,  1836,  1837,  1838,
       0,  1839,     0,  1840,  1841,     0,  1842,     0,  1843,  1844,
       0,  1845,  1846,  1847,  1848,     0,     0,     0,     0,     0,
    1849,     0,  1850,     0,  1851,  1852,     0,  1853,  1854,  1855,
    1856,  1857,  1858,     0,  1859,  1860,  1861,  1862,  1863,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1864,
       0,  1865,     0,  1866,     0,     0,     0,     0,     0,     0,
       0,     0,  1867,     0,  1868,  1869,  1870,  1871,  1872,  1873,
    1874,     0,     0,  1875,  1876,     0,     0,     0,     0,  1877,
       0,  1878,  1879,  1880,     0,  1881,     0,  1882,     0,  1883,
    1884,  1885,  1886,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1887,  1888,  1889,     0,     0,     0,     0,     0,     0,
       0,  1890,     0,  1891,  1892,  1893,     0,     0,     0,     0,
    1894,     0,  1895,  1896,  1897,     0,     0,     0,  1898,     0,
       0,     0,  1899,  1900,     0,     0,  1901,  1902,  1903,  1904,
       0,     0,     0,  1905,   563,   564,   565,   566,   567,   568,
     569,     0,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1906,  1907,  1908,  1909,  1910,  1787,
    1788,  1789,  1790,  1791,  1792,     0,  1793,     0,  1794,     0,
       0,     0,  1795,  1796,  1797,     0,  1798,     0,     0,     0,
       0,     0,  1799,  1800,  1801,  1802,  1803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1804,     0,     0,  1097,
       0,     0,     0,     0,     0,     0,  1805,  1806,     0,     0,
    1807,     0,     0,     0,     0,  1808,  1809,  1810,  1811,  1812,
       0,     0,  1813,     0,  1814,  1815,  1816,     0,     0,  1817,
    1818,     0,  1819,  1820,  1821,     0,     0,     0,  1822,     0,
       0,     0,     0,     0,     0,     0,     0,  1911,  1912,  1913,
    1914,  1915,  1823,  1916,     0,     0,     0,  1824,     0,     0,
       0,     0,  1825,  1826,  1827,     0,     0,     0,     0,  1828,
    1829,     0,  1830,  1831,  1832,  1833,     0,     0,  1834,     0,
    2246,  1836,  1837,  1838,     0,  1839,     0,  1840,  1841,     0,
    1842,     0,  1843,  1844,     0,  1845,  1846,  1847,  1848,     0,
       0,     0,     0,     0,  1849,     0,  1850,     0,  1851,  1852,
       0,  1853,  1854,  1855,  1856,  1857,  1858,     0,  1859,  1860,
    1861,  1862,  1863,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1864,     0,  1865,     0,  1866,     0,     0,
       0,     0,     0,     0,     0,     0,  1867,     0,  1868,  1869,
    1870,  1871,  1872,  1873,  1874,     0,     0,  1875,  1876,     0,
       0,     0,     0,  1877,     0,  1878,  1879,  1880,     0,  1881,
       0,  1882,     0,  1883,  1884,  1885,  1886,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1887,  1888,  1889,     0,     0,
       0,     0,     0,     0,     0,  1890,     0,  1891,  1892,  1893,
       0,     0,     0,     0,  1894,     0,  1895,  1896,  1897,     0,
       0,     0,  1898,     0,     0,     0,  1899,  1900,     0,     0,
    1901,  1902,  1903,  1904,     0,     0,     0,  1905,   563,   564,
     565,   566,   567,   568,   569,     0,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1906,  1907,
    1908,  1909,  1910,  1787,  1788,  1789,  1790,  1791,  1792,     0,
    1793,     0,  1794,     0,     0,     0,  1795,  1796,  1797,     0,
    1798,     0,     0,     0,     0,     0,  1799,  1800,  1801,  1802,
    1803,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1804,     0,     0,  1098,     0,     0,     0,     0,     0,     0,
    1805,  1806,     0,     0,  1807,     0,     0,     0,     0,  1808,
    1809,  1810,  1811,  1812,     0,     0,  1813,     0,  1814,  1815,
    1816,     0,     0,  1817,  1818,     0,  1819,  1820,  1821,     0,
       0,     0,  1822,     0,     0,     0,     0,     0,     0,     0,
       0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,     0,     0,
       0,  1824,     0,     0,     0,     0,  1825,  1826,  1827,     0,
       0,     0,     0,  1828,  1829,     0,  1830,  1831,  1832,  1833,
       0,     0,  1834,     0,  2247,  1836,  1837,  1838,     0,  1839,
       0,  1840,  1841,     0,  1842,     0,  1843,  1844,     0,  1845,
    1846,  1847,  1848,     0,     0,     0,     0,     0,  1849,     0,
    1850,     0,  1851,  1852,     0,  1853,  1854,  1855,  1856,  1857,
    1858,     0,  1859,  1860,  1861,  1862,  1863,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1864,     0,  1865,
       0,  1866,     0,     0,     0,     0,     0,     0,     0,     0,
    1867,     0,  1868,  1869,  1870,  1871,  1872,  1873,  1874,     0,
       0,  1875,  1876,     0,     0,     0,     0,  1877,     0,  1878,
    1879,  1880,     0,  1881,     0,  1882,     0,  1883,  1884,  1885,
    1886,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1887,
    1888,  1889,     0,     0,     0,     0,     0,     0,     0,  1890,
       0,  1891,  1892,  1893,     0,     0,     0,     0,  1894,     0,
    1895,  1896,  1897,     0,     0,     0,  1898,     0,     0,     0,
    1899,  1900,     0,     0,  1901,  1902,  1903,  1904,     0,     0,
       0,  1905,   563,   564,   565,   566,   567,   568,   569,     0,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1906,  1907,  1908,  1909,  1910,  1787,  1788,  1789,
    1790,  1791,  1792,     0,  1793,     0,  1794,     0,     0,     0,
    1795,  1796,  1797,     0,  1798,     0,     0,     0,     0,     0,
    1799,  1800,  1801,  1802,  1803,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1804,     0,     0,  1099,     0,     0,
       0,     0,     0,     0,  1805,  1806,     0,     0,  1807,     0,
       0,     0,     0,  1808,  1809,  1810,  1811,  1812,     0,     0,
    1813,     0,  1814,  1815,  1816,     0,     0,  1817,  1818,     0,
    1819,  1820,  1821,     0,     0,     0,  1822,     0,     0,     0,
       0,     0,     0,     0,     0,  1911,  1912,  1913,  1914,  1915,
    1823,  1916,     0,     0,     0,  1824,     0,     0,     0,     0,
    1825,  1826,  1827,     0,     0,     0,     0,  1828,  1829,     0,
    1830,  1831,  1832,  1833,     0,     0,  1834,     0,  2248,  1836,
    1837,  1838,     0,  1839,     0,  1840,  1841,     0,  1842,     0,
    1843,  1844,     0,  1845,  1846,  1847,  1848,     0,     0,     0,
       0,     0,  1849,     0,  1850,     0,  1851,  1852,     0,  1853,
    1854,  1855,  1856,  1857,  1858,     0,  1859,  1860,  1861,  1862,
    1863,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1864,     0,  1865,     0,  1866,     0,     0,     0,     0,
       0,     0,     0,     0,  1867,     0,  1868,  1869,  1870,  1871,
    1872,  1873,  1874,     0,     0,  1875,  1876,     0,     0,     0,
       0,  1877,     0,  1878,  1879,  1880,     0,  1881,     0,  1882,
       0,  1883,  1884,  1885,  1886,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1887,  1888,  1889,     0,     0,     0,     0,
       0,     0,     0,  1890,     0,  1891,  1892,  1893,     0,     0,
       0,     0,  1894,     0,  1895,  1896,  1897,     0,     0,     0,
    1898,     0,     0,     0,  1899,  1900,     0,     0,  1901,  1902,
    1903,  1904,     0,     0,     0,  1905,   563,   564,   565,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1906,  1907,  1908,  1909,
    1910,  1787,  1788,  1789,  1790,  1791,  1792,     0,  1793,     0,
    1794,     0,     0,     0,  1795,  1796,  1797,     0,  1798,     0,
       0,     0,     0,     0,  1799,  1800,  1801,  1802,  1803,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1804,     0,
       0,  1100,     0,     0,     0,     0,     0,     0,  1805,  1806,
       0,     0,  1807,     0,     0,     0,     0,  1808,  1809,  1810,
    1811,  1812,     0,     0,  1813,     0,  1814,  1815,  1816,     0,
       0,  1817,  1818,     0,  1819,  1820,  1821,     0,     0,     0,
    1822,     0,     0,     0,     0,     0,     0,     0,     0,  1911,
    1912,  1913,  1914,  1915,  1823,  1916,     0,     0,     0,  1824,
       0,     0,     0,     0,  1825,  1826,  1827,     0,     0,     0,
       0,  1828,  1829,     0,  1830,  1831,  1832,  1833,     0,     0,
    1834,     0,  2249,  1836,  1837,  1838,     0,  1839,     0,  1840,
    1841,     0,  1842,     0,  1843,  1844,     0,  1845,  1846,  1847,
    1848,     0,     0,     0,     0,     0,  1849,     0,  1850,     0,
    1851,  1852,     0,  1853,  1854,  1855,  1856,  1857,  1858,     0,
    1859,  1860,  1861,  1862,  1863,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1864,     0,  1865,     0,  1866,
       0,     0,     0,     0,     0,     0,     0,     0,  1867,     0,
    1868,  1869,  1870,  1871,  1872,  1873,  1874,     0,     0,  1875,
    1876,     0,     0,     0,     0,  1877,     0,  1878,  1879,  1880,
       0,  1881,     0,  1882,     0,  1883,  1884,  1885,  1886,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1887,  1888,  1889,
       0,     0,     0,     0,     0,     0,     0,  1890,     0,  1891,
    1892,  1893,     0,     0,     0,     0,  1894,     0,  1895,  1896,
    1897,     0,     0,     0,  1898,     0,     0,     0,  1899,  1900,
       0,     0,  1901,  1902,  1903,  1904,     0,     0,     0,  1905,
     563,   564,   565,   566,   567,   568,   569,     0,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1906,  1907,  1908,  1909,  1910,  1787,  1788,  1789,  1790,  1791,
    1792,     0,  1793,     0,  1794,     0,     0,     0,  1795,  1796,
    1797,     0,  1798,     0,     0,     0,     0,     0,  1799,  1800,
    1801,  1802,  1803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1804,     0,     0,  1102,     0,     0,     0,     0,
       0,     0,  1805,  1806,     0,     0,  1807,     0,     0,     0,
       0,  1808,  1809,  1810,  1811,  1812,     0,     0,  1813,     0,
    1814,  1815,  1816,     0,     0,  1817,  1818,     0,  1819,  1820,
    1821,     0,     0,     0,  1822,     0,     0,     0,     0,     0,
       0,     0,     0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,
       0,     0,     0,  1824,     0,     0,     0,     0,  1825,  1826,
    1827,     0,     0,     0,     0,  1828,  1829,     0,  1830,  1831,
    1832,  1833,     0,     0,  1834,     0,  2250,  1836,  1837,  1838,
       0,  1839,     0,  1840,  1841,     0,  1842,     0,  1843,  1844,
       0,  1845,  1846,  1847,  1848,     0,     0,     0,     0,     0,
    1849,     0,  1850,     0,  1851,  1852,     0,  1853,  1854,  1855,
    1856,  1857,  1858,     0,  1859,  1860,  1861,  1862,  1863,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1864,
       0,  1865,     0,  1866,     0,     0,     0,     0,     0,     0,
       0,     0,  1867,     0,  1868,  1869,  1870,  1871,  1872,  1873,
    1874,     0,     0,  1875,  1876,     0,     0,     0,     0,  1877,
       0,  1878,  1879,  1880,     0,  1881,     0,  1882,     0,  1883,
    1884,  1885,  1886,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1887,  1888,  1889,     0,     0,     0,     0,     0,     0,
       0,  1890,     0,  1891,  1892,  1893,     0,     0,     0,     0,
    1894,     0,  1895,  1896,  1897,     0,     0,     0,  1898,     0,
       0,     0,  1899,  1900,     0,     0,  1901,  1902,  1903,  1904,
       0,     0,     0,  1905,   563,   564,   565,   566,   567,   568,
     569,     0,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1906,  1907,  1908,  1909,  1910,  1787,
    1788,  1789,  1790,  1791,  1792,     0,  1793,     0,  1794,     0,
       0,     0,  1795,  1796,  1797,     0,  1798,     0,     0,     0,
       0,     0,  1799,  1800,  1801,  1802,  1803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1804,     0,     0,  1103,
       0,     0,     0,     0,     0,     0,  1805,  1806,     0,     0,
    1807,     0,     0,     0,     0,  1808,  1809,  1810,  1811,  1812,
       0,     0,  1813,     0,  1814,  1815,  1816,     0,     0,  1817,
    1818,     0,  1819,  1820,  1821,     0,     0,     0,  1822,     0,
       0,     0,     0,     0,     0,     0,     0,  1911,  1912,  1913,
    1914,  1915,  1823,  1916,     0,     0,     0,  1824,     0,     0,
       0,     0,  1825,  1826,  1827,     0,     0,     0,     0,  1828,
    1829,     0,  1830,  1831,  1832,  1833,     0,     0,  1834,     0,
    2341,  1836,  1837,  1838,     0,  1839,     0,  1840,  1841,     0,
    1842,     0,  1843,  1844,     0,  1845,  1846,  1847,  1848,     0,
       0,     0,     0,     0,  1849,     0,  1850,     0,  1851,  1852,
       0,  1853,  1854,  1855,  1856,  1857,  1858,     0,  1859,  1860,
    1861,  1862,  1863,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1864,     0,  1865,     0,  1866,     0,     0,
       0,     0,     0,     0,     0,     0,  1867,     0,  1868,  1869,
    1870,  1871,  1872,  1873,  1874,     0,     0,  1875,  1876,     0,
       0,     0,     0,  1877,     0,  1878,  1879,  1880,     0,  1881,
       0,  1882,     0,  1883,  1884,  1885,  1886,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1887,  1888,  1889,     0,     0,
       0,     0,     0,     0,     0,  1890,     0,  1891,  1892,  1893,
       0,     0,     0,     0,  1894,     0,  1895,  1896,  1897,     0,
       0,     0,  1898,     0,     0,     0,  1899,  1900,     0,     0,
    1901,  1902,  1903,  1904,     0,     0,     0,  1905,   563,   564,
     565,   566,   567,   568,   569,     0,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1906,  1907,
    1908,  1909,  1910,  1787,  1788,  1789,  1790,  1791,  1792,     0,
    1793,     0,  1794,     0,     0,     0,  1795,  1796,  1797,     0,
    1798,     0,     0,     0,     0,     0,  1799,  1800,  1801,  1802,
    1803,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1804,     0,     0,  1104,     0,     0,     0,     0,     0,     0,
    1805,  1806,     0,     0,  1807,     0,     0,     0,     0,  1808,
    1809,  1810,  1811,  1812,     0,     0,  1813,     0,  1814,  1815,
    1816,     0,     0,  1817,  1818,     0,  1819,  1820,  1821,     0,
       0,     0,  1822,     0,     0,     0,     0,     0,     0,     0,
       0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,     0,     0,
       0,  1824,     0,     0,     0,     0,  1825,  1826,  1827,     0,
       0,     0,     0,  1828,  1829,     0,  1830,  1831,  1832,  1833,
       0,     0,  1834,     0,  2342,  1836,  1837,  1838,     0,  1839,
       0,  1840,  1841,     0,  1842,     0,  1843,  1844,     0,  1845,
    1846,  1847,  1848,     0,     0,     0,     0,     0,  1849,     0,
    1850,     0,  1851,  1852,     0,  1853,  1854,  1855,  1856,  1857,
    1858,     0,  1859,  1860,  1861,  1862,  1863,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1864,     0,  1865,
       0,  1866,     0,     0,     0,     0,     0,     0,     0,     0,
    1867,     0,  1868,  1869,  1870,  1871,  1872,  1873,  1874,     0,
       0,  1875,  1876,     0,     0,     0,     0,  1877,     0,  1878,
    1879,  1880,     0,  1881,     0,  1882,     0,  1883,  1884,  1885,
    1886,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1887,
    1888,  1889,     0,     0,     0,     0,     0,     0,     0,  1890,
       0,  1891,  1892,  1893,     0,     0,     0,     0,  1894,     0,
    1895,  1896,  1897,     0,     0,     0,  1898,     0,     0,     0,
    1899,  1900,     0,     0,  1901,  1902,  1903,  1904,     0,     0,
       0,  1905,   563,   564,   565,   566,   567,   568,   569,     0,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1906,  1907,  1908,  1909,  1910,  1787,  1788,  1789,
    1790,  1791,  1792,     0,  1793,     0,  1794,     0,     0,     0,
    1795,  1796,  1797,     0,  1798,     0,     0,     0,     0,     0,
    1799,  1800,  1801,  1802,  1803,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1804,     0,     0,  1110,     0,     0,
       0,     0,     0,     0,  1805,  1806,     0,     0,  1807,     0,
       0,     0,     0,  1808,  1809,  1810,  1811,  1812,     0,     0,
    1813,     0,  1814,  1815,  1816,     0,     0,  1817,  1818,     0,
    1819,  1820,  1821,     0,     0,     0,  1822,     0,     0,     0,
       0,     0,     0,     0,     0,  1911,  1912,  1913,  1914,  1915,
    1823,  1916,     0,     0,     0,  1824,     0,     0,     0,     0,
    1825,  1826,  1827,     0,     0,     0,     0,  1828,  1829,     0,
    1830,  1831,  1832,  1833,     0,     0,  1834,     0,  2419,  1836,
    1837,  1838,     0,  1839,     0,  1840,  1841,     0,  1842,     0,
    1843,  1844,     0,  1845,  1846,  1847,  1848,     0,     0,     0,
       0,     0,  1849,     0,  1850,     0,  1851,  1852,     0,  1853,
    1854,  1855,  1856,  1857,  1858,     0,  1859,  1860,  1861,  1862,
    1863,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1864,     0,  1865,     0,  1866,     0,     0,     0,     0,
       0,     0,     0,     0,  1867,     0,  1868,  1869,  1870,  1871,
    1872,  1873,  1874,     0,     0,  1875,  1876,     0,     0,     0,
       0,  1877,     0,  1878,  1879,  1880,     0,  1881,     0,  1882,
       0,  1883,  1884,  1885,  1886,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1887,  1888,  1889,     0,     0,     0,     0,
       0,     0,     0,  1890,     0,  1891,  1892,  1893,     0,     0,
       0,     0,  1894,     0,  1895,  1896,  1897,     0,     0,     0,
    1898,     0,     0,     0,  1899,  1900,     0,     0,  1901,  1902,
    1903,  1904,     0,     0,     0,  1905,   563,   564,   565,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1906,  1907,  1908,  1909,
    1910,  1787,  1788,  1789,  1790,  1791,  1792,     0,  1793,     0,
    1794,     0,     0,     0,  1795,  1796,  1797,     0,  1798,     0,
       0,     0,     0,     0,  1799,  1800,  1801,  1802,  1803,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1804,     0,
       0,  1112,     0,     0,     0,     0,     0,     0,  1805,  1806,
       0,     0,  1807,     0,     0,     0,     0,  1808,  1809,  1810,
    1811,  1812,     0,     0,  1813,     0,  1814,  1815,  1816,     0,
       0,  1817,  1818,     0,  1819,  1820,  1821,     0,     0,     0,
    1822,     0,     0,     0,     0,     0,     0,     0,     0,  1911,
    1912,  1913,  1914,  1915,  1823,  1916,     0,     0,     0,  1824,
       0,     0,     0,     0,  1825,  1826,  1827,     0,     0,     0,
       0,  1828,  1829,     0,  1830,  1831,  1832,  1833,     0,     0,
    1834,     0,  2422,  1836,  1837,  1838,     0,  1839,     0,  1840,
    1841,     0,  1842,     0,  1843,  1844,     0,  1845,  1846,  1847,
    1848,     0,     0,     0,     0,     0,  1849,     0,  1850,     0,
    1851,  1852,     0,  1853,  1854,  1855,  1856,  1857,  1858,     0,
    1859,  1860,  1861,  1862,  1863,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1864,     0,  1865,     0,  1866,
       0,     0,     0,     0,     0,     0,     0,     0,  1867,     0,
    1868,  1869,  1870,  1871,  1872,  1873,  1874,     0,     0,  1875,
    1876,     0,     0,     0,     0,  1877,     0,  1878,  1879,  1880,
       0,  1881,     0,  1882,     0,  1883,  1884,  1885,  1886,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1887,  1888,  1889,
       0,     0,     0,     0,     0,     0,     0,  1890,     0,  1891,
    1892,  1893,     0,     0,     0,     0,  1894,     0,  1895,  1896,
    1897,     0,     0,     0,  1898,     0,     0,     0,  1899,  1900,
       0,     0,  1901,  1902,  1903,  1904,     0,     0,     0,  1905,
     563,   564,   565,   566,   567,   568,   569,     0,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1906,  1907,  1908,  1909,  1910,  1787,  1788,  1789,  1790,  1791,
    1792,     0,  1793,     0,  1794,     0,     0,     0,  1795,  1796,
    1797,     0,  1798,     0,     0,     0,     0,     0,  1799,  1800,
    1801,  1802,  1803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1804,     0,     0,  1117,     0,     0,     0,     0,
       0,     0,  1805,  1806,     0,     0,  1807,     0,     0,     0,
       0,  1808,  1809,  1810,  1811,  1812,     0,     0,  1813,     0,
    1814,  1815,  1816,     0,     0,  1817,  1818,     0,  1819,  1820,
    1821,     0,     0,     0,  1822,     0,     0,     0,     0,     0,
       0,     0,     0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,
       0,     0,     0,  1824,     0,     0,     0,     0,  1825,  1826,
    1827,     0,     0,     0,     0,  1828,  1829,     0,  1830,  1831,
    1832,  1833,     0,     0,  1834,     0,  2463,  1836,  1837,  1838,
       0,  1839,     0,  1840,  1841,     0,  1842,     0,  1843,  1844,
       0,  1845,  1846,  1847,  1848,     0,     0,     0,     0,     0,
    1849,     0,  1850,     0,  1851,  1852,     0,  1853,  1854,  1855,
    1856,  1857,  1858,     0,  1859,  1860,  1861,  1862,  1863,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1864,
       0,  1865,     0,  1866,     0,     0,     0,     0,     0,     0,
       0,     0,  1867,     0,  1868,  1869,  1870,  1871,  1872,  1873,
    1874,     0,     0,  1875,  1876,     0,     0,     0,     0,  1877,
       0,  1878,  1879,  1880,     0,  1881,     0,  1882,     0,  1883,
    1884,  1885,  1886,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   198,   199,   200,   201,   202,   203,     0,     0,
       0,  1887,  1888,  1889,     0,     0,   204,   205,     0,     0,
       0,  1890,     0,  1891,  1892,  1893,   206,   207,     0,     0,
    1894,     0,  1895,  1896,  1897,     0,     0,     0,  1898,   208,
       0,     0,  1899,  1900,     0,     0,  1901,  1902,  1903,  1904,
       0,     0,     0,  1905,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   209,     0,     0,     0,     0,   210,     0,     0,   211,
     212,     0,     0,     0,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,  1906,  1907,  1908,  1909,  1910,     0,
       0,     0,     0,     0,     0,   214,     0,     0,     0,   215,
     563,   564,   565,   566,   567,   568,   569,     0,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,  1118,
       0,     0,     0,     0,     0,   216,   563,   564,   565,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,     0,     0,  1911,  1912,  1913,
    1914,  1915,   218,  1916,   563,   564,   565,   566,   567,   568,
     569,     0,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,   219,   220,     0,     0,     0,     0,
       0,     0,   221,   222,     0,     0,     0,   223,   564,   565,
     566,   567,   568,   569,     0,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   224,   587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,     0,   263,
       0,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
       0,   311,   312,   313,   314,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
       0,   326,   327,   328,   198,   199,   200,   201,   202,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   204,   205,
       0,     0,     0,   329,     0,     0,   330,     0,   206,   563,
     564,   565,   566,   567,   568,   569,     0,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   773,     0,     0,     0,
       0,     0,     0,   209,     0,     0,     0,     0,   210,     0,
       0,   211,   212,   563,   564,   565,   566,   567,   568,   569,
     213,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  1119,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   774,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1132,     0,     0,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,   219,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   775,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
       0,   263,     0,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,     0,   311,   312,   313,   314,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,     0,   326,   327,   328,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     204,   205,     0,     0,     0,   329,     0,     0,   330,     0,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   895,     0,     0,     0,     0,  1133,     0,
     896,     0,   565,   566,   567,   568,   569,     0,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   209,   587,     0,     0,     0,
     210,     0,     0,   211,   212,     0,     0,     0,     0,     0,
       0,     0,   213,     0,     0,   563,   564,   565,   566,   567,
     568,   569,  1134,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1136,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,   563,   564,   565,   566,   567,   568,   569,     0,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   217,   587,     0,   563,
     564,   565,   566,   567,   568,   569,   218,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   219,     0,
       0,     0,     0,     0,     0,   897,     0,     0,  1147,   563,
     564,   565,   566,   567,   568,   569,     0,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,     0,   263,     0,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,     0,   311,   312,   313,   314,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,     0,   326,   327,   328,   198,   199,
     200,   201,   202,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   204,   205,     0,     0,     0,   329,     0,     0,
     898,     0,   206,   563,   564,   565,   566,   567,   568,   569,
       0,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   209,     0,     0,
       0,     0,   210,     0,     0,   211,   212,   563,   564,   565,
     566,   567,   568,   569,   213,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,  1156,   563,   564,   565,   566,   567,
     568,   569,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1157,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,     0,     0,
    1158,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1159,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
     219,   563,   564,   565,   566,   567,   568,   569,     0,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,  1160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     452,     0,     0,     0,     0,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,     0,   263,     0,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,     0,   311,   312,   313,
     314,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,     0,   326,   327,   328,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   204,   205,     0,     0,     0,   329,
       0,     0,   330,     0,   206,   814,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   563,   564,   565,   566,   567,
     568,   569,  1161,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,     0,     0,   209,
       0,     0,     0,     0,   210,     0,     0,   211,   212,     0,
       0,     0,     0,     0,     0,     0,   213,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1162,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,   563,   564,   565,
     566,   567,   568,   569,  1163,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1169,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
     217,     0,     0,   563,   564,   565,   566,   567,   568,   569,
     218,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
    1173,     0,     0,     0,     0,   563,   564,   565,   566,   567,
     568,   569,   219,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
    1174,   587,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,     0,   263,     0,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,   311,
     312,   313,   314,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,     0,   326,
     327,   328,   198,   199,   200,   201,   202,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   204,   205,     0,     0,
       0,   329,     0,     0,   330,     0,   206,   563,   564,   565,
     566,   567,   568,   569,     0,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,  1175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   209,     0,     0,     0,     0,   210,     0,     0,   211,
     212,   563,   564,   565,   566,   567,   568,   569,   213,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,  1176,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,  1086,  1177,   563,   564,   565,
     566,   567,   568,   569,     0,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,  1181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,   563,   564,   565,   566,   567,
     568,   569,  1182,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,   219,     0,     0,   563,   564,   565,
     566,   567,   568,   569,  1183,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,     0,   263,
       0,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
       0,   311,   312,   313,   314,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
       0,   326,   327,   328,   198,   199,   200,   201,   202,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   204,   205,
       0,     0,     0,   329,     0,     0,   330,     0,   206,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1363,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
       0,     0,     0,   209,     0,     0,     0,     0,   210,     0,
       0,   211,   212,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1632,     0,     0,     0,     0,     0,     0,   563,   564,   565,
     566,   567,   568,   569,  1605,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1633,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   563,   564,   565,
     566,   567,   568,   569,   218,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,  1644,     0,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,   219,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,  1654,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
       0,   263,     0,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,     0,   311,   312,   313,   314,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,     0,   326,   327,   328,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     204,   205,     0,     0,     0,   329,     0,     0,   330,     0,
     206,   563,   564,   565,   566,   567,   568,   569,     0,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,  1670,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,     0,
     210,     0,     0,   211,   212,   563,   564,   565,   566,   567,
     568,   569,   213,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,  1610,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1671,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1672,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   217,   587,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1675,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,   219,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1676,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
       0,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,     0,   263,     0,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,     0,   311,   312,   313,   314,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,     0,   326,   327,   328,   198,   199,
     200,   201,   202,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   204,   205,     0,     0,     0,   329,     0,     0,
     330,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    1689,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,     0,     0,     0,     0,   209,     0,     0,
       0,     0,   210,     0,     0,   211,   212,     0,     0,     0,
       0,     0,     0,     0,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1690,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1691,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,  -796,  -796,
    -796,  -796,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
    2188,   587,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   563,   564,   565,   566,   567,   568,   569,   218,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,  2191,     0,
       0,     0,     0,   563,   564,   565,   566,   567,   568,   569,
     219,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
    2192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,     0,   263,     0,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,     0,   311,   312,   313,
     314,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,     0,   326,   327,   328,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   204,   205,     0,     0,     0,   329,
       0,     0,   330,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
       0,     0,     0,     0,   210,     0,     0,   211,   212,   563,
     564,   565,   566,   567,   568,   569,   213,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
    2147,   563,   564,   565,   566,   567,   568,   569,     0,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,  1122,
     563,   564,   565,   566,   567,   568,   569,     0,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,     0,     0,     0,     0,     0,     0,   879,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1620,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,     0,   563,   564,   565,   566,   567,   568,
     569,  1085,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,     0,   263,     0,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,   311,
     312,   313,   314,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,     0,   326,
     327,   328,   198,   199,   200,   201,   202,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   204,   205,     0,     0,
       0,   329,     0,     0,   330,     0,   206,   563,   564,   565,
     566,   567,   568,   569,     0,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   209,     0,     0,     0,     0,   210,     0,     0,   211,
     212,     0,     0,     0,     0,     0,     0,     0,   213,     0,
     563,   564,   565,   566,   567,   568,   569,  1621,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  1091,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1092,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
       0,     0,   217,     0,     0,   563,   564,   565,   566,   567,
     568,   569,   218,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,   563,   564,   565,
     566,   567,   568,   569,   219,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,  1093,   587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,     0,   263,
       0,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
       0,   311,   312,   313,   314,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
       0,   326,   327,   328,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   329,     0,     0,   330,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1094,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1095,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
       0,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    1096,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  1101,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1105,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1106,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,   563,   564,   565,   566,   567,   568,   569,     0,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,   563,
     564,   565,   566,   567,   568,   569,     0,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   563,   564,   565,   566,   567,   568,   569,
       0,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
     563,   564,   565,   566,   567,   568,   569,     0,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,   563,   564,   565,
     566,   567,   568,   569,     0,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,  1107,     0,   563,   564,
     565,   566,   567,   568,   569,     0,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,  1111,   587,   563,   564,   565,   566,   567,
     568,   569,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,   563,   564,   565,   566,   567,   568,   569,  1113,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1114,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    1115,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,     0,     0,     0,     0,   563,   564,   565,
     566,   567,   568,   569,  1124,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1125,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  1126,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   563,   564,   565,   566,   567,   568,   569,
    1127,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
     563,   564,   565,   566,   567,   568,   569,  1128,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,   563,   564,   565,
     566,   567,   568,   569,  1129,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,   563,   564,   565,   566,   567,   568,
     569,  1130,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,   563,   564,   565,   566,   567,   568,   569,  1131,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,   563,   564,
     565,   566,   567,   568,   569,  1135,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1148,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  1149,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   563,   564,   565,   566,   567,   568,   569,
    1150,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,     0,     0,   563,   564,   565,   566,   567,
     568,   569,  1151,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1152,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1153,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1154,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,   563,   564,   565,
     566,   567,   568,   569,  1155,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,   563,   564,   565,   566,   567,   568,
     569,  1166,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,   563,   564,   565,   566,   567,   568,   569,  1167,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,   563,   564,
     565,   566,   567,   568,   569,  1168,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,  1172,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,   563,   564,   565,   566,   567,   568,   569,  1178,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,   563,
     564,   565,   566,   567,   568,   569,  1179,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1180,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,   563,   564,   565,
     566,   567,   568,   569,  1208,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,   563,   564,   565,   566,   567,   568,
     569,  1624,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1629,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,   563,   564,   565,   566,   567,
     568,   569,  1630,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1631,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1634,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,   563,   564,
     565,   566,   567,   568,   569,  1635,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,  1636,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,   563,   564,   565,   566,   567,   568,   569,  1637,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,   563,
     564,   565,   566,   567,   568,   569,  1638,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  1639,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   563,   564,   565,   566,   567,   568,   569,
    1642,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
     563,   564,   565,   566,   567,   568,   569,  1643,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1655,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,   563,   564,
     565,   566,   567,   568,   569,  1656,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,  1669,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,   563,   564,   565,
     566,   567,   568,   569,  1673,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1674,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1683,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  1684,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,   563,
     564,   565,   566,   567,   568,   569,  1685,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  1686,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   563,   564,   565,   566,   567,   568,   569,
    1687,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
     563,   564,   565,   566,   567,   568,   569,  1688,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,   563,   564,   565,
     566,   567,   568,   569,  1769,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,   563,   564,   565,   566,   567,   568,
     569,  1979,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,   563,   564,   565,   566,   567,   568,   569,  2053,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  2122,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,   563,
     564,   565,   566,   567,   568,   569,  2153,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  2154,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  2155,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,   563,   564,   565,
     566,   567,   568,   569,  2156,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  2157,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
       0,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    2166,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
     563,   564,   565,   566,   567,   568,   569,  2183,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,    73,   587,   563,   564,   565,
     566,   567,   568,   569,  2184,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,   563,   564,   565,   566,   567,   568,
     569,  2185,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,   563,   564,   565,   566,   567,   568,   569,  2186,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
      74,     0,     0,     0,     0,  2187,     0,    75,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,     3,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,  2190,
      78,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     0,     0,     0,     0,
    2221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2227,     0,     0,
       0,     0,     0,     0,    80,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2231,     9,    10,    11,     0,     0,
       0,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2236,     0,     0,     0,
       0,     0,     0,    12,     0,    13,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2354,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,    18,     0,     0,     0,  2361,
       0,     0,     0,     0,    19,     0,   563,   564,   565,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,  2385,   587,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2398,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  2416,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,  2417,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,    20,     0,     0,     0,     0,     0,     0,  2468,
       0,    21,     0,     0,     0,     0,     0,     0,   662,   663,
       0,   664,     0,   665,   666,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   667,
       0,     0,  1980,  1981,     0,     0,     0,  1982,     0,  1983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   668,   669,   670,   671,     0,     0,     0,     0,     0,
     672,     0,  1984,  1985,     0,  1986,     0,     0,     0,   673,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   674,
       0,     0,     0,     0,     0,     0,     0,   675,     0,  1074,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   676,     0,     0,     0,     0,     0,     0,   677,
       0,     0,   678,     0,     0,   679,   680,     0,     0,     0,
       0,     0,     0,     0,     0,   563,   564,   565,   566,   567,
     568,   569,   681,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   682,   683,     0,     0,
     684,   685,     0,     0,     0,     0,   686,     0,   687,     0,
       0,     0,     0,   688,   689,     0,  1987,  1988,  1361,   690,
       0,   691,     0,     0,     0,     0,     0,   692,     0,   693,
     694,     0,     0,     0,     0,   695,   563,   564,   565,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1369,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,   563,   564,   565,   566,   567,   568,   569,     0,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
       0,     0,     0,     0,     0,     0,   562,     0,     0,     0,
    1958,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    1360,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   588,     0,     0,     0,  1616,     0,
       0,     0,     0,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1959,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1116,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    1192,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1434,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587
};

static const yytype_int16 yycheck[] =
{
     115,  1279,  1599,  1212,  1457,   347,   341,  1316,  1237,  1238,
     736,  1584,   608,   337,  1243,  1724,  1468,  1295,   401,    36,
      36,  1943,  1550,  1949,    48,    48,     6,   136,   136,  1307,
      49,  1582,   107,   998,   999,  1072,   140,     5,    18,  1004,
     154,  1006,  2002,  2003,   927,  1069,  1715,  1071,   159,  1337,
     159,   154,     4,  2013,  2014,   199,     3,   199,    20,     8,
      51,     3,     6,     4,   341,  1485,  1486,     3,     4,     5,
       6,     7,     8,     4,     3,     3,   240,     3,   193,   194,
       4,   219,    20,     3,  1504,    78,    18,   422,     3,   204,
     205,   206,    71,   112,    71,   210,    78,   240,    97,    78,
      40,    16,   216,   274,    78,   107,   113,   268,     3,    51,
     240,     3,   266,   216,   252,    90,     4,     5,     6,     7,
      10,    11,    12,    13,    14,    15,    16,    18,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   266,    36,     3,   172,  1186,
      71,     3,   134,   274,   266,   134,   177,    18,   108,   138,
     134,  1658,  1659,   154,   641,    97,  1717,   107,     3,   266,
    1667,  1668,   274,   197,   197,   139,   155,     3,     3,    87,
    2525,     3,   136,     3,    72,   164,   193,   124,   125,   136,
      85,     3,     3,    85,   215,   230,   241,   252,  2158,  2159,
    2160,  2161,  2162,  2163,   228,   228,   932,   154,   201,  2554,
    2555,    71,  2172,   193,   113,   330,  2176,   157,     3,   201,
    2180,   698,   201,   258,    84,   216,   271,   201,   197,   176,
     391,    51,  1760,   371,     3,   150,    97,   351,   202,   167,
     217,   167,  2587,     3,  1772,   173,   248,   173,   419,   193,
     241,   183,   193,   417,     3,   590,   203,   193,  1487,  1537,
     184,   156,   193,   417,   156,   197,   404,  1719,   261,    95,
     269,  1549,    84,   597,   417,   419,  1585,   419,   227,   261,
     195,  1809,   261,   258,   236,   237,  1564,   261,   113,   419,
     401,   245,  1820,   184,   193,   416,   217,   266,   419,     3,
     156,   241,   416,   417,   156,   417,  1975,  1595,   258,   277,
     419,   419,  1840,   241,   417,   419,  1736,   419,   258,  1202,
     417,   156,   183,   398,   399,   400,  1854,   351,   351,  1353,
    1056,  1355,   407,   448,   156,  1863,   197,   452,   275,   319,
    2266,   249,   938,  2265,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   107,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   156,   487,   488,   489,  1903,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,  1944,  1945,  1432,   156,   416,   513,   514,
     735,   418,   418,   518,   519,   157,   277,   156,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
    2390,   546,   547,   548,  2394,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   333,   334,   335,   563,   564,
     565,   566,   567,   381,   416,   381,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,  1199,   416,   404,   753,   592,   416,   756,
     957,   958,   418,   598,   404,   376,   377,   378,   379,   417,
     967,   417,    74,    74,   771,  1992,  1993,  1994,  1995,  1996,
    1997,  2210,  1780,   266,  1782,   277,   258,  2004,    54,    55,
      55,  2008,   268,     3,     3,  2012,   327,   328,   329,   330,
       3,  2481,  2482,   266,  2484,  2485,   137,   277,    74,   417,
     420,     3,     4,     5,     6,     7,     8,     3,     5,  1016,
    1017,  1018,  2139,   204,     3,   416,  2074,     3,  2121,   252,
       3,  2079,  1517,   266,  1519,  1520,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     3,    36,   133,     3,   266,    38,   124,   125,   200,
     107,  2472,   259,    74,    98,  2047,    63,   921,  2195,     5,
      95,   984,   985,   241,   154,    87,    51,   268,    49,    87,
     192,   192,    71,   280,    20,    60,   100,    99,   733,  1215,
     252,    99,  1218,    75,   235,    84,    76,     3,   210,   210,
     252,    84,    51,   271,    82,   391,   120,     0,    86,  1116,
    1117,     3,  2523,  2524,   139,   149,  1924,   419,   100,   926,
     765,   766,  1930,   135,   417,   770,   108,   135,   240,   240,
     155,   143,   777,   208,   210,   143,   156,   156,   120,   419,
     415,   112,  2553,   156,   417,    10,    11,    12,    13,    14,
      15,    16,   136,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     156,    36,  2411,   153,  1046,  2233,   419,   202,   156,    71,
      18,   193,     3,   163,     3,   193,   156,   267,   103,  1445,
     103,   193,    84,  2251,   219,  1954,   221,   177,    36,   210,
      39,   100,   227,     9,   156,   187,   417,    28,   275,    28,
     190,   258,     3,   103,    20,  2198,   103,     3,    14,   103,
      59,   120,    18,   416,   417,  2207,   208,   252,   155,    51,
     242,   146,  1239,   146,   242,   215,     3,   164,    60,   154,
      78,   154,    51,    51,   159,   890,   891,     3,   893,     5,
       3,    60,    60,   898,    33,    34,   146,    36,   238,   146,
    2387,   176,   146,   176,   154,   396,   678,   154,   417,   277,
     154,   216,   684,  2300,   686,   113,  2403,  2304,  2117,   418,
     419,  2339,  2090,   398,   399,   400,   176,   269,   156,   176,
      13,    14,   176,    16,     3,  2034,    19,   418,   419,  2107,
     155,  2109,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,    32,
      33,    34,     3,    36,   396,  1200,  1208,  2320,     3,   665,
     666,   667,   668,  2325,   670,   246,   371,   673,   674,   675,
     418,   419,  2479,   155,   680,   681,   682,    45,    46,   685,
     223,   224,   991,   992,   396,   994,   995,   996,  1013,   252,
     395,  1000,  1001,  1002,  2455,   396,  1005,   418,   419,   404,
    1187,     3,    10,    11,    12,    13,    14,    15,    16,  1196,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,   417,
     171,   418,   419,    82,    83,   418,   419,   396,  2445,  2446,
     419,  2448,  2449,   418,   419,  2407,   418,   419,     3,  1074,
       3,  1076,   405,   406,   419,   419,     4,     5,  1083,  1084,
     136,  1086,   418,   419,     3,  1090,   418,   419,     3,   418,
     419,  2259,  1097,  1098,  1099,  1100,   136,  1102,  1103,  1104,
    2199,   418,   419,   136,  1109,  1110,   159,  1112,   418,   419,
     418,   419,   136,  1118,  1119,  1120,  2458,    28,    29,    30,
      31,    32,    33,    34,   409,    36,     3,  1132,  1133,  1134,
       3,  1136,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,  1147,    36,   418,   419,   418,   419,   281,  2491,
       3,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,     3,
    1165,  1328,   418,   419,  1169,    51,  1171,   197,  1173,  1174,
    1175,  1176,  1177,   281,  2516,   417,  1181,  1182,  1183,     4,
       5,   418,   419,   418,   419,   418,   419,  1192,   417,  1194,
    1195,  2533,   197,   418,   419,     3,   418,   419,   418,   419,
     418,   419,   418,   419,  1209,  2547,   418,   419,   418,   419,
     417,  1216,   418,   419,   418,   419,   418,   419,  2560,     3,
    1587,   418,   419,   418,   419,   418,   419,    10,    11,    12,
      13,    14,    15,    16,  2576,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   416,    36,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,  1433,    36,     3,  1436,
     281,  1438,  1277,  1440,    10,    11,    12,    13,    14,    15,
      16,   281,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   197,
      36,    10,    11,    12,    13,    14,    15,    16,   281,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   281,    36,    26,    27,
      28,    29,    30,    31,    32,    33,    34,  1342,    36,   418,
     419,  1346,   418,   419,   418,   419,     3,  1352,   418,   419,
     418,   419,   418,   419,   418,   419,  1361,   281,  1363,   418,
     419,   418,   419,   281,  1369,  1370,    10,    11,    12,    13,
      14,    15,    16,   281,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     4,    36,   245,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     9,
      36,   418,   419,   418,   419,    57,    58,   418,   419,  1434,
     418,   419,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   416,    36,    10,    11,
      12,    13,    14,    15,    16,  1460,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     8,    36,   417,  1481,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    36,    36,   418,   419,    10,    11,    12,
      13,    14,    15,    16,   417,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   417,    36,   418,   419,   418,   419,   417,    10,
      11,    12,    13,    14,    15,    16,   417,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   417,    36,   418,   419,   418,   419,
     418,   419,   418,   419,   419,    10,    11,    12,    13,    14,
      15,    16,  1577,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     417,    36,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   417,    36,   418,
     419,   418,   419,    57,    58,  1620,   416,   417,  1623,   418,
     419,   418,   419,   416,   417,  1204,  1205,  1632,  1633,   418,
     419,   418,   419,   418,   419,   418,   419,   418,   419,  1644,
     418,   419,    62,   934,   935,   417,    66,   417,  1653,  1654,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   417,    36,  1709,  1710,  1670,  1671,  1672,   417,   417,
    1675,  1676,   417,  1678,   417,  1680,   417,  1682,   417,   417,
     417,     3,   418,   419,  1689,  1690,  1691,   417,   417,   417,
     417,   417,   417,   417,   114,   417,   417,   117,   417,   417,
     417,   417,   417,   417,   417,   417,   417,  1712,  1713,   418,
     419,   417,   132,   275,   417,   417,   417,   417,   417,    51,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   152,   417,   417,  1740,   181,   417,   417,  1744,
     160,     3,     4,     5,     6,     7,     8,   417,    10,  1754,
      12,   417,   417,   417,    16,    17,    18,   417,    20,   417,
       3,   417,   417,  1768,    26,    27,    28,    29,    30,   417,
     417,   417,   417,   159,   418,   419,   417,   417,    40,   417,
     417,   417,   417,   417,   417,     3,   417,   417,    50,    51,
     417,   417,    54,   417,   417,   417,   417,    59,    60,    61,
      62,    63,   418,   419,    66,   417,    68,    69,    70,   417,
     417,    73,    74,   417,    76,    77,    78,   417,   417,   417,
      82,   417,   417,   417,   417,   417,   417,     3,     3,   249,
     417,   251,   417,   417,    96,   417,   417,   417,     3,   101,
       3,   266,    16,    53,   106,   107,   108,    53,    44,     3,
     270,   113,   114,   277,   116,   117,   118,   119,    71,     3,
     122,   245,   124,   125,   126,   127,     3,   129,   197,   131,
     132,     3,   134,   197,   136,   137,   281,   139,   140,   141,
     142,     3,   197,   281,   277,   281,   148,   281,   150,     3,
     152,   153,     3,   155,   156,   157,   158,   159,   160,    28,
     162,   163,   164,   165,   166,   418,   419,     3,     3,     3,
       3,     3,     3,     3,     3,   177,    74,   179,   281,   181,
     281,    74,     3,     3,    36,     3,     3,   420,   190,   418,
     192,   193,   194,   195,   196,   197,   198,   418,   419,   201,
     202,   418,   418,   418,   418,   207,   418,   209,   210,   211,
     418,   213,   418,   215,   418,   217,   218,   219,   220,  1964,
    1965,   418,   418,     5,   418,  1970,   418,  1972,   418,   418,
     418,   417,     3,     3,   419,     3,     3,   239,   240,   241,
     418,     3,   163,     3,   196,     3,   271,   249,     3,   251,
     252,   253,   402,   402,   274,   271,   258,   274,   260,   261,
     262,     3,   273,   277,   266,     5,    42,    42,   270,   271,
       3,     3,   274,   275,   276,   277,     3,     3,     3,   281,
       3,     3,     3,     3,   245,     3,     3,  2032,  2033,     3,
       3,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     5,    36,   379,     3,
     322,   323,   324,   325,   326,    10,    11,    12,    13,    14,
      15,    16,     5,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       5,    36,   217,   217,   417,    64,     3,  2102,   417,   417,
     417,   417,     3,   417,   417,   417,     3,   418,     3,   419,
       3,     3,   197,  2118,    10,    11,    12,    13,    14,    15,
      16,   418,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   197,
      36,    51,   396,     3,  2149,   197,   281,     3,   417,     3,
     277,     3,   198,   415,   416,   417,   418,   419,   396,   421,
    2165,     3,     3,     3,     3,   418,   418,   241,   418,    18,
     350,   350,   350,   418,   241,   417,   417,   350,   350,   136,
      18,   417,   417,  2188,   197,   419,   417,   271,   164,   164,
      39,     4,   164,   163,     4,   163,   411,   417,     4,    48,
    2205,   410,    51,   411,    53,     3,   197,    56,   197,    36,
      48,   222,   222,    51,     3,    53,   245,     5,    56,  2224,
    2225,   245,    71,     5,     3,     3,   193,   420,     5,    78,
      79,     4,   417,    71,     5,     5,     5,   197,     3,     3,
      78,    79,   213,     3,     4,     5,     6,     7,     8,   417,
      10,   140,    12,     3,     3,     3,    16,    17,    18,   197,
      20,   397,   417,    94,   113,     3,    26,    27,    28,    29,
      30,     3,    63,   179,     3,   113,    20,   417,   199,    91,
      40,   130,   420,   161,   418,     4,   350,   350,   350,   350,
      50,    51,     5,   350,    54,   350,   417,   417,   417,    59,
      60,    61,    62,    63,     5,   350,    66,   350,    68,    69,
      70,   350,  2317,    73,    74,   164,    76,    77,    78,   417,
     417,   241,    82,   274,   412,     3,   164,     3,     3,   140,
     403,   418,   179,    20,   417,    20,    96,     4,     3,   164,
     164,   101,   179,     3,   193,   417,   106,   107,   108,   417,
    2355,     3,   201,   113,   114,   193,   116,   117,   118,   119,
     222,   222,   122,   201,   124,   125,   126,   127,  2373,   129,
     418,   131,   132,    78,   134,     3,   136,   137,   418,   139,
     140,   141,   142,   268,   418,   418,   418,    60,   148,   140,
     150,   417,   152,   153,   417,   155,   156,   157,   158,   159,
     160,   417,   162,   163,   164,   165,   166,   197,   417,   417,
     417,   245,   261,   268,     3,    20,     3,   177,     3,   179,
     417,   181,   164,   261,   164,     3,     6,   417,     4,   417,
     190,     4,   192,   193,   194,   195,   196,   197,   198,   418,
     419,   201,   202,     4,   212,     3,   164,   207,     3,   209,
     210,   211,   418,   213,   417,   215,   417,   217,   218,   219,
     220,   419,   417,    51,   418,   418,   418,   417,   163,   417,
     417,  2476,   418,   141,   419,   417,   417,   417,   417,   239,
     240,   241,   417,   417,     3,    20,   418,   418,   418,   249,
     417,   251,   252,   253,   417,   417,     4,     4,   258,   417,
     260,   261,   262,   419,     5,   419,   266,     4,   419,     5,
     270,   271,   417,   417,   274,   275,   276,   277,     3,   193,
       3,   281,    52,   419,    10,    11,    12,    13,    14,    15,
      16,   417,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   417,
      36,   417,     3,   417,     4,   164,   164,   213,     5,   240,
       4,     4,   322,   323,   324,   325,   326,     3,     4,     5,
       6,     7,     8,   417,    10,     3,    12,     3,     3,     3,
      16,    17,    18,     3,    20,     3,   118,   417,   417,     3,
      26,    27,    28,    29,    30,   266,   417,     3,   268,     4,
     140,    20,   417,    20,    40,     3,   197,   258,   417,   417,
     417,    20,     4,   350,    50,    51,   419,   351,    54,   350,
      94,   418,   418,    59,    60,    61,    62,    63,    63,     3,
      66,   418,    68,    69,    70,   418,   148,    73,    74,     3,
      76,    77,    78,   418,    12,   417,    82,    12,     3,     5,
       3,     3,   419,    60,     5,   415,   416,   417,   418,   419,
      96,   421,     5,    51,   417,   101,   418,     4,     3,    60,
     106,   107,   108,   418,   417,   217,   417,   113,   114,   418,
     116,   117,   118,   119,   419,   418,   122,   417,   124,   125,
     126,   127,   417,   129,   417,   131,   132,   419,   134,   268,
     136,   137,   277,   139,   140,   141,   142,   417,   417,     5,
     418,     4,   148,   417,   150,   271,   152,   153,   164,   155,
     156,   157,   158,   159,   160,   164,   162,   163,   164,   165,
     166,   417,     3,    63,   417,   419,   418,   198,    88,   418,
     417,   177,     3,   179,    20,   181,   418,     3,   417,   413,
      18,   164,   418,   164,   190,   418,   192,   193,   194,   195,
     196,   197,   198,    43,   419,   201,   202,   164,   417,   419,
     417,   207,   418,   209,   210,   211,   418,   213,   418,   215,
     418,   217,   218,   219,   220,     3,     3,    60,     3,    78,
     417,   136,   417,   417,     3,   417,     3,    63,    63,     3,
       3,   417,     3,   239,   240,   241,    63,   418,   418,   350,
       5,   418,   350,   249,   350,   251,   252,   253,   418,   350,
     418,     5,   258,     5,   260,   261,   262,     5,     3,   419,
     266,    20,   418,    20,   270,   271,   269,   207,   274,   275,
     276,   277,     3,     3,    60,   281,    10,    11,    12,    13,
      14,    15,    16,     5,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     5,    36,   277,   418,    77,   131,   156,   166,   207,
     276,     5,     3,   417,   417,   204,   322,   323,   324,   325,
     326,     3,     4,     5,     6,     7,     8,    20,    10,   419,
      12,     3,   101,   418,    16,    17,    18,   418,    20,   418,
       3,   214,   418,   418,    26,    27,    28,    29,    30,   418,
     140,   419,     4,   418,   417,   417,     4,   418,    40,   417,
     417,     3,     5,   419,   418,     3,   418,   418,    50,    51,
     419,   419,    54,   419,     3,   418,   417,    59,    60,    61,
      62,    63,   418,   418,    66,     3,    68,    69,    70,   417,
     417,    73,    74,   417,    76,    77,    78,     3,     3,   159,
      82,   419,     4,     4,   419,   417,     3,   418,   207,   415,
     416,   417,   418,   419,    96,   421,     3,     3,     3,   101,
      20,     3,     3,   231,   106,   107,   108,   418,   231,     3,
      20,   113,   114,   418,   116,   117,   118,   119,   418,   245,
     122,   419,   124,   125,   126,   127,   418,   129,   418,   131,
     132,     3,   134,     3,   136,   137,   240,   139,   140,   141,
     142,   418,   418,   418,   180,   180,   148,   419,   150,   419,
     152,   153,     5,   155,   156,   157,   158,   159,   160,   229,
     162,   163,   164,   165,   166,   417,   417,   417,     3,   418,
     418,   418,     5,     3,   418,   177,   228,   179,     5,   181,
     419,   419,   418,   417,     3,   151,    97,   419,   190,   271,
     192,   193,   194,   195,   196,   197,   198,   419,   174,   201,
     202,   418,   250,   418,   197,   207,   197,   209,   210,   211,
     191,   213,   191,   215,     5,   217,   218,   219,   220,     5,
    2035,   130,  1363,  1195,   453,  1963,  1464,   592,  1706,   159,
     737,  2244,   602,  2421,   745,  1089,  1039,   239,   240,   241,
    1314,  1935,  2498,  1036,   953,  1305,   626,   249,  1560,   251,
     252,   253,  2105,  1923,  2255,   110,   258,  2507,   260,   261,
     262,   442,   755,  1232,   266,  2149,  1597,  2117,   270,   271,
    2559,  1070,   274,   275,   276,   277,  1574,  1586,  1003,   281,
      10,    11,    12,    13,    14,    15,    16,  1020,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   197,    36,  1758,   410,   659,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   419,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   415,   416,   417,   418,   419,    96,   421,
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
      -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   419,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,   416,   417,
     418,   419,    96,   421,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   415,   416,   417,   418,   419,    96,   421,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,   323,   324,   325,   326,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   415,   416,   417,   418,   419,
      96,   421,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,
     326,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,
     416,   417,   418,   419,    96,   421,    -1,    -1,    -1,   101,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   419,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   415,   416,   417,   418,   419,    96,   421,
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
      -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   419,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,   416,   417,
     418,   419,    96,   421,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   415,   416,   417,   418,   419,    96,   421,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,   323,   324,   325,   326,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   415,   416,   417,   418,   419,
      96,   421,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,
     326,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,
     416,   417,   418,   419,    96,   421,    -1,    -1,    -1,   101,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   419,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   415,   416,   417,   418,   419,    96,   421,
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
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,   239,   240,   241,    -1,    -1,    17,    18,    -1,    -1,
      -1,   249,    -1,   251,   252,   253,    27,    28,    -1,    -1,
     258,    -1,   260,   261,   262,    -1,    -1,    -1,   266,    40,
      -1,    -1,   270,   271,    -1,    -1,   274,   275,   276,   277,
      -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,   110,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,   419,
      -1,    -1,    -1,    -1,    -1,   146,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    -1,    -1,   415,   416,   417,
     418,   419,   193,   421,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,   225,   226,    -1,    -1,    -1,    -1,
      -1,    -1,   233,   234,    -1,    -1,    -1,   238,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   263,    36,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   392,   393,   394,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,   414,    -1,    -1,   417,    -1,    27,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    10,    11,    12,    13,    14,    15,    16,
      89,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   419,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   225,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     389,   390,    -1,   392,   393,   394,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,   414,    -1,    -1,   417,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,   419,    -1,
      47,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    72,    36,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   419,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   419,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   183,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   193,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,   419,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    -1,   320,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    -1,    -1,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,    -1,   372,   373,   374,   375,    -1,
      -1,    -1,    -1,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,    -1,   392,   393,   394,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,   414,    -1,    -1,
     417,    -1,    27,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,    12,
      13,    14,    15,    16,    89,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   419,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   419,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   419,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
     225,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   419,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     275,    -1,    -1,    -1,    -1,    -1,   281,   282,   283,   284,
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
     385,   386,   387,   388,   389,   390,    -1,   392,   393,   394,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,   414,
      -1,    -1,   417,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   419,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   419,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   419,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   419,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     193,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
     419,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   225,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     419,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     393,   394,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,   414,    -1,    -1,   417,    -1,    27,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    10,    11,    12,    13,    14,    15,    16,    89,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   419,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,   136,   419,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   419,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,   225,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   419,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   392,   393,   394,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,   414,    -1,    -1,   417,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   419,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     419,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   113,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   419,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   419,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   225,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   419,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     389,   390,    -1,   392,   393,   394,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,   414,    -1,    -1,   417,    -1,
      27,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   419,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    10,    11,    12,    13,    14,
      15,    16,    89,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,   113,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   419,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   419,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   183,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   419,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,   225,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   419,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    -1,   320,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    -1,    -1,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,    -1,   372,   373,   374,   375,    -1,
      -1,    -1,    -1,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,    -1,   392,   393,   394,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,   414,    -1,    -1,
     417,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     419,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   419,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     419,    36,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   193,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   419,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     225,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
     419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     385,   386,   387,   388,   389,   390,    -1,   392,   393,   394,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,   414,
      -1,    -1,   417,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,
      11,    12,    13,    14,    15,    16,    89,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
     113,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   418,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    10,    11,    12,    13,    14,    15,
      16,   418,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     393,   394,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,   414,    -1,    -1,   417,    -1,    27,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      10,    11,    12,    13,    14,    15,    16,   418,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   418,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   418,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   193,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   225,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   418,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   392,   393,   394,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   414,    -1,    -1,   417,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   418,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   418,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     418,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   418,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   418,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   418,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
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
      33,    34,    -1,    36,    -1,    -1,   418,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   418,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   418,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   418,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     418,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   418,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   418,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   418,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     418,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   418,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   418,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   418,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   418,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   418,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   418,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   418,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     418,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   418,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   418,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   418,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   418,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   418,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   418,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   418,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   418,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   418,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   418,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   418,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   418,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   418,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   418,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   418,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   418,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   418,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   418,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   418,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   418,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   418,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   418,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   418,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     418,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   418,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   418,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   418,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   418,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   418,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   418,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   418,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   418,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   418,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   418,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     418,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   418,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   418,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   418,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   418,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   418,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   418,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   418,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   418,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   418,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   418,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     418,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   418,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    10,    36,    10,    11,    12,
      13,    14,    15,    16,   418,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   418,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   418,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      95,    -1,    -1,    -1,    -1,   418,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,    68,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,
     155,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,
     418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,   221,    -1,    -1,    -1,
      -1,    -1,   227,    -1,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   418,   168,   169,   170,    -1,    -1,
      -1,   246,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,   418,
      -1,    -1,    -1,    -1,   267,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   418,    36,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
     395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   418,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   418,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   395,    -1,    -1,    -1,    -1,    -1,    -1,   418,
      -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   144,   145,    -1,   147,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,   253,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,   182,
      -1,    -1,   185,    -1,    -1,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   205,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,   240,    -1,    -1,
     243,   244,    -1,    -1,    -1,    -1,   249,    -1,   251,    -1,
      -1,    -1,    -1,   256,   257,    -1,   278,   279,   253,   262,
      -1,   264,    -1,    -1,    -1,    -1,    -1,   270,    -1,   272,
     273,    -1,    -1,    -1,    -1,   278,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   136,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      49,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     124,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   112,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    51,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      50,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    50,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     395,   404,   423,   462,   463,   503,   507,   509,   516,   517,
     520,   522,   523,   525,   526,   527,   532,   533,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   545,   548,   555,
     556,   558,   574,   575,   584,   587,   589,   590,   591,   614,
     617,   624,   625,   628,   631,   632,   635,   219,   252,   371,
     404,   252,     3,    10,    95,   102,   138,   139,   155,   202,
     219,   221,   227,   246,   247,   261,   371,   395,   404,   596,
       3,   504,    95,   139,   155,   202,   219,   221,   227,   252,
     371,   395,   404,   566,     3,     3,     3,    28,   252,   252,
     566,     8,   227,   615,   616,   482,   252,   566,   585,     3,
      95,   398,   399,   400,   107,   398,   399,   400,   407,     0,
     415,   519,     3,     3,     3,     3,   396,   417,   216,   156,
     588,     3,   155,     3,     3,    85,   156,     3,     3,     3,
     588,   246,   155,   588,   396,   396,   252,   576,     3,   136,
     154,   176,   203,   505,     3,   156,     3,   156,     3,     3,
     156,     3,   156,     3,     3,   156,     3,   156,     3,   156,
     396,   396,   103,   146,   154,   159,   176,   567,   171,   419,
       3,     3,   567,     9,    20,     3,   113,   419,     3,     4,
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
     417,   424,   483,   484,     3,   154,   176,     3,   167,   173,
     381,   417,   486,   487,   488,   489,   492,   502,     3,   159,
     401,   136,   136,   136,   159,   136,   409,     3,   423,    54,
      55,    74,   210,   277,   416,   544,   100,   120,    38,    75,
     100,   108,   120,   187,   208,   269,    55,   208,   633,     3,
       3,     4,     5,     6,     7,     8,   193,   418,   626,   627,
     139,   202,   281,     3,    51,     3,   417,   197,     3,   156,
     281,   417,    39,    59,   629,   197,     3,     3,    85,   156,
       3,     3,   156,     3,   156,   588,   417,   577,   416,   506,
       3,   505,   136,   419,   281,   281,   281,   281,   197,   281,
      74,   210,   508,   281,   281,     3,   156,     3,   156,     3,
       4,   245,     3,   424,   424,   616,   416,   417,     9,   424,
     424,   424,   275,   424,   461,   416,   417,    36,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   424,     3,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    36,    51,   485,
     136,   159,   419,   419,   416,   485,   417,     3,   417,   463,
     486,   240,   419,    76,   153,   177,   190,   215,   238,   493,
     495,    51,   491,   491,     3,   159,     3,     3,     3,     3,
       3,    16,   266,    53,    53,    44,     3,   108,   258,   546,
      71,    84,     3,    84,    71,   217,     3,    71,    84,    71,
     217,     3,    84,     3,    71,    84,    71,   277,   245,    18,
     184,   376,   377,   378,   379,   634,   100,   120,   418,   419,
       3,     3,    61,    62,    64,    66,    67,    82,   114,   115,
     116,   117,   123,   132,   152,   160,   175,   182,   185,   188,
     189,   205,   239,   240,   243,   244,   249,   251,   256,   257,
     262,   264,   270,   272,   273,   278,   610,   197,     3,    16,
     150,   195,   618,   619,   620,     3,   197,   281,     3,   618,
     107,   157,   258,   630,     3,   404,   197,     3,   156,   281,
     633,   277,   521,   281,   528,   281,     3,     3,   578,   136,
     245,   579,    28,   274,   464,   266,   486,     3,     3,     3,
       3,     3,     3,   404,     3,     3,     3,    74,   281,    74,
     281,   240,   417,   568,     3,   240,   568,     3,   424,   429,
     433,   424,   424,   461,   124,   125,   275,     3,     3,   420,
     431,   438,   424,    65,   178,   254,   424,   459,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   418,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   418,   424,   424,   424,   418,   424,   424,
     424,   424,   424,   424,    28,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   418,   418,   418,   418,
     418,   424,   424,   418,   418,   418,   424,   424,     5,   418,
     418,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   418,   424,   424,   424,   418,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   418,   418,
     424,   424,   424,   424,   424,     6,    18,   193,   319,   417,
      13,    14,    16,    19,   424,    40,    47,   232,   417,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,     3,   486,     3,   484,     3,
     518,     3,   133,   154,   267,   499,   490,   485,   424,   418,
     418,     3,   586,   487,   177,   215,   496,   488,   163,   196,
     494,     3,     3,   271,     3,   402,   402,   274,   271,   274,
       3,   273,     5,   544,    42,    42,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,   610,     3,   245,     3,
       3,     3,     5,     3,   379,     5,     5,   277,     5,    63,
       5,   217,   217,   627,   417,   417,   417,   606,   606,   606,
     606,   606,   606,   417,   606,   606,   606,    64,   607,   607,
     606,   606,   606,   417,   607,   606,   607,   417,   417,   417,
      18,    36,    78,   113,     3,   610,     3,     3,     3,   418,
     419,   266,   417,     3,     3,   197,   418,   197,    51,   549,
     396,     3,   197,   281,     3,   417,     3,   277,   529,     3,
     154,   216,   351,   416,   417,   612,   613,   418,   419,     4,
     236,   237,   580,   424,   198,   474,   486,   464,   506,   396,
     508,     3,     3,     3,   573,     3,   569,   271,   463,   573,
     271,   463,   419,   418,   253,   124,   125,   424,   424,   418,
     424,   430,   463,   136,   419,   418,   136,   424,   419,   419,
     419,   418,   418,   418,   418,   418,   418,   419,   419,   419,
     419,   418,   419,   419,   419,   418,   418,   418,   418,   419,
     419,   418,   419,   418,   418,   418,    51,   419,   419,   419,
     419,   321,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   419,   419,   419,   418,   419,   350,   350,   350,
     418,   419,   418,   419,   418,   350,   350,   419,   418,   418,
     418,   418,   418,   418,   418,   418,   419,   419,   419,   419,
     419,   419,   419,   419,   418,   419,   418,   418,   418,   419,
     418,   419,   418,   419,   419,   419,   419,   419,   418,   418,
     418,   419,   419,   419,     6,   193,   434,   436,   424,   424,
     417,   424,    50,   417,   417,   417,   425,   420,   140,   478,
     136,   419,   485,   164,   164,   164,   463,   499,   418,    20,
     416,   419,   464,   494,   494,   163,   197,   488,   163,   417,
     271,     4,     4,   411,   417,   411,   410,     4,    45,    46,
     546,   197,   197,    78,   134,   201,   261,   610,   610,     3,
     222,   222,   605,   610,     3,   245,   245,     5,     5,     3,
       3,   618,   618,     5,   608,   609,   608,   608,     4,   611,
     608,   608,   608,   609,   609,   608,   608,   608,   611,   609,
     608,   609,     5,     5,     5,   193,   420,   417,   424,   417,
     610,   610,   610,   213,   620,   268,   391,     3,   327,   328,
     329,   330,   514,   515,   266,   417,   197,     3,    51,    60,
       3,   223,   224,   140,   550,     3,   266,   417,     3,     3,
     197,   397,   521,   417,   528,    94,     3,    71,    78,   134,
     138,   155,   164,   201,   261,   597,   598,   604,   491,     3,
      87,    99,   135,   143,   193,   242,   277,   417,   581,   582,
     583,    63,   179,   477,   464,     3,    20,   199,   419,   559,
     418,   419,   417,   570,   559,   570,   559,   429,   424,   424,
     124,   253,    91,   419,   420,   418,   424,   424,   424,   136,
     161,   460,   460,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   610,   610,   424,   424,   424,     4,
     350,   350,   350,   350,   350,   350,   424,   424,   424,   424,
     417,   417,   417,   350,     5,   350,     5,   350,   417,   417,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     429,   463,   435,   437,    50,   424,   428,   424,   426,   432,
     427,   432,   463,   412,   464,   486,     3,   499,   140,   500,
     500,   500,   418,   491,   424,     3,     3,   474,   488,   424,
     197,   266,   497,   498,   488,     4,   193,   524,   417,   403,
     179,    20,     4,   193,   534,    20,     4,   179,     3,   547,
     547,   417,   164,   164,   417,   605,   605,   610,    18,    39,
      48,    51,    53,    56,    71,    78,    79,   113,   130,   164,
     193,   201,   261,   557,   605,     3,     3,   222,   222,   418,
     418,   418,   419,   259,   280,    82,    83,   418,   419,   418,
     418,   418,   418,    78,   424,   514,    62,    66,   114,   117,
     132,   152,   160,   249,   251,   270,   621,   417,   417,   417,
     417,   417,   417,   418,   419,   268,   514,     3,   266,   417,
      60,   622,   140,    40,   107,   157,   241,   258,   245,   551,
     549,   268,   514,   266,   417,   197,     3,    20,   405,   406,
     530,   531,   529,     3,   417,   612,     3,   417,   164,   155,
     164,   417,   417,   164,   417,   418,   419,     3,   463,     4,
      87,   249,     6,     4,     4,   417,   582,   419,     3,     5,
     475,   476,   424,   212,   636,   113,   424,   164,     3,     3,
     113,   424,   572,   419,   559,   559,   124,   424,   417,   430,
     140,   418,   418,   419,   418,   424,   424,   418,   418,   418,
     418,   418,   419,   419,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   419,   418,   417,   417,   417,   417,
     417,   417,   418,   419,   419,   418,   418,   439,   440,   441,
     417,   418,   419,   417,   418,   419,   417,   457,   458,   418,
     419,   419,   419,   418,   418,   419,   419,   418,   419,   418,
     419,   418,   419,   418,   418,   418,   418,   418,   418,   419,
     419,   419,   418,   418,   429,   463,   424,   463,   463,   418,
     463,   418,   418,    51,   141,   465,   464,   163,   417,   417,
     417,     3,    20,    20,   416,   477,   424,   417,   498,   419,
     524,     4,     5,     4,   419,     4,     5,   419,   277,   424,
     417,   417,     3,   603,   557,   557,   605,   193,     3,   417,
     417,   417,    52,     3,   417,     4,     4,     5,     6,     7,
      72,   333,   334,   335,   417,   164,   164,   557,   213,    51,
      60,     5,   240,     4,   609,     4,   609,   609,   417,   418,
     418,    51,    60,   514,     3,     3,     3,     3,     3,     3,
     417,   418,   417,   268,   391,   514,   622,     3,     4,     5,
       6,     7,     8,    10,    12,    16,    17,    18,    20,    26,
      27,    28,    29,    30,    40,    50,    51,    54,    59,    60,
      61,    62,    63,    66,    68,    69,    70,    73,    74,    76,
      77,    78,    82,    96,   101,   106,   107,   108,   113,   114,
     116,   117,   118,   119,   122,   124,   125,   126,   127,   129,
     131,   132,   134,   136,   137,   139,   140,   141,   142,   148,
     150,   152,   153,   155,   156,   157,   158,   159,   160,   162,
     163,   164,   165,   166,   177,   179,   181,   190,   192,   193,
     194,   195,   196,   197,   198,   201,   202,   207,   209,   210,
     211,   213,   215,   217,   218,   219,   220,   239,   240,   241,
     249,   251,   252,   253,   258,   260,   261,   262,   266,   270,
     271,   274,   275,   276,   277,   281,   322,   323,   324,   325,
     326,   415,   416,   417,   418,   419,   421,   623,   118,     3,
     552,   266,   553,   550,   417,   418,   268,   514,     3,   266,
     417,     4,    20,    20,   418,   419,   140,   597,    78,   134,
     201,   261,   424,   417,   417,   417,     3,   481,   481,   417,
     603,   593,   612,   598,   610,   582,   418,   583,    49,   112,
     416,   467,   467,   419,   181,   419,     3,    28,   637,   258,
      20,   418,   419,   571,   197,   561,     4,   424,   424,   418,
     104,   105,   109,   111,   144,   145,   147,   278,   279,   424,
     424,   424,   443,   444,   442,   445,   446,   447,   424,   424,
     351,   470,   470,   470,   448,   350,     4,     5,   452,   350,
       4,     5,   456,   470,   470,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   418,   418,   418,   418,
     418,    94,    63,   148,   469,   465,     3,   501,   501,   501,
     417,   424,   424,     3,   636,   481,   524,   419,    12,   534,
      12,     3,     5,   418,     3,   600,     3,   599,   418,   419,
     557,     5,   424,     5,    51,    78,   201,   261,   424,   417,
     417,   417,   424,   621,    60,   622,   418,     4,   424,    60,
     622,   418,     3,   510,   418,   418,   418,   419,   514,   514,
     417,   417,   418,   124,   622,   622,   622,   622,   622,   622,
     217,   419,   417,   277,   554,   551,   514,   417,   418,   417,
     268,   514,   418,     5,     4,   531,   271,   418,   417,   164,
     164,   417,   418,   600,   481,   481,   418,   419,   418,   599,
     418,    48,   172,   197,   228,   351,   592,   605,   418,     3,
     476,   424,   424,   419,   560,   113,   424,   113,   424,   417,
      88,   636,   418,   418,   418,   418,   418,   418,   470,   470,
     470,   470,   470,   470,   418,   419,   418,    63,   198,   472,
     472,   472,   470,   417,   418,   418,   470,   417,   418,   418,
     470,   472,   472,   418,   418,   418,   418,   418,   419,   418,
     418,   419,   419,   419,   413,   424,   466,   424,   474,   469,
     418,   419,   418,   418,     3,    20,   418,   419,   524,   164,
     419,   164,    43,    18,   418,   419,   418,   419,     3,   418,
     419,   418,   418,   419,   417,   417,   164,   418,   418,   418,
     418,   418,    51,    60,   622,   124,   418,   622,   124,   418,
       3,   418,   418,   514,     3,   124,   124,   124,   124,   124,
     124,    60,     3,   424,    78,   553,   418,   514,   514,   417,
     418,   136,   593,   612,   424,   417,   417,   603,   418,   418,
     418,     3,   418,     5,    20,   417,     3,    63,    63,   467,
       3,     3,   565,   572,   417,   562,   472,   472,   472,   472,
     472,   472,   424,     3,   471,    63,   418,   418,   418,   472,
     449,   350,   350,   472,   453,   350,   350,   472,   418,   418,
     424,     5,     5,     5,     5,   467,   277,   419,   468,   477,
     474,     3,   418,   424,   524,   419,    20,   534,    20,   269,
     207,     3,     3,     5,    57,    58,     5,   424,   424,    60,
     622,   124,   124,   277,   511,   418,   418,   510,    77,   131,
     156,   166,   276,   622,   418,   417,   554,   418,   418,   514,
     417,   418,   600,   599,   418,   207,     5,     3,   107,   248,
     204,   268,   204,    20,   419,   418,     3,   101,   563,   418,
     418,   418,   418,   418,   418,   418,   419,     3,   473,   418,
     470,   417,   417,   418,   470,   417,   417,   418,   418,   418,
     419,   419,   214,   424,   140,   479,   477,   419,   524,     4,
     418,   419,     4,     3,   418,   418,   418,   418,   622,   124,
     417,   418,   124,   424,   418,     5,   418,   418,     3,   418,
       3,     3,   417,   417,   417,   424,     3,   418,   419,    90,
     258,     3,   467,   419,   472,   450,   451,   472,   454,   455,
       4,     4,   467,   230,   258,   159,   480,   524,   419,   534,
     417,    57,    58,   124,     3,   512,   513,   511,   418,   418,
     207,   416,   417,     3,     3,     3,    20,     3,   564,     3,
     418,   470,   470,   418,   470,   470,   418,   418,   231,   231,
     481,   419,   524,   418,     3,   601,    20,   418,   419,   245,
       3,     3,   601,   418,   418,   418,   424,   240,   467,   472,
     472,   472,   472,   180,   180,   524,   419,   418,   419,     5,
     513,   417,   416,   417,   417,   418,   417,   229,   565,   418,
     418,   418,   418,   419,   524,   602,     3,     5,     3,   601,
     601,   602,   228,   594,   595,     5,   524,   419,    18,    97,
     183,   197,   418,   417,   418,   418,    18,     3,   418,   419,
     419,   524,    97,   269,   151,   137,   200,   235,   107,   258,
     601,   602,   602,   271,   595,   524,   419,    98,   149,    74,
     192,   210,   240,    74,   192,   210,   240,   418,   174,   418,
     524,   113,   193,   113,   193,   602,   250,   418,     4,   184,
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
#line 505 "evolution/parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 511 "evolution/parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 512 "evolution/parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 514 "evolution/parser/evoparser.y"
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
#line 527 "evolution/parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 529 "evolution/parser/evoparser.y"
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
#line 557 "evolution/parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 565 "evolution/parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 573 "evolution/parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 579 "evolution/parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 586 "evolution/parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 587 "evolution/parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 588 "evolution/parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 589 "evolution/parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 590 "evolution/parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 591 "evolution/parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 592 "evolution/parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 593 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 594 "evolution/parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 595 "evolution/parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 596 "evolution/parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 597 "evolution/parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 598 "evolution/parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 599 "evolution/parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 600 "evolution/parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 601 "evolution/parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 602 "evolution/parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 603 "evolution/parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 604 "evolution/parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 606 "evolution/parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 611 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 612 "evolution/parser/evoparser.y"
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
#line 620 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 621 "evolution/parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 622 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 623 "evolution/parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 624 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 625 "evolution/parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 630 "evolution/parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 632 "evolution/parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 635 "evolution/parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 636 "evolution/parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 637 "evolution/parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 638 "evolution/parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 639 "evolution/parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 642 "evolution/parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 643 "evolution/parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 647 "evolution/parser/evoparser.y"
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
#line 656 "evolution/parser/evoparser.y"
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
#line 674 "evolution/parser/evoparser.y"
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
#line 683 "evolution/parser/evoparser.y"
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
#line 702 "evolution/parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 703 "evolution/parser/evoparser.y"
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
#line 763 "evolution/parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 772 "evolution/parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 778 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 783 "evolution/parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 785 "evolution/parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 787 "evolution/parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 792 "evolution/parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 797 "evolution/parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 802 "evolution/parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 810 "evolution/parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 812 "evolution/parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 814 "evolution/parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 816 "evolution/parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 818 "evolution/parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 820 "evolution/parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 822 "evolution/parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 824 "evolution/parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 826 "evolution/parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 828 "evolution/parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 835 "evolution/parser/evoparser.y"
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

  case 77:
#line 846 "evolution/parser/evoparser.y"
    {
        /* Diagnostic sibling — same arg shape, returns strategy string. */
        emit("CALL 5 HNSW_HYBRID_EXPLAIN %d %s", (yyvsp[(9) - (12)].intval), (yyvsp[(11) - (12)].strval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_HYBRID_EXPLAIN, (yyvsp[(3) - (12)].exprval), (yyvsp[(5) - (12)].exprval), (yyvsp[(7) - (12)].exprval), "HNSW_HYBRID_EXPLAIN");
        if (n) { n->val.intval = (yyvsp[(9) - (12)].intval); n->subquery_sql = strdup((yyvsp[(11) - (12)].strval)); }
        free((yyvsp[(11) - (12)].strval));
        (yyval.exprval) = n;
    ;}
    break;

  case 78:
#line 856 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 860 "evolution/parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 860 "evolution/parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 861 "evolution/parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 861 "evolution/parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 862 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 863 "evolution/parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 870 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 871 "evolution/parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 878 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 879 "evolution/parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 889 "evolution/parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 893 "evolution/parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 894 "evolution/parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 895 "evolution/parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 896 "evolution/parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 897 "evolution/parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 898 "evolution/parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 899 "evolution/parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 900 "evolution/parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 904 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 905 "evolution/parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 906 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 907 "evolution/parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 908 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 909 "evolution/parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 911 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 912 "evolution/parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 913 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 914 "evolution/parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 915 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 916 "evolution/parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 917 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 918 "evolution/parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 919 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 920 "evolution/parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 921 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 922 "evolution/parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 924 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 925 "evolution/parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 926 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 927 "evolution/parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 928 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 929 "evolution/parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 930 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 931 "evolution/parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 932 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 933 "evolution/parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 934 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 935 "evolution/parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 936 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 937 "evolution/parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 938 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 939 "evolution/parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 941 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 942 "evolution/parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 943 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 944 "evolution/parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 945 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 946 "evolution/parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 949 "evolution/parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 950 "evolution/parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 951 "evolution/parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 952 "evolution/parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 953 "evolution/parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 954 "evolution/parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 955 "evolution/parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 956 "evolution/parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 957 "evolution/parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 958 "evolution/parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 959 "evolution/parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 150:
#line 960 "evolution/parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 151:
#line 961 "evolution/parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 962 "evolution/parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 153:
#line 963 "evolution/parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 154:
#line 964 "evolution/parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 155:
#line 965 "evolution/parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 156:
#line 966 "evolution/parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 157:
#line 967 "evolution/parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 158:
#line 968 "evolution/parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 159:
#line 969 "evolution/parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 160:
#line 970 "evolution/parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 161:
#line 971 "evolution/parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 162:
#line 972 "evolution/parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 163:
#line 973 "evolution/parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 164:
#line 974 "evolution/parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 165:
#line 975 "evolution/parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 166:
#line 976 "evolution/parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 167:
#line 977 "evolution/parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 168:
#line 978 "evolution/parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 169:
#line 979 "evolution/parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 170:
#line 980 "evolution/parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 171:
#line 981 "evolution/parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 172:
#line 982 "evolution/parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 173:
#line 984 "evolution/parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 174:
#line 985 "evolution/parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 175:
#line 986 "evolution/parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 176:
#line 987 "evolution/parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 177:
#line 988 "evolution/parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 178:
#line 989 "evolution/parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 179:
#line 990 "evolution/parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 180:
#line 991 "evolution/parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 181:
#line 993 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 182:
#line 994 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 183:
#line 995 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 184:
#line 996 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 185:
#line 997 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 186:
#line 998 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 187:
#line 999 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 188:
#line 1000 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 189:
#line 1001 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 190:
#line 1002 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 191:
#line 1003 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 192:
#line 1004 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 193:
#line 1005 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 194:
#line 1006 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 195:
#line 1007 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 196:
#line 1008 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 197:
#line 1009 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 198:
#line 1010 "evolution/parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 199:
#line 1011 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 200:
#line 1012 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 201:
#line 1013 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1014 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 203:
#line 1016 "evolution/parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 204:
#line 1017 "evolution/parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 205:
#line 1018 "evolution/parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 206:
#line 1019 "evolution/parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 207:
#line 1020 "evolution/parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 208:
#line 1022 "evolution/parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 209:
#line 1023 "evolution/parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 210:
#line 1025 "evolution/parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 211:
#line 1026 "evolution/parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 212:
#line 1027 "evolution/parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 213:
#line 1029 "evolution/parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 214:
#line 1030 "evolution/parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 215:
#line 1031 "evolution/parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 216:
#line 1032 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 217:
#line 1039 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 218:
#line 1046 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 219:
#line 1053 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 220:
#line 1057 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 221:
#line 1061 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1065 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1069 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 224:
#line 1073 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 225:
#line 1079 "evolution/parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 226:
#line 1080 "evolution/parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 227:
#line 1081 "evolution/parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 228:
#line 1085 "evolution/parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 229:
#line 1091 "evolution/parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 230:
#line 1097 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 231:
#line 1098 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 232:
#line 1099 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 233:
#line 1100 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1101 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1102 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 236:
#line 1103 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 237:
#line 1104 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 238:
#line 1105 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1109 "evolution/parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 240:
#line 1111 "evolution/parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 241:
#line 1113 "evolution/parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1115 "evolution/parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 243:
#line 1119 "evolution/parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 244:
#line 1127 "evolution/parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 245:
#line 1137 "evolution/parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 246:
#line 1138 "evolution/parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 247:
#line 1141 "evolution/parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 248:
#line 1142 "evolution/parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 249:
#line 1146 "evolution/parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 250:
#line 1154 "evolution/parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 251:
#line 1162 "evolution/parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1170 "evolution/parser/evoparser.y"
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

  case 253:
#line 1184 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 254:
#line 1193 "evolution/parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 255:
#line 1199 "evolution/parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (13)].intval), (yyvsp[(3) - (13)].intval), (yyvsp[(5) - (13)].intval));
        g_sel.distinct = ((yyvsp[(2) - (13)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (13)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 256:
#line 1212 "evolution/parser/evoparser.y"
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

  case 258:
#line 1225 "evolution/parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 260:
#line 1227 "evolution/parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 261:
#line 1230 "evolution/parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 262:
#line 1237 "evolution/parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 263:
#line 1245 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1246 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 265:
#line 1247 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 266:
#line 1250 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1251 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1255 "evolution/parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 272:
#line 1264 "evolution/parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 273:
#line 1266 "evolution/parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 276:
#line 1274 "evolution/parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 277:
#line 1276 "evolution/parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 282:
#line 1288 "evolution/parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 283:
#line 1294 "evolution/parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 284:
#line 1301 "evolution/parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 285:
#line 1309 "evolution/parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 286:
#line 1310 "evolution/parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 287:
#line 1311 "evolution/parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 288:
#line 1312 "evolution/parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1324 "evolution/parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 291:
#line 1327 "evolution/parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 292:
#line 1328 "evolution/parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 293:
#line 1329 "evolution/parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 294:
#line 1330 "evolution/parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 295:
#line 1331 "evolution/parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1335 "evolution/parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 298:
#line 1338 "evolution/parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 299:
#line 1339 "evolution/parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 300:
#line 1342 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 301:
#line 1343 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 302:
#line 1344 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 303:
#line 1345 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 304:
#line 1346 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 305:
#line 1347 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 306:
#line 1348 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 307:
#line 1349 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 308:
#line 1350 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 309:
#line 1353 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 310:
#line 1354 "evolution/parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 311:
#line 1356 "evolution/parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 312:
#line 1364 "evolution/parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 313:
#line 1369 "evolution/parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 314:
#line 1370 "evolution/parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 315:
#line 1371 "evolution/parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 316:
#line 1374 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 317:
#line 1375 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 320:
#line 1384 "evolution/parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 321:
#line 1392 "evolution/parser/evoparser.y"
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

  case 322:
#line 1401 "evolution/parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 323:
#line 1402 "evolution/parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 324:
#line 1404 "evolution/parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 325:
#line 1413 "evolution/parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 326:
#line 1418 "evolution/parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 327:
#line 1424 "evolution/parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 328:
#line 1431 "evolution/parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 329:
#line 1435 "evolution/parser/evoparser.y"
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

  case 330:
#line 1455 "evolution/parser/evoparser.y"
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

  case 333:
#line 1481 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 334:
#line 1483 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 335:
#line 1485 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 336:
#line 1487 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 337:
#line 1489 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 338:
#line 1492 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1493 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 340:
#line 1494 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 341:
#line 1497 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 342:
#line 1498 "evolution/parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 343:
#line 1501 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1502 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 345:
#line 1505 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 346:
#line 1506 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 347:
#line 1507 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 350:
#line 1514 "evolution/parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 351:
#line 1515 "evolution/parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 352:
#line 1520 "evolution/parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 353:
#line 1522 "evolution/parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 354:
#line 1524 "evolution/parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1528 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 357:
#line 1529 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 358:
#line 1532 "evolution/parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1533 "evolution/parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 360:
#line 1536 "evolution/parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 361:
#line 1541 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 362:
#line 1551 "evolution/parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 363:
#line 1558 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 364:
#line 1559 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 365:
#line 1560 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 366:
#line 1561 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 367:
#line 1566 "evolution/parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 368:
#line 1570 "evolution/parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 369:
#line 1572 "evolution/parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 372:
#line 1578 "evolution/parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 373:
#line 1583 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 374:
#line 1590 "evolution/parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 375:
#line 1597 "evolution/parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 377:
#line 1609 "evolution/parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 378:
#line 1610 "evolution/parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 379:
#line 1615 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 380:
#line 1622 "evolution/parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 381:
#line 1629 "evolution/parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 382:
#line 1637 "evolution/parser/evoparser.y"
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

  case 383:
#line 1647 "evolution/parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1655 "evolution/parser/evoparser.y"
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

  case 385:
#line 1665 "evolution/parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 386:
#line 1673 "evolution/parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 387:
#line 1682 "evolution/parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 388:
#line 1691 "evolution/parser/evoparser.y"
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

  case 389:
#line 1701 "evolution/parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 390:
#line 1709 "evolution/parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 391:
#line 1718 "evolution/parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 392:
#line 1727 "evolution/parser/evoparser.y"
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

  case 393:
#line 1737 "evolution/parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 394:
#line 1746 "evolution/parser/evoparser.y"
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

  case 395:
#line 1763 "evolution/parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 396:
#line 1771 "evolution/parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX IF NOT EXISTS %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval), (yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval));
        free((yyvsp[(5) - (14)].strval)); free((yyvsp[(7) - (14)].strval)); free((yyvsp[(11) - (14)].strval));
    ;}
    break;

  case 397:
#line 1782 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 398:
#line 1784 "evolution/parser/evoparser.y"
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

  case 399:
#line 1797 "evolution/parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 400:
#line 1798 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 401:
#line 1801 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 402:
#line 1803 "evolution/parser/evoparser.y"
    {
        int lm = ((yyvsp[(1) - (3)].intval) >> 16) & 0xFFFF, le = (yyvsp[(1) - (3)].intval) & 0xFFFF;
        int rm = ((yyvsp[(3) - (3)].intval) >> 16) & 0xFFFF, re = (yyvsp[(3) - (3)].intval) & 0xFFFF;
        /* Later entries override earlier ones; 0 means "not set in this item". */
        int m  = rm ? rm : lm;
        int ef = re ? re : le;
        (yyval.intval) = (m << 16) | ef;
    ;}
    break;

  case 403:
#line 1815 "evolution/parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 404:
#line 1825 "evolution/parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 405:
#line 1830 "evolution/parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 406:
#line 1835 "evolution/parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 407:
#line 1841 "evolution/parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 408:
#line 1848 "evolution/parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 409:
#line 1855 "evolution/parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1862 "evolution/parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 411:
#line 1872 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 412:
#line 1879 "evolution/parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 413:
#line 1888 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 414:
#line 1895 "evolution/parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1901 "evolution/parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 416:
#line 1909 "evolution/parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 417:
#line 1915 "evolution/parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 419:
#line 1923 "evolution/parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 420:
#line 1924 "evolution/parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 421:
#line 1925 "evolution/parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 422:
#line 1926 "evolution/parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 423:
#line 1942 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 424:
#line 1943 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1944 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1953 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1954 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1959 "evolution/parser/evoparser.y"
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

  case 429:
#line 1969 "evolution/parser/evoparser.y"
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

  case 430:
#line 1984 "evolution/parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 431:
#line 1985 "evolution/parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 432:
#line 1990 "evolution/parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 433:
#line 1998 "evolution/parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s CASCADE", (yyvsp[(4) - (5)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (5)].strval));
        SetCheckpointStoreCascade(1);
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 434:
#line 2007 "evolution/parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 435:
#line 2029 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 436:
#line 2030 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 437:
#line 2031 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2036 "evolution/parser/evoparser.y"
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

  case 439:
#line 2053 "evolution/parser/evoparser.y"
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

  case 440:
#line 2074 "evolution/parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 441:
#line 2075 "evolution/parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 442:
#line 2081 "evolution/parser/evoparser.y"
    {
        emit("CHECKPOINT GET FROM %s THREAD %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (6)].strval));
        SetCheckpointThread((yyvsp[(6) - (6)].strval));
        CheckpointGetProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 443:
#line 2090 "evolution/parser/evoparser.y"
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

  case 444:
#line 2104 "evolution/parser/evoparser.y"
    {
        emit("CHECKPOINT LIST FROM %s THREAD %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (6)].strval));
        SetCheckpointThread((yyvsp[(6) - (6)].strval));
        CheckpointListProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 445:
#line 2113 "evolution/parser/evoparser.y"
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

  case 446:
#line 2138 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 447:
#line 2139 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 448:
#line 2140 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2141 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2142 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2143 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2144 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2149 "evolution/parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 454:
#line 2156 "evolution/parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 455:
#line 2167 "evolution/parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 460:
#line 2181 "evolution/parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 461:
#line 2183 "evolution/parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 462:
#line 2188 "evolution/parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 463:
#line 2196 "evolution/parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s CASCADE", (yyvsp[(4) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (5)].strval));
        SetMemoryStoreCascade(1);
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 464:
#line 2205 "evolution/parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 465:
#line 2217 "evolution/parser/evoparser.y"
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

  case 466:
#line 2229 "evolution/parser/evoparser.y"
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

  case 467:
#line 2243 "evolution/parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 468:
#line 2244 "evolution/parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 469:
#line 2250 "evolution/parser/evoparser.y"
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

  case 470:
#line 2264 "evolution/parser/evoparser.y"
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

  case 471:
#line 2274 "evolution/parser/evoparser.y"
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

  case 472:
#line 2288 "evolution/parser/evoparser.y"
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

  case 473:
#line 2302 "evolution/parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 474:
#line 2310 "evolution/parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s PREFIX %s", (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (7)].strval));
        SetMemoryPrefix((yyvsp[(7) - (7)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 475:
#line 2321 "evolution/parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 476:
#line 2327 "evolution/parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 477:
#line 2338 "evolution/parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2344 "evolution/parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 479:
#line 2351 "evolution/parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2357 "evolution/parser/evoparser.y"
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

  case 481:
#line 2373 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 482:
#line 2380 "evolution/parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 483:
#line 2389 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 484:
#line 2397 "evolution/parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 485:
#line 2403 "evolution/parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 487:
#line 2420 "evolution/parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 488:
#line 2424 "evolution/parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 489:
#line 2433 "evolution/parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 491:
#line 2448 "evolution/parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 492:
#line 2452 "evolution/parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 493:
#line 2457 "evolution/parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 494:
#line 2464 "evolution/parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 495:
#line 2469 "evolution/parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 496:
#line 2476 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 497:
#line 2480 "evolution/parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 498:
#line 2481 "evolution/parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 499:
#line 2487 "evolution/parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 500:
#line 2499 "evolution/parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 501:
#line 2508 "evolution/parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 502:
#line 2509 "evolution/parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 503:
#line 2510 "evolution/parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 504:
#line 2514 "evolution/parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 505:
#line 2515 "evolution/parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 506:
#line 2516 "evolution/parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 507:
#line 2517 "evolution/parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 508:
#line 2518 "evolution/parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 509:
#line 2519 "evolution/parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 512:
#line 2528 "evolution/parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 513:
#line 2529 "evolution/parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 515:
#line 2534 "evolution/parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 517:
#line 2539 "evolution/parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 518:
#line 2544 "evolution/parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 519:
#line 2551 "evolution/parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 520:
#line 2560 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 521:
#line 2566 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 522:
#line 2572 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 523:
#line 2579 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 524:
#line 2585 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 525:
#line 2592 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 526:
#line 2598 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 527:
#line 2604 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 528:
#line 2610 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 529:
#line 2616 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 530:
#line 2622 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 531:
#line 2628 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 532:
#line 2634 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 533:
#line 2640 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 534:
#line 2646 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 535:
#line 2652 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 536:
#line 2658 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 537:
#line 2664 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 538:
#line 2670 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 539:
#line 2676 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 540:
#line 2682 "evolution/parser/evoparser.y"
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

  case 541:
#line 2695 "evolution/parser/evoparser.y"
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

  case 542:
#line 2705 "evolution/parser/evoparser.y"
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

  case 543:
#line 2715 "evolution/parser/evoparser.y"
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

  case 544:
#line 2726 "evolution/parser/evoparser.y"
    { ;}
    break;

  case 545:
#line 2727 "evolution/parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 546:
#line 2728 "evolution/parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 547:
#line 2732 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 548:
#line 2740 "evolution/parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 549:
#line 2746 "evolution/parser/evoparser.y"
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

  case 551:
#line 2759 "evolution/parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 552:
#line 2759 "evolution/parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 555:
#line 2767 "evolution/parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 556:
#line 2768 "evolution/parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 557:
#line 2769 "evolution/parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 558:
#line 2773 "evolution/parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 559:
#line 2774 "evolution/parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 560:
#line 2775 "evolution/parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 561:
#line 2779 "evolution/parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 562:
#line 2787 "evolution/parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 563:
#line 2796 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 564:
#line 2797 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 565:
#line 2798 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 566:
#line 2799 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 567:
#line 2800 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 571:
#line 2807 "evolution/parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 572:
#line 2811 "evolution/parser/evoparser.y"
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

  case 573:
#line 2821 "evolution/parser/evoparser.y"
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

  case 574:
#line 2833 "evolution/parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 575:
#line 2834 "evolution/parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 576:
#line 2834 "evolution/parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 577:
#line 2837 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 578:
#line 2838 "evolution/parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 579:
#line 2839 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 580:
#line 2840 "evolution/parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 581:
#line 2844 "evolution/parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 582:
#line 2847 "evolution/parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 583:
#line 2848 "evolution/parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 584:
#line 2849 "evolution/parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 585:
#line 2850 "evolution/parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 586:
#line 2856 "evolution/parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 587:
#line 2862 "evolution/parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 588:
#line 2867 "evolution/parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 589:
#line 2872 "evolution/parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 590:
#line 2876 "evolution/parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 591:
#line 2880 "evolution/parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 592:
#line 2882 "evolution/parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 595:
#line 2888 "evolution/parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 596:
#line 2889 "evolution/parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 597:
#line 2893 "evolution/parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 598:
#line 2894 "evolution/parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 599:
#line 2898 "evolution/parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 600:
#line 2899 "evolution/parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 601:
#line 2900 "evolution/parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 608:
#line 2915 "evolution/parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 609:
#line 2916 "evolution/parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 610:
#line 2917 "evolution/parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 611:
#line 2918 "evolution/parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 612:
#line 2919 "evolution/parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 613:
#line 2920 "evolution/parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 614:
#line 2921 "evolution/parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 615:
#line 2922 "evolution/parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 616:
#line 2927 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 617:
#line 2936 "evolution/parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 618:
#line 2943 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 619:
#line 2944 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 620:
#line 2945 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 621:
#line 2950 "evolution/parser/evoparser.y"
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

  case 622:
#line 2961 "evolution/parser/evoparser.y"
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

  case 623:
#line 2973 "evolution/parser/evoparser.y"
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

  case 624:
#line 2984 "evolution/parser/evoparser.y"
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

  case 625:
#line 2999 "evolution/parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 626:
#line 3003 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 627:
#line 3007 "evolution/parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 628:
#line 3008 "evolution/parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 629:
#line 3013 "evolution/parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 630:
#line 3015 "evolution/parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 631:
#line 3017 "evolution/parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 632:
#line 3019 "evolution/parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 633:
#line 3022 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 634:
#line 3023 "evolution/parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 635:
#line 3029 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 636:
#line 3034 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 637:
#line 3036 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 638:
#line 3038 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 639:
#line 3040 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 640:
#line 3042 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 641:
#line 3046 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 642:
#line 3050 "evolution/parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 643:
#line 3051 "evolution/parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 644:
#line 3056 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 645:
#line 3066 "evolution/parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 647:
#line 3079 "evolution/parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 648:
#line 3087 "evolution/parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 649:
#line 3095 "evolution/parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 651:
#line 3103 "evolution/parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 652:
#line 3104 "evolution/parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 653:
#line 3105 "evolution/parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 654:
#line 3106 "evolution/parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 655:
#line 3108 "evolution/parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 656:
#line 3110 "evolution/parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 657:
#line 3112 "evolution/parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 660:
#line 3120 "evolution/parser/evoparser.y"
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

  case 661:
#line 3135 "evolution/parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 662:
#line 3143 "evolution/parser/evoparser.y"
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

  case 663:
#line 3157 "evolution/parser/evoparser.y"
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

  case 664:
#line 3171 "evolution/parser/evoparser.y"
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

  case 665:
#line 3185 "evolution/parser/evoparser.y"
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

  case 666:
#line 3197 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 667:
#line 3198 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 668:
#line 3199 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 669:
#line 3202 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 670:
#line 3203 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 671:
#line 3206 "evolution/parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 672:
#line 3207 "evolution/parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 673:
#line 3208 "evolution/parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 674:
#line 3209 "evolution/parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 675:
#line 3210 "evolution/parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 676:
#line 3211 "evolution/parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 677:
#line 3212 "evolution/parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 678:
#line 3213 "evolution/parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 679:
#line 3215 "evolution/parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 680:
#line 3217 "evolution/parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 681:
#line 3219 "evolution/parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 682:
#line 3221 "evolution/parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 683:
#line 3223 "evolution/parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 684:
#line 3225 "evolution/parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 685:
#line 3228 "evolution/parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 686:
#line 3229 "evolution/parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 687:
#line 3232 "evolution/parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 688:
#line 3233 "evolution/parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 689:
#line 3236 "evolution/parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 690:
#line 3237 "evolution/parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 692:
#line 3241 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 693:
#line 3242 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 694:
#line 3243 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 695:
#line 3244 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 696:
#line 3245 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 697:
#line 3246 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 698:
#line 3247 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 699:
#line 3248 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 700:
#line 3249 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 701:
#line 3250 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 702:
#line 3251 "evolution/parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 703:
#line 3252 "evolution/parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 704:
#line 3253 "evolution/parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 705:
#line 3254 "evolution/parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 706:
#line 3255 "evolution/parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 707:
#line 3256 "evolution/parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 708:
#line 3257 "evolution/parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 709:
#line 3260 "evolution/parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 710:
#line 3261 "evolution/parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 711:
#line 3264 "evolution/parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 712:
#line 3266 "evolution/parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 713:
#line 3274 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 714:
#line 3275 "evolution/parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 716:
#line 3277 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 717:
#line 3278 "evolution/parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 718:
#line 3279 "evolution/parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 719:
#line 3280 "evolution/parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 720:
#line 3281 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 721:
#line 3282 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 722:
#line 3283 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 723:
#line 3284 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 724:
#line 3285 "evolution/parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 725:
#line 3292 "evolution/parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 726:
#line 3293 "evolution/parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 727:
#line 3294 "evolution/parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 728:
#line 3295 "evolution/parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 729:
#line 3296 "evolution/parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 730:
#line 3297 "evolution/parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 731:
#line 3298 "evolution/parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 732:
#line 3299 "evolution/parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 733:
#line 3300 "evolution/parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 734:
#line 3301 "evolution/parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 735:
#line 3302 "evolution/parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 736:
#line 3303 "evolution/parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 737:
#line 3304 "evolution/parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 738:
#line 3305 "evolution/parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 739:
#line 3306 "evolution/parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 740:
#line 3307 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 741:
#line 3308 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 742:
#line 3309 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 743:
#line 3310 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 744:
#line 3311 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 745:
#line 3312 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 746:
#line 3315 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 747:
#line 3316 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 748:
#line 3317 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 749:
#line 3320 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 750:
#line 3321 "evolution/parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 751:
#line 3324 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 752:
#line 3325 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 753:
#line 3326 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 755:
#line 3330 "evolution/parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 756:
#line 3331 "evolution/parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 757:
#line 3335 "evolution/parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 758:
#line 3336 "evolution/parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 759:
#line 3337 "evolution/parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 760:
#line 3338 "evolution/parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 761:
#line 3339 "evolution/parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 762:
#line 3340 "evolution/parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 763:
#line 3341 "evolution/parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 764:
#line 3342 "evolution/parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 765:
#line 3343 "evolution/parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 766:
#line 3344 "evolution/parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 767:
#line 3345 "evolution/parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 768:
#line 3346 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 769:
#line 3347 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 770:
#line 3348 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 771:
#line 3349 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 772:
#line 3350 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 773:
#line 3351 "evolution/parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 774:
#line 3352 "evolution/parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 775:
#line 3353 "evolution/parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 776:
#line 3354 "evolution/parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 777:
#line 3355 "evolution/parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 778:
#line 3356 "evolution/parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 779:
#line 3357 "evolution/parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 780:
#line 3358 "evolution/parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 781:
#line 3359 "evolution/parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 782:
#line 3360 "evolution/parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 783:
#line 3361 "evolution/parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 784:
#line 3362 "evolution/parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 785:
#line 3363 "evolution/parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 786:
#line 3364 "evolution/parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 787:
#line 3365 "evolution/parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 788:
#line 3366 "evolution/parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 789:
#line 3367 "evolution/parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 790:
#line 3368 "evolution/parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 791:
#line 3369 "evolution/parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 792:
#line 3372 "evolution/parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 793:
#line 3373 "evolution/parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 794:
#line 3377 "evolution/parser/evoparser.y"
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

  case 795:
#line 3389 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 796:
#line 3390 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 797:
#line 3391 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 798:
#line 3395 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 799:
#line 3398 "evolution/parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 800:
#line 3399 "evolution/parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 804:
#line 3403 "evolution/parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 805:
#line 3404 "evolution/parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 806:
#line 3412 "evolution/parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 807:
#line 3417 "evolution/parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 808:
#line 3423 "evolution/parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 809:
#line 3429 "evolution/parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 810:
#line 3436 "evolution/parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 811:
#line 3443 "evolution/parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 812:
#line 3449 "evolution/parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 813:
#line 3455 "evolution/parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 814:
#line 3462 "evolution/parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 819:
#line 3478 "evolution/parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 820:
#line 3479 "evolution/parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 821:
#line 3480 "evolution/parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 822:
#line 3481 "evolution/parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 823:
#line 3484 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 824:
#line 3485 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 825:
#line 3486 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 826:
#line 3487 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 827:
#line 3488 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 828:
#line 3489 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 829:
#line 3490 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 830:
#line 3491 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 831:
#line 3492 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 832:
#line 3493 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 841:
#line 3510 "evolution/parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 842:
#line 3511 "evolution/parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 963:
#line 3529 "evolution/parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 964:
#line 3536 "evolution/parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 965:
#line 3541 "evolution/parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 966:
#line 3547 "evolution/parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 967:
#line 3553 "evolution/parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 968:
#line 3559 "evolution/parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 969:
#line 3570 "evolution/parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 970:
#line 3575 "evolution/parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 971:
#line 3581 "evolution/parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 974:
#line 3592 "evolution/parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 975:
#line 3593 "evolution/parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 976:
#line 3594 "evolution/parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 977:
#line 3595 "evolution/parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 978:
#line 3596 "evolution/parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 979:
#line 3597 "evolution/parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 980:
#line 3598 "evolution/parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 981:
#line 3605 "evolution/parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 982:
#line 3610 "evolution/parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 983:
#line 3617 "evolution/parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 984:
#line 3618 "evolution/parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 985:
#line 3621 "evolution/parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 986:
#line 3622 "evolution/parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 987:
#line 3623 "evolution/parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 988:
#line 3626 "evolution/parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 989:
#line 3631 "evolution/parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 990:
#line 3637 "evolution/parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 991:
#line 3646 "evolution/parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 992:
#line 3654 "evolution/parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 993:
#line 3664 "evolution/parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 994:
#line 3669 "evolution/parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 997:
#line 3682 "evolution/parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 998:
#line 3683 "evolution/parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 999:
#line 3684 "evolution/parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1000:
#line 3685 "evolution/parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1001:
#line 3686 "evolution/parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1002:
#line 3687 "evolution/parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1003:
#line 3688 "evolution/parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1004:
#line 3689 "evolution/parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1005:
#line 3692 "evolution/parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1006:
#line 3697 "evolution/parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1007:
#line 3703 "evolution/parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1008:
#line 3713 "evolution/parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1009:
#line 3720 "evolution/parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1010:
#line 3727 "evolution/parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1011:
#line 3735 "evolution/parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1013:
#line 3745 "evolution/parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1015:
#line 3749 "evolution/parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1016:
#line 3750 "evolution/parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12311 "evolution/parser/evoparser.tab.c"
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


#line 3753 "evolution/parser/evoparser.y"

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
