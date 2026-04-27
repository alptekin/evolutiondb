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
     FEVO_CURRENT_XID = 659,
     SYSTEM = 660,
     VERSIONING = 661
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
#define SYSTEM 660
#define VERSIONING 661




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
#line 981 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 994 "parser/evoparser.tab.c"

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
#define YYLAST   13907

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  424
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1017
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2609

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   661

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     419,   420,    28,    26,   421,    27,   418,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   417,
       2,   423,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   422,    32,     2,     2,     2,     2,     2,
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
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416
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
    3208,  3209,  3214,  3218,  3224,  3230,  3240,  3251,  3259,  3264,
    3266,  3270,  3280,  3290,  3300,  3307,  3319,  3328,  3329,  3331,
    3334,  3336,  3340,  3346,  3354,  3359,  3364,  3370,  3376,  3381,
    3388,  3400,  3414,  3428,  3444,  3449,  3456,  3458,  3462,  3464,
    3468,  3470,  3474,  3475,  3480,  3486,  3491,  3497,  3502,  3508,
    3513,  3519,  3524,  3529,  3533,  3537,  3541,  3544,  3548,  3553,
    3558,  3560,  3564,  3565,  3570,  3571,  3575,  3578,  3582,  3586,
    3590,  3594,  3600,  3606,  3612,  3616,  3622,  3625,  3633,  3639,
    3647,  3653,  3656,  3660,  3663,  3667,  3670,  3674,  3680,  3685,
    3691,  3699,  3708,  3717,  3725,  3732,  3739,  3745,  3746,  3750,
    3756,  3757,  3759,  3760,  3763,  3766,  3767,  3772,  3776,  3779,
    3783,  3787,  3791,  3795,  3799,  3803,  3807,  3811,  3815,  3819,
    3821,  3823,  3825,  3827,  3829,  3833,  3839,  3842,  3847,  3849,
    3851,  3853,  3855,  3859,  3863,  3867,  3871,  3877,  3883,  3885,
    3887,  3889,  3894,  3898,  3900,  3904,  3908,  3909,  3911,  3913,
    3915,  3919,  3923,  3926,  3928,  3932,  3936,  3940,  3942,  3953,
    3963,  3976,  3988,  4001,  4013,  4028,  4042,  4043,  4045,  4047,
    4051,  4054,  4058,  4062,  4066,  4068,  4070,  4072,  4074,  4076,
    4078,  4080,  4082,  4084,  4086,  4087,  4090,  4095,  4101,  4107,
    4113,  4119,  4125,  4127,  4129,  4131,  4133,  4135,  4137,  4139,
    4141,  4143,  4145,  4147,  4149,  4151,  4153,  4155,  4157,  4159,
    4161,  4163,  4165,  4167,  4169,  4171,  4173,  4175,  4177,  4179,
    4181,  4183,  4185,  4187,  4189,  4191,  4193,  4195,  4197,  4199,
    4201,  4203,  4205,  4207,  4209,  4211,  4213,  4215,  4217,  4219,
    4221,  4223,  4225,  4227,  4229,  4231,  4233,  4235,  4237,  4239,
    4241,  4243,  4245,  4247,  4249,  4251,  4253,  4255,  4257,  4259,
    4261,  4263,  4265,  4267,  4269,  4271,  4273,  4275,  4277,  4279,
    4281,  4283,  4285,  4287,  4289,  4291,  4293,  4295,  4297,  4299,
    4301,  4303,  4305,  4307,  4309,  4311,  4313,  4315,  4317,  4319,
    4321,  4323,  4325,  4327,  4329,  4331,  4333,  4335,  4337,  4339,
    4341,  4343,  4345,  4347,  4349,  4351,  4353,  4355,  4357,  4359,
    4361,  4363,  4365,  4367,  4369,  4371,  4373,  4377,  4383,  4387,
    4393,  4395,  4400,  4406,  4408,  4412,  4414,  4416,  4418,  4420,
    4422,  4424,  4426,  4428,  4442,  4444,  4446,  4448,  4450,  4452,
    4454,  4458,  4464,  4469,  4474,  4476,  4482,  4483,  4486,  4490,
    4493,  4497,  4500,  4503,  4506,  4508,  4511,  4513,  4517,  4523,
    4528,  4533,  4540,  4547,  4548,  4551,  4554,  4556
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     425,     0,    -1,   464,   417,    -1,   464,   417,   425,    -1,
       3,    -1,     3,   418,     3,    -1,    89,   418,     3,    -1,
     183,   419,     3,   420,    91,   419,     4,   420,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   426,    26,   426,    -1,   426,    27,   426,    -1,   426,
      28,   426,    -1,   426,    29,   426,    -1,   426,    30,   426,
      -1,   426,    31,   426,    -1,    27,   426,    -1,   419,   426,
     420,    -1,   426,    12,   426,    -1,   426,    10,   426,    -1,
     426,    11,   426,    -1,   426,    23,   426,    -1,   426,    24,
     426,    -1,   426,    32,   426,    -1,   426,    25,   426,    -1,
     426,    34,   426,    -1,   426,    33,   426,    -1,    18,   426,
      -1,    17,   426,    -1,   426,    20,   426,    -1,    -1,   426,
      20,   419,   427,   465,   420,    -1,    -1,   426,    20,    47,
     419,   428,   465,   420,    -1,    -1,   426,    20,   232,   419,
     429,   465,   420,    -1,    -1,   426,    20,    40,   419,   430,
     465,   420,    -1,   426,    20,    47,   419,   434,   420,    -1,
     426,    20,   232,   419,   434,   420,    -1,   426,    15,   193,
      -1,   426,    15,    18,   193,    -1,   426,    15,     6,    -1,
     426,    15,    18,     6,    -1,     8,     9,   426,    -1,   426,
      19,   426,    50,   426,    -1,   426,    18,    19,   426,    50,
     426,    -1,   426,    -1,   426,   421,   431,    -1,   426,    -1,
     426,   421,   432,    -1,    -1,   263,    36,   433,   432,   422,
      -1,   263,    36,   422,    -1,   426,    36,   426,   422,    -1,
     426,    -1,   380,   419,   426,   420,    -1,   380,   419,   426,
     421,   426,   420,    -1,   381,   419,   426,   420,    -1,   382,
     419,   426,   421,   426,   420,    -1,   383,   419,   420,    -1,
     414,   419,   420,    -1,   384,   419,   426,   421,   426,   420,
      -1,   385,   419,   426,   421,   426,   420,    -1,   386,   419,
     426,   421,   426,   420,    -1,   387,   419,   426,   421,   426,
     420,    -1,   388,   419,   426,   420,    -1,   389,   419,   426,
     420,    -1,   390,   419,   426,   420,    -1,   426,    22,   426,
      -1,   426,    21,   426,    -1,   392,   419,   426,   421,   426,
     421,   426,   421,     5,   420,    -1,   393,   419,   426,   421,
     426,   421,   426,   421,     5,   421,     4,   420,    -1,   394,
     419,   426,   421,   426,   421,   426,   421,     5,   421,     4,
     420,    -1,    -1,   431,    -1,    -1,   426,    16,   419,   436,
     431,   420,    -1,    -1,   426,    18,    16,   419,   437,   431,
     420,    -1,    -1,   426,    16,   419,   438,   465,   420,    -1,
      -1,   426,    18,    16,   419,   439,   465,   420,    -1,    -1,
     281,   419,   440,   465,   420,    -1,     3,   419,   435,   420,
      -1,   322,   419,    28,   420,    -1,   322,   419,   426,   420,
      -1,   323,   419,   426,   420,    -1,   324,   419,   426,   420,
      -1,   325,   419,   426,   420,    -1,   326,   419,   426,   420,
      -1,   320,   419,   426,   420,    -1,   320,   419,   426,   321,
       4,   420,    -1,    -1,   342,   419,   420,   350,   419,   441,
     472,   474,   420,    -1,    -1,   343,   419,   420,   350,   419,
     442,   472,   474,   420,    -1,    -1,   344,   419,   420,   350,
     419,   443,   472,   474,   420,    -1,    -1,   323,   419,   426,
     420,   350,   419,   444,   472,   474,   420,    -1,    -1,   322,
     419,    28,   420,   350,   419,   445,   472,   474,   420,    -1,
      -1,   322,   419,   426,   420,   350,   419,   446,   472,   474,
     420,    -1,    -1,   324,   419,   426,   420,   350,   419,   447,
     472,   474,   420,    -1,    -1,   325,   419,   426,   420,   350,
     419,   448,   472,   474,   420,    -1,    -1,   326,   419,   426,
     420,   350,   419,   449,   472,   474,   420,    -1,    -1,   345,
     419,   426,   420,   350,   419,   450,   472,   474,   420,    -1,
      -1,   345,   419,   426,   421,     5,   420,   350,   419,   451,
     472,   474,   420,    -1,    -1,   345,   419,   426,   421,     5,
     421,     4,   420,   350,   419,   452,   472,   474,   420,    -1,
      -1,   345,   419,   426,   421,     5,   421,     5,   420,   350,
     419,   453,   472,   474,   420,    -1,    -1,   346,   419,   426,
     420,   350,   419,   454,   472,   474,   420,    -1,    -1,   346,
     419,   426,   421,     5,   420,   350,   419,   455,   472,   474,
     420,    -1,    -1,   346,   419,   426,   421,     5,   421,     4,
     420,   350,   419,   456,   472,   474,   420,    -1,    -1,   346,
     419,   426,   421,     5,   421,     5,   420,   350,   419,   457,
     472,   474,   420,    -1,    -1,   347,   419,     5,   420,   350,
     419,   458,   472,   474,   420,    -1,    -1,   348,   419,   420,
     350,   419,   459,   472,   474,   420,    -1,    -1,   349,   419,
     420,   350,   419,   460,   472,   474,   420,    -1,   282,   419,
     426,   421,   426,   421,   426,   420,    -1,   282,   419,   426,
     421,   426,   420,    -1,   282,   419,   426,   136,   426,   420,
      -1,   282,   419,   426,   136,   426,   140,   426,   420,    -1,
     283,   419,   426,   420,    -1,   283,   419,   461,   426,   136,
     426,   420,    -1,   283,   419,   461,   136,   426,   420,    -1,
     327,   419,   426,   420,    -1,   328,   419,   426,   420,    -1,
     329,   419,   426,   420,    -1,   330,   419,   426,   421,   426,
     420,    -1,   331,   419,   426,   421,   426,   421,   426,   420,
      -1,   332,   419,   426,   421,   426,   420,    -1,   294,   419,
     426,   421,   426,   420,    -1,   295,   419,   426,   421,   426,
     420,    -1,   296,   419,   426,   421,   426,   421,   426,   420,
      -1,   297,   419,   426,   421,   426,   421,   426,   420,    -1,
     298,   419,   426,   420,    -1,   299,   419,   426,   421,   426,
     420,    -1,   300,   419,   426,   421,   426,   420,    -1,   301,
     419,   426,   421,   426,   420,    -1,   302,   419,   426,   420,
      -1,   303,   419,   426,   420,    -1,   304,   419,   426,   420,
      -1,   305,   419,   426,   421,   426,   420,    -1,   305,   419,
     426,   420,    -1,   306,   419,   426,   421,   426,   420,    -1,
     307,   419,   426,   420,    -1,   308,   419,   426,   421,   426,
     420,    -1,   309,   419,   420,    -1,   310,   419,   426,   420,
      -1,   311,   419,   426,   420,    -1,   312,   419,   426,   420,
      -1,   313,   419,   420,    -1,   293,   419,   420,    -1,   286,
     419,   426,   421,   426,   420,    -1,   287,   419,   426,   420,
      -1,   288,   419,   426,   420,    -1,   289,   419,   426,   420,
      -1,   290,   419,   426,   420,    -1,   291,   419,   426,   420,
      -1,   292,   419,   426,   420,    -1,   352,   419,   426,   421,
     426,   420,    -1,   353,   419,   426,   420,    -1,   354,   419,
     426,   420,    -1,   355,   419,   426,   420,    -1,   356,   419,
     426,   420,    -1,   357,   419,   426,   420,    -1,   358,   419,
     426,   420,    -1,   359,   419,   426,   420,    -1,   360,   419,
     426,   420,    -1,   361,   419,   426,   421,   426,   421,   426,
     420,    -1,   362,   419,   426,   421,   426,   421,   426,   420,
      -1,   363,   419,   426,   421,   426,   421,   426,   420,    -1,
     364,   419,   426,   421,   426,   420,    -1,   365,   419,   426,
     421,   426,   420,    -1,   366,   419,   426,   421,   426,   421,
     426,   420,    -1,   367,   419,   426,   421,   426,   421,   426,
     420,    -1,   368,   419,   426,   421,   426,   420,    -1,   368,
     419,   426,   421,   426,   421,   426,   421,   426,   420,    -1,
     369,   419,   426,   420,    -1,   369,   419,   426,   421,   426,
     420,    -1,   369,   419,   426,   421,   426,   421,   426,   420,
      -1,   370,   419,   426,   420,    -1,   372,   419,   426,   420,
      -1,   373,   419,   426,   420,    -1,   374,   419,   426,   421,
     426,   420,    -1,   374,   419,   426,   421,   426,   421,   426,
     420,    -1,   375,   419,   420,    -1,   314,   419,   426,    51,
     612,   420,    -1,   315,   419,   426,   421,   612,   420,    -1,
     316,   419,   426,   421,   426,   420,    -1,   317,   419,   426,
     421,   426,   420,    -1,   318,   419,   426,   421,   426,   421,
     426,   420,    -1,   426,    15,   319,    -1,   330,   419,   426,
     421,   426,   421,   426,   420,    -1,   330,   419,   426,   421,
     426,   421,   426,   421,   426,   420,    -1,   333,   419,   420,
      -1,   334,   419,   420,    -1,   335,   419,   420,    -1,   336,
     419,   420,    -1,   337,   419,   420,    -1,   338,    -1,   339,
      -1,   340,   419,   426,   420,    -1,   341,   419,   426,   421,
     426,   420,    -1,   178,    -1,   254,    -1,    65,    -1,   284,
     419,   426,   421,   462,   420,    -1,   285,   419,   426,   421,
     462,   420,    -1,   161,   426,   278,    -1,   161,   426,   104,
      -1,   161,   426,   105,    -1,   161,   426,   109,    -1,   161,
     426,   111,    -1,   161,   426,   279,    -1,   161,   426,   145,
      -1,   161,   426,   144,    -1,   161,   426,   147,    -1,    77,
     426,   463,   124,    -1,    77,   426,   463,   125,   426,   124,
      -1,    77,   463,   124,    -1,    77,   463,   125,   426,   124,
      -1,   275,   426,   253,   426,    -1,   463,   275,   426,   253,
     426,    -1,   426,    14,   426,    -1,   426,    18,    14,   426,
      -1,   426,    13,   426,    -1,   426,    18,    13,   426,    -1,
      72,    -1,    80,    -1,    81,    -1,   225,    -1,   465,    -1,
     241,   484,   485,    -1,   241,   484,   485,   136,   488,   480,
     466,   467,   471,   476,   479,   481,   482,    -1,   241,   484,
     485,   159,     3,   136,   488,   466,   467,   471,   476,   479,
      -1,    -1,   274,   426,    -1,    -1,   141,    63,   468,   470,
      -1,   426,   469,    -1,   468,   421,   426,   469,    -1,    -1,
      49,    -1,   112,    -1,    -1,   277,   214,    -1,    -1,   148,
     426,    -1,    -1,   351,    63,   473,    -1,     3,    -1,   473,
     421,     3,    -1,    -1,   198,    63,   475,    -1,     3,   469,
      -1,   475,   421,     3,   469,    -1,    -1,   198,    63,   477,
      -1,   478,    -1,   477,   421,   478,    -1,     3,   469,    -1,
       3,   418,     3,   469,    -1,     5,   469,    -1,    -1,   179,
     426,    -1,   179,   426,   421,   426,    -1,   179,   426,   181,
     426,    -1,    -1,   140,   412,    51,    94,   413,     5,    -1,
      -1,   140,   258,    -1,   140,   230,    -1,   140,   258,   231,
     180,    -1,   140,   230,   231,   180,    -1,    -1,   159,   483,
      -1,     3,    -1,   483,   421,     3,    -1,    -1,   484,    40,
      -1,   484,   106,    -1,   484,   110,    -1,   484,   146,    -1,
     484,   238,    -1,   484,   226,    -1,   484,   234,    -1,   484,
     233,    -1,   486,    -1,   485,   421,   486,    -1,    28,    -1,
     426,   487,    -1,    51,     3,    -1,     3,    -1,    -1,   489,
      -1,   488,   421,   489,    -1,   490,    -1,   494,    -1,     3,
     487,   501,    -1,   173,     3,   487,   501,    -1,     3,   418,
       3,   487,   501,    -1,   504,   493,     3,    -1,   491,   493,
       3,    -1,   381,   419,   426,   420,    -1,   381,   419,   426,
     420,   493,     3,    -1,   381,   419,   426,   420,   493,     3,
     419,     3,   420,    -1,   419,   488,   420,    -1,    -1,   167,
     419,   492,   465,   420,    -1,    51,    -1,    -1,   489,   495,
     163,   490,   499,    -1,   489,   238,   490,    -1,   489,   238,
     490,   197,   426,    -1,   489,   497,   496,   163,   490,   500,
      -1,   489,   190,   498,   163,   490,    -1,    -1,   153,    -1,
      76,    -1,    -1,   196,    -1,   177,    -1,   215,    -1,   177,
     496,    -1,   215,   496,    -1,    -1,    -1,   500,    -1,   197,
     426,    -1,   266,   419,   483,   420,    -1,   267,   164,   502,
     419,   503,   420,    -1,   154,   164,   502,   419,   503,   420,
      -1,   133,   164,   502,   419,   503,   420,    -1,    -1,   140,
     163,    -1,    -1,     3,    -1,   503,   421,     3,    -1,   419,
     465,   420,    -1,   505,    -1,   107,   506,   136,     3,   466,
     476,   479,   638,    -1,   506,   176,    -1,   506,   203,    -1,
     506,   154,    -1,    -1,   107,   506,   507,   136,   488,   466,
      -1,     3,   508,    -1,   507,   421,     3,   508,    -1,    -1,
     418,    28,    -1,   107,   506,   136,   507,   266,   488,   466,
      -1,   509,    -1,   108,   252,     3,   510,    -1,   108,   252,
     156,   281,     3,   510,    -1,    -1,    74,    -1,   210,    -1,
     511,    -1,    73,   155,     3,   197,     3,   419,   516,   420,
      -1,    73,   138,   155,     3,   197,     3,   419,   516,   420,
      -1,    73,   155,   156,   281,     3,   197,     3,   419,   516,
     420,    -1,    73,   261,   155,     3,   197,     3,   419,   516,
     420,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     419,   516,   420,    -1,    73,   155,     3,   197,     3,   266,
     268,   419,   516,   420,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   268,   419,   516,   420,    -1,    73,   261,
     155,     3,   197,     3,   266,   268,   419,   516,   420,    -1,
      73,   261,   155,   156,   281,     3,   197,     3,   266,   268,
     419,   516,   420,    -1,    73,   155,    85,     3,   197,     3,
     419,   516,   420,    -1,    73,   155,    85,   156,   281,     3,
     197,     3,   419,   516,   420,    -1,    73,   261,   155,    85,
       3,   197,     3,   419,   516,   420,    -1,    73,   261,   155,
      85,   156,   281,     3,   197,     3,   419,   516,   420,    -1,
      73,   155,    85,     3,   197,     3,   266,   268,   419,   516,
     420,    -1,    73,   261,   155,    85,     3,   197,     3,   266,
     268,   419,   516,   420,    -1,    73,   155,     3,   197,     3,
     266,   391,   419,     3,   512,   420,   513,    -1,    73,   155,
     156,   281,     3,   197,     3,   266,   391,   419,     3,   512,
     420,   513,    -1,    -1,     3,    -1,    -1,   277,   419,   514,
     420,    -1,   515,    -1,   514,   421,   515,    -1,     3,    20,
       5,    -1,     3,    -1,   516,   421,     3,    -1,   517,    -1,
     327,   419,     3,   420,    -1,   328,   419,     3,   420,    -1,
     329,   419,     3,   420,    -1,   330,   419,     3,   421,     3,
     420,    -1,   518,    -1,   108,   155,     3,    -1,   519,   521,
      -1,   255,   252,     3,    -1,   255,   252,     3,   421,   520,
      -1,     3,    -1,   520,   421,     3,    -1,    -1,   521,    74,
      -1,   521,   210,    -1,   521,    55,    53,    -1,   521,    54,
      53,    -1,   541,    -1,   542,    -1,   543,    -1,   522,    -1,
     524,    -1,    73,   395,   396,     3,   523,    -1,    73,   395,
     396,   156,   281,     3,   523,    -1,    -1,   277,   419,   397,
      20,     4,   420,    -1,   108,   395,   396,     3,    -1,   108,
     395,   396,     3,    74,    -1,   108,   395,   396,   156,   281,
       3,    -1,   525,    -1,   527,    -1,   528,    -1,   395,   398,
     159,     3,   271,   419,   526,   421,   526,   421,   526,   421,
     526,   421,   526,   421,   526,   421,   526,   420,    -1,   395,
     398,   401,   159,     3,   271,   419,   526,   421,   526,   421,
     526,   421,   526,   421,   526,   421,   526,   421,   526,   420,
      -1,     4,    -1,   193,    -1,   395,   399,   136,     3,   402,
       4,    -1,   395,   399,   136,     3,   402,     4,   403,     4,
      -1,   395,   400,   136,     3,   402,     4,    -1,   395,   400,
     136,     3,   402,     4,   179,     5,    -1,   529,    -1,   534,
      -1,   535,    -1,   537,    -1,   538,    -1,   539,    -1,   540,
      -1,    73,   404,   396,     3,   530,   531,    -1,    73,   404,
     396,   156,   281,     3,   530,   531,    -1,    -1,    -1,   277,
     419,   532,   420,    -1,   533,    -1,   532,   421,   533,    -1,
     405,    20,     5,    -1,   406,    20,     4,    -1,   108,   404,
     396,     3,    -1,   108,   404,   396,     3,    74,    -1,   108,
     404,   396,   156,   281,     3,    -1,   404,   398,   159,     3,
     271,   419,   536,   421,   536,   421,   536,   420,    -1,   404,
     398,   159,     3,   271,   419,   536,   421,   536,   421,   536,
     421,   536,   420,    -1,     4,    -1,   193,    -1,   404,   399,
     136,     3,   274,   411,    20,     4,    12,   164,    20,     4,
      -1,   404,   407,     3,   266,   273,     4,    -1,   404,   407,
       3,   266,   273,     4,   179,     5,    -1,   404,   107,   136,
       3,   274,   411,    20,     4,    12,   164,    20,     4,    -1,
     404,   400,   409,    16,     3,    -1,   404,   400,   409,    16,
       3,   410,     4,    -1,   168,     3,    -1,   168,     3,   171,
      -1,   170,     3,    -1,   170,    28,    -1,   169,     3,    -1,
     169,     3,   421,     4,    -1,   544,    -1,   206,   252,     3,
      -1,   545,    -1,   547,     3,   546,   548,    -1,   547,     3,
     418,     3,   546,   548,    -1,    -1,   277,    44,     5,    45,
      -1,   277,    44,     5,    46,    -1,    41,   252,    -1,    -1,
     258,    42,   197,   549,    -1,   258,    42,   197,   549,   277,
       5,    43,    -1,   108,    42,   197,   549,    -1,     3,    -1,
     549,   421,     3,    -1,   558,    -1,   550,    -1,   557,    -1,
      73,   221,     3,   197,     3,   551,   552,   553,   555,   556,
      -1,    73,   221,     3,   197,   404,   396,     3,   551,   552,
     553,   555,   556,    -1,    -1,    51,   223,    -1,    51,   224,
      -1,    -1,   140,    40,    -1,   140,   241,    -1,   140,   157,
      -1,   140,   258,    -1,   140,   107,    -1,    -1,   245,   554,
      -1,     3,    -1,   554,   421,     3,    -1,    -1,   266,   419,
     426,   420,    -1,    -1,   277,    78,   419,   426,   420,    -1,
     108,   221,     3,   197,     3,    -1,   108,   221,     3,   197,
     404,   396,     3,    -1,    37,   252,     3,    38,    71,     3,
      78,   419,   426,   420,    -1,    37,   252,     3,    38,    71,
       3,   261,   419,   605,   420,    -1,    37,   252,     3,    38,
      71,     3,   134,   164,   419,   602,   420,   207,     3,   419,
     603,   420,   604,    -1,    37,   252,     3,    38,    71,     3,
      78,   419,   426,   420,    18,   269,    -1,    37,   252,     3,
      38,    71,     3,   134,   164,   419,   602,   420,   207,     3,
     419,   603,   420,   604,    18,   269,    -1,    37,   252,     3,
      38,    71,     3,   201,   164,   419,   601,   420,    -1,    37,
     252,     3,   108,    71,     3,    -1,    37,   252,     3,   208,
      71,     3,   245,     3,    -1,    37,   252,     3,   120,    71,
       3,    -1,    37,   252,     3,   100,    71,     3,    -1,    37,
     252,     3,   269,    71,     3,    -1,    37,   252,     3,    38,
      84,     3,   612,   607,   559,    -1,    37,   252,     3,   108,
      84,     3,    -1,    37,   252,     3,   108,     3,    -1,    37,
     252,     3,   208,    84,     3,   245,     3,    -1,    37,   252,
       3,   208,     3,   245,     3,    -1,    37,   252,     3,   187,
      84,     3,   612,   607,   559,    -1,    37,   252,     3,   187,
       3,   612,   607,   559,    -1,    37,   252,     3,    75,    84,
       3,     3,   612,   607,   559,    -1,    37,   252,     3,    75,
       3,     3,   612,   607,   559,    -1,    37,   252,     3,   120,
     217,     3,   222,    -1,    37,   252,     3,   100,   217,     3,
     222,    -1,    37,   404,   396,     3,   120,   217,     3,   222,
      -1,    37,   404,   396,     3,   100,   217,     3,   222,    -1,
      -1,   130,    -1,    39,     3,    -1,   560,    -1,   157,   568,
     569,     3,   570,   271,   572,   561,   563,   638,    -1,   157,
     568,   569,     3,   570,   465,    -1,    -1,    -1,   199,   164,
     258,   562,   567,    -1,    -1,   197,    88,   564,   565,    -1,
      -1,   419,     3,   420,    -1,   419,     3,   421,     3,    -1,
     101,    90,    -1,    -1,   101,   258,   566,   240,   567,    -1,
       3,    20,   426,    -1,   567,   421,     3,    20,   426,    -1,
      -1,   568,   176,    -1,   568,   103,    -1,   568,   146,    -1,
     568,   154,    -1,   159,    -1,    -1,    -1,   419,   571,   420,
      -1,     3,    -1,   571,   421,     3,    -1,   419,   574,   420,
      -1,    -1,   572,   421,   573,   419,   574,   420,    -1,   426,
      -1,   113,    -1,   574,   421,   426,    -1,   574,   421,   113,
      -1,   157,   568,   569,     3,   240,   575,   561,    -1,     3,
      20,   426,    -1,     3,    20,   113,    -1,   575,   421,     3,
      20,   426,    -1,   575,   421,     3,    20,   113,    -1,   576,
      -1,   216,   568,   569,     3,   570,   271,   572,   561,    -1,
     216,   568,   569,     3,   240,   575,   561,    -1,   216,   568,
     569,     3,   570,   465,   561,    -1,   577,    -1,    -1,    86,
       3,   578,   579,   581,   582,   583,    -1,    -1,   419,   580,
     420,    -1,     3,    -1,   580,   421,     3,    -1,   136,    -1,
     245,    -1,     4,    -1,   236,    -1,   237,    -1,    -1,   584,
      -1,   277,   419,   584,   420,    -1,   419,   584,   420,    -1,
     585,    -1,   584,   421,   585,    -1,   135,    87,    -1,   135,
     249,    -1,    99,     4,    -1,   143,    -1,   143,     6,    -1,
     193,     4,    -1,   242,     4,    -1,    87,    -1,   586,    -1,
     258,   587,   488,   240,   588,   466,   476,   479,   638,    -1,
      -1,   568,   176,    -1,   568,   154,    -1,     3,    20,   426,
      -1,     3,   418,     3,    20,   426,    -1,   588,   421,     3,
      20,   426,    -1,   588,   421,     3,   418,     3,    20,   426,
      -1,   208,   252,     3,   245,     3,    -1,   589,    -1,    73,
      95,   590,     3,    -1,    73,   227,   590,     3,    -1,   108,
      95,     3,    -1,   108,    95,   156,   281,     3,    -1,   108,
     227,     3,    -1,   108,   227,   156,   281,     3,    -1,    -1,
     156,   281,    -1,   591,    -1,    73,   102,     3,    51,   612,
      -1,    73,   102,     3,    51,   612,   113,   426,    -1,    73,
     102,     3,    51,   612,    18,   193,    -1,    73,   102,     3,
      51,   612,    78,   419,   426,   420,    -1,    73,   102,     3,
      51,   612,    18,   193,    78,   419,   426,   420,    -1,   592,
      -1,   267,     3,    -1,   267,    95,     3,    -1,   593,    -1,
      73,   598,   252,   590,     3,   419,   599,   420,   595,   594,
      -1,    -1,   172,   419,     3,   420,    -1,    73,   598,   252,
     590,     3,   418,     3,   419,   599,   420,   595,    -1,    73,
     598,   252,   590,     3,   351,    94,     3,   140,   271,   136,
     419,     5,   420,   245,   419,     5,   420,    -1,    -1,   595,
      48,    20,     5,    -1,   595,    48,     5,    -1,   595,   197,
       3,   107,     3,    -1,   595,   197,     3,   248,     3,    -1,
     595,   228,    63,   268,   419,     3,   420,   229,     5,    -1,
     595,   228,    63,   204,   419,     3,   420,   419,   596,   420,
      -1,   595,   351,    63,   204,   419,     3,   420,    -1,   595,
     277,   415,   416,    -1,   597,    -1,   596,   421,   597,    -1,
     228,     3,   271,   174,   250,     4,   197,   191,     5,    -1,
     228,     3,   271,   174,   250,   184,   197,   191,     5,    -1,
      73,   598,   252,   590,     3,   419,   599,   420,   614,    -1,
      73,   598,   252,   590,     3,   614,    -1,    73,   598,   252,
     590,     3,   418,     3,   419,   599,   420,   614,    -1,    73,
     598,   252,   590,     3,   418,     3,   614,    -1,    -1,   246,
      -1,   247,   246,    -1,   600,    -1,   599,   421,   600,    -1,
     201,   164,   419,   601,   420,    -1,    71,     3,   201,   164,
     419,   601,   420,    -1,   164,   419,   483,   420,    -1,   155,
     419,   483,   420,    -1,   138,   155,   419,   483,   420,    -1,
     138,   164,   419,   483,   420,    -1,    78,   419,   426,   420,
      -1,    71,     3,    78,   419,   426,   420,    -1,   134,   164,
     419,   602,   420,   207,     3,   419,   603,   420,   604,    -1,
     134,   164,   419,   602,   420,   207,     3,   418,     3,   419,
     603,   420,   604,    -1,    71,     3,   134,   164,   419,   602,
     420,   207,     3,   419,   603,   420,   604,    -1,    71,     3,
     134,   164,   419,   602,   420,   207,     3,   418,     3,   419,
     603,   420,   604,    -1,   261,   419,   605,   420,    -1,    71,
       3,   261,   419,   605,   420,    -1,     3,    -1,   601,   421,
       3,    -1,     3,    -1,   602,   421,     3,    -1,     3,    -1,
     603,   421,     3,    -1,    -1,   604,   197,   107,    74,    -1,
     604,   197,   107,   240,   193,    -1,   604,   197,   107,   210,
      -1,   604,   197,   107,   240,   113,    -1,   604,   197,   258,
      74,    -1,   604,   197,   258,   240,   193,    -1,   604,   197,
     258,   210,    -1,   604,   197,   258,   240,   113,    -1,   604,
     197,   107,   192,    -1,   604,   197,   258,   192,    -1,   604,
     183,   137,    -1,   604,   183,   235,    -1,   604,   183,   200,
      -1,   604,    97,    -1,   604,    18,    97,    -1,   604,    97,
     151,    98,    -1,   604,    97,   151,   149,    -1,     3,    -1,
     605,   421,     3,    -1,    -1,   606,     3,   612,   607,    -1,
      -1,   607,    18,   193,    -1,   607,   193,    -1,   607,   113,
       4,    -1,   607,   113,     5,    -1,   607,   113,     7,    -1,
     607,   113,     6,    -1,   607,   113,   333,   419,   420,    -1,
     607,   113,   334,   419,   420,    -1,   607,   113,   335,   419,
     420,    -1,   607,   113,    72,    -1,   607,   113,   419,   426,
     420,    -1,   607,    48,    -1,   607,    48,   419,     5,   421,
       5,   420,    -1,   607,    48,   419,     5,   420,    -1,   607,
      53,   419,     5,   421,     5,   420,    -1,   607,    53,   419,
       5,   420,    -1,   607,    53,    -1,   607,   261,   164,    -1,
     607,   261,    -1,   607,   201,   164,    -1,   607,   164,    -1,
     607,    79,     4,    -1,   607,    78,   419,   426,   420,    -1,
     607,    71,     3,   261,    -1,   607,    71,     3,   201,   164,
      -1,   607,    71,     3,    78,   419,   426,   420,    -1,   607,
      56,    52,    51,   419,   426,   420,    57,    -1,   607,    56,
      52,    51,   419,   426,   420,    58,    -1,   607,    56,    52,
      51,   419,   426,   420,    -1,   607,    51,   419,   426,   420,
      57,    -1,   607,    51,   419,   426,   420,    58,    -1,   607,
      51,   419,   426,   420,    -1,    -1,   419,     5,   420,    -1,
     419,     5,   421,     5,   420,    -1,    -1,    64,    -1,    -1,
     610,   259,    -1,   610,   280,    -1,    -1,   611,    82,   240,
       4,    -1,   611,    83,     4,    -1,    67,   608,    -1,   244,
     608,   610,    -1,   239,   608,   610,    -1,   189,   608,   610,
      -1,   160,   608,   610,    -1,   152,   608,   610,    -1,    66,
     608,   610,    -1,   205,   608,   610,    -1,   114,   608,   610,
      -1,   132,   608,   610,    -1,   116,   608,   610,    -1,   117,
      -1,   257,    -1,   251,    -1,   115,    -1,   278,    -1,    82,
     608,   611,    -1,   270,   419,     5,   420,   611,    -1,    64,
     608,    -1,   272,   419,     5,   420,    -1,   256,    -1,    61,
      -1,   188,    -1,   182,    -1,   243,   609,   611,    -1,   249,
     609,   611,    -1,   185,   609,   611,    -1,   175,   609,   611,
      -1,   123,   419,   613,   420,   611,    -1,   240,   419,   613,
     420,   611,    -1,    62,    -1,   262,    -1,   264,    -1,   273,
     419,     5,   420,    -1,   612,    36,   422,    -1,     4,    -1,
     613,   421,     4,    -1,   615,   493,   465,    -1,    -1,   154,
      -1,   216,    -1,   616,    -1,   240,   227,     3,    -1,   240,
     227,   113,    -1,   240,   617,    -1,   618,    -1,   617,   421,
     618,    -1,     8,    20,   426,    -1,     8,     9,   426,    -1,
     619,    -1,    73,   202,     3,   419,   620,   420,    51,    60,
     624,   124,    -1,    73,   202,     3,   419,   620,   420,    60,
     624,   124,    -1,    73,    10,   216,   202,     3,   419,   620,
     420,    51,    60,   624,   124,    -1,    73,    10,   216,   202,
       3,   419,   620,   420,    60,   624,   124,    -1,    73,   139,
       3,   419,   620,   420,   213,   623,    51,    60,   624,   124,
      -1,    73,   139,     3,   419,   620,   420,   213,   623,    60,
     624,   124,    -1,    73,    10,   216,   139,     3,   419,   620,
     420,   213,   623,    51,    60,   624,   124,    -1,    73,    10,
     216,   139,     3,   419,   620,   420,   213,   623,    60,   624,
     124,    -1,    -1,   621,    -1,   622,    -1,   621,   421,   622,
      -1,     3,   612,    -1,    16,     3,   612,    -1,   195,     3,
     612,    -1,   150,     3,   612,    -1,   152,    -1,   160,    -1,
     270,    -1,   249,    -1,    62,    -1,   132,    -1,   114,    -1,
      66,    -1,   117,    -1,   251,    -1,    -1,   624,   625,    -1,
     624,    60,   624,   124,    -1,   624,   156,   624,   124,   156,
      -1,   624,   276,   624,   124,   276,    -1,   624,   166,   624,
     124,   166,    -1,   624,   131,   624,   124,   131,    -1,   624,
      77,   624,   124,    77,    -1,     3,    -1,     4,    -1,     5,
      -1,     7,    -1,     6,    -1,    20,    -1,    18,    -1,    10,
      -1,    12,    -1,    16,    -1,    50,    -1,   241,    -1,   157,
      -1,   258,    -1,   107,    -1,   136,    -1,   274,    -1,   240,
      -1,   159,    -1,   271,    -1,    73,    -1,   108,    -1,   252,
      -1,   155,    -1,   253,    -1,   125,    -1,   119,    -1,    96,
      -1,   101,    -1,    68,    -1,   211,    -1,   165,    -1,   162,
      -1,    70,    -1,   194,    -1,   129,    -1,    69,    -1,   142,
      -1,   127,    -1,   195,    -1,   150,    -1,   140,    -1,    54,
      -1,   218,    -1,   209,    -1,   126,    -1,   220,    -1,    59,
      -1,   118,    -1,   217,    -1,   219,    -1,    51,    -1,   197,
      -1,   198,    -1,    63,    -1,   141,    -1,   148,    -1,   179,
      -1,   181,    -1,   163,    -1,   177,    -1,   215,    -1,   153,
      -1,   196,    -1,   137,    -1,    76,    -1,   190,    -1,   266,
      -1,   193,    -1,   113,    -1,   201,    -1,   164,    -1,   261,
      -1,    78,    -1,   134,    -1,   207,    -1,    74,    -1,   210,
      -1,   192,    -1,   152,    -1,   160,    -1,   270,    -1,   249,
      -1,    62,    -1,   132,    -1,   114,    -1,    66,    -1,   117,
      -1,   251,    -1,   239,    -1,   116,    -1,    82,    -1,   262,
      -1,    61,    -1,   260,    -1,   122,    -1,   158,    -1,    40,
      -1,   106,    -1,   281,    -1,   275,    -1,   277,    -1,   202,
      -1,   139,    -1,   213,    -1,   419,    -1,   420,    -1,   421,
      -1,   417,    -1,   418,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,    17,    -1,   423,    -1,   322,
      -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,     8,
      -1,   626,    -1,   108,   202,     3,    -1,   108,   202,   156,
     281,     3,    -1,   108,   139,     3,    -1,   108,   139,   156,
     281,     3,    -1,   627,    -1,    68,     3,   419,   420,    -1,
      68,     3,   419,   628,   420,    -1,   629,    -1,   628,   421,
     629,    -1,     5,    -1,     4,    -1,     7,    -1,   193,    -1,
       6,    -1,     3,    -1,     8,    -1,   630,    -1,    73,   219,
       3,   631,   632,   197,     3,   140,   118,   217,    60,   624,
     124,    -1,    59,    -1,    39,    -1,   157,    -1,   258,    -1,
     107,    -1,   633,    -1,   108,   219,     3,    -1,   108,   219,
     156,   281,     3,    -1,    37,   219,     3,   120,    -1,    37,
     219,     3,   100,    -1,   634,    -1,    73,   371,   590,     3,
     635,    -1,    -1,   635,   636,    -1,   376,   277,     5,    -1,
     376,     5,    -1,   377,    63,     5,    -1,   377,     5,    -1,
     378,     5,    -1,   184,     5,    -1,   379,    -1,    18,   379,
      -1,   637,    -1,   108,   371,     3,    -1,   108,   371,   156,
     281,     3,    -1,    37,   371,     3,   635,    -1,    37,   371,
       3,    55,    -1,    37,   371,     3,    55,   277,     5,    -1,
      37,   371,     3,   208,   245,     3,    -1,    -1,   212,    28,
      -1,   212,   639,    -1,     3,    -1,   639,   421,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   501,   501,   502,   507,   514,   515,   516,   530,   531,
     559,   567,   575,   581,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   614,   614,   623,   623,   625,   625,
     627,   627,   632,   634,   638,   639,   640,   641,   642,   645,
     646,   649,   658,   676,   685,   705,   705,   765,   774,   781,
     785,   787,   789,   794,   799,   804,   812,   814,   816,   818,
     820,   822,   824,   826,   828,   830,   837,   848,   859,   860,
     863,   863,   864,   864,   865,   865,   873,   873,   881,   881,
     892,   896,   897,   898,   899,   900,   901,   902,   903,   907,
     907,   909,   909,   911,   911,   914,   914,   916,   916,   918,
     918,   920,   920,   922,   922,   924,   924,   927,   927,   929,
     929,   931,   931,   933,   933,   935,   935,   937,   937,   939,
     939,   941,   941,   944,   944,   946,   946,   948,   948,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,   982,
     983,   984,   985,   987,   988,   989,   990,   991,   992,   993,
     994,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1019,  1020,  1021,  1022,  1023,  1025,  1026,
    1028,  1029,  1030,  1032,  1033,  1034,  1035,  1042,  1049,  1056,
    1060,  1064,  1068,  1072,  1076,  1082,  1083,  1084,  1087,  1093,
    1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,  1111,
    1113,  1115,  1117,  1121,  1129,  1140,  1141,  1144,  1145,  1148,
    1156,  1164,  1172,  1186,  1196,  1197,  1211,  1227,  1228,  1229,
    1230,  1233,  1240,  1248,  1249,  1250,  1253,  1254,  1257,  1258,
    1262,  1263,  1266,  1268,  1272,  1273,  1276,  1278,  1282,  1283,
    1286,  1287,  1290,  1296,  1303,  1312,  1313,  1314,  1315,  1325,
    1326,  1330,  1331,  1332,  1333,  1334,  1337,  1338,  1341,  1342,
    1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,  1353,  1356,
    1357,  1358,  1366,  1372,  1373,  1374,  1377,  1378,  1381,  1382,
    1386,  1394,  1404,  1405,  1406,  1415,  1420,  1426,  1434,  1438,
    1438,  1478,  1479,  1483,  1485,  1487,  1489,  1491,  1495,  1496,
    1497,  1500,  1501,  1504,  1505,  1508,  1509,  1510,  1513,  1514,
    1517,  1518,  1522,  1524,  1526,  1528,  1531,  1532,  1535,  1536,
    1539,  1543,  1553,  1561,  1562,  1563,  1564,  1568,  1572,  1574,
    1578,  1578,  1580,  1585,  1592,  1599,  1611,  1612,  1613,  1617,
    1624,  1631,  1639,  1649,  1657,  1667,  1675,  1684,  1693,  1703,
    1711,  1720,  1729,  1739,  1748,  1765,  1773,  1785,  1786,  1800,
    1801,  1804,  1805,  1817,  1827,  1832,  1837,  1843,  1850,  1857,
    1864,  1874,  1881,  1890,  1897,  1903,  1911,  1917,  1925,  1926,
    1927,  1928,  1929,  1945,  1946,  1947,  1956,  1957,  1961,  1971,
    1987,  1988,  1992,  2000,  2009,  2032,  2033,  2034,  2038,  2055,
    2077,  2078,  2083,  2092,  2106,  2115,  2141,  2142,  2143,  2144,
    2145,  2146,  2147,  2151,  2158,  2170,  2173,  2174,  2178,  2179,
    2183,  2185,  2190,  2198,  2207,  2219,  2231,  2246,  2247,  2252,
    2266,  2276,  2290,  2304,  2312,  2323,  2329,  2340,  2346,  2353,
    2359,  2375,  2382,  2391,  2399,  2405,  2420,  2422,  2426,  2435,
    2448,  2450,  2454,  2459,  2466,  2471,  2479,  2483,  2484,  2488,
    2500,  2511,  2512,  2513,  2517,  2518,  2519,  2520,  2521,  2522,
    2525,  2527,  2531,  2532,  2535,  2537,  2540,  2542,  2546,  2553,
    2562,  2568,  2574,  2581,  2587,  2594,  2600,  2606,  2612,  2618,
    2624,  2630,  2636,  2642,  2648,  2654,  2660,  2666,  2672,  2678,
    2684,  2697,  2707,  2717,  2729,  2730,  2731,  2734,  2742,  2748,
    2761,  2762,  2762,  2766,  2767,  2770,  2771,  2772,  2776,  2777,
    2777,  2781,  2789,  2799,  2800,  2801,  2802,  2803,  2806,  2806,
    2809,  2810,  2813,  2823,  2836,  2837,  2837,  2840,  2841,  2842,
    2843,  2846,  2850,  2851,  2852,  2853,  2859,  2862,  2868,  2873,
    2879,  2883,  2883,  2888,  2889,  2891,  2892,  2896,  2897,  2901,
    2902,  2903,  2906,  2907,  2908,  2909,  2913,  2914,  2918,  2919,
    2920,  2921,  2922,  2923,  2924,  2925,  2929,  2937,  2946,  2947,
    2948,  2952,  2963,  2975,  2986,  3001,  3006,  3010,  3011,  3015,
    3017,  3019,  3021,  3025,  3026,  3032,  3036,  3038,  3040,  3042,
    3044,  3049,  3053,  3054,  3058,  3067,  3080,  3081,  3089,  3097,
    3105,  3106,  3107,  3108,  3109,  3110,  3112,  3114,  3119,  3123,
    3124,  3127,  3142,  3149,  3164,  3177,  3192,  3205,  3206,  3207,
    3210,  3211,  3214,  3215,  3216,  3217,  3218,  3219,  3220,  3221,
    3222,  3224,  3226,  3228,  3230,  3232,  3236,  3237,  3240,  3241,
    3244,  3245,  3248,  3249,  3250,  3251,  3252,  3253,  3254,  3255,
    3256,  3257,  3258,  3259,  3260,  3261,  3262,  3263,  3264,  3265,
    3268,  3269,  3272,  3272,  3282,  3283,  3284,  3285,  3286,  3287,
    3288,  3289,  3290,  3291,  3292,  3293,  3300,  3301,  3302,  3303,
    3304,  3305,  3306,  3307,  3308,  3309,  3310,  3311,  3312,  3313,
    3314,  3315,  3316,  3317,  3318,  3319,  3320,  3323,  3324,  3325,
    3328,  3329,  3332,  3333,  3334,  3337,  3338,  3339,  3343,  3344,
    3345,  3346,  3347,  3348,  3349,  3350,  3351,  3352,  3353,  3354,
    3355,  3356,  3357,  3358,  3359,  3360,  3361,  3362,  3363,  3364,
    3365,  3366,  3367,  3368,  3369,  3370,  3371,  3372,  3373,  3374,
    3375,  3376,  3377,  3380,  3381,  3384,  3397,  3398,  3399,  3403,
    3406,  3407,  3408,  3409,  3409,  3411,  3412,  3420,  3424,  3430,
    3436,  3443,  3450,  3456,  3462,  3469,  3478,  3479,  3482,  3483,
    3486,  3487,  3488,  3489,  3492,  3493,  3494,  3495,  3496,  3497,
    3498,  3499,  3500,  3501,  3508,  3509,  3510,  3511,  3512,  3513,
    3514,  3515,  3518,  3519,  3520,  3520,  3520,  3521,  3521,  3521,
    3521,  3521,  3521,  3522,  3522,  3522,  3522,  3522,  3522,  3522,
    3522,  3522,  3523,  3523,  3523,  3523,  3523,  3523,  3523,  3524,
    3524,  3524,  3524,  3525,  3525,  3525,  3525,  3525,  3525,  3525,
    3525,  3525,  3525,  3525,  3525,  3526,  3526,  3526,  3526,  3526,
    3526,  3526,  3526,  3527,  3527,  3527,  3527,  3527,  3527,  3527,
    3527,  3528,  3528,  3528,  3528,  3528,  3528,  3528,  3528,  3528,
    3529,  3529,  3529,  3529,  3529,  3529,  3529,  3529,  3530,  3530,
    3530,  3531,  3531,  3531,  3531,  3531,  3531,  3531,  3531,  3532,
    3532,  3532,  3532,  3532,  3532,  3532,  3533,  3533,  3533,  3533,
    3533,  3533,  3533,  3534,  3534,  3534,  3534,  3535,  3535,  3535,
    3535,  3535,  3535,  3535,  3535,  3535,  3535,  3535,  3535,  3536,
    3536,  3536,  3536,  3536,  3537,  3544,  3548,  3554,  3560,  3566,
    3578,  3582,  3588,  3596,  3597,  3600,  3601,  3602,  3603,  3604,
    3605,  3606,  3613,  3617,  3625,  3626,  3629,  3630,  3631,  3634,
    3638,  3644,  3653,  3661,  3672,  3676,  3685,  3686,  3690,  3691,
    3692,  3693,  3694,  3695,  3696,  3697,  3700,  3704,  3710,  3720,
    3727,  3734,  3742,  3752,  3753,  3754,  3757,  3758
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
  "TRANSACTION", "FEVO_CURRENT_XID", "SYSTEM", "VERSIONING", "';'", "'.'",
  "'('", "')'", "','", "']'", "'='", "$accept", "stmt_list", "expr", "@1",
  "@2", "@3", "@4", "val_list", "array_val_list", "@5", "any_array_arg",
  "opt_val_list", "@6", "@7", "@8", "@9", "@10", "@11", "@12", "@13",
  "@14", "@15", "@16", "@17", "@18", "@19", "@20", "@21", "@22", "@23",
  "@24", "@25", "@26", "@27", "@28", "@29", "@30", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_window_partition", "window_partition_list",
  "opt_window_orderby", "window_orderby_list", "opt_orderby",
  "orderby_list", "orderby_item", "opt_limit", "opt_for_system_time",
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
     655,   656,   657,   658,   659,   660,   661,    59,    46,    40,
      41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   424,   425,   425,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   427,   426,   428,   426,   429,   426,
     430,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   431,   431,   432,   432,   433,   426,   426,   426,   434,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   435,   435,
     436,   426,   437,   426,   438,   426,   439,   426,   440,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   441,
     426,   442,   426,   443,   426,   444,   426,   445,   426,   446,
     426,   447,   426,   448,   426,   449,   426,   450,   426,   451,
     426,   452,   426,   453,   426,   454,   426,   455,   426,   456,
     426,   457,   426,   458,   426,   459,   426,   460,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   461,   461,   461,   426,   426,
     462,   462,   462,   462,   462,   462,   462,   462,   462,   426,
     426,   426,   426,   463,   463,   426,   426,   426,   426,   426,
     426,   426,   426,   464,   465,   465,   465,   466,   466,   467,
     467,   468,   468,   469,   469,   469,   470,   470,   471,   471,
     472,   472,   473,   473,   474,   474,   475,   475,   476,   476,
     477,   477,   478,   478,   478,   479,   479,   479,   479,   480,
     480,   481,   481,   481,   481,   481,   482,   482,   483,   483,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   485,
     485,   485,   486,   487,   487,   487,   488,   488,   489,   489,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   492,
     491,   493,   493,   494,   494,   494,   494,   494,   495,   495,
     495,   496,   496,   497,   497,   498,   498,   498,   499,   499,
     500,   500,   501,   501,   501,   501,   502,   502,   503,   503,
     504,   464,   505,   506,   506,   506,   506,   505,   507,   507,
     508,   508,   505,   464,   509,   509,   510,   510,   510,   464,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   512,   512,   513,
     513,   514,   514,   515,   516,   516,   516,   517,   517,   517,
     517,   464,   518,   464,   519,   519,   520,   520,   521,   521,
     521,   521,   521,   464,   464,   464,   464,   464,   522,   522,
     523,   523,   524,   524,   524,   464,   464,   464,   525,   525,
     526,   526,   527,   527,   528,   528,   464,   464,   464,   464,
     464,   464,   464,   529,   529,   530,   531,   531,   532,   532,
     533,   533,   534,   534,   534,   535,   535,   536,   536,   537,
     538,   538,   539,   540,   540,   541,   541,   542,   542,   543,
     543,   464,   544,   464,   545,   545,   546,   546,   546,   547,
     548,   548,   548,   548,   549,   549,   464,   464,   464,   550,
     550,   551,   551,   551,   552,   552,   552,   552,   552,   552,
     553,   553,   554,   554,   555,   555,   556,   556,   557,   557,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   559,   559,   559,   464,   560,   560,
     561,   562,   561,   563,   563,   564,   564,   564,   565,   566,
     565,   567,   567,   568,   568,   568,   568,   568,   569,   569,
     570,   570,   571,   571,   572,   573,   572,   574,   574,   574,
     574,   560,   575,   575,   575,   575,   464,   576,   576,   576,
     464,   578,   577,   579,   579,   580,   580,   581,   581,   582,
     582,   582,   583,   583,   583,   583,   584,   584,   585,   585,
     585,   585,   585,   585,   585,   585,   464,   586,   587,   587,
     587,   588,   588,   588,   588,   464,   464,   589,   589,   464,
     464,   464,   464,   590,   590,   464,   591,   591,   591,   591,
     591,   464,   592,   592,   464,   593,   594,   594,   593,   593,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   596,
     596,   597,   597,   593,   593,   593,   593,   598,   598,   598,
     599,   599,   600,   600,   600,   600,   600,   600,   600,   600,
     600,   600,   600,   600,   600,   600,   601,   601,   602,   602,
     603,   603,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     605,   605,   606,   600,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   608,   608,   608,
     609,   609,   610,   610,   610,   611,   611,   611,   612,   612,
     612,   612,   612,   612,   612,   612,   612,   612,   612,   612,
     612,   612,   612,   612,   612,   612,   612,   612,   612,   612,
     612,   612,   612,   612,   612,   612,   612,   612,   612,   612,
     612,   612,   612,   613,   613,   614,   615,   615,   615,   464,
     616,   616,   616,   617,   617,   618,   618,   464,   619,   619,
     619,   619,   619,   619,   619,   619,   620,   620,   621,   621,
     622,   622,   622,   622,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   624,   624,   624,   624,   624,   624,
     624,   624,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   464,   626,   626,   626,   626,
     464,   627,   627,   628,   628,   629,   629,   629,   629,   629,
     629,   629,   464,   630,   631,   631,   632,   632,   632,   464,
     633,   633,   464,   464,   464,   634,   635,   635,   636,   636,
     636,   636,   636,   636,   636,   636,   464,   637,   637,   464,
     464,   464,   464,   638,   638,   638,   639,   639
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
       0,     4,     3,     5,     5,     9,    10,     7,     4,     1,
       3,     9,     9,     9,     6,    11,     8,     0,     1,     2,
       1,     3,     5,     7,     4,     4,     5,     5,     4,     6,
      11,    13,    13,    15,     4,     6,     1,     3,     1,     3,
       1,     3,     0,     4,     5,     4,     5,     4,     5,     4,
       5,     4,     4,     3,     3,     3,     2,     3,     4,     4,
       1,     3,     0,     4,     0,     3,     2,     3,     3,     3,
       3,     5,     5,     5,     3,     5,     2,     7,     5,     7,
       5,     2,     3,     2,     3,     2,     3,     5,     4,     5,
       7,     8,     8,     7,     6,     6,     5,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     5,     2,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     5,     1,     1,
       1,     4,     3,     1,     3,     3,     0,     1,     1,     1,
       3,     3,     2,     1,     3,     3,     3,     1,    10,     9,
      12,    11,    12,    11,    14,    13,     0,     1,     1,     3,
       2,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     4,     5,     5,     5,
       5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     3,     5,     3,     5,
       1,     4,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,    13,     1,     1,     1,     1,     1,     1,
       3,     5,     4,     4,     1,     5,     0,     2,     3,     2,
       3,     2,     2,     2,     1,     2,     1,     3,     5,     4,
       4,     6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   667,     0,   366,     0,   563,     0,
       0,     0,     0,     0,   563,     0,   300,     0,   618,     0,
       0,     0,     0,     0,   253,   361,   373,   379,   411,   418,
     426,   427,   435,   436,   437,   446,   447,   448,   449,   450,
     451,   452,   423,   424,   425,   481,   483,     0,   497,   498,
     496,   547,   586,   590,   616,   626,   635,   641,   644,   799,
     807,   965,   970,   982,   989,   994,  1006,     0,     0,     0,
       0,   489,     0,     0,   633,     0,     0,     0,     0,     0,
       0,     0,   633,   668,     0,     0,   633,     0,     0,     0,
     591,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   569,   475,   479,   477,   478,     0,     0,
     569,     0,     0,   802,   803,     0,     0,     0,     0,   642,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,   413,   486,     0,     0,   996,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   669,     0,     0,     0,     0,   633,   593,   370,     0,
     365,   363,   364,     0,   629,     0,   968,     0,   412,   966,
       0,   990,     0,     0,   631,     0,   376,     0,  1007,     0,
       0,     0,   565,   566,   567,   568,   564,     0,   476,     0,
     482,     0,     0,     0,     0,   800,   801,     0,     4,     9,
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
       0,   419,   420,     0,     0,   490,   993,   992,     0,     0,
       0,     0,     0,     0,     0,     0,  1010,     0,  1009,     0,
     980,   976,   975,   979,   977,   981,   978,   971,     0,   973,
       0,     0,   634,   627,     0,     0,   816,     0,     0,     0,
       0,   816,   985,   984,     0,     0,   628,     0,     0,     0,
     996,   430,     0,   455,     0,     0,     0,     0,     0,   368,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     377,   378,   374,     0,     0,   432,     0,   462,     0,   570,
     480,     0,   570,   806,   805,   804,     0,    78,     0,    32,
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
       0,     0,     0,     0,  1004,   997,     0,     0,   972,     0,
       0,     0,   779,   788,   747,   747,   747,   747,   747,   772,
     747,   769,     0,   747,   747,   747,   750,   781,   750,   780,
     747,   747,   747,     0,   750,   747,   750,   771,   778,   770,
     789,   790,     0,     0,     0,   773,   636,     0,     0,     0,
       0,     0,     0,   817,   818,     0,     0,     0,     0,     0,
     988,   986,   987,     0,   501,     0,     0,     0,     0,     0,
     995,     0,   428,     0,   456,     0,   796,   595,     0,   597,
     598,     0,   371,     0,   278,     0,   257,   370,   630,   969,
     967,   991,   518,     0,   632,   376,  1008,   433,     0,   463,
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
     529,     0,   526,   532,   528,     0,   714,     0,     0,     0,
       0,   530,  1011,  1012,  1005,  1003,   999,     0,  1001,     0,
    1002,     0,     0,   974,   816,   816,     0,   776,   752,   758,
     755,   752,   752,     0,   752,   752,   752,   751,   755,   755,
     752,   752,   752,     0,   755,   752,   755,     0,     0,     0,
       0,     0,     0,     0,     0,   820,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   504,
       0,     0,     0,     0,     0,     0,   430,     0,   453,   455,
     797,   798,     0,     0,   712,   664,   332,   594,     0,   599,
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
     485,     0,     0,     0,     0,     0,     0,   714,   714,     0,
     541,   540,   544,   714,   535,     0,     0,   998,  1000,     0,
       0,     0,     0,     0,   764,   774,   766,   768,   793,     0,
     767,   763,   762,   785,   784,   761,   765,   760,     0,   782,
     759,   783,     0,     0,     0,   638,   792,     0,   637,     0,
     821,   823,   822,     0,   819,     0,     0,   404,     0,     0,
       0,     0,     0,   406,     0,     0,     0,     0,     0,   834,
       0,   502,   503,     0,   510,   501,     0,     0,     0,     0,
       0,     0,   429,     0,   456,     0,   796,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   670,     0,     0,   596,
     615,     0,     0,   611,     0,     0,     0,     0,   592,   603,
     606,     0,     0,  1013,   372,   519,     0,     0,     0,   581,
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
     491,     0,     0,     0,     0,   544,   544,   714,     0,     0,
     726,     0,   731,     0,     0,     0,     0,     0,   545,   735,
     716,     0,   733,   537,   544,   527,   534,   543,   542,     0,
       0,   748,     0,   753,   754,     0,     0,   755,     0,   755,
     755,   777,   791,     0,     0,     0,   828,   831,   830,   832,
     829,   824,   825,   827,   833,   826,     0,     0,     0,     0,
       0,     0,     0,   380,     0,     0,     0,     0,     0,     0,
     834,     0,     0,   505,   509,   507,   506,   508,     0,   514,
     504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,   454,     0,   712,   666,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   650,   712,     0,   795,   610,
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
       0,   326,     0,     0,     0,  1013,   350,     0,   336,     0,
       0,   443,   445,     0,     0,     0,   471,     0,     0,     0,
       0,     0,   710,     0,   531,   539,   544,   715,   546,     0,
       0,     0,     0,     0,     0,   736,   717,   718,   720,   719,
     724,     0,     0,     0,     0,   734,   732,   536,     0,     0,
     834,     0,     0,   757,   786,   794,   787,   775,     0,   639,
     381,     0,   834,     0,   397,     0,     0,     0,     0,   405,
       0,   389,     0,     0,     0,     0,     0,   842,   843,   844,
     846,   845,   964,   849,   850,   851,   957,   848,   847,   952,
     953,   954,   955,   956,   939,   852,   893,   884,   889,   834,
     935,   925,   896,   928,   871,   878,   875,   862,   918,   907,
     834,   915,   933,   869,   870,   940,   856,   863,   911,   927,
     932,   929,   890,   868,   937,   809,   867,   887,   880,   877,
     834,   926,   916,   857,   906,   945,   883,   897,   879,   898,
     882,   921,   904,   865,   834,   854,   938,   860,   922,   874,
     901,   913,   873,   834,   902,   899,   900,   908,   920,   910,
     876,   881,   905,   894,   895,   912,   944,   917,   886,   919,
     872,   946,   903,   891,   885,   892,   888,   931,   859,   853,
     924,   930,   864,   866,   855,   936,   914,   934,   909,   923,
     861,   858,   942,   834,   943,   941,   959,   960,   961,   962,
     963,   950,   951,   947,   948,   949,   958,   835,     0,   512,
     511,     0,   516,   510,     0,   383,     0,     0,     0,     0,
       0,     0,     0,     0,   457,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   298,     0,     0,     0,
       0,   646,   663,   671,   714,     0,   605,   607,   264,   265,
       0,   282,   284,     0,     0,     0,  1016,  1014,  1015,   551,
       0,   574,     0,     0,     0,  1013,     0,     0,     0,   144,
     231,   232,   233,   234,   237,   236,   238,   230,   235,     0,
       0,     0,   270,   270,   270,   270,   270,   270,     0,     0,
       0,   274,   274,   274,   270,     0,     0,     0,   270,     0,
       0,     0,   270,   274,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    87,    41,    37,
      39,     0,     0,     0,   278,   268,   358,     0,     0,     0,
       0,   622,   623,     0,   617,     0,     0,     0,     0,     0,
       0,   495,     0,   520,   688,     0,   686,     0,   521,     0,
     538,     0,     0,     0,     0,     0,     0,   738,     0,     0,
       0,     0,     0,     0,   834,     0,   749,   756,     0,   834,
       0,   385,   398,     0,   407,   408,   409,     0,     0,     0,
       0,     0,   382,   808,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   499,   514,     0,     0,   391,     0,
       0,     0,   431,   460,   461,   459,     0,   650,     0,     0,
       0,     0,   678,     0,     0,     0,   675,     0,   674,     0,
     684,     0,     0,     0,     0,     0,     0,   645,   713,   604,
     263,   281,   288,   287,     0,     0,   585,   584,   580,   579,
       0,   555,   548,     7,   142,   139,   154,   155,   212,   274,
     274,   274,   274,   274,   274,   214,     0,   150,     0,     0,
       0,     0,     0,   274,   119,     0,     0,   274,   127,     0,
       0,   274,     0,     0,   190,   191,   192,   195,   196,     0,
     201,   206,     0,     0,     0,     0,   263,   266,   269,   285,
     278,   354,     0,   353,   352,     0,     0,   351,     0,     0,
       0,     0,     0,   492,     0,     0,     0,   525,     0,   711,
     728,     0,   746,   730,     0,     0,     0,   739,   737,   721,
     722,   723,   725,     0,   834,     0,   811,   640,     0,   813,
     399,     0,   393,   390,     0,   397,   836,     0,     0,     0,
       0,     0,   834,   513,     0,     0,   516,   387,     0,     0,
       0,   384,     0,   648,   665,     0,     0,     0,     0,     0,
     676,   677,   299,   672,   652,     0,     0,     0,     0,     0,
       0,   283,  1017,     0,   552,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   272,   271,     0,   100,   102,
     104,     0,   270,     0,     0,     0,   270,     0,     0,     0,
     136,   138,     0,     0,     0,     0,   290,   261,     0,     0,
     260,   291,   285,   359,   327,   624,     0,     0,     0,     0,
       0,   523,     0,   689,   687,     0,   744,   745,     0,     0,
       0,   834,     0,   810,   812,     0,   395,   410,   386,     0,
     841,   840,   837,   839,   838,     0,   515,     0,   500,   394,
     392,     0,     0,   679,     0,     0,   685,     0,   651,     0,
       0,     0,     0,     0,   658,     0,     0,     0,   576,     0,
       0,   554,   108,   110,   106,   112,   114,   116,   215,     0,
     263,   275,   118,   274,   121,   123,   126,   274,   129,   131,
     134,   198,    75,     0,     0,   267,   263,     0,   296,   256,
       0,     0,   472,   465,     0,   469,     0,   727,   729,   743,
     740,     0,   815,     0,   399,   983,     0,   388,     0,     0,
     673,     0,   647,   653,   654,     0,     0,     0,   561,     0,
     556,     0,   558,   559,   273,   276,     0,     0,   270,   270,
       0,   270,   270,     0,     0,   262,   293,   292,     0,   255,
       0,     0,     0,     0,   741,   742,   814,     0,     0,   401,
     396,   517,     0,     0,     0,     0,     0,     0,     0,     0,
     557,     0,   263,   120,   274,   274,   128,   274,   274,    76,
      77,     0,     0,   297,     0,     0,   466,   690,     0,     0,
     400,     0,     0,     0,     0,     0,     0,     0,   657,   562,
       0,   277,     0,     0,     0,     0,   295,   294,     0,     0,
     692,     0,   403,   402,     0,     0,     0,     0,   692,     0,
       0,   560,   122,   124,   130,   132,     0,     0,   522,   691,
       0,     0,     0,     0,   680,     0,     0,   659,   655,     0,
       0,     0,   706,     0,     0,   649,     0,   692,   692,     0,
       0,   656,     0,     0,     0,   707,   524,     0,   703,   705,
     704,     0,     0,     0,   682,   681,     0,   660,     0,     0,
     708,   709,   693,   701,   695,     0,   697,   702,   699,     0,
     692,     0,   438,     0,   696,   694,   700,   698,   683,     0,
     439,     0,     0,     0,     0,     0,     0,   661,   662
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,   758,  1196,  1438,  1440,  1436,   759,  1081,   770,
    1439,   760,  1186,  1432,  1187,  1433,   771,  1657,  1658,  1659,
    1994,  1992,  1993,  1995,  1996,  1997,  2004,  2302,  2448,  2449,
    2008,  2306,  2451,  2452,  2012,  1667,  1668,   777,  1371,   454,
      23,    24,   734,  1705,  2197,  1961,  2320,  2034,  2001,  2296,
    2170,  2391,  1055,  1600,  1601,  1343,  1199,  2408,  2459,  1947,
     115,   332,   333,   589,   342,   343,   344,   345,   926,   612,
     346,   609,   940,   610,   936,  1462,  1463,   925,  1449,  2037,
     347,    25,    91,   163,   419,    26,   432,    27,  2083,  2346,
    2468,  2469,  1292,  1293,    28,    29,   920,   131,    30,   722,
      31,    32,  1467,    33,    34,    35,   724,  1038,  1570,  1571,
      36,    37,  1474,    38,    39,    40,    41,    42,    43,    44,
      45,    46,   365,    47,   629,  1479,    48,  1029,  1304,  1559,
    1920,  1922,  2104,    49,    50,  1503,    51,  1349,  2145,  1975,
    2287,  2381,  2481,  2284,   103,   187,   753,  1066,  1353,  1973,
    1612,  1064,    52,    53,   157,   417,   728,   731,  1052,  1338,
    1339,  1340,    54,   118,   932,    55,   140,    56,    57,    58,
    2137,  1951,  2546,  2547,    89,  1325,  1326,  2057,  2055,  2498,
    2538,  1733,  1327,  1242,   987,   998,  1254,  1255,   696,  1259,
    1045,  1046,    59,   113,   114,    60,   702,   703,   704,  1536,
    1551,  1917,    61,    62,   388,   389,    63,   404,   713,    64,
      65,   378,   655,    66,  1604,  1968
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1930
static const yytype_int16 yypact[] =
{
   13082,   -95,  -126,   175, 13047,   222, -1930,   488, -1930,   319,
     338,   499,   265,   308, -1930,    64, -1930,   373,   697,   128,
     550,   -80,   172,   224, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930,   696, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930,   699,   727,   740,
     256, -1930,   239,   555,   632,   816,   667,   828,   127,   838,
     851,   858,   632, -1930,   631,   738,   632,   507,   509,   690,
   -1930,    72,    84,   152,   892,   168,   173,   908,   339,   483,
     541,   564,   566,   693,   780,   565, -1930, -1930,   978,   988,
     693,   610,   403,   577, -1930,  6581,   993,   791,   100, -1930,
    1012,  -108,   884,   886,   894,   869,   901,   640,  1049, -1930,
   13082,   446,  -184,   503,   771,   486,  1052,    54,   343,   776,
    1060,  1014,  1085,   671,   881,   544,   819,   723,   575,   905,
    1102, -1930,   393,  1106,   545,   578,   632,   741,   695,  1113,
   -1930, -1930, -1930,   -93, -1930,   865, -1930,   871, -1930, -1930,
     885, -1930,   911,   977, -1930,   920,    20,   938, -1930,   949,
     581,   582, -1930, -1930, -1930, -1930, -1930,  1233, -1930,  1243,
   -1930,  1008,  1260, 10511, 10511, -1930, -1930,  1273,   188, -1930,
   -1930, -1930, -1930,  1274, 10511, 10511, 10511, -1930, -1930, -1930,
    7760, -1930, -1930,   875, -1930, -1930, -1930,   909, -1930, -1930,
   -1930, -1930, -1930, -1930,  1275,   965,   983,   996,  1023,  1041,
    1044,  1070,  1072,  1088,  1097,  1104,  1111,  1133,  1135,  1143,
    1145,  1160,  1163,  1175,  1177,  1182,  1183,  1196,  1199,  1200,
    1201,  1202,  1203,  1204,  1205,  1207,  1208,  1209,  1211,  1212,
    1213,  1214,  1215,  1216,  1217,  1218,  1219,  1221,  1222,  1223,
    1224,  1225,  1226,  1228,  1229,  1230,  1231,  1232,  1236,  1237,
   -1930, -1930,  1238,  1239,  1240,  1241,  1242,  1244,  1245,  1249,
    1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,  1265,
    1267,  1269,  1270,  1271,  1279,  1280,  1281,  1287,  1288,  1289,
    1290,  1291,  1292,  1293,  1294,  1297,  1298,  1299,  1300,  1301,
    1302,  1303,  1304,  1305,  1308,  1309,  1311,  1312,  1313,  1314,
   10511, 13536,  -104, -1930,   936,   853,   877,    35,  1320,  1430,
    1321,    66,  -172,    75, -1930,  1484, -1930,  1484, -1930,  1600,
    1493,  1659,  1662,  1691,  1739,  1743,  1731,  1488, -1930,  1697,
    1702, -1930, -1930,  1712,  1755,    52, -1930, -1930,   634,    89,
      63,   639,    77,   129,   733,  1688,  1483,  1516,   147,   611,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,   226, -1930,
    1759,  1760, -1930, -1930, 13421,  1567,    60,  1762,  1569,  1486,
    1765,    60, -1930, -1930,   547,    26, -1930,  1575,   617,  1492,
   -1930,  1497,  1494, -1930,  1496,  1775,  1776,   264,  1752, -1930,
     314,  -185,   100,  1781,  1782,  1783,  1784,  1787,    30,  1792,
   -1930, -1930, -1930,  1793,  1795,  1729,  1524,  1734,  1529,  -166,
   -1930,  1810,  -160, 13871, 13871, -1930,  1817, 10511, 10511,  1367,
    1367,  1785, 10511, 13347,    96,  1819,  1821,  1404, -1930, 10511,
    6974, 10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511,
    1409, 10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511,
   10511, 10511, 10511, 10511, 10511, 10511,  1416, 10511, 10511, 10511,
    1422, 10511, 10511, 10511, 10511, 10511, 10511,  8153, 10511, 10511,
   10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511,  1423,  1424,
    1427,  1428,  1431, 10511, 10511,  1433,  1438,  1439, 10511, 10511,
    1855,  1441,  1442, 10511, 10511, 10511, 10511, 10511, 10511, 10511,
   10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511,
   10511, 10511, 10511, 10511, 10511,  1443, 10511, 10511, 10511,  1444,
   10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511,
    1446,  9540, -1930, 10511, 10511, 10511, 10511, 10511,    24,  1459,
     844, 10511,  7367, 10511, 10511, 10511, 10511, 10511, 10511, 10511,
   10511, 10511, 10511, 10511, 10511, 10511, 10511, 10511,  1877, -1930,
     100,  1878, 10511,  1880,  1884,   381, -1930,   158, 10511,  1469,
     296,  1888,   100, -1930, -1930, -1930,   -40, -1930,   100,  1716,
    1715, -1930,  1910,  1916,  1649,  1918,  1520,  1521,  1651,  1658,
    1656,  1928,  1661, -1930, -1930,  1927,  1663,  1896,  1897, -1930,
    1939,  1940,  1941,  1944,  1945,  1950, -1930,  1951,  1952,  1961,
    1979, 13421,  1981,  1740,  1983,  1985,  1986,  1987,  1988,  1611,
    1989,    39,   334,  1990, -1930, -1930,  1779,  1794, -1930,   139,
    1574,  1583, -1930, -1930,  1610,  1610,  1610,  1610,  1610, -1930,
    1610, -1930,  1612,  1610,  1610,  1610,  1968, -1930,  1968, -1930,
    1610,  1610,  1610,  1614,  1968,  1610,  1968, -1930, -1930, -1930,
   -1930, -1930,  1615,  1617,  1618, -1930,   767,  2035, 13421,  2036,
    2037,  2038,  1622,  1648, -1930,   355,  2040,  2068,  1875,  1653,
   -1930, -1930, -1930,  1892,  2046,  1703,  2097,  1904,  1822,  2099,
     147,  1685, -1930,  2102,  1829,  2104,   375, -1930,   465, -1930,
   -1930,    42, -1930, 10511,  1911,   100,  -190,   695, -1930, -1930,
   -1930, -1930, -1930,  1717, -1930,    20, -1930, -1930,  2105, -1930,
    2109,  2111,  2112,   346, -1930,  2111,   561, -1930,   736, -1930,
    1696, 13871, 13376,   535, -1930, 10511, 10511, -1930,  1705, -1930,
   10511,  1882,   169, -1930, -1930, -1930,  9821,  8546,  1947,  1994,
    2034,  9852,  9911,  9943, 10136, 10190, 10224, -1930,  2398,  2712,
    3038,  3364, 10255,  3690,  4016,  4342, 10294, 10326, 10539,   543,
    4668, 10593,  4994, -1930, 10627, 10697, 10729, -1930, 13760,  5320,
    5646,  5972,  6298,  9508,  1707, 10921, 10950, 10978, 11005, 11038,
   11065, 11100, 11132,  6682,  6710,  6766, -1930, -1930, -1930, -1930,
   -1930, 11159,  6992,  1778,  1786,  1788,   902,  1107,  1709,  1789,
    1796,  7046, 11186, 11213, 11240, 11267, 11294, 11324, 11353, 11381,
    7086,  7114,  7150,  7182,  7450,  7490,  7554,  7595,  1157, 11408,
   11441, 11468,  7778, -1930,  1184, 11503,  7832, -1930,  7862,  7894,
    7936,  7968, 11535, 11562, 11589,  8182,  8236,  8266, -1930, -1930,
    6809,  7404,  8645,  9087,  9087, -1930,    67, -1930, -1930,  1894,
   10511, 10511,  1714, 10511, 13805,  1718,  1726,  1728, 10511,  2054,
    1517,  1517,  1322,  1559,  1580,   980,   980,   842,   842,   842,
     842,   863,  1785,  1785,    86, -1930,  -106,  2012, -1930, -1930,
    1730,   158,  1991,  1992,  1993, -1930,  1882,   381, 11616, -1930,
   -1930,    36,  -153,    75,  1715,  1715,  1995,  1953,   100, -1930,
    1996, -1930, -1930,  1733,  1889,  2145,  2149,  1750,  1744,  1751,
    1756,  2163,   855,    52,  1972,  1973,   519, 13421, 13421,  2168,
   -1930,  1956, -1930, -1930, -1930,  1957,  2136, 13421,  2178,  1948,
    1949, -1930, -1930, -1930, -1930, -1930, -1930,  2180, -1930,  2181,
   -1930,  2186,  2192, -1930,    60,    60,  2193, -1930, -1930, -1930,
   -1930, -1930, -1930,  2195, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930,  2195, -1930, -1930, -1930,  2196,  2197,  2198,
    2004,  1790,  1797, 10511,  1798,  2136, 13421, 13421, 13421,  1998,
      60,  -128,   204,   360,  2003,  2202,   551,  2203,   685,  2067,
    2205,   363,  2206,  2210,  2017,  1826,  1497,  1799, -1930, -1930,
   -1930, -1930,  2125,  2221,   643, -1930,  1484, -1930,  2222, -1930,
   -1930, -1930,   451, 13871,  2166,  2047,  -190, -1930, -1930,  2231,
   -1930, -1930, -1930,  2215,  -152, -1930,   532,  1818, -1930,  -152,
    1818,  2045, 10511, -1930, 10511, -1930, 10511, 13621, 13434,  2156,
    8298,  1827,  1832, 10511, 10511, -1930, 10511, 13494,  2096,  2096,
   10511, -1930, -1930, -1930, -1930, -1930, -1930, 10511, 10511, 10511,
   10511, -1930, 10511, 10511, 10511, -1930, -1930, -1930, -1930, 10511,
   10511, -1930, 10511, -1930, -1930, -1930, 13421, 13421, 10511, 10511,
   10511,  2254, -1930,  1909,  1913,  1915,  1925,  1931,  1932, -1930,
   -1930, -1930, 10511, 10511, 10511, -1930, 10511,  1841,  1849,  1864,
    1934,  2280,  1936,  2282,  1938,  1870,  1871, 10511, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, 10511, 10511, 10511, 10511,
   10511, 10511, 10511, 10511, -1930, 10511, -1930, -1930, -1930, 10511,
   -1930, 10511, -1930, 10511, 10511, 10511, 10511, 10511, -1930, -1930,
   -1930, 10511, 10511, 10511, -1930, -1930, 10511,  1882,  9087,  9087,
    2051, 13838, 10511, -1930, 10511, 10511,  1882, -1930,  1885,  2020,
     100,  2293,   381,  2158,  2158,  2158,  1879, -1930,   477, 10511,
    2297,  2298,  1911, -1930, -1930,   100, 10511,   -47,   100,    48,
    1883,  1900,  2126,  2294,    61,  2299,  2309,  2138, -1930, -1930,
   -1930,  2315,  2315,  1901,  2162,  2164,  1903,  2136,  2136, 13421,
   -1930, -1930,  1453,  2136, -1930,  2327,  2332, -1930, -1930,  2115,
    2116,  1919,  1920,   553,   531,   857,   531,   531, -1930,   556,
     531,   531,   531,   857,   857,   531,   531,   531,   604,   857,
     531,   857,  1921,  1922,  1923,  2258, -1930, 10511, 13871,   204,
    2136,  2136,  2136,   840, -1930,  1926,  1929, -1930,  1930,  1933,
    1937,  1942,   606, -1930,  2076,   204,  2343,   365,  2287, -1930,
    2211, -1930, -1930,   471,  2113,  2046,  2082,   204,   370,  2160,
    2356,  2340, -1930,   560,  1829,  2359,   -83,  2366,  1954,  2207,
     657,  1958,  1959,  2217,  1960,   613, -1930,  2367,  1882, -1930,
   -1930,  2378,    -4,  2377,  2382,  2383,  1974,   502, -1930,  1971,
   -1930,   824, 10511,  2182, -1930, -1930,  8939,  2232,  2394, -1930,
   -1930,  2395,  9332,  -149, -1930,  -149, -1930, -1930, 13871, 13690,
   -1930, 10511,  1980, 10511, -1930, -1930,  9754,  1246, 11643, 10511,
   10511,  1982,  1984, 11670, 11697, 11727,  8340,  8372, 11756, 11784,
   11811, 11844, 11871, 11906,   -15,   -13, 11938, 11965,  8564,  2013,
    2016,  2022,  2023,  2030,  2032,  2042,  1276,  8618, 11992, 12019,
   -1930, -1930, -1930,  2043,   615,  2044,   649,  2052, -1930, -1930,
   12046,  8678,  8722,  8754, 12073, 12100,  8968,  9035,  1349,  1398,
    1425, 12130, 12159, 12187, 12214, 12247, 12274,  9062,  9126,  9158,
    2033,  2039, 10511,  1882, 10511,  1876,  1882, 13871,  1882,  2053,
    1882,  2055,  2056,  2349,  2260,  -190, -1930, -1930,  2240,  2058,
    2059,  2060, -1930,  2402, 13871,  2386,    57,  2047, -1930, 13871,
   10511,  2062, -1930, -1930,   -47, -1930, -1930,  2061,    48,  2403,
    2449,  2460, -1930, -1930,  2063,  2461, -1930,  2467, -1930,  2064,
    -192, 10511,  2069,  2070,  2471,  1453,  1453,  2136,  2290,  2483,
    2073,  2074,  2077,  2435,  2492,  2078,  2494,   163, -1930, -1930,
   -1930,  2341,  2347, -1930,  1453, -1930, -1930, -1930, -1930,  2291,
     682, -1930,  2502, -1930, -1930,  2272,  2511, -1930,  2515, -1930,
   -1930, -1930, -1930,  2101, 12309,   651, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930,   775,   204,  2518,  2520,
    2521,  2522,  2523, -1930,  2524,  2110,   653,  2119,   -57,   204,
   -1930,  1675,  2410, -1930, -1930, -1930, -1930, -1930,  2527,  2273,
    2067,  2121,   662,  2274,   204,  2540,   372,  2541,  2529,  2530,
     664, -1930, -1930,  2404,   643, -1930,   538, 10511,  2132,  2133,
    2141,  2552,  2552,  2142,  2471,     2,   643, 13421, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930,   502,   666,   502,    92,   481,
    2147, -1930,   655,   612, -1930, -1930, 13871,  2305,  2550, -1930,
   -1930, 13871,   672, -1930,  2376, -1930, -1930, 13871,  2571, -1930,
   10511, -1930, -1930, 10511, -1930, 12341, 13201, -1930, -1930, -1930,
   -1930, -1930, 10511, 10511, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, 10511, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, 10511, 10511, -1930, -1930,  2227,  2227,  2227,
   -1930,  2233,   997, -1930,  2234,  1092, -1930,  2227,  2227, -1930,
   10511, 10511, 10511, -1930, -1930, 10511, 10511, -1930, 10511, -1930,
   10511, -1930, 10511, -1930, -1930, -1930, -1930, -1930, -1930, 10511,
   10511, 10511, -1930, -1930,  2165,  2167,  1876,  2169,  2171, -1930,
    2174, -1930, -1930,  2507,  2544,  2438,  2260, -1930,  2605,  2605,
    2605,  2190, 10511, 10511,  2607,  2182, 13871,  2552, -1930,    48,
    2191, -1930, -1930,  2599,    61,  2601, -1930,  2611,  2610, 12368,
    2613,  2615, -1930,   678, -1930, -1930,  1453, -1930, -1930,  2617,
   10511,  2618,  2569,   -24, 10511, -1930, -1930, -1930, -1930, -1930,
   -1930,  2208,  2209,  2212, 10511, -1930, -1930, -1930,   840,  2564,
   -1930,  2219,  2621, -1930,   857, -1930,   857,   857, 10511, -1930,
   -1930,  2566, -1930,   683,  2626,  2220,  2223,  2224,  2225, -1930,
     204, -1930,   204,  2226,  2229,   686,  2114, -1930, -1930, -1930,
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
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,  2437, -1930,
    2235,  2242,  2375,  2113,   204, -1930,  2243,   691,  2244,  2396,
     204,  2245,  2661,  2663, -1930,   560,  2397,   694,  2250,  2506,
    2508,  2252, 12395,  2613,  2552,  2552, -1930,   730,   744,  2615,
     801,   436, -1930, -1930,  2136,   803, -1930, -1930, -1930, -1930,
    2670, -1930, -1930,   824, 10511, 10511, -1930, -1930,  2253, -1930,
    9725, -1930, 10118,  2256,  2588,  2182,  2257, 12422, 12449, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, 12476,
   12503, 12533,  2227,  2227,  2227,  2227,  2227,  2227,  1454, 12562,
    2619,  2480,  2480,  2480,  2227,  2264,  2265,  2266,  2227,  2268,
    2270,  2275,  2227,  2480,  2480, 12590, 12617, 12650, 12677, 12712,
    9350, 12744, 12771,  9404,  9439,  9466, -1930, -1930, -1930, -1930,
   -1930,  2271, 10511, 10511,  1911,  2438, -1930,   805,   808,   812,
    2685, 13871, 13871,  2674, -1930,   814,  2276,    48,  2532,  2278,
    2539, -1930,  2662,  2686, -1930,   818, -1930,   820, -1930,  2704,
   -1930,   822, 12798,   829,  2289,  2300,  2545, -1930, 12825,  2292,
    2329,  2330, 12852,   802, -1930,  2440, -1930, -1930, 12879, -1930,
    2766, -1930, -1930,  2331, -1930, -1930, -1930,  2710,   831,   864,
     204,  2715, -1930, -1930,  3092,  3418,  3744,  4070,  4396,  4722,
    2660,  2726, 10511,  2669, -1930,  2273,   893,   204, -1930,   204,
    2333,   895, -1930, -1930, -1930, -1930,  2620,     2, 10511,  2334,
    2335,  2471, -1930,   897,   900,   910, -1930,  2752, -1930,   915,
   -1930,   516,  2338,  2755,  2696,  2345,  2698, -1930,   777, -1930,
     481, -1930, 13871, 13871,  2764,  2765, -1930, 13871, -1930, 13871,
    9332,  2358, -1930, -1930, -1930, -1930, -1930, -1930, -1930,  2480,
    2480,  2480,  2480,  2480,  2480, -1930, 10511, -1930,  2772,  2716,
    2360,  2361,  2365,  2480, -1930,  2439,  2441,  2480, -1930,  2447,
    2448,  2480,  2368,  2370, -1930, -1930, -1930, -1930, -1930, 10511,
   -1930, -1930,  2782,  2794,  2795,  2796, 13728,  -125, 13871,  2047,
    1911, -1930,  2799, -1930, -1930,  2384, 10511, -1930,    48,  2387,
    2783,    61,  2785, -1930,  2538,  2602,  2807, -1930,  2808, -1930,
   -1930,  2809,  1187, -1930,  2810, 10511, 10511, -1930, -1930, -1930,
   -1930, -1930, -1930,  2753, -1930,  5048, -1930, -1930,  5374, -1930,
    2535,  2401, -1930, -1930,   917,  2626, -1930,  2741,  2691,  2667,
    2658,  2554, -1930, -1930, 12906,  2412,  2375, -1930,   922,   984,
     204, -1930,  2414,   464, -1930, 12936,  2613,  2615,   986,  2630,
   -1930, -1930, -1930, -1930, -1930,  2833,  2838,    18,   -46,  2429,
    2642, -1930, -1930,  2827,  2428,  1073,  2847,  2750,  2432,  2433,
    2434,  2436,  2444,  2445, 12965, -1930,  2450,  2852, -1930, -1930,
   -1930,  2446,  2227,  2451,  2456,  2457,  2227,  2459,  2462,  2466,
   -1930, -1930, 12993,  2469,  2455,  2473, -1930, -1930,  2654, 10511,
   -1930,  2729,  2047, -1930, -1930, 13871,  2475,    48,  2883,  1075,
    2895, -1930,  2898, -1930, -1930,  2484, -1930, -1930,  2489, 13020,
   13053, -1930,  5700, -1930, -1930,  2491, -1930, -1930, -1930,  2493,
   -1930, -1930, -1930, -1930, -1930,  6026, -1930, 10511, -1930, -1930,
   -1930,  1077,  2906, -1930,  1079,  1082, -1930,  2909, -1930,  2495,
    2914,  2917,  2514,  2516, -1930,  2517, 10511,  2924, -1930,  1090,
      -8, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,  2931,
     481,  2519, -1930,  2480, -1930, -1930, -1930,  2480, -1930, -1930,
   -1930, -1930, -1930,  2933,  2934, -1930, 13728,   366,  2780, -1930,
      48,  2525, -1930, -1930,    61, -1930,  2531, -1930, -1930,  1455,
   -1930,  6352, -1930,  2938,  2535, -1930, 13080, -1930,  2528,  2735,
   -1930,  1096, -1930, -1930, -1930,  2941,  2946,  2948, 13871,  2932,
   -1930,  2950, -1930, -1930, -1930, -1930,  2951,  2537,  2227,  2227,
    2546,  2227,  2227,  2549,  2551, -1930,  2724,  2734,  2552, -1930,
    2553,    48,  2558,  2967, -1930, -1930, -1930,  2952,  1099, -1930,
   -1930, -1930,  2737,  2977,  2984,  2967,  2568,  2570,  2572, 10511,
   -1930,  2749,   481, -1930,  2480,  2480, -1930,  2480,  2480, -1930,
   -1930,  2811,  2813,  2573,    48,  2574, -1930, -1930,  1101,  2991,
   -1930,  2938,  2578,  1115,  2579,  1105,  2580,  2771, -1930, 13871,
    2765, -1930,  2581,  2582,  2583,  2584, -1930, -1930,  2587,    48,
   -1930,  3006, -1930, -1930,  3005,  3008,  2967,  2967, -1930,  2784,
    3009,  2428, -1930, -1930, -1930, -1930,    48,  2592,   117, -1930,
    2596,  2603,  1116,  1138,   525,  3017,  1148, -1930, -1930,  2600,
      48,   -27,  2872,    27,   144, -1930,  2967, -1930, -1930,  2928,
    2758, -1930,  2784,    48,  2609, -1930, -1930,    25, -1930, -1930,
   -1930,    85,   624,  1150,   525,   525,  2857, -1930,  2614,    48,
   -1930, -1930, -1930, -1930, -1930,    23, -1930, -1930, -1930,   111,
   -1930,  2788, -1930,  2624, -1930, -1930, -1930, -1930,   525,    62,
   -1930,  2836,  2842,  2844,  2854,  3041,  3050, -1930, -1930
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1930,  2943,  -115, -1930, -1930, -1930, -1930, -1037,  1713, -1930,
    1886, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,  1997,  2622,
   -1930,  -277,  -726,  1371, -1930, -1598, -1930,  1043, -1505, -1930,
   -1875, -1930, -1210, -1930,  1117, -1454, -1930, -1930, -1930, -1551,
   -1930, -1930,  2487,  -326,  -334,  2481,  -583, -1930, -1930,  -343,
   -1930, -1930,   638, -1930, -1930, -1930,  1620,  -891,   376,  -110,
   -1930, -1930, -1930,  2923,  2348, -1930,  2342, -1930,   848,   670,
   -1930,   600, -1267, -1930, -1930, -1930, -1930, -1930, -1930,  2071,
   -1930, -1930, -1455, -1930, -1930, -1930,  2066,  1800, -1930,  1168,
   -1930, -1930, -1718, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930,  2485, -1930,  2153,  1881, -1930,  1811,  1555,  1194,
   -1930,  1018,   868, -1930, -1930, -1437, -1930, -1032, -1930, -1930,
   -1930, -1930, -1930,   616,   243,  3015,  2687, -1930,  2057, -1930,
     981,  2373, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1292,  1533, -1930, -1930, -1930, -1930,   732, -1930, -1930, -1930,
   -1930,  1017, -1930,   573, -1930,  1562,  1551, -1929, -1926, -1689,
   -1708, -1569, -1930, -1229,   659,   203,   153,  -980,  -512,  2135,
   -1311, -1930, -1930, -1930,  2942, -1930,  -385, -1930,  2120,  1383,
   -1528, -1930, -1930, -1930, -1930,  2486, -1930, -1930, -1930, -1930,
   -1930,  2738, -1930, -1930, -1674, -1930
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -797
static const yytype_int16 yytable[] =
{
     331,  1962,  1457,  1715,   613,  1575,  2049,   600,  1485,  1486,
    1057,   595,  1525,  1720,  1504,  1950,   709,  2123,  1263,  1264,
    2129,  1011,  1786,  1011,  1269,   937,  1271,   124,  1546,   714,
     885,  1948,   590,   742,  1198,  1357,  1207,  1354,   562,  1356,
    1562,  2044,   886,   422,   976,  1596,  1049,  1347,  1734,  1735,
    1347,   349,  1465,  -796,  2065,   591,  1209,   380,   381,   382,
     383,   384,   385,   698,   599,  1472,  2601,  1757,   601,   337,
    2565,  1040,   111,  1184,   751,   158,   699,  1713,   443,   444,
     755,   735,  2442,  1590,   733,  1728,   588,   164,   736,   449,
     450,   451,   632,   363,   430,   453,   563,   564,   565,   566,
     567,   568,   569,   337,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   733,   587,  2580,    67,  2370,    71,  2171,  2172,   966,
     144,   119,   641,  1041,   634,  2551,  2594,   934,  2182,  2183,
    1285,  1958,   380,   381,   382,   383,   384,   385,   639,  1430,
    1460,   603,  2318,  2002,  2003,   166,  1040,    68,  2372,  2582,
     627,   562,  2013,  2014,  2568,   649,  2045,  1746,  1747,  1748,
    1749,   169,   129,   633,  2581,   935,   171,  2066,    72,   563,
     564,   565,   566,   567,   568,   569,  1015,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,  1959,   587,  1212,  1287,   159,   588,
     700,  1783,   145,   642,  2552,   561,  2595,   887,  1041,  1461,
     764,   765,  2373,   120,  2596,    90,   160,  2569,   604,  1727,
     431,   602,  2075,   338,   364,  1750,   423,  2067,  -338,   339,
     165,  1466,  2566,  -796,  2080,  1591,  2602,   386,   161,   602,
    2443,  2571,   605,   752,  1473,   701,   916,   110,  1736,   752,
    1185,   117,  2570,  1286,  2046,   606,  2371,   338,  1211,  1348,
    1773,   927,  1613,   339,  1952,   162,    69,  2583,  1050,  1051,
     635,  2094,  1785,   146,  2288,  2289,  2290,  2291,  2292,  2293,
     607,   112,  2095,   350,   640,  2584,  2319,  1927,  2301,  2060,
    2553,  2152,  2305,  1955,  2597,  1083,  2309,    16,   167,    70,
     628,  1447,  2096,   608,  2554,   602,   977,   592,   125,   126,
     127,  1614,   104,  1615,   170,  2585,  2097,   128,   423,   172,
    1344,   650,   386,   761,  1784,  2098,  1574,   762,  2365,   978,
    2364,   105,   174,   888,   772,   776,   778,   779,   780,   781,
     782,   783,   784,   785,   786,  1217,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   766,   804,   805,   806,  2099,   808,   809,   810,   811,
     812,   813,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,  2124,  2125,  1694,   407,   979,   831,   832,
     729,  1056,  2572,   836,   837,  1640,   195,  1641,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
     853,   854,   855,   856,   857,   858,   859,   860,   861,   862,
     715,   864,   865,   866,   743,   868,   869,   870,   871,   872,
     873,   874,   875,   876,   877,  1237,  1238,   340,   880,   881,
     882,   883,   884,   594,  1210,  1243,   894,   899,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   909,   910,   911,
     912,   913,   914,  1444,   387,  1714,  1068,   331,   408,  1071,
    -332,   340,   390,   928,  2131,   341,   176,  2159,  2160,  2161,
    2162,  2163,  2164,  2329,  1082,   175,  1751,  1752,  1753,  2173,
     359,   360,   106,  2177,  1280,  1281,  1282,  2181,  1197,   730,
    1960,  1553,  2131,  2088,   922,  2089,   196,   108,  2447,   341,
     361,  2274,  2450,   651,   652,   653,   654,   107,   611,  1040,
    1958,  1288,  1289,  1290,  1291,   923,  2275,  1764,  1330,  1766,
    1767,   376,  2281,  2559,   178,   391,  2235,   398,   411,   409,
    1331,  2238,  2268,   563,   564,   565,   566,   567,   568,   569,
     109,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,  1554,   587,
    -370,   413,  1754,    92,   435,   437,  1332,    16,   733,  1330,
    1084,  1041,  2209,  1959,  1333,  1202,  2456,  1233,  2317,  1251,
    1252,  1331,  1298,   366,  1384,  1385,   446,   447,  2132,  2512,
    2513,  1299,  2514,  2515,   402,  1966,  1938,  1067,  1053,   193,
     717,  1021,  2552,   367,  2457,   116,  1294,    93,  1555,  1306,
     194,  1548,  1458,  2133,   403,  1464,  1563,  1332,  1929,   177,
    1967,   130,   636,    94,  1334,  1333,   658,   659,   924,  1206,
    1077,  1078,   136,  1234,   710,  1080,   362,  2106,   137,  1075,
    1076,  2133,  1087,  2111,  2134,   563,   564,   565,   566,   567,
     568,   569,  1939,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
      95,   587,  2134,  1335,   377,  1334,  2462,   179,  2586,   132,
     399,   412,   133,  1328,   711,   630,  2342,    96,  2553,    97,
     637,   656,  1556,  2135,  1317,    98,   930,   602,   631,  1706,
    1235,  1318,  2554,   638,  2355,  2138,  1042,  1487,  1336,  1557,
     134,   657,   418,  1759,   414,  -370,   643,   436,   438,  1940,
      99,  2135,  1760,   135,  1335,  2321,   563,   564,   565,   566,
     567,   568,   569,  2326,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   138,   587,   718,  1022,  1188,  1189,  1319,  1191,  1295,
    1236,  1320,  1307,   561,  1549,  1010,  2505,  2136,   139,  1564,
    1513,  1930,  2445,  1043,  1044,  1488,   182,  2393,  1321,  1941,
    -563,  2397,    16,  1011,   644,   712,  2264,  1322,  2455,   368,
     766,  1514,  1579,  2421,   150,  2136,  2587,   645,   153,   141,
    2544,  1580,   142,  2244,  2199,  1490,  1771,  1598,  1491,  1599,
    1492,   143,  1070,  1493,  2588,  1772,  1964,  2542,  2543,   183,
    2258,   147,  2259,  -563,  1323,  1012,   369,   184,  1494,  2574,
    2575,  -563,   185,  2233,   148,  1495,  1496,   890,   891,   100,
     892,   149,  2234,   893,  2589,  1453,  1445,  2573,  2409,   186,
    1337,   370,  2411,  -563,   584,   585,   586,   151,   587,   371,
    1013,   999,  2598,   101,  2511,  1047,  1048,  1004,   415,  1006,
    1497,   372,   102,   152,   182,   168,   585,   586,  1278,   587,
    1228,  1229,  1526,   154,  1324,   155,  1527,  2493,  1301,  1302,
    1431,   173,   563,   564,   565,   566,   567,   568,   569,  1442,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   183,   587,  1515,
    1516,  1499,   156,  2484,  2485,   335,  2487,  2488,   121,   122,
     123,   188,  1350,  1351,  1528,  2460,  -567,  1529,   373,  1358,
     180,  1359,   181,  1108,  1109,  1568,  1569,   336,  1366,  1367,
    1500,  1368,  1530,  1511,  1512,  1373,  1517,  1518,  1501,   374,
    -564,   190,  1374,  1375,  1376,  1377,   189,  1378,  1379,  1380,
    2322,   191,  1531,  2361,  1381,  1382,   334,  1383,   197,  -567,
    1532,  2006,  2007,  1386,  1387,  1388,  2495,  -567,   580,   581,
     582,   583,   584,   585,   586,   348,   587,  1396,  1397,  1398,
     351,  1399,   352,  -564,  1519,  1518,  1543,  1544,   354,  -567,
     353,  -564,  1410,  1585,  1586,  1661,  1662,   355,  1502,  2518,
     375,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,   356,
    1419,  1588,   357,  -564,  1420,   379,  1421,   392,  1422,  1423,
    1424,  1425,  1426,   393,  2537,   394,  1427,  1428,  1429,  1664,
    1665,  1770,  1544,  1781,  1544,  1954,  1965,  1435,   397,  1437,
    1437,  2549,  1925,  1544,  1934,  1935,  1956,  1597,   395,  1533,
     396,  1534,  1971,  1972,  1454,  2564,  2010,  2011,  2058,  2059,
     400,  1459,   405,  2081,  1544,   406,  2092,  1544,  2578,   410,
    1535,  2108,  1544,   418,  2117,  1586,   420,   563,   564,   565,
     566,   567,   568,   569,  2593,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   401,   587,  1256,  1257,   424,  1260,  1261,  1262,
    2126,  2127,   425,  1265,  1266,  1267,  1695,  1072,  1270,  1697,
     416,  1698,  1524,  1700,  2128,  2127,   426,   563,   564,   565,
     566,   567,   568,   569,   428,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   427,   587,   563,   564,   565,   566,   567,   568,
     569,   429,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   433,
     587,  2130,  2059,  2139,  1597,  2201,  2202,  1602,  2203,  2202,
     434,  1606,  2204,  2202,  2207,  2127,   439,  1611,  2215,  2216,
    2217,  2218,  2220,  2221,  2336,  2337,  1617,   440,  1080,  2223,
    2224,  2242,  1544,   441,  1625,  1626,   563,   564,   565,   566,
     567,   568,   569,   442,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   111,   587,   448,  2243,  1544,   563,   564,   565,   566,
     567,   568,   569,   455,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   457,   587,  2257,  1544,  2261,  1544,  2269,  2216,  1696,
    2270,  2127,  1140,  1141,   988,   989,   990,   991,   456,   992,
    2271,  2127,   994,   995,   996,  2273,  2218,  2348,  1544,  1000,
    1001,  1002,  2359,  1544,  1005,  1716,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   593,   587,   563,
     564,   565,   566,   567,   568,   569,  1729,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   458,   587,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   459,   587,  2360,  1544,  2366,  2059,   563,   564,
     565,   566,   567,   568,   569,   460,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   597,   587,   563,   564,   565,   566,   567,
     568,   569,   461,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     462,   587,  1942,   463,   563,   564,   565,   566,   567,   568,
     569,  1488,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   464,
     587,   465,  1489,  2378,  1972,  2413,  2414,  2427,  1544,  2429,
    2216,  1490,  2430,  2218,  1491,  1977,  1492,   466,  1978,  1493,
    2440,  2441,  2464,  2465,  2474,  2475,   467,  1989,  1990,  2500,
    2501,  2520,  2521,   468,  1494,  2528,  2521,  1142,  1143,  1991,
     469,  1495,  1496,  2525,  2526,   611,  2557,  2521,  1998,  1999,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   470,   587,   471,  2015,  2016,  2017,  2558,  2521,
    2018,  2019,   472,  2020,   473,  2021,  1497,  2022,  2561,  2562,
    2590,  2521,  1213,  1214,  2023,  2024,  2025,  1164,  1165,   474,
    1450,  1451,   475,  1498,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   476,   587,   477,  2041,  2042,  2038,
    2039,   478,   479,   614,  1170,  1171,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   480,   587,  1499,   481,   482,
     483,   484,   485,   486,   487,  2062,   488,   489,   490,  2068,
     491,   492,   493,   494,   495,   496,   497,   498,   499,  2072,
     500,   501,   502,   503,   504,   505,  1500,   506,   507,   508,
     509,   510,   615,  2078,  1501,   511,   512,   513,   514,   515,
     516,   517,   616,   518,   519,   617,  1622,  1623,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,  1787,  1788,
    1789,  1790,  1791,  1792,   530,  1793,   531,  1794,   532,   533,
     534,  1795,  1796,  1797,   618,  1798,  1652,  1653,   535,   536,
     537,  1799,  1800,  1801,  1802,  1803,   538,   539,   540,   541,
     542,   543,   544,   545,  1502,  1804,   546,   547,   548,   549,
     550,   551,   552,   553,   554,  1805,  1806,   555,   556,  1807,
     557,   558,   559,   560,  1808,  1809,  1810,  1811,  1812,   596,
     598,  1813,   619,  1814,  1815,  1816,   620,   621,  1817,  1818,
     623,  1819,  1820,  1821,   622,   624,   625,  1822,   626,   646,
     647,   648,   660,   661,   697,   705,   706,   707,   708,  1677,
    1678,  1823,   716,   719,   721,   723,  1824,   725,   726,   727,
     732,  1825,  1826,  1827,   737,   738,   739,   740,  1828,  1829,
     741,  1830,  1831,  1832,  1833,   744,   745,  1834,   746,  1835,
    1836,  1837,  1838,   747,  1839,   748,  1840,  1841,   749,  1842,
     750,  1843,  1844,   754,  1845,  1846,  1847,  1848,  1679,  1680,
     757,   587,   767,  1849,   768,  1850,   769,  1851,  1852,   787,
    1853,  1854,  1855,  1856,  1857,  1858,   803,  1859,  1860,  1861,
    1862,  1863,   807,   826,   827,  1681,  1682,   828,   829,  2142,
    2143,   830,  1864,   833,  1865,  2147,  1866,  2149,   834,   835,
     838,   839,   840,   863,   867,  1867,   878,  1868,  1869,  1870,
    1871,  1872,  1873,  1874,  2165,  2166,  1875,  1876,   889,   938,
     915,   917,  1877,   919,  1878,  1879,  1880,   921,  1881,   929,
    1882,   931,  1883,  1884,  1885,  1886,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   939,   587,   941,  1887,  1888,  1889,  2196,  2198,   942,
     943,   944,   945,   946,  1890,   947,  1891,  1892,  1893,   948,
     949,   950,   952,  1894,   951,  1895,  1896,  1897,   954,   955,
     363,  1898,   956,   957,   958,  1899,  1900,   959,   960,  1901,
    1902,  1903,  1904,   961,   962,   963,  1905,   563,   564,   565,
     566,   567,   568,   569,   964,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   965,   587,   967,   968,   969,  2254,   970,   971,
     974,   973,   972,   984,   975,   980,   981,  1906,  1907,  1908,
    1909,  1910,   985,  2265,   563,   564,   565,   566,   567,   568,
     569,   982,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   986,
     587,   993,   997,  1003,  1007,  1611,  1008,  1009,  1014,  1016,
    1017,  1018,  1019,  1023,   563,   564,   565,   566,   567,   568,
     569,  2294,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,  1020,
     587,  1024,  1025,  1026,  2312,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,  1027,
     587,  2325,  1911,  1912,  1913,  1914,  1915,  1028,  1916,  1030,
    1031,  1032,  1034,  1033,  1035,  1036,  1037,  1039,  1061,  1054,
    2339,  2340,  1062,  1059,  1063,  1065,  1073,  1787,  1788,  1789,
    1790,  1791,  1792,    16,  1793,  1079,  1794,  1123,  1137,  1144,
    1795,  1796,  1797,  1190,  1798,   -84,  1138,  1193,  1139,  1145,
    1799,  1800,  1801,  1802,  1803,  1194,  1146,  1195,  1200,  1221,
    1216,  1201,  1219,  1222,  1804,  1203,  1204,  1205,  1215,  1218,
    1220,  1223,  1225,  1224,  1805,  1806,  1226,  1227,  1807,  1231,
    1232,  1239,  1011,  1808,  1809,  1810,  1811,  1812,  1240,  1241,
    1813,  1244,  1814,  1815,  1816,  1247,  1248,  1817,  1818,  1249,
    1819,  1820,  1821,  1245,  1246,  1250,  1822,  1275,  1253,  1258,
    1296,  1272,  1273,  1274,  2406,  1297,  1300,  1303,  1305,  1308,
    1823,  1283,  1276,  1309,  1310,  1824,  1277,  1279,  1313,  1315,
    1825,  1826,  1827,  1311,  1316,  1329,  1342,  1828,  1829,  1341,
    1830,  1831,  1832,  1833,  1345,  1346,  1834,  1352,  2093,  1836,
    1837,  1838,  2426,  1839,  1347,  1840,  1841,  1362,  1842,  1364,
    1843,  1844,  1365,  1845,  1846,  1847,  1848,  1370,  1389,  1390,
    1400,  2438,  1849,  1391,  1850,  1392,  1851,  1852,  1401,  1853,
    1854,  1855,  1856,  1857,  1858,  1393,  1859,  1860,  1861,  1862,
    1863,  1394,  1395,  1402,  1403,  1404,  1405,  1406,  1407,  1408,
    1409,  1864,   -86,  1865,   733,  1866,  1446,  1443,  1448,  1452,
    1455,  1456,  1468,  1469,  1867,  1470,  1868,  1869,  1870,  1871,
    1872,  1873,  1874,  1476,  1471,  1875,  1876,  1477,  1478,  1475,
    1481,  1877,  1484,  1878,  1879,  1880,  1482,  1881,  1483,  1882,
    1505,  1883,  1884,  1885,  1886,  1506,  1523,  1507,  1508,  1509,
    1510,  1520,  1521,  1522,  1545,  1537,  1547,  1550,  1538,  1539,
    1561,  1552,  1540,  1887,  1888,  1889,  1541,  1565,  1558,  1566,
    1567,  1542,  1573,  1890,  2509,  1891,  1892,  1893,  1088,  1576,
    1587,  1578,  1894,  1577,  1895,  1896,  1897,  1581,  1582,  1584,
    1898,  1583,  1589,  1592,  1899,  1900,  1593,  1594,  1901,  1902,
    1903,  1904,  1597,  1595,  1603,  1905,  1607,  1608,  1609,  1618,
    1703,  1704,  1627,  1707,  1628,  1711,  1712,  1721,   563,   564,
     565,   566,   567,   568,   569,  1089,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,  1645,   587,  1646,  1906,  1907,  1908,  1909,
    1910,  1647,  1648,  1787,  1788,  1789,  1790,  1791,  1792,  1649,
    1793,  1650,  1794,  1692,  1722,  1090,  1795,  1796,  1797,  1693,
    1798,  1651,  1660,  1663,  1723,  1725,  1799,  1800,  1801,  1802,
    1803,  1666,  1726,  1699,  1732,  1701,  1702,  1708,  1709,  1710,
    1804,  1717,  1719,  1737,  1724,  1727,  1738,  1742,  1730,  1731,
    1805,  1806,  1739,  1740,  1807,  1743,  1741,  1744,  1745,  1808,
    1809,  1810,  1811,  1812,  1758,  1755,  1813,  1761,  1814,  1815,
    1816,  1756,  1762,  1817,  1818,  1763,  1819,  1820,  1821,  1765,
    1768,  1774,  1822,  1775,  1776,  1777,  1778,  1779,  1918,  1780,
    1919,  1911,  1912,  1913,  1914,  1915,  1823,  1916,  1782,  1921,
    1924,  1824,  1926,  1928,  1936,  1931,  1825,  1826,  1827,  1932,
    1933,  1943,  1944,  1828,  1829,  1946,  1830,  1831,  1832,  1833,
    1945,  1949,  1834,  1969,  2236,  1836,  1837,  1838,  1963,  1839,
    1970,  1840,  1841,  1974,  1842,  1976,  1843,  1844,  2000,  1845,
    1846,  1847,  1848,  2005,  2009,  2026,  2033,  2027,  1849,  2028,
    1850,  2029,  1851,  1852,  2030,  1853,  1854,  1855,  1856,  1857,
    1858,  2031,  1859,  1860,  1861,  1862,  1863,  2032,  2036,  2040,
    2043,  2048,  2047,  2050,  2051,  2052,  2054,  1864,  2056,  1865,
    2064,  1866,  2061,  2063,  2074,  2077,  2079,  2069,  2070,  2082,
    1867,  2071,  1868,  1869,  1870,  1871,  1872,  1873,  1874,  2076,
    2084,  1875,  1876,  2085,  2086,  2090,  2087,  1877,  2091,  1878,
    1879,  1880,  2103,  1881,  2100,  1882,  2101,  1883,  1884,  1885,
    1886,  2102,  2107,  2109,  2110,  2112,  2113,  2114,  2116,  2118,
    2119,  2121,  2120,  2140,  2144,  2150,  2151,  2153,  2169,  1887,
    1888,  1889,  2168,  2174,  2195,  2175,  2176,  2178,  2205,  1890,
    2179,  1891,  1892,  1893,  2206,  2180,  2210,  2208,  1894,  2211,
    1895,  1896,  1897,  2212,  2214,  2213,  1898,  2219,  2225,  2227,
    1899,  1900,  2229,  2241,  1901,  1902,  1903,  1904,  2245,  2226,
    2252,  1905,   563,   564,   565,   566,   567,   568,   569,  2253,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,  2255,   587,  2230,
    2231,  2240,  2260,  2266,  2267,  2272,  2262,  2276,  2277,  2278,
    2279,  2280,  1906,  1907,  1908,  1909,  1910,  2282,  2283,  1787,
    1788,  1789,  1790,  1791,  1792,  2295,  1793,  2286,  1794,  2297,
    2298,  2299,  1795,  1796,  1797,  2300,  1798,  2313,  2310,  2303,
    2311,  2304,  1799,  1800,  1801,  1802,  1803,  2307,  2308,  2314,
    2315,  2316,  2323,  2328,  2324,  2330,  1804,  2331,  2327,  2332,
    2333,  2334,  2345,  2341,  2335,  2338,  1805,  1806,  2350,  1097,
    1807,  2347,  2351,  2352,  2353,  1808,  1809,  1810,  1811,  1812,
    2354,  2357,  1813,  2362,  1814,  1815,  1816,  2367,  2368,  1817,
    1818,  2369,  1819,  1820,  1821,  2374,  2375,  2376,  1822,  2377,
    2379,  2380,  2382,  2383,  2384,  2390,  2385,  1911,  1912,  1913,
    1914,  1915,  1823,  1916,  2386,  2387,  2392,  1824,  2405,  2407,
    2394,  2389,  1825,  1826,  1827,  2395,  2403,  2396,  2398,  1828,
    1829,  2399,  1830,  1831,  1832,  1833,  2400,  2412,  1834,  2402,
    2239,  1836,  1837,  1838,  2404,  1839,  2410,  1840,  1841,  2415,
    1842,  2416,  1843,  1844,  2417,  1845,  1846,  1847,  1848,  2418,
    2423,  2428,  2431,  2424,  1849,  2432,  1850,  2433,  1851,  1852,
    2434,  1853,  1854,  1855,  1856,  1857,  1858,  2439,  1859,  1860,
    1861,  1862,  1863,  2435,  2444,  2436,  2437,  2453,  2454,  2458,
    2446,  2467,  2473,  1864,  2476,  1865,  2461,  1866,  2472,  2477,
    2463,  2478,  2479,  2480,  2482,  2491,  1867,  2483,  1868,  1869,
    1870,  1871,  1872,  1873,  1874,  2492,  2486,  1875,  1876,  2489,
    2497,  2490,  2499,  1877,  2494,  1878,  1879,  1880,  2496,  1881,
    2503,  1882,  2502,  1883,  1884,  1885,  1886,  2504,  2506,  2510,
    2507,  2516,  2508,  2517,  2127,  2519,  2522,  2524,  2527,  2529,
    2530,  2532,  2533,  2534,  2535,  1887,  1888,  1889,  2536,  2539,
    2540,  2541,  2545,  2550,  2548,  1890,  2555,  1891,  1892,  1893,
    2560,  2563,  2556,  2567,  1894,  2565,  1895,  1896,  1897,  2576,
    2579,  2591,  1898,  2603,  2592,  2605,  1899,  1900,  2599,  2604,
    1901,  1902,  1903,  1904,  2600,  2606,  2607,  1905,   563,   564,
     565,   566,   567,   568,   569,  2608,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   358,   587,   763,  1619,  2035,  2200,   918,
    2141,  1441,   421,   933,  1718,  1058,  1372,  1060,  1906,  1907,
    1908,  1909,  1910,  2349,  2470,  1787,  1788,  1789,  1790,  1791,
    1792,  2523,  1793,  2115,  1794,  1314,  1230,  1312,  1795,  1796,
    1797,   953,  1798,  1480,  1572,  1923,  1560,  2105,  1799,  1800,
    1801,  1802,  1803,  2256,  2358,   192,  2531,  1355,  1069,   756,
    1957,  2285,  1804,  1098,  2263,  2577,  1937,  1953,  1268,   445,
    1284,  2073,  1805,  1806,     0,   983,  1807,     0,   720,     0,
       0,  1808,  1809,  1810,  1811,  1812,     0,     0,  1813,     0,
    1814,  1815,  1816,     0,     0,  1817,  1818,     0,  1819,  1820,
    1821,     0,     0,     0,  1822,     0,     0,     0,     0,     0,
       0,     0,     0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,
       0,     0,     0,  1824,     0,     0,     0,     0,  1825,  1826,
    1827,     0,     0,     0,     0,  1828,  1829,     0,  1830,  1831,
    1832,  1833,     0,     0,  1834,     0,  2246,  1836,  1837,  1838,
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
       0,     0,     0,     0,  1906,  1907,  1908,  1909,  1910,     0,
       0,  1787,  1788,  1789,  1790,  1791,  1792,     0,  1793,     0,
    1794,     0,     0,     0,  1795,  1796,  1797,     0,  1798,     0,
       0,     0,     0,     0,  1799,  1800,  1801,  1802,  1803,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1804,  1099,
       0,     0,     0,     0,     0,     0,     0,     0,  1805,  1806,
       0,     0,  1807,     0,     0,     0,     0,  1808,  1809,  1810,
    1811,  1812,     0,     0,  1813,     0,  1814,  1815,  1816,     0,
       0,  1817,  1818,     0,  1819,  1820,  1821,     0,     0,     0,
    1822,     0,     0,     0,     0,     0,     0,     0,     0,  1911,
    1912,  1913,  1914,  1915,  1823,  1916,     0,     0,     0,  1824,
       0,     0,     0,     0,  1825,  1826,  1827,     0,     0,     0,
       0,  1828,  1829,     0,  1830,  1831,  1832,  1833,     0,     0,
    1834,     0,  2247,  1836,  1837,  1838,     0,  1839,     0,  1840,
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
    1906,  1907,  1908,  1909,  1910,     0,     0,  1787,  1788,  1789,
    1790,  1791,  1792,     0,  1793,     0,  1794,     0,     0,     0,
    1795,  1796,  1797,     0,  1798,     0,     0,     0,     0,     0,
    1799,  1800,  1801,  1802,  1803,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1804,  1100,     0,     0,     0,     0,
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
    1910,     0,     0,  1787,  1788,  1789,  1790,  1791,  1792,     0,
    1793,     0,  1794,     0,     0,     0,  1795,  1796,  1797,     0,
    1798,     0,     0,     0,     0,     0,  1799,  1800,  1801,  1802,
    1803,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1804,  1102,     0,     0,     0,     0,     0,     0,     0,     0,
    1805,  1806,     0,     0,  1807,     0,     0,     0,     0,  1808,
    1809,  1810,  1811,  1812,     0,     0,  1813,     0,  1814,  1815,
    1816,     0,     0,  1817,  1818,     0,  1819,  1820,  1821,     0,
       0,     0,  1822,     0,     0,     0,     0,     0,     0,     0,
       0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,     0,     0,
       0,  1824,     0,     0,     0,     0,  1825,  1826,  1827,     0,
       0,     0,     0,  1828,  1829,     0,  1830,  1831,  1832,  1833,
       0,     0,  1834,     0,  2249,  1836,  1837,  1838,     0,  1839,
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
       0,     0,  1906,  1907,  1908,  1909,  1910,     0,     0,  1787,
    1788,  1789,  1790,  1791,  1792,     0,  1793,     0,  1794,     0,
       0,     0,  1795,  1796,  1797,     0,  1798,     0,     0,     0,
       0,     0,  1799,  1800,  1801,  1802,  1803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1804,  1103,     0,     0,
       0,     0,     0,     0,     0,     0,  1805,  1806,     0,     0,
    1807,     0,     0,     0,     0,  1808,  1809,  1810,  1811,  1812,
       0,     0,  1813,     0,  1814,  1815,  1816,     0,     0,  1817,
    1818,     0,  1819,  1820,  1821,     0,     0,     0,  1822,     0,
       0,     0,     0,     0,     0,     0,     0,  1911,  1912,  1913,
    1914,  1915,  1823,  1916,     0,     0,     0,  1824,     0,     0,
       0,     0,  1825,  1826,  1827,     0,     0,     0,     0,  1828,
    1829,     0,  1830,  1831,  1832,  1833,     0,     0,  1834,     0,
    2250,  1836,  1837,  1838,     0,  1839,     0,  1840,  1841,     0,
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
    1908,  1909,  1910,     0,     0,  1787,  1788,  1789,  1790,  1791,
    1792,     0,  1793,     0,  1794,     0,     0,     0,  1795,  1796,
    1797,     0,  1798,     0,     0,     0,     0,     0,  1799,  1800,
    1801,  1802,  1803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1804,  1104,     0,     0,     0,     0,     0,     0,
       0,     0,  1805,  1806,     0,     0,  1807,     0,     0,     0,
       0,  1808,  1809,  1810,  1811,  1812,     0,     0,  1813,     0,
    1814,  1815,  1816,     0,     0,  1817,  1818,     0,  1819,  1820,
    1821,     0,     0,     0,  1822,     0,     0,     0,     0,     0,
       0,     0,     0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,
       0,     0,     0,  1824,     0,     0,     0,     0,  1825,  1826,
    1827,     0,     0,     0,     0,  1828,  1829,     0,  1830,  1831,
    1832,  1833,     0,     0,  1834,     0,  2251,  1836,  1837,  1838,
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
       0,     0,     0,     0,  1906,  1907,  1908,  1909,  1910,     0,
       0,  1787,  1788,  1789,  1790,  1791,  1792,     0,  1793,     0,
    1794,     0,     0,     0,  1795,  1796,  1797,     0,  1798,     0,
       0,     0,     0,     0,  1799,  1800,  1801,  1802,  1803,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1804,  1110,
       0,     0,     0,     0,     0,     0,     0,     0,  1805,  1806,
       0,     0,  1807,     0,     0,     0,     0,  1808,  1809,  1810,
    1811,  1812,     0,     0,  1813,     0,  1814,  1815,  1816,     0,
       0,  1817,  1818,     0,  1819,  1820,  1821,     0,     0,     0,
    1822,     0,     0,     0,     0,     0,     0,     0,     0,  1911,
    1912,  1913,  1914,  1915,  1823,  1916,     0,     0,     0,  1824,
       0,     0,     0,     0,  1825,  1826,  1827,     0,     0,     0,
       0,  1828,  1829,     0,  1830,  1831,  1832,  1833,     0,     0,
    1834,     0,  2343,  1836,  1837,  1838,     0,  1839,     0,  1840,
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
    1906,  1907,  1908,  1909,  1910,     0,     0,  1787,  1788,  1789,
    1790,  1791,  1792,     0,  1793,     0,  1794,     0,     0,     0,
    1795,  1796,  1797,     0,  1798,     0,     0,     0,     0,     0,
    1799,  1800,  1801,  1802,  1803,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1804,  1112,     0,     0,     0,     0,
       0,     0,     0,     0,  1805,  1806,     0,     0,  1807,     0,
       0,     0,     0,  1808,  1809,  1810,  1811,  1812,     0,     0,
    1813,     0,  1814,  1815,  1816,     0,     0,  1817,  1818,     0,
    1819,  1820,  1821,     0,     0,     0,  1822,     0,     0,     0,
       0,     0,     0,     0,     0,  1911,  1912,  1913,  1914,  1915,
    1823,  1916,     0,     0,     0,  1824,     0,     0,     0,     0,
    1825,  1826,  1827,     0,     0,     0,     0,  1828,  1829,     0,
    1830,  1831,  1832,  1833,     0,     0,  1834,     0,  2344,  1836,
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
    1910,     0,     0,  1787,  1788,  1789,  1790,  1791,  1792,     0,
    1793,     0,  1794,     0,     0,     0,  1795,  1796,  1797,     0,
    1798,     0,     0,     0,     0,     0,  1799,  1800,  1801,  1802,
    1803,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1804,  1117,     0,     0,     0,     0,     0,     0,     0,     0,
    1805,  1806,     0,     0,  1807,     0,     0,     0,     0,  1808,
    1809,  1810,  1811,  1812,     0,     0,  1813,     0,  1814,  1815,
    1816,     0,     0,  1817,  1818,     0,  1819,  1820,  1821,     0,
       0,     0,  1822,     0,     0,     0,     0,     0,     0,     0,
       0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,     0,     0,
       0,  1824,     0,     0,     0,     0,  1825,  1826,  1827,     0,
       0,     0,     0,  1828,  1829,     0,  1830,  1831,  1832,  1833,
       0,     0,  1834,     0,  2422,  1836,  1837,  1838,     0,  1839,
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
       0,     0,  1906,  1907,  1908,  1909,  1910,     0,     0,  1787,
    1788,  1789,  1790,  1791,  1792,     0,  1793,     0,  1794,     0,
       0,     0,  1795,  1796,  1797,     0,  1798,     0,     0,     0,
       0,     0,  1799,  1800,  1801,  1802,  1803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1804,  1118,     0,     0,
       0,     0,     0,     0,     0,     0,  1805,  1806,     0,     0,
    1807,     0,     0,     0,     0,  1808,  1809,  1810,  1811,  1812,
       0,     0,  1813,     0,  1814,  1815,  1816,     0,     0,  1817,
    1818,     0,  1819,  1820,  1821,     0,     0,     0,  1822,     0,
       0,     0,     0,     0,     0,     0,     0,  1911,  1912,  1913,
    1914,  1915,  1823,  1916,     0,     0,     0,  1824,     0,     0,
       0,     0,  1825,  1826,  1827,     0,     0,     0,     0,  1828,
    1829,     0,  1830,  1831,  1832,  1833,     0,     0,  1834,     0,
    2425,  1836,  1837,  1838,     0,  1839,     0,  1840,  1841,     0,
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
    1908,  1909,  1910,     0,     0,  1787,  1788,  1789,  1790,  1791,
    1792,     0,  1793,     0,  1794,     0,     0,     0,  1795,  1796,
    1797,     0,  1798,     0,     0,     0,     0,     0,  1799,  1800,
    1801,  1802,  1803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1804,  1119,     0,     0,     0,     0,     0,     0,
       0,     0,  1805,  1806,     0,     0,  1807,     0,     0,     0,
       0,  1808,  1809,  1810,  1811,  1812,     0,     0,  1813,     0,
    1814,  1815,  1816,     0,     0,  1817,  1818,     0,  1819,  1820,
    1821,     0,     0,     0,  1822,     0,     0,     0,     0,     0,
       0,     0,     0,  1911,  1912,  1913,  1914,  1915,  1823,  1916,
       0,     0,     0,  1824,     0,     0,     0,     0,  1825,  1826,
    1827,     0,     0,     0,     0,  1828,  1829,     0,  1830,  1831,
    1832,  1833,     0,     0,  1834,     0,  2466,  1836,  1837,  1838,
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
       0,     0,     0,     0,   198,   199,   200,   201,   202,   203,
       0,  1887,  1888,  1889,     0,     0,     0,     0,   204,   205,
       0,  1890,     0,  1891,  1892,  1893,     0,     0,   206,   207,
    1894,     0,  1895,  1896,  1897,     0,     0,     0,  1898,     0,
       0,   208,  1899,  1900,     0,     0,  1901,  1902,  1903,  1904,
       0,     0,     0,  1905,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   209,     0,     0,     0,     0,   210,     0,
       0,   211,   212,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,     0,  1906,  1907,  1908,  1909,  1910,     0,
       0,     0,     0,     0,     0,     0,     0,   214,     0,     0,
       0,   215,   563,   564,   565,   566,   567,   568,   569,     0,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,  1120,
     563,   564,   565,   566,   567,   568,   569,   216,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,  1911,
    1912,  1913,  1914,  1915,   218,  1916,   563,   564,   565,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,   219,   220,     0,     0,
       0,     0,     0,     0,   221,   222,     0,     0,     0,   223,
     564,   565,   566,   567,   568,   569,     0,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   224,   587,     0,     0,     0,     0,
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
     324,   325,     0,   326,   327,   328,     0,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   205,     0,     0,   329,     0,     0,     0,     0,
     330,   206,   563,   564,   565,   566,   567,   568,   569,     0,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   773,
       0,     0,     0,     0,     0,     0,   209,     0,     0,     0,
       0,   210,     0,     0,   211,   212,   563,   564,   565,   566,
     567,   568,   569,   213,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1132,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,   563,   564,   565,   566,   567,   568,
     569,  1133,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,   774,     0,     0,     0,     0,   217,     0,     0,
     563,   564,   565,   566,   567,   568,   569,   218,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,  1134,     0,     0,
       0,     0,   563,   564,   565,   566,   567,   568,   569,   219,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   775,     0,
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
     321,   322,   323,   324,   325,     0,   326,   327,   328,     0,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   204,   205,     0,     0,   329,     0,
       0,     0,     0,   330,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   895,     0,     0,
       0,     0,     0,  1136,   896,     0,   565,   566,   567,   568,
     569,     0,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   209,
     587,     0,     0,     0,   210,     0,     0,   211,   212,     0,
       0,     0,     0,     0,     0,     0,   213,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1147,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1156,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,  1157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1158,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,   219,     0,     0,     0,     0,     0,     0,   897,
       0,     0,     0,  1159,     0,   563,   564,   565,   566,   567,
     568,   569,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     224,   587,     0,     0,     0,     0,     0,     0,     0,     0,
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
     327,   328,     0,   198,   199,   200,   201,   202,   203,     0,
       0,     0,     0,     0,     0,     0,     0,   204,   205,     0,
       0,   329,     0,     0,     0,     0,   898,   206,   563,   564,
     565,   566,   567,   568,   569,     0,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,     0,     0,   210,     0,     0,
     211,   212,   563,   564,   565,   566,   567,   568,   569,   213,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,  1160,   563,   564,   565,   566,   567,   568,   569,     0,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1161,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,     0,     0,   563,   564,   565,   566,
     567,   568,   569,   218,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,  1162,     0,     0,   563,   564,
     565,   566,   567,   568,   569,   219,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1163,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   452,     0,     0,     0,     0,
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
     325,     0,   326,   327,   328,     0,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     204,   205,     0,     0,   329,     0,     0,     0,     0,   330,
     206,   814,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  1169,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,     0,
     210,     0,     0,   211,   212,     0,     0,     0,     0,     0,
       0,     0,   213,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1173,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1174,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1175,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1176,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,   219,     0,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  1177,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
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
     322,   323,   324,   325,     0,   326,   327,   328,     0,   198,
     199,   200,   201,   202,   203,     0,     0,     0,     0,     0,
       0,     0,     0,   204,   205,     0,     0,   329,     0,     0,
       0,     0,   330,   206,   563,   564,   565,   566,   567,   568,
     569,     0,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,  1181,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,     0,     0,   210,     0,     0,   211,   212,   563,   564,
     565,   566,   567,   568,   569,   213,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,  1182,   566,   567,
     568,   569,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,  1086,     0,     0,     0,     0,  1183,   563,   564,
     565,   566,   567,   568,   569,     0,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,  1363,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   563,   564,   565,   566,   567,   568,   569,   218,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,  1632,     0,     0,   563,   564,   565,   566,   567,   568,
     569,   219,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,  1633,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
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
     328,     0,   198,   199,   200,   201,   202,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   204,   205,     0,     0,
     329,     0,     0,     0,     0,   330,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1644,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
       0,   209,     0,     0,     0,     0,   210,     0,     0,   211,
     212,     0,     0,     0,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1654,
       0,     0,     0,     0,     0,   563,   564,   565,   566,   567,
     568,   569,  1605,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,   563,   564,   565,   566,   567,   568,   569,     0,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,  1670,
    -797,  -797,  -797,  -797,     0,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   217,   587,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1671,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,   219,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1672,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
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
       0,   326,   327,   328,     0,   198,   199,   200,   201,   202,
     203,     0,     0,     0,     0,     0,     0,     0,     0,   204,
     205,     0,     0,   329,     0,     0,     0,     0,   330,   206,
     563,   564,   565,   566,   567,   568,   569,     0,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,  1675,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,   210,
       0,     0,   211,   212,   563,   564,   565,   566,   567,   568,
     569,   213,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,  1610,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1676,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  1689,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217,     0,     0,   563,   564,
     565,   566,   567,   568,   569,   218,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,  1690,     0,     0,
     563,   564,   565,   566,   567,   568,   569,   219,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,  1691,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     323,   324,   325,     0,   326,   327,   328,     0,   198,   199,
     200,   201,   202,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   204,   205,     0,     0,   329,     0,     0,     0,
       0,   330,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  2189,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,     0,     0,   209,     0,     0,
       0,     0,   210,     0,     0,   211,   212,     0,     0,     0,
       0,     0,     0,     0,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2192,     0,     0,     0,  1121,
       0,   563,   564,   565,   566,   567,   568,   569,  2146,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
    2193,     0,   563,   564,   565,   566,   567,   568,   569,     0,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,  2194,   587,     0,
       0,     0,     0,     0,  1620,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1122,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
     219,     0,     0,   563,   564,   565,   566,   567,   568,   569,
     879,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
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
       0,   198,   199,   200,   201,   202,   203,     0,     0,     0,
       0,     0,     0,     0,     0,   204,   205,     0,     0,   329,
       0,     0,     0,     0,   330,   206,   563,   564,   565,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,  1621,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,     0,     0,   210,     0,     0,   211,   212,
     563,   564,   565,   566,   567,   568,   569,   213,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,  2148,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1085,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,   563,   564,   565,   566,   567,
     568,   569,  1091,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   563,   564,   565,   566,   567,   568,
     569,   218,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,  1092,     0,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,   219,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,  1093,     0,     0,     0,     0,     0,     0,
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
     326,   327,   328,     0,   198,   199,   200,   201,   202,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   204,   205,
       0,     0,   329,     0,     0,     0,     0,   330,   206,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1094,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
       0,     0,     0,   209,     0,     0,     0,     0,   210,     0,
       0,   211,   212,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    1095,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,     0,     0,     0,     0,   563,   564,   565,
     566,   567,   568,   569,  1096,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   563,   564,   565,
     566,   567,   568,   569,  1105,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,   219,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1106,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
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
     324,   325,     0,   326,   327,   328,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   329,     0,     0,     0,     0,
     330,   563,   564,   565,   566,   567,   568,   569,     0,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,  1107,
     563,   564,   565,   566,   567,   568,   569,     0,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,   563,   564,
     565,   566,   567,   568,   569,     0,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,  1111,   587,   563,   564,   565,   566,   567,
     568,   569,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,  1113,   563,   564,
     565,   566,   567,   568,   569,     0,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,     0,     0,     0,     0,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1114,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  1115,
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
     585,   586,     0,   587,   563,   564,   565,   566,   567,   568,
     569,     0,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1124,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    1125,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,   563,   564,   565,   566,   567,   568,   569,  1126,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,   563,   564,
     565,   566,   567,   568,   569,  1127,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1128,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,   563,   564,
     565,   566,   567,   568,   569,  1129,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
       0,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    1130,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,     0,     0,   563,   564,   565,   566,   567,
     568,   569,  1131,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,   563,   564,   565,   566,   567,   568,   569,  1135,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,   563,
     564,   565,   566,   567,   568,   569,  1148,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  1149,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   563,   564,   565,   566,   567,   568,   569,
    1150,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
     563,   564,   565,   566,   567,   568,   569,  1151,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,   563,   564,   565,
     566,   567,   568,   569,  1152,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,   563,   564,   565,
     566,   567,   568,   569,  1153,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1154,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,   563,   564,   565,   566,   567,   568,
     569,  1155,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,   563,   564,   565,   566,   567,   568,   569,  1166,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
       0,     0,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1167,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,   563,   564,   565,   566,   567,   568,   569,  1168,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
       0,     0,     0,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  1172,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1178,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,  1179,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,   563,   564,   565,   566,   567,   568,   569,  1180,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,   563,
     564,   565,   566,   567,   568,   569,  1208,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  1624,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   563,   564,   565,   566,   567,   568,   569,
    1629,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
     563,   564,   565,   566,   567,   568,   569,  1630,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1631,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1634,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,   563,   564,   565,
     566,   567,   568,   569,  1635,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,   563,   564,   565,   566,   567,   568,
     569,  1636,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,     0,     0,   563,   564,   565,
     566,   567,   568,   569,  1637,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,   563,   564,   565,   566,   567,   568,
     569,  1638,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,     0,     0,     0,     0,   563,
     564,   565,   566,   567,   568,   569,  1639,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,     0,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1642,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,   563,   564,
     565,   566,   567,   568,   569,  1643,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,  1655,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,   563,   564,   565,   566,   567,   568,   569,  1656,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,   563,
     564,   565,   566,   567,   568,   569,  1669,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  1673,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   563,   564,   565,   566,   567,   568,   569,
    1674,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    1683,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  1684,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
     563,   564,   565,   566,   567,   568,   569,  1685,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,   563,   564,   565,
     566,   567,   568,   569,  1686,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1687,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,   563,   564,   565,
     566,   567,   568,   569,  1688,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,     0,     0,     0,     0,     0,
       0,     0,   563,   564,   565,   566,   567,   568,   569,  1769,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,     0,
       0,     0,     0,     0,   563,   564,   565,   566,   567,   568,
     569,  1979,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,   563,   564,   565,   566,   567,   568,   569,  2053,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,   563,   564,
     565,   566,   567,   568,   569,  2122,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,   563,   564,   565,   566,   567,
     568,   569,  2154,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,   563,   564,   565,   566,   567,   568,   569,  2155,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,     0,   587,   563,
     564,   565,   566,   567,   568,   569,  2156,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,     0,   587,   563,   564,   565,   566,
     567,   568,   569,  2157,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,     0,   563,   564,   565,   566,
     567,   568,   569,  2158,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,     0,     0,   563,   564,   565,   566,   567,
     568,   569,  2167,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
       0,   587,     0,   563,   564,   565,   566,   567,   568,   569,
    2184,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
     563,   564,   565,   566,   567,   568,   569,  2185,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,    73,     0,     0,
       0,     0,     0,   563,   564,   565,   566,   567,   568,   569,
    2186,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     0,   587,
     563,   564,   565,   566,   567,   568,   569,  2187,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     1,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,  2188,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    75,
       3,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,  2190,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,     0,     0,     6,
       7,  2191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  2222,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     8,
       0,     0,     0,     0,     0,  2228,     0,     0,     0,    79,
       9,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,    81,     0,
       0,     0,  2232,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,     0,     0,    83,    84,     0,     0,     0,    14,  2237,
       0,     0,     0,     0,     0,  1980,  1981,     0,    85,     0,
    1982,     0,  1983,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,     0,     0,  2356,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
      18,     0,     0,     0,     0,  1984,  1985,     0,  1986,    19,
       0,     0,     0,     0,     0,     0,  2363,   563,   564,   565,
     566,   567,   568,   569,     0,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,     0,   587,     0,  2388,   563,   564,   565,   566,
     567,   568,   569,     0,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,  2401,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2419,     0,    87,     0,   563,   564,   565,   566,   567,   568,
     569,    88,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,  2420,     0,     0,     0,    20,     0,  1987,
    1988,     0,   662,   663,     0,   664,    21,   665,   666,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2471,     0,     0,   667,   563,   564,   565,   566,   567,   568,
     569,     0,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,     0,
     587,     0,     0,     0,     0,   668,   669,   670,   671,   562,
       0,     0,     0,     0,   672,     0,   563,   564,   565,   566,
     567,   568,   569,   673,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   674,     0,     0,     0,     0,     0,     0,
       0,   675,     0,     0,     0,     0,     0,   588,     0,     0,
       0,     0,     0,     0,     0,     0,   676,     0,     0,     0,
       0,     0,     0,   677,     0,     0,   678,     0,     0,   679,
     680,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   452,     0,     0,     0,   681,     0,     0,  1074,
    1369,   563,   564,   565,   566,   567,   568,   569,     0,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587,     0,     0,
     682,   683,     0,     0,   684,   685,     0,     0,     0,     0,
     686,     0,   687,     0,     0,     0,     0,   688,   689,     0,
       0,     0,     0,   690,     0,   691,     0,  1361,     0,     0,
       0,   692,     0,   693,   694,     0,     0,     0,     0,   695,
     563,   564,   565,   566,   567,   568,   569,     0,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1360,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
     563,   564,   565,   566,   567,   568,   569,  1958,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1116,     0,     0,  1616,   563,   564,   565,   566,   567,
     568,   569,     0,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
    1959,   587,     0,     0,     0,     0,     0,     0,   563,   564,
     565,   566,   567,   568,   569,  1192,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,     0,   587,     0,     0,     0,     0,     0,
       0,   563,   564,   565,   566,   567,   568,   569,  1434,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,     0,   587
};

static const yytype_int16 yycheck[] =
{
     115,  1599,  1212,  1457,   347,  1316,  1724,   341,  1237,  1238,
     736,   337,  1279,  1468,  1243,  1584,   401,  1943,   998,   999,
    1949,    36,  1550,    36,  1004,   608,  1006,   107,  1295,     3,
       6,  1582,   136,     3,   140,  1072,   927,  1069,     3,  1071,
    1307,  1715,    18,   136,     5,  1337,     4,   199,  1485,  1486,
     199,   159,     4,    51,    78,   159,    20,     3,     4,     5,
       6,     7,     8,     3,   341,     4,     4,  1504,   240,     3,
      97,   154,     8,     6,   240,     3,    16,    20,   193,   194,
     240,   266,    90,    87,   274,   277,    51,     3,   422,   204,
     205,   206,     3,   277,    74,   210,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   274,    36,    98,   219,   107,   252,  2002,  2003,   641,
       3,     3,     3,   216,    71,    18,   113,   177,  2013,  2014,
     268,    49,     3,     4,     5,     6,     7,     8,    71,  1186,
     197,    76,   277,  1658,  1659,     3,   154,   252,   204,    74,
     108,     3,  1667,  1668,   137,    18,  1717,     4,     5,     6,
       7,     3,     0,    84,   149,   215,     3,   201,     3,    10,
      11,    12,    13,    14,    15,    16,   698,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   112,    36,   932,     3,   136,    51,
     150,   268,    85,    84,    97,   330,   193,   193,   216,   266,
     124,   125,   268,    95,   113,     3,   154,   200,   153,   421,
     210,   421,  1760,   167,   418,    72,   421,   261,   163,   173,
     156,   193,   269,   241,  1772,   249,   184,   193,   176,   421,
     258,   107,   177,   419,   193,   195,   590,    14,  1487,   419,
     193,    18,   235,   391,  1719,   190,   248,   167,   421,   421,
    1537,   597,   421,   173,  1585,   203,   371,   192,   236,   237,
     217,  1809,  1549,   156,  2159,  2160,  2161,  2162,  2163,  2164,
     215,   227,  1820,   401,   217,   210,   421,  1564,  2173,  1736,
     183,  1975,  2177,  1595,   193,   136,  2181,   241,   156,   404,
     258,  1202,  1840,   238,   197,   421,   277,   421,   398,   399,
     400,  1353,     3,  1355,   156,   240,  1854,   407,   421,   156,
    1056,   184,   193,   448,   391,  1863,   419,   452,  2267,     5,
    2266,     3,     3,   319,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   938,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   275,   487,   488,   489,  1903,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,  1944,  1945,  1432,     3,    63,   513,   514,
     136,   735,   258,   518,   519,   420,     3,   420,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     404,   546,   547,   548,   404,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   957,   958,   381,   563,   564,
     565,   566,   567,   418,   418,   967,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,  1199,   420,   418,   753,   592,    85,   756,
       3,   381,   139,   598,    48,   419,     3,  1992,  1993,  1994,
    1995,  1996,  1997,  2211,   771,   156,   333,   334,   335,  2004,
      54,    55,     3,  2008,  1016,  1017,  1018,  2012,   422,   245,
     418,    40,    48,  1780,   133,  1782,   113,   252,  2393,   419,
      74,     5,  2397,   376,   377,   378,   379,    28,    51,   154,
      49,   327,   328,   329,   330,   154,    20,  1517,    87,  1519,
    1520,    55,  2140,    18,     3,   202,  2074,     3,     3,   156,
      99,  2079,  2121,    10,    11,    12,    13,    14,    15,    16,
     252,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   107,    36,
     266,     3,   419,    95,     3,     3,   135,   241,   274,    87,
     421,   216,  2047,   112,   143,   921,   230,    78,  2196,   984,
     985,    99,    51,   100,  1116,  1117,   418,   419,   172,  2484,
    2485,    60,  2487,  2488,    39,     3,    78,   271,   733,     9,
       3,   266,    97,   120,   258,   252,   266,   139,   157,   266,
      20,   266,  1215,   197,    59,  1218,   266,   135,   266,   156,
      28,   417,     3,   155,   193,   143,   420,   421,   267,   926,
     765,   766,   396,   134,   107,   770,   210,  1924,   419,   124,
     125,   197,   777,  1930,   228,    10,    11,    12,    13,    14,
      15,    16,   134,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     202,    36,   228,   242,   208,   193,  2414,   156,    74,     3,
     156,   156,     3,  1046,   157,    71,  2234,   219,   183,   221,
      71,   100,   241,   277,    71,   227,   420,   421,    84,  1445,
     201,    78,   197,    84,  2252,  1954,   351,  1239,   277,   258,
       3,   120,   418,    51,   156,   421,     3,   156,   156,   201,
     252,   277,    60,     3,   242,  2199,    10,    11,    12,    13,
      14,    15,    16,  2208,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   216,    36,   156,   419,   890,   891,   134,   893,   419,
     261,   138,   419,   898,   419,    18,  2475,   351,   156,   419,
     259,   419,  2390,   418,   419,    18,   103,  2302,   155,   261,
     103,  2306,   241,    36,    71,   258,  2117,   164,  2406,    38,
     275,   280,   155,  2341,    82,   351,   192,    84,    86,     3,
    2528,   164,   155,  2090,  2034,    48,    51,     3,    51,     5,
      53,     3,   271,    56,   210,    60,   181,  2526,  2527,   146,
    2107,     3,  2109,   146,   201,    78,    75,   154,    71,  2557,
    2558,   154,   159,    51,     3,    78,    79,    13,    14,   371,
      16,     3,    60,    19,   240,  1208,  1200,  2556,  2322,   176,
     419,   100,  2327,   176,    32,    33,    34,   246,    36,   108,
     113,   678,  2590,   395,  2482,   420,   421,   684,   156,   686,
     113,   120,   404,   155,   103,     3,    33,    34,  1013,    36,
      45,    46,    62,   396,   261,   396,    66,  2458,   223,   224,
    1187,     3,    10,    11,    12,    13,    14,    15,    16,  1196,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   146,    36,    82,
      83,   164,   252,  2448,  2449,   154,  2451,  2452,   398,   399,
     400,   171,   420,   421,   114,  2410,   103,   117,   187,  1074,
     396,  1076,   396,   420,   421,   405,   406,   176,  1083,  1084,
     193,  1086,   132,   420,   421,  1090,   420,   421,   201,   208,
     103,     3,  1097,  1098,  1099,  1100,   421,  1102,  1103,  1104,
    2200,     3,   152,  2260,  1109,  1110,     3,  1112,   421,   146,
     160,     4,     5,  1118,  1119,  1120,  2461,   154,    28,    29,
      30,    31,    32,    33,    34,     3,    36,  1132,  1133,  1134,
     136,  1136,   136,   146,   420,   421,   420,   421,   159,   176,
     136,   154,  1147,   420,   421,   420,   421,   136,   261,  2494,
     269,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,   409,
    1165,  1328,     3,   176,  1169,     3,  1171,   281,  1173,  1174,
    1175,  1176,  1177,     3,  2519,    51,  1181,  1182,  1183,   420,
     421,   420,   421,   420,   421,  1587,   421,  1192,   197,  1194,
    1195,  2536,   420,   421,   420,   421,   420,   421,     3,   249,
     419,   251,   420,   421,  1209,  2550,     4,     5,   420,   421,
     281,  1216,   197,   420,   421,     3,   420,   421,  2563,     3,
     270,   420,   421,   418,   420,   421,     3,    10,    11,    12,
      13,    14,    15,    16,  2579,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   419,    36,   991,   992,   281,   994,   995,   996,
     420,   421,   281,  1000,  1001,  1002,  1433,   421,  1005,  1436,
     419,  1438,  1277,  1440,   420,   421,   281,    10,    11,    12,
      13,    14,    15,    16,   197,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   281,    36,    10,    11,    12,    13,    14,    15,
      16,   281,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   281,
      36,   420,   421,   420,   421,   420,   421,  1342,   420,   421,
     281,  1346,   420,   421,   420,   421,     3,  1352,   420,   421,
     420,   421,   420,   421,    57,    58,  1361,     4,  1363,   420,
     421,   420,   421,   245,  1369,  1370,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     8,    36,     9,   420,   421,    10,    11,    12,    13,
      14,    15,    16,   418,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    36,    36,   420,   421,   420,   421,   420,   421,  1434,
     420,   421,   420,   421,   665,   666,   667,   668,   419,   670,
     420,   421,   673,   674,   675,   420,   421,   420,   421,   680,
     681,   682,   420,   421,   685,  1460,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   421,    36,    10,
      11,    12,    13,    14,    15,    16,  1481,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   419,    36,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   419,    36,   420,   421,   420,   421,    10,    11,
      12,    13,    14,    15,    16,   419,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     3,    36,    10,    11,    12,    13,    14,
      15,    16,   419,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     419,    36,  1577,   419,    10,    11,    12,    13,    14,    15,
      16,    18,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   419,
      36,   419,    39,   420,   421,   420,   421,   420,   421,   420,
     421,    48,   420,   421,    51,  1620,    53,   419,  1623,    56,
     420,   421,    57,    58,   418,   419,   419,  1632,  1633,   420,
     421,   420,   421,   419,    71,   420,   421,   420,   421,  1644,
     419,    78,    79,   418,   419,    51,   420,   421,  1653,  1654,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   419,    36,   419,  1670,  1671,  1672,   420,   421,
    1675,  1676,   419,  1678,   419,  1680,   113,  1682,   420,   421,
     420,   421,   934,   935,  1689,  1690,  1691,   420,   421,   419,
    1204,  1205,   419,   130,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   419,    36,   419,  1712,  1713,  1709,
    1710,   419,   419,     3,   420,   421,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   419,    36,   164,   419,   419,
     419,   419,   419,   419,   419,  1740,   419,   419,   419,  1744,
     419,   419,   419,   419,   419,   419,   419,   419,   419,  1754,
     419,   419,   419,   419,   419,   419,   193,   419,   419,   419,
     419,   419,   159,  1768,   201,   419,   419,   419,   419,   419,
     419,   419,     3,   419,   419,     3,   420,   421,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,     3,     4,
       5,     6,     7,     8,   419,    10,   419,    12,   419,   419,
     419,    16,    17,    18,     3,    20,   420,   421,   419,   419,
     419,    26,    27,    28,    29,    30,   419,   419,   419,   419,
     419,   419,   419,   419,   261,    40,   419,   419,   419,   419,
     419,   419,   419,   419,   419,    50,    51,   419,   419,    54,
     419,   419,   419,   419,    59,    60,    61,    62,    63,   419,
     419,    66,     3,    68,    69,    70,     3,    16,    73,    74,
      53,    76,    77,    78,   266,    53,    44,    82,     3,    71,
     277,   245,     3,     3,   197,     3,   197,   281,     3,   420,
     421,    96,   197,   281,   277,   281,   101,   281,     3,     3,
      28,   106,   107,   108,     3,     3,     3,     3,   113,   114,
       3,   116,   117,   118,   119,     3,     3,   122,     3,   124,
     125,   126,   127,    74,   129,   281,   131,   132,    74,   134,
     281,   136,   137,     3,   139,   140,   141,   142,   420,   421,
       3,    36,     3,   148,     3,   150,   422,   152,   153,   420,
     155,   156,   157,   158,   159,   160,   420,   162,   163,   164,
     165,   166,   420,   420,   420,   420,   421,   420,   420,  1964,
    1965,   420,   177,   420,   179,  1970,   181,  1972,   420,   420,
       5,   420,   420,   420,   420,   190,   420,   192,   193,   194,
     195,   196,   197,   198,   420,   421,   201,   202,   419,   163,
       3,     3,   207,     3,   209,   210,   211,     3,   213,   420,
     215,     3,   217,   218,   219,   220,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   196,    36,     3,   239,   240,   241,  2032,  2033,     3,
     271,     3,   402,   402,   249,   274,   251,   252,   253,   271,
     274,     3,     5,   258,   273,   260,   261,   262,    42,    42,
     277,   266,     3,     3,     3,   270,   271,     3,     3,   274,
     275,   276,   277,     3,     3,     3,   281,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     3,    36,     3,   245,     3,  2102,     3,     3,
     379,     3,     5,   419,     5,     5,   217,   322,   323,   324,
     325,   326,   419,  2118,    10,    11,    12,    13,    14,    15,
      16,   217,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   419,
      36,   419,    64,   419,   419,  2150,   419,   419,     3,     3,
       3,     3,   420,     3,    10,    11,    12,    13,    14,    15,
      16,  2166,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   421,
      36,     3,   197,   420,  2189,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   197,
      36,  2206,   417,   418,   419,   420,   421,    51,   423,   396,
       3,   197,     3,   281,   419,     3,   277,     3,     3,   198,
    2225,  2226,     3,   396,     3,     3,   420,     3,     4,     5,
       6,     7,     8,   241,    10,   420,    12,   420,   350,   420,
      16,    17,    18,   419,    20,   241,   350,   419,   350,   350,
      26,    27,    28,    29,    30,   419,   350,   419,   136,     4,
     197,   421,   419,     4,    40,   164,   164,   164,   163,   163,
     271,   411,   411,   419,    50,    51,   410,     4,    54,   197,
     197,     3,    36,    59,    60,    61,    62,    63,   222,   222,
      66,     3,    68,    69,    70,     5,     5,    73,    74,     3,
      76,    77,    78,   245,   245,     3,    82,   193,     5,     4,
     197,     5,     5,     5,  2319,     3,     3,   140,     3,     3,
      96,   213,   422,     3,   197,   101,   419,   419,   419,    94,
     106,   107,   108,   397,     3,     3,   179,   113,   114,    63,
     116,   117,   118,   119,     3,    20,   122,   419,   124,   125,
     126,   127,  2357,   129,   199,   131,   132,    91,   134,   422,
     136,   137,   420,   139,   140,   141,   142,   161,     4,   350,
     419,  2376,   148,   350,   150,   350,   152,   153,   419,   155,
     156,   157,   158,   159,   160,   350,   162,   163,   164,   165,
     166,   350,   350,   419,   350,     5,   350,     5,   350,   419,
     419,   177,   241,   179,   274,   181,     3,   412,   140,   420,
       3,     3,   419,   403,   190,   179,   192,   193,   194,   195,
     196,   197,   198,     4,    20,   201,   202,   179,     3,    20,
     419,   207,   419,   209,   210,   211,   164,   213,   164,   215,
       3,   217,   218,   219,   220,     3,    78,   222,   222,   420,
     420,   420,   420,   420,   268,   419,     3,    60,   419,   419,
     268,   140,   419,   239,   240,   241,   419,   197,   245,     3,
      20,   419,     3,   249,  2479,   251,   252,   253,   421,     3,
       3,   164,   258,   419,   260,   261,   262,   419,   419,   419,
     266,   164,     4,     6,   270,   271,     4,     4,   274,   275,
     276,   277,   421,   419,   212,   281,   164,     3,     3,   419,
      51,   141,   420,   163,   420,     3,    20,     4,    10,    11,
      12,    13,    14,    15,    16,   421,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   420,    36,   419,   322,   323,   324,   325,
     326,   419,   419,     3,     4,     5,     6,     7,     8,   419,
      10,   419,    12,   420,     5,   421,    16,    17,    18,   420,
      20,   419,   419,   419,     4,     4,    26,    27,    28,    29,
      30,   419,     5,   420,     3,   420,   420,   419,   419,   419,
      40,   419,   421,   193,   421,   421,     3,    52,   419,   419,
      50,    51,   419,   419,    54,     3,   419,   419,     4,    59,
      60,    61,    62,    63,   213,   164,    66,     5,    68,    69,
      70,   164,   240,    73,    74,     4,    76,    77,    78,     4,
     419,     3,    82,     3,     3,     3,     3,     3,   118,   419,
       3,   417,   418,   419,   420,   421,    96,   423,   419,   266,
     419,   101,   268,     3,   140,     4,   106,   107,   108,    20,
      20,   419,   419,   113,   114,     3,   116,   117,   118,   119,
     419,   419,   122,   258,   124,   125,   126,   127,   421,   129,
      20,   131,   132,   197,   134,     4,   136,   137,   351,   139,
     140,   141,   142,   350,   350,   420,   148,   420,   148,   420,
     150,   420,   152,   153,   420,   155,   156,   157,   158,   159,
     160,    94,   162,   163,   164,   165,   166,    63,     3,   419,
       3,    12,   421,    12,     3,     5,     3,   177,     3,   179,
      51,   181,     5,     5,    60,     4,    60,   419,   419,     3,
     190,   419,   192,   193,   194,   195,   196,   197,   198,   420,
     420,   201,   202,   420,   420,   419,   421,   207,   419,   209,
     210,   211,   277,   213,   217,   215,   421,   217,   218,   219,
     220,   419,   419,   419,   268,   420,     5,     4,   271,   419,
     164,   419,   164,     3,   421,   419,    88,   420,   198,   239,
     240,   241,    63,   419,   413,   420,   420,   419,     3,   249,
     420,   251,   252,   253,    20,   420,   164,   421,   258,   421,
     260,   261,   262,   164,    18,    43,   266,     3,   419,   164,
     270,   271,   420,     3,   274,   275,   276,   277,     3,   419,
      60,   281,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    78,    36,   420,
     420,   420,   419,   419,   419,     3,   136,   419,     3,    63,
     415,    63,   322,   323,   324,   325,   326,     3,     3,     3,
       4,     5,     6,     7,     8,     3,    10,   419,    12,    63,
     420,   420,    16,    17,    18,   420,    20,     5,   420,   350,
     420,   350,    26,    27,    28,    29,    30,   350,   350,     5,
       5,     5,     3,    20,   420,    20,    40,   269,   421,   207,
       3,     3,   277,    60,     5,     5,    50,    51,    77,   421,
      54,   420,   131,   156,   166,    59,    60,    61,    62,    63,
     276,   419,    66,   419,    68,    69,    70,   207,     5,    73,
      74,     3,    76,    77,    78,   416,   204,    20,    82,   421,
       3,   101,   420,   420,   420,     3,   420,   417,   418,   419,
     420,   421,    96,   423,   420,   420,   420,   101,   214,   140,
     419,   421,   106,   107,   108,   419,   421,   420,   419,   113,
     114,   419,   116,   117,   118,   119,   420,     4,   122,   420,
     124,   125,   126,   127,   421,   129,   421,   131,   132,     4,
     134,     3,   136,   137,   420,   139,   140,   141,   142,   420,
     419,     5,     3,   420,   148,   420,   150,     3,   152,   153,
       3,   155,   156,   157,   158,   159,   160,     3,   162,   163,
     164,   165,   166,   419,     3,   419,   419,     4,     4,   159,
     421,     3,   207,   177,     3,   179,   421,   181,   420,     3,
     419,     3,    20,     3,     3,   231,   190,   420,   192,   193,
     194,   195,   196,   197,   198,   231,   420,   201,   202,   420,
       3,   420,    20,   207,   421,   209,   210,   211,   420,   213,
       3,   215,   245,   217,   218,   219,   220,     3,   420,   240,
     420,   180,   420,   180,   421,   421,     5,   419,   419,   419,
     229,   420,   420,   420,   420,   239,   240,   241,   421,     3,
       5,     3,   228,   421,     5,   249,   420,   251,   252,   253,
       3,   421,   419,   151,   258,    97,   260,   261,   262,   271,
     421,   174,   266,   197,   420,   191,   270,   271,   250,   197,
     274,   275,   276,   277,   420,   191,     5,   281,    10,    11,
      12,    13,    14,    15,    16,     5,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   130,    36,   453,  1363,  1706,  2035,   592,
    1963,  1195,   159,   602,  1464,   737,  1089,   745,   322,   323,
     324,   325,   326,  2245,  2424,     3,     4,     5,     6,     7,
       8,  2501,    10,  1935,    12,  1039,   953,  1036,    16,    17,
      18,   626,    20,  1232,  1314,  1560,  1305,  1923,    26,    27,
      28,    29,    30,  2105,  2256,   110,  2510,  1070,   755,   442,
    1597,  2150,    40,   421,  2117,  2562,  1574,  1586,  1003,   197,
    1020,  1758,    50,    51,    -1,   659,    54,    -1,   410,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   417,   418,   419,   420,   421,    96,   423,
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
      -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,
     418,   419,   420,   421,    96,   423,    -1,    -1,    -1,   101,
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
     322,   323,   324,   325,   326,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,   418,   419,   420,   421,
      96,   423,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
     326,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   417,   418,   419,   420,   421,    96,   423,    -1,    -1,
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
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,   421,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,   418,   419,
     420,   421,    96,   423,    -1,    -1,    -1,   101,    -1,    -1,
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
     324,   325,   326,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,   421,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   417,   418,   419,   420,   421,    96,   423,
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
      -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,
     418,   419,   420,   421,    96,   423,    -1,    -1,    -1,   101,
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
     322,   323,   324,   325,   326,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,   418,   419,   420,   421,
      96,   423,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
     326,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   417,   418,   419,   420,   421,    96,   423,    -1,    -1,
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
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,   421,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,   418,   419,
     420,   421,    96,   423,    -1,    -1,    -1,   101,    -1,    -1,
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
     324,   325,   326,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,   421,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   417,   418,   419,   420,   421,    96,   423,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,   239,   240,   241,    -1,    -1,    -1,    -1,    17,    18,
      -1,   249,    -1,   251,   252,   253,    -1,    -1,    27,    28,
     258,    -1,   260,   261,   262,    -1,    -1,    -1,   266,    -1,
      -1,    40,   270,   271,    -1,    -1,   274,   275,   276,   277,
      -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,   110,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   421,
      10,    11,    12,    13,    14,    15,    16,   146,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,   417,
     418,   419,   420,   421,   193,   423,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,   225,   226,    -1,    -1,
      -1,    -1,    -1,    -1,   233,   234,    -1,    -1,    -1,   238,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   263,    36,    -1,    -1,    -1,    -1,
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
     389,   390,    -1,   392,   393,   394,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,   414,    -1,    -1,    -1,    -1,
     419,    27,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   421,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,   421,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,   178,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,   421,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   225,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
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
     386,   387,   388,   389,   390,    -1,   392,   393,   394,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,   414,    -1,
      -1,    -1,    -1,   419,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,   421,    47,    -1,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    72,
      36,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   421,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   421,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   421,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,   421,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     263,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     393,   394,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,   414,    -1,    -1,    -1,    -1,   419,    27,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,   421,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   421,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,   421,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   225,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,
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
     390,    -1,   392,   393,   394,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,   414,    -1,    -1,    -1,    -1,   419,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   421,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   421,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   421,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   421,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   421,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   225,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   421,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
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
     387,   388,   389,   390,    -1,   392,   393,   394,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,   414,    -1,    -1,
      -1,    -1,   419,    27,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,   421,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   136,    -1,    -1,    -1,    -1,   421,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,   421,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   225,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,
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
     384,   385,   386,   387,   388,   389,   390,    -1,   392,   393,
     394,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
     414,    -1,    -1,    -1,    -1,   419,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   421,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   113,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   421,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   183,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   421,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,   225,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   421,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
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
      -1,   392,   393,   394,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,   414,    -1,    -1,    -1,    -1,   419,    27,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   421,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   421,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,   421,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   225,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,   421,
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
     388,   389,   390,    -1,   392,   393,   394,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,   414,    -1,    -1,    -1,
      -1,   419,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   421,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,   321,
      -1,    10,    11,    12,    13,    14,    15,    16,   113,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
     421,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   421,    36,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   420,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
     225,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
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
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,   414,
      -1,    -1,    -1,    -1,   419,    27,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,   420,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   420,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   420,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,   420,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   225,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,   420,    -1,    -1,    -1,    -1,    -1,    -1,
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
     392,   393,   394,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,   414,    -1,    -1,    -1,    -1,   419,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   420,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   420,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   420,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,   225,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   420,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
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
     389,   390,    -1,   392,   393,   394,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,
     419,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   420,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   420,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,   420,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   420,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   420,
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
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   420,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    10,    11,    12,    13,    14,    15,    16,   420,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   420,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   420,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   420,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   420,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   420,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   420,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   420,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   420,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   420,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   420,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   420,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,   420,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   420,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   420,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   420,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   420,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   420,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   420,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   420,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   420,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   420,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   420,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   420,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   420,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   420,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   420,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   420,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   420,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   420,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   420,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   420,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   420,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   420,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   420,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   420,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   420,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,   420,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   420,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   420,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   420,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   420,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   420,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   420,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   420,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   420,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   420,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   420,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   420,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   420,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   420,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   420,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     420,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   420,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    37,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,    -1,    -1,   107,
     108,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   420,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   157,
      -1,    -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,   202,
     168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,   221,    -1,
      -1,    -1,   420,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
     208,    -1,    -1,   246,   247,    -1,    -1,    -1,   216,   420,
      -1,    -1,    -1,    -1,    -1,   104,   105,    -1,   261,    -1,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,    -1,    -1,   420,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,   144,   145,    -1,   147,   267,
      -1,    -1,    -1,    -1,    -1,    -1,   420,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,   420,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,   420,    -1,    -1,    -1,    -1,   371,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     420,    -1,   395,    -1,    10,    11,    12,    13,    14,    15,
      16,   404,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,   420,    -1,    -1,    -1,   395,    -1,   278,
     279,    -1,    61,    62,    -1,    64,   404,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     420,    -1,    -1,    82,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   114,   115,   116,   117,     3,
      -1,    -1,    -1,    -1,   123,    -1,    10,    11,    12,    13,
      14,    15,    16,   132,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,   182,    -1,    -1,   185,    -1,    -1,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   275,    -1,    -1,    -1,   205,    -1,    -1,   253,
     136,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
     239,   240,    -1,    -1,   243,   244,    -1,    -1,    -1,    -1,
     249,    -1,   251,    -1,    -1,    -1,    -1,   256,   257,    -1,
      -1,    -1,    -1,   262,    -1,   264,    -1,   253,    -1,    -1,
      -1,   270,    -1,   272,   273,    -1,    -1,    -1,    -1,   278,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   124,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    49,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,   124,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     112,    36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    50,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    50,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     395,   404,   425,   464,   465,   505,   509,   511,   518,   519,
     522,   524,   525,   527,   528,   529,   534,   535,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   547,   550,   557,
     558,   560,   576,   577,   586,   589,   591,   592,   593,   616,
     619,   626,   627,   630,   633,   634,   637,   219,   252,   371,
     404,   252,     3,    10,    95,   102,   138,   139,   155,   202,
     219,   221,   227,   246,   247,   261,   371,   395,   404,   598,
       3,   506,    95,   139,   155,   202,   219,   221,   227,   252,
     371,   395,   404,   568,     3,     3,     3,    28,   252,   252,
     568,     8,   227,   617,   618,   484,   252,   568,   587,     3,
      95,   398,   399,   400,   107,   398,   399,   400,   407,     0,
     417,   521,     3,     3,     3,     3,   396,   419,   216,   156,
     590,     3,   155,     3,     3,    85,   156,     3,     3,     3,
     590,   246,   155,   590,   396,   396,   252,   578,     3,   136,
     154,   176,   203,   507,     3,   156,     3,   156,     3,     3,
     156,     3,   156,     3,     3,   156,     3,   156,     3,   156,
     396,   396,   103,   146,   154,   159,   176,   569,   171,   421,
       3,     3,   569,     9,    20,     3,   113,   421,     3,     4,
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
     419,   426,   485,   486,     3,   154,   176,     3,   167,   173,
     381,   419,   488,   489,   490,   491,   494,   504,     3,   159,
     401,   136,   136,   136,   159,   136,   409,     3,   425,    54,
      55,    74,   210,   277,   418,   546,   100,   120,    38,    75,
     100,   108,   120,   187,   208,   269,    55,   208,   635,     3,
       3,     4,     5,     6,     7,     8,   193,   420,   628,   629,
     139,   202,   281,     3,    51,     3,   419,   197,     3,   156,
     281,   419,    39,    59,   631,   197,     3,     3,    85,   156,
       3,     3,   156,     3,   156,   590,   419,   579,   418,   508,
       3,   507,   136,   421,   281,   281,   281,   281,   197,   281,
      74,   210,   510,   281,   281,     3,   156,     3,   156,     3,
       4,   245,     3,   426,   426,   618,   418,   419,     9,   426,
     426,   426,   275,   426,   463,   418,   419,    36,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   426,     3,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    36,    51,   487,
     136,   159,   421,   421,   418,   487,   419,     3,   419,   465,
     488,   240,   421,    76,   153,   177,   190,   215,   238,   495,
     497,    51,   493,   493,     3,   159,     3,     3,     3,     3,
       3,    16,   266,    53,    53,    44,     3,   108,   258,   548,
      71,    84,     3,    84,    71,   217,     3,    71,    84,    71,
     217,     3,    84,     3,    71,    84,    71,   277,   245,    18,
     184,   376,   377,   378,   379,   636,   100,   120,   420,   421,
       3,     3,    61,    62,    64,    66,    67,    82,   114,   115,
     116,   117,   123,   132,   152,   160,   175,   182,   185,   188,
     189,   205,   239,   240,   243,   244,   249,   251,   256,   257,
     262,   264,   270,   272,   273,   278,   612,   197,     3,    16,
     150,   195,   620,   621,   622,     3,   197,   281,     3,   620,
     107,   157,   258,   632,     3,   404,   197,     3,   156,   281,
     635,   277,   523,   281,   530,   281,     3,     3,   580,   136,
     245,   581,    28,   274,   466,   266,   488,     3,     3,     3,
       3,     3,     3,   404,     3,     3,     3,    74,   281,    74,
     281,   240,   419,   570,     3,   240,   570,     3,   426,   431,
     435,   426,   426,   463,   124,   125,   275,     3,     3,   422,
     433,   440,   426,    65,   178,   254,   426,   461,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   420,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   420,   426,   426,   426,   420,   426,   426,
     426,   426,   426,   426,    28,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   420,   420,   420,   420,
     420,   426,   426,   420,   420,   420,   426,   426,     5,   420,
     420,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   420,   426,   426,   426,   420,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   420,   420,
     426,   426,   426,   426,   426,     6,    18,   193,   319,   419,
      13,    14,    16,    19,   426,    40,    47,   232,   419,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,     3,   488,     3,   486,     3,
     520,     3,   133,   154,   267,   501,   492,   487,   426,   420,
     420,     3,   588,   489,   177,   215,   498,   490,   163,   196,
     496,     3,     3,   271,     3,   402,   402,   274,   271,   274,
       3,   273,     5,   546,    42,    42,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,   612,     3,   245,     3,
       3,     3,     5,     3,   379,     5,     5,   277,     5,    63,
       5,   217,   217,   629,   419,   419,   419,   608,   608,   608,
     608,   608,   608,   419,   608,   608,   608,    64,   609,   609,
     608,   608,   608,   419,   609,   608,   609,   419,   419,   419,
      18,    36,    78,   113,     3,   612,     3,     3,     3,   420,
     421,   266,   419,     3,     3,   197,   420,   197,    51,   551,
     396,     3,   197,   281,     3,   419,     3,   277,   531,     3,
     154,   216,   351,   418,   419,   614,   615,   420,   421,     4,
     236,   237,   582,   426,   198,   476,   488,   466,   508,   396,
     510,     3,     3,     3,   575,     3,   571,   271,   465,   575,
     271,   465,   421,   420,   253,   124,   125,   426,   426,   420,
     426,   432,   465,   136,   421,   420,   136,   426,   421,   421,
     421,   420,   420,   420,   420,   420,   420,   421,   421,   421,
     421,   420,   421,   421,   421,   420,   420,   420,   420,   421,
     421,   420,   421,   420,   420,   420,    51,   421,   421,   421,
     421,   321,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   421,   421,   421,   420,   421,   350,   350,   350,
     420,   421,   420,   421,   420,   350,   350,   421,   420,   420,
     420,   420,   420,   420,   420,   420,   421,   421,   421,   421,
     421,   421,   421,   421,   420,   421,   420,   420,   420,   421,
     420,   421,   420,   421,   421,   421,   421,   421,   420,   420,
     420,   421,   421,   421,     6,   193,   436,   438,   426,   426,
     419,   426,    50,   419,   419,   419,   427,   422,   140,   480,
     136,   421,   487,   164,   164,   164,   465,   501,   420,    20,
     418,   421,   466,   496,   496,   163,   197,   490,   163,   419,
     271,     4,     4,   411,   419,   411,   410,     4,    45,    46,
     548,   197,   197,    78,   134,   201,   261,   612,   612,     3,
     222,   222,   607,   612,     3,   245,   245,     5,     5,     3,
       3,   620,   620,     5,   610,   611,   610,   610,     4,   613,
     610,   610,   610,   611,   611,   610,   610,   610,   613,   611,
     610,   611,     5,     5,     5,   193,   422,   419,   426,   419,
     612,   612,   612,   213,   622,   268,   391,     3,   327,   328,
     329,   330,   516,   517,   266,   419,   197,     3,    51,    60,
       3,   223,   224,   140,   552,     3,   266,   419,     3,     3,
     197,   397,   523,   419,   530,    94,     3,    71,    78,   134,
     138,   155,   164,   201,   261,   599,   600,   606,   493,     3,
      87,    99,   135,   143,   193,   242,   277,   419,   583,   584,
     585,    63,   179,   479,   466,     3,    20,   199,   421,   561,
     420,   421,   419,   572,   561,   572,   561,   431,   426,   426,
     124,   253,    91,   421,   422,   420,   426,   426,   426,   136,
     161,   462,   462,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   612,   612,   426,   426,   426,     4,
     350,   350,   350,   350,   350,   350,   426,   426,   426,   426,
     419,   419,   419,   350,     5,   350,     5,   350,   419,   419,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     431,   465,   437,   439,    50,   426,   430,   426,   428,   434,
     429,   434,   465,   412,   466,   488,     3,   501,   140,   502,
     502,   502,   420,   493,   426,     3,     3,   476,   490,   426,
     197,   266,   499,   500,   490,     4,   193,   526,   419,   403,
     179,    20,     4,   193,   536,    20,     4,   179,     3,   549,
     549,   419,   164,   164,   419,   607,   607,   612,    18,    39,
      48,    51,    53,    56,    71,    78,    79,   113,   130,   164,
     193,   201,   261,   559,   607,     3,     3,   222,   222,   420,
     420,   420,   421,   259,   280,    82,    83,   420,   421,   420,
     420,   420,   420,    78,   426,   516,    62,    66,   114,   117,
     132,   152,   160,   249,   251,   270,   623,   419,   419,   419,
     419,   419,   419,   420,   421,   268,   516,     3,   266,   419,
      60,   624,   140,    40,   107,   157,   241,   258,   245,   553,
     551,   268,   516,   266,   419,   197,     3,    20,   405,   406,
     532,   533,   531,     3,   419,   614,     3,   419,   164,   155,
     164,   419,   419,   164,   419,   420,   421,     3,   465,     4,
      87,   249,     6,     4,     4,   419,   584,   421,     3,     5,
     477,   478,   426,   212,   638,   113,   426,   164,     3,     3,
     113,   426,   574,   421,   561,   561,   124,   426,   419,   432,
     140,   420,   420,   421,   420,   426,   426,   420,   420,   420,
     420,   420,   421,   421,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   421,   420,   419,   419,   419,   419,
     419,   419,   420,   421,   421,   420,   420,   441,   442,   443,
     419,   420,   421,   419,   420,   421,   419,   459,   460,   420,
     421,   421,   421,   420,   420,   421,   421,   420,   421,   420,
     421,   420,   421,   420,   420,   420,   420,   420,   420,   421,
     421,   421,   420,   420,   431,   465,   426,   465,   465,   420,
     465,   420,   420,    51,   141,   467,   466,   163,   419,   419,
     419,     3,    20,    20,   418,   479,   426,   419,   500,   421,
     526,     4,     5,     4,   421,     4,     5,   421,   277,   426,
     419,   419,     3,   605,   559,   559,   607,   193,     3,   419,
     419,   419,    52,     3,   419,     4,     4,     5,     6,     7,
      72,   333,   334,   335,   419,   164,   164,   559,   213,    51,
      60,     5,   240,     4,   611,     4,   611,   611,   419,   420,
     420,    51,    60,   516,     3,     3,     3,     3,     3,     3,
     419,   420,   419,   268,   391,   516,   624,     3,     4,     5,
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
     326,   417,   418,   419,   420,   421,   423,   625,   118,     3,
     554,   266,   555,   552,   419,   420,   268,   516,     3,   266,
     419,     4,    20,    20,   420,   421,   140,   599,    78,   134,
     201,   261,   426,   419,   419,   419,     3,   483,   483,   419,
     605,   595,   614,   600,   612,   584,   420,   585,    49,   112,
     418,   469,   469,   421,   181,   421,     3,    28,   639,   258,
      20,   420,   421,   573,   197,   563,     4,   426,   426,   420,
     104,   105,   109,   111,   144,   145,   147,   278,   279,   426,
     426,   426,   445,   446,   444,   447,   448,   449,   426,   426,
     351,   472,   472,   472,   450,   350,     4,     5,   454,   350,
       4,     5,   458,   472,   472,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   420,   420,   420,   420,
     420,    94,    63,   148,   471,   467,     3,   503,   503,   503,
     419,   426,   426,     3,   638,   483,   526,   421,    12,   536,
      12,     3,     5,   420,     3,   602,     3,   601,   420,   421,
     559,     5,   426,     5,    51,    78,   201,   261,   426,   419,
     419,   419,   426,   623,    60,   624,   420,     4,   426,    60,
     624,   420,     3,   512,   420,   420,   420,   421,   516,   516,
     419,   419,   420,   124,   624,   624,   624,   624,   624,   624,
     217,   421,   419,   277,   556,   553,   516,   419,   420,   419,
     268,   516,   420,     5,     4,   533,   271,   420,   419,   164,
     164,   419,   420,   602,   483,   483,   420,   421,   420,   601,
     420,    48,   172,   197,   228,   277,   351,   594,   607,   420,
       3,   478,   426,   426,   421,   562,   113,   426,   113,   426,
     419,    88,   638,   420,   420,   420,   420,   420,   420,   472,
     472,   472,   472,   472,   472,   420,   421,   420,    63,   198,
     474,   474,   474,   472,   419,   420,   420,   472,   419,   420,
     420,   472,   474,   474,   420,   420,   420,   420,   420,   421,
     420,   420,   421,   421,   421,   413,   426,   468,   426,   476,
     471,   420,   421,   420,   420,     3,    20,   420,   421,   526,
     164,   421,   164,    43,    18,   420,   421,   420,   421,     3,
     420,   421,   420,   420,   421,   419,   419,   164,   420,   420,
     420,   420,   420,    51,    60,   624,   124,   420,   624,   124,
     420,     3,   420,   420,   516,     3,   124,   124,   124,   124,
     124,   124,    60,     3,   426,    78,   555,   420,   516,   516,
     419,   420,   136,   595,   614,   426,   419,   419,   605,   420,
     420,   420,     3,   420,     5,    20,   419,     3,    63,   415,
      63,   469,     3,     3,   567,   574,   419,   564,   474,   474,
     474,   474,   474,   474,   426,     3,   473,    63,   420,   420,
     420,   474,   451,   350,   350,   474,   455,   350,   350,   474,
     420,   420,   426,     5,     5,     5,     5,   469,   277,   421,
     470,   479,   476,     3,   420,   426,   526,   421,    20,   536,
      20,   269,   207,     3,     3,     5,    57,    58,     5,   426,
     426,    60,   624,   124,   124,   277,   513,   420,   420,   512,
      77,   131,   156,   166,   276,   624,   420,   419,   556,   420,
     420,   516,   419,   420,   602,   601,   420,   207,     5,     3,
     107,   248,   204,   268,   416,   204,    20,   421,   420,     3,
     101,   565,   420,   420,   420,   420,   420,   420,   420,   421,
       3,   475,   420,   472,   419,   419,   420,   472,   419,   419,
     420,   420,   420,   421,   421,   214,   426,   140,   481,   479,
     421,   526,     4,   420,   421,     4,     3,   420,   420,   420,
     420,   624,   124,   419,   420,   124,   426,   420,     5,   420,
     420,     3,   420,     3,     3,   419,   419,   419,   426,     3,
     420,   421,    90,   258,     3,   469,   421,   474,   452,   453,
     474,   456,   457,     4,     4,   469,   230,   258,   159,   482,
     526,   421,   536,   419,    57,    58,   124,     3,   514,   515,
     513,   420,   420,   207,   418,   419,     3,     3,     3,    20,
       3,   566,     3,   420,   472,   472,   420,   472,   472,   420,
     420,   231,   231,   483,   421,   526,   420,     3,   603,    20,
     420,   421,   245,     3,     3,   603,   420,   420,   420,   426,
     240,   469,   474,   474,   474,   474,   180,   180,   526,   421,
     420,   421,     5,   515,   419,   418,   419,   419,   420,   419,
     229,   567,   420,   420,   420,   420,   421,   526,   604,     3,
       5,     3,   603,   603,   604,   228,   596,   597,     5,   526,
     421,    18,    97,   183,   197,   420,   419,   420,   420,    18,
       3,   420,   421,   421,   526,    97,   269,   151,   137,   200,
     235,   107,   258,   603,   604,   604,   271,   597,   526,   421,
      98,   149,    74,   192,   210,   240,    74,   192,   210,   240,
     420,   174,   420,   526,   113,   193,   113,   193,   604,   250,
     420,     4,   184,   197,   197,   191,   191,     5,     5
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
#line 508 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 514 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 515 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 517 "parser/evoparser.y"
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
#line 530 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 532 "parser/evoparser.y"
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
#line 560 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 568 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 576 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 582 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 589 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 590 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 591 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 592 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 593 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 594 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 595 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 596 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 597 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 598 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 599 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 600 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 601 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 602 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 603 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 604 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 605 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 606 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 607 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 609 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 614 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 615 "parser/evoparser.y"
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
#line 623 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 624 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 625 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 626 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 627 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 628 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 633 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 635 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 638 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 639 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 640 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 641 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 642 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 645 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 646 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 650 "parser/evoparser.y"
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
#line 659 "parser/evoparser.y"
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
#line 677 "parser/evoparser.y"
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
#line 686 "parser/evoparser.y"
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
#line 705 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 706 "parser/evoparser.y"
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
#line 766 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 775 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 781 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 786 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 788 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 790 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 795 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 800 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 805 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 813 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 815 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 817 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 819 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 821 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 823 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 825 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 827 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 829 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 831 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 838 "parser/evoparser.y"
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
#line 849 "parser/evoparser.y"
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
#line 859 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 863 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 863 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 864 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 864 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 865 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 866 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 873 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 874 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 881 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 882 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 892 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 896 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 897 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 898 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 899 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 900 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 901 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 902 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 903 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 907 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 908 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 909 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 910 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 911 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 912 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 914 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 915 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 916 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 917 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 918 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 919 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 920 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 921 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 922 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 923 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 924 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 925 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 927 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 928 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 929 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 930 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 931 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 932 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 933 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 934 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 935 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 936 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 937 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 938 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 939 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 940 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 941 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 942 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 944 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 945 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 946 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 947 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 948 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 949 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 952 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 953 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 954 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 955 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 956 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 957 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 958 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 959 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 960 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 961 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 962 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 150:
#line 963 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 151:
#line 964 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 965 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 153:
#line 966 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 154:
#line 967 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 155:
#line 968 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 156:
#line 969 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 157:
#line 970 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 158:
#line 971 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 159:
#line 972 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 160:
#line 973 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 161:
#line 974 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 162:
#line 975 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 163:
#line 976 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 164:
#line 977 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 165:
#line 978 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 166:
#line 979 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 167:
#line 980 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 168:
#line 981 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 169:
#line 982 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 170:
#line 983 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 171:
#line 984 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 172:
#line 985 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 173:
#line 987 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 174:
#line 988 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 175:
#line 989 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 176:
#line 990 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 177:
#line 991 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 178:
#line 992 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 179:
#line 993 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 180:
#line 994 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 181:
#line 996 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 182:
#line 997 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 183:
#line 998 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 184:
#line 999 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 185:
#line 1000 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 186:
#line 1001 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 187:
#line 1002 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 188:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 189:
#line 1004 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 190:
#line 1005 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 191:
#line 1006 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 192:
#line 1007 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 193:
#line 1008 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 194:
#line 1009 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 195:
#line 1010 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 196:
#line 1011 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 197:
#line 1012 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 198:
#line 1013 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 199:
#line 1014 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 200:
#line 1015 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 201:
#line 1016 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1017 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 203:
#line 1019 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 204:
#line 1020 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 205:
#line 1021 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 206:
#line 1022 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 207:
#line 1023 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 208:
#line 1025 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 209:
#line 1026 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 210:
#line 1028 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 211:
#line 1029 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 212:
#line 1030 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 213:
#line 1032 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 214:
#line 1033 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 215:
#line 1034 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 216:
#line 1035 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 217:
#line 1042 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 218:
#line 1049 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 219:
#line 1056 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 220:
#line 1060 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 221:
#line 1064 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1068 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1072 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 224:
#line 1076 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 225:
#line 1082 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 226:
#line 1083 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 227:
#line 1084 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 228:
#line 1088 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 229:
#line 1094 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 230:
#line 1100 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 231:
#line 1101 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 232:
#line 1102 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 233:
#line 1103 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1104 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1105 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 236:
#line 1106 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 237:
#line 1107 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 238:
#line 1108 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1112 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 240:
#line 1114 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 241:
#line 1116 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1118 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 243:
#line 1122 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 244:
#line 1130 "parser/evoparser.y"
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
#line 1140 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 246:
#line 1141 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 247:
#line 1144 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 248:
#line 1145 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 249:
#line 1149 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 250:
#line 1157 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 251:
#line 1165 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1173 "parser/evoparser.y"
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
#line 1187 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 254:
#line 1196 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 255:
#line 1202 "parser/evoparser.y"
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
#line 1215 "parser/evoparser.y"
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
#line 1228 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 260:
#line 1230 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 261:
#line 1233 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 262:
#line 1240 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 263:
#line 1248 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1249 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 265:
#line 1250 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 266:
#line 1253 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1254 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1258 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 272:
#line 1267 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 273:
#line 1269 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 276:
#line 1277 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 277:
#line 1279 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 282:
#line 1291 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 283:
#line 1297 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 284:
#line 1304 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 285:
#line 1312 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 286:
#line 1313 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 287:
#line 1314 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 288:
#line 1315 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1327 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 291:
#line 1330 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 292:
#line 1331 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 293:
#line 1332 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 294:
#line 1333 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 295:
#line 1334 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1338 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 298:
#line 1341 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 299:
#line 1342 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 300:
#line 1345 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 301:
#line 1346 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 302:
#line 1347 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 303:
#line 1348 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 304:
#line 1349 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 305:
#line 1350 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 306:
#line 1351 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 307:
#line 1352 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 308:
#line 1353 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 309:
#line 1356 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 310:
#line 1357 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 311:
#line 1359 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 312:
#line 1367 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 313:
#line 1372 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 314:
#line 1373 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 315:
#line 1374 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 316:
#line 1377 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 317:
#line 1378 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 320:
#line 1387 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 321:
#line 1395 "parser/evoparser.y"
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
#line 1404 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 323:
#line 1405 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 324:
#line 1407 "parser/evoparser.y"
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
#line 1416 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 326:
#line 1421 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 327:
#line 1427 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 328:
#line 1434 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 329:
#line 1438 "parser/evoparser.y"
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
#line 1458 "parser/evoparser.y"
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
#line 1484 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 334:
#line 1486 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 335:
#line 1488 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 336:
#line 1490 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 337:
#line 1492 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 338:
#line 1495 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1496 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 340:
#line 1497 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 341:
#line 1500 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 342:
#line 1501 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 343:
#line 1504 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1505 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 345:
#line 1508 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 346:
#line 1509 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 347:
#line 1510 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 350:
#line 1517 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 351:
#line 1518 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 352:
#line 1523 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 353:
#line 1525 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 354:
#line 1527 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1531 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 357:
#line 1532 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 358:
#line 1535 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1536 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 360:
#line 1539 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 361:
#line 1544 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 362:
#line 1554 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 363:
#line 1561 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 364:
#line 1562 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 365:
#line 1563 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 366:
#line 1564 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 367:
#line 1569 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 368:
#line 1573 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 369:
#line 1575 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 372:
#line 1581 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 373:
#line 1586 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 374:
#line 1593 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 375:
#line 1600 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 377:
#line 1612 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 378:
#line 1613 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 379:
#line 1618 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 380:
#line 1625 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 381:
#line 1632 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 382:
#line 1640 "parser/evoparser.y"
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
#line 1650 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1658 "parser/evoparser.y"
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
#line 1668 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 386:
#line 1676 "parser/evoparser.y"
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
#line 1685 "parser/evoparser.y"
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
#line 1694 "parser/evoparser.y"
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
#line 1704 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 390:
#line 1712 "parser/evoparser.y"
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
#line 1721 "parser/evoparser.y"
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
#line 1730 "parser/evoparser.y"
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
#line 1740 "parser/evoparser.y"
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
#line 1749 "parser/evoparser.y"
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
#line 1766 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 396:
#line 1774 "parser/evoparser.y"
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
#line 1785 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 398:
#line 1787 "parser/evoparser.y"
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
#line 1800 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 400:
#line 1801 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 401:
#line 1804 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 402:
#line 1806 "parser/evoparser.y"
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
#line 1818 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 404:
#line 1828 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 405:
#line 1833 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 406:
#line 1838 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 407:
#line 1844 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 408:
#line 1851 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 409:
#line 1858 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1865 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 411:
#line 1875 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 412:
#line 1882 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 413:
#line 1891 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 414:
#line 1898 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1904 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 416:
#line 1912 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 417:
#line 1918 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 419:
#line 1926 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 420:
#line 1927 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 421:
#line 1928 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 422:
#line 1929 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 423:
#line 1945 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 424:
#line 1946 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1947 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1956 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1957 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1962 "parser/evoparser.y"
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
#line 1972 "parser/evoparser.y"
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
#line 1987 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 431:
#line 1988 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 432:
#line 1993 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 433:
#line 2001 "parser/evoparser.y"
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
#line 2010 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 435:
#line 2032 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 436:
#line 2033 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 437:
#line 2034 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2039 "parser/evoparser.y"
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
#line 2056 "parser/evoparser.y"
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
#line 2077 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 441:
#line 2078 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 442:
#line 2084 "parser/evoparser.y"
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
#line 2093 "parser/evoparser.y"
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
#line 2107 "parser/evoparser.y"
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
#line 2116 "parser/evoparser.y"
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
#line 2141 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 447:
#line 2142 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 448:
#line 2143 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2144 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2145 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2146 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2147 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2152 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 454:
#line 2159 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 455:
#line 2170 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 460:
#line 2184 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 461:
#line 2186 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 462:
#line 2191 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 463:
#line 2199 "parser/evoparser.y"
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
#line 2208 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 465:
#line 2220 "parser/evoparser.y"
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
#line 2232 "parser/evoparser.y"
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
#line 2246 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 468:
#line 2247 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 469:
#line 2253 "parser/evoparser.y"
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
#line 2267 "parser/evoparser.y"
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
#line 2277 "parser/evoparser.y"
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
#line 2291 "parser/evoparser.y"
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
#line 2305 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 474:
#line 2313 "parser/evoparser.y"
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
#line 2324 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 476:
#line 2330 "parser/evoparser.y"
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
#line 2341 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2347 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 479:
#line 2354 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2360 "parser/evoparser.y"
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
#line 2376 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 482:
#line 2383 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 483:
#line 2392 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 484:
#line 2400 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 485:
#line 2406 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 487:
#line 2423 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 488:
#line 2427 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 489:
#line 2436 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 491:
#line 2451 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 492:
#line 2455 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 493:
#line 2460 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 494:
#line 2467 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 495:
#line 2472 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 496:
#line 2479 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 497:
#line 2483 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 498:
#line 2484 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 499:
#line 2490 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 500:
#line 2502 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 501:
#line 2511 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 502:
#line 2512 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 503:
#line 2513 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 504:
#line 2517 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 505:
#line 2518 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 506:
#line 2519 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 507:
#line 2520 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 508:
#line 2521 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 509:
#line 2522 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 512:
#line 2531 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 513:
#line 2532 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 515:
#line 2537 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 517:
#line 2542 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 518:
#line 2547 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 519:
#line 2554 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 520:
#line 2563 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 521:
#line 2569 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 522:
#line 2575 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 523:
#line 2582 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 524:
#line 2588 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 525:
#line 2595 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 526:
#line 2601 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 527:
#line 2607 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 528:
#line 2613 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 529:
#line 2619 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 530:
#line 2625 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 531:
#line 2631 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 532:
#line 2637 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 533:
#line 2643 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 534:
#line 2649 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 535:
#line 2655 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 536:
#line 2661 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 537:
#line 2667 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 538:
#line 2673 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 539:
#line 2679 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 540:
#line 2685 "parser/evoparser.y"
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
#line 2698 "parser/evoparser.y"
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
#line 2708 "parser/evoparser.y"
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
#line 2718 "parser/evoparser.y"
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
#line 2729 "parser/evoparser.y"
    { ;}
    break;

  case 545:
#line 2730 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 546:
#line 2731 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 547:
#line 2735 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 548:
#line 2743 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 549:
#line 2749 "parser/evoparser.y"
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
#line 2762 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 552:
#line 2762 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 555:
#line 2770 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 556:
#line 2771 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 557:
#line 2772 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 558:
#line 2776 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 559:
#line 2777 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 560:
#line 2778 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 561:
#line 2782 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 562:
#line 2790 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 563:
#line 2799 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 564:
#line 2800 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 565:
#line 2801 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 566:
#line 2802 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 567:
#line 2803 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 571:
#line 2810 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 572:
#line 2814 "parser/evoparser.y"
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
#line 2824 "parser/evoparser.y"
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
#line 2836 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 575:
#line 2837 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 576:
#line 2837 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 577:
#line 2840 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 578:
#line 2841 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 579:
#line 2842 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 580:
#line 2843 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 581:
#line 2847 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 582:
#line 2850 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 583:
#line 2851 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 584:
#line 2852 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 585:
#line 2853 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 586:
#line 2859 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 587:
#line 2865 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 588:
#line 2870 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 589:
#line 2875 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 590:
#line 2879 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 591:
#line 2883 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 592:
#line 2885 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 595:
#line 2891 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 596:
#line 2892 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 597:
#line 2896 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 598:
#line 2897 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 599:
#line 2901 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 600:
#line 2902 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 601:
#line 2903 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 608:
#line 2918 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 609:
#line 2919 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 610:
#line 2920 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 611:
#line 2921 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 612:
#line 2922 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 613:
#line 2923 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 614:
#line 2924 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 615:
#line 2925 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 616:
#line 2930 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 617:
#line 2939 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 618:
#line 2946 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 619:
#line 2947 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 620:
#line 2948 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 621:
#line 2953 "parser/evoparser.y"
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
#line 2964 "parser/evoparser.y"
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
#line 2976 "parser/evoparser.y"
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
#line 2987 "parser/evoparser.y"
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
#line 3002 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 626:
#line 3006 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 627:
#line 3010 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 628:
#line 3011 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 629:
#line 3016 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 630:
#line 3018 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 631:
#line 3020 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 632:
#line 3022 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 633:
#line 3025 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 634:
#line 3026 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 635:
#line 3032 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 636:
#line 3037 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 637:
#line 3039 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 638:
#line 3041 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 639:
#line 3043 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 640:
#line 3045 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 641:
#line 3049 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 642:
#line 3053 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 643:
#line 3054 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 644:
#line 3059 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 645:
#line 3069 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 647:
#line 3082 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 648:
#line 3090 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 649:
#line 3098 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 651:
#line 3106 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 652:
#line 3107 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 653:
#line 3108 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 654:
#line 3109 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 655:
#line 3111 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 656:
#line 3113 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 657:
#line 3115 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 658:
#line 3120 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 661:
#line 3128 "parser/evoparser.y"
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

  case 662:
#line 3143 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 663:
#line 3151 "parser/evoparser.y"
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

  case 664:
#line 3165 "parser/evoparser.y"
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

  case 665:
#line 3179 "parser/evoparser.y"
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

  case 666:
#line 3193 "parser/evoparser.y"
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

  case 667:
#line 3205 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 668:
#line 3206 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 669:
#line 3207 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 670:
#line 3210 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 671:
#line 3211 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 672:
#line 3214 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 673:
#line 3215 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 674:
#line 3216 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 675:
#line 3217 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 676:
#line 3218 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 677:
#line 3219 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 678:
#line 3220 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 679:
#line 3221 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 680:
#line 3223 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 681:
#line 3225 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 682:
#line 3227 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 683:
#line 3229 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 684:
#line 3231 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 685:
#line 3233 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 686:
#line 3236 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 687:
#line 3237 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 688:
#line 3240 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 689:
#line 3241 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 690:
#line 3244 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 691:
#line 3245 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 693:
#line 3249 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 694:
#line 3250 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 695:
#line 3251 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 696:
#line 3252 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 697:
#line 3253 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 698:
#line 3254 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 699:
#line 3255 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 700:
#line 3256 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 701:
#line 3257 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 702:
#line 3258 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 703:
#line 3259 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 704:
#line 3260 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 705:
#line 3261 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 706:
#line 3262 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 707:
#line 3263 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 708:
#line 3264 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 709:
#line 3265 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 710:
#line 3268 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 711:
#line 3269 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 712:
#line 3272 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 713:
#line 3274 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 714:
#line 3282 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 715:
#line 3283 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 717:
#line 3285 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 718:
#line 3286 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 719:
#line 3287 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 720:
#line 3288 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 721:
#line 3289 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 722:
#line 3290 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 723:
#line 3291 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 724:
#line 3292 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 725:
#line 3293 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 726:
#line 3300 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 727:
#line 3301 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 728:
#line 3302 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 729:
#line 3303 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 730:
#line 3304 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 731:
#line 3305 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 732:
#line 3306 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 733:
#line 3307 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 734:
#line 3308 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 735:
#line 3309 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 736:
#line 3310 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 737:
#line 3311 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 738:
#line 3312 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 739:
#line 3313 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 740:
#line 3314 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 741:
#line 3315 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 742:
#line 3316 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 743:
#line 3317 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 744:
#line 3318 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 745:
#line 3319 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 746:
#line 3320 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 747:
#line 3323 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 748:
#line 3324 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 749:
#line 3325 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 750:
#line 3328 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 751:
#line 3329 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 752:
#line 3332 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 753:
#line 3333 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 754:
#line 3334 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 756:
#line 3338 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 757:
#line 3339 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 758:
#line 3343 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 759:
#line 3344 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 760:
#line 3345 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 761:
#line 3346 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 762:
#line 3347 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 763:
#line 3348 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 764:
#line 3349 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 765:
#line 3350 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 766:
#line 3351 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 767:
#line 3352 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 768:
#line 3353 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 769:
#line 3354 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 770:
#line 3355 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 771:
#line 3356 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 772:
#line 3357 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 773:
#line 3358 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 774:
#line 3359 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 775:
#line 3360 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 776:
#line 3361 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 777:
#line 3362 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 778:
#line 3363 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 779:
#line 3364 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 780:
#line 3365 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 781:
#line 3366 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 782:
#line 3367 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 783:
#line 3368 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 784:
#line 3369 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 785:
#line 3370 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 786:
#line 3371 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 787:
#line 3372 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 788:
#line 3373 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 789:
#line 3374 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 790:
#line 3375 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 791:
#line 3376 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 792:
#line 3377 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 793:
#line 3380 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 794:
#line 3381 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 795:
#line 3385 "parser/evoparser.y"
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

  case 796:
#line 3397 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 797:
#line 3398 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 798:
#line 3399 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 799:
#line 3403 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 800:
#line 3406 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 801:
#line 3407 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 805:
#line 3411 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 806:
#line 3412 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 807:
#line 3420 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 808:
#line 3425 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 809:
#line 3431 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 810:
#line 3437 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 811:
#line 3444 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 812:
#line 3451 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 813:
#line 3457 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 814:
#line 3463 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 815:
#line 3470 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 820:
#line 3486 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 821:
#line 3487 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 822:
#line 3488 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 823:
#line 3489 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 824:
#line 3492 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 825:
#line 3493 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 826:
#line 3494 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 827:
#line 3495 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 828:
#line 3496 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 829:
#line 3497 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 830:
#line 3498 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 831:
#line 3499 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 832:
#line 3500 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 833:
#line 3501 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 842:
#line 3518 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 843:
#line 3519 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 964:
#line 3537 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 965:
#line 3544 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 966:
#line 3549 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 967:
#line 3555 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 968:
#line 3561 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 969:
#line 3567 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 970:
#line 3578 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 971:
#line 3583 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 972:
#line 3589 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 975:
#line 3600 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 976:
#line 3601 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 977:
#line 3602 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 978:
#line 3603 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 979:
#line 3604 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 980:
#line 3605 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 981:
#line 3606 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 982:
#line 3613 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 983:
#line 3618 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 984:
#line 3625 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 985:
#line 3626 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 986:
#line 3629 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 987:
#line 3630 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 988:
#line 3631 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 989:
#line 3634 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 990:
#line 3639 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 991:
#line 3645 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 992:
#line 3654 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 993:
#line 3662 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 994:
#line 3672 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 995:
#line 3677 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 998:
#line 3690 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 999:
#line 3691 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1000:
#line 3692 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1001:
#line 3693 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1002:
#line 3694 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1003:
#line 3695 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1004:
#line 3696 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1005:
#line 3697 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1006:
#line 3700 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1007:
#line 3705 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1008:
#line 3711 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1009:
#line 3721 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1010:
#line 3728 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1011:
#line 3735 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1012:
#line 3743 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1014:
#line 3753 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1016:
#line 3757 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1017:
#line 3758 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12274 "parser/evoparser.tab.c"
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


#line 3761 "parser/evoparser.y"

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
