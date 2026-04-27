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
     VERSIONING = 661,
     SUBSCRIPTION = 662,
     CHANNEL = 663,
     RESUME = 664,
     ACK = 665,
     UPTO = 666,
     TTL = 667,
     TTL_COLUMN = 668,
     FTOKEN_LENGTH = 669,
     FPG_CALL_EXTERNAL = 670,
     JOB = 671,
     JOBS = 672,
     SCHEDULE = 673
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
#define SUBSCRIPTION 662
#define CHANNEL 663
#define RESUME 664
#define ACK 665
#define UPTO 666
#define TTL 667
#define TTL_COLUMN 668
#define FTOKEN_LENGTH 669
#define FPG_CALL_EXTERNAL 670
#define JOB 671
#define JOBS 672
#define SCHEDULE 673




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
	#include "../db/Subscription.h"
	#include "../db/Schedule.h"

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
#line 74 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 1007 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1020 "parser/evoparser.tab.c"

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
#define YYFINAL  145
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   14726

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  436
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  223
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1043
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2694

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   673

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     431,   432,    28,    26,   433,    27,   430,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   429,
       2,   435,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   434,    32,     2,     2,     2,     2,     2,
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
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428
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
     770,   777,   784,   793,   800,   807,   814,   823,   832,   837,
     844,   851,   858,   863,   868,   873,   880,   885,   892,   897,
     904,   908,   913,   918,   923,   927,   931,   938,   943,   948,
     953,   958,   963,   968,   975,   980,   985,   990,   995,  1000,
    1005,  1010,  1015,  1024,  1033,  1042,  1049,  1056,  1065,  1074,
    1081,  1092,  1097,  1104,  1113,  1118,  1123,  1128,  1135,  1144,
    1148,  1155,  1162,  1169,  1176,  1185,  1189,  1198,  1209,  1213,
    1217,  1221,  1225,  1229,  1231,  1233,  1238,  1245,  1247,  1249,
    1251,  1258,  1265,  1269,  1273,  1277,  1281,  1285,  1289,  1293,
    1297,  1301,  1306,  1313,  1317,  1323,  1328,  1334,  1338,  1343,
    1347,  1352,  1354,  1356,  1358,  1360,  1362,  1366,  1380,  1393,
    1394,  1397,  1398,  1403,  1406,  1411,  1412,  1414,  1416,  1417,
    1420,  1421,  1424,  1425,  1429,  1431,  1435,  1436,  1440,  1443,
    1448,  1449,  1453,  1455,  1459,  1462,  1467,  1470,  1471,  1474,
    1479,  1484,  1485,  1492,  1493,  1496,  1499,  1504,  1509,  1510,
    1513,  1515,  1519,  1520,  1523,  1526,  1529,  1532,  1535,  1538,
    1541,  1544,  1546,  1550,  1552,  1555,  1558,  1560,  1561,  1563,
    1567,  1569,  1571,  1575,  1580,  1586,  1590,  1594,  1599,  1606,
    1616,  1620,  1621,  1627,  1629,  1630,  1636,  1640,  1646,  1653,
    1659,  1660,  1662,  1664,  1665,  1667,  1669,  1671,  1674,  1677,
    1678,  1679,  1681,  1684,  1689,  1696,  1703,  1710,  1711,  1714,
    1715,  1717,  1721,  1725,  1727,  1736,  1739,  1742,  1745,  1746,
    1753,  1756,  1761,  1762,  1765,  1773,  1775,  1780,  1787,  1788,
    1790,  1792,  1794,  1803,  1813,  1824,  1834,  1846,  1857,  1870,
    1882,  1896,  1906,  1918,  1929,  1942,  1954,  1967,  1980,  1995,
    1996,  1998,  1999,  2004,  2006,  2010,  2014,  2016,  2020,  2022,
    2027,  2032,  2037,  2044,  2046,  2050,  2053,  2057,  2063,  2065,
    2069,  2070,  2073,  2076,  2080,  2084,  2086,  2088,  2090,  2092,
    2094,  2100,  2108,  2109,  2116,  2121,  2127,  2134,  2136,  2138,
    2140,  2161,  2183,  2185,  2187,  2194,  2203,  2210,  2219,  2221,
    2223,  2225,  2227,  2229,  2231,  2233,  2240,  2249,  2250,  2251,
    2256,  2258,  2262,  2266,  2270,  2275,  2281,  2288,  2301,  2316,
    2318,  2320,  2333,  2340,  2349,  2362,  2368,  2376,  2379,  2383,
    2386,  2389,  2392,  2397,  2399,  2401,  2403,  2405,  2412,  2421,
    2425,  2431,  2435,  2441,  2443,  2445,  2447,  2456,  2467,  2471,
    2477,  2482,  2487,  2489,  2493,  2495,  2500,  2507,  2508,  2513,
    2518,  2521,  2522,  2527,  2535,  2540,  2542,  2546,  2548,  2550,
    2552,  2563,  2576,  2577,  2580,  2583,  2584,  2587,  2590,  2593,
    2596,  2599,  2600,  2603,  2605,  2609,  2610,  2615,  2616,  2622,
    2628,  2636,  2647,  2658,  2676,  2689,  2709,  2721,  2728,  2737,
    2744,  2751,  2758,  2768,  2775,  2781,  2790,  2798,  2808,  2817,
    2828,  2838,  2846,  2854,  2863,  2872,  2880,  2886,  2887,  2889,
    2892,  2894,  2905,  2912,  2913,  2914,  2920,  2921,  2926,  2927,
    2931,  2936,  2939,  2940,  2946,  2950,  2956,  2957,  2960,  2963,
    2966,  2969,  2971,  2972,  2973,  2977,  2979,  2983,  2987,  2988,
    2995,  2997,  2999,  3003,  3007,  3015,  3019,  3023,  3029,  3035,
    3037,  3046,  3054,  3062,  3064,  3065,  3073,  3074,  3078,  3080,
    3084,  3086,  3088,  3090,  3092,  3094,  3095,  3097,  3102,  3106,
    3108,  3112,  3115,  3118,  3121,  3123,  3126,  3129,  3132,  3134,
    3136,  3146,  3147,  3150,  3153,  3157,  3163,  3169,  3177,  3183,
    3185,  3190,  3195,  3199,  3205,  3209,  3215,  3216,  3219,  3221,
    3227,  3235,  3243,  3253,  3265,  3267,  3270,  3274,  3276,  3287,
    3288,  3293,  3305,  3324,  3325,  3330,  3334,  3340,  3346,  3356,
    3367,  3375,  3380,  3388,  3390,  3394,  3404,  3414,  3424,  3431,
    3443,  3452,  3453,  3455,  3458,  3460,  3464,  3470,  3478,  3483,
    3488,  3494,  3500,  3505,  3512,  3524,  3538,  3552,  3568,  3573,
    3580,  3582,  3586,  3588,  3592,  3594,  3598,  3599,  3604,  3610,
    3615,  3621,  3626,  3632,  3637,  3643,  3648,  3653,  3657,  3661,
    3665,  3668,  3672,  3677,  3682,  3684,  3688,  3689,  3694,  3695,
    3699,  3702,  3706,  3710,  3714,  3718,  3724,  3730,  3736,  3740,
    3746,  3749,  3757,  3763,  3771,  3777,  3780,  3784,  3787,  3791,
    3794,  3798,  3804,  3809,  3815,  3823,  3832,  3841,  3849,  3856,
    3863,  3869,  3870,  3874,  3880,  3881,  3883,  3884,  3887,  3890,
    3891,  3896,  3900,  3903,  3907,  3911,  3915,  3919,  3923,  3927,
    3931,  3935,  3939,  3943,  3945,  3947,  3949,  3951,  3953,  3957,
    3963,  3966,  3971,  3973,  3975,  3977,  3979,  3983,  3987,  3991,
    3995,  4001,  4007,  4009,  4011,  4013,  4018,  4022,  4024,  4028,
    4032,  4033,  4035,  4037,  4039,  4043,  4047,  4050,  4052,  4056,
    4060,  4064,  4066,  4077,  4087,  4100,  4112,  4125,  4137,  4152,
    4166,  4167,  4169,  4171,  4175,  4178,  4182,  4186,  4190,  4192,
    4194,  4196,  4198,  4200,  4202,  4204,  4206,  4208,  4210,  4211,
    4214,  4219,  4225,  4231,  4237,  4243,  4249,  4251,  4253,  4255,
    4257,  4259,  4261,  4263,  4265,  4267,  4269,  4271,  4273,  4275,
    4277,  4279,  4281,  4283,  4285,  4287,  4289,  4291,  4293,  4295,
    4297,  4299,  4301,  4303,  4305,  4307,  4309,  4311,  4313,  4315,
    4317,  4319,  4321,  4323,  4325,  4327,  4329,  4331,  4333,  4335,
    4337,  4339,  4341,  4343,  4345,  4347,  4349,  4351,  4353,  4355,
    4357,  4359,  4361,  4363,  4365,  4367,  4369,  4371,  4373,  4375,
    4377,  4379,  4381,  4383,  4385,  4387,  4389,  4391,  4393,  4395,
    4397,  4399,  4401,  4403,  4405,  4407,  4409,  4411,  4413,  4415,
    4417,  4419,  4421,  4423,  4425,  4427,  4429,  4431,  4433,  4435,
    4437,  4439,  4441,  4443,  4445,  4447,  4449,  4451,  4453,  4455,
    4457,  4459,  4461,  4463,  4465,  4467,  4469,  4471,  4473,  4475,
    4477,  4479,  4481,  4483,  4485,  4487,  4489,  4491,  4493,  4495,
    4497,  4501,  4507,  4511,  4517,  4519,  4524,  4530,  4532,  4536,
    4538,  4540,  4542,  4544,  4546,  4548,  4550,  4552,  4566,  4582,
    4584,  4586,  4588,  4590,  4592,  4594,  4596,  4600,  4606,  4611,
    4616,  4618,  4624,  4625,  4628,  4632,  4635,  4639,  4642,  4645,
    4648,  4650,  4653,  4655,  4659,  4665,  4670,  4675,  4682,  4689,
    4690,  4693,  4696,  4698
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     437,     0,    -1,   476,   429,    -1,   476,   429,   437,    -1,
       3,    -1,     3,   430,     3,    -1,    89,   430,     3,    -1,
     183,   431,     3,   432,    91,   431,     4,   432,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   438,    26,   438,    -1,   438,    27,   438,    -1,   438,
      28,   438,    -1,   438,    29,   438,    -1,   438,    30,   438,
      -1,   438,    31,   438,    -1,    27,   438,    -1,   431,   438,
     432,    -1,   438,    12,   438,    -1,   438,    10,   438,    -1,
     438,    11,   438,    -1,   438,    23,   438,    -1,   438,    24,
     438,    -1,   438,    32,   438,    -1,   438,    25,   438,    -1,
     438,    34,   438,    -1,   438,    33,   438,    -1,    18,   438,
      -1,    17,   438,    -1,   438,    20,   438,    -1,    -1,   438,
      20,   431,   439,   477,   432,    -1,    -1,   438,    20,    47,
     431,   440,   477,   432,    -1,    -1,   438,    20,   232,   431,
     441,   477,   432,    -1,    -1,   438,    20,    40,   431,   442,
     477,   432,    -1,   438,    20,    47,   431,   446,   432,    -1,
     438,    20,   232,   431,   446,   432,    -1,   438,    15,   193,
      -1,   438,    15,    18,   193,    -1,   438,    15,     6,    -1,
     438,    15,    18,     6,    -1,     8,     9,   438,    -1,   438,
      19,   438,    50,   438,    -1,   438,    18,    19,   438,    50,
     438,    -1,   438,    -1,   438,   433,   443,    -1,   438,    -1,
     438,   433,   444,    -1,    -1,   263,    36,   445,   444,   434,
      -1,   263,    36,   434,    -1,   438,    36,   438,   434,    -1,
     438,    -1,   380,   431,   438,   432,    -1,   380,   431,   438,
     433,   438,   432,    -1,   381,   431,   438,   432,    -1,   382,
     431,   438,   433,   438,   432,    -1,   383,   431,   432,    -1,
     414,   431,   432,    -1,   384,   431,   438,   433,   438,   432,
      -1,   385,   431,   438,   433,   438,   432,    -1,   386,   431,
     438,   433,   438,   432,    -1,   387,   431,   438,   433,   438,
     432,    -1,   388,   431,   438,   432,    -1,   389,   431,   438,
     432,    -1,   390,   431,   438,   432,    -1,   438,    22,   438,
      -1,   438,    21,   438,    -1,   392,   431,   438,   433,   438,
     433,   438,   433,     5,   432,    -1,   393,   431,   438,   433,
     438,   433,   438,   433,     5,   433,     4,   432,    -1,   394,
     431,   438,   433,   438,   433,   438,   433,     5,   433,     4,
     432,    -1,    -1,   443,    -1,    -1,   438,    16,   431,   448,
     443,   432,    -1,    -1,   438,    18,    16,   431,   449,   443,
     432,    -1,    -1,   438,    16,   431,   450,   477,   432,    -1,
      -1,   438,    18,    16,   431,   451,   477,   432,    -1,    -1,
     281,   431,   452,   477,   432,    -1,     3,   431,   447,   432,
      -1,   322,   431,    28,   432,    -1,   322,   431,   438,   432,
      -1,   323,   431,   438,   432,    -1,   324,   431,   438,   432,
      -1,   325,   431,   438,   432,    -1,   326,   431,   438,   432,
      -1,   320,   431,   438,   432,    -1,   320,   431,   438,   321,
       4,   432,    -1,    -1,   342,   431,   432,   350,   431,   453,
     484,   486,   432,    -1,    -1,   343,   431,   432,   350,   431,
     454,   484,   486,   432,    -1,    -1,   344,   431,   432,   350,
     431,   455,   484,   486,   432,    -1,    -1,   323,   431,   438,
     432,   350,   431,   456,   484,   486,   432,    -1,    -1,   322,
     431,    28,   432,   350,   431,   457,   484,   486,   432,    -1,
      -1,   322,   431,   438,   432,   350,   431,   458,   484,   486,
     432,    -1,    -1,   324,   431,   438,   432,   350,   431,   459,
     484,   486,   432,    -1,    -1,   325,   431,   438,   432,   350,
     431,   460,   484,   486,   432,    -1,    -1,   326,   431,   438,
     432,   350,   431,   461,   484,   486,   432,    -1,    -1,   345,
     431,   438,   432,   350,   431,   462,   484,   486,   432,    -1,
      -1,   345,   431,   438,   433,     5,   432,   350,   431,   463,
     484,   486,   432,    -1,    -1,   345,   431,   438,   433,     5,
     433,     4,   432,   350,   431,   464,   484,   486,   432,    -1,
      -1,   345,   431,   438,   433,     5,   433,     5,   432,   350,
     431,   465,   484,   486,   432,    -1,    -1,   346,   431,   438,
     432,   350,   431,   466,   484,   486,   432,    -1,    -1,   346,
     431,   438,   433,     5,   432,   350,   431,   467,   484,   486,
     432,    -1,    -1,   346,   431,   438,   433,     5,   433,     4,
     432,   350,   431,   468,   484,   486,   432,    -1,    -1,   346,
     431,   438,   433,     5,   433,     5,   432,   350,   431,   469,
     484,   486,   432,    -1,    -1,   347,   431,     5,   432,   350,
     431,   470,   484,   486,   432,    -1,    -1,   348,   431,   432,
     350,   431,   471,   484,   486,   432,    -1,    -1,   349,   431,
     432,   350,   431,   472,   484,   486,   432,    -1,   282,   431,
     438,   433,   438,   433,   438,   432,    -1,   282,   431,   438,
     433,   438,   432,    -1,   282,   431,   438,   136,   438,   432,
      -1,   282,   431,   438,   136,   438,   140,   438,   432,    -1,
     283,   431,   438,   432,    -1,   283,   431,   473,   438,   136,
     438,   432,    -1,   283,   431,   473,   136,   438,   432,    -1,
     327,   431,   438,   432,    -1,   328,   431,   438,   432,    -1,
     329,   431,   438,   432,    -1,   424,   431,   438,   432,    -1,
     425,   431,   438,   433,   438,   432,    -1,   330,   431,   438,
     433,   438,   432,    -1,   331,   431,   438,   433,   438,   433,
     438,   432,    -1,   332,   431,   438,   433,   438,   432,    -1,
     294,   431,   438,   433,   438,   432,    -1,   295,   431,   438,
     433,   438,   432,    -1,   296,   431,   438,   433,   438,   433,
     438,   432,    -1,   297,   431,   438,   433,   438,   433,   438,
     432,    -1,   298,   431,   438,   432,    -1,   299,   431,   438,
     433,   438,   432,    -1,   300,   431,   438,   433,   438,   432,
      -1,   301,   431,   438,   433,   438,   432,    -1,   302,   431,
     438,   432,    -1,   303,   431,   438,   432,    -1,   304,   431,
     438,   432,    -1,   305,   431,   438,   433,   438,   432,    -1,
     305,   431,   438,   432,    -1,   306,   431,   438,   433,   438,
     432,    -1,   307,   431,   438,   432,    -1,   308,   431,   438,
     433,   438,   432,    -1,   309,   431,   432,    -1,   310,   431,
     438,   432,    -1,   311,   431,   438,   432,    -1,   312,   431,
     438,   432,    -1,   313,   431,   432,    -1,   293,   431,   432,
      -1,   286,   431,   438,   433,   438,   432,    -1,   287,   431,
     438,   432,    -1,   288,   431,   438,   432,    -1,   289,   431,
     438,   432,    -1,   290,   431,   438,   432,    -1,   291,   431,
     438,   432,    -1,   292,   431,   438,   432,    -1,   352,   431,
     438,   433,   438,   432,    -1,   353,   431,   438,   432,    -1,
     354,   431,   438,   432,    -1,   355,   431,   438,   432,    -1,
     356,   431,   438,   432,    -1,   357,   431,   438,   432,    -1,
     358,   431,   438,   432,    -1,   359,   431,   438,   432,    -1,
     360,   431,   438,   432,    -1,   361,   431,   438,   433,   438,
     433,   438,   432,    -1,   362,   431,   438,   433,   438,   433,
     438,   432,    -1,   363,   431,   438,   433,   438,   433,   438,
     432,    -1,   364,   431,   438,   433,   438,   432,    -1,   365,
     431,   438,   433,   438,   432,    -1,   366,   431,   438,   433,
     438,   433,   438,   432,    -1,   367,   431,   438,   433,   438,
     433,   438,   432,    -1,   368,   431,   438,   433,   438,   432,
      -1,   368,   431,   438,   433,   438,   433,   438,   433,   438,
     432,    -1,   369,   431,   438,   432,    -1,   369,   431,   438,
     433,   438,   432,    -1,   369,   431,   438,   433,   438,   433,
     438,   432,    -1,   370,   431,   438,   432,    -1,   372,   431,
     438,   432,    -1,   373,   431,   438,   432,    -1,   374,   431,
     438,   433,   438,   432,    -1,   374,   431,   438,   433,   438,
     433,   438,   432,    -1,   375,   431,   432,    -1,   314,   431,
     438,    51,   631,   432,    -1,   315,   431,   438,   433,   631,
     432,    -1,   316,   431,   438,   433,   438,   432,    -1,   317,
     431,   438,   433,   438,   432,    -1,   318,   431,   438,   433,
     438,   433,   438,   432,    -1,   438,    15,   319,    -1,   330,
     431,   438,   433,   438,   433,   438,   432,    -1,   330,   431,
     438,   433,   438,   433,   438,   433,   438,   432,    -1,   333,
     431,   432,    -1,   334,   431,   432,    -1,   335,   431,   432,
      -1,   336,   431,   432,    -1,   337,   431,   432,    -1,   338,
      -1,   339,    -1,   340,   431,   438,   432,    -1,   341,   431,
     438,   433,   438,   432,    -1,   178,    -1,   254,    -1,    65,
      -1,   284,   431,   438,   433,   474,   432,    -1,   285,   431,
     438,   433,   474,   432,    -1,   161,   438,   278,    -1,   161,
     438,   104,    -1,   161,   438,   105,    -1,   161,   438,   109,
      -1,   161,   438,   111,    -1,   161,   438,   279,    -1,   161,
     438,   145,    -1,   161,   438,   144,    -1,   161,   438,   147,
      -1,    77,   438,   475,   124,    -1,    77,   438,   475,   125,
     438,   124,    -1,    77,   475,   124,    -1,    77,   475,   125,
     438,   124,    -1,   275,   438,   253,   438,    -1,   475,   275,
     438,   253,   438,    -1,   438,    14,   438,    -1,   438,    18,
      14,   438,    -1,   438,    13,   438,    -1,   438,    18,    13,
     438,    -1,    72,    -1,    80,    -1,    81,    -1,   225,    -1,
     477,    -1,   241,   496,   497,    -1,   241,   496,   497,   136,
     500,   492,   478,   479,   483,   488,   491,   493,   494,    -1,
     241,   496,   497,   159,     3,   136,   500,   478,   479,   483,
     488,   491,    -1,    -1,   274,   438,    -1,    -1,   141,    63,
     480,   482,    -1,   438,   481,    -1,   480,   433,   438,   481,
      -1,    -1,    49,    -1,   112,    -1,    -1,   277,   214,    -1,
      -1,   148,   438,    -1,    -1,   351,    63,   485,    -1,     3,
      -1,   485,   433,     3,    -1,    -1,   198,    63,   487,    -1,
       3,   481,    -1,   487,   433,     3,   481,    -1,    -1,   198,
      63,   489,    -1,   490,    -1,   489,   433,   490,    -1,     3,
     481,    -1,     3,   430,     3,   481,    -1,     5,   481,    -1,
      -1,   179,   438,    -1,   179,   438,   433,   438,    -1,   179,
     438,   181,   438,    -1,    -1,   140,   412,    51,    94,   413,
       5,    -1,    -1,   140,   258,    -1,   140,   230,    -1,   140,
     258,   231,   180,    -1,   140,   230,   231,   180,    -1,    -1,
     159,   495,    -1,     3,    -1,   495,   433,     3,    -1,    -1,
     496,    40,    -1,   496,   106,    -1,   496,   110,    -1,   496,
     146,    -1,   496,   238,    -1,   496,   226,    -1,   496,   234,
      -1,   496,   233,    -1,   498,    -1,   497,   433,   498,    -1,
      28,    -1,   438,   499,    -1,    51,     3,    -1,     3,    -1,
      -1,   501,    -1,   500,   433,   501,    -1,   502,    -1,   506,
      -1,     3,   499,   513,    -1,   173,     3,   499,   513,    -1,
       3,   430,     3,   499,   513,    -1,   516,   505,     3,    -1,
     503,   505,     3,    -1,   381,   431,   438,   432,    -1,   381,
     431,   438,   432,   505,     3,    -1,   381,   431,   438,   432,
     505,     3,   431,     3,   432,    -1,   431,   500,   432,    -1,
      -1,   167,   431,   504,   477,   432,    -1,    51,    -1,    -1,
     501,   507,   163,   502,   511,    -1,   501,   238,   502,    -1,
     501,   238,   502,   197,   438,    -1,   501,   509,   508,   163,
     502,   512,    -1,   501,   190,   510,   163,   502,    -1,    -1,
     153,    -1,    76,    -1,    -1,   196,    -1,   177,    -1,   215,
      -1,   177,   508,    -1,   215,   508,    -1,    -1,    -1,   512,
      -1,   197,   438,    -1,   266,   431,   495,   432,    -1,   267,
     164,   514,   431,   515,   432,    -1,   154,   164,   514,   431,
     515,   432,    -1,   133,   164,   514,   431,   515,   432,    -1,
      -1,   140,   163,    -1,    -1,     3,    -1,   515,   433,     3,
      -1,   431,   477,   432,    -1,   517,    -1,   107,   518,   136,
       3,   478,   488,   491,   657,    -1,   518,   176,    -1,   518,
     203,    -1,   518,   154,    -1,    -1,   107,   518,   519,   136,
     500,   478,    -1,     3,   520,    -1,   519,   433,     3,   520,
      -1,    -1,   430,    28,    -1,   107,   518,   136,   519,   266,
     500,   478,    -1,   521,    -1,   108,   252,     3,   522,    -1,
     108,   252,   156,   281,     3,   522,    -1,    -1,    74,    -1,
     210,    -1,   523,    -1,    73,   155,     3,   197,     3,   431,
     528,   432,    -1,    73,   138,   155,     3,   197,     3,   431,
     528,   432,    -1,    73,   155,   156,   281,     3,   197,     3,
     431,   528,   432,    -1,    73,   261,   155,     3,   197,     3,
     431,   528,   432,    -1,    73,   261,   155,   156,   281,     3,
     197,     3,   431,   528,   432,    -1,    73,   155,     3,   197,
       3,   266,   268,   431,   528,   432,    -1,    73,   155,   156,
     281,     3,   197,     3,   266,   268,   431,   528,   432,    -1,
      73,   261,   155,     3,   197,     3,   266,   268,   431,   528,
     432,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     266,   268,   431,   528,   432,    -1,    73,   155,    85,     3,
     197,     3,   431,   528,   432,    -1,    73,   155,    85,   156,
     281,     3,   197,     3,   431,   528,   432,    -1,    73,   261,
     155,    85,     3,   197,     3,   431,   528,   432,    -1,    73,
     261,   155,    85,   156,   281,     3,   197,     3,   431,   528,
     432,    -1,    73,   155,    85,     3,   197,     3,   266,   268,
     431,   528,   432,    -1,    73,   261,   155,    85,     3,   197,
       3,   266,   268,   431,   528,   432,    -1,    73,   155,     3,
     197,     3,   266,   391,   431,     3,   524,   432,   525,    -1,
      73,   155,   156,   281,     3,   197,     3,   266,   391,   431,
       3,   524,   432,   525,    -1,    -1,     3,    -1,    -1,   277,
     431,   526,   432,    -1,   527,    -1,   526,   433,   527,    -1,
       3,    20,     5,    -1,     3,    -1,   528,   433,     3,    -1,
     529,    -1,   327,   431,     3,   432,    -1,   328,   431,     3,
     432,    -1,   329,   431,     3,   432,    -1,   330,   431,     3,
     433,     3,   432,    -1,   530,    -1,   108,   155,     3,    -1,
     531,   533,    -1,   255,   252,     3,    -1,   255,   252,     3,
     433,   532,    -1,     3,    -1,   532,   433,     3,    -1,    -1,
     533,    74,    -1,   533,   210,    -1,   533,    55,    53,    -1,
     533,    54,    53,    -1,   553,    -1,   554,    -1,   555,    -1,
     534,    -1,   536,    -1,    73,   395,   396,     3,   535,    -1,
      73,   395,   396,   156,   281,     3,   535,    -1,    -1,   277,
     431,   397,    20,     4,   432,    -1,   108,   395,   396,     3,
      -1,   108,   395,   396,     3,    74,    -1,   108,   395,   396,
     156,   281,     3,    -1,   537,    -1,   539,    -1,   540,    -1,
     395,   398,   159,     3,   271,   431,   538,   433,   538,   433,
     538,   433,   538,   433,   538,   433,   538,   433,   538,   432,
      -1,   395,   398,   401,   159,     3,   271,   431,   538,   433,
     538,   433,   538,   433,   538,   433,   538,   433,   538,   433,
     538,   432,    -1,     4,    -1,   193,    -1,   395,   399,   136,
       3,   402,     4,    -1,   395,   399,   136,     3,   402,     4,
     403,     4,    -1,   395,   400,   136,     3,   402,     4,    -1,
     395,   400,   136,     3,   402,     4,   179,     5,    -1,   541,
      -1,   546,    -1,   547,    -1,   549,    -1,   550,    -1,   551,
      -1,   552,    -1,    73,   404,   396,     3,   542,   543,    -1,
      73,   404,   396,   156,   281,     3,   542,   543,    -1,    -1,
      -1,   277,   431,   544,   432,    -1,   545,    -1,   544,   433,
     545,    -1,   405,    20,     5,    -1,   406,    20,     4,    -1,
     108,   404,   396,     3,    -1,   108,   404,   396,     3,    74,
      -1,   108,   404,   396,   156,   281,     3,    -1,   404,   398,
     159,     3,   271,   431,   548,   433,   548,   433,   548,   432,
      -1,   404,   398,   159,     3,   271,   431,   548,   433,   548,
     433,   548,   433,   548,   432,    -1,     4,    -1,   193,    -1,
     404,   399,   136,     3,   274,   411,    20,     4,    12,   164,
      20,     4,    -1,   404,   407,     3,   266,   273,     4,    -1,
     404,   407,     3,   266,   273,     4,   179,     5,    -1,   404,
     107,   136,     3,   274,   411,    20,     4,    12,   164,    20,
       4,    -1,   404,   400,   409,    16,     3,    -1,   404,   400,
     409,    16,     3,   410,     4,    -1,   168,     3,    -1,   168,
       3,   171,    -1,   170,     3,    -1,   170,    28,    -1,   169,
       3,    -1,   169,     3,   433,     4,    -1,   556,    -1,   557,
      -1,   558,    -1,   559,    -1,    73,   417,     3,   140,   418,
       3,    -1,    73,   417,   156,   281,     3,   140,   418,     3,
      -1,   108,   417,     3,    -1,   108,   417,   156,   281,     3,
      -1,   419,   417,     3,    -1,   420,   417,     3,   421,     5,
      -1,   560,    -1,   561,    -1,   562,    -1,    73,   426,     3,
     197,   428,     4,   101,     4,    -1,    73,   426,   156,   281,
       3,   197,   428,     4,   101,     4,    -1,   108,   426,     3,
      -1,   108,   426,   156,   281,     3,    -1,    37,   426,     3,
     120,    -1,    37,   426,     3,   100,    -1,   563,    -1,   206,
     252,     3,    -1,   564,    -1,   566,     3,   565,   567,    -1,
     566,     3,   430,     3,   565,   567,    -1,    -1,   277,    44,
       5,    45,    -1,   277,    44,     5,    46,    -1,    41,   252,
      -1,    -1,   258,    42,   197,   568,    -1,   258,    42,   197,
     568,   277,     5,    43,    -1,   108,    42,   197,   568,    -1,
       3,    -1,   568,   433,     3,    -1,   577,    -1,   569,    -1,
     576,    -1,    73,   221,     3,   197,     3,   570,   571,   572,
     574,   575,    -1,    73,   221,     3,   197,   404,   396,     3,
     570,   571,   572,   574,   575,    -1,    -1,    51,   223,    -1,
      51,   224,    -1,    -1,   140,    40,    -1,   140,   241,    -1,
     140,   157,    -1,   140,   258,    -1,   140,   107,    -1,    -1,
     245,   573,    -1,     3,    -1,   573,   433,     3,    -1,    -1,
     266,   431,   438,   432,    -1,    -1,   277,    78,   431,   438,
     432,    -1,   108,   221,     3,   197,     3,    -1,   108,   221,
       3,   197,   404,   396,     3,    -1,    37,   252,     3,    38,
      71,     3,    78,   431,   438,   432,    -1,    37,   252,     3,
      38,    71,     3,   261,   431,   624,   432,    -1,    37,   252,
       3,    38,    71,     3,   134,   164,   431,   621,   432,   207,
       3,   431,   622,   432,   623,    -1,    37,   252,     3,    38,
      71,     3,    78,   431,   438,   432,    18,   269,    -1,    37,
     252,     3,    38,    71,     3,   134,   164,   431,   621,   432,
     207,     3,   431,   622,   432,   623,    18,   269,    -1,    37,
     252,     3,    38,    71,     3,   201,   164,   431,   620,   432,
      -1,    37,   252,     3,   108,    71,     3,    -1,    37,   252,
       3,   208,    71,     3,   245,     3,    -1,    37,   252,     3,
     120,    71,     3,    -1,    37,   252,     3,   100,    71,     3,
      -1,    37,   252,     3,   269,    71,     3,    -1,    37,   252,
       3,    38,    84,     3,   631,   626,   578,    -1,    37,   252,
       3,   108,    84,     3,    -1,    37,   252,     3,   108,     3,
      -1,    37,   252,     3,   208,    84,     3,   245,     3,    -1,
      37,   252,     3,   208,     3,   245,     3,    -1,    37,   252,
       3,   187,    84,     3,   631,   626,   578,    -1,    37,   252,
       3,   187,     3,   631,   626,   578,    -1,    37,   252,     3,
      75,    84,     3,     3,   631,   626,   578,    -1,    37,   252,
       3,    75,     3,     3,   631,   626,   578,    -1,    37,   252,
       3,   120,   217,     3,   222,    -1,    37,   252,     3,   100,
     217,     3,   222,    -1,    37,   404,   396,     3,   120,   217,
       3,   222,    -1,    37,   404,   396,     3,   100,   217,     3,
     222,    -1,    37,   252,     3,   240,   423,    20,     4,    -1,
      37,   252,     3,   108,   422,    -1,    -1,   130,    -1,    39,
       3,    -1,   579,    -1,   157,   587,   588,     3,   589,   271,
     591,   580,   582,   657,    -1,   157,   587,   588,     3,   589,
     477,    -1,    -1,    -1,   199,   164,   258,   581,   586,    -1,
      -1,   197,    88,   583,   584,    -1,    -1,   431,     3,   432,
      -1,   431,     3,   433,     3,    -1,   101,    90,    -1,    -1,
     101,   258,   585,   240,   586,    -1,     3,    20,   438,    -1,
     586,   433,     3,    20,   438,    -1,    -1,   587,   176,    -1,
     587,   103,    -1,   587,   146,    -1,   587,   154,    -1,   159,
      -1,    -1,    -1,   431,   590,   432,    -1,     3,    -1,   590,
     433,     3,    -1,   431,   593,   432,    -1,    -1,   591,   433,
     592,   431,   593,   432,    -1,   438,    -1,   113,    -1,   593,
     433,   438,    -1,   593,   433,   113,    -1,   157,   587,   588,
       3,   240,   594,   580,    -1,     3,    20,   438,    -1,     3,
      20,   113,    -1,   594,   433,     3,    20,   438,    -1,   594,
     433,     3,    20,   113,    -1,   595,    -1,   216,   587,   588,
       3,   589,   271,   591,   580,    -1,   216,   587,   588,     3,
     240,   594,   580,    -1,   216,   587,   588,     3,   589,   477,
     580,    -1,   596,    -1,    -1,    86,     3,   597,   598,   600,
     601,   602,    -1,    -1,   431,   599,   432,    -1,     3,    -1,
     599,   433,     3,    -1,   136,    -1,   245,    -1,     4,    -1,
     236,    -1,   237,    -1,    -1,   603,    -1,   277,   431,   603,
     432,    -1,   431,   603,   432,    -1,   604,    -1,   603,   433,
     604,    -1,   135,    87,    -1,   135,   249,    -1,    99,     4,
      -1,   143,    -1,   143,     6,    -1,   193,     4,    -1,   242,
       4,    -1,    87,    -1,   605,    -1,   258,   606,   500,   240,
     607,   478,   488,   491,   657,    -1,    -1,   587,   176,    -1,
     587,   154,    -1,     3,    20,   438,    -1,     3,   430,     3,
      20,   438,    -1,   607,   433,     3,    20,   438,    -1,   607,
     433,     3,   430,     3,    20,   438,    -1,   208,   252,     3,
     245,     3,    -1,   608,    -1,    73,    95,   609,     3,    -1,
      73,   227,   609,     3,    -1,   108,    95,     3,    -1,   108,
      95,   156,   281,     3,    -1,   108,   227,     3,    -1,   108,
     227,   156,   281,     3,    -1,    -1,   156,   281,    -1,   610,
      -1,    73,   102,     3,    51,   631,    -1,    73,   102,     3,
      51,   631,   113,   438,    -1,    73,   102,     3,    51,   631,
      18,   193,    -1,    73,   102,     3,    51,   631,    78,   431,
     438,   432,    -1,    73,   102,     3,    51,   631,    18,   193,
      78,   431,   438,   432,    -1,   611,    -1,   267,     3,    -1,
     267,    95,     3,    -1,   612,    -1,    73,   617,   252,   609,
       3,   431,   618,   432,   614,   613,    -1,    -1,   172,   431,
       3,   432,    -1,    73,   617,   252,   609,     3,   430,     3,
     431,   618,   432,   614,    -1,    73,   617,   252,   609,     3,
     351,    94,     3,   140,   271,   136,   431,     5,   432,   245,
     431,     5,   432,    -1,    -1,   614,    48,    20,     5,    -1,
     614,    48,     5,    -1,   614,   197,     3,   107,     3,    -1,
     614,   197,     3,   248,     3,    -1,   614,   228,    63,   268,
     431,     3,   432,   229,     5,    -1,   614,   228,    63,   204,
     431,     3,   432,   431,   615,   432,    -1,   614,   351,    63,
     204,   431,     3,   432,    -1,   614,   277,   415,   416,    -1,
     614,   277,   431,   423,    20,     4,   432,    -1,   616,    -1,
     615,   433,   616,    -1,   228,     3,   271,   174,   250,     4,
     197,   191,     5,    -1,   228,     3,   271,   174,   250,   184,
     197,   191,     5,    -1,    73,   617,   252,   609,     3,   431,
     618,   432,   633,    -1,    73,   617,   252,   609,     3,   633,
      -1,    73,   617,   252,   609,     3,   430,     3,   431,   618,
     432,   633,    -1,    73,   617,   252,   609,     3,   430,     3,
     633,    -1,    -1,   246,    -1,   247,   246,    -1,   619,    -1,
     618,   433,   619,    -1,   201,   164,   431,   620,   432,    -1,
      71,     3,   201,   164,   431,   620,   432,    -1,   164,   431,
     495,   432,    -1,   155,   431,   495,   432,    -1,   138,   155,
     431,   495,   432,    -1,   138,   164,   431,   495,   432,    -1,
      78,   431,   438,   432,    -1,    71,     3,    78,   431,   438,
     432,    -1,   134,   164,   431,   621,   432,   207,     3,   431,
     622,   432,   623,    -1,   134,   164,   431,   621,   432,   207,
       3,   430,     3,   431,   622,   432,   623,    -1,    71,     3,
     134,   164,   431,   621,   432,   207,     3,   431,   622,   432,
     623,    -1,    71,     3,   134,   164,   431,   621,   432,   207,
       3,   430,     3,   431,   622,   432,   623,    -1,   261,   431,
     624,   432,    -1,    71,     3,   261,   431,   624,   432,    -1,
       3,    -1,   620,   433,     3,    -1,     3,    -1,   621,   433,
       3,    -1,     3,    -1,   622,   433,     3,    -1,    -1,   623,
     197,   107,    74,    -1,   623,   197,   107,   240,   193,    -1,
     623,   197,   107,   210,    -1,   623,   197,   107,   240,   113,
      -1,   623,   197,   258,    74,    -1,   623,   197,   258,   240,
     193,    -1,   623,   197,   258,   210,    -1,   623,   197,   258,
     240,   113,    -1,   623,   197,   107,   192,    -1,   623,   197,
     258,   192,    -1,   623,   183,   137,    -1,   623,   183,   235,
      -1,   623,   183,   200,    -1,   623,    97,    -1,   623,    18,
      97,    -1,   623,    97,   151,    98,    -1,   623,    97,   151,
     149,    -1,     3,    -1,   624,   433,     3,    -1,    -1,   625,
       3,   631,   626,    -1,    -1,   626,    18,   193,    -1,   626,
     193,    -1,   626,   113,     4,    -1,   626,   113,     5,    -1,
     626,   113,     7,    -1,   626,   113,     6,    -1,   626,   113,
     333,   431,   432,    -1,   626,   113,   334,   431,   432,    -1,
     626,   113,   335,   431,   432,    -1,   626,   113,    72,    -1,
     626,   113,   431,   438,   432,    -1,   626,    48,    -1,   626,
      48,   431,     5,   433,     5,   432,    -1,   626,    48,   431,
       5,   432,    -1,   626,    53,   431,     5,   433,     5,   432,
      -1,   626,    53,   431,     5,   432,    -1,   626,    53,    -1,
     626,   261,   164,    -1,   626,   261,    -1,   626,   201,   164,
      -1,   626,   164,    -1,   626,    79,     4,    -1,   626,    78,
     431,   438,   432,    -1,   626,    71,     3,   261,    -1,   626,
      71,     3,   201,   164,    -1,   626,    71,     3,    78,   431,
     438,   432,    -1,   626,    56,    52,    51,   431,   438,   432,
      57,    -1,   626,    56,    52,    51,   431,   438,   432,    58,
      -1,   626,    56,    52,    51,   431,   438,   432,    -1,   626,
      51,   431,   438,   432,    57,    -1,   626,    51,   431,   438,
     432,    58,    -1,   626,    51,   431,   438,   432,    -1,    -1,
     431,     5,   432,    -1,   431,     5,   433,     5,   432,    -1,
      -1,    64,    -1,    -1,   629,   259,    -1,   629,   280,    -1,
      -1,   630,    82,   240,     4,    -1,   630,    83,     4,    -1,
      67,   627,    -1,   244,   627,   629,    -1,   239,   627,   629,
      -1,   189,   627,   629,    -1,   160,   627,   629,    -1,   152,
     627,   629,    -1,    66,   627,   629,    -1,   205,   627,   629,
      -1,   114,   627,   629,    -1,   132,   627,   629,    -1,   116,
     627,   629,    -1,   117,    -1,   257,    -1,   251,    -1,   115,
      -1,   278,    -1,    82,   627,   630,    -1,   270,   431,     5,
     432,   630,    -1,    64,   627,    -1,   272,   431,     5,   432,
      -1,   256,    -1,    61,    -1,   188,    -1,   182,    -1,   243,
     628,   630,    -1,   249,   628,   630,    -1,   185,   628,   630,
      -1,   175,   628,   630,    -1,   123,   431,   632,   432,   630,
      -1,   240,   431,   632,   432,   630,    -1,    62,    -1,   262,
      -1,   264,    -1,   273,   431,     5,   432,    -1,   631,    36,
     434,    -1,     4,    -1,   632,   433,     4,    -1,   634,   505,
     477,    -1,    -1,   154,    -1,   216,    -1,   635,    -1,   240,
     227,     3,    -1,   240,   227,   113,    -1,   240,   636,    -1,
     637,    -1,   636,   433,   637,    -1,     8,    20,   438,    -1,
       8,     9,   438,    -1,   638,    -1,    73,   202,     3,   431,
     639,   432,    51,    60,   643,   124,    -1,    73,   202,     3,
     431,   639,   432,    60,   643,   124,    -1,    73,    10,   216,
     202,     3,   431,   639,   432,    51,    60,   643,   124,    -1,
      73,    10,   216,   202,     3,   431,   639,   432,    60,   643,
     124,    -1,    73,   139,     3,   431,   639,   432,   213,   642,
      51,    60,   643,   124,    -1,    73,   139,     3,   431,   639,
     432,   213,   642,    60,   643,   124,    -1,    73,    10,   216,
     139,     3,   431,   639,   432,   213,   642,    51,    60,   643,
     124,    -1,    73,    10,   216,   139,     3,   431,   639,   432,
     213,   642,    60,   643,   124,    -1,    -1,   640,    -1,   641,
      -1,   640,   433,   641,    -1,     3,   631,    -1,    16,     3,
     631,    -1,   195,     3,   631,    -1,   150,     3,   631,    -1,
     152,    -1,   160,    -1,   270,    -1,   249,    -1,    62,    -1,
     132,    -1,   114,    -1,    66,    -1,   117,    -1,   251,    -1,
      -1,   643,   644,    -1,   643,    60,   643,   124,    -1,   643,
     156,   643,   124,   156,    -1,   643,   276,   643,   124,   276,
      -1,   643,   166,   643,   124,   166,    -1,   643,   131,   643,
     124,   131,    -1,   643,    77,   643,   124,    77,    -1,     3,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,    20,
      -1,    18,    -1,    10,    -1,    12,    -1,    16,    -1,    50,
      -1,   241,    -1,   157,    -1,   258,    -1,   107,    -1,   136,
      -1,   274,    -1,   240,    -1,   159,    -1,   271,    -1,    73,
      -1,   108,    -1,   252,    -1,   155,    -1,   253,    -1,   125,
      -1,   119,    -1,    96,    -1,   101,    -1,    68,    -1,   211,
      -1,   165,    -1,   162,    -1,    70,    -1,   194,    -1,   129,
      -1,    69,    -1,   142,    -1,   127,    -1,   195,    -1,   150,
      -1,   140,    -1,    54,    -1,   218,    -1,   209,    -1,   126,
      -1,   220,    -1,    59,    -1,   118,    -1,   217,    -1,   219,
      -1,    51,    -1,   197,    -1,   198,    -1,    63,    -1,   141,
      -1,   148,    -1,   179,    -1,   181,    -1,   163,    -1,   177,
      -1,   215,    -1,   153,    -1,   196,    -1,   137,    -1,    76,
      -1,   190,    -1,   266,    -1,   193,    -1,   113,    -1,   201,
      -1,   164,    -1,   261,    -1,    78,    -1,   134,    -1,   207,
      -1,    74,    -1,   210,    -1,   192,    -1,   152,    -1,   160,
      -1,   270,    -1,   249,    -1,    62,    -1,   132,    -1,   114,
      -1,    66,    -1,   117,    -1,   251,    -1,   239,    -1,   116,
      -1,    82,    -1,   262,    -1,    61,    -1,   260,    -1,   122,
      -1,   158,    -1,    40,    -1,   106,    -1,   281,    -1,   275,
      -1,   277,    -1,   202,    -1,   139,    -1,   213,    -1,   431,
      -1,   432,    -1,   433,    -1,   429,    -1,   430,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    17,
      -1,   435,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,     8,    -1,   645,    -1,   108,   202,     3,
      -1,   108,   202,   156,   281,     3,    -1,   108,   139,     3,
      -1,   108,   139,   156,   281,     3,    -1,   646,    -1,    68,
       3,   431,   432,    -1,    68,     3,   431,   647,   432,    -1,
     648,    -1,   647,   433,   648,    -1,     5,    -1,     4,    -1,
       7,    -1,   193,    -1,     6,    -1,     3,    -1,     8,    -1,
     649,    -1,    73,   219,     3,   650,   651,   197,     3,   140,
     118,   217,    60,   643,   124,    -1,    73,   219,     3,   650,
     651,   197,   404,   396,     3,   140,   118,   217,    60,   643,
     124,    -1,    59,    -1,    39,    -1,   157,    -1,   258,    -1,
     107,    -1,   398,    -1,   652,    -1,   108,   219,     3,    -1,
     108,   219,   156,   281,     3,    -1,    37,   219,     3,   120,
      -1,    37,   219,     3,   100,    -1,   653,    -1,    73,   371,
     609,     3,   654,    -1,    -1,   654,   655,    -1,   376,   277,
       5,    -1,   376,     5,    -1,   377,    63,     5,    -1,   377,
       5,    -1,   378,     5,    -1,   184,     5,    -1,   379,    -1,
      18,   379,    -1,   656,    -1,   108,   371,     3,    -1,   108,
     371,   156,   281,     3,    -1,    37,   371,     3,   654,    -1,
      37,   371,     3,    55,    -1,    37,   371,     3,    55,   277,
       5,    -1,    37,   371,     3,   208,   245,     3,    -1,    -1,
     212,    28,    -1,   212,   658,    -1,     3,    -1,   658,   433,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   515,   515,   516,   521,   528,   529,   530,   544,   545,
     573,   581,   589,   595,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   628,   628,   637,   637,   639,   639,
     641,   641,   646,   648,   652,   653,   654,   655,   656,   659,
     660,   663,   672,   690,   699,   719,   719,   779,   788,   795,
     799,   801,   803,   808,   813,   818,   826,   828,   830,   832,
     834,   836,   838,   840,   842,   844,   851,   862,   873,   874,
     877,   877,   878,   878,   879,   879,   887,   887,   895,   895,
     906,   910,   911,   912,   913,   914,   915,   916,   917,   921,
     921,   923,   923,   925,   925,   928,   928,   930,   930,   932,
     932,   934,   934,   936,   936,   938,   938,   941,   941,   943,
     943,   945,   945,   947,   947,   949,   949,   951,   951,   953,
     953,   955,   955,   958,   958,   960,   960,   962,   962,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1033,  1035,  1036,  1037,  1038,  1039,
    1041,  1042,  1044,  1045,  1046,  1048,  1049,  1050,  1051,  1058,
    1065,  1072,  1076,  1080,  1084,  1088,  1092,  1098,  1099,  1100,
    1103,  1109,  1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,
    1124,  1127,  1129,  1131,  1133,  1137,  1145,  1156,  1157,  1160,
    1161,  1164,  1172,  1180,  1188,  1202,  1212,  1213,  1227,  1243,
    1244,  1245,  1246,  1249,  1256,  1264,  1265,  1266,  1269,  1270,
    1273,  1274,  1278,  1279,  1282,  1284,  1288,  1289,  1292,  1294,
    1298,  1299,  1302,  1303,  1306,  1312,  1319,  1328,  1329,  1330,
    1331,  1341,  1342,  1346,  1347,  1348,  1349,  1350,  1353,  1354,
    1357,  1358,  1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,
    1369,  1372,  1373,  1374,  1382,  1388,  1389,  1390,  1393,  1394,
    1397,  1398,  1402,  1410,  1420,  1421,  1422,  1431,  1436,  1442,
    1450,  1454,  1454,  1494,  1495,  1499,  1501,  1503,  1505,  1507,
    1511,  1512,  1513,  1516,  1517,  1520,  1521,  1524,  1525,  1526,
    1529,  1530,  1533,  1534,  1538,  1540,  1542,  1544,  1547,  1548,
    1551,  1552,  1555,  1559,  1569,  1577,  1578,  1579,  1580,  1584,
    1588,  1590,  1594,  1594,  1596,  1601,  1608,  1615,  1627,  1628,
    1629,  1633,  1640,  1647,  1655,  1665,  1673,  1683,  1691,  1700,
    1709,  1719,  1727,  1736,  1745,  1755,  1764,  1781,  1789,  1801,
    1802,  1816,  1817,  1820,  1821,  1833,  1843,  1848,  1853,  1859,
    1866,  1873,  1880,  1890,  1897,  1906,  1913,  1919,  1927,  1933,
    1941,  1942,  1943,  1944,  1945,  1961,  1962,  1963,  1972,  1973,
    1977,  1987,  2003,  2004,  2008,  2016,  2025,  2048,  2049,  2050,
    2054,  2071,  2093,  2094,  2099,  2108,  2122,  2131,  2157,  2158,
    2159,  2160,  2161,  2162,  2163,  2167,  2174,  2186,  2189,  2190,
    2194,  2195,  2199,  2201,  2206,  2214,  2223,  2235,  2247,  2262,
    2263,  2268,  2282,  2292,  2306,  2320,  2328,  2339,  2345,  2356,
    2362,  2369,  2375,  2397,  2398,  2399,  2400,  2404,  2413,  2430,
    2438,  2449,  2460,  2480,  2481,  2482,  2486,  2496,  2509,  2518,
    2530,  2538,  2549,  2556,  2565,  2573,  2579,  2594,  2596,  2600,
    2609,  2622,  2624,  2628,  2633,  2640,  2645,  2653,  2657,  2658,
    2662,  2674,  2685,  2686,  2687,  2691,  2692,  2693,  2694,  2695,
    2696,  2699,  2701,  2705,  2706,  2709,  2711,  2714,  2716,  2720,
    2727,  2736,  2742,  2748,  2755,  2761,  2768,  2774,  2780,  2786,
    2792,  2798,  2804,  2810,  2816,  2822,  2828,  2834,  2840,  2846,
    2852,  2858,  2871,  2881,  2891,  2901,  2907,  2915,  2916,  2917,
    2920,  2928,  2934,  2947,  2948,  2948,  2952,  2953,  2956,  2957,
    2958,  2962,  2963,  2963,  2967,  2975,  2985,  2986,  2987,  2988,
    2989,  2992,  2992,  2995,  2996,  2999,  3009,  3022,  3023,  3023,
    3026,  3027,  3028,  3029,  3032,  3036,  3037,  3038,  3039,  3045,
    3048,  3054,  3059,  3065,  3069,  3069,  3074,  3075,  3077,  3078,
    3082,  3083,  3087,  3088,  3089,  3092,  3093,  3094,  3095,  3099,
    3100,  3104,  3105,  3106,  3107,  3108,  3109,  3110,  3111,  3115,
    3123,  3132,  3133,  3134,  3138,  3149,  3161,  3172,  3187,  3192,
    3196,  3197,  3201,  3203,  3205,  3207,  3211,  3212,  3218,  3222,
    3224,  3226,  3228,  3230,  3235,  3239,  3240,  3244,  3253,  3266,
    3267,  3275,  3283,  3291,  3292,  3293,  3294,  3295,  3296,  3298,
    3300,  3305,  3310,  3314,  3315,  3318,  3333,  3340,  3355,  3368,
    3383,  3396,  3397,  3398,  3401,  3402,  3405,  3406,  3407,  3408,
    3409,  3410,  3411,  3412,  3413,  3415,  3417,  3419,  3421,  3423,
    3427,  3428,  3431,  3432,  3435,  3436,  3439,  3440,  3441,  3442,
    3443,  3444,  3445,  3446,  3447,  3448,  3449,  3450,  3451,  3452,
    3453,  3454,  3455,  3456,  3459,  3460,  3463,  3463,  3473,  3474,
    3475,  3476,  3477,  3478,  3479,  3480,  3481,  3482,  3483,  3484,
    3491,  3492,  3493,  3494,  3495,  3496,  3497,  3498,  3499,  3500,
    3501,  3502,  3503,  3504,  3505,  3506,  3507,  3508,  3509,  3510,
    3511,  3514,  3515,  3516,  3519,  3520,  3523,  3524,  3525,  3528,
    3529,  3530,  3534,  3535,  3536,  3537,  3538,  3539,  3540,  3541,
    3542,  3543,  3544,  3545,  3546,  3547,  3548,  3549,  3550,  3551,
    3552,  3553,  3554,  3555,  3556,  3557,  3558,  3559,  3560,  3561,
    3562,  3563,  3564,  3565,  3566,  3567,  3568,  3571,  3572,  3575,
    3588,  3589,  3590,  3594,  3597,  3598,  3599,  3600,  3600,  3602,
    3603,  3611,  3615,  3621,  3627,  3634,  3641,  3647,  3653,  3660,
    3669,  3670,  3673,  3674,  3677,  3678,  3679,  3680,  3683,  3684,
    3685,  3686,  3687,  3688,  3689,  3690,  3691,  3692,  3699,  3700,
    3701,  3702,  3703,  3704,  3705,  3706,  3709,  3710,  3711,  3711,
    3711,  3712,  3712,  3712,  3712,  3712,  3712,  3713,  3713,  3713,
    3713,  3713,  3713,  3713,  3713,  3713,  3714,  3714,  3714,  3714,
    3714,  3714,  3714,  3715,  3715,  3715,  3715,  3716,  3716,  3716,
    3716,  3716,  3716,  3716,  3716,  3716,  3716,  3716,  3716,  3717,
    3717,  3717,  3717,  3717,  3717,  3717,  3717,  3718,  3718,  3718,
    3718,  3718,  3718,  3718,  3718,  3719,  3719,  3719,  3719,  3719,
    3719,  3719,  3719,  3719,  3720,  3720,  3720,  3720,  3720,  3720,
    3720,  3720,  3721,  3721,  3721,  3722,  3722,  3722,  3722,  3722,
    3722,  3722,  3722,  3723,  3723,  3723,  3723,  3723,  3723,  3723,
    3724,  3724,  3724,  3724,  3724,  3724,  3724,  3725,  3725,  3725,
    3725,  3726,  3726,  3726,  3726,  3726,  3726,  3726,  3726,  3726,
    3726,  3726,  3726,  3727,  3727,  3727,  3727,  3727,  3728,  3735,
    3739,  3745,  3751,  3757,  3769,  3773,  3779,  3787,  3788,  3791,
    3792,  3793,  3794,  3795,  3796,  3797,  3804,  3808,  3814,  3830,
    3831,  3834,  3835,  3836,  3837,  3840,  3844,  3850,  3859,  3867,
    3878,  3882,  3891,  3892,  3896,  3897,  3898,  3899,  3900,  3901,
    3902,  3903,  3906,  3910,  3916,  3926,  3933,  3940,  3948,  3958,
    3959,  3960,  3963,  3964
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
  "TRANSACTION", "FEVO_CURRENT_XID", "SYSTEM", "VERSIONING",
  "SUBSCRIPTION", "CHANNEL", "RESUME", "ACK", "UPTO", "TTL", "TTL_COLUMN",
  "FTOKEN_LENGTH", "FPG_CALL_EXTERNAL", "JOB", "JOBS", "SCHEDULE", "';'",
  "'.'", "'('", "')'", "','", "']'", "'='", "$accept", "stmt_list", "expr",
  "@1", "@2", "@3", "@4", "val_list", "array_val_list", "@5",
  "any_array_arg", "opt_val_list", "@6", "@7", "@8", "@9", "@10", "@11",
  "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20", "@21",
  "@22", "@23", "@24", "@25", "@26", "@27", "@28", "@29", "@30",
  "trim_ltb", "interval_exp", "case_list", "stmt", "select_stmt",
  "opt_where", "opt_groupby", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "opt_having", "opt_window_partition",
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
  "notify_stmt", "create_subscription_stmt", "drop_subscription_stmt",
  "resume_subscription_stmt", "ack_subscription_stmt", "create_job_stmt",
  "drop_job_stmt", "alter_job_stmt", "reclaim_table_stmt",
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
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,    59,
      46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   436,   437,   437,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   439,   438,   440,   438,   441,   438,
     442,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   443,   443,   444,   444,   445,   438,   438,   438,   446,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   447,   447,
     448,   438,   449,   438,   450,   438,   451,   438,   452,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   453,
     438,   454,   438,   455,   438,   456,   438,   457,   438,   458,
     438,   459,   438,   460,   438,   461,   438,   462,   438,   463,
     438,   464,   438,   465,   438,   466,   438,   467,   438,   468,
     438,   469,   438,   470,   438,   471,   438,   472,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   473,   473,   473,
     438,   438,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   438,   438,   438,   438,   475,   475,   438,   438,   438,
     438,   438,   438,   438,   438,   476,   477,   477,   477,   478,
     478,   479,   479,   480,   480,   481,   481,   481,   482,   482,
     483,   483,   484,   484,   485,   485,   486,   486,   487,   487,
     488,   488,   489,   489,   490,   490,   490,   491,   491,   491,
     491,   492,   492,   493,   493,   493,   493,   493,   494,   494,
     495,   495,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   497,   497,   497,   498,   499,   499,   499,   500,   500,
     501,   501,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   504,   503,   505,   505,   506,   506,   506,   506,   506,
     507,   507,   507,   508,   508,   509,   509,   510,   510,   510,
     511,   511,   512,   512,   513,   513,   513,   513,   514,   514,
     515,   515,   516,   476,   517,   518,   518,   518,   518,   517,
     519,   519,   520,   520,   517,   476,   521,   521,   522,   522,
     522,   476,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   524,
     524,   525,   525,   526,   526,   527,   528,   528,   528,   529,
     529,   529,   529,   476,   530,   476,   531,   531,   532,   532,
     533,   533,   533,   533,   533,   476,   476,   476,   476,   476,
     534,   534,   535,   535,   536,   536,   536,   476,   476,   476,
     537,   537,   538,   538,   539,   539,   540,   540,   476,   476,
     476,   476,   476,   476,   476,   541,   541,   542,   543,   543,
     544,   544,   545,   545,   546,   546,   546,   547,   547,   548,
     548,   549,   550,   550,   551,   552,   552,   553,   553,   554,
     554,   555,   555,   476,   476,   476,   476,   556,   556,   557,
     557,   558,   559,   476,   476,   476,   560,   560,   561,   561,
     562,   562,   476,   563,   476,   564,   564,   565,   565,   565,
     566,   567,   567,   567,   567,   568,   568,   476,   476,   476,
     569,   569,   570,   570,   570,   571,   571,   571,   571,   571,
     571,   572,   572,   573,   573,   574,   574,   575,   575,   576,
     576,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   578,   578,   578,
     476,   579,   579,   580,   581,   580,   582,   582,   583,   583,
     583,   584,   585,   584,   586,   586,   587,   587,   587,   587,
     587,   588,   588,   589,   589,   590,   590,   591,   592,   591,
     593,   593,   593,   593,   579,   594,   594,   594,   594,   476,
     595,   595,   595,   476,   597,   596,   598,   598,   599,   599,
     600,   600,   601,   601,   601,   602,   602,   602,   602,   603,
     603,   604,   604,   604,   604,   604,   604,   604,   604,   476,
     605,   606,   606,   606,   607,   607,   607,   607,   476,   476,
     608,   608,   476,   476,   476,   476,   609,   609,   476,   610,
     610,   610,   610,   610,   476,   611,   611,   476,   612,   613,
     613,   612,   612,   614,   614,   614,   614,   614,   614,   614,
     614,   614,   614,   615,   615,   616,   616,   612,   612,   612,
     612,   617,   617,   617,   618,   618,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     620,   620,   621,   621,   622,   622,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   624,   624,   625,   619,   626,   626,
     626,   626,   626,   626,   626,   626,   626,   626,   626,   626,
     626,   626,   626,   626,   626,   626,   626,   626,   626,   626,
     626,   626,   626,   626,   626,   626,   626,   626,   626,   626,
     626,   627,   627,   627,   628,   628,   629,   629,   629,   630,
     630,   630,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   632,   632,   633,
     634,   634,   634,   476,   635,   635,   635,   636,   636,   637,
     637,   476,   638,   638,   638,   638,   638,   638,   638,   638,
     639,   639,   640,   640,   641,   641,   641,   641,   642,   642,
     642,   642,   642,   642,   642,   642,   642,   642,   643,   643,
     643,   643,   643,   643,   643,   643,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   476,
     645,   645,   645,   645,   476,   646,   646,   647,   647,   648,
     648,   648,   648,   648,   648,   648,   476,   649,   649,   650,
     650,   651,   651,   651,   651,   476,   652,   652,   476,   476,
     476,   653,   654,   654,   655,   655,   655,   655,   655,   655,
     655,   655,   476,   656,   656,   476,   476,   476,   476,   657,
     657,   657,   658,   658
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
       6,     6,     8,     4,     7,     6,     4,     4,     4,     4,
       6,     6,     8,     6,     6,     6,     8,     8,     4,     6,
       6,     6,     4,     4,     4,     6,     4,     6,     4,     6,
       3,     4,     4,     4,     3,     3,     6,     4,     4,     4,
       4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
       4,     4,     8,     8,     8,     6,     6,     8,     8,     6,
      10,     4,     6,     8,     4,     4,     4,     6,     8,     3,
       6,     6,     6,     6,     8,     3,     8,    10,     3,     3,
       3,     3,     3,     1,     1,     4,     6,     1,     1,     1,
       6,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     6,     3,     5,     4,     5,     3,     4,     3,
       4,     1,     1,     1,     1,     1,     3,    13,    12,     0,
       2,     0,     4,     2,     4,     0,     1,     1,     0,     2,
       0,     2,     0,     3,     1,     3,     0,     3,     2,     4,
       0,     3,     1,     3,     2,     4,     2,     0,     2,     4,
       4,     0,     6,     0,     2,     2,     4,     4,     0,     2,
       1,     3,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     2,     2,     1,     0,     1,     3,
       1,     1,     3,     4,     5,     3,     3,     4,     6,     9,
       3,     0,     5,     1,     0,     5,     3,     5,     6,     5,
       0,     1,     1,     0,     1,     1,     1,     2,     2,     0,
       0,     1,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     1,     8,     2,     2,     2,     0,     6,
       2,     4,     0,     2,     7,     1,     4,     6,     0,     1,
       1,     1,     8,     9,    10,     9,    11,    10,    12,    11,
      13,     9,    11,    10,    12,    11,    12,    12,    14,     0,
       1,     0,     4,     1,     3,     3,     1,     3,     1,     4,
       4,     4,     6,     1,     3,     2,     3,     5,     1,     3,
       0,     2,     2,     3,     3,     1,     1,     1,     1,     1,
       5,     7,     0,     6,     4,     5,     6,     1,     1,     1,
      20,    21,     1,     1,     6,     8,     6,     8,     1,     1,
       1,     1,     1,     1,     1,     6,     8,     0,     0,     4,
       1,     3,     3,     3,     4,     5,     6,    12,    14,     1,
       1,    12,     6,     8,    12,     5,     7,     2,     3,     2,
       2,     2,     4,     1,     1,     1,     1,     6,     8,     3,
       5,     3,     5,     1,     1,     1,     8,    10,     3,     5,
       4,     4,     1,     3,     1,     4,     6,     0,     4,     4,
       2,     0,     4,     7,     4,     1,     3,     1,     1,     1,
      10,    12,     0,     2,     2,     0,     2,     2,     2,     2,
       2,     0,     2,     1,     3,     0,     4,     0,     5,     5,
       7,    10,    10,    17,    12,    19,    11,     6,     8,     6,
       6,     6,     9,     6,     5,     8,     7,     9,     8,    10,
       9,     7,     7,     8,     8,     7,     5,     0,     1,     2,
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
       7,     4,     7,     1,     3,     9,     9,     9,     6,    11,
       8,     0,     1,     2,     1,     3,     5,     7,     4,     4,
       5,     5,     4,     6,    11,    13,    13,    15,     4,     6,
       1,     3,     1,     3,     1,     3,     0,     4,     5,     4,
       5,     4,     5,     4,     5,     4,     4,     3,     3,     3,
       2,     3,     4,     4,     1,     3,     0,     4,     0,     3,
       2,     3,     3,     3,     3,     5,     5,     5,     3,     5,
       2,     7,     5,     7,     5,     2,     3,     2,     3,     2,
       3,     5,     4,     5,     7,     8,     8,     7,     6,     6,
       5,     0,     3,     5,     0,     1,     0,     2,     2,     0,
       4,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     5,
       2,     4,     1,     1,     1,     1,     3,     3,     3,     3,
       5,     5,     1,     1,     1,     4,     3,     1,     3,     3,
       0,     1,     1,     1,     3,     3,     2,     1,     3,     3,
       3,     1,    10,     9,    12,    11,    12,    11,    14,    13,
       0,     1,     1,     3,     2,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       4,     5,     5,     5,     5,     5,     1,     1,     1,     1,
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
       3,     5,     3,     5,     1,     4,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,    13,    15,     1,
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
       0,     0,     0,     0,   691,     0,   368,     0,   586,     0,
       0,     0,     0,     0,   586,     0,   302,     0,   641,     0,
       0,     0,     0,     0,     0,     0,   255,   363,   375,   381,
     413,   420,   428,   429,   437,   438,   439,   448,   449,   450,
     451,   452,   453,   454,   425,   426,   427,   483,   484,   485,
     486,   493,   494,   495,   502,   504,     0,   518,   519,   517,
     570,   609,   613,   639,   649,   658,   664,   667,   823,   831,
     989,   994,  1006,  1015,  1020,  1032,     0,     0,     0,     0,
       0,   510,     0,     0,   656,     0,     0,     0,     0,     0,
       0,     0,   656,   692,     0,     0,   656,     0,     0,     0,
       0,     0,   614,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   592,   477,   481,
     479,   480,     0,     0,   592,     0,     0,   826,   827,     0,
       0,     0,     0,   665,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,   415,   507,     0,
       0,  1022,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   693,     0,
       0,     0,     0,     0,     0,     0,     0,   656,   616,   372,
       0,   367,   365,   366,     0,   652,     0,   992,     0,   414,
     990,     0,  1016,     0,     0,   654,     0,   378,     0,  1033,
       0,     0,     0,   489,     0,   498,     0,   588,   589,   590,
     591,   587,     0,   478,     0,   503,     0,     0,     0,     0,
     824,   825,     0,     4,     9,    10,    12,    11,     8,     0,
       0,     0,   313,   303,   251,     0,   252,   253,     0,   304,
     305,   306,     0,    13,   254,   308,   310,   309,   307,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   317,   256,
     311,   416,   643,   642,   317,     0,     0,     0,     0,     0,
     318,   320,   334,   321,   334,   666,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   491,     0,     3,     0,     0,
     421,   422,     0,     0,   511,  1019,  1018,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1036,     0,  1035,     0,
     501,   500,  1004,  1000,   999,  1003,  1001,  1005,  1002,   995,
       0,   997,     0,     0,   657,   650,     0,     0,   840,     0,
       0,     0,     0,   840,  1010,  1009,     0,     0,   651,     0,
       0,     0,  1022,   432,     0,   457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   370,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   379,   380,   376,     0,
       0,   434,     0,   464,     0,     0,     0,   593,   482,     0,
     593,   830,   829,   828,     0,    78,     0,    32,    31,    20,
       0,     0,     0,     0,     0,    55,    88,     0,     0,     0,
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
       0,     0,   316,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   314,
       0,     0,     0,     0,     0,   357,   331,   317,     0,     0,
       0,     0,     0,   342,   341,   345,   349,   346,     0,     0,
     343,   333,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   424,   423,     0,   507,     0,     0,
     505,     0,     0,     0,     0,     0,     0,   554,     0,     0,
     566,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1030,  1023,     0,
       0,   996,     0,     0,     0,   803,   812,   771,   771,   771,
     771,   771,   796,   771,   793,     0,   771,   771,   771,   774,
     805,   774,   804,   771,   771,   771,     0,   774,   771,   774,
     795,   802,   794,   813,   814,     0,     0,     0,   797,   659,
       0,     0,     0,     0,     0,     0,   841,   842,     0,     0,
       0,     0,     0,  1013,  1011,  1012,  1014,     0,   522,     0,
       0,     0,     0,     0,  1021,     0,   430,     0,   458,     0,
       0,     0,     0,     0,   820,   618,     0,   620,   621,     0,
     373,     0,   280,     0,   259,   372,   653,   993,   991,  1017,
     539,     0,   655,   378,  1034,   435,     0,   465,     0,   490,
     499,     0,     0,     0,   648,     0,     0,     5,    51,    79,
       0,    48,     0,     0,   243,     0,     0,     6,     0,    57,
       0,     0,     0,   229,   227,   228,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   170,     0,     0,     0,   174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   219,   220,   221,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   209,     0,     0,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,    21,    23,    24,    22,   249,   247,    46,     0,    44,
     215,    80,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    33,    74,    73,    25,    26,    28,    14,    15,    16,
      17,    18,    19,    27,    30,    29,     0,   315,   291,     0,
     312,   418,   417,   317,     0,     0,     0,   322,     0,   357,
       0,   362,   330,     0,   259,   319,   343,   343,     0,   336,
       0,   344,     0,   326,   325,     0,     0,     0,     0,     0,
       0,     0,   475,     0,   492,     0,   511,     0,     0,     0,
       0,     0,     0,   550,     0,   547,   553,   549,     0,   738,
       0,     0,     0,     0,     0,   551,  1037,  1038,  1031,  1029,
    1025,     0,  1027,     0,  1028,     0,     0,   998,   840,   840,
       0,   800,   776,   782,   779,   776,   776,     0,   776,   776,
     776,   775,   779,   779,   776,   776,   776,     0,   779,   776,
     779,     0,     0,     0,     0,     0,     0,     0,     0,   844,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   525,     0,     0,     0,     0,     0,     0,
     432,     0,   455,   457,   487,     0,     0,     0,   821,   822,
       0,     0,   736,   688,   334,   617,     0,   622,   623,   624,
     625,   260,     0,   287,   259,   369,   371,     0,   377,   436,
     466,     0,   573,   595,     0,     0,   572,   573,     0,   573,
       0,    90,     0,   241,     0,     0,     0,     0,    53,     0,
       0,     0,     0,   143,     0,     0,     0,     0,     0,   177,
     178,   179,   180,   181,   182,     0,     0,     0,     0,   158,
       0,     0,     0,   162,   163,   164,   166,     0,     0,   168,
       0,   171,   172,   173,     0,     0,     0,     0,     0,     0,
      97,    91,    92,    93,    94,    95,    96,   146,   147,   148,
       0,     0,     0,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   184,   185,   186,   187,
     188,   189,   190,   191,     0,     0,     0,     0,     0,     0,
       0,     0,   201,     0,   204,   205,   206,     0,    60,     0,
      62,     0,     0,     0,     0,     0,    70,    71,    72,     0,
       0,     0,   149,     0,    47,    45,     0,     0,   250,   248,
      82,     0,     0,    40,    36,    38,     0,    58,     0,   259,
       0,     0,   357,   359,   359,   359,     0,   323,   327,     0,
       0,     0,   280,   347,   348,     0,     0,   350,     0,     0,
       0,   444,   446,     0,     0,     0,     0,   472,   508,   509,
     506,     0,     0,     0,     0,     0,     0,   738,   738,     0,
     562,   561,   567,   738,   556,     0,     0,   565,  1024,  1026,
       0,     0,     0,     0,     0,   788,   798,   790,   792,   817,
       0,   791,   787,   786,   809,   808,   785,   789,   784,     0,
     806,   783,   807,     0,     0,     0,   661,   816,     0,   660,
       0,   845,   847,   846,     0,   843,     0,     0,   406,     0,
       0,     0,     0,     0,   408,     0,     0,     0,     0,     0,
     858,     0,     0,   523,   524,     0,   531,   522,     0,     0,
       0,     0,     0,     0,   431,     0,   458,     0,     0,     0,
       0,   820,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   694,     0,     0,   619,   638,     0,     0,   634,     0,
       0,     0,     0,   615,   626,   629,     0,     0,  1039,   374,
     540,     0,     0,     0,   604,   594,     0,     0,   573,   611,
     573,   612,    52,   245,     0,   244,     0,     0,     0,    56,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,   101,   103,     0,     0,
       0,     0,     0,   135,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    59,     0,     0,     0,     0,     0,     0,
     261,   259,   419,   324,     0,     0,     0,     0,   332,     0,
     644,     0,     0,   287,   339,   337,     0,     0,   335,   351,
       0,   442,   443,     0,     0,     0,     0,     0,   469,   470,
       0,     0,   476,     0,   515,   514,   512,     0,     0,     0,
       0,   567,   567,   738,     0,     0,   750,     0,   755,     0,
       0,     0,     0,     0,   568,   759,   740,     0,   757,   558,
     567,   548,   555,   564,   563,     0,     0,   772,     0,   777,
     778,     0,     0,   779,     0,   779,   779,   801,   815,     0,
       0,     0,   852,   855,   854,   856,   853,   848,   849,   851,
     857,   850,     0,     0,     0,     0,     0,     0,     0,   382,
       0,     0,     0,     0,     0,     0,   858,     0,     0,     0,
     526,   530,   528,   527,   529,     0,   535,   525,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   460,   456,
     488,   496,     0,     0,   736,   690,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   673,   736,     0,   819,   633,
     631,   632,   635,   636,   637,     0,     0,     0,   265,   265,
     281,   282,   288,     0,   364,   606,   605,     0,     0,   596,
     601,   600,     0,   598,   576,   610,   242,   246,     0,    54,
       0,   141,   140,     0,   145,     0,     0,   230,   231,   176,
     154,   155,     0,     0,   159,   160,   161,   165,   167,   169,
     210,   211,   212,   213,     0,    98,   107,   109,   105,   111,
     113,   115,   151,     0,     0,   153,   226,   272,   272,   272,
     117,     0,     0,   125,     0,     0,   133,   272,   272,   183,
       0,     0,     0,   195,   196,     0,     0,   199,     0,   202,
       0,   207,     0,    61,    63,    66,    67,    68,    69,     0,
       0,     0,   150,    81,    85,     0,     0,    50,     0,     0,
      42,     0,    43,    35,     0,     0,   270,   261,   358,     0,
       0,     0,   328,     0,     0,     0,  1039,   352,     0,   338,
       0,     0,   445,   447,     0,     0,     0,   473,     0,     0,
       0,     0,     0,   734,     0,   552,   560,   567,   739,   569,
       0,     0,     0,     0,     0,     0,   760,   741,   742,   744,
     743,   748,     0,     0,     0,     0,   758,   756,   557,     0,
       0,   858,     0,     0,   781,   810,   818,   811,   799,     0,
     662,   383,     0,   858,     0,   399,     0,     0,     0,     0,
     407,     0,   391,     0,     0,     0,     0,     0,   866,   867,
     868,   870,   869,   988,   873,   874,   875,   981,   872,   871,
     976,   977,   978,   979,   980,   963,   876,   917,   908,   913,
     858,   959,   949,   920,   952,   895,   902,   899,   886,   942,
     931,   858,   939,   957,   893,   894,   964,   880,   887,   935,
     951,   956,   953,   914,   892,   961,   833,   891,   911,   904,
     901,   858,   950,   940,   881,   930,   969,   907,   921,   903,
     922,   906,   945,   928,   889,   858,   878,   962,   884,   946,
     898,   925,   937,   897,   858,   926,   923,   924,   932,   944,
     934,   900,   905,   929,   918,   919,   936,   968,   941,   910,
     943,   896,   970,   927,   915,   909,   916,   912,   955,   883,
     877,   948,   954,   888,   890,   879,   960,   938,   958,   933,
     947,   885,   882,   966,   858,   967,   965,   983,   984,   985,
     986,   987,   974,   975,   971,   972,   973,   982,   859,     0,
       0,   533,   532,     0,   537,   531,     0,   385,     0,     0,
       0,     0,     0,     0,     0,     0,   459,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   300,
       0,     0,     0,     0,   669,   687,   695,   738,     0,   628,
     630,   266,   267,     0,   284,   286,     0,     0,     0,  1042,
    1040,  1041,   574,     0,   597,     0,     0,     0,  1039,     0,
       0,     0,   144,   233,   234,   235,   236,   239,   238,   240,
     232,   237,     0,     0,     0,   272,   272,   272,   272,   272,
     272,     0,     0,     0,   276,   276,   276,   272,     0,     0,
       0,   272,     0,     0,     0,   272,   276,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      87,    41,    37,    39,     0,     0,     0,   280,   270,   360,
       0,     0,     0,     0,   645,   646,     0,   640,     0,     0,
       0,     0,     0,     0,   516,     0,   541,   712,     0,   710,
       0,   542,     0,   559,     0,     0,     0,     0,     0,     0,
     762,     0,     0,     0,     0,     0,     0,   858,     0,   773,
     780,     0,   858,     0,   387,   400,     0,   409,   410,   411,
       0,     0,     0,     0,     0,   384,   832,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   520,   535,
       0,     0,   393,     0,     0,     0,   433,   462,   463,   461,
     497,     0,   673,     0,     0,     0,     0,   702,     0,     0,
       0,   699,     0,   698,     0,   708,     0,     0,     0,     0,
       0,     0,   668,   737,   627,   265,   283,   290,   289,     0,
       0,   608,   607,   603,   602,     0,   578,   571,     7,   142,
     139,   156,   157,   214,   276,   276,   276,   276,   276,   276,
     216,     0,   152,     0,     0,     0,     0,     0,   276,   119,
       0,     0,   276,   127,     0,     0,   276,     0,     0,   192,
     193,   194,   197,   198,     0,   203,   208,     0,     0,     0,
       0,   265,   268,   271,   287,   280,   356,     0,   355,   354,
       0,     0,   353,     0,     0,     0,     0,     0,   513,     0,
       0,     0,   546,     0,   735,   752,     0,   770,   754,     0,
       0,     0,   763,   761,   745,   746,   747,   749,     0,   858,
       0,   835,   663,     0,   837,   401,     0,   395,   392,     0,
     399,   860,     0,     0,     0,     0,     0,   858,     0,   534,
       0,     0,   537,   389,     0,     0,     0,   386,     0,   671,
     689,     0,     0,     0,     0,     0,   700,   701,   301,   696,
     675,     0,     0,     0,     0,     0,     0,     0,   285,  1043,
       0,   575,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,   273,     0,   100,   102,   104,     0,   272,
       0,     0,     0,   272,     0,     0,     0,   136,   138,     0,
       0,     0,     0,   292,   263,     0,     0,   262,   293,   287,
     361,   329,   647,     0,     0,     0,     0,     0,   544,     0,
     713,   711,     0,   768,   769,     0,     0,     0,   858,     0,
     834,   836,     0,   397,   412,   388,     0,   865,   864,   861,
     863,   862,     0,     0,   536,     0,   521,   396,   394,     0,
       0,   703,     0,     0,   709,     0,   674,     0,     0,     0,
       0,     0,   681,     0,     0,     0,     0,   599,     0,     0,
     577,   108,   110,   106,   112,   114,   116,   217,     0,   265,
     277,   118,   276,   121,   123,   126,   276,   129,   131,   134,
     200,    75,     0,     0,   269,   265,     0,   298,   258,     0,
       0,   474,   467,     0,   471,     0,   751,   753,   767,   764,
       0,   839,     0,   401,  1007,   858,     0,   390,     0,     0,
     697,     0,   670,   676,   677,     0,     0,     0,     0,   584,
       0,   579,     0,   581,   582,   275,   278,     0,     0,   272,
     272,     0,   272,   272,     0,     0,   264,   295,   294,     0,
     257,     0,     0,     0,     0,   765,   766,   838,     0,     0,
     403,   398,     0,   538,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   580,     0,   265,   120,   276,   276,   128,
     276,   276,    76,    77,     0,     0,   299,     0,     0,   468,
     714,     0,     0,   402,     0,  1008,     0,     0,     0,     0,
       0,     0,   682,   680,   585,     0,   279,     0,     0,     0,
       0,   297,   296,     0,     0,   716,     0,   405,   404,     0,
       0,     0,     0,   716,     0,     0,   583,   122,   124,   130,
     132,     0,     0,   543,   715,     0,     0,     0,     0,   704,
       0,     0,   683,   678,     0,     0,     0,   730,     0,     0,
     672,     0,   716,   716,     0,     0,   679,     0,     0,     0,
     731,   545,     0,   727,   729,   728,     0,     0,     0,   706,
     705,     0,   684,     0,     0,   732,   733,   717,   725,   719,
       0,   721,   726,   723,     0,   716,     0,   440,     0,   720,
     718,   724,   722,   707,     0,   441,     0,     0,     0,     0,
       0,     0,   685,   686
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,   808,  1256,  1504,  1506,  1502,   809,  1139,   820,
    1505,   810,  1246,  1498,  1247,  1499,   821,  1727,  1728,  1729,
    2067,  2065,  2066,  2068,  2069,  2070,  2077,  2379,  2529,  2530,
    2081,  2383,  2532,  2533,  2085,  1737,  1738,   827,  1436,   492,
      25,    26,   782,  1776,  2272,  2034,  2397,  2107,  2074,  2373,
    2245,  2470,  1113,  1670,  1671,  1408,  1259,  2487,  2540,  2020,
     129,   359,   360,   629,   369,   370,   371,   372,   978,   652,
     373,   649,   992,   650,   988,  1528,  1529,   977,  1515,  2110,
     374,    27,   103,   184,   455,    28,   468,    29,  2156,  2423,
    2549,  2550,  1353,  1354,    30,    31,   972,   147,    32,   766,
      33,    34,  1533,    35,    36,    37,   768,  1092,  1637,  1638,
      38,    39,  1540,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   394,
      56,   670,  1545,    57,  1083,  1366,  1626,  1992,  1994,  2178,
      58,    59,  1569,    60,  1414,  2220,  2048,  2364,  2460,  2564,
    2361,   117,   212,   803,  1124,  1418,  2046,  1682,  1122,    61,
      62,   178,   453,   776,   779,  1110,  1403,  1404,  1405,    63,
     132,   984,    64,   157,    65,    66,    67,  2212,  2024,  2631,
    2632,   101,  1390,  1391,  2130,  2128,  2581,  2623,  1804,  1392,
    1302,  1041,  1052,  1315,  1316,   739,  1320,  1103,  1104,    68,
     127,   128,    69,   745,   746,   747,  1602,  1617,  1988,    70,
      71,   420,   421,    72,   436,   757,    73,    74,   408,   698,
      75,  1674,  2041
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2000
static const yytype_int16 yypact[] =
{
   13836,   -66,  -148,   145, 13801,   175, -2000,  1554, -2000,   229,
     264,   668,    58,    89, -2000,    54, -2000,    91,   787,    90,
     441,   -70,  -128,     8,   516,    82, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000,   584, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000,   587,   640,   690,   142,
     709, -2000,   296,   537,   646,   801,   651,   805,   522,   820,
     823,   834,   646, -2000,   625,   718,   646,   448,   491,    95,
     176,   688, -2000,    83,   418,   511,   889,   538,   560,   942,
     562,   567,   568,   558,   603,   569,   570,   783,   793,   547,
   -2000, -2000,   980,   987,   783,   785,   196,   585, -2000,  7096,
     994,   790,   146, -2000,  1011,  -123,   880,   910,   928,   866,
     931,   661,  1027,  1080,  1090, -2000, 13836,   507,   298,   630,
     722,   521,  1096,   691,    37,   481,   828,  1110,  1067,  1121,
     696,   958,   586,   898,   742,   753,  1003,  1202, -2000,   566,
    1204,   589,   592,  1070,   937,  1039,   964,   646,   832,   837,
    1278, -2000, -2000, -2000,  -102, -2000,  1017, -2000,  1023, -2000,
   -2000,  1041, -2000,  1054,  1156, -2000,  1088,    96,  1098, -2000,
    1134,   598,   601, -2000,  1136, -2000,  1145, -2000, -2000, -2000,
   -2000, -2000,  1284, -2000,  1440, -2000,  1210,  1470, 11016, 11016,
   -2000, -2000,  1474,   244, -2000, -2000, -2000, -2000,  1491, 11016,
   11016, 11016, -2000, -2000, -2000,  8272, -2000, -2000,  1085, -2000,
   -2000, -2000,  1086, -2000, -2000, -2000, -2000, -2000, -2000,  1492,
    1115,  1127,  1129,  1141,  1144,  1162,  1179,  1187,  1189,  1191,
    1193,  1194,  1195,  1196,  1197,  1198,  1205,  1206,  1207,  1208,
    1209,  1211,  1212,  1213,  1214,  1215,  1216,  1217,  1219,  1220,
    1221,  1222,  1225,  1226,  1227,  1231,  1232,  1233,  1234,  1235,
    1236,  1237,  1238,  1239,  1240,  1241,  1242,  1249,  1253,  1254,
    1259,  1263,  1264,  1271,  1272, -2000, -2000,  1273,  1274,  1275,
    1276,  1277,  1281,  1282,  1283,  1285,  1286,  1288,  1289,  1292,
    1293,  1295,  1296,  1297,  1298,  1304,  1305,  1307,  1311,  1312,
    1315,  1321,  1323,  1324,  1326,  1327,  1328,  1329,  1330,  1331,
    1332,  1333,  1335,  1337,  1338,  1339,  1340,  1343,  1345,  1349,
    1351,  1352,  1355,  1360,  1361,  1368,  1370, 11016, 14292,  -110,
   -2000,  1371,   797,   824,    43,  1378,  1566,  1383,   154,  -179,
     802, -2000,  1584, -2000,  1584, -2000,  1638,  1500,  1712,  1715,
    1762,  1812,  1813,  1801,  1552, -2000,  1399, -2000,  1769,  1772,
   -2000, -2000,  1788,  1835,    44, -2000, -2000,   262,   548,    98,
      84,   150,   564,   579,  1416,  1773,  1563,  1598,   169,   695,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
     463, -2000,  1842,  1843, -2000, -2000, 14177,  1650,   140,  1846,
    1654,  1572,  1851,   140, -2000, -2000,   -74,    26, -2000,  1658,
     606,  1575, -2000,  1580,  1577, -2000,  1578,  1442,  1859,  1446,
    1872,  1873,  1874,    -2,  1855, -2000,  -169,  -197,   146,  1876,
    1882,  1884,  1889,  1890,    50,  1891, -2000, -2000, -2000,  1892,
    1893,  1825,  1619,  1827,  1621,  1900,  1901,  -175, -2000,  1902,
    -174, 14690, 14690, -2000,  1903, 11016, 11016,  1380,  1380,  1871,
   11016, 14137,   430,  1910,  1912,  1483, -2000, 11016,  7488, 11016,
   11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016,  1486, 11016,
   11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016,
   11016, 11016, 11016, 11016,  1487, 11016, 11016, 11016,  1489, 11016,
   11016, 11016, 11016, 11016, 11016,  8664, 11016, 11016, 11016, 11016,
   11016, 11016, 11016, 11016, 11016, 11016,  1494,  1495,  1496,  1498,
    1502, 11016, 11016,  1503,  1504,  1506, 11016, 11016,  1934,  1518,
    1519, 11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016,
   11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016,
   11016, 11016, 11016,  1521, 11016, 11016, 11016,  1522, 11016, 11016,
   11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016,  1524, 11016,
   11016, 10440, -2000, 11016, 11016, 11016, 11016, 11016,    33,  1509,
     875, 11016,  7880, 11016, 11016, 11016, 11016, 11016, 11016, 11016,
   11016, 11016, 11016, 11016, 11016, 11016, 11016, 11016,  1940, -2000,
     146,  1952, 11016,  1954,  1956,   479, -2000,   681, 11016,  1528,
     499,  1958,   146, -2000, -2000, -2000,   439, -2000,   146,  1799,
    1767, -2000,  1961,  1962,  1695,  1964,  1567,  1568,  1694,  1701,
    1699,  1971,  1702,  1973, -2000, -2000,  1974,  1704,  1941,  1942,
   -2000,  1979,  1982,  1983,  1984,  1985,  1986, -2000,  1987,  1989,
   -2000,  2002,  2020, 14177,  2026,  1746,  2046,  2047,  2031,  2049,
    2048,  2051,  1676,  2052,    27,   605,  2053, -2000, -2000,  1839,
    1844, -2000,   157,  1628,  1629, -2000, -2000,  1631,  1631,  1631,
    1631,  1631, -2000,  1631, -2000,  1632,  1631,  1631,  1631,  2008,
   -2000,  2008, -2000,  1631,  1631,  1631,  1659,  2008,  1631,  2008,
   -2000, -2000, -2000, -2000, -2000,  1661,  1662,  1663, -2000,   624,
    2092, 14177,  2094,  2096,  2102,  1666,  1697, -2000,  -190,  2129,
    2130,  1937,  1705, -2000, -2000, -2000, -2000,  1939,  2087,  1743,
    2143,  1951,  1869,  2148,   169,  1725, -2000,  2155,  1883,  2156,
    2158,  2022,  2164,  1972,   -72, -2000,   502, -2000, -2000,    51,
   -2000, 11016,  1975,   146,  -142,   837, -2000, -2000, -2000, -2000,
   -2000,  1774, -2000,    96, -2000, -2000,  2171, -2000,  2172, -2000,
   -2000,  2173,  2175,   435, -2000,  2173,   490, -2000,  2055, -2000,
    1747, 14690, 13939,   514, -2000, 11016, 11016, -2000,  1748, -2000,
   11016,  1943,   182, -2000, -2000, -2000, 10654,  9056,  2416,  2749,
    3087, 10720, 10752, 10800, 10832, 11046, 11088, -2000,  3425,  3763,
    4101,  4439, 11115,  4777,  5115,  5453, 11143, 11192, 11224,   754,
    5791, 11438,  6129, -2000, 11469, 11503, 11530, -2000, 14561,  6467,
    6803,  7197,  7234, 10408,  1749, 11558, 11585, 11615, 11647, 11674,
   11701, 11728, 11755,  7518,  7560,  7587, -2000, -2000, -2000, -2000,
   -2000, 11782,  7621,  1832,  1833,  1836,   836,   892,  1753,  1840,
    1845,  7664, 11809, 11853, 11884, 11918, 11945, 11973, 12000, 12030,
    7696,  7952,  7985,  8012,  8056,  8302,  8344,  8376,  1138, 12062,
   12089, 12116,  8410, -2000,  1201, 12143,  8448, -2000,  8480,  8694,
    8736,  8768, 12170, 12197, 12224,  8800,  8840,  8872, -2000, 12268,
    9086, -2000,  7324,  2095,  2012,  7910,  7910, -2000,    69, -2000,
   -2000,  1948, 11016, 11016,  1761, 11016, 14624,  1763,  1770,  1771,
   11016,  1334,  1480,  1480,  1105,  1523,  1550,  1022,  1022,   914,
     914,   914,   914,   846,  1871,  1871,    97, -2000,   -93,  2057,
   -2000, -2000,  1775,   681,  2040,  2045,  2054, -2000,  1943,   479,
   12299, -2000, -2000,     1,   -97,   802,  1767,  1767,  2058,  2015,
     146, -2000,  2059, -2000, -2000,  1785,  1946,  2216,  2219,  1814,
    1793,  1815,  1817,  2224, -2000,   830,    44,  2032,  2033,   434,
   14177, 14177,  2228, -2000,  2010, -2000, -2000, -2000,  2013,  2198,
   14177,  2233,  1992,  1994,  2236, -2000, -2000, -2000, -2000, -2000,
   -2000,  2237, -2000,  2241, -2000,  2238,  2244, -2000,   140,   140,
    2243, -2000, -2000, -2000, -2000, -2000, -2000,  2245, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000,  2245, -2000, -2000,
   -2000,  2247,  2252,  2253,  2067,  1831,  1841, 11016,  1849,  2198,
   14177, 14177, 14177,  2062,   140,   -35,    35,  -185,  2073,  2278,
     621,    68,   729,  2142,  2280,  -182,  2281,  2283,  2091,  1894,
    1580,  1867, -2000, -2000, -2000,  1886,  2204,  1879, -2000, -2000,
    2214,  2306,   535, -2000,  1584, -2000,  2307, -2000, -2000, -2000,
     443, 14690,  2248,  2133,  -142, -2000, -2000,  2310, -2000, -2000,
   -2000,  2295,  -164, -2000,   524,  1888, -2000,  -164,  1888,  2118,
   11016, -2000, 11016, -2000, 11016, 14446, 14253,  2229,  9152,  1887,
    1896, 11016, 11016, -2000, 11016, 14375,  2161,  2161, 11016, -2000,
   -2000, -2000, -2000, -2000, -2000, 11016, 11016, 11016, 11016, -2000,
   11016, 11016, 11016, -2000, -2000, -2000, -2000, 11016, 11016, -2000,
   11016, -2000, -2000, -2000, 14177, 14177, 11016, 11016, 11016,  2319,
   -2000,  1990,  1991,  1993,  1995,  1999,  2001, -2000, -2000, -2000,
   11016, 11016, 11016, -2000, 11016,  1905,  1906,  1911,  2003,  2320,
    2009,  2353,  2011,  1929,  1931, 11016, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, 11016, 11016, 11016, 11016, 11016, 11016,
   11016, 11016, -2000, 11016, -2000, -2000, -2000, 11016, -2000, 11016,
   -2000, 11016, 11016, 11016, 11016, 11016, -2000, -2000, -2000, 11016,
   11016, 11016, -2000, 11016, -2000, -2000, 11016,  1943,  7910,  7910,
    2083, 14657, 11016, -2000, 11016, 11016,  1943, -2000,  1953,  2089,
     146,  2361,   479,  2226,  2226,  2226,  1935, -2000,   749, 11016,
    2365,  2366,  1975, -2000, -2000,   146, 11016,    76,   146,    59,
    1944,  1967,  2192,  2352,    60,  2354,  2369,  2200, -2000, -2000,
   -2000,  2377,  2377,  1950,  2218,  2220,  1960,  2198,  2198, 14177,
   -2000, -2000,   540,  2198, -2000,  2380,  2382, -2000, -2000, -2000,
    2165,  2170,  1968,  1969,   528,  -105,   885,  -105,  -105, -2000,
     539,  -105,  -105,  -105,   885,   885,  -105,  -105,  -105,   542,
     885,  -105,   885,  1970,  1977,  1978,  2315, -2000, 11016, 14690,
      35,  2198,  2198,  2198,   583, -2000,  1963,  1965, -2000,  2023,
    2024,  2025,  2027,   544, -2000,  2136,    35,  2402,  -181,  2346,
   -2000,  2275,  2021, -2000, -2000,    34,  2174,  2087,  2154,    35,
    -171,  2227,  2413,  2403, -2000,   581,  1883,  2422,  2447,  2449,
    2454,   -76,  2461,  2034,  2302,   594,  2036,  2037,  2305,  2039,
     556, -2000,  2468,  1943, -2000, -2000,  2469,   -15,  2466,  2470,
    2471,  2063,   578, -2000,  2043, -2000,   222, 11016,  2265, -2000,
   -2000,  9448,  2322,  2481, -2000, -2000,  2486,  9840,  -149, -2000,
    -149, -2000, -2000, 14690, 14502, -2000, 11016,  2065, 11016, -2000,
   -2000,  1362,  1228, 12333, 11016, 11016,  2066,  2068, 12360, 12388,
   12415,  9184,  9232, 12445, 12477, 12504, 12531, 12558, 12585,    -6,
      78, 12612, 12639,  9264,  2074,  2076,  2077,  2078,  2079,  2080,
    2081,  1318,  9478, 12683, 12714, -2000, -2000, -2000,  2082,   561,
    2085,   563,  2086, -2000, -2000, 12748,  9544,  9576,  9624, 12775,
   12803,  9656,  9870,  1409,  1438,  1465, 12830, 12860, 12892, 12919,
   12946, 12973,  9936,  9968, 10016, 13000,  2088,  2090, 11016,  1943,
   11016,  1287,  1943, 14690,  1943,  2098,  1943,  2099,  2100,  2439,
    2356,  -142, -2000, -2000,  2336,  2093,  2097,  2108, -2000,  2511,
   14690,  2498,    28,  2133, -2000, 14690, 11016,  2109, -2000, -2000,
      76, -2000, -2000,  2113,    59,  2515,  2516,  2519, -2000, -2000,
    2114,  2523, -2000,  2528, -2000,  2117,  -132, 11016,  2111,  2123,
    2552,   540,   540,  2198,  2363,  2555,  2128,  2131,  2132,  2508,
    2558,  2134,  2560,   167, -2000, -2000, -2000,  2409,  2410, -2000,
     540, -2000, -2000, -2000, -2000,  2362,   767, -2000,  2572, -2000,
   -2000,  2338,  2575, -2000,  2576, -2000, -2000, -2000, -2000,  2153,
   13027,   574, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000,   773,    35,  2582,  2583,  2584,  2587,  2592, -2000,
    2593,  2167,   576,  2177,   266,    35, -2000,  1671,  2485,  2602,
   -2000, -2000, -2000, -2000, -2000,  2607,  2347,  2142,  2187,   588,
    2351,    35,  2617,  -124,  2618,  2601,  2604,   591, -2000, -2000,
   -2000, -2000,  2525,  2489,   535, -2000,   446, 11016,  2205,  2211,
    2212,  2641,  2641,  2215,  2552,    22,   535, 14177, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000,   578,   602,   578,   110,   554,
    2217, -2000,  1511,   686, -2000, -2000, 14690,  2387,  2627, -2000,
   -2000, 14690,   604, -2000,  2451, -2000, -2000, 14690,  2645, -2000,
   11016, -2000, -2000, 11016, -2000, 13054, 14105, -2000, -2000, -2000,
   -2000, -2000, 11016, 11016, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, 11016, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, 11016, 11016, -2000, -2000,  2300,  2300,  2300,
   -2000,  2303,   997, -2000,  2308,  1006, -2000,  2300,  2300, -2000,
   11016, 11016, 11016, -2000, -2000, 11016, 11016, -2000, 11016, -2000,
   11016, -2000, 11016, -2000, -2000, -2000, -2000, -2000, -2000, 11016,
   11016, 11016, -2000, -2000, -2000,  2223,  2225,  1287,  2230,  2231,
   -2000,  2232, -2000, -2000,  2565,  2597,  2513,  2356, -2000,  2663,
    2663,  2663,  2249, 11016, 11016,  2671,  2265, 14690,  2641, -2000,
      59,  2242, -2000, -2000,  2666,    60,  2667, -2000,  2678,  2682,
   13098,  2680,  2686, -2000,   610, -2000, -2000,   540, -2000, -2000,
    2691, 11016,  2692,  2640,    73, 11016, -2000, -2000, -2000, -2000,
   -2000, -2000,  2267,  2268,  2269, 11016, -2000, -2000, -2000,   583,
    2642, -2000,  2271,  2697, -2000,   885, -2000,   885,   885, 11016,
   -2000, -2000,  2644, -2000,   612,  2702,  2274,  2276,  2277,  2279,
   -2000,    35, -2000,    35,  2282,  2286,   627,  2137, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,  2490,
    2570, -2000,  2285,  2288,  2434,  2174,    35, -2000,  2289,   642,
    2290,  2455,    35,  2293,  2717,  2725, -2000,   581,  2726,  2460,
     648,  2301,  2574,  2578,  2309, 13129,  2680,  2641,  2641, -2000,
     664,   675,  2686,   684,    48, -2000, -2000,  2198,   687, -2000,
   -2000, -2000, -2000,  2731, -2000, -2000,   222, 11016, 11016, -2000,
   -2000,  2311, -2000, 10232, -2000, 10624,  2312,  2651,  2265,  2316,
   13163, 13190, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, 13218, 13245, 13275,  2300,  2300,  2300,  2300,  2300,
    2300,  1988, 13307,  2684,  2556,  2556,  2556,  2300,  2324,  2321,
    2325,  2300,  2327,  2334,  2355,  2300,  2556,  2556, 13334, 13361,
   13388, 13415, 13442, 10048, 13469, 13513, 10262, 10328, 10360, -2000,
   -2000, -2000, -2000, -2000,  2371, 11016, 11016,  1975,  2513, -2000,
     689,   710,   713,  2783, 14690, 14690,  2768, -2000,   756,  2357,
      59,  2625,  2358,  2628, -2000,  2750,  2776, -2000,   761, -2000,
     764, -2000,  2792, -2000,   766, 13544,   770,  2372,  2373,  2632,
   -2000, 13578,  2370,  2374,  2375, 13605,   778, -2000,  2475, -2000,
   -2000, 13633, -2000,  2813, -2000, -2000,  2376, -2000, -2000, -2000,
    2802,   833,   838,    35,  2806, -2000, -2000,  3151,  3489,  3827,
    4165,  4503,  4841,  2751,  2694,  2807, 11016,  2735, -2000,  2347,
     840,    35, -2000,    35,  2383,   842, -2000, -2000, -2000, -2000,
   -2000,  2679,    22, 11016,  2391,  2393,  2552, -2000,   844,   847,
     851, -2000,  2823, -2000,   853, -2000,   609,  2396,  2825,  2769,
     378,  2771, -2000,   546, -2000,   554, -2000, 14690, 14690,  2832,
    2833, -2000, 14690, -2000, 14690,  9840,  2406, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000,  2556,  2556,  2556,  2556,  2556,  2556,
   -2000, 11016, -2000,  2835,  2781,  2414,  2415,  2418,  2556, -2000,
    2495,  2501,  2556, -2000,  2502,  2504,  2556,  2423,  2424, -2000,
   -2000, -2000, -2000, -2000, 11016, -2000, -2000,  2843,  2852,  2853,
    2854, 14529,   -94, 14690,  2133,  1975, -2000,  2857, -2000, -2000,
    2429, 11016, -2000,    59,  2432,  2842,    60,  2846, -2000,  2599,
    2662,  2867, -2000,  2868, -2000, -2000,  2872,  1124, -2000,  2873,
   11016, 11016, -2000, -2000, -2000, -2000, -2000, -2000,  2820, -2000,
    5179, -2000, -2000,  5517, -2000,  2608,  2452, -2000, -2000,   857,
    2702, -2000,  2811,  2761,  2737,  2728,  2620, -2000,  2681, -2000,
   13660,  2472,  2434, -2000,   859,   861,    35, -2000,  2480,   331,
   -2000, 13690,  2680,  2686,   863,  2690, -2000, -2000, -2000, -2000,
   -2000,  2894,  2897,   -19,   -37,  2496,  2478,  2698, -2000, -2000,
    2893,  2482,   868,  2913,  2816,  2491,  2492,  2493,  2509,  2514,
    2524, 13722, -2000,  2500,  2915, -2000, -2000, -2000,  2526,  2300,
    2497,  2503,  2527,  2300,  2505,  2512,  2530, -2000, -2000, 13749,
    2532,  2518,  2534, -2000, -2000,  2708, 11016, -2000,  2808,  2133,
   -2000, -2000, 14690,  2541,    59,  2953,   870,  2956, -2000,  2977,
   -2000, -2000,  2549, -2000, -2000,  2550, 13776, 13803, -2000,  5855,
   -2000, -2000,  2553, -2000, -2000, -2000,  2551, -2000, -2000, -2000,
   -2000, -2000,  6193,  2925, -2000, 11016, -2000, -2000, -2000,   894,
    2981, -2000,  1014,  1087, -2000,  2984, -2000,  2557,  2985,  2988,
    2562,  2564, -2000,  2976,  2566, 11016,  2995, -2000,  1130,   -10,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,  2996,   554,
    2567, -2000,  2556, -2000, -2000, -2000,  2556, -2000, -2000, -2000,
   -2000, -2000,  2997,  2998, -2000, 14529,   -92,  2845, -2000,    59,
    2579, -2000, -2000,    60, -2000,  2585, -2000, -2000,  1508, -2000,
    6531, -2000,  3010,  2608, -2000, -2000, 13830, -2000,  2586,  2810,
   -2000,  1137, -2000, -2000, -2000,  3016,  3018,  3021,  3024, 14690,
    3009, -2000,  3031, -2000, -2000, -2000, -2000,  3032,  2605,  2300,
    2300,  2606,  2300,  2300,  2609,  2610, -2000,  2805,  2809,  2641,
   -2000,  2611,    59,  2613,  3036, -2000, -2000, -2000,  3023,  1155,
   -2000, -2000,  6869, -2000,  2801,  3044,  3045,  3036,  2619,  2623,
    2624,  2626, 11016, -2000,  2817,   554, -2000,  2556,  2556, -2000,
    2556,  2556, -2000, -2000,  2869,  2870,  2630,    59,  2634, -2000,
   -2000,  1157,  3054, -2000,  3010, -2000,  2629,  1161,  2637,  1164,
    2638,  2841, -2000, -2000, 14690,  2833, -2000,  2646,  2648,  2649,
    2650, -2000, -2000,  2639,    59, -2000,  3058, -2000, -2000,  3071,
    3074,  3036,  3036, -2000,  2858,  3080,  2482, -2000, -2000, -2000,
   -2000,    59,  2658,    61, -2000,  2660,  2664,  1166,  1168,    85,
    3090,  1170, -2000, -2000,  2689,    59,   -29,  2945,   503,   -16,
   -2000,  3036, -2000, -2000,  3007,  2855, -2000,  2858,    59,  2695,
   -2000, -2000,   202, -2000, -2000, -2000,   452,   469,  1172,    85,
      85,  2950, -2000,  2693,    59, -2000, -2000, -2000, -2000, -2000,
      24, -2000, -2000, -2000,   453, -2000,  2877, -2000,  2699, -2000,
   -2000, -2000, -2000,    85,    63, -2000,  2932,  2933,  2941,  2942,
    3129,  3135, -2000, -2000
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2000,  2999,  -129, -2000, -2000, -2000, -2000,  -991,  1713, -2000,
    1895, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,  1996,  2653,
   -2000,  -298,  -760,  1365, -2000, -1666, -2000,  1038, -1548, -2000,
   -1940, -2000, -1271, -2000,  1111, -1518, -2000, -2000, -2000, -1600,
   -2000, -2000,  2517,  -352,  -359,  2506,  -641, -2000, -2000,  -370,
   -2000, -2000,   620, -2000, -2000, -2000,  1622,  -951,   344,  -166,
   -2000, -2000, -2000,  2971,  2368, -2000,  2367, -2000,   845,   659,
   -2000,   580, -1338, -2000, -2000, -2000, -2000, -2000, -2000,  2084,
   -2000, -2000, -1520, -2000, -2000, -2000,  2101,  1790, -2000,  1163,
   -2000, -2000, -1782, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,  2520,
   -2000,  2166,  1881, -2000,  1808,  1549,  1188, -2000,  1005,   854,
   -2000, -2000, -1493, -2000, -1073, -2000, -2000, -2000, -2000, -2000,
     590,   741,  3064,  2709, -2000,  2064, -2000,   965,  2388, -2000,
   -2000, -2000, -2000, -2000, -2000, -2000, -2000, -1345,  1529, -2000,
   -2000, -2000, -2000,   464, -2000, -2000, -2000, -2000,  1007, -2000,
     550, -2000,  1551,  1542, -1999, -1994, -1813, -1987, -1639, -2000,
   -1287,   467,   156,    23, -1033,  -591,  2146, -1375, -2000, -2000,
   -2000,  2978, -2000,  -416, -2000,  2135,  1375, -1608, -2000, -2000,
   -2000, -2000,  2521, -2000, -2000, -2000, -2000, -2000,  2764, -2000,
   -2000, -1726, -2000
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -821
static const yytype_int16 yytable[] =
{
     358,  1523,  1591,  2035,   653,  1786,  1645,   989,  1857,   640,
    1551,  1552,   635,  2122,  1791,  2023,  1570,   752,  1612,  1324,
    1325,  1269,  2198,  2204,  1115,  1330,   630,  1332,  1267,   758,
    1065,  1629,  1030,   753,   458,  1412,   376,   138,  1348,   937,
     412,   413,   414,   415,   416,   417,   602,  1258,  1784,   631,
    1412,   938,  2021,   790,  1419,  1107,  1421,  1666,  1805,  1806,
    2117,   641,   125,  1531,  1538,   801,   805,  2686,  2650,   783,
     639,  1361,  1660,  -820,  1620,  1244,  1075,  1828,  1098,  2636,
    2523,  1355,  1098,   754,  1368,  1614,   179,   677,  2448,   481,
     482,  2656,  1019,   133,   628,  1630,  2206,  -372,   173,   784,
     487,   488,   489,  2644,    81,   781,   491,   603,   604,   605,
     606,   607,   608,   609,  1065,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   781,   627,   777,  2246,  2247,  2679,  2537,  1422,
    1099,  1621,  2001,   741,  1099,  1799,  2257,  2258,    82,   364,
    1069,  2138,   668,    76,  1579,   678,   742,   364,  2637,  2031,
     412,   413,   414,   415,   416,   417,  2538,  2450,   679,   675,
     466,  1817,  1818,  1819,  1820,  1580,  1098,   781,   102,   175,
    2075,  2076,  2637,  2395,   755,   134,    77,   692,  2118,  2086,
    2087,  1622,   603,   604,   605,   606,   607,   608,   609,   220,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,  2680,   627,   180,
    2207,   681,  2032,  2148,  1272,  1668,   939,  1669,   601,  2449,
     418,  2451,   118,  1346,  1661,  2153,   459,   181,  1099,  1821,
    2651,  1076,  2657,   778,  2638,  2208,  1356,  2687,  2524,  1369,
    1615,   174,  1532,  1539,   642,  1496,   802,   802,  2639,   182,
    1631,   454,  1245,  -820,  -372,  1844,  1807,   119,  2638,  1413,
    2119,   968,  2167,  1526,  2139,  1623,  2209,  1856,   377,  1100,
    2025,   126,  2639,  2168,  1683,   979,   183,  1108,  1109,   143,
     743,   642,  1624,  1999,  2365,  2366,  2367,  2368,  2369,  2370,
    2665,  1798,   669,  2169,  1031,    78,   467,  2002,  2378,   221,
     122,  1513,  2382,   365,  2133,   676,  2386,  2170,  1141,   366,
    2028,   365,  2227,   632,   756,  2210,  2171,   366,   139,   140,
     141,   459,   176,   671,  2140,   744,  1271,   142,    79,  2396,
     642,   123,  1527,   130,  2443,  1684,   672,  1685,  2442,  1277,
     418,  2666,   940,   693,  1409,  1644,  1347,   811,  1101,  1102,
      80,   812,  1349,  1350,  1351,  1352,  2172,   682,   822,   826,
     828,   829,   830,   831,   832,   833,   834,   835,   836,  2206,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   852,    16,   854,   855,   856,  2211,
     858,   859,   860,   861,   862,   863,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,  2199,  2200,  1297,
    1298,   185,   881,   882,  1114,   144,  1710,   886,   887,  1303,
     759,  1270,   891,   892,   893,   894,   895,   896,   897,   898,
     899,   900,   901,   902,   903,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   791,   914,   915,   916,  1785,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   419,
     929,   930,  1362,   634,   932,   933,   934,   935,   936,  1341,
    1342,  1343,   946,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,  1510,
    1822,  1823,  1824,   358,  2406,  1126,   680,  1765,  1129,   980,
    1711,   146,  1293,  2161,   187,  2162,   145,  2234,  2235,  2236,
    2237,  2238,  2239,  1140,  2011,   161,  2667,   367,  2208,  2248,
    1395,  1257,  2528,  2252,  1854,   367,  2531,  2256,   152,  2310,
    2033,   190,  1396,  2671,  2313,   694,   695,   696,   697,  2358,
    1835,   673,  1837,  1838,   814,   815,   167,  2344,  1554,  2209,
     170,   388,   389,   192,  1554,   195,  2681,   683,  1294,   439,
     197,   199,   203,   205,   186,   392,   406,   368,  1397,  1555,
    2012,   390,   685,  1449,  1450,   368,  1398,   148,  1556,   430,
     149,  1557,   443,  1558,  1556,   445,  1559,  1557,  1825,  1558,
    2284,   471,  1559,  2031,   473,  2394,  1382,   162,  2210,   761,
    1032,  1560,   974,  1383,  2350,  1142,   986,  1560,  1561,  1562,
     422,  1262,  1312,  1313,  1561,  1562,  2629,  2597,  2598,  2351,
    2599,  2600,   674,   975,  1524,  1295,  1399,  1530,  1133,  1134,
    2653,   451,  1064,   150,  2668,  1592,  2682,  2013,   684,  1593,
     686,   440,  1111,  1563,   987,  2659,  2660,  1855,  2180,  1563,
    1065,  2672,  2669,   687,  2185,  1395,  2032,   188,  1033,  1384,
    1564,   120,  1359,  1385,   484,   485,    16,  1396,   163,  2673,
    1266,  1360,  2211,   423,   602,  1400,  1135,  1136,  2683,  2039,
    1386,  1138,  2670,   151,   191,  1296,   121,  1594,  1145,  1387,
    1595,  2419,  1066,  2654,  1565,   816,  1125,  2014,  1553,  2674,
    1565,  2543,   153,  1397,  2040,  1596,   193,   391,   196,  2432,
    1401,  1398,   441,   198,   200,   204,   206,   154,   393,   407,
     395,    16,   628,  1566,  1393,  1597,  1388,  1067,  2655,  1566,
    2213,  1567,   431,  1598,  2589,   444,   976,  1567,   446,  1649,
     396,  1777,  -334,   155,   472,   124,  2398,   474,  1650,   131,
     397,  1128,   762,  2403,   603,   604,   605,   606,   607,   608,
     609,  1399,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   816,
     627,   410,   434,  2355,   218,   699,  1389,   398,  2627,  2628,
     651,  1568,   156,  2526,   158,   219,   159,  1568,   160,  2356,
    2500,   411,   435,  1248,  1249,   700,  1251,  2340,  1830,  2536,
    1400,   601,   399,   164,  1842,  2319,   165,  1831,  2658,  2308,
     400,  2472,  1599,  1843,  1600,  2476,  2274,   166,  2309,   135,
     136,   137,   401,  2334,   171,  2335,   603,   604,   605,   606,
     607,   608,   609,  1601,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   168,   627,   169,  1402,  1288,  1289,  1053,   643,   625,
     626,  2488,   627,  1058,  2490,  1060,   207,   172,   942,   943,
    -586,   944,   189,   207,   945,   701,   702,  2552,  1519,  2596,
    -590,  1511,   603,   604,   605,   606,   607,   608,   609,   402,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,  -587,   627,   208,
     403,   982,   642,  -586,  1105,  1106,   208,   209,  1339,  2576,
     177,  -586,   210,  -590,   362,   194,   624,   625,   626,  1497,
     627,  -590,  1363,  1364,   201,   644,  1415,  1416,  1508,   211,
    1577,  1578,   404,  -586,   213,  -340,   363,  1581,  1582,  2541,
    -587,  1583,  1584,  -590,  1585,  1584,  1609,  1610,  -587,   645,
     214,  2567,  2568,   215,  2570,  2571,  1635,  1636,  1655,  1656,
     216,   405,   646,  1731,  1732,  1734,  1735,   361,  2439,   202,
    -587,  2079,  2080,  1423,  2399,  1424,  1841,  1610,  1852,  1610,
    2083,  2084,  1431,  1432,   375,  1433,   378,   647,   222,  1438,
    1997,  1610,  2578,  2006,  2007,   381,  1439,  1440,  1441,  1442,
     384,  1443,  1444,  1445,  2029,  1667,  2044,  2045,  1446,  1447,
     648,  1448,  2131,  2132,  2154,  1610,   379,  1451,  1452,  1453,
     620,   621,   622,   623,   624,   625,   626,  2603,   627,  2165,
    1610,  1461,  1462,  1463,   380,  1464,  2027,   382,  1317,  1318,
     383,  1321,  1322,  1323,  2182,  1610,  1475,  1326,  1327,  1328,
    2192,  1656,  1331,   385,  2622,  1476,  1477,  1478,  1479,  1480,
    1481,  1482,  1483,   386,  1484,  1658,  2201,  2202,  1485,   409,
    1486,  2634,  1487,  1488,  1489,  1490,  1491,  2203,  2202,   424,
    1492,  1493,  1494,   425,  1495,  2649,  2205,  2132,   426,  2214,
    1667,  2276,  2277,  1501,   427,  1503,  1503,   428,  2663,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
    1520,   627,  2278,  2277,  2678,  2279,  2277,  1525,   603,   604,
     605,   606,   607,   608,   609,   429,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   433,   627,  1042,  1043,  1044,  1045,   432,
    1046,  2413,  2414,  1048,  1049,  1050,  1166,  1167,  2282,  2202,
    1054,  1055,  1056,  2290,  2291,  1059,  2292,  2293,  2295,  2296,
     437,  1766,  2298,  2299,  1768,   438,  1769,   442,  1771,  1590,
     447,   603,   604,   605,   606,   607,   608,   609,   448,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,   449,   627,   603,   604,
     605,   606,   607,   608,   609,   450,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   452,   627,  2317,  1610,   454,  1198,  1199,
    2318,  1610,  2333,  1610,  2337,  1610,  2345,  2291,  1672,  2346,
    2202,   456,  1676,  2347,  2202,  2349,  2293,   477,  1681,  2425,
    1610,  2437,  1610,  2438,  1610,  2444,  2132,  1687,   460,  1138,
    2457,  2045,  2492,  2493,   461,  1695,  1696,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   462,   627,  1200,  1201,  2507,  1610,   603,   604,
     605,   606,   607,   608,   609,   463,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   464,   627,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   465,
     627,  1767,   603,   604,   605,   606,   607,   608,   609,   469,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,  1787,   627,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   470,   627,   475,  1800,   603,
     604,   605,   606,   607,   608,   609,   476,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   478,   627,  2509,  2291,   603,   604,
     605,   606,   607,   608,   609,   479,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   480,   627,   603,   604,   605,   606,   607,
     608,   609,   125,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     486,   627,  1690,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   493,   627,   494,  2015,  2510,
    2293,   603,   604,   605,   606,   607,   608,   609,   495,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,   496,   627,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   497,   627,
     498,  2050,  2521,  2522,  2051,  2545,  2546,  2556,  2557,   637,
    1222,  1223,   499,  2062,  2063,   500,   618,   619,   620,   621,
     622,   623,   624,   625,   626,  2064,   627,  2583,  2584,  2605,
    2606,  2610,  2611,   501,  2071,  2072,  2613,  2606,  2642,  2606,
    2643,  2606,  2646,  2647,  2675,  2606,  1273,  1274,  1516,  1517,
     502,  2088,  2089,  2090,  2111,  2112,  2091,  2092,   503,  2093,
     504,  2094,   505,  2095,   506,   507,   508,   509,   510,   511,
    2096,  2097,  2098,  1228,  1229,   651,   512,   513,   514,   515,
     516,   654,   517,   518,   519,   520,   521,   522,   523,   104,
     524,   525,   526,   527,  2114,  2115,   528,   529,   530,   655,
    1692,  1693,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,  1858,  1859,  1860,  1861,  1862,  1863,
     543,  1864,  2135,  1865,   544,   545,  2141,  1866,  1867,  1868,
     546,  1869,  2037,   105,   547,   548,  2145,  1870,  1871,  1872,
    1873,  1874,   549,   550,   551,   552,   553,   554,   555,   106,
    2151,  1875,   556,   557,   558,   656,   559,   560,   657,   561,
     562,  1876,  1877,   563,   564,  1878,   565,   566,   567,   568,
    1879,  1880,  1881,  1882,  1883,   569,   570,  1884,   571,  1885,
    1886,  1887,   572,   573,  1888,  1889,   574,  1890,  1891,  1892,
    1722,  1723,   575,  1893,   576,   577,   107,   578,   579,   580,
     581,   582,   583,   584,   585,   658,   586,  1894,   587,   588,
     589,   590,  1895,   108,   591,   109,   592,  1896,  1897,  1898,
     593,   110,   594,   595,  1899,  1900,   596,  1901,  1902,  1903,
    1904,   597,   598,  1905,  1691,  1906,  1907,  1908,  1909,   599,
    1910,   600,  1911,  1912,   633,  1913,   111,  1914,  1915,   636,
    1916,  1917,  1918,  1919,   638,   659,   660,   661,   662,  1920,
     663,  1921,   664,  1922,  1923,   665,  1924,  1925,  1926,  1927,
    1928,  1929,   666,  1930,  1931,  1932,  1933,  1934,   667,   688,
     690,  1747,  1748,   691,   689,   703,   704,   740,  1935,   748,
    1936,   749,  1937,   750,   751,   760,   763,   765,   767,   769,
     770,  1938,   771,  1939,  1940,  1941,  1942,  1943,  1944,  1945,
    1749,  1750,  1946,  1947,   772,   773,   774,   775,  1948,   785,
    1949,  1950,  1951,   780,  1952,   786,  1953,   787,  1954,  1955,
    1956,  1957,   788,   789,   792,   793,   794,  1751,  1752,   795,
     796,   797,   798,   799,   800,   804,   807,   627,  2217,  2218,
    1958,  1959,  1960,   817,  2222,   818,  2224,   819,   837,   853,
    1961,   857,  1962,  1963,  1964,   112,   876,   877,   878,  1965,
     879,  1966,  1967,  1968,   880,   883,   884,  1969,   885,   888,
     941,  1970,  1971,   967,  2038,  1972,  1973,  1974,  1975,   113,
     889,   890,  1976,   913,   917,   969,   928,   971,   114,   973,
     981,   983,   990,   991,   993,   994,   995,   996,   999,   997,
     998,   115,  1000,  1001,  1002,  1003,  2271,  2273,  1004,  1005,
     116,   392,  1009,  1007,  1008,  1010,  1011,  1012,  1013,  1014,
    1015,  1021,  1016,  1977,  1978,  1979,  1980,  1981,   603,   604,
     605,   606,   607,   608,   609,  1017,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,  1018,   627,   606,   607,   608,   609,  1020,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,  2330,   627,  1022,
    1023,  1024,  1025,  1026,  1027,  1028,  1035,  1029,  1034,  1038,
    1039,  1036,  1040,  1047,  2341,   603,   604,   605,   606,   607,
     608,   609,  1051,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
    1057,   627,  1061,  1062,  1063,  1068,  1681,  1070,  1073,  1071,
    1982,  1983,  1984,  1985,  1986,  1072,  1987,   605,   606,   607,
     608,   609,  2371,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
    1074,   627,  1077,  1078,  1079,  2389,  1081,  1080,  1082,  1084,
    1858,  1859,  1860,  1861,  1862,  1863,  1085,  1864,  1086,  1865,
    1087,  1088,  2402,  1866,  1867,  1868,  1089,  1869,  1090,  1093,
    1091,  1094,  1095,  1870,  1871,  1872,  1873,  1874,  1096,  1097,
    1117,  2416,  2417,  1112,  1119,  1120,  1121,  1875,  1123,  1131,
    1137,  1181,  1195,  1196,    16,  1202,  1197,  1876,  1877,   -84,
    1203,  1878,  1250,  1260,  1253,  1204,  1879,  1880,  1881,  1882,
    1883,  1254,  1255,  1884,  1263,  1885,  1886,  1887,  1261,  1264,
    1888,  1889,  1276,  1890,  1891,  1892,  1279,  1280,  1265,  1893,
    1281,  1275,  1278,  1282,  1284,  1283,  1285,  1286,  1287,  1291,
    1292,  1299,  1300,  1894,  1065,  1301,  1304,  1305,  1895,  1306,
    1307,  1310,  1308,  1896,  1897,  1898,  1309,  1311,  1314,  1319,
    1899,  1900,  1333,  1901,  1902,  1903,  1904,  1334,  1335,  1905,
    1336,  2166,  1907,  1908,  1909,  1337,  1910,  2485,  1911,  1912,
    1357,  1913,  1338,  1914,  1915,  1344,  1916,  1917,  1918,  1919,
    1340,  1358,  1365,  1367,  1370,  1920,  1371,  1921,  1372,  1922,
    1923,  1373,  1924,  1925,  1926,  1927,  1928,  1929,  1375,  1930,
    1931,  1932,  1933,  1934,  1377,  1378,  2506,  1379,  1380,  1381,
    1394,  1406,  1407,  1410,  1935,  1411,  1936,  1412,  1937,  1417,
    1427,  1429,  1435,  1454,   -86,  1469,  2519,  1938,  1430,  1939,
    1940,  1941,  1942,  1943,  1944,  1945,  1465,  1466,  1946,  1947,
    1455,  1456,  1467,  1457,  1948,  1458,  1949,  1950,  1951,  1459,
    1952,  1460,  1953,  1468,  1954,  1955,  1956,  1957,  1471,  1470,
    1473,  1472,  1474,   781,  1512,  1509,  1514,  1518,  1521,  1522,
    1535,  1536,  1537,  1542,  1541,  1534,  1958,  1959,  1960,  1543,
    1544,  1547,  1548,  1571,  1549,  1572,  1961,  1573,  1962,  1963,
    1964,  1550,  1574,  1589,  1603,  1965,  1604,  1966,  1967,  1968,
    1575,  1576,  1586,  1969,  1611,  1613,  1616,  1970,  1971,  1587,
    1588,  1972,  1973,  1974,  1975,  1618,  1633,  1619,  1976,  1625,
    2240,  2241,  1628,  1634,  1632,  1640,   603,   604,   605,   606,
     607,   608,   609,  2594,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,  1641,   627,  1642,  1605,  1606,  1607,  1643,  1608,  1977,
    1978,  1979,  1980,  1981,  1646,  1647,  1648,  1651,  1652,  1653,
    1654,  1657,  1662,  1659,  1663,  1664,  1667,  1673,  1858,  1859,
    1860,  1861,  1862,  1863,  1678,  1864,  1677,  1865,  1130,  1679,
    1774,  1866,  1867,  1868,  1665,  1869,  1688,  1775,  1697,  1778,
    1698,  1870,  1871,  1872,  1873,  1874,  1715,  1716,  1717,  1718,
    1719,  1720,  1721,  1730,  1782,  1875,  1733,  1736,  1783,  1792,
    1763,  1793,  1764,  1794,  1779,  1876,  1877,  1796,  1780,  1878,
    1770,  1772,  1773,  1797,  1879,  1880,  1881,  1882,  1883,  1781,
    1788,  1884,  1801,  1885,  1886,  1887,  1790,  1795,  1888,  1889,
    1798,  1890,  1891,  1892,  1802,  1803,  1808,  1893,  1809,  1810,
    1813,  1814,  1811,  1812,  1816,  1815,  1982,  1983,  1984,  1985,
    1986,  1894,  1987,  1826,  1827,  1829,  1895,  1832,  1833,  1834,
    1836,  1896,  1897,  1898,  1839,  1845,  1846,  1847,  1899,  1900,
    1848,  1901,  1902,  1903,  1904,  1849,  1850,  1905,  1851,  2311,
    1907,  1908,  1909,  1989,  1910,  1990,  1911,  1912,  1853,  1913,
    1991,  1914,  1915,  1993,  1916,  1917,  1918,  1919,  1996,  1998,
    2000,  2004,  2003,  1920,  2005,  1921,  2008,  1922,  1923,  2009,
    1924,  1925,  1926,  1927,  1928,  1929,  2016,  1930,  1931,  1932,
    1933,  1934,  2017,  2018,  2019,  2042,  2022,  2043,  2047,  2049,
    2036,  2073,  1935,  2078,  1936,  2099,  1937,  2100,  2082,  2104,
    2105,  2106,  2101,  2102,  2103,  1938,  2109,  1939,  1940,  1941,
    1942,  1943,  1944,  1945,  2116,  2120,  1946,  1947,  2121,  2123,
    2113,  2124,  1948,  2127,  1949,  1950,  1951,  2125,  1952,  2129,
    1953,  2137,  1954,  1955,  1956,  1957,  2134,  2136,  2142,  2143,
    2144,  2150,  2147,  2149,  2152,  2155,  2157,  2173,  2158,  2159,
    2174,  2177,  2160,  2163,  1958,  1959,  1960,  2164,  2175,  2176,
    2181,  2183,  2187,  2184,  1961,  2186,  1962,  1963,  1964,  2188,
    2190,  2191,  2193,  1965,  2215,  1966,  1967,  1968,  2194,  2226,
    2196,  1969,  2195,  2225,  2219,  1970,  1971,  2243,  2228,  1972,
    1973,  1974,  1975,  2250,  2244,  2249,  1976,  2251,  2253,   603,
     604,   605,   606,   607,   608,   609,  2254,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,  2270,   627,  2280,  2255,  2281,  2285,
    2283,  2286,  2287,  2288,  2289,  2294,  2302,  1977,  1978,  1979,
    1980,  1981,  2304,  2300,  2301,  2316,  2305,  2306,  2315,  2320,
    2329,  2327,  2328,  2331,  2336,  2338,  1858,  1859,  1860,  1861,
    1862,  1863,  2342,  1864,  2343,  1865,  2348,  2352,  2353,  1866,
    1867,  1868,  2354,  1869,  2357,  2359,  2360,  2363,  2372,  1870,
    1871,  1872,  1873,  1874,  2374,  2380,  2375,  2376,  2390,  1146,
    2377,  2381,  2384,  1875,  2385,  2387,  2388,  2391,  2392,  2393,
    2400,  2401,  2405,  1876,  1877,  2404,  2407,  1878,  2408,  2409,
    2410,  2411,  1879,  1880,  1881,  1882,  1883,  2412,  2415,  1884,
    2418,  1885,  1886,  1887,  2424,  2422,  1888,  1889,  2427,  1890,
    1891,  1892,  2428,  2429,  2430,  1893,  2431,  2445,  2433,  2446,
    2447,  2453,  2454,  2435,  1982,  1983,  1984,  1985,  1986,  1894,
    1987,  2440,  2452,  2455,  1895,  2456,  2458,  2459,  2469,  1896,
    1897,  1898,  2484,  2461,  2462,  2463,  1899,  1900,  2473,  1901,
    1902,  1903,  1904,  2468,  2474,  1905,  2477,  2314,  1907,  1908,
    1909,  2464,  1910,  2478,  1911,  1912,  2465,  1913,  2486,  1914,
    1915,  2482,  1916,  1917,  1918,  1919,  2466,  2491,  2471,  2475,
    2494,  1920,  2479,  1921,  2481,  1922,  1923,  2483,  1924,  1925,
    1926,  1927,  1928,  1929,  2489,  1930,  1931,  1932,  1933,  1934,
    2495,  2496,  2497,  2503,  2502,  2505,  2508,  2511,  2513,  2512,
    1935,  2514,  1936,  2515,  1937,  2516,  2517,  2518,  2520,  2525,
    2527,  2534,  2535,  1938,  2539,  1939,  1940,  1941,  1942,  1943,
    1944,  1945,  2542,  2548,  1946,  1947,  2544,  2555,  2554,  2558,
    1948,  2559,  1949,  1950,  1951,  2560,  1952,  2561,  1953,  2562,
    1954,  1955,  1956,  1957,  2563,  2565,  2574,  2566,  2569,  2580,
    2575,  2572,  2573,  2582,  2577,  2579,  2586,  2587,  2588,  2601,
    2602,  2590,  1958,  1959,  1960,  2591,  2592,  2595,  2593,  2607,
    2609,  2624,  1961,  2202,  1962,  1963,  1964,  2604,  2612,  2614,
    2615,  1965,  2621,  1966,  1967,  1968,  2625,  2626,  2617,  1969,
    2618,  2619,  2620,  1970,  1971,  2633,  2630,  1972,  1973,  1974,
    1975,  2635,  2640,  2645,  1976,  2641,  2652,   603,   604,   605,
     606,   607,   608,   609,  2650,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,  2648,   627,  2676,  2677,  2661,  2684,  2664,  2688,
    2689,  2685,  2690,  2691,  2692,  1977,  1978,  1979,  1980,  1981,
    2693,  1689,  2108,  1437,   813,   387,  2275,  2216,   985,   970,
    1507,   457,  1789,  1116,  1858,  1859,  1860,  1861,  1862,  1863,
    1118,  1864,  2551,  1865,  2608,  2426,  1639,  1866,  1867,  1868,
    2189,  1869,  1290,  1546,  1374,  1627,  1995,  1870,  1871,  1872,
    1873,  1874,  1147,  2179,  2332,  2616,  2436,  1006,   217,   806,
    2362,  1875,  1420,  1127,  1376,  2010,  2030,  2662,  2026,  2339,
     483,  1876,  1877,  1329,  2146,  1878,   764,     0,     0,  1345,
    1879,  1880,  1881,  1882,  1883,     0,     0,  1884,     0,  1885,
    1886,  1887,     0,  1037,  1888,  1889,     0,  1890,  1891,  1892,
       0,     0,     0,  1893,     0,     0,     0,     0,     0,     0,
       0,     0,  1982,  1983,  1984,  1985,  1986,  1894,  1987,     0,
       0,     0,  1895,     0,     0,     0,     0,  1896,  1897,  1898,
       0,     0,     0,     0,  1899,  1900,     0,  1901,  1902,  1903,
    1904,     0,     0,  1905,     0,  2321,  1907,  1908,  1909,     0,
    1910,     0,  1911,  1912,     0,  1913,     0,  1914,  1915,     0,
    1916,  1917,  1918,  1919,     0,     0,     0,     0,     0,  1920,
       0,  1921,     0,  1922,  1923,     0,  1924,  1925,  1926,  1927,
    1928,  1929,     0,  1930,  1931,  1932,  1933,  1934,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1935,     0,
    1936,     0,  1937,     0,     0,     0,     0,     0,     0,     0,
       0,  1938,     0,  1939,  1940,  1941,  1942,  1943,  1944,  1945,
       0,     0,  1946,  1947,     0,     0,     0,     0,  1948,     0,
    1949,  1950,  1951,     0,  1952,     0,  1953,     0,  1954,  1955,
    1956,  1957,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1958,  1959,  1960,     0,     0,     0,     0,     0,     0,     0,
    1961,     0,  1962,  1963,  1964,     0,     0,     0,     0,  1965,
       0,  1966,  1967,  1968,     0,     0,     0,  1969,     0,     0,
       0,  1970,  1971,     0,     0,  1972,  1973,  1974,  1975,     0,
       0,     0,  1976,     0,     0,   603,   604,   605,   606,   607,
     608,   609,     0,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1977,  1978,  1979,  1980,  1981,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1858,  1859,  1860,  1861,  1862,  1863,     0,  1864,
       0,  1865,     0,     0,     0,  1866,  1867,  1868,     0,  1869,
       0,     0,     0,     0,     0,  1870,  1871,  1872,  1873,  1874,
    1148,     0,     0,     0,     0,     0,     0,     0,     0,  1875,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1876,
    1877,     0,     0,  1878,     0,     0,     0,     0,  1879,  1880,
    1881,  1882,  1883,     0,     0,  1884,     0,  1885,  1886,  1887,
       0,     0,  1888,  1889,     0,  1890,  1891,  1892,     0,     0,
       0,  1893,     0,     0,     0,     0,     0,     0,     0,     0,
    1982,  1983,  1984,  1985,  1986,  1894,  1987,     0,     0,     0,
    1895,     0,     0,     0,     0,  1896,  1897,  1898,     0,     0,
       0,     0,  1899,  1900,     0,  1901,  1902,  1903,  1904,     0,
       0,  1905,     0,  2322,  1907,  1908,  1909,     0,  1910,     0,
    1911,  1912,     0,  1913,     0,  1914,  1915,     0,  1916,  1917,
    1918,  1919,     0,     0,     0,     0,     0,  1920,     0,  1921,
       0,  1922,  1923,     0,  1924,  1925,  1926,  1927,  1928,  1929,
       0,  1930,  1931,  1932,  1933,  1934,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1935,     0,  1936,     0,
    1937,     0,     0,     0,     0,     0,     0,     0,     0,  1938,
       0,  1939,  1940,  1941,  1942,  1943,  1944,  1945,     0,     0,
    1946,  1947,     0,     0,     0,     0,  1948,     0,  1949,  1950,
    1951,     0,  1952,     0,  1953,     0,  1954,  1955,  1956,  1957,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1958,  1959,
    1960,     0,     0,     0,     0,     0,     0,     0,  1961,     0,
    1962,  1963,  1964,     0,     0,     0,     0,  1965,     0,  1966,
    1967,  1968,     0,     0,     0,  1969,     0,     0,     0,  1970,
    1971,     0,     0,  1972,  1973,  1974,  1975,     0,     0,     0,
    1976,     0,     0,   603,   604,   605,   606,   607,   608,   609,
       0,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1977,  1978,  1979,  1980,  1981,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1858,  1859,  1860,  1861,  1862,  1863,     0,  1864,     0,  1865,
       0,     0,     0,  1866,  1867,  1868,     0,  1869,     0,     0,
       0,     0,     0,  1870,  1871,  1872,  1873,  1874,  1155,     0,
       0,     0,     0,     0,     0,     0,     0,  1875,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1876,  1877,     0,
       0,  1878,     0,     0,     0,     0,  1879,  1880,  1881,  1882,
    1883,     0,     0,  1884,     0,  1885,  1886,  1887,     0,     0,
    1888,  1889,     0,  1890,  1891,  1892,     0,     0,     0,  1893,
       0,     0,     0,     0,     0,     0,     0,     0,  1982,  1983,
    1984,  1985,  1986,  1894,  1987,     0,     0,     0,  1895,     0,
       0,     0,     0,  1896,  1897,  1898,     0,     0,     0,     0,
    1899,  1900,     0,  1901,  1902,  1903,  1904,     0,     0,  1905,
       0,  2323,  1907,  1908,  1909,     0,  1910,     0,  1911,  1912,
       0,  1913,     0,  1914,  1915,     0,  1916,  1917,  1918,  1919,
       0,     0,     0,     0,     0,  1920,     0,  1921,     0,  1922,
    1923,     0,  1924,  1925,  1926,  1927,  1928,  1929,     0,  1930,
    1931,  1932,  1933,  1934,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1935,     0,  1936,     0,  1937,     0,
       0,     0,     0,     0,     0,     0,     0,  1938,     0,  1939,
    1940,  1941,  1942,  1943,  1944,  1945,     0,     0,  1946,  1947,
       0,     0,     0,     0,  1948,     0,  1949,  1950,  1951,     0,
    1952,     0,  1953,     0,  1954,  1955,  1956,  1957,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1958,  1959,  1960,     0,
       0,     0,     0,     0,     0,     0,  1961,     0,  1962,  1963,
    1964,     0,     0,     0,     0,  1965,     0,  1966,  1967,  1968,
       0,     0,     0,  1969,     0,     0,     0,  1970,  1971,     0,
       0,  1972,  1973,  1974,  1975,     0,     0,     0,  1976,     0,
       0,   603,   604,   605,   606,   607,   608,   609,     0,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,     0,   627,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1977,
    1978,  1979,  1980,  1981,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1858,  1859,
    1860,  1861,  1862,  1863,     0,  1864,     0,  1865,     0,     0,
       0,  1866,  1867,  1868,     0,  1869,     0,     0,     0,     0,
       0,  1870,  1871,  1872,  1873,  1874,  1156,     0,     0,     0,
       0,     0,     0,     0,     0,  1875,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1876,  1877,     0,     0,  1878,
       0,     0,     0,     0,  1879,  1880,  1881,  1882,  1883,     0,
       0,  1884,     0,  1885,  1886,  1887,     0,     0,  1888,  1889,
       0,  1890,  1891,  1892,     0,     0,     0,  1893,     0,     0,
       0,     0,     0,     0,     0,     0,  1982,  1983,  1984,  1985,
    1986,  1894,  1987,     0,     0,     0,  1895,     0,     0,     0,
       0,  1896,  1897,  1898,     0,     0,     0,     0,  1899,  1900,
       0,  1901,  1902,  1903,  1904,     0,     0,  1905,     0,  2324,
    1907,  1908,  1909,     0,  1910,     0,  1911,  1912,     0,  1913,
       0,  1914,  1915,     0,  1916,  1917,  1918,  1919,     0,     0,
       0,     0,     0,  1920,     0,  1921,     0,  1922,  1923,     0,
    1924,  1925,  1926,  1927,  1928,  1929,     0,  1930,  1931,  1932,
    1933,  1934,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1935,     0,  1936,     0,  1937,     0,     0,     0,
       0,     0,     0,     0,     0,  1938,     0,  1939,  1940,  1941,
    1942,  1943,  1944,  1945,     0,     0,  1946,  1947,     0,     0,
       0,     0,  1948,     0,  1949,  1950,  1951,     0,  1952,     0,
    1953,     0,  1954,  1955,  1956,  1957,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1958,  1959,  1960,     0,     0,     0,
       0,     0,     0,     0,  1961,     0,  1962,  1963,  1964,     0,
       0,     0,     0,  1965,     0,  1966,  1967,  1968,     0,     0,
       0,  1969,     0,     0,     0,  1970,  1971,     0,     0,  1972,
    1973,  1974,  1975,     0,     0,     0,  1976,     0,     0,   603,
     604,   605,   606,   607,   608,   609,     0,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1977,  1978,  1979,
    1980,  1981,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1858,  1859,  1860,  1861,
    1862,  1863,     0,  1864,     0,  1865,     0,     0,     0,  1866,
    1867,  1868,     0,  1869,     0,     0,     0,     0,     0,  1870,
    1871,  1872,  1873,  1874,  1157,     0,     0,     0,     0,     0,
       0,     0,     0,  1875,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1876,  1877,     0,     0,  1878,     0,     0,
       0,     0,  1879,  1880,  1881,  1882,  1883,     0,     0,  1884,
       0,  1885,  1886,  1887,     0,     0,  1888,  1889,     0,  1890,
    1891,  1892,     0,     0,     0,  1893,     0,     0,     0,     0,
       0,     0,     0,     0,  1982,  1983,  1984,  1985,  1986,  1894,
    1987,     0,     0,     0,  1895,     0,     0,     0,     0,  1896,
    1897,  1898,     0,     0,     0,     0,  1899,  1900,     0,  1901,
    1902,  1903,  1904,     0,     0,  1905,     0,  2325,  1907,  1908,
    1909,     0,  1910,     0,  1911,  1912,     0,  1913,     0,  1914,
    1915,     0,  1916,  1917,  1918,  1919,     0,     0,     0,     0,
       0,  1920,     0,  1921,     0,  1922,  1923,     0,  1924,  1925,
    1926,  1927,  1928,  1929,     0,  1930,  1931,  1932,  1933,  1934,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1935,     0,  1936,     0,  1937,     0,     0,     0,     0,     0,
       0,     0,     0,  1938,     0,  1939,  1940,  1941,  1942,  1943,
    1944,  1945,     0,     0,  1946,  1947,     0,     0,     0,     0,
    1948,     0,  1949,  1950,  1951,     0,  1952,     0,  1953,     0,
    1954,  1955,  1956,  1957,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1958,  1959,  1960,     0,     0,     0,     0,     0,
       0,     0,  1961,     0,  1962,  1963,  1964,     0,     0,     0,
       0,  1965,     0,  1966,  1967,  1968,     0,     0,     0,  1969,
       0,     0,     0,  1970,  1971,     0,     0,  1972,  1973,  1974,
    1975,     0,     0,     0,  1976,     0,     0,   603,   604,   605,
     606,   607,   608,   609,     0,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1977,  1978,  1979,  1980,  1981,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1858,  1859,  1860,  1861,  1862,  1863,
       0,  1864,     0,  1865,     0,     0,     0,  1866,  1867,  1868,
       0,  1869,     0,     0,     0,     0,     0,  1870,  1871,  1872,
    1873,  1874,  1158,     0,     0,     0,     0,     0,     0,     0,
       0,  1875,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1876,  1877,     0,     0,  1878,     0,     0,     0,     0,
    1879,  1880,  1881,  1882,  1883,     0,     0,  1884,     0,  1885,
    1886,  1887,     0,     0,  1888,  1889,     0,  1890,  1891,  1892,
       0,     0,     0,  1893,     0,     0,     0,     0,     0,     0,
       0,     0,  1982,  1983,  1984,  1985,  1986,  1894,  1987,     0,
       0,     0,  1895,     0,     0,     0,     0,  1896,  1897,  1898,
       0,     0,     0,     0,  1899,  1900,     0,  1901,  1902,  1903,
    1904,     0,     0,  1905,     0,  2326,  1907,  1908,  1909,     0,
    1910,     0,  1911,  1912,     0,  1913,     0,  1914,  1915,     0,
    1916,  1917,  1918,  1919,     0,     0,     0,     0,     0,  1920,
       0,  1921,     0,  1922,  1923,     0,  1924,  1925,  1926,  1927,
    1928,  1929,     0,  1930,  1931,  1932,  1933,  1934,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1935,     0,
    1936,     0,  1937,     0,     0,     0,     0,     0,     0,     0,
       0,  1938,     0,  1939,  1940,  1941,  1942,  1943,  1944,  1945,
       0,     0,  1946,  1947,     0,     0,     0,     0,  1948,     0,
    1949,  1950,  1951,     0,  1952,     0,  1953,     0,  1954,  1955,
    1956,  1957,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1958,  1959,  1960,     0,     0,     0,     0,     0,     0,     0,
    1961,     0,  1962,  1963,  1964,     0,     0,     0,     0,  1965,
       0,  1966,  1967,  1968,     0,     0,     0,  1969,     0,     0,
       0,  1970,  1971,     0,     0,  1972,  1973,  1974,  1975,     0,
       0,     0,  1976,     0,     0,   603,   604,   605,   606,   607,
     608,   609,     0,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1977,  1978,  1979,  1980,  1981,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1858,  1859,  1860,  1861,  1862,  1863,     0,  1864,
       0,  1865,     0,     0,     0,  1866,  1867,  1868,     0,  1869,
       0,     0,     0,     0,     0,  1870,  1871,  1872,  1873,  1874,
    1160,     0,     0,     0,     0,     0,     0,     0,     0,  1875,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1876,
    1877,     0,     0,  1878,     0,     0,     0,     0,  1879,  1880,
    1881,  1882,  1883,     0,     0,  1884,     0,  1885,  1886,  1887,
       0,     0,  1888,  1889,     0,  1890,  1891,  1892,     0,     0,
       0,  1893,     0,     0,     0,     0,     0,     0,     0,     0,
    1982,  1983,  1984,  1985,  1986,  1894,  1987,     0,     0,     0,
    1895,     0,     0,     0,     0,  1896,  1897,  1898,     0,     0,
       0,     0,  1899,  1900,     0,  1901,  1902,  1903,  1904,     0,
       0,  1905,     0,  2420,  1907,  1908,  1909,     0,  1910,     0,
    1911,  1912,     0,  1913,     0,  1914,  1915,     0,  1916,  1917,
    1918,  1919,     0,     0,     0,     0,     0,  1920,     0,  1921,
       0,  1922,  1923,     0,  1924,  1925,  1926,  1927,  1928,  1929,
       0,  1930,  1931,  1932,  1933,  1934,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1935,     0,  1936,     0,
    1937,     0,     0,     0,     0,     0,     0,     0,     0,  1938,
       0,  1939,  1940,  1941,  1942,  1943,  1944,  1945,     0,     0,
    1946,  1947,     0,     0,     0,     0,  1948,     0,  1949,  1950,
    1951,     0,  1952,     0,  1953,     0,  1954,  1955,  1956,  1957,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1958,  1959,
    1960,     0,     0,     0,     0,     0,     0,     0,  1961,     0,
    1962,  1963,  1964,     0,     0,     0,     0,  1965,     0,  1966,
    1967,  1968,     0,     0,     0,  1969,     0,     0,     0,  1970,
    1971,     0,     0,  1972,  1973,  1974,  1975,     0,     0,     0,
    1976,     0,     0,   603,   604,   605,   606,   607,   608,   609,
       0,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1977,  1978,  1979,  1980,  1981,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1858,  1859,  1860,  1861,  1862,  1863,     0,  1864,     0,  1865,
       0,     0,     0,  1866,  1867,  1868,     0,  1869,     0,     0,
       0,     0,     0,  1870,  1871,  1872,  1873,  1874,  1161,     0,
       0,     0,     0,     0,     0,     0,     0,  1875,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1876,  1877,     0,
       0,  1878,     0,     0,     0,     0,  1879,  1880,  1881,  1882,
    1883,     0,     0,  1884,     0,  1885,  1886,  1887,     0,     0,
    1888,  1889,     0,  1890,  1891,  1892,     0,     0,     0,  1893,
       0,     0,     0,     0,     0,     0,     0,     0,  1982,  1983,
    1984,  1985,  1986,  1894,  1987,     0,     0,     0,  1895,     0,
       0,     0,     0,  1896,  1897,  1898,     0,     0,     0,     0,
    1899,  1900,     0,  1901,  1902,  1903,  1904,     0,     0,  1905,
       0,  2421,  1907,  1908,  1909,     0,  1910,     0,  1911,  1912,
       0,  1913,     0,  1914,  1915,     0,  1916,  1917,  1918,  1919,
       0,     0,     0,     0,     0,  1920,     0,  1921,     0,  1922,
    1923,     0,  1924,  1925,  1926,  1927,  1928,  1929,     0,  1930,
    1931,  1932,  1933,  1934,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1935,     0,  1936,     0,  1937,     0,
       0,     0,     0,     0,     0,     0,     0,  1938,     0,  1939,
    1940,  1941,  1942,  1943,  1944,  1945,     0,     0,  1946,  1947,
       0,     0,     0,     0,  1948,     0,  1949,  1950,  1951,     0,
    1952,     0,  1953,     0,  1954,  1955,  1956,  1957,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1958,  1959,  1960,     0,
       0,     0,     0,     0,     0,     0,  1961,     0,  1962,  1963,
    1964,     0,     0,     0,     0,  1965,     0,  1966,  1967,  1968,
       0,     0,     0,  1969,     0,     0,     0,  1970,  1971,     0,
       0,  1972,  1973,  1974,  1975,     0,     0,     0,  1976,     0,
       0,   603,   604,   605,   606,   607,   608,   609,     0,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,     0,   627,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1977,
    1978,  1979,  1980,  1981,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1858,  1859,
    1860,  1861,  1862,  1863,     0,  1864,     0,  1865,     0,     0,
       0,  1866,  1867,  1868,     0,  1869,     0,     0,     0,     0,
       0,  1870,  1871,  1872,  1873,  1874,  1162,     0,     0,     0,
       0,     0,     0,     0,     0,  1875,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1876,  1877,     0,     0,  1878,
       0,     0,     0,     0,  1879,  1880,  1881,  1882,  1883,     0,
       0,  1884,     0,  1885,  1886,  1887,     0,     0,  1888,  1889,
       0,  1890,  1891,  1892,     0,     0,     0,  1893,     0,     0,
       0,     0,     0,     0,     0,     0,  1982,  1983,  1984,  1985,
    1986,  1894,  1987,     0,     0,     0,  1895,     0,     0,     0,
       0,  1896,  1897,  1898,     0,     0,     0,     0,  1899,  1900,
       0,  1901,  1902,  1903,  1904,     0,     0,  1905,     0,  2501,
    1907,  1908,  1909,     0,  1910,     0,  1911,  1912,     0,  1913,
       0,  1914,  1915,     0,  1916,  1917,  1918,  1919,     0,     0,
       0,     0,     0,  1920,     0,  1921,     0,  1922,  1923,     0,
    1924,  1925,  1926,  1927,  1928,  1929,     0,  1930,  1931,  1932,
    1933,  1934,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1935,     0,  1936,     0,  1937,     0,     0,     0,
       0,     0,     0,     0,     0,  1938,     0,  1939,  1940,  1941,
    1942,  1943,  1944,  1945,     0,     0,  1946,  1947,     0,     0,
       0,     0,  1948,     0,  1949,  1950,  1951,     0,  1952,     0,
    1953,     0,  1954,  1955,  1956,  1957,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1958,  1959,  1960,     0,     0,     0,
       0,     0,     0,     0,  1961,     0,  1962,  1963,  1964,     0,
       0,     0,     0,  1965,     0,  1966,  1967,  1968,     0,     0,
       0,  1969,     0,     0,     0,  1970,  1971,     0,     0,  1972,
    1973,  1974,  1975,     0,     0,     0,  1976,     0,     0,   603,
     604,   605,   606,   607,   608,   609,     0,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1977,  1978,  1979,
    1980,  1981,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1858,  1859,  1860,  1861,
    1862,  1863,     0,  1864,     0,  1865,     0,     0,     0,  1866,
    1867,  1868,     0,  1869,     0,     0,     0,     0,     0,  1870,
    1871,  1872,  1873,  1874,  1168,     0,     0,     0,     0,     0,
       0,     0,     0,  1875,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1876,  1877,     0,     0,  1878,     0,     0,
       0,     0,  1879,  1880,  1881,  1882,  1883,     0,     0,  1884,
       0,  1885,  1886,  1887,     0,     0,  1888,  1889,     0,  1890,
    1891,  1892,     0,     0,     0,  1893,     0,     0,     0,     0,
       0,     0,     0,     0,  1982,  1983,  1984,  1985,  1986,  1894,
    1987,     0,     0,     0,  1895,     0,     0,     0,     0,  1896,
    1897,  1898,     0,     0,     0,     0,  1899,  1900,     0,  1901,
    1902,  1903,  1904,     0,     0,  1905,     0,  2504,  1907,  1908,
    1909,     0,  1910,     0,  1911,  1912,     0,  1913,     0,  1914,
    1915,     0,  1916,  1917,  1918,  1919,     0,     0,     0,     0,
       0,  1920,     0,  1921,     0,  1922,  1923,     0,  1924,  1925,
    1926,  1927,  1928,  1929,     0,  1930,  1931,  1932,  1933,  1934,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1935,     0,  1936,     0,  1937,     0,     0,     0,     0,     0,
       0,     0,     0,  1938,     0,  1939,  1940,  1941,  1942,  1943,
    1944,  1945,     0,     0,  1946,  1947,     0,     0,     0,     0,
    1948,     0,  1949,  1950,  1951,     0,  1952,     0,  1953,     0,
    1954,  1955,  1956,  1957,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1958,  1959,  1960,     0,     0,     0,     0,     0,
       0,     0,  1961,     0,  1962,  1963,  1964,     0,     0,     0,
       0,  1965,     0,  1966,  1967,  1968,     0,     0,     0,  1969,
       0,     0,     0,  1970,  1971,     0,     0,  1972,  1973,  1974,
    1975,     0,     0,     0,  1976,     0,     0,   603,   604,   605,
     606,   607,   608,   609,     0,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1977,  1978,  1979,  1980,  1981,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1858,  1859,  1860,  1861,  1862,  1863,
       0,  1864,     0,  1865,     0,     0,     0,  1866,  1867,  1868,
       0,  1869,     0,     0,     0,     0,     0,  1870,  1871,  1872,
    1873,  1874,  1170,     0,     0,     0,     0,     0,     0,     0,
       0,  1875,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1876,  1877,     0,     0,  1878,     0,     0,     0,     0,
    1879,  1880,  1881,  1882,  1883,     0,     0,  1884,     0,  1885,
    1886,  1887,     0,     0,  1888,  1889,     0,  1890,  1891,  1892,
       0,     0,     0,  1893,     0,     0,     0,     0,     0,     0,
       0,     0,  1982,  1983,  1984,  1985,  1986,  1894,  1987,     0,
       0,     0,  1895,     0,     0,     0,     0,  1896,  1897,  1898,
       0,     0,     0,     0,  1899,  1900,     0,  1901,  1902,  1903,
    1904,     0,     0,  1905,     0,  2547,  1907,  1908,  1909,     0,
    1910,     0,  1911,  1912,     0,  1913,     0,  1914,  1915,     0,
    1916,  1917,  1918,  1919,     0,     0,     0,     0,     0,  1920,
       0,  1921,     0,  1922,  1923,     0,  1924,  1925,  1926,  1927,
    1928,  1929,     0,  1930,  1931,  1932,  1933,  1934,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1935,     0,
    1936,     0,  1937,     0,     0,     0,     0,     0,     0,     0,
       0,  1938,     0,  1939,  1940,  1941,  1942,  1943,  1944,  1945,
       0,     0,  1946,  1947,     0,     0,     0,     0,  1948,     0,
    1949,  1950,  1951,     0,  1952,     0,  1953,     0,  1954,  1955,
    1956,  1957,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1958,  1959,  1960,     0,     0,     0,     0,     0,     0,     0,
    1961,     0,  1962,  1963,  1964,     0,     0,     0,     0,  1965,
       0,  1966,  1967,  1968,     0,     0,     0,  1969,     0,     0,
       0,  1970,  1971,     0,     0,  1972,  1973,  1974,  1975,     0,
       0,     0,  1976,   603,   604,   605,   606,   607,   608,   609,
       0,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1977,  1978,  1979,  1980,  1981,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1858,  1859,  1860,  1861,  1862,  1863,     0,  1864,
       0,  1865,     0,     0,     0,  1866,  1867,  1868,     0,  1869,
       0,     0,     0,     0,     0,  1870,  1871,  1872,  1873,  1874,
    1175,     0,     0,     0,     0,     0,     0,     0,     0,  1875,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1876,
    1877,     0,     0,  1878,     0,     0,     0,     0,  1879,  1880,
    1881,  1882,  1883,     0,     0,  1884,     0,  1885,  1886,  1887,
       0,     0,  1888,  1889,     0,  1890,  1891,  1892,     0,     0,
       0,  1893,     0,     0,     0,     0,     0,     0,     0,     0,
    1982,  1983,  1984,  1985,  1986,  1894,  1987,     0,     0,     0,
    1895,     0,     0,     0,     0,  1896,  1897,  1898,     0,     0,
       0,     0,  1899,  1900,     0,  1901,  1902,  1903,  1904,     0,
       0,  1905,     0,  2585,  1907,  1908,  1909,     0,  1910,     0,
    1911,  1912,     0,  1913,     0,  1914,  1915,     0,  1916,  1917,
    1918,  1919,     0,     0,     0,     0,     0,  1920,     0,  1921,
       0,  1922,  1923,     0,  1924,  1925,  1926,  1927,  1928,  1929,
       0,  1930,  1931,  1932,  1933,  1934,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1935,     0,  1936,     0,
    1937,     0,     0,     0,     0,     0,     0,     0,     0,  1938,
       0,  1939,  1940,  1941,  1942,  1943,  1944,  1945,     0,     0,
    1946,  1947,     0,     0,     0,     0,  1948,     0,  1949,  1950,
    1951,     0,  1952,     0,  1953,     0,  1954,  1955,  1956,  1957,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
     224,   225,   226,   227,   228,     0,     0,     0,  1958,  1959,
    1960,     0,     0,   229,   230,     0,     0,     0,  1961,     0,
    1962,  1963,  1964,   231,   232,     0,     0,  1965,     0,  1966,
    1967,  1968,     0,     0,     0,  1969,   233,     0,     0,  1970,
    1971,     0,     0,  1972,  1973,  1974,  1975,     0,     0,     0,
    1976,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,     0,
       0,     0,     0,   235,     0,     0,   236,   237,     0,     0,
       0,     0,     0,     0,     0,   238,     0,     0,     0,     0,
       0,  1977,  1978,  1979,  1980,  1981,     0,     0,     0,     0,
       0,     0,   239,     0,     0,     0,   240,   603,   604,   605,
     606,   607,   608,   609,     0,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,     0,     0,  1176,     0,     0,     0,
       0,     0,   241,     0,   603,   604,   605,   606,   607,   608,
     609,     0,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   243,
       0,     0,     0,     0,     0,     0,     0,     0,  1982,  1983,
    1984,  1985,  1986,     0,  1987,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,     0,     0,     0,     0,     0,     0,   246,
     247,     0,     0,     0,   248,   604,   605,   606,   607,   608,
     609,     0,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   249,
     627,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,     0,   288,     0,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,     0,     0,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,     0,   336,   337,
     338,   339,     0,     0,     0,     0,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     353,   223,   224,   225,   226,   227,   228,     0,     0,     0,
       0,     0,     0,     0,     0,   229,   230,     0,     0,     0,
     354,     0,     0,     0,     0,   231,     0,     0,     0,     0,
     355,   356,     0,     0,     0,     0,     0,   357,   603,   604,
     605,   606,   607,   608,   609,     0,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   823,   627,     0,     0,     0,     0,     0,
     234,     0,     0,     0,     0,   235,     0,     0,   236,   237,
     603,   604,   605,   606,   607,   608,   609,   238,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,   603,   604,   605,
     606,   607,   608,   609,     0,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,     0,     0,     0,     0,     0,     0,
    1177,   603,   604,   605,   606,   607,   608,   609,     0,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,     0,   627,     0,     0,
       0,     0,     0,     0,     0,     0,   824,  1178,     0,     0,
       0,   242,     0,     0,   603,   604,   605,   606,   607,   608,
     609,   243,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,     0,   603,   604,   605,   606,
     607,   608,   609,   244,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   825,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,     0,   288,     0,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,     0,     0,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,     0,
     336,   337,   338,   339,     0,     0,     0,     0,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   353,   223,   224,   225,   226,   227,   228,     0,
       0,     0,     0,     0,     0,     0,     0,   229,   230,     0,
       0,     0,   354,     0,     0,     0,     0,   231,     0,     0,
       0,     0,   355,   356,     0,     0,     0,     0,     0,   357,
     947,     0,     0,  -821,  -821,  -821,  -821,   948,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,  1190,   234,     0,     0,     0,     0,   235,     0,     0,
     236,   237,   603,   604,   605,   606,   607,   608,   609,   238,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,     0,  1191,     0,   603,   604,   605,   606,   607,
     608,   609,     0,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
    1192,   627,   603,   604,   605,   606,   607,   608,   609,     0,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,     0,     0,  1194,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,     0,   603,   604,   605,   606,
     607,   608,   609,   243,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,  1205,     0,     0,
       0,     0,     0,     0,     0,   244,     0,     0,     0,     0,
       0,     0,   949,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1214,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,     0,
     288,     0,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
       0,     0,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,     0,   336,   337,   338,   339,     0,     0,     0,     0,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   353,   223,   224,   225,   226,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,   229,
     230,     0,     0,     0,   354,     0,     0,     0,     0,   231,
       0,     0,     0,     0,   355,   356,     0,     0,     0,     0,
       0,   950,   603,   604,   605,   606,   607,   608,   609,     0,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,     0,     0,   234,     0,     0,     0,     0,   235,
       0,     0,   236,   237,   603,   604,   605,   606,   607,   608,
     609,   238,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,  1215,   603,   604,   605,   606,
     607,   608,   609,     0,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,     0,  1216,     0,
     603,   604,   605,   606,   607,   608,   609,     0,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,  1217,   627,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,   603,   604,
     605,   606,   607,   608,   609,   243,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,     0,  1218,
     603,   604,   605,   606,   607,   608,   609,   244,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,     0,     0,
       0,     0,     0,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,     0,   288,     0,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,     0,     0,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,     0,   336,   337,   338,   339,     0,     0,
       0,     0,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   353,   223,   224,   225,
     226,   227,   228,     0,     0,     0,     0,     0,     0,     0,
       0,   229,   230,     0,     0,     0,   354,     0,     0,     0,
       0,   231,   864,     0,     0,     0,   355,   356,     0,     0,
       0,     0,     0,   357,   603,   604,   605,   606,   607,   608,
     609,     0,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,  1219,   234,     0,     0,     0,
       0,   235,     0,     0,   236,   237,   603,   604,   605,   606,
     607,   608,   609,   238,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,  1220,   603,   604,
     605,   606,   607,   608,   609,     0,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,     0,  1221,
     603,   604,   605,   606,   607,   608,   609,     0,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,     0,     0,  1227,     0,     0,     0,   242,     0,     0,
     603,   604,   605,   606,   607,   608,   609,   243,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,  1231,   603,   604,   605,   606,   607,   608,   609,   244,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,     0,  1232,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,     0,   288,     0,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,     0,     0,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,     0,   336,   337,   338,   339,
       0,     0,     0,     0,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,   351,   352,   353,   223,
     224,   225,   226,   227,   228,     0,     0,     0,     0,     0,
       0,     0,     0,   229,   230,     0,     0,     0,   354,     0,
       0,     0,     0,   231,     0,     0,     0,     0,   355,   356,
       0,     0,     0,     0,     0,   357,   603,   604,   605,   606,
     607,   608,   609,     0,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,  1233,   234,     0,
       0,     0,     0,   235,     0,     0,   236,   237,     0,     0,
       0,     0,     0,     0,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   603,   604,   605,   606,   607,   608,   609,  1234,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,  1144,     0,   603,   604,   605,   606,   607,   608,
     609,  1235,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1239,     0,     0,     0,     0,     0,   242,
       0,     0,   603,   604,   605,   606,   607,   608,   609,   243,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,     0,  1240,   603,   604,   605,   606,   607,   608,
     609,   244,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,  1241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,     0,   288,     0,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,     0,     0,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,     0,   336,   337,
     338,   339,     0,     0,     0,     0,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     353,   223,   224,   225,   226,   227,   228,     0,     0,     0,
       0,     0,     0,     0,     0,   229,   230,     0,     0,     0,
     354,     0,     0,     0,     0,   231,     0,     0,     0,     0,
     355,   356,     0,     0,     0,     0,     0,   357,   603,   604,
     605,   606,   607,   608,   609,     0,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,     0,  1243,
     234,     0,     0,     0,     0,   235,     0,     0,   236,   237,
       0,     0,     0,     0,     0,     0,     0,   238,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   603,   604,   605,   606,   607,   608,
     609,  1675,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,  1428,   603,   604,   605,   606,
     607,   608,   609,     0,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,  1702,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,     0,   603,   604,   605,   606,   607,   608,
     609,   243,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,  1703,   603,   604,   605,   606,
     607,   608,   609,   244,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,  1714,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,     0,   288,     0,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,     0,     0,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,     0,
     336,   337,   338,   339,     0,     0,     0,     0,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   353,   223,   224,   225,   226,   227,   228,     0,
       0,     0,     0,     0,     0,     0,     0,   229,   230,     0,
       0,     0,   354,     0,     0,     0,     0,   231,     0,     0,
       0,     0,   355,   356,     0,     0,     0,     0,     0,   357,
     603,   604,   605,   606,   607,   608,   609,     0,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,  1724,   234,     0,     0,     0,     0,   235,     0,     0,
     236,   237,     0,     0,     0,     0,     0,     0,     0,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   603,   604,   605,   606,
     607,   608,   609,  1680,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,  1740,   603,   604,
     605,   606,   607,   608,   609,     0,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,     0,  1741,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,     0,   603,   604,   605,   606,
     607,   608,   609,   243,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,  1742,   603,   604,
     605,   606,   607,   608,   609,   244,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,     0,  1745,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,     0,
     288,     0,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
       0,     0,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,     0,   336,   337,   338,   339,     0,     0,     0,     0,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   353,   223,   224,   225,   226,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,   229,
     230,     0,     0,     0,   354,     0,     0,     0,     0,   231,
       0,     0,     0,     0,   355,   356,     0,     0,     0,     0,
       0,   357,   603,   604,   605,   606,   607,   608,   609,     0,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,     0,  1746,   234,     0,     0,     0,     0,   235,
       0,     0,   236,   237,     0,     0,     0,     0,     0,     0,
       0,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   603,   604,
     605,   606,   607,   608,   609,  2221,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,     0,  1759,
     603,   604,   605,   606,   607,   608,   609,     0,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,  1760,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,   603,   604,
     605,   606,   607,   608,   609,   243,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,     0,  1761,
     603,   604,   605,   606,   607,   608,   609,   244,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,  2264,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,     0,   288,     0,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,     0,     0,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,     0,   336,   337,   338,   339,     0,     0,
       0,     0,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   353,   223,   224,   225,
     226,   227,   228,     0,     0,     0,     0,     0,     0,     0,
       0,   229,   230,     0,     0,     0,   354,     0,     0,     0,
       0,   231,     0,     0,     0,     0,   355,   356,     0,     0,
       0,     0,     0,   357,   603,   604,   605,   606,   607,   608,
     609,     0,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,  2267,   234,     0,     0,     0,
       0,   235,     0,     0,   236,   237,     0,     0,     0,     0,
       0,     0,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1179,
     603,   604,   605,   606,   607,   608,   609,  2223,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,  2268,   603,   604,   605,   606,   607,   608,   609,     0,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,     0,  2269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   242,     0,     0,
     603,   604,   605,   606,   607,   608,   609,   243,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
    1180,     0,   603,   604,   605,   606,   607,   608,   609,   244,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,   931,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,     0,   288,     0,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,     0,     0,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,     0,   336,   337,   338,   339,
       0,     0,     0,     0,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,   351,   352,   353,   223,
     224,   225,   226,   227,   228,     0,     0,     0,     0,     0,
       0,     0,     0,   229,   230,     0,     0,     0,   354,     0,
       0,     0,     0,   231,     0,     0,     0,     0,   355,   356,
       0,     0,     0,     0,     0,   357,   603,   604,   605,   606,
     607,   608,   609,     0,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,  1143,     0,   234,     0,
       0,     0,     0,   235,     0,     0,   236,   237,   603,   604,
     605,   606,   607,   608,   609,   238,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,     0,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,  1149,   603,   604,   605,   606,   607,   608,   609,
       0,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
       0,     0,     0,     0,  1150,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,     0,   603,   604,   605,   606,   607,   608,   609,   243,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,     0,
       0,     0,  1151,     0,   603,   604,   605,   606,   607,   608,
     609,   244,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,  1152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,     0,   288,     0,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,     0,     0,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,     0,   336,   337,
     338,   339,     0,     0,     0,     0,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     353,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     355,   356,     0,     0,     0,     0,     0,   357,   603,   604,
     605,   606,   607,   608,   609,     0,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,  1153,   603,
     604,   605,   606,   607,   608,   609,     0,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,     0,     0,     0,     0,
       0,     0,     0,   603,   604,   605,   606,   607,   608,   609,
    1154,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
     603,   604,   605,   606,   607,   608,   609,  1159,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,   603,   604,
     605,   606,   607,   608,   609,  1163,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,     0,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,     0,  1164,   603,   604,   605,   606,   607,
     608,   609,     0,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,     0,     0,     0,  1165,   603,   604,   605,
     606,   607,   608,   609,     0,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,   603,   604,   605,   606,   607,   608,
     609,     0,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,   603,   604,   605,   606,   607,   608,   609,     0,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,     0,   627,   603,   604,
     605,   606,   607,   608,   609,     0,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,     0,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,   603,   604,   605,   606,   607,   608,   609,     0,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,   603,
     604,   605,   606,   607,   608,   609,     0,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   603,   604,   605,   606,   607,   608,   609,
    1169,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
       0,     0,     0,     0,   603,   604,   605,   606,   607,   608,
     609,  1171,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,     0,     0,     0,   603,   604,
     605,   606,   607,   608,   609,  1172,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,  1173,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,   603,   604,   605,   606,   607,   608,   609,
    1182,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
     603,   604,   605,   606,   607,   608,   609,  1183,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
     603,   604,   605,   606,   607,   608,   609,  1184,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,     0,   603,   604,   605,   606,   607,   608,   609,  1185,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,   603,
     604,   605,   606,   607,   608,   609,  1186,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,   603,   604,   605,   606,
     607,   608,   609,  1187,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,   603,   604,   605,   606,   607,   608,   609,
    1188,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
     603,   604,   605,   606,   607,   608,   609,  1189,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,   603,   604,   605,
     606,   607,   608,   609,  1193,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,   603,   604,   605,   606,   607,   608,
     609,  1206,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   603,   604,
     605,   606,   607,   608,   609,  1207,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,     0,   603,
     604,   605,   606,   607,   608,   609,  1208,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,     0,     0,     0,     0,
       0,     0,     0,   603,   604,   605,   606,   607,   608,   609,
    1209,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
     603,   604,   605,   606,   607,   608,   609,  1210,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,   603,   604,
     605,   606,   607,   608,   609,  1211,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,  1212,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,     0,     0,   603,   604,   605,   606,   607,
     608,   609,  1213,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,     0,     0,     0,     0,   603,   604,   605,
     606,   607,   608,   609,  1224,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,   603,   604,   605,   606,   607,   608,
     609,  1225,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,   603,   604,   605,   606,   607,   608,   609,  1226,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,     0,   627,   603,   604,
     605,   606,   607,   608,   609,  1230,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,  1236,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,   603,   604,   605,   606,   607,   608,   609,  1237,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,   603,
     604,   605,   606,   607,   608,   609,  1238,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   603,   604,   605,   606,   607,   608,   609,
    1242,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
       0,     0,     0,     0,   603,   604,   605,   606,   607,   608,
     609,  1268,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,     0,     0,     0,   603,   604,
     605,   606,   607,   608,   609,  1694,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,  1699,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,   603,   604,   605,   606,   607,   608,   609,
    1700,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
     603,   604,   605,   606,   607,   608,   609,  1701,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
     603,   604,   605,   606,   607,   608,   609,  1704,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,     0,   603,   604,   605,   606,   607,   608,   609,  1705,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,   603,
     604,   605,   606,   607,   608,   609,  1706,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,   603,   604,   605,   606,
     607,   608,   609,  1707,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,   603,   604,   605,   606,   607,   608,   609,
    1708,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
     603,   604,   605,   606,   607,   608,   609,  1709,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,   603,   604,   605,
     606,   607,   608,   609,  1712,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,   603,   604,   605,   606,   607,   608,
     609,  1713,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   603,   604,
     605,   606,   607,   608,   609,  1725,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,     0,     0,     0,     0,   603,
     604,   605,   606,   607,   608,   609,  1726,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,     0,     0,     0,     0,
       0,     0,     0,   603,   604,   605,   606,   607,   608,   609,
    1739,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
     603,   604,   605,   606,   607,   608,   609,  1743,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,   603,   604,
     605,   606,   607,   608,   609,  1744,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,  1753,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,     0,     0,   603,   604,   605,   606,   607,
     608,   609,  1754,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,     0,     0,     0,     0,   603,   604,   605,
     606,   607,   608,   609,  1755,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,   603,   604,   605,   606,   607,   608,
     609,  1756,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,   603,   604,   605,   606,   607,   608,   609,  1757,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,     0,   627,   603,   604,
     605,   606,   607,   608,   609,  1758,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,  1762,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,   603,   604,   605,   606,   607,   608,   609,  1840,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,   603,
     604,   605,   606,   607,   608,   609,  2052,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   603,   604,   605,   606,   607,   608,   609,
    2126,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
       0,     0,     0,     0,   603,   604,   605,   606,   607,   608,
     609,  2197,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,     0,     0,     0,   603,   604,
     605,   606,   607,   608,   609,  2229,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   603,   604,   605,   606,   607,
     608,   609,  2230,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,   603,   604,   605,   606,   607,   608,   609,
    2231,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
     603,   604,   605,   606,   607,   608,   609,  2232,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
     603,   604,   605,   606,   607,   608,   609,  2233,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,     0,   603,   604,   605,   606,   607,   608,   609,  2242,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,   603,
     604,   605,   606,   607,   608,   609,  2259,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,   603,   604,   605,   606,
     607,   608,   609,  2260,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,    83,   627,   603,   604,   605,   606,   607,   608,   609,
    2261,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
     603,   604,   605,   606,   607,   608,   609,  2262,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627,     0,     0,     0,
       0,     0,     0,     1,  2263,     0,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,  2265,     0,    85,     3,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,     0,     0,     6,     7,  2266,     0,     0,     0,   603,
     604,   605,   606,   607,   608,   609,    88,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,  2297,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     9,    10,    11,     0,     0,     0,
    2303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,     0,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,  2307,     0,     0,
       0,     0,    12,     0,    13,     0,     0,    93,    94,     0,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,  2312,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,  2434,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   603,   604,   605,   606,   607,
     608,   609,  2441,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,     0,     0,     0,     0,     0,   603,   604,   605,
     606,   607,   608,   609,  2467,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,    96,   627,     0,     0,     0,     0,     0,     0,
       0,  2480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1132,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,  2498,  2053,
    2054,     0,     0,     0,  2055,     0,  2056,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,    20,     0,     0,     0,  2499,     0,     0,   705,   706,
      21,   707,     0,   708,   709,     0,     0,     0,     0,  2057,
    2058,     0,  2059,     0,     0,    22,    23,     0,     0,   710,
       0,     0,  2553,   603,   604,   605,   606,   607,   608,   609,
       0,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,     0,   627,
       0,   711,   712,   713,   714,   602,     0,     0,     0,     0,
     715,     0,   603,   604,   605,   606,   607,   608,   609,   716,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,   717,
       0,     0,     0,     0,     0,     0,     0,   718,     0,     0,
       0,     0,     0,   628,     0,     0,     0,     0,     0,     0,
       0,     0,   719,     0,     0,     0,     0,     0,     0,   720,
       0,     0,   721,     0,     0,   722,   723,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,  2060,  2061,   603,   604,   605,   606,   607,
     608,   609,     0,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
       0,   627,   490,     0,     0,     0,   725,   726,     0,     0,
     727,   728,     0,     0,     0,     0,   729,     0,   730,     0,
       0,     0,     0,   731,   732,     0,     0,     0,     0,   733,
       0,   734,     0,     0,     0,     0,     0,   735,     0,   736,
     737,     0,     0,     0,     0,   738,   603,   604,   605,   606,
     607,   608,   609,     0,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,     0,   627,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1426,     0,     0,     0,
       0,  1434,   603,   604,   605,   606,   607,   608,   609,     0,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,     0,   627,   603,
     604,   605,   606,   607,   608,   609,     0,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,     0,   627,     0,     0,     0,     0,
    1425,   603,   604,   605,   606,   607,   608,   609,  2031,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,     0,   627,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1174,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1686,     0,     0,     0,
       0,     0,     0,     0,   603,   604,   605,   606,   607,   608,
     609,  2032,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,     0,
     627,     0,     0,     0,     0,     0,     0,   603,   604,   605,
     606,   607,   608,   609,  1252,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,     0,   627,     0,     0,     0,     0,     0,     0,
     603,   604,   605,   606,   607,   608,   609,  1500,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,   627
};

static const yytype_int16 yycheck[] =
{
     129,  1272,  1340,  1669,   374,  1523,  1381,   648,  1616,   368,
    1297,  1298,   364,  1795,  1534,  1654,  1303,   433,  1356,  1052,
    1053,    20,  2016,  2022,   784,  1058,   136,  1060,   979,     3,
      36,  1369,     5,   107,   136,   199,   159,   107,     3,     6,
       3,     4,     5,     6,     7,     8,     3,   140,    20,   159,
     199,    18,  1652,     3,  1127,     4,  1129,  1402,  1551,  1552,
    1786,   240,     8,     4,     4,   240,   240,     4,    97,   266,
     368,     3,    87,    51,    40,     6,   266,  1570,   154,    18,
      90,   266,   154,   157,   266,   266,     3,     3,   107,   218,
     219,   107,   683,     3,    51,   266,    48,   266,     3,   458,
     229,   230,   231,    18,   252,   274,   235,    10,    11,    12,
      13,    14,    15,    16,    36,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   274,    36,   136,  2075,  2076,   113,   230,  1130,
     216,   107,   266,     3,   216,   277,  2086,  2087,     3,     3,
     741,    78,   108,   219,   259,    71,    16,     3,    97,    49,
       3,     4,     5,     6,     7,     8,   258,   204,    84,    71,
      74,     4,     5,     6,     7,   280,   154,   274,     3,     3,
    1728,  1729,    97,   277,   258,    95,   252,    18,  1788,  1737,
    1738,   157,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   193,    36,   136,
     172,    71,   112,  1831,   984,     3,   193,     5,   357,   248,
     193,   268,     3,   268,   249,  1843,   433,   154,   216,    72,
     269,   431,   258,   245,   183,   197,   431,   184,   258,   431,
     431,   156,   193,   193,   433,  1246,   431,   431,   197,   176,
     431,   430,   193,   241,   433,  1603,  1553,     3,   183,   433,
    1790,   630,  1880,   197,   201,   241,   228,  1615,   401,   351,
    1655,   227,   197,  1891,   433,   637,   203,   236,   237,   417,
     150,   433,   258,  1631,  2234,  2235,  2236,  2237,  2238,  2239,
      98,   433,   258,  1911,   277,   371,   210,   431,  2248,   113,
     252,  1262,  2252,   167,  1807,   217,  2256,  1925,   136,   173,
    1665,   167,  2048,   433,   398,   277,  1934,   173,   398,   399,
     400,   433,   156,    71,   261,   195,   433,   407,   404,   433,
     433,   252,   266,   252,  2343,  1418,    84,  1420,  2342,   990,
     193,   149,   319,   184,  1114,   431,   391,   486,   430,   431,
     426,   490,   327,   328,   329,   330,  1974,   217,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,    48,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   241,   525,   526,   527,   351,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,  2017,  2018,  1010,
    1011,     3,   551,   552,   783,   417,   432,   556,   557,  1020,
     404,   430,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   404,   584,   585,   586,   430,   588,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   432,
     599,   600,   404,   430,   603,   604,   605,   606,   607,  1070,
    1071,  1072,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,  1259,
     333,   334,   335,   632,  2286,   803,   422,  1498,   806,   638,
     432,   429,    78,  1851,     3,  1853,     0,  2065,  2066,  2067,
    2068,  2069,  2070,   821,    78,     3,    74,   381,   197,  2077,
      87,   434,  2472,  2081,   268,   381,  2476,  2085,   396,  2147,
     430,     3,    99,    74,  2152,   376,   377,   378,   379,  2215,
    1583,     3,  1585,  1586,   124,   125,    92,  2196,    18,   228,
      96,    54,    55,     3,    18,     3,   113,     3,   134,     3,
       3,     3,     3,     3,   156,   277,    55,   431,   135,    39,
     134,    74,     3,  1174,  1175,   431,   143,     3,    48,     3,
       3,    51,     3,    53,    48,     3,    56,    51,   431,    53,
    2120,     3,    56,    49,     3,  2271,    71,    85,   277,     3,
       5,    71,   133,    78,     5,   433,   177,    71,    78,    79,
     139,   973,  1038,  1039,    78,    79,  2613,  2567,  2568,    20,
    2570,  2571,    84,   154,  1275,   201,   193,  1278,   124,   125,
     137,   177,    18,     3,   192,    62,   193,   201,    84,    66,
      71,    85,   781,   113,   215,  2642,  2643,   391,  1996,   113,
      36,   192,   210,    84,  2002,    87,   112,   156,    63,   134,
     130,     3,    51,   138,   430,   431,   241,    99,   156,   210,
     978,    60,   351,   202,     3,   242,   815,   816,  2675,     3,
     155,   820,   240,     3,   156,   261,    28,   114,   827,   164,
     117,  2309,    78,   200,   164,   275,   271,   261,  1299,   240,
     164,  2493,     3,   135,    28,   132,   156,   210,   156,  2327,
     277,   143,   156,   156,   156,   156,   156,   431,   430,   208,
     100,   241,    51,   193,  1104,   152,   201,   113,   235,   193,
    2027,   201,   156,   160,  2557,   156,   267,   201,   156,   155,
     120,  1511,     3,   216,   156,    14,  2274,   156,   164,    18,
      38,   271,   156,  2283,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   275,
      36,   100,    39,   415,     9,   100,   261,    75,  2611,  2612,
      51,   261,   156,  2469,     3,    20,   155,   261,     3,   431,
    2418,   120,    59,   942,   943,   120,   945,  2192,    51,  2485,
     242,   950,   100,     3,    51,  2163,     3,    60,  2641,    51,
     108,  2379,   249,    60,   251,  2383,  2107,     3,    60,   398,
     399,   400,   120,  2181,   396,  2183,    10,    11,    12,    13,
      14,    15,    16,   270,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   246,    36,   155,   431,    45,    46,   721,    76,    33,
      34,  2399,    36,   727,  2404,   729,   103,   396,    13,    14,
     103,    16,     3,   103,    19,   432,   433,  2505,  1268,  2565,
     103,  1260,    10,    11,    12,    13,    14,    15,    16,   187,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   103,    36,   146,
     208,   432,   433,   146,   432,   433,   146,   154,  1067,  2539,
     252,   154,   159,   146,   154,     3,    32,    33,    34,  1247,
      36,   154,   223,   224,   396,   153,   432,   433,  1256,   176,
     432,   433,   240,   176,   171,   163,   176,    82,    83,  2489,
     146,   432,   433,   176,   432,   433,   432,   433,   154,   177,
     433,  2529,  2530,     3,  2532,  2533,   405,   406,   432,   433,
       3,   269,   190,   432,   433,   432,   433,     3,  2336,   396,
     176,     4,     5,  1132,  2275,  1134,   432,   433,   432,   433,
       4,     5,  1141,  1142,     3,  1144,   136,   215,   433,  1148,
     432,   433,  2542,   432,   433,   159,  1155,  1156,  1157,  1158,
       3,  1160,  1161,  1162,   432,   433,   432,   433,  1167,  1168,
     238,  1170,   432,   433,   432,   433,   136,  1176,  1177,  1178,
      28,    29,    30,    31,    32,    33,    34,  2577,    36,   432,
     433,  1190,  1191,  1192,   136,  1194,  1657,   136,  1045,  1046,
     409,  1048,  1049,  1050,   432,   433,  1205,  1054,  1055,  1056,
     432,   433,  1059,     3,  2604,  1214,  1215,  1216,  1217,  1218,
    1219,  1220,  1221,     3,  1223,  1393,   432,   433,  1227,     3,
    1229,  2621,  1231,  1232,  1233,  1234,  1235,   432,   433,   281,
    1239,  1240,  1241,     3,  1243,  2635,   432,   433,    51,   432,
     433,   432,   433,  1252,     3,  1254,  1255,   431,  2648,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    1269,    36,   432,   433,  2664,   432,   433,  1276,    10,    11,
      12,    13,    14,    15,    16,   197,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   431,    36,   708,   709,   710,   711,   281,
     713,    57,    58,   716,   717,   718,   432,   433,   432,   433,
     723,   724,   725,   432,   433,   728,   432,   433,   432,   433,
     197,  1499,   432,   433,  1502,     3,  1504,     3,  1506,  1338,
     140,    10,    11,    12,    13,    14,    15,    16,   281,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   197,    36,    10,    11,
      12,    13,    14,    15,    16,   281,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   431,    36,   432,   433,   430,   432,   433,
     432,   433,   432,   433,   432,   433,   432,   433,  1407,   432,
     433,     3,  1411,   432,   433,   432,   433,     3,  1417,   432,
     433,   432,   433,   432,   433,   432,   433,  1426,   281,  1428,
     432,   433,   432,   433,   281,  1434,  1435,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   281,    36,   432,   433,   432,   433,    10,    11,
      12,    13,    14,    15,    16,   281,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   197,    36,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   281,
      36,  1500,    10,    11,    12,    13,    14,    15,    16,   281,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,  1526,    36,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   281,    36,   281,  1547,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     4,    36,   432,   433,    10,    11,
      12,    13,    14,    15,    16,   245,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     3,    36,    10,    11,    12,    13,    14,
      15,    16,     8,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       9,    36,   140,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   430,    36,   431,  1647,   432,
     433,    10,    11,    12,    13,    14,    15,    16,    36,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   431,    36,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   431,    36,
     431,  1690,   432,   433,  1693,    57,    58,   430,   431,     3,
     432,   433,   431,  1702,  1703,   431,    26,    27,    28,    29,
      30,    31,    32,    33,    34,  1714,    36,   432,   433,   432,
     433,   430,   431,   431,  1723,  1724,   432,   433,   432,   433,
     432,   433,   432,   433,   432,   433,   986,   987,  1264,  1265,
     431,  1740,  1741,  1742,  1780,  1781,  1745,  1746,   431,  1748,
     431,  1750,   431,  1752,   431,   431,   431,   431,   431,   431,
    1759,  1760,  1761,   432,   433,    51,   431,   431,   431,   431,
     431,     3,   431,   431,   431,   431,   431,   431,   431,    95,
     431,   431,   431,   431,  1783,  1784,   431,   431,   431,   159,
     432,   433,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,     3,     4,     5,     6,     7,     8,
     431,    10,  1811,    12,   431,   431,  1815,    16,    17,    18,
     431,    20,   181,   139,   431,   431,  1825,    26,    27,    28,
      29,    30,   431,   431,   431,   431,   431,   431,   431,   155,
    1839,    40,   431,   431,   431,     3,   431,   431,     3,   431,
     431,    50,    51,   431,   431,    54,   431,   431,   431,   431,
      59,    60,    61,    62,    63,   431,   431,    66,   431,    68,
      69,    70,   431,   431,    73,    74,   431,    76,    77,    78,
     432,   433,   431,    82,   431,   431,   202,   431,   431,   431,
     431,   431,   431,   431,   431,     3,   431,    96,   431,   431,
     431,   431,   101,   219,   431,   221,   431,   106,   107,   108,
     431,   227,   431,   431,   113,   114,   431,   116,   117,   118,
     119,   431,   431,   122,   432,   124,   125,   126,   127,   431,
     129,   431,   131,   132,   433,   134,   252,   136,   137,   431,
     139,   140,   141,   142,   431,     3,     3,    16,   266,   148,
     421,   150,    53,   152,   153,    53,   155,   156,   157,   158,
     159,   160,    44,   162,   163,   164,   165,   166,     3,   423,
     277,   432,   433,   245,    71,     3,     3,   197,   177,     3,
     179,   197,   181,   281,     3,   197,   281,   277,   281,   281,
     418,   190,     3,   192,   193,   194,   195,   196,   197,   198,
     432,   433,   201,   202,   428,     3,     3,     3,   207,     3,
     209,   210,   211,    28,   213,     3,   215,     3,   217,   218,
     219,   220,     3,     3,     3,     3,     3,   432,   433,    74,
     281,    74,   281,     3,     3,     3,     3,    36,  2037,  2038,
     239,   240,   241,     3,  2043,     3,  2045,   434,   432,   432,
     249,   432,   251,   252,   253,   371,   432,   432,   432,   258,
     432,   260,   261,   262,   432,   432,   432,   266,   432,     5,
     431,   270,   271,     3,   433,   274,   275,   276,   277,   395,
     432,   432,   281,   432,   432,     3,   432,     3,   404,     3,
     432,     3,   163,   196,     3,     3,   271,     3,   274,   402,
     402,   417,   271,   274,     3,   273,  2105,  2106,     5,     5,
     426,   277,     3,    42,    42,     3,     3,     3,     3,     3,
       3,   245,     3,   322,   323,   324,   325,   326,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     3,    36,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,  2176,    36,     3,
       3,    20,     3,     5,     3,   379,   217,     5,     5,   431,
     431,   217,   431,   431,  2193,    10,    11,    12,    13,    14,
      15,    16,    64,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     431,    36,   431,   431,   431,     3,  2225,     3,   432,     3,
     429,   430,   431,   432,   433,     3,   435,    12,    13,    14,
      15,    16,  2241,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     433,    36,     3,     3,   197,  2264,   197,   432,    51,   396,
       3,     4,     5,     6,     7,     8,     3,    10,   197,    12,
     281,     3,  2281,    16,    17,    18,   431,    20,     3,     3,
     277,     3,   140,    26,    27,    28,    29,    30,     4,   197,
     396,  2300,  2301,   198,     3,     3,     3,    40,     3,   432,
     432,   432,   350,   350,   241,   432,   350,    50,    51,   241,
     350,    54,   431,   136,   431,   350,    59,    60,    61,    62,
      63,   431,   431,    66,   164,    68,    69,    70,   433,   164,
      73,    74,   197,    76,    77,    78,   431,   271,   164,    82,
       4,   163,   163,     4,   431,   411,   411,   410,     4,   197,
     197,     3,   222,    96,    36,   222,     3,   245,   101,   245,
       4,     3,     5,   106,   107,   108,     5,     3,     5,     4,
     113,   114,     5,   116,   117,   118,   119,     5,     5,   122,
     193,   124,   125,   126,   127,   434,   129,  2396,   131,   132,
     197,   134,   431,   136,   137,   213,   139,   140,   141,   142,
     431,     3,   140,     3,     3,   148,     3,   150,   197,   152,
     153,   397,   155,   156,   157,   158,   159,   160,   431,   162,
     163,   164,   165,   166,   418,   101,  2435,   428,    94,     3,
       3,    63,   179,     3,   177,    20,   179,   199,   181,   431,
      91,   434,   161,     4,   241,     5,  2455,   190,   432,   192,
     193,   194,   195,   196,   197,   198,   431,   431,   201,   202,
     350,   350,   431,   350,   207,   350,   209,   210,   211,   350,
     213,   350,   215,   350,   217,   218,   219,   220,     5,   350,
     431,   350,   431,   274,     3,   412,   140,   432,     3,     3,
     403,   179,    20,     4,    20,   431,   239,   240,   241,   179,
       3,   431,   164,     3,   164,     3,   249,   222,   251,   252,
     253,   431,   222,    78,   431,   258,   431,   260,   261,   262,
     432,   432,   432,   266,   268,     3,    60,   270,   271,   432,
     432,   274,   275,   276,   277,   140,     3,   396,   281,   245,
     432,   433,   268,    20,   197,     3,    10,    11,    12,    13,
      14,    15,    16,  2562,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     4,    36,     4,   431,   431,   431,     3,   431,   322,
     323,   324,   325,   326,     3,   431,   164,   431,   431,   164,
     431,     3,     6,     4,     4,     4,   433,   212,     3,     4,
       5,     6,     7,     8,     3,    10,   164,    12,   433,     3,
      51,    16,    17,    18,   431,    20,   431,   141,   432,   163,
     432,    26,    27,    28,    29,    30,   432,   431,   431,   431,
     431,   431,   431,   431,     3,    40,   431,   431,    20,     4,
     432,     5,   432,     4,   431,    50,    51,     4,   431,    54,
     432,   432,   432,     5,    59,    60,    61,    62,    63,   431,
     431,    66,   431,    68,    69,    70,   433,   433,    73,    74,
     433,    76,    77,    78,   431,     3,   193,    82,     3,   431,
      52,     3,   431,   431,     4,   431,   429,   430,   431,   432,
     433,    96,   435,   164,   164,   213,   101,     5,   240,     4,
       4,   106,   107,   108,   431,     3,     3,     3,   113,   114,
       3,   116,   117,   118,   119,     3,     3,   122,   431,   124,
     125,   126,   127,   118,   129,     3,   131,   132,   431,   134,
       3,   136,   137,   266,   139,   140,   141,   142,   431,   268,
       3,    20,     4,   148,    20,   150,   101,   152,   153,   140,
     155,   156,   157,   158,   159,   160,   431,   162,   163,   164,
     165,   166,   431,   431,     3,   258,   431,    20,   197,     4,
     433,   351,   177,   350,   179,   432,   181,   432,   350,    94,
      63,   148,   432,   432,   432,   190,     3,   192,   193,   194,
     195,   196,   197,   198,     3,   433,   201,   202,    12,    12,
     431,     3,   207,     3,   209,   210,   211,     5,   213,     3,
     215,    51,   217,   218,   219,   220,     5,     5,   431,   431,
     431,     4,    60,   432,    60,     3,   432,   217,   432,   432,
     140,   277,   433,   431,   239,   240,   241,   431,   433,   431,
     431,   431,     5,   268,   249,   432,   251,   252,   253,     4,
       4,   271,   431,   258,     3,   260,   261,   262,   164,    88,
     431,   266,   164,   431,   433,   270,   271,    63,   432,   274,
     275,   276,   277,   432,   198,   431,   281,   432,   431,    10,
      11,    12,    13,    14,    15,    16,   432,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   413,    36,     3,   432,    20,   164,
     433,   433,   164,    43,    18,     3,   164,   322,   323,   324,
     325,   326,   432,   431,   431,     3,   432,   432,   432,     3,
       3,    60,   118,    78,   431,   136,     3,     4,     5,     6,
       7,     8,   431,    10,   431,    12,     3,   431,     3,    16,
      17,    18,    63,    20,    63,     3,     3,   431,     3,    26,
      27,    28,    29,    30,    63,   350,   432,   432,     5,   433,
     432,   350,   350,    40,   350,   432,   432,     5,     5,     5,
       3,   432,    20,    50,    51,   433,    20,    54,   269,   207,
       3,     3,    59,    60,    61,    62,    63,     5,     5,    66,
      60,    68,    69,    70,   432,   277,    73,    74,    77,    76,
      77,    78,   131,   156,   166,    82,   276,   207,   217,     5,
       3,   423,   204,   431,   429,   430,   431,   432,   433,    96,
     435,   431,   416,    20,   101,   433,     3,   101,     3,   106,
     107,   108,   214,   432,   432,   432,   113,   114,   431,   116,
     117,   118,   119,   433,   431,   122,   431,   124,   125,   126,
     127,   432,   129,   431,   131,   132,   432,   134,   140,   136,
     137,   433,   139,   140,   141,   142,   432,     4,   432,   432,
       4,   148,   432,   150,   432,   152,   153,   433,   155,   156,
     157,   158,   159,   160,   433,   162,   163,   164,   165,   166,
       3,   432,   432,   432,   431,    60,     5,     3,     3,   432,
     177,     3,   179,   431,   181,   431,    20,   431,     3,     3,
     433,     4,     4,   190,   159,   192,   193,   194,   195,   196,
     197,   198,   433,     3,   201,   202,   431,   207,   432,     3,
     207,     3,   209,   210,   211,     4,   213,     3,   215,    20,
     217,   218,   219,   220,     3,     3,   231,   432,   432,     3,
     231,   432,   432,    20,   433,   432,   245,     3,     3,   180,
     180,   432,   239,   240,   241,   432,   432,   240,   432,     5,
     431,     3,   249,   433,   251,   252,   253,   433,   431,   431,
     229,   258,   433,   260,   261,   262,     5,     3,   432,   266,
     432,   432,   432,   270,   271,     5,   228,   274,   275,   276,
     277,   433,   432,     3,   281,   431,   151,    10,    11,    12,
      13,    14,    15,    16,    97,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   433,    36,   174,   432,   271,   250,   433,   197,
     197,   432,   191,   191,     5,   322,   323,   324,   325,   326,
       5,  1428,  1777,  1147,   491,   146,  2108,  2036,   642,   632,
    1255,   180,  1530,   785,     3,     4,     5,     6,     7,     8,
     793,    10,  2503,    12,  2584,  2320,  1376,    16,    17,    18,
    2007,    20,  1006,  1292,  1090,  1367,  1627,    26,    27,    28,
      29,    30,   433,  1995,  2179,  2595,  2332,   667,   124,   480,
    2225,    40,  1128,   805,  1093,  1644,  1667,  2647,  1656,  2192,
     222,    50,    51,  1057,  1829,    54,   442,    -1,    -1,  1074,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,   702,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   429,   430,   431,   432,   433,    96,   435,    -1,
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
      -1,    -1,   281,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
     433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,   430,   431,   432,   433,    96,   435,    -1,    -1,    -1,
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
     281,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,   433,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,
     431,   432,   433,    96,   435,    -1,    -1,    -1,   101,    -1,
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
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
     323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,   433,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,   430,   431,   432,
     433,    96,   435,    -1,    -1,    -1,   101,    -1,    -1,    -1,
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
     275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,   433,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   429,   430,   431,   432,   433,    96,
     435,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
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
     277,    -1,    -1,    -1,   281,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,   433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   429,   430,   431,   432,   433,    96,   435,    -1,
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
      -1,    -1,   281,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
     433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,   430,   431,   432,   433,    96,   435,    -1,    -1,    -1,
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
     281,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,   433,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,
     431,   432,   433,    96,   435,    -1,    -1,    -1,   101,    -1,
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
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
     323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,   433,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,   430,   431,   432,
     433,    96,   435,    -1,    -1,    -1,   101,    -1,    -1,    -1,
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
     275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,   433,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   429,   430,   431,   432,   433,    96,
     435,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
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
     277,    -1,    -1,    -1,   281,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,   433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   429,   430,   431,   432,   433,    96,   435,    -1,
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
      -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
     433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,   430,   431,   432,   433,    96,   435,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,   239,   240,
     241,    -1,    -1,    17,    18,    -1,    -1,    -1,   249,    -1,
     251,   252,   253,    27,    28,    -1,    -1,   258,    -1,   260,
     261,   262,    -1,    -1,    -1,   266,    40,    -1,    -1,   270,
     271,    -1,    -1,   274,   275,   276,   277,    -1,    -1,    -1,
     281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,   110,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,   433,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,
     431,   432,   433,    -1,   435,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     234,    -1,    -1,    -1,   238,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   263,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     414,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
     424,   425,    -1,    -1,    -1,    -1,    -1,   431,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    65,    36,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
     433,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   178,   433,    -1,    -1,
      -1,   183,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   225,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   424,   425,    -1,    -1,    -1,    -1,    -1,   431,
      40,    -1,    -1,    13,    14,    15,    16,    47,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   433,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   433,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     433,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   433,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,
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
      -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    -1,
      -1,   431,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   433,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,   433,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   433,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   433,
      10,    11,    12,    13,    14,    15,    16,   225,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,
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
      -1,    27,    28,    -1,    -1,    -1,   424,   425,    -1,    -1,
      -1,    -1,    -1,   431,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   433,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   433,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   433,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,   183,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   433,    10,    11,    12,    13,    14,    15,    16,   225,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   424,   425,
      -1,    -1,    -1,    -1,    -1,   431,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   433,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   433,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,   136,    -1,    10,    11,    12,    13,    14,    15,
      16,   433,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   433,    10,    11,    12,    13,    14,    15,
      16,   225,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,
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
     394,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
     414,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
     424,   425,    -1,    -1,    -1,    -1,    -1,   431,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   433,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   113,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   433,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   433,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   433,    10,    11,    12,    13,
      14,    15,    16,   225,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   433,    -1,    -1,
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
      -1,    -1,   424,   425,    -1,    -1,    -1,    -1,    -1,   431,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   433,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   113,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   433,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   433,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   433,    10,    11,
      12,    13,    14,    15,    16,   225,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   433,
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
      -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    -1,
      -1,   431,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   433,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   113,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   433,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   433,
      10,    11,    12,    13,    14,    15,    16,   225,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    27,    -1,    -1,    -1,    -1,   424,   425,    -1,    -1,
      -1,    -1,    -1,   431,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   433,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,
      10,    11,    12,    13,    14,    15,    16,   113,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   433,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
     432,    -1,    10,    11,    12,    13,    14,    15,    16,   225,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   424,   425,
      -1,    -1,    -1,    -1,    -1,   431,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,   432,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   432,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,   432,    -1,    10,    11,    12,    13,    14,    15,
      16,   225,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,
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
     394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     424,   425,    -1,    -1,    -1,    -1,    -1,   431,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,   432,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,   432,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,   432,    10,    11,    12,
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
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   432,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   432,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   432,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   432,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   432,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   432,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   432,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   432,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   432,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   432,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   432,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   432,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   432,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   432,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   432,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   432,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   432,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   432,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   432,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   432,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   432,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   432,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   432,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   432,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   432,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   432,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   432,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   432,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   432,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    10,    36,    10,    11,    12,    13,    14,    15,    16,
     432,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   432,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    37,   432,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,   432,    -1,   102,    68,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,    -1,    -1,   107,   108,   432,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   155,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   432,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   202,   168,   169,   170,    -1,    -1,    -1,
     432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,    -1,   221,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   432,    -1,    -1,
      -1,    -1,   206,    -1,   208,    -1,    -1,   246,   247,    -1,
      -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   261,    -1,    -1,   432,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,   241,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,   432,    -1,   258,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   432,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   432,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   371,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,   395,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,   432,   104,
     105,    -1,    -1,    -1,   109,    -1,   111,    -1,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,
      -1,   395,    -1,    -1,    -1,   432,    -1,    -1,    61,    62,
     404,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,   144,
     145,    -1,   147,    -1,    -1,   419,   420,    -1,    -1,    82,
      -1,    -1,   432,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   114,   115,   116,   117,     3,    -1,    -1,    -1,    -1,
     123,    -1,    10,    11,    12,    13,    14,    15,    16,   132,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,   182,
      -1,    -1,   185,    -1,    -1,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,   278,   279,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   275,    -1,    -1,    -1,   239,   240,    -1,    -1,
     243,   244,    -1,    -1,    -1,    -1,   249,    -1,   251,    -1,
      -1,    -1,    -1,   256,   257,    -1,    -1,    -1,    -1,   262,
      -1,   264,    -1,    -1,    -1,    -1,    -1,   270,    -1,   272,
     273,    -1,    -1,    -1,    -1,   278,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,
      -1,   136,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
     124,    10,    11,    12,    13,    14,    15,    16,    49,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   112,    18,    19,    20,    21,    22,    23,    24,    25,
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
     395,   404,   419,   420,   437,   476,   477,   517,   521,   523,
     530,   531,   534,   536,   537,   539,   540,   541,   546,   547,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   566,   569,   576,   577,
     579,   595,   596,   605,   608,   610,   611,   612,   635,   638,
     645,   646,   649,   652,   653,   656,   219,   252,   371,   404,
     426,   252,     3,    10,    95,   102,   138,   139,   155,   202,
     219,   221,   227,   246,   247,   261,   371,   395,   404,   417,
     426,   617,     3,   518,    95,   139,   155,   202,   219,   221,
     227,   252,   371,   395,   404,   417,   426,   587,     3,     3,
       3,    28,   252,   252,   587,     8,   227,   636,   637,   496,
     252,   587,   606,     3,    95,   398,   399,   400,   107,   398,
     399,   400,   407,   417,   417,     0,   429,   533,     3,     3,
       3,     3,   396,     3,   431,   216,   156,   609,     3,   155,
       3,     3,    85,   156,     3,     3,     3,   609,   246,   155,
     609,   396,   396,     3,   156,     3,   156,   252,   597,     3,
     136,   154,   176,   203,   519,     3,   156,     3,   156,     3,
       3,   156,     3,   156,     3,     3,   156,     3,   156,     3,
     156,   396,   396,     3,   156,     3,   156,   103,   146,   154,
     159,   176,   588,   171,   433,     3,     3,   588,     9,    20,
       3,   113,   433,     3,     4,     5,     6,     7,     8,    17,
      18,    27,    28,    40,    72,    77,    80,    81,    89,   106,
     110,   146,   183,   193,   225,   226,   233,   234,   238,   263,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   320,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   372,   373,   374,   375,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   392,   393,   394,   414,   424,   425,   431,   438,   497,
     498,     3,   154,   176,     3,   167,   173,   381,   431,   500,
     501,   502,   503,   506,   516,     3,   159,   401,   136,   136,
     136,   159,   136,   409,     3,     3,     3,   437,    54,    55,
      74,   210,   277,   430,   565,   100,   120,    38,    75,   100,
     108,   120,   187,   208,   240,   269,    55,   208,   654,     3,
     100,   120,     3,     4,     5,     6,     7,     8,   193,   432,
     647,   648,   139,   202,   281,     3,    51,     3,   431,   197,
       3,   156,   281,   431,    39,    59,   650,   197,     3,     3,
      85,   156,     3,     3,   156,     3,   156,   140,   281,   197,
     281,   609,   431,   598,   430,   520,     3,   519,   136,   433,
     281,   281,   281,   281,   197,   281,    74,   210,   522,   281,
     281,     3,   156,     3,   156,   281,   281,     3,     4,   245,
       3,   438,   438,   637,   430,   431,     9,   438,   438,   438,
     275,   438,   475,   430,   431,    36,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   438,     3,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    36,    51,   499,
     136,   159,   433,   433,   430,   499,   431,     3,   431,   477,
     500,   240,   433,    76,   153,   177,   190,   215,   238,   507,
     509,    51,   505,   505,     3,   159,     3,     3,     3,     3,
       3,    16,   266,   421,    53,    53,    44,     3,   108,   258,
     567,    71,    84,     3,    84,    71,   217,     3,    71,    84,
     422,    71,   217,     3,    84,     3,    71,    84,   423,    71,
     277,   245,    18,   184,   376,   377,   378,   379,   655,   100,
     120,   432,   433,     3,     3,    61,    62,    64,    66,    67,
      82,   114,   115,   116,   117,   123,   132,   152,   160,   175,
     182,   185,   188,   189,   205,   239,   240,   243,   244,   249,
     251,   256,   257,   262,   264,   270,   272,   273,   278,   631,
     197,     3,    16,   150,   195,   639,   640,   641,     3,   197,
     281,     3,   639,   107,   157,   258,   398,   651,     3,   404,
     197,     3,   156,   281,   654,   277,   535,   281,   542,   281,
     418,     3,   428,     3,     3,     3,   599,   136,   245,   600,
      28,   274,   478,   266,   500,     3,     3,     3,     3,     3,
       3,   404,     3,     3,     3,    74,   281,    74,   281,     3,
       3,   240,   431,   589,     3,   240,   589,     3,   438,   443,
     447,   438,   438,   475,   124,   125,   275,     3,     3,   434,
     445,   452,   438,    65,   178,   254,   438,   473,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   432,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   432,   438,   438,   438,   432,   438,   438,
     438,   438,   438,   438,    28,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   432,   432,   432,   432,
     432,   438,   438,   432,   432,   432,   438,   438,     5,   432,
     432,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   432,   438,   438,   438,   432,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   432,   438,
     438,   432,   438,   438,   438,   438,   438,     6,    18,   193,
     319,   431,    13,    14,    16,    19,   438,    40,    47,   232,
     431,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,     3,   500,     3,
     498,     3,   532,     3,   133,   154,   267,   513,   504,   499,
     438,   432,   432,     3,   607,   501,   177,   215,   510,   502,
     163,   196,   508,     3,     3,   271,     3,   402,   402,   274,
     271,   274,     3,   273,     5,     5,   565,    42,    42,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,   631,
       3,   245,     3,     3,    20,     3,     5,     3,   379,     5,
       5,   277,     5,    63,     5,   217,   217,   648,   431,   431,
     431,   627,   627,   627,   627,   627,   627,   431,   627,   627,
     627,    64,   628,   628,   627,   627,   627,   431,   628,   627,
     628,   431,   431,   431,    18,    36,    78,   113,     3,   631,
       3,     3,     3,   432,   433,   266,   431,     3,     3,   197,
     432,   197,    51,   570,   396,     3,   197,   281,     3,   431,
       3,   277,   543,     3,     3,   140,     4,   197,   154,   216,
     351,   430,   431,   633,   634,   432,   433,     4,   236,   237,
     601,   438,   198,   488,   500,   478,   520,   396,   522,     3,
       3,     3,   594,     3,   590,   271,   477,   594,   271,   477,
     433,   432,   253,   124,   125,   438,   438,   432,   438,   444,
     477,   136,   433,   432,   136,   438,   433,   433,   433,   432,
     432,   432,   432,   432,   432,   433,   433,   433,   433,   432,
     433,   433,   433,   432,   432,   432,   432,   433,   433,   432,
     433,   432,   432,   432,    51,   433,   433,   433,   433,   321,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     433,   433,   433,   432,   433,   350,   350,   350,   432,   433,
     432,   433,   432,   350,   350,   433,   432,   432,   432,   432,
     432,   432,   432,   432,   433,   433,   433,   433,   433,   433,
     433,   433,   432,   433,   432,   432,   432,   433,   432,   433,
     432,   433,   433,   433,   433,   433,   432,   432,   432,   433,
     433,   433,   432,   433,     6,   193,   448,   450,   438,   438,
     431,   438,    50,   431,   431,   431,   439,   434,   140,   492,
     136,   433,   499,   164,   164,   164,   477,   513,   432,    20,
     430,   433,   478,   508,   508,   163,   197,   502,   163,   431,
     271,     4,     4,   411,   431,   411,   410,     4,    45,    46,
     567,   197,   197,    78,   134,   201,   261,   631,   631,     3,
     222,   222,   626,   631,     3,   245,   245,     4,     5,     5,
       3,     3,   639,   639,     5,   629,   630,   629,   629,     4,
     632,   629,   629,   629,   630,   630,   629,   629,   629,   632,
     630,   629,   630,     5,     5,     5,   193,   434,   431,   438,
     431,   631,   631,   631,   213,   641,   268,   391,     3,   327,
     328,   329,   330,   528,   529,   266,   431,   197,     3,    51,
      60,     3,   404,   223,   224,   140,   571,     3,   266,   431,
       3,     3,   197,   397,   535,   431,   542,   418,   101,   428,
      94,     3,    71,    78,   134,   138,   155,   164,   201,   261,
     618,   619,   625,   505,     3,    87,    99,   135,   143,   193,
     242,   277,   431,   602,   603,   604,    63,   179,   491,   478,
       3,    20,   199,   433,   580,   432,   433,   431,   591,   580,
     591,   580,   443,   438,   438,   124,   253,    91,   433,   434,
     432,   438,   438,   438,   136,   161,   474,   474,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   631,
     631,   438,   438,   438,     4,   350,   350,   350,   350,   350,
     350,   438,   438,   438,   438,   431,   431,   431,   350,     5,
     350,     5,   350,   431,   431,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   443,   477,   449,   451,
      50,   438,   442,   438,   440,   446,   441,   446,   477,   412,
     478,   500,     3,   513,   140,   514,   514,   514,   432,   505,
     438,     3,     3,   488,   502,   438,   197,   266,   511,   512,
     502,     4,   193,   538,   431,   403,   179,    20,     4,   193,
     548,    20,     4,   179,     3,   568,   568,   431,   164,   164,
     431,   626,   626,   631,    18,    39,    48,    51,    53,    56,
      71,    78,    79,   113,   130,   164,   193,   201,   261,   578,
     626,     3,     3,   222,   222,   432,   432,   432,   433,   259,
     280,    82,    83,   432,   433,   432,   432,   432,   432,    78,
     438,   528,    62,    66,   114,   117,   132,   152,   160,   249,
     251,   270,   642,   431,   431,   431,   431,   431,   431,   432,
     433,   268,   528,     3,   266,   431,    60,   643,   140,   396,
      40,   107,   157,   241,   258,   245,   572,   570,   268,   528,
     266,   431,   197,     3,    20,   405,   406,   544,   545,   543,
       3,     4,     4,     3,   431,   633,     3,   431,   164,   155,
     164,   431,   431,   164,   431,   432,   433,     3,   477,     4,
      87,   249,     6,     4,     4,   431,   603,   433,     3,     5,
     489,   490,   438,   212,   657,   113,   438,   164,     3,     3,
     113,   438,   593,   433,   580,   580,   124,   438,   431,   444,
     140,   432,   432,   433,   432,   438,   438,   432,   432,   432,
     432,   432,   433,   433,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   433,   432,   431,   431,   431,   431,
     431,   431,   432,   433,   433,   432,   432,   453,   454,   455,
     431,   432,   433,   431,   432,   433,   431,   471,   472,   432,
     433,   433,   433,   432,   432,   433,   433,   432,   433,   432,
     433,   432,   433,   432,   432,   432,   432,   432,   432,   433,
     433,   433,   432,   432,   432,   443,   477,   438,   477,   477,
     432,   477,   432,   432,    51,   141,   479,   478,   163,   431,
     431,   431,     3,    20,    20,   430,   491,   438,   431,   512,
     433,   538,     4,     5,     4,   433,     4,     5,   433,   277,
     438,   431,   431,     3,   624,   578,   578,   626,   193,     3,
     431,   431,   431,    52,     3,   431,     4,     4,     5,     6,
       7,    72,   333,   334,   335,   431,   164,   164,   578,   213,
      51,    60,     5,   240,     4,   630,     4,   630,   630,   431,
     432,   432,    51,    60,   528,     3,     3,     3,     3,     3,
       3,   431,   432,   431,   268,   391,   528,   643,     3,     4,
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
     325,   326,   429,   430,   431,   432,   433,   435,   644,   118,
       3,     3,   573,   266,   574,   571,   431,   432,   268,   528,
       3,   266,   431,     4,    20,    20,   432,   433,   101,   140,
     618,    78,   134,   201,   261,   438,   431,   431,   431,     3,
     495,   495,   431,   624,   614,   633,   619,   631,   603,   432,
     604,    49,   112,   430,   481,   481,   433,   181,   433,     3,
      28,   658,   258,    20,   432,   433,   592,   197,   582,     4,
     438,   438,   432,   104,   105,   109,   111,   144,   145,   147,
     278,   279,   438,   438,   438,   457,   458,   456,   459,   460,
     461,   438,   438,   351,   484,   484,   484,   462,   350,     4,
       5,   466,   350,     4,     5,   470,   484,   484,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   432,
     432,   432,   432,   432,    94,    63,   148,   483,   479,     3,
     515,   515,   515,   431,   438,   438,     3,   657,   495,   538,
     433,    12,   548,    12,     3,     5,   432,     3,   621,     3,
     620,   432,   433,   578,     5,   438,     5,    51,    78,   201,
     261,   438,   431,   431,   431,   438,   642,    60,   643,   432,
       4,   438,    60,   643,   432,     3,   524,   432,   432,   432,
     433,   528,   528,   431,   431,   432,   124,   643,   643,   643,
     643,   643,   643,   217,   140,   433,   431,   277,   575,   572,
     528,   431,   432,   431,   268,   528,   432,     5,     4,   545,
       4,   271,   432,   431,   164,   164,   431,   432,   621,   495,
     495,   432,   433,   432,   620,   432,    48,   172,   197,   228,
     277,   351,   613,   626,   432,     3,   490,   438,   438,   433,
     581,   113,   438,   113,   438,   431,    88,   657,   432,   432,
     432,   432,   432,   432,   484,   484,   484,   484,   484,   484,
     432,   433,   432,    63,   198,   486,   486,   486,   484,   431,
     432,   432,   484,   431,   432,   432,   484,   486,   486,   432,
     432,   432,   432,   432,   433,   432,   432,   433,   433,   433,
     413,   438,   480,   438,   488,   483,   432,   433,   432,   432,
       3,    20,   432,   433,   538,   164,   433,   164,    43,    18,
     432,   433,   432,   433,     3,   432,   433,   432,   432,   433,
     431,   431,   164,   432,   432,   432,   432,   432,    51,    60,
     643,   124,   432,   643,   124,   432,     3,   432,   432,   528,
       3,   124,   124,   124,   124,   124,   124,    60,   118,     3,
     438,    78,   574,   432,   528,   528,   431,   432,   136,   614,
     633,   438,   431,   431,   624,   432,   432,   432,     3,   432,
       5,    20,   431,     3,    63,   415,   431,    63,   481,     3,
       3,   586,   593,   431,   583,   486,   486,   486,   486,   486,
     486,   438,     3,   485,    63,   432,   432,   432,   486,   463,
     350,   350,   486,   467,   350,   350,   486,   432,   432,   438,
       5,     5,     5,     5,   481,   277,   433,   482,   491,   488,
       3,   432,   438,   538,   433,    20,   548,    20,   269,   207,
       3,     3,     5,    57,    58,     5,   438,   438,    60,   643,
     124,   124,   277,   525,   432,   432,   524,    77,   131,   156,
     166,   276,   643,   217,   432,   431,   575,   432,   432,   528,
     431,   432,   621,   620,   432,   207,     5,     3,   107,   248,
     204,   268,   416,   423,   204,    20,   433,   432,     3,   101,
     584,   432,   432,   432,   432,   432,   432,   432,   433,     3,
     487,   432,   484,   431,   431,   432,   484,   431,   431,   432,
     432,   432,   433,   433,   214,   438,   140,   493,   491,   433,
     538,     4,   432,   433,     4,     3,   432,   432,   432,   432,
     643,   124,   431,   432,   124,    60,   438,   432,     5,   432,
     432,     3,   432,     3,     3,   431,   431,    20,   431,   438,
       3,   432,   433,    90,   258,     3,   481,   433,   486,   464,
     465,   486,   468,   469,     4,     4,   481,   230,   258,   159,
     494,   538,   433,   548,   431,    57,    58,   124,     3,   526,
     527,   525,   643,   432,   432,   207,   430,   431,     3,     3,
       4,     3,    20,     3,   585,     3,   432,   484,   484,   432,
     484,   484,   432,   432,   231,   231,   495,   433,   538,   432,
       3,   622,    20,   432,   433,   124,   245,     3,     3,   622,
     432,   432,   432,   432,   438,   240,   481,   486,   486,   486,
     486,   180,   180,   538,   433,   432,   433,     5,   527,   431,
     430,   431,   431,   432,   431,   229,   586,   432,   432,   432,
     432,   433,   538,   623,     3,     5,     3,   622,   622,   623,
     228,   615,   616,     5,   538,   433,    18,    97,   183,   197,
     432,   431,   432,   432,    18,     3,   432,   433,   433,   538,
      97,   269,   151,   137,   200,   235,   107,   258,   622,   623,
     623,   271,   616,   538,   433,    98,   149,    74,   192,   210,
     240,    74,   192,   210,   240,   432,   174,   432,   538,   113,
     193,   113,   193,   623,   250,   432,     4,   184,   197,   197,
     191,   191,     5,     5
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
#line 522 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 528 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 529 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 531 "parser/evoparser.y"
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
#line 544 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 546 "parser/evoparser.y"
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
#line 574 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 582 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 590 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 596 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 603 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 604 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 605 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 606 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 607 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 608 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 609 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 610 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 611 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 612 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 613 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 614 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 615 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 616 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 617 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 618 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 619 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 620 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 621 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 623 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 628 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 629 "parser/evoparser.y"
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
#line 637 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 638 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 639 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 640 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 641 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 642 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 647 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 649 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 652 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 653 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 654 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 655 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 656 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 659 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 660 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 664 "parser/evoparser.y"
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
#line 673 "parser/evoparser.y"
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
#line 691 "parser/evoparser.y"
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
#line 700 "parser/evoparser.y"
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
#line 719 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 720 "parser/evoparser.y"
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
#line 780 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 789 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 795 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 800 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 802 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 804 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 809 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 814 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 819 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 827 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 829 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 831 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 833 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 835 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 837 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 839 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 841 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 843 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 845 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 852 "parser/evoparser.y"
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
#line 863 "parser/evoparser.y"
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
#line 873 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 877 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 877 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 878 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 878 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 879 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 880 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 887 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 888 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 895 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 896 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 906 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 910 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 911 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 912 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 913 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 914 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 915 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 916 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 917 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 921 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 922 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 923 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 924 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 925 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 926 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 928 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 929 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 930 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 931 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 932 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 933 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 934 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 935 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 936 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 937 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 938 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 939 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 941 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 942 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 943 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 944 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 945 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 946 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 947 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 948 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 949 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 950 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 951 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 952 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 953 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 954 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 955 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 956 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 958 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 959 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 960 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 961 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 962 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 963 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 966 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 967 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 968 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 969 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 970 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 971 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 972 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 973 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 974 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 975 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 976 "parser/evoparser.y"
    { emit("CALL 1 TOKEN_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_TOKEN_LENGTH, (yyvsp[(3) - (4)].exprval), "token_length"); ;}
    break;

  case 150:
#line 977 "parser/evoparser.y"
    { emit("CALL 2 EVO_CALL_EXTERNAL"); (yyval.exprval) = expr_make_func2(EXPR_PG_CALL_EXTERNAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "evo_call_external"); ;}
    break;

  case 151:
#line 978 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 979 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 153:
#line 980 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 154:
#line 981 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 155:
#line 982 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 156:
#line 983 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 157:
#line 984 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 158:
#line 985 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 159:
#line 986 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 160:
#line 987 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 161:
#line 988 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 162:
#line 989 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 163:
#line 990 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 164:
#line 991 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 165:
#line 992 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 166:
#line 993 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 167:
#line 994 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 168:
#line 995 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 169:
#line 996 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 170:
#line 997 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 171:
#line 998 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 172:
#line 999 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 173:
#line 1000 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 174:
#line 1001 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 175:
#line 1003 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 176:
#line 1004 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 177:
#line 1005 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 178:
#line 1006 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 179:
#line 1007 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 180:
#line 1008 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 181:
#line 1009 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 182:
#line 1010 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 183:
#line 1012 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 184:
#line 1013 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 185:
#line 1014 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 186:
#line 1015 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 187:
#line 1016 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 188:
#line 1017 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 189:
#line 1018 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 190:
#line 1019 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 191:
#line 1020 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 192:
#line 1021 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 193:
#line 1022 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 194:
#line 1023 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 195:
#line 1024 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 196:
#line 1025 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 197:
#line 1026 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 198:
#line 1027 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 199:
#line 1028 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 200:
#line 1029 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 201:
#line 1030 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1031 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 203:
#line 1032 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 204:
#line 1033 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 205:
#line 1035 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 206:
#line 1036 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 207:
#line 1037 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 208:
#line 1038 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 209:
#line 1039 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 210:
#line 1041 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 211:
#line 1042 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 212:
#line 1044 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 213:
#line 1045 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 214:
#line 1046 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 215:
#line 1048 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 216:
#line 1049 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 217:
#line 1050 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 218:
#line 1051 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 219:
#line 1058 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 220:
#line 1065 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 221:
#line 1072 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1076 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1080 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 224:
#line 1084 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 225:
#line 1088 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 226:
#line 1092 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 227:
#line 1098 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 228:
#line 1099 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 229:
#line 1100 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 230:
#line 1104 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 231:
#line 1110 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 232:
#line 1116 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 233:
#line 1117 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1118 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1119 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 236:
#line 1120 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 237:
#line 1121 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 238:
#line 1122 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1123 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 240:
#line 1124 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 241:
#line 1128 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1130 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 243:
#line 1132 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 244:
#line 1134 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 245:
#line 1138 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 246:
#line 1146 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 247:
#line 1156 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 248:
#line 1157 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 249:
#line 1160 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 250:
#line 1161 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 251:
#line 1165 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1173 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 253:
#line 1181 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 254:
#line 1189 "parser/evoparser.y"
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

  case 255:
#line 1203 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 256:
#line 1212 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 257:
#line 1218 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (13)].intval), (yyvsp[(3) - (13)].intval), (yyvsp[(5) - (13)].intval));
        g_sel.distinct = ((yyvsp[(2) - (13)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (13)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 258:
#line 1231 "parser/evoparser.y"
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

  case 260:
#line 1244 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 262:
#line 1246 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 263:
#line 1249 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 264:
#line 1256 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 265:
#line 1264 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1265 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1266 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1269 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1270 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 271:
#line 1274 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1283 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 275:
#line 1285 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 278:
#line 1293 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 279:
#line 1295 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 284:
#line 1307 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 285:
#line 1313 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 286:
#line 1320 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 287:
#line 1328 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 288:
#line 1329 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 289:
#line 1330 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1331 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 292:
#line 1343 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 293:
#line 1346 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 294:
#line 1347 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 295:
#line 1348 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 296:
#line 1349 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1350 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 299:
#line 1354 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 300:
#line 1357 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1358 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 302:
#line 1361 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1362 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 304:
#line 1363 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 305:
#line 1364 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 306:
#line 1365 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 307:
#line 1366 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 308:
#line 1367 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 309:
#line 1368 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 310:
#line 1369 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 311:
#line 1372 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 312:
#line 1373 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 313:
#line 1375 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 314:
#line 1383 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 315:
#line 1388 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 316:
#line 1389 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 317:
#line 1390 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 318:
#line 1393 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 319:
#line 1394 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1403 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 323:
#line 1411 "parser/evoparser.y"
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

  case 324:
#line 1420 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 325:
#line 1421 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 326:
#line 1423 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 327:
#line 1432 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 328:
#line 1437 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 329:
#line 1443 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 330:
#line 1450 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 331:
#line 1454 "parser/evoparser.y"
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

  case 332:
#line 1474 "parser/evoparser.y"
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

  case 335:
#line 1500 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 336:
#line 1502 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 337:
#line 1504 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 338:
#line 1506 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1508 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 340:
#line 1511 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 341:
#line 1512 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1513 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 343:
#line 1516 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 344:
#line 1517 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 345:
#line 1520 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 346:
#line 1521 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 347:
#line 1524 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 348:
#line 1525 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 349:
#line 1526 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1533 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 353:
#line 1534 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 354:
#line 1539 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 355:
#line 1541 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1543 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 358:
#line 1547 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1548 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 360:
#line 1551 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 361:
#line 1552 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 362:
#line 1555 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 363:
#line 1560 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 364:
#line 1570 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 365:
#line 1577 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 366:
#line 1578 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 367:
#line 1579 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 368:
#line 1580 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 369:
#line 1585 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1589 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 371:
#line 1591 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 374:
#line 1597 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 375:
#line 1602 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 376:
#line 1609 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 377:
#line 1616 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 379:
#line 1628 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 380:
#line 1629 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 381:
#line 1634 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 382:
#line 1641 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 383:
#line 1648 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1656 "parser/evoparser.y"
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

  case 385:
#line 1666 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 386:
#line 1674 "parser/evoparser.y"
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

  case 387:
#line 1684 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 388:
#line 1692 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 389:
#line 1701 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 390:
#line 1710 "parser/evoparser.y"
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

  case 391:
#line 1720 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 392:
#line 1728 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 393:
#line 1737 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 394:
#line 1746 "parser/evoparser.y"
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

  case 395:
#line 1756 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 396:
#line 1765 "parser/evoparser.y"
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

  case 397:
#line 1782 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 398:
#line 1790 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX IF NOT EXISTS %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval), (yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval));
        free((yyvsp[(5) - (14)].strval)); free((yyvsp[(7) - (14)].strval)); free((yyvsp[(11) - (14)].strval));
    ;}
    break;

  case 399:
#line 1801 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 400:
#line 1803 "parser/evoparser.y"
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

  case 401:
#line 1816 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 402:
#line 1817 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 403:
#line 1820 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 404:
#line 1822 "parser/evoparser.y"
    {
        int lm = ((yyvsp[(1) - (3)].intval) >> 16) & 0xFFFF, le = (yyvsp[(1) - (3)].intval) & 0xFFFF;
        int rm = ((yyvsp[(3) - (3)].intval) >> 16) & 0xFFFF, re = (yyvsp[(3) - (3)].intval) & 0xFFFF;
        /* Later entries override earlier ones; 0 means "not set in this item". */
        int m  = rm ? rm : lm;
        int ef = re ? re : le;
        (yyval.intval) = (m << 16) | ef;
    ;}
    break;

  case 405:
#line 1834 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 406:
#line 1844 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 407:
#line 1849 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 408:
#line 1854 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 409:
#line 1860 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1867 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 411:
#line 1874 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 412:
#line 1881 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 413:
#line 1891 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 414:
#line 1898 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1907 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 416:
#line 1914 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 417:
#line 1920 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 418:
#line 1928 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 419:
#line 1934 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 421:
#line 1942 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 422:
#line 1943 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 423:
#line 1944 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 424:
#line 1945 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 425:
#line 1961 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1962 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1963 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1972 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 429:
#line 1973 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 430:
#line 1978 "parser/evoparser.y"
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

  case 431:
#line 1988 "parser/evoparser.y"
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

  case 432:
#line 2003 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 433:
#line 2004 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 434:
#line 2009 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 435:
#line 2017 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s CASCADE", (yyvsp[(4) - (5)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (5)].strval));
        SetCheckpointStoreCascade(1);
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 436:
#line 2026 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 437:
#line 2048 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2049 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 439:
#line 2050 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 440:
#line 2055 "parser/evoparser.y"
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

  case 441:
#line 2072 "parser/evoparser.y"
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

  case 442:
#line 2093 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 443:
#line 2094 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 444:
#line 2100 "parser/evoparser.y"
    {
        emit("CHECKPOINT GET FROM %s THREAD %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (6)].strval));
        SetCheckpointThread((yyvsp[(6) - (6)].strval));
        CheckpointGetProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 445:
#line 2109 "parser/evoparser.y"
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

  case 446:
#line 2123 "parser/evoparser.y"
    {
        emit("CHECKPOINT LIST FROM %s THREAD %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (6)].strval));
        SetCheckpointThread((yyvsp[(6) - (6)].strval));
        CheckpointListProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 447:
#line 2132 "parser/evoparser.y"
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

  case 448:
#line 2157 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2158 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2159 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2160 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2161 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2162 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 454:
#line 2163 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 455:
#line 2168 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 456:
#line 2175 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 457:
#line 2186 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 462:
#line 2200 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 463:
#line 2202 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 464:
#line 2207 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 465:
#line 2215 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s CASCADE", (yyvsp[(4) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (5)].strval));
        SetMemoryStoreCascade(1);
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 466:
#line 2224 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 467:
#line 2236 "parser/evoparser.y"
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

  case 468:
#line 2248 "parser/evoparser.y"
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

  case 469:
#line 2262 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 470:
#line 2263 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 471:
#line 2269 "parser/evoparser.y"
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

  case 472:
#line 2283 "parser/evoparser.y"
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

  case 473:
#line 2293 "parser/evoparser.y"
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

  case 474:
#line 2307 "parser/evoparser.y"
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

  case 475:
#line 2321 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 476:
#line 2329 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s PREFIX %s", (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (7)].strval));
        SetMemoryPrefix((yyvsp[(7) - (7)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 477:
#line 2340 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2346 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 479:
#line 2357 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2363 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 481:
#line 2370 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 482:
#line 2376 "parser/evoparser.y"
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

  case 483:
#line 2397 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 484:
#line 2398 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 485:
#line 2399 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 486:
#line 2400 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 487:
#line 2405 "parser/evoparser.y"
    {
        emit("CREATE SUBSCRIPTION %s FOR %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (6)].strval));
        SetSubscriptionChannel((yyvsp[(6) - (6)].strval));
        CreateSubscriptionProcess(0);
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 488:
#line 2414 "parser/evoparser.y"
    {
        /* IF NOT EXISTS — lexer collapses the NOT, so we receive
         * IF EXISTS with the subtok flag already set by the upstream
         * "IF NOT EXISTS" production. The flag value isn't surfaced
         * at this point; mirror the checkpoint store path which also
         * accepts both spellings. */
        emit("CREATE SUBSCRIPTION IF NOT EXISTS %s FOR %s", (yyvsp[(5) - (8)].strval), (yyvsp[(8) - (8)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (8)].strval));
        SetSubscriptionChannel((yyvsp[(8) - (8)].strval));
        CreateSubscriptionProcess(1);
        free((yyvsp[(5) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 489:
#line 2431 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        DropSubscriptionProcess(0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 490:
#line 2439 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (5)].strval));
        DropSubscriptionProcess(1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 491:
#line 2450 "parser/evoparser.y"
    {
        emit("RESUME SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        ResumeSubscriptionProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 492:
#line 2461 "parser/evoparser.y"
    {
        emit("ACK SUBSCRIPTION %s UPTO %d", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (5)].strval));
        SetSubscriptionAckSeq((long long)(yyvsp[(5) - (5)].intval));
        AckSubscriptionProcess();
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 493:
#line 2480 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 494:
#line 2481 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 495:
#line 2482 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 496:
#line 2487 "parser/evoparser.y"
    {
        emit("CREATE JOB %s ON SCHEDULE %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval));
        ResetScheduleOpts();
        SetJobName((yyvsp[(3) - (8)].strval));
        SetJobCronExpr((yyvsp[(6) - (8)].strval));
        SetJobSql((yyvsp[(8) - (8)].strval));
        CreateJobProcess(0);
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 497:
#line 2497 "parser/evoparser.y"
    {
        emit("CREATE JOB IF NOT EXISTS %s ON SCHEDULE %s", (yyvsp[(5) - (10)].strval), (yyvsp[(8) - (10)].strval));
        ResetScheduleOpts();
        SetJobName((yyvsp[(5) - (10)].strval));
        SetJobCronExpr((yyvsp[(8) - (10)].strval));
        SetJobSql((yyvsp[(10) - (10)].strval));
        CreateJobProcess(1);
        free((yyvsp[(5) - (10)].strval)); free((yyvsp[(8) - (10)].strval)); free((yyvsp[(10) - (10)].strval));
    ;}
    break;

  case 498:
#line 2510 "parser/evoparser.y"
    {
        emit("DROP JOB %s", (yyvsp[(3) - (3)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (3)].strval));
        SetJobDropIfExists(0);
        DropJobProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 499:
#line 2519 "parser/evoparser.y"
    {
        emit("DROP JOB IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(5) - (5)].strval));
        SetJobDropIfExists(1);
        DropJobProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 500:
#line 2531 "parser/evoparser.y"
    {
        emit("ALTER JOB %s ENABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(1);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 501:
#line 2539 "parser/evoparser.y"
    {
        emit("ALTER JOB %s DISABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(0);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 502:
#line 2550 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 503:
#line 2557 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 504:
#line 2566 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 505:
#line 2574 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 506:
#line 2580 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 508:
#line 2597 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 509:
#line 2601 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 510:
#line 2610 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 512:
#line 2625 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 513:
#line 2629 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 514:
#line 2634 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 515:
#line 2641 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 516:
#line 2646 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 517:
#line 2653 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 518:
#line 2657 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 519:
#line 2658 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 520:
#line 2664 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 521:
#line 2676 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 522:
#line 2685 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 523:
#line 2686 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 524:
#line 2687 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 525:
#line 2691 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 526:
#line 2692 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 527:
#line 2693 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 528:
#line 2694 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 529:
#line 2695 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 530:
#line 2696 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 533:
#line 2705 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 534:
#line 2706 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 536:
#line 2711 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 538:
#line 2716 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 539:
#line 2721 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 540:
#line 2728 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 541:
#line 2737 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 542:
#line 2743 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 543:
#line 2749 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 544:
#line 2756 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 545:
#line 2762 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 546:
#line 2769 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 547:
#line 2775 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 548:
#line 2781 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 549:
#line 2787 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 550:
#line 2793 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 551:
#line 2799 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 552:
#line 2805 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 553:
#line 2811 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 554:
#line 2817 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 555:
#line 2823 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 556:
#line 2829 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 557:
#line 2835 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 558:
#line 2841 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 559:
#line 2847 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 560:
#line 2853 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 561:
#line 2859 "parser/evoparser.y"
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

  case 562:
#line 2872 "parser/evoparser.y"
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

  case 563:
#line 2882 "parser/evoparser.y"
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

  case 564:
#line 2892 "parser/evoparser.y"
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

  case 565:
#line 2902 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s SET TTL %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableSetTtl((yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 566:
#line 2908 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s DROP TTL", (yyvsp[(3) - (5)].strval));
        AlterTableSetTtl((yyvsp[(3) - (5)].strval), NULL);
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 567:
#line 2915 "parser/evoparser.y"
    { ;}
    break;

  case 568:
#line 2916 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 569:
#line 2917 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 570:
#line 2921 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 571:
#line 2929 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 572:
#line 2935 "parser/evoparser.y"
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

  case 574:
#line 2948 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 575:
#line 2948 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 578:
#line 2956 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 579:
#line 2957 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 580:
#line 2958 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 581:
#line 2962 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 582:
#line 2963 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 583:
#line 2964 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 584:
#line 2968 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 585:
#line 2976 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 586:
#line 2985 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 587:
#line 2986 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 588:
#line 2987 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 589:
#line 2988 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 590:
#line 2989 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 594:
#line 2996 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 595:
#line 3000 "parser/evoparser.y"
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

  case 596:
#line 3010 "parser/evoparser.y"
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

  case 597:
#line 3022 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 598:
#line 3023 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 599:
#line 3023 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 600:
#line 3026 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 601:
#line 3027 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 602:
#line 3028 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 603:
#line 3029 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 604:
#line 3033 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 605:
#line 3036 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 606:
#line 3037 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 607:
#line 3038 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 608:
#line 3039 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 609:
#line 3045 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 610:
#line 3051 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 611:
#line 3056 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 612:
#line 3061 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 613:
#line 3065 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 614:
#line 3069 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 615:
#line 3071 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 618:
#line 3077 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 619:
#line 3078 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 620:
#line 3082 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 621:
#line 3083 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 622:
#line 3087 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 623:
#line 3088 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 624:
#line 3089 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 631:
#line 3104 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 632:
#line 3105 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 633:
#line 3106 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 634:
#line 3107 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 635:
#line 3108 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 636:
#line 3109 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 637:
#line 3110 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 638:
#line 3111 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 639:
#line 3116 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 640:
#line 3125 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 641:
#line 3132 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 642:
#line 3133 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 643:
#line 3134 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 644:
#line 3139 "parser/evoparser.y"
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

  case 645:
#line 3150 "parser/evoparser.y"
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

  case 646:
#line 3162 "parser/evoparser.y"
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

  case 647:
#line 3173 "parser/evoparser.y"
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

  case 648:
#line 3188 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 649:
#line 3192 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 650:
#line 3196 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 651:
#line 3197 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 652:
#line 3202 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 653:
#line 3204 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 654:
#line 3206 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 655:
#line 3208 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 656:
#line 3211 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 657:
#line 3212 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 658:
#line 3218 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 659:
#line 3223 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 660:
#line 3225 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 661:
#line 3227 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 662:
#line 3229 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 663:
#line 3231 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 664:
#line 3235 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 665:
#line 3239 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 666:
#line 3240 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 667:
#line 3245 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 668:
#line 3255 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 670:
#line 3268 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 671:
#line 3276 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 672:
#line 3284 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 674:
#line 3292 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 675:
#line 3293 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 676:
#line 3294 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 677:
#line 3295 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 678:
#line 3297 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 679:
#line 3299 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 680:
#line 3301 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 681:
#line 3306 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 682:
#line 3311 "parser/evoparser.y"
    { emit("TABLE OPT TTL_COLUMN %s", (yyvsp[(6) - (7)].strval)); SetTableTtlColumn((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 685:
#line 3319 "parser/evoparser.y"
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

  case 686:
#line 3334 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 687:
#line 3342 "parser/evoparser.y"
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

  case 688:
#line 3356 "parser/evoparser.y"
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

  case 689:
#line 3370 "parser/evoparser.y"
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

  case 690:
#line 3384 "parser/evoparser.y"
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

  case 691:
#line 3396 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 692:
#line 3397 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 693:
#line 3398 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 694:
#line 3401 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 695:
#line 3402 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 696:
#line 3405 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 697:
#line 3406 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 698:
#line 3407 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 699:
#line 3408 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 700:
#line 3409 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 701:
#line 3410 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 702:
#line 3411 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 703:
#line 3412 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 704:
#line 3414 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 705:
#line 3416 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 706:
#line 3418 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 707:
#line 3420 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 708:
#line 3422 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 709:
#line 3424 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 710:
#line 3427 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 711:
#line 3428 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 712:
#line 3431 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 713:
#line 3432 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 714:
#line 3435 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 715:
#line 3436 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 717:
#line 3440 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 718:
#line 3441 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 719:
#line 3442 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 720:
#line 3443 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 721:
#line 3444 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 722:
#line 3445 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 723:
#line 3446 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 724:
#line 3447 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 725:
#line 3448 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 726:
#line 3449 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 727:
#line 3450 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 728:
#line 3451 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 729:
#line 3452 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 730:
#line 3453 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 731:
#line 3454 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 732:
#line 3455 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 733:
#line 3456 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 734:
#line 3459 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 735:
#line 3460 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 736:
#line 3463 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 737:
#line 3465 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 738:
#line 3473 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 739:
#line 3474 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 741:
#line 3476 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 742:
#line 3477 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 743:
#line 3478 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 744:
#line 3479 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 745:
#line 3480 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 746:
#line 3481 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 747:
#line 3482 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 748:
#line 3483 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 749:
#line 3484 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 750:
#line 3491 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 751:
#line 3492 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 752:
#line 3493 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 753:
#line 3494 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 754:
#line 3495 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 755:
#line 3496 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 756:
#line 3497 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 757:
#line 3498 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 758:
#line 3499 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 759:
#line 3500 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 760:
#line 3501 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 761:
#line 3502 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 762:
#line 3503 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 763:
#line 3504 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 764:
#line 3505 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 765:
#line 3506 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 766:
#line 3507 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 767:
#line 3508 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 768:
#line 3509 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 769:
#line 3510 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 770:
#line 3511 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 771:
#line 3514 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 772:
#line 3515 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 773:
#line 3516 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 774:
#line 3519 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 775:
#line 3520 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 776:
#line 3523 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 777:
#line 3524 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 778:
#line 3525 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 780:
#line 3529 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 781:
#line 3530 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 782:
#line 3534 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 783:
#line 3535 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 784:
#line 3536 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 785:
#line 3537 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 786:
#line 3538 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 787:
#line 3539 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 788:
#line 3540 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 789:
#line 3541 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 790:
#line 3542 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 791:
#line 3543 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 792:
#line 3544 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 793:
#line 3545 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 794:
#line 3546 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 795:
#line 3547 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 796:
#line 3548 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 797:
#line 3549 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 798:
#line 3550 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 799:
#line 3551 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 800:
#line 3552 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 801:
#line 3553 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 802:
#line 3554 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 803:
#line 3555 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 804:
#line 3556 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 805:
#line 3557 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 806:
#line 3558 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 807:
#line 3559 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 808:
#line 3560 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 809:
#line 3561 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 810:
#line 3562 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 811:
#line 3563 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 812:
#line 3564 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 813:
#line 3565 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 814:
#line 3566 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 815:
#line 3567 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 816:
#line 3568 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 817:
#line 3571 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 818:
#line 3572 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 819:
#line 3576 "parser/evoparser.y"
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

  case 820:
#line 3588 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 821:
#line 3589 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 822:
#line 3590 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 823:
#line 3594 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 824:
#line 3597 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 825:
#line 3598 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 829:
#line 3602 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 830:
#line 3603 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 831:
#line 3611 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 832:
#line 3616 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 833:
#line 3622 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 834:
#line 3628 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 835:
#line 3635 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 836:
#line 3642 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 837:
#line 3648 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 838:
#line 3654 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 839:
#line 3661 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 844:
#line 3677 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 845:
#line 3678 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 846:
#line 3679 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 847:
#line 3680 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 848:
#line 3683 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 849:
#line 3684 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 850:
#line 3685 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 851:
#line 3686 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 852:
#line 3687 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 853:
#line 3688 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 854:
#line 3689 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 855:
#line 3690 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 856:
#line 3691 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 857:
#line 3692 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 866:
#line 3709 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 867:
#line 3710 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 988:
#line 3728 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 989:
#line 3735 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 990:
#line 3740 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 991:
#line 3746 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 992:
#line 3752 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 993:
#line 3758 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 994:
#line 3769 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 995:
#line 3774 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 996:
#line 3780 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 999:
#line 3791 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 1000:
#line 3792 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1001:
#line 3793 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 1002:
#line 3794 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 1003:
#line 3795 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 1004:
#line 3796 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1005:
#line 3797 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1006:
#line 3804 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 1007:
#line 3809 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 1008:
#line 3815 "parser/evoparser.y"
    {
        /* Task 212 — ON MEMORY STORE form. The parser action lays the
         * store name into g_trig.tableName with a sentinel prefix so
         * CreateTriggerProcess knows to resolve it through the memory
         * store catalog (mem_<name>) rather than the regular table
         * lookup. PUT events were already mapped to 'I' upstream in
         * trigger_event, so the firing path stays unchanged. */
        emit("CREATETRIGGER %s ON MEMORY STORE %s", (yyvsp[(3) - (15)].strval), (yyvsp[(9) - (15)].strval));
        char qualified[128];
        snprintf(qualified, sizeof(qualified), "@mem:%s", (yyvsp[(9) - (15)].strval));
        evo_set_trigger_info((yyvsp[(3) - (15)].strval), qualified);
        free((yyvsp[(3) - (15)].strval)); free((yyvsp[(9) - (15)].strval));
    ;}
    break;

  case 1009:
#line 3830 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 1010:
#line 3831 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 1011:
#line 3834 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1012:
#line 3835 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 1013:
#line 3836 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 1014:
#line 3837 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1015:
#line 3840 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 1016:
#line 3845 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1017:
#line 3851 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1018:
#line 3860 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1019:
#line 3868 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1020:
#line 3878 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 1021:
#line 3883 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 1024:
#line 3896 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1025:
#line 3897 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1026:
#line 3898 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1027:
#line 3899 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1028:
#line 3900 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1029:
#line 3901 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1030:
#line 3902 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1031:
#line 3903 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1032:
#line 3906 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1033:
#line 3911 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1034:
#line 3917 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1035:
#line 3927 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1036:
#line 3934 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1037:
#line 3941 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1038:
#line 3949 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1040:
#line 3959 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1042:
#line 3963 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1043:
#line 3964 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12762 "parser/evoparser.tab.c"
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


#line 3967 "parser/evoparser.y"

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
