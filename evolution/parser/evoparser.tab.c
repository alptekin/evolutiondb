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
     SCHEDULE = 673,
     MESSAGE = 674,
     APPEND = 675,
     READ = 676,
     LAST = 677,
     SESSION = 678
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
#define MESSAGE 674
#define APPEND 675
#define READ 676
#define LAST 677
#define SESSION 678




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
	#include "../db/MessageLog.h"

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
#line 75 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 1018 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1031 "parser/evoparser.tab.c"

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
#define YYFINAL  155
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   14356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  441
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  226
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1057
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2755

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   678

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     436,   437,    28,    26,   438,    27,   435,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   434,
       2,   440,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   439,    32,     2,     2,     2,     2,     2,
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
     425,   426,   427,   428,   429,   430,   431,   432,   433
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
    2477,  2482,  2487,  2489,  2491,  2493,  2498,  2509,  2514,  2521,
    2534,  2549,  2558,  2569,  2578,  2589,  2601,  2603,  2607,  2609,
    2614,  2621,  2622,  2627,  2632,  2635,  2636,  2641,  2649,  2654,
    2656,  2660,  2662,  2664,  2666,  2677,  2690,  2691,  2694,  2697,
    2698,  2701,  2704,  2707,  2710,  2713,  2714,  2717,  2719,  2723,
    2724,  2729,  2730,  2736,  2742,  2750,  2761,  2772,  2790,  2803,
    2823,  2835,  2842,  2851,  2858,  2865,  2872,  2882,  2889,  2895,
    2904,  2912,  2922,  2931,  2942,  2952,  2960,  2968,  2977,  2986,
    2994,  3000,  3001,  3003,  3006,  3008,  3019,  3026,  3027,  3028,
    3034,  3035,  3040,  3041,  3045,  3050,  3053,  3054,  3060,  3064,
    3070,  3071,  3074,  3077,  3080,  3083,  3085,  3086,  3087,  3091,
    3093,  3097,  3101,  3102,  3109,  3111,  3113,  3117,  3121,  3129,
    3133,  3137,  3143,  3149,  3151,  3160,  3168,  3176,  3178,  3179,
    3187,  3188,  3192,  3194,  3198,  3200,  3202,  3204,  3206,  3208,
    3209,  3211,  3216,  3220,  3222,  3226,  3229,  3232,  3235,  3237,
    3240,  3243,  3246,  3248,  3250,  3260,  3261,  3264,  3267,  3271,
    3277,  3283,  3291,  3297,  3299,  3304,  3309,  3313,  3319,  3323,
    3329,  3330,  3333,  3335,  3341,  3349,  3357,  3367,  3379,  3381,
    3384,  3388,  3390,  3401,  3402,  3407,  3419,  3438,  3439,  3444,
    3448,  3454,  3460,  3470,  3481,  3489,  3494,  3502,  3504,  3508,
    3518,  3528,  3538,  3545,  3557,  3566,  3567,  3569,  3572,  3574,
    3578,  3584,  3592,  3597,  3602,  3608,  3614,  3619,  3626,  3638,
    3652,  3666,  3682,  3687,  3694,  3696,  3700,  3702,  3706,  3708,
    3712,  3713,  3718,  3724,  3729,  3735,  3740,  3746,  3751,  3757,
    3762,  3767,  3771,  3775,  3779,  3782,  3786,  3791,  3796,  3798,
    3802,  3803,  3808,  3809,  3813,  3816,  3820,  3824,  3828,  3832,
    3838,  3844,  3850,  3854,  3860,  3863,  3871,  3877,  3885,  3891,
    3894,  3898,  3901,  3905,  3908,  3912,  3918,  3923,  3929,  3937,
    3946,  3955,  3963,  3970,  3977,  3983,  3984,  3988,  3994,  3995,
    3997,  3998,  4001,  4004,  4005,  4010,  4014,  4017,  4021,  4025,
    4029,  4033,  4037,  4041,  4045,  4049,  4053,  4057,  4059,  4061,
    4063,  4065,  4067,  4071,  4077,  4080,  4085,  4087,  4089,  4091,
    4093,  4097,  4101,  4105,  4109,  4115,  4121,  4123,  4125,  4127,
    4132,  4136,  4138,  4142,  4146,  4147,  4149,  4151,  4153,  4157,
    4161,  4164,  4166,  4170,  4174,  4178,  4180,  4191,  4201,  4214,
    4226,  4239,  4251,  4266,  4280,  4281,  4283,  4285,  4289,  4292,
    4296,  4300,  4304,  4306,  4308,  4310,  4312,  4314,  4316,  4318,
    4320,  4322,  4324,  4325,  4328,  4333,  4339,  4345,  4351,  4357,
    4363,  4365,  4367,  4369,  4371,  4373,  4375,  4377,  4379,  4381,
    4383,  4385,  4387,  4389,  4391,  4393,  4395,  4397,  4399,  4401,
    4403,  4405,  4407,  4409,  4411,  4413,  4415,  4417,  4419,  4421,
    4423,  4425,  4427,  4429,  4431,  4433,  4435,  4437,  4439,  4441,
    4443,  4445,  4447,  4449,  4451,  4453,  4455,  4457,  4459,  4461,
    4463,  4465,  4467,  4469,  4471,  4473,  4475,  4477,  4479,  4481,
    4483,  4485,  4487,  4489,  4491,  4493,  4495,  4497,  4499,  4501,
    4503,  4505,  4507,  4509,  4511,  4513,  4515,  4517,  4519,  4521,
    4523,  4525,  4527,  4529,  4531,  4533,  4535,  4537,  4539,  4541,
    4543,  4545,  4547,  4549,  4551,  4553,  4555,  4557,  4559,  4561,
    4563,  4565,  4567,  4569,  4571,  4573,  4575,  4577,  4579,  4581,
    4583,  4585,  4587,  4589,  4591,  4593,  4595,  4597,  4599,  4601,
    4603,  4605,  4607,  4609,  4611,  4615,  4621,  4625,  4631,  4633,
    4638,  4644,  4646,  4650,  4652,  4654,  4656,  4658,  4660,  4662,
    4664,  4666,  4680,  4696,  4698,  4700,  4702,  4704,  4706,  4708,
    4710,  4714,  4720,  4725,  4730,  4732,  4738,  4739,  4742,  4746,
    4749,  4753,  4756,  4759,  4762,  4764,  4767,  4769,  4773,  4779,
    4784,  4789,  4796,  4803,  4804,  4807,  4810,  4812
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     442,     0,    -1,   481,   434,    -1,   481,   434,   442,    -1,
       3,    -1,     3,   435,     3,    -1,    89,   435,     3,    -1,
     183,   436,     3,   437,    91,   436,     4,   437,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   443,    26,   443,    -1,   443,    27,   443,    -1,   443,
      28,   443,    -1,   443,    29,   443,    -1,   443,    30,   443,
      -1,   443,    31,   443,    -1,    27,   443,    -1,   436,   443,
     437,    -1,   443,    12,   443,    -1,   443,    10,   443,    -1,
     443,    11,   443,    -1,   443,    23,   443,    -1,   443,    24,
     443,    -1,   443,    32,   443,    -1,   443,    25,   443,    -1,
     443,    34,   443,    -1,   443,    33,   443,    -1,    18,   443,
      -1,    17,   443,    -1,   443,    20,   443,    -1,    -1,   443,
      20,   436,   444,   482,   437,    -1,    -1,   443,    20,    47,
     436,   445,   482,   437,    -1,    -1,   443,    20,   232,   436,
     446,   482,   437,    -1,    -1,   443,    20,    40,   436,   447,
     482,   437,    -1,   443,    20,    47,   436,   451,   437,    -1,
     443,    20,   232,   436,   451,   437,    -1,   443,    15,   193,
      -1,   443,    15,    18,   193,    -1,   443,    15,     6,    -1,
     443,    15,    18,     6,    -1,     8,     9,   443,    -1,   443,
      19,   443,    50,   443,    -1,   443,    18,    19,   443,    50,
     443,    -1,   443,    -1,   443,   438,   448,    -1,   443,    -1,
     443,   438,   449,    -1,    -1,   263,    36,   450,   449,   439,
      -1,   263,    36,   439,    -1,   443,    36,   443,   439,    -1,
     443,    -1,   380,   436,   443,   437,    -1,   380,   436,   443,
     438,   443,   437,    -1,   381,   436,   443,   437,    -1,   382,
     436,   443,   438,   443,   437,    -1,   383,   436,   437,    -1,
     414,   436,   437,    -1,   384,   436,   443,   438,   443,   437,
      -1,   385,   436,   443,   438,   443,   437,    -1,   386,   436,
     443,   438,   443,   437,    -1,   387,   436,   443,   438,   443,
     437,    -1,   388,   436,   443,   437,    -1,   389,   436,   443,
     437,    -1,   390,   436,   443,   437,    -1,   443,    22,   443,
      -1,   443,    21,   443,    -1,   392,   436,   443,   438,   443,
     438,   443,   438,     5,   437,    -1,   393,   436,   443,   438,
     443,   438,   443,   438,     5,   438,     4,   437,    -1,   394,
     436,   443,   438,   443,   438,   443,   438,     5,   438,     4,
     437,    -1,    -1,   448,    -1,    -1,   443,    16,   436,   453,
     448,   437,    -1,    -1,   443,    18,    16,   436,   454,   448,
     437,    -1,    -1,   443,    16,   436,   455,   482,   437,    -1,
      -1,   443,    18,    16,   436,   456,   482,   437,    -1,    -1,
     281,   436,   457,   482,   437,    -1,     3,   436,   452,   437,
      -1,   322,   436,    28,   437,    -1,   322,   436,   443,   437,
      -1,   323,   436,   443,   437,    -1,   324,   436,   443,   437,
      -1,   325,   436,   443,   437,    -1,   326,   436,   443,   437,
      -1,   320,   436,   443,   437,    -1,   320,   436,   443,   321,
       4,   437,    -1,    -1,   342,   436,   437,   350,   436,   458,
     489,   491,   437,    -1,    -1,   343,   436,   437,   350,   436,
     459,   489,   491,   437,    -1,    -1,   344,   436,   437,   350,
     436,   460,   489,   491,   437,    -1,    -1,   323,   436,   443,
     437,   350,   436,   461,   489,   491,   437,    -1,    -1,   322,
     436,    28,   437,   350,   436,   462,   489,   491,   437,    -1,
      -1,   322,   436,   443,   437,   350,   436,   463,   489,   491,
     437,    -1,    -1,   324,   436,   443,   437,   350,   436,   464,
     489,   491,   437,    -1,    -1,   325,   436,   443,   437,   350,
     436,   465,   489,   491,   437,    -1,    -1,   326,   436,   443,
     437,   350,   436,   466,   489,   491,   437,    -1,    -1,   345,
     436,   443,   437,   350,   436,   467,   489,   491,   437,    -1,
      -1,   345,   436,   443,   438,     5,   437,   350,   436,   468,
     489,   491,   437,    -1,    -1,   345,   436,   443,   438,     5,
     438,     4,   437,   350,   436,   469,   489,   491,   437,    -1,
      -1,   345,   436,   443,   438,     5,   438,     5,   437,   350,
     436,   470,   489,   491,   437,    -1,    -1,   346,   436,   443,
     437,   350,   436,   471,   489,   491,   437,    -1,    -1,   346,
     436,   443,   438,     5,   437,   350,   436,   472,   489,   491,
     437,    -1,    -1,   346,   436,   443,   438,     5,   438,     4,
     437,   350,   436,   473,   489,   491,   437,    -1,    -1,   346,
     436,   443,   438,     5,   438,     5,   437,   350,   436,   474,
     489,   491,   437,    -1,    -1,   347,   436,     5,   437,   350,
     436,   475,   489,   491,   437,    -1,    -1,   348,   436,   437,
     350,   436,   476,   489,   491,   437,    -1,    -1,   349,   436,
     437,   350,   436,   477,   489,   491,   437,    -1,   282,   436,
     443,   438,   443,   438,   443,   437,    -1,   282,   436,   443,
     438,   443,   437,    -1,   282,   436,   443,   136,   443,   437,
      -1,   282,   436,   443,   136,   443,   140,   443,   437,    -1,
     283,   436,   443,   437,    -1,   283,   436,   478,   443,   136,
     443,   437,    -1,   283,   436,   478,   136,   443,   437,    -1,
     327,   436,   443,   437,    -1,   328,   436,   443,   437,    -1,
     329,   436,   443,   437,    -1,   424,   436,   443,   437,    -1,
     425,   436,   443,   438,   443,   437,    -1,   330,   436,   443,
     438,   443,   437,    -1,   331,   436,   443,   438,   443,   438,
     443,   437,    -1,   332,   436,   443,   438,   443,   437,    -1,
     294,   436,   443,   438,   443,   437,    -1,   295,   436,   443,
     438,   443,   437,    -1,   296,   436,   443,   438,   443,   438,
     443,   437,    -1,   297,   436,   443,   438,   443,   438,   443,
     437,    -1,   298,   436,   443,   437,    -1,   299,   436,   443,
     438,   443,   437,    -1,   300,   436,   443,   438,   443,   437,
      -1,   301,   436,   443,   438,   443,   437,    -1,   302,   436,
     443,   437,    -1,   303,   436,   443,   437,    -1,   304,   436,
     443,   437,    -1,   305,   436,   443,   438,   443,   437,    -1,
     305,   436,   443,   437,    -1,   306,   436,   443,   438,   443,
     437,    -1,   307,   436,   443,   437,    -1,   308,   436,   443,
     438,   443,   437,    -1,   309,   436,   437,    -1,   310,   436,
     443,   437,    -1,   311,   436,   443,   437,    -1,   312,   436,
     443,   437,    -1,   313,   436,   437,    -1,   293,   436,   437,
      -1,   286,   436,   443,   438,   443,   437,    -1,   287,   436,
     443,   437,    -1,   288,   436,   443,   437,    -1,   289,   436,
     443,   437,    -1,   290,   436,   443,   437,    -1,   291,   436,
     443,   437,    -1,   292,   436,   443,   437,    -1,   352,   436,
     443,   438,   443,   437,    -1,   353,   436,   443,   437,    -1,
     354,   436,   443,   437,    -1,   355,   436,   443,   437,    -1,
     356,   436,   443,   437,    -1,   357,   436,   443,   437,    -1,
     358,   436,   443,   437,    -1,   359,   436,   443,   437,    -1,
     360,   436,   443,   437,    -1,   361,   436,   443,   438,   443,
     438,   443,   437,    -1,   362,   436,   443,   438,   443,   438,
     443,   437,    -1,   363,   436,   443,   438,   443,   438,   443,
     437,    -1,   364,   436,   443,   438,   443,   437,    -1,   365,
     436,   443,   438,   443,   437,    -1,   366,   436,   443,   438,
     443,   438,   443,   437,    -1,   367,   436,   443,   438,   443,
     438,   443,   437,    -1,   368,   436,   443,   438,   443,   437,
      -1,   368,   436,   443,   438,   443,   438,   443,   438,   443,
     437,    -1,   369,   436,   443,   437,    -1,   369,   436,   443,
     438,   443,   437,    -1,   369,   436,   443,   438,   443,   438,
     443,   437,    -1,   370,   436,   443,   437,    -1,   372,   436,
     443,   437,    -1,   373,   436,   443,   437,    -1,   374,   436,
     443,   438,   443,   437,    -1,   374,   436,   443,   438,   443,
     438,   443,   437,    -1,   375,   436,   437,    -1,   314,   436,
     443,    51,   639,   437,    -1,   315,   436,   443,   438,   639,
     437,    -1,   316,   436,   443,   438,   443,   437,    -1,   317,
     436,   443,   438,   443,   437,    -1,   318,   436,   443,   438,
     443,   438,   443,   437,    -1,   443,    15,   319,    -1,   330,
     436,   443,   438,   443,   438,   443,   437,    -1,   330,   436,
     443,   438,   443,   438,   443,   438,   443,   437,    -1,   333,
     436,   437,    -1,   334,   436,   437,    -1,   335,   436,   437,
      -1,   336,   436,   437,    -1,   337,   436,   437,    -1,   338,
      -1,   339,    -1,   340,   436,   443,   437,    -1,   341,   436,
     443,   438,   443,   437,    -1,   178,    -1,   254,    -1,    65,
      -1,   284,   436,   443,   438,   479,   437,    -1,   285,   436,
     443,   438,   479,   437,    -1,   161,   443,   278,    -1,   161,
     443,   104,    -1,   161,   443,   105,    -1,   161,   443,   109,
      -1,   161,   443,   111,    -1,   161,   443,   279,    -1,   161,
     443,   145,    -1,   161,   443,   144,    -1,   161,   443,   147,
      -1,    77,   443,   480,   124,    -1,    77,   443,   480,   125,
     443,   124,    -1,    77,   480,   124,    -1,    77,   480,   125,
     443,   124,    -1,   275,   443,   253,   443,    -1,   480,   275,
     443,   253,   443,    -1,   443,    14,   443,    -1,   443,    18,
      14,   443,    -1,   443,    13,   443,    -1,   443,    18,    13,
     443,    -1,    72,    -1,    80,    -1,    81,    -1,   225,    -1,
     482,    -1,   241,   501,   502,    -1,   241,   501,   502,   136,
     505,   497,   483,   484,   488,   493,   496,   498,   499,    -1,
     241,   501,   502,   159,     3,   136,   505,   483,   484,   488,
     493,   496,    -1,    -1,   274,   443,    -1,    -1,   141,    63,
     485,   487,    -1,   443,   486,    -1,   485,   438,   443,   486,
      -1,    -1,    49,    -1,   112,    -1,    -1,   277,   214,    -1,
      -1,   148,   443,    -1,    -1,   351,    63,   490,    -1,     3,
      -1,   490,   438,     3,    -1,    -1,   198,    63,   492,    -1,
       3,   486,    -1,   492,   438,     3,   486,    -1,    -1,   198,
      63,   494,    -1,   495,    -1,   494,   438,   495,    -1,     3,
     486,    -1,     3,   435,     3,   486,    -1,     5,   486,    -1,
      -1,   179,   443,    -1,   179,   443,   438,   443,    -1,   179,
     443,   181,   443,    -1,    -1,   140,   412,    51,    94,   413,
       5,    -1,    -1,   140,   258,    -1,   140,   230,    -1,   140,
     258,   231,   180,    -1,   140,   230,   231,   180,    -1,    -1,
     159,   500,    -1,     3,    -1,   500,   438,     3,    -1,    -1,
     501,    40,    -1,   501,   106,    -1,   501,   110,    -1,   501,
     146,    -1,   501,   238,    -1,   501,   226,    -1,   501,   234,
      -1,   501,   233,    -1,   503,    -1,   502,   438,   503,    -1,
      28,    -1,   443,   504,    -1,    51,     3,    -1,     3,    -1,
      -1,   506,    -1,   505,   438,   506,    -1,   507,    -1,   511,
      -1,     3,   504,   518,    -1,   173,     3,   504,   518,    -1,
       3,   435,     3,   504,   518,    -1,   521,   510,     3,    -1,
     508,   510,     3,    -1,   381,   436,   443,   437,    -1,   381,
     436,   443,   437,   510,     3,    -1,   381,   436,   443,   437,
     510,     3,   436,     3,   437,    -1,   436,   505,   437,    -1,
      -1,   167,   436,   509,   482,   437,    -1,    51,    -1,    -1,
     506,   512,   163,   507,   516,    -1,   506,   238,   507,    -1,
     506,   238,   507,   197,   443,    -1,   506,   514,   513,   163,
     507,   517,    -1,   506,   190,   515,   163,   507,    -1,    -1,
     153,    -1,    76,    -1,    -1,   196,    -1,   177,    -1,   215,
      -1,   177,   513,    -1,   215,   513,    -1,    -1,    -1,   517,
      -1,   197,   443,    -1,   266,   436,   500,   437,    -1,   267,
     164,   519,   436,   520,   437,    -1,   154,   164,   519,   436,
     520,   437,    -1,   133,   164,   519,   436,   520,   437,    -1,
      -1,   140,   163,    -1,    -1,     3,    -1,   520,   438,     3,
      -1,   436,   482,   437,    -1,   522,    -1,   107,   523,   136,
       3,   483,   493,   496,   665,    -1,   523,   176,    -1,   523,
     203,    -1,   523,   154,    -1,    -1,   107,   523,   524,   136,
     505,   483,    -1,     3,   525,    -1,   524,   438,     3,   525,
      -1,    -1,   435,    28,    -1,   107,   523,   136,   524,   266,
     505,   483,    -1,   526,    -1,   108,   252,     3,   527,    -1,
     108,   252,   156,   281,     3,   527,    -1,    -1,    74,    -1,
     210,    -1,   528,    -1,    73,   155,     3,   197,     3,   436,
     533,   437,    -1,    73,   138,   155,     3,   197,     3,   436,
     533,   437,    -1,    73,   155,   156,   281,     3,   197,     3,
     436,   533,   437,    -1,    73,   261,   155,     3,   197,     3,
     436,   533,   437,    -1,    73,   261,   155,   156,   281,     3,
     197,     3,   436,   533,   437,    -1,    73,   155,     3,   197,
       3,   266,   268,   436,   533,   437,    -1,    73,   155,   156,
     281,     3,   197,     3,   266,   268,   436,   533,   437,    -1,
      73,   261,   155,     3,   197,     3,   266,   268,   436,   533,
     437,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     266,   268,   436,   533,   437,    -1,    73,   155,    85,     3,
     197,     3,   436,   533,   437,    -1,    73,   155,    85,   156,
     281,     3,   197,     3,   436,   533,   437,    -1,    73,   261,
     155,    85,     3,   197,     3,   436,   533,   437,    -1,    73,
     261,   155,    85,   156,   281,     3,   197,     3,   436,   533,
     437,    -1,    73,   155,    85,     3,   197,     3,   266,   268,
     436,   533,   437,    -1,    73,   261,   155,    85,     3,   197,
       3,   266,   268,   436,   533,   437,    -1,    73,   155,     3,
     197,     3,   266,   391,   436,     3,   529,   437,   530,    -1,
      73,   155,   156,   281,     3,   197,     3,   266,   391,   436,
       3,   529,   437,   530,    -1,    -1,     3,    -1,    -1,   277,
     436,   531,   437,    -1,   532,    -1,   531,   438,   532,    -1,
       3,    20,     5,    -1,     3,    -1,   533,   438,     3,    -1,
     534,    -1,   327,   436,     3,   437,    -1,   328,   436,     3,
     437,    -1,   329,   436,     3,   437,    -1,   330,   436,     3,
     438,     3,   437,    -1,   535,    -1,   108,   155,     3,    -1,
     536,   538,    -1,   255,   252,     3,    -1,   255,   252,     3,
     438,   537,    -1,     3,    -1,   537,   438,     3,    -1,    -1,
     538,    74,    -1,   538,   210,    -1,   538,    55,    53,    -1,
     538,    54,    53,    -1,   558,    -1,   559,    -1,   560,    -1,
     539,    -1,   541,    -1,    73,   395,   396,     3,   540,    -1,
      73,   395,   396,   156,   281,     3,   540,    -1,    -1,   277,
     436,   397,    20,     4,   437,    -1,   108,   395,   396,     3,
      -1,   108,   395,   396,     3,    74,    -1,   108,   395,   396,
     156,   281,     3,    -1,   542,    -1,   544,    -1,   545,    -1,
     395,   398,   159,     3,   271,   436,   543,   438,   543,   438,
     543,   438,   543,   438,   543,   438,   543,   438,   543,   437,
      -1,   395,   398,   401,   159,     3,   271,   436,   543,   438,
     543,   438,   543,   438,   543,   438,   543,   438,   543,   438,
     543,   437,    -1,     4,    -1,   193,    -1,   395,   399,   136,
       3,   402,     4,    -1,   395,   399,   136,     3,   402,     4,
     403,     4,    -1,   395,   400,   136,     3,   402,     4,    -1,
     395,   400,   136,     3,   402,     4,   179,     5,    -1,   546,
      -1,   551,    -1,   552,    -1,   554,    -1,   555,    -1,   556,
      -1,   557,    -1,    73,   404,   396,     3,   547,   548,    -1,
      73,   404,   396,   156,   281,     3,   547,   548,    -1,    -1,
      -1,   277,   436,   549,   437,    -1,   550,    -1,   549,   438,
     550,    -1,   405,    20,     5,    -1,   406,    20,     4,    -1,
     108,   404,   396,     3,    -1,   108,   404,   396,     3,    74,
      -1,   108,   404,   396,   156,   281,     3,    -1,   404,   398,
     159,     3,   271,   436,   553,   438,   553,   438,   553,   437,
      -1,   404,   398,   159,     3,   271,   436,   553,   438,   553,
     438,   553,   438,   553,   437,    -1,     4,    -1,   193,    -1,
     404,   399,   136,     3,   274,   411,    20,     4,    12,   164,
      20,     4,    -1,   404,   407,     3,   266,   273,     4,    -1,
     404,   407,     3,   266,   273,     4,   179,     5,    -1,   404,
     107,   136,     3,   274,   411,    20,     4,    12,   164,    20,
       4,    -1,   404,   400,   409,    16,     3,    -1,   404,   400,
     409,    16,     3,   410,     4,    -1,   168,     3,    -1,   168,
       3,   171,    -1,   170,     3,    -1,   170,    28,    -1,   169,
       3,    -1,   169,     3,   438,     4,    -1,   561,    -1,   562,
      -1,   563,    -1,   564,    -1,    73,   417,     3,   140,   418,
       3,    -1,    73,   417,   156,   281,     3,   140,   418,     3,
      -1,   108,   417,     3,    -1,   108,   417,   156,   281,     3,
      -1,   419,   417,     3,    -1,   420,   417,     3,   421,     5,
      -1,   565,    -1,   566,    -1,   567,    -1,    73,   426,     3,
     197,   428,     4,   101,     4,    -1,    73,   426,   156,   281,
       3,   197,   428,     4,   101,     4,    -1,   108,   426,     3,
      -1,   108,   426,   156,   281,     3,    -1,    37,   426,     3,
     120,    -1,    37,   426,     3,   100,    -1,   568,    -1,   569,
      -1,   570,    -1,    73,   429,     3,     3,    -1,    73,   429,
       3,     3,   277,   436,   422,    20,     4,   437,    -1,   108,
     429,     3,     3,    -1,   108,   429,     3,   156,   281,     3,
      -1,   429,   430,   159,     3,   271,   436,     4,   438,     4,
     438,     4,   437,    -1,   429,   430,   159,     3,   271,   436,
       4,   438,     4,   438,     4,   438,     4,   437,    -1,   429,
     431,   136,     3,   274,   433,    20,     4,    -1,   429,   431,
     136,     3,   274,   433,    20,     4,   432,     5,    -1,   429,
     255,   136,     3,   274,   433,    20,     4,    -1,   429,   255,
     136,     3,   274,   433,    20,     4,    59,     5,    -1,   429,
     322,   436,    28,   437,   136,     3,   274,   433,    20,     4,
      -1,   571,    -1,   206,   252,     3,    -1,   572,    -1,   574,
       3,   573,   575,    -1,   574,     3,   435,     3,   573,   575,
      -1,    -1,   277,    44,     5,    45,    -1,   277,    44,     5,
      46,    -1,    41,   252,    -1,    -1,   258,    42,   197,   576,
      -1,   258,    42,   197,   576,   277,     5,    43,    -1,   108,
      42,   197,   576,    -1,     3,    -1,   576,   438,     3,    -1,
     585,    -1,   577,    -1,   584,    -1,    73,   221,     3,   197,
       3,   578,   579,   580,   582,   583,    -1,    73,   221,     3,
     197,   404,   396,     3,   578,   579,   580,   582,   583,    -1,
      -1,    51,   223,    -1,    51,   224,    -1,    -1,   140,    40,
      -1,   140,   241,    -1,   140,   157,    -1,   140,   258,    -1,
     140,   107,    -1,    -1,   245,   581,    -1,     3,    -1,   581,
     438,     3,    -1,    -1,   266,   436,   443,   437,    -1,    -1,
     277,    78,   436,   443,   437,    -1,   108,   221,     3,   197,
       3,    -1,   108,   221,     3,   197,   404,   396,     3,    -1,
      37,   252,     3,    38,    71,     3,    78,   436,   443,   437,
      -1,    37,   252,     3,    38,    71,     3,   261,   436,   632,
     437,    -1,    37,   252,     3,    38,    71,     3,   134,   164,
     436,   629,   437,   207,     3,   436,   630,   437,   631,    -1,
      37,   252,     3,    38,    71,     3,    78,   436,   443,   437,
      18,   269,    -1,    37,   252,     3,    38,    71,     3,   134,
     164,   436,   629,   437,   207,     3,   436,   630,   437,   631,
      18,   269,    -1,    37,   252,     3,    38,    71,     3,   201,
     164,   436,   628,   437,    -1,    37,   252,     3,   108,    71,
       3,    -1,    37,   252,     3,   208,    71,     3,   245,     3,
      -1,    37,   252,     3,   120,    71,     3,    -1,    37,   252,
       3,   100,    71,     3,    -1,    37,   252,     3,   269,    71,
       3,    -1,    37,   252,     3,    38,    84,     3,   639,   634,
     586,    -1,    37,   252,     3,   108,    84,     3,    -1,    37,
     252,     3,   108,     3,    -1,    37,   252,     3,   208,    84,
       3,   245,     3,    -1,    37,   252,     3,   208,     3,   245,
       3,    -1,    37,   252,     3,   187,    84,     3,   639,   634,
     586,    -1,    37,   252,     3,   187,     3,   639,   634,   586,
      -1,    37,   252,     3,    75,    84,     3,     3,   639,   634,
     586,    -1,    37,   252,     3,    75,     3,     3,   639,   634,
     586,    -1,    37,   252,     3,   120,   217,     3,   222,    -1,
      37,   252,     3,   100,   217,     3,   222,    -1,    37,   404,
     396,     3,   120,   217,     3,   222,    -1,    37,   404,   396,
       3,   100,   217,     3,   222,    -1,    37,   252,     3,   240,
     423,    20,     4,    -1,    37,   252,     3,   108,   422,    -1,
      -1,   130,    -1,    39,     3,    -1,   587,    -1,   157,   595,
     596,     3,   597,   271,   599,   588,   590,   665,    -1,   157,
     595,   596,     3,   597,   482,    -1,    -1,    -1,   199,   164,
     258,   589,   594,    -1,    -1,   197,    88,   591,   592,    -1,
      -1,   436,     3,   437,    -1,   436,     3,   438,     3,    -1,
     101,    90,    -1,    -1,   101,   258,   593,   240,   594,    -1,
       3,    20,   443,    -1,   594,   438,     3,    20,   443,    -1,
      -1,   595,   176,    -1,   595,   103,    -1,   595,   146,    -1,
     595,   154,    -1,   159,    -1,    -1,    -1,   436,   598,   437,
      -1,     3,    -1,   598,   438,     3,    -1,   436,   601,   437,
      -1,    -1,   599,   438,   600,   436,   601,   437,    -1,   443,
      -1,   113,    -1,   601,   438,   443,    -1,   601,   438,   113,
      -1,   157,   595,   596,     3,   240,   602,   588,    -1,     3,
      20,   443,    -1,     3,    20,   113,    -1,   602,   438,     3,
      20,   443,    -1,   602,   438,     3,    20,   113,    -1,   603,
      -1,   216,   595,   596,     3,   597,   271,   599,   588,    -1,
     216,   595,   596,     3,   240,   602,   588,    -1,   216,   595,
     596,     3,   597,   482,   588,    -1,   604,    -1,    -1,    86,
       3,   605,   606,   608,   609,   610,    -1,    -1,   436,   607,
     437,    -1,     3,    -1,   607,   438,     3,    -1,   136,    -1,
     245,    -1,     4,    -1,   236,    -1,   237,    -1,    -1,   611,
      -1,   277,   436,   611,   437,    -1,   436,   611,   437,    -1,
     612,    -1,   611,   438,   612,    -1,   135,    87,    -1,   135,
     249,    -1,    99,     4,    -1,   143,    -1,   143,     6,    -1,
     193,     4,    -1,   242,     4,    -1,    87,    -1,   613,    -1,
     258,   614,   505,   240,   615,   483,   493,   496,   665,    -1,
      -1,   595,   176,    -1,   595,   154,    -1,     3,    20,   443,
      -1,     3,   435,     3,    20,   443,    -1,   615,   438,     3,
      20,   443,    -1,   615,   438,     3,   435,     3,    20,   443,
      -1,   208,   252,     3,   245,     3,    -1,   616,    -1,    73,
      95,   617,     3,    -1,    73,   227,   617,     3,    -1,   108,
      95,     3,    -1,   108,    95,   156,   281,     3,    -1,   108,
     227,     3,    -1,   108,   227,   156,   281,     3,    -1,    -1,
     156,   281,    -1,   618,    -1,    73,   102,     3,    51,   639,
      -1,    73,   102,     3,    51,   639,   113,   443,    -1,    73,
     102,     3,    51,   639,    18,   193,    -1,    73,   102,     3,
      51,   639,    78,   436,   443,   437,    -1,    73,   102,     3,
      51,   639,    18,   193,    78,   436,   443,   437,    -1,   619,
      -1,   267,     3,    -1,   267,    95,     3,    -1,   620,    -1,
      73,   625,   252,   617,     3,   436,   626,   437,   622,   621,
      -1,    -1,   172,   436,     3,   437,    -1,    73,   625,   252,
     617,     3,   435,     3,   436,   626,   437,   622,    -1,    73,
     625,   252,   617,     3,   351,    94,     3,   140,   271,   136,
     436,     5,   437,   245,   436,     5,   437,    -1,    -1,   622,
      48,    20,     5,    -1,   622,    48,     5,    -1,   622,   197,
       3,   107,     3,    -1,   622,   197,     3,   248,     3,    -1,
     622,   228,    63,   268,   436,     3,   437,   229,     5,    -1,
     622,   228,    63,   204,   436,     3,   437,   436,   623,   437,
      -1,   622,   351,    63,   204,   436,     3,   437,    -1,   622,
     277,   415,   416,    -1,   622,   277,   436,   423,    20,     4,
     437,    -1,   624,    -1,   623,   438,   624,    -1,   228,     3,
     271,   174,   250,     4,   197,   191,     5,    -1,   228,     3,
     271,   174,   250,   184,   197,   191,     5,    -1,    73,   625,
     252,   617,     3,   436,   626,   437,   641,    -1,    73,   625,
     252,   617,     3,   641,    -1,    73,   625,   252,   617,     3,
     435,     3,   436,   626,   437,   641,    -1,    73,   625,   252,
     617,     3,   435,     3,   641,    -1,    -1,   246,    -1,   247,
     246,    -1,   627,    -1,   626,   438,   627,    -1,   201,   164,
     436,   628,   437,    -1,    71,     3,   201,   164,   436,   628,
     437,    -1,   164,   436,   500,   437,    -1,   155,   436,   500,
     437,    -1,   138,   155,   436,   500,   437,    -1,   138,   164,
     436,   500,   437,    -1,    78,   436,   443,   437,    -1,    71,
       3,    78,   436,   443,   437,    -1,   134,   164,   436,   629,
     437,   207,     3,   436,   630,   437,   631,    -1,   134,   164,
     436,   629,   437,   207,     3,   435,     3,   436,   630,   437,
     631,    -1,    71,     3,   134,   164,   436,   629,   437,   207,
       3,   436,   630,   437,   631,    -1,    71,     3,   134,   164,
     436,   629,   437,   207,     3,   435,     3,   436,   630,   437,
     631,    -1,   261,   436,   632,   437,    -1,    71,     3,   261,
     436,   632,   437,    -1,     3,    -1,   628,   438,     3,    -1,
       3,    -1,   629,   438,     3,    -1,     3,    -1,   630,   438,
       3,    -1,    -1,   631,   197,   107,    74,    -1,   631,   197,
     107,   240,   193,    -1,   631,   197,   107,   210,    -1,   631,
     197,   107,   240,   113,    -1,   631,   197,   258,    74,    -1,
     631,   197,   258,   240,   193,    -1,   631,   197,   258,   210,
      -1,   631,   197,   258,   240,   113,    -1,   631,   197,   107,
     192,    -1,   631,   197,   258,   192,    -1,   631,   183,   137,
      -1,   631,   183,   235,    -1,   631,   183,   200,    -1,   631,
      97,    -1,   631,    18,    97,    -1,   631,    97,   151,    98,
      -1,   631,    97,   151,   149,    -1,     3,    -1,   632,   438,
       3,    -1,    -1,   633,     3,   639,   634,    -1,    -1,   634,
      18,   193,    -1,   634,   193,    -1,   634,   113,     4,    -1,
     634,   113,     5,    -1,   634,   113,     7,    -1,   634,   113,
       6,    -1,   634,   113,   333,   436,   437,    -1,   634,   113,
     334,   436,   437,    -1,   634,   113,   335,   436,   437,    -1,
     634,   113,    72,    -1,   634,   113,   436,   443,   437,    -1,
     634,    48,    -1,   634,    48,   436,     5,   438,     5,   437,
      -1,   634,    48,   436,     5,   437,    -1,   634,    53,   436,
       5,   438,     5,   437,    -1,   634,    53,   436,     5,   437,
      -1,   634,    53,    -1,   634,   261,   164,    -1,   634,   261,
      -1,   634,   201,   164,    -1,   634,   164,    -1,   634,    79,
       4,    -1,   634,    78,   436,   443,   437,    -1,   634,    71,
       3,   261,    -1,   634,    71,     3,   201,   164,    -1,   634,
      71,     3,    78,   436,   443,   437,    -1,   634,    56,    52,
      51,   436,   443,   437,    57,    -1,   634,    56,    52,    51,
     436,   443,   437,    58,    -1,   634,    56,    52,    51,   436,
     443,   437,    -1,   634,    51,   436,   443,   437,    57,    -1,
     634,    51,   436,   443,   437,    58,    -1,   634,    51,   436,
     443,   437,    -1,    -1,   436,     5,   437,    -1,   436,     5,
     438,     5,   437,    -1,    -1,    64,    -1,    -1,   637,   259,
      -1,   637,   280,    -1,    -1,   638,    82,   240,     4,    -1,
     638,    83,     4,    -1,    67,   635,    -1,   244,   635,   637,
      -1,   239,   635,   637,    -1,   189,   635,   637,    -1,   160,
     635,   637,    -1,   152,   635,   637,    -1,    66,   635,   637,
      -1,   205,   635,   637,    -1,   114,   635,   637,    -1,   132,
     635,   637,    -1,   116,   635,   637,    -1,   117,    -1,   257,
      -1,   251,    -1,   115,    -1,   278,    -1,    82,   635,   638,
      -1,   270,   436,     5,   437,   638,    -1,    64,   635,    -1,
     272,   436,     5,   437,    -1,   256,    -1,    61,    -1,   188,
      -1,   182,    -1,   243,   636,   638,    -1,   249,   636,   638,
      -1,   185,   636,   638,    -1,   175,   636,   638,    -1,   123,
     436,   640,   437,   638,    -1,   240,   436,   640,   437,   638,
      -1,    62,    -1,   262,    -1,   264,    -1,   273,   436,     5,
     437,    -1,   639,    36,   439,    -1,     4,    -1,   640,   438,
       4,    -1,   642,   510,   482,    -1,    -1,   154,    -1,   216,
      -1,   643,    -1,   240,   227,     3,    -1,   240,   227,   113,
      -1,   240,   644,    -1,   645,    -1,   644,   438,   645,    -1,
       8,    20,   443,    -1,     8,     9,   443,    -1,   646,    -1,
      73,   202,     3,   436,   647,   437,    51,    60,   651,   124,
      -1,    73,   202,     3,   436,   647,   437,    60,   651,   124,
      -1,    73,    10,   216,   202,     3,   436,   647,   437,    51,
      60,   651,   124,    -1,    73,    10,   216,   202,     3,   436,
     647,   437,    60,   651,   124,    -1,    73,   139,     3,   436,
     647,   437,   213,   650,    51,    60,   651,   124,    -1,    73,
     139,     3,   436,   647,   437,   213,   650,    60,   651,   124,
      -1,    73,    10,   216,   139,     3,   436,   647,   437,   213,
     650,    51,    60,   651,   124,    -1,    73,    10,   216,   139,
       3,   436,   647,   437,   213,   650,    60,   651,   124,    -1,
      -1,   648,    -1,   649,    -1,   648,   438,   649,    -1,     3,
     639,    -1,    16,     3,   639,    -1,   195,     3,   639,    -1,
     150,     3,   639,    -1,   152,    -1,   160,    -1,   270,    -1,
     249,    -1,    62,    -1,   132,    -1,   114,    -1,    66,    -1,
     117,    -1,   251,    -1,    -1,   651,   652,    -1,   651,    60,
     651,   124,    -1,   651,   156,   651,   124,   156,    -1,   651,
     276,   651,   124,   276,    -1,   651,   166,   651,   124,   166,
      -1,   651,   131,   651,   124,   131,    -1,   651,    77,   651,
     124,    77,    -1,     3,    -1,     4,    -1,     5,    -1,     7,
      -1,     6,    -1,    20,    -1,    18,    -1,    10,    -1,    12,
      -1,    16,    -1,    50,    -1,   241,    -1,   157,    -1,   258,
      -1,   107,    -1,   136,    -1,   274,    -1,   240,    -1,   159,
      -1,   271,    -1,    73,    -1,   108,    -1,   252,    -1,   155,
      -1,   253,    -1,   125,    -1,   119,    -1,    96,    -1,   101,
      -1,    68,    -1,   211,    -1,   165,    -1,   162,    -1,    70,
      -1,   194,    -1,   129,    -1,    69,    -1,   142,    -1,   127,
      -1,   195,    -1,   150,    -1,   140,    -1,    54,    -1,   218,
      -1,   209,    -1,   126,    -1,   220,    -1,    59,    -1,   118,
      -1,   217,    -1,   219,    -1,    51,    -1,   197,    -1,   198,
      -1,    63,    -1,   141,    -1,   148,    -1,   179,    -1,   181,
      -1,   163,    -1,   177,    -1,   215,    -1,   153,    -1,   196,
      -1,   137,    -1,    76,    -1,   190,    -1,   266,    -1,   193,
      -1,   113,    -1,   201,    -1,   164,    -1,   261,    -1,    78,
      -1,   134,    -1,   207,    -1,    74,    -1,   210,    -1,   192,
      -1,   152,    -1,   160,    -1,   270,    -1,   249,    -1,    62,
      -1,   132,    -1,   114,    -1,    66,    -1,   117,    -1,   251,
      -1,   239,    -1,   116,    -1,    82,    -1,   262,    -1,    61,
      -1,   260,    -1,   122,    -1,   158,    -1,    40,    -1,   106,
      -1,   281,    -1,   275,    -1,   277,    -1,   202,    -1,   139,
      -1,   213,    -1,   436,    -1,   437,    -1,   438,    -1,   434,
      -1,   435,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    17,    -1,   440,    -1,   322,    -1,   323,
      -1,   324,    -1,   325,    -1,   326,    -1,     8,    -1,   653,
      -1,   108,   202,     3,    -1,   108,   202,   156,   281,     3,
      -1,   108,   139,     3,    -1,   108,   139,   156,   281,     3,
      -1,   654,    -1,    68,     3,   436,   437,    -1,    68,     3,
     436,   655,   437,    -1,   656,    -1,   655,   438,   656,    -1,
       5,    -1,     4,    -1,     7,    -1,   193,    -1,     6,    -1,
       3,    -1,     8,    -1,   657,    -1,    73,   219,     3,   658,
     659,   197,     3,   140,   118,   217,    60,   651,   124,    -1,
      73,   219,     3,   658,   659,   197,   404,   396,     3,   140,
     118,   217,    60,   651,   124,    -1,    59,    -1,    39,    -1,
     157,    -1,   258,    -1,   107,    -1,   398,    -1,   660,    -1,
     108,   219,     3,    -1,   108,   219,   156,   281,     3,    -1,
      37,   219,     3,   120,    -1,    37,   219,     3,   100,    -1,
     661,    -1,    73,   371,   617,     3,   662,    -1,    -1,   662,
     663,    -1,   376,   277,     5,    -1,   376,     5,    -1,   377,
      63,     5,    -1,   377,     5,    -1,   378,     5,    -1,   184,
       5,    -1,   379,    -1,    18,   379,    -1,   664,    -1,   108,
     371,     3,    -1,   108,   371,   156,   281,     3,    -1,    37,
     371,     3,   662,    -1,    37,   371,     3,    55,    -1,    37,
     371,     3,    55,   277,     5,    -1,    37,   371,     3,   208,
     245,     3,    -1,    -1,   212,    28,    -1,   212,   666,    -1,
       3,    -1,   666,   438,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   519,   519,   520,   525,   532,   533,   534,   548,   549,
     577,   585,   593,   599,   607,   608,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   632,   632,   641,   641,   643,   643,
     645,   645,   650,   652,   656,   657,   658,   659,   660,   663,
     664,   667,   676,   694,   703,   723,   723,   783,   792,   799,
     803,   805,   807,   812,   817,   822,   830,   832,   834,   836,
     838,   840,   842,   844,   846,   848,   855,   866,   877,   878,
     881,   881,   882,   882,   883,   883,   891,   891,   899,   899,
     910,   914,   915,   916,   917,   918,   919,   920,   921,   925,
     925,   927,   927,   929,   929,   932,   932,   934,   934,   936,
     936,   938,   938,   940,   940,   942,   942,   945,   945,   947,
     947,   949,   949,   951,   951,   953,   953,   955,   955,   957,
     957,   959,   959,   962,   962,   964,   964,   966,   966,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,   982,   983,   984,   985,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1016,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,
    1033,  1034,  1035,  1036,  1037,  1039,  1040,  1041,  1042,  1043,
    1045,  1046,  1048,  1049,  1050,  1052,  1053,  1054,  1055,  1062,
    1069,  1076,  1080,  1084,  1088,  1092,  1096,  1102,  1103,  1104,
    1107,  1113,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1131,  1133,  1135,  1137,  1141,  1149,  1160,  1161,  1164,
    1165,  1168,  1176,  1184,  1192,  1206,  1216,  1217,  1231,  1247,
    1248,  1249,  1250,  1253,  1260,  1268,  1269,  1270,  1273,  1274,
    1277,  1278,  1282,  1283,  1286,  1288,  1292,  1293,  1296,  1298,
    1302,  1303,  1306,  1307,  1310,  1316,  1323,  1332,  1333,  1334,
    1335,  1345,  1346,  1350,  1351,  1352,  1353,  1354,  1357,  1358,
    1361,  1362,  1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,
    1373,  1376,  1377,  1378,  1386,  1392,  1393,  1394,  1397,  1398,
    1401,  1402,  1406,  1414,  1424,  1425,  1426,  1435,  1440,  1446,
    1454,  1458,  1458,  1498,  1499,  1503,  1505,  1507,  1509,  1511,
    1515,  1516,  1517,  1520,  1521,  1524,  1525,  1528,  1529,  1530,
    1533,  1534,  1537,  1538,  1542,  1544,  1546,  1548,  1551,  1552,
    1555,  1556,  1559,  1563,  1573,  1581,  1582,  1583,  1584,  1588,
    1592,  1594,  1598,  1598,  1600,  1605,  1612,  1619,  1631,  1632,
    1633,  1637,  1644,  1651,  1659,  1669,  1677,  1687,  1695,  1704,
    1713,  1723,  1731,  1740,  1749,  1759,  1768,  1785,  1793,  1805,
    1806,  1820,  1821,  1824,  1825,  1837,  1847,  1852,  1857,  1863,
    1870,  1877,  1884,  1894,  1901,  1910,  1917,  1923,  1931,  1937,
    1945,  1946,  1947,  1948,  1949,  1965,  1966,  1967,  1976,  1977,
    1981,  1991,  2007,  2008,  2012,  2020,  2029,  2052,  2053,  2054,
    2058,  2075,  2097,  2098,  2103,  2112,  2126,  2135,  2161,  2162,
    2163,  2164,  2165,  2166,  2167,  2171,  2178,  2190,  2193,  2194,
    2198,  2199,  2203,  2205,  2210,  2218,  2227,  2239,  2251,  2266,
    2267,  2272,  2286,  2296,  2310,  2324,  2332,  2343,  2349,  2360,
    2366,  2373,  2379,  2401,  2402,  2403,  2404,  2408,  2417,  2434,
    2442,  2453,  2464,  2484,  2485,  2486,  2490,  2500,  2513,  2522,
    2534,  2542,  2563,  2564,  2565,  2569,  2581,  2606,  2618,  2633,
    2645,  2657,  2666,  2676,  2685,  2695,  2708,  2715,  2724,  2732,
    2738,  2753,  2755,  2759,  2768,  2781,  2783,  2787,  2792,  2799,
    2804,  2812,  2816,  2817,  2821,  2833,  2844,  2845,  2846,  2850,
    2851,  2852,  2853,  2854,  2855,  2858,  2860,  2864,  2865,  2868,
    2870,  2873,  2875,  2879,  2886,  2895,  2901,  2907,  2914,  2920,
    2927,  2933,  2939,  2945,  2951,  2957,  2963,  2969,  2975,  2981,
    2987,  2993,  2999,  3005,  3011,  3017,  3030,  3040,  3050,  3060,
    3066,  3074,  3075,  3076,  3079,  3087,  3093,  3106,  3107,  3107,
    3111,  3112,  3115,  3116,  3117,  3121,  3122,  3122,  3126,  3134,
    3144,  3145,  3146,  3147,  3148,  3151,  3151,  3154,  3155,  3158,
    3168,  3181,  3182,  3182,  3185,  3186,  3187,  3188,  3191,  3195,
    3196,  3197,  3198,  3204,  3207,  3213,  3218,  3224,  3228,  3228,
    3233,  3234,  3236,  3237,  3241,  3242,  3246,  3247,  3248,  3251,
    3252,  3253,  3254,  3258,  3259,  3263,  3264,  3265,  3266,  3267,
    3268,  3269,  3270,  3274,  3282,  3291,  3292,  3293,  3297,  3308,
    3320,  3331,  3346,  3351,  3355,  3356,  3360,  3362,  3364,  3366,
    3370,  3371,  3377,  3381,  3383,  3385,  3387,  3389,  3394,  3398,
    3399,  3403,  3412,  3425,  3426,  3434,  3442,  3450,  3451,  3452,
    3453,  3454,  3455,  3457,  3459,  3464,  3469,  3473,  3474,  3477,
    3492,  3499,  3514,  3527,  3542,  3555,  3556,  3557,  3560,  3561,
    3564,  3565,  3566,  3567,  3568,  3569,  3570,  3571,  3572,  3574,
    3576,  3578,  3580,  3582,  3586,  3587,  3590,  3591,  3594,  3595,
    3598,  3599,  3600,  3601,  3602,  3603,  3604,  3605,  3606,  3607,
    3608,  3609,  3610,  3611,  3612,  3613,  3614,  3615,  3618,  3619,
    3622,  3622,  3632,  3633,  3634,  3635,  3636,  3637,  3638,  3639,
    3640,  3641,  3642,  3643,  3650,  3651,  3652,  3653,  3654,  3655,
    3656,  3657,  3658,  3659,  3660,  3661,  3662,  3663,  3664,  3665,
    3666,  3667,  3668,  3669,  3670,  3673,  3674,  3675,  3678,  3679,
    3682,  3683,  3684,  3687,  3688,  3689,  3693,  3694,  3695,  3696,
    3697,  3698,  3699,  3700,  3701,  3702,  3703,  3704,  3705,  3706,
    3707,  3708,  3709,  3710,  3711,  3712,  3713,  3714,  3715,  3716,
    3717,  3718,  3719,  3720,  3721,  3722,  3723,  3724,  3725,  3726,
    3727,  3730,  3731,  3734,  3747,  3748,  3749,  3753,  3756,  3757,
    3758,  3759,  3759,  3761,  3762,  3770,  3774,  3780,  3786,  3793,
    3800,  3806,  3812,  3819,  3828,  3829,  3832,  3833,  3836,  3837,
    3838,  3839,  3842,  3843,  3844,  3845,  3846,  3847,  3848,  3849,
    3850,  3851,  3858,  3859,  3860,  3861,  3862,  3863,  3864,  3865,
    3868,  3869,  3870,  3870,  3870,  3871,  3871,  3871,  3871,  3871,
    3871,  3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,
    3873,  3873,  3873,  3873,  3873,  3873,  3873,  3874,  3874,  3874,
    3874,  3875,  3875,  3875,  3875,  3875,  3875,  3875,  3875,  3875,
    3875,  3875,  3875,  3876,  3876,  3876,  3876,  3876,  3876,  3876,
    3876,  3877,  3877,  3877,  3877,  3877,  3877,  3877,  3877,  3878,
    3878,  3878,  3878,  3878,  3878,  3878,  3878,  3878,  3879,  3879,
    3879,  3879,  3879,  3879,  3879,  3879,  3880,  3880,  3880,  3881,
    3881,  3881,  3881,  3881,  3881,  3881,  3881,  3882,  3882,  3882,
    3882,  3882,  3882,  3882,  3883,  3883,  3883,  3883,  3883,  3883,
    3883,  3884,  3884,  3884,  3884,  3885,  3885,  3885,  3885,  3885,
    3885,  3885,  3885,  3885,  3885,  3885,  3885,  3886,  3886,  3886,
    3886,  3886,  3887,  3894,  3898,  3904,  3910,  3916,  3928,  3932,
    3938,  3946,  3947,  3950,  3951,  3952,  3953,  3954,  3955,  3956,
    3963,  3967,  3973,  3989,  3990,  3993,  3994,  3995,  3996,  3999,
    4003,  4009,  4018,  4026,  4037,  4041,  4050,  4051,  4055,  4056,
    4057,  4058,  4059,  4060,  4061,  4062,  4065,  4069,  4075,  4085,
    4092,  4099,  4107,  4117,  4118,  4119,  4122,  4123
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
  "FTOKEN_LENGTH", "FPG_CALL_EXTERNAL", "JOB", "JOBS", "SCHEDULE",
  "MESSAGE", "APPEND", "READ", "LAST", "SESSION", "';'", "'.'", "'('",
  "')'", "','", "']'", "'='", "$accept", "stmt_list", "expr", "@1", "@2",
  "@3", "@4", "val_list", "array_val_list", "@5", "any_array_arg",
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
  "notify_stmt", "create_subscription_stmt", "drop_subscription_stmt",
  "resume_subscription_stmt", "ack_subscription_stmt", "create_job_stmt",
  "drop_job_stmt", "alter_job_stmt", "create_message_log_stmt",
  "drop_message_log_stmt", "message_dml_stmt", "reclaim_table_stmt",
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
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,    59,    46,    40,    41,    44,    93,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   441,   442,   442,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   444,   443,   445,   443,   446,   443,
     447,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   448,   448,   449,   449,   450,   443,   443,   443,   451,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   452,   452,
     453,   443,   454,   443,   455,   443,   456,   443,   457,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   458,
     443,   459,   443,   460,   443,   461,   443,   462,   443,   463,
     443,   464,   443,   465,   443,   466,   443,   467,   443,   468,
     443,   469,   443,   470,   443,   471,   443,   472,   443,   473,
     443,   474,   443,   475,   443,   476,   443,   477,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   478,   478,   478,
     443,   443,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   443,   443,   443,   443,   480,   480,   443,   443,   443,
     443,   443,   443,   443,   443,   481,   482,   482,   482,   483,
     483,   484,   484,   485,   485,   486,   486,   486,   487,   487,
     488,   488,   489,   489,   490,   490,   491,   491,   492,   492,
     493,   493,   494,   494,   495,   495,   495,   496,   496,   496,
     496,   497,   497,   498,   498,   498,   498,   498,   499,   499,
     500,   500,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   502,   502,   502,   503,   504,   504,   504,   505,   505,
     506,   506,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   509,   508,   510,   510,   511,   511,   511,   511,   511,
     512,   512,   512,   513,   513,   514,   514,   515,   515,   515,
     516,   516,   517,   517,   518,   518,   518,   518,   519,   519,
     520,   520,   521,   481,   522,   523,   523,   523,   523,   522,
     524,   524,   525,   525,   522,   481,   526,   526,   527,   527,
     527,   481,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   529,
     529,   530,   530,   531,   531,   532,   533,   533,   533,   534,
     534,   534,   534,   481,   535,   481,   536,   536,   537,   537,
     538,   538,   538,   538,   538,   481,   481,   481,   481,   481,
     539,   539,   540,   540,   541,   541,   541,   481,   481,   481,
     542,   542,   543,   543,   544,   544,   545,   545,   481,   481,
     481,   481,   481,   481,   481,   546,   546,   547,   548,   548,
     549,   549,   550,   550,   551,   551,   551,   552,   552,   553,
     553,   554,   555,   555,   556,   557,   557,   558,   558,   559,
     559,   560,   560,   481,   481,   481,   481,   561,   561,   562,
     562,   563,   564,   481,   481,   481,   565,   565,   566,   566,
     567,   567,   481,   481,   481,   568,   568,   569,   569,   570,
     570,   570,   570,   570,   570,   570,   481,   571,   481,   572,
     572,   573,   573,   573,   574,   575,   575,   575,   575,   576,
     576,   481,   481,   481,   577,   577,   578,   578,   578,   579,
     579,   579,   579,   579,   579,   580,   580,   581,   581,   582,
     582,   583,   583,   584,   584,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   585,   585,   585,   585,   585,   585,
     585,   586,   586,   586,   481,   587,   587,   588,   589,   588,
     590,   590,   591,   591,   591,   592,   593,   592,   594,   594,
     595,   595,   595,   595,   595,   596,   596,   597,   597,   598,
     598,   599,   600,   599,   601,   601,   601,   601,   587,   602,
     602,   602,   602,   481,   603,   603,   603,   481,   605,   604,
     606,   606,   607,   607,   608,   608,   609,   609,   609,   610,
     610,   610,   610,   611,   611,   612,   612,   612,   612,   612,
     612,   612,   612,   481,   613,   614,   614,   614,   615,   615,
     615,   615,   481,   481,   616,   616,   481,   481,   481,   481,
     617,   617,   481,   618,   618,   618,   618,   618,   481,   619,
     619,   481,   620,   621,   621,   620,   620,   622,   622,   622,
     622,   622,   622,   622,   622,   622,   622,   623,   623,   624,
     624,   620,   620,   620,   620,   625,   625,   625,   626,   626,
     627,   627,   627,   627,   627,   627,   627,   627,   627,   627,
     627,   627,   627,   627,   628,   628,   629,   629,   630,   630,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   632,   632,
     633,   627,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   635,   635,   635,   636,   636,
     637,   637,   637,   638,   638,   638,   639,   639,   639,   639,
     639,   639,   639,   639,   639,   639,   639,   639,   639,   639,
     639,   639,   639,   639,   639,   639,   639,   639,   639,   639,
     639,   639,   639,   639,   639,   639,   639,   639,   639,   639,
     639,   640,   640,   641,   642,   642,   642,   481,   643,   643,
     643,   644,   644,   645,   645,   481,   646,   646,   646,   646,
     646,   646,   646,   646,   647,   647,   648,   648,   649,   649,
     649,   649,   650,   650,   650,   650,   650,   650,   650,   650,
     650,   650,   651,   651,   651,   651,   651,   651,   651,   651,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   481,   653,   653,   653,   653,   481,   654,
     654,   655,   655,   656,   656,   656,   656,   656,   656,   656,
     481,   657,   657,   658,   658,   659,   659,   659,   659,   481,
     660,   660,   481,   481,   481,   661,   662,   662,   663,   663,
     663,   663,   663,   663,   663,   663,   481,   664,   664,   481,
     481,   481,   481,   665,   665,   665,   666,   666
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
       4,     4,     1,     1,     1,     4,    10,     4,     6,    12,
      14,     8,    10,     8,    10,    11,     1,     3,     1,     4,
       6,     0,     4,     4,     2,     0,     4,     7,     4,     1,
       3,     1,     1,     1,    10,    12,     0,     2,     2,     0,
       2,     2,     2,     2,     2,     0,     2,     1,     3,     0,
       4,     0,     5,     5,     7,    10,    10,    17,    12,    19,
      11,     6,     8,     6,     6,     6,     9,     6,     5,     8,
       7,     9,     8,    10,     9,     7,     7,     8,     8,     7,
       5,     0,     1,     2,     1,    10,     6,     0,     0,     5,
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
       5,     5,     9,    10,     7,     4,     7,     1,     3,     9,
       9,     9,     6,    11,     8,     0,     1,     2,     1,     3,
       5,     7,     4,     4,     5,     5,     4,     6,    11,    13,
      13,    15,     4,     6,     1,     3,     1,     3,     1,     3,
       0,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       4,     3,     3,     3,     2,     3,     4,     4,     1,     3,
       0,     4,     0,     3,     2,     3,     3,     3,     3,     5,
       5,     5,     3,     5,     2,     7,     5,     7,     5,     2,
       3,     2,     3,     2,     3,     5,     4,     5,     7,     8,
       8,     7,     6,     6,     5,     0,     3,     5,     0,     1,
       0,     2,     2,     0,     4,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     3,     5,     2,     4,     1,     1,     1,     1,
       3,     3,     3,     3,     5,     5,     1,     1,     1,     4,
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
       1,    13,    15,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     4,     4,     1,     5,     0,     2,     3,     2,
       3,     2,     2,     2,     1,     2,     1,     3,     5,     4,
       4,     6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   705,     0,   368,     0,   600,     0,
       0,     0,     0,     0,   600,     0,   302,     0,   655,     0,
       0,     0,     0,     0,     0,     0,     0,   255,   363,   375,
     381,   413,   420,   428,   429,   437,   438,   439,   448,   449,
     450,   451,   452,   453,   454,   425,   426,   427,   483,   484,
     485,   486,   493,   494,   495,   502,   503,   504,   516,   518,
       0,   532,   533,   531,   584,   623,   627,   653,   663,   672,
     678,   681,   837,   845,  1003,  1008,  1020,  1029,  1034,  1046,
       0,     0,     0,     0,     0,   524,     0,     0,   670,     0,
       0,     0,     0,     0,     0,     0,   670,   706,     0,     0,
     670,     0,     0,     0,     0,     0,     0,   628,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   606,   477,   481,   479,   480,     0,     0,
     606,     0,     0,   840,   841,     0,     0,     0,     0,   679,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,   415,   521,     0,
       0,  1036,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   707,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   670,   630,
     372,     0,   367,   365,   366,     0,   666,     0,  1006,     0,
     414,  1004,     0,  1030,     0,     0,   668,     0,   378,     0,
    1047,     0,     0,     0,   489,     0,   498,     0,     0,   602,
     603,   604,   605,   601,     0,   478,     0,   517,     0,     0,
       0,     0,   838,   839,     0,     4,     9,    10,    12,    11,
       8,     0,     0,     0,   313,   303,   251,     0,   252,   253,
       0,   304,   305,   306,     0,    13,   254,   308,   310,   309,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     317,   256,   311,   416,   657,   656,   317,     0,     0,     0,
       0,     0,   318,   320,   334,   321,   334,   680,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   491,     0,     0,
       0,     0,     0,     3,     0,     0,   421,   422,     0,     0,
     525,  1033,  1032,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1050,     0,  1049,     0,   501,   500,  1018,  1014,
    1013,  1017,  1015,  1019,  1016,  1009,     0,  1011,     0,     0,
     671,   664,     0,     0,   854,     0,     0,     0,     0,   854,
    1024,  1023,     0,     0,   665,     0,     0,     0,  1036,   432,
       0,   457,     0,     0,     0,     0,     0,   505,     0,     0,
       0,     0,   370,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   379,   380,   376,     0,     0,   434,     0,
     464,     0,     0,     0,   507,     0,   607,   482,     0,   607,
     844,   843,   842,     0,    78,     0,    32,    31,    20,     0,
       0,     0,     0,     0,    55,    88,     0,     0,     0,     0,
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
       0,   316,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   314,     0,
       0,     0,     0,     0,   357,   331,   317,     0,     0,     0,
       0,     0,   342,   341,   345,   349,   346,     0,     0,   343,
     333,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   424,   423,     0,
     521,     0,     0,   519,     0,     0,     0,     0,     0,     0,
     568,     0,     0,   580,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1044,  1037,     0,     0,  1010,     0,     0,     0,   817,   826,
     785,   785,   785,   785,   785,   810,   785,   807,     0,   785,
     785,   785,   788,   819,   788,   818,   785,   785,   785,     0,
     788,   785,   788,   809,   816,   808,   827,   828,     0,     0,
       0,   811,   673,     0,     0,     0,     0,     0,     0,   855,
     856,     0,     0,     0,     0,     0,  1027,  1025,  1026,  1028,
       0,   536,     0,     0,     0,     0,     0,  1035,     0,   430,
       0,   458,     0,     0,     0,     0,     0,     0,   834,   632,
       0,   634,   635,     0,   373,     0,   280,     0,   259,   372,
     667,  1007,  1005,  1031,   553,     0,   669,   378,  1048,   435,
       0,   465,     0,   490,   499,     0,     0,     0,     0,   662,
       0,     0,     5,    51,    79,     0,    48,     0,     0,   243,
       0,     0,     6,     0,    57,     0,     0,     0,   229,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   170,     0,
       0,     0,   174,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,     0,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,    21,    23,    24,    22,
     249,   247,    46,     0,    44,   215,    80,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    33,    74,    73,    25,
      26,    28,    14,    15,    16,    17,    18,    19,    27,    30,
      29,     0,   315,   291,     0,   312,   418,   417,   317,     0,
       0,     0,   322,     0,   357,     0,   362,   330,     0,   259,
     319,   343,   343,     0,   336,     0,   344,     0,   326,   325,
       0,     0,     0,     0,     0,     0,     0,   475,     0,   492,
       0,     0,     0,     0,     0,   525,     0,     0,     0,     0,
       0,     0,   564,     0,   561,   567,   563,     0,   752,     0,
       0,     0,     0,     0,   565,  1051,  1052,  1045,  1043,  1039,
       0,  1041,     0,  1042,     0,     0,  1012,   854,   854,     0,
     814,   790,   796,   793,   790,   790,     0,   790,   790,   790,
     789,   793,   793,   790,   790,   790,     0,   793,   790,   793,
       0,     0,     0,     0,     0,     0,     0,     0,   858,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   539,     0,     0,     0,     0,     0,     0,   432,
       0,   455,   457,   487,     0,     0,     0,     0,   835,   836,
       0,     0,   750,   702,   334,   631,     0,   636,   637,   638,
     639,   260,     0,   287,   259,   369,   371,     0,   377,   436,
     466,   508,     0,   587,   609,     0,     0,   586,   587,     0,
     587,     0,    90,     0,   241,     0,     0,     0,     0,    53,
       0,     0,     0,     0,   143,     0,     0,     0,     0,     0,
     177,   178,   179,   180,   181,   182,     0,     0,     0,     0,
     158,     0,     0,     0,   162,   163,   164,   166,     0,     0,
     168,     0,   171,   172,   173,     0,     0,     0,     0,     0,
       0,    97,    91,    92,    93,    94,    95,    96,   146,   147,
     148,     0,     0,     0,   225,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,   185,   186,
     187,   188,   189,   190,   191,     0,     0,     0,     0,     0,
       0,     0,     0,   201,     0,   204,   205,   206,     0,    60,
       0,    62,     0,     0,     0,     0,     0,    70,    71,    72,
       0,     0,     0,   149,     0,    47,    45,     0,     0,   250,
     248,    82,     0,     0,    40,    36,    38,     0,    58,     0,
     259,     0,     0,   357,   359,   359,   359,     0,   323,   327,
       0,     0,     0,   280,   347,   348,     0,     0,   350,     0,
       0,     0,   444,   446,     0,     0,     0,     0,   472,     0,
       0,     0,     0,   522,   523,   520,     0,     0,     0,     0,
       0,     0,   752,   752,     0,   576,   575,   581,   752,   570,
       0,     0,   579,  1038,  1040,     0,     0,     0,     0,     0,
     802,   812,   804,   806,   831,     0,   805,   801,   800,   823,
     822,   799,   803,   798,     0,   820,   797,   821,     0,     0,
       0,   675,   830,     0,   674,     0,   859,   861,   860,     0,
     857,     0,     0,   406,     0,     0,     0,     0,     0,   408,
       0,     0,     0,     0,     0,   872,     0,     0,   537,   538,
       0,   545,   536,     0,     0,     0,     0,     0,     0,   431,
       0,   458,     0,     0,     0,     0,     0,   834,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   708,     0,     0,
     633,   652,     0,     0,   648,     0,     0,     0,     0,   629,
     640,   643,     0,     0,  1053,   374,   554,     0,     0,     0,
     618,   608,     0,     0,   587,   625,   587,   626,    52,   245,
       0,   244,     0,     0,     0,    56,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,   101,   103,     0,     0,     0,     0,     0,   135,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,    59,
       0,     0,     0,     0,     0,     0,   261,   259,   419,   324,
       0,     0,     0,     0,   332,     0,   658,     0,     0,   287,
     339,   337,     0,     0,   335,   351,     0,   442,   443,     0,
       0,     0,     0,     0,   469,   470,     0,     0,   476,     0,
       0,     0,     0,     0,   529,   528,   526,     0,     0,     0,
       0,   581,   581,   752,     0,     0,   764,     0,   769,     0,
       0,     0,     0,     0,   582,   773,   754,     0,   771,   572,
     581,   562,   569,   578,   577,     0,     0,   786,     0,   791,
     792,     0,     0,   793,     0,   793,   793,   815,   829,     0,
       0,     0,   866,   869,   868,   870,   867,   862,   863,   865,
     871,   864,     0,     0,     0,     0,     0,     0,     0,   382,
       0,     0,     0,     0,     0,     0,   872,     0,     0,     0,
     540,   544,   542,   541,   543,     0,   549,   539,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   460,   456,
     488,   496,     0,     0,     0,   750,   704,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   687,   750,     0,   833,
     647,   645,   646,   649,   650,   651,     0,     0,     0,   265,
     265,   281,   282,   288,     0,   364,   620,   619,     0,     0,
     610,   615,   614,     0,   612,   590,   624,   242,   246,     0,
      54,     0,   141,   140,     0,   145,     0,     0,   230,   231,
     176,   154,   155,     0,     0,   159,   160,   161,   165,   167,
     169,   210,   211,   212,   213,     0,    98,   107,   109,   105,
     111,   113,   115,   151,     0,     0,   153,   226,   272,   272,
     272,   117,     0,     0,   125,     0,     0,   133,   272,   272,
     183,     0,     0,     0,   195,   196,     0,     0,   199,     0,
     202,     0,   207,     0,    61,    63,    66,    67,    68,    69,
       0,     0,     0,   150,    81,    85,     0,     0,    50,     0,
       0,    42,     0,    43,    35,     0,     0,   270,   261,   358,
       0,     0,     0,   328,     0,     0,     0,  1053,   352,     0,
     338,     0,     0,   445,   447,     0,     0,     0,   473,   513,
       0,     0,   511,     0,     0,     0,     0,     0,   748,     0,
     566,   574,   581,   753,   583,     0,     0,     0,     0,     0,
       0,   774,   755,   756,   758,   757,   762,     0,     0,     0,
       0,   772,   770,   571,     0,     0,   872,     0,     0,   795,
     824,   832,   825,   813,     0,   676,   383,     0,   872,     0,
     399,     0,     0,     0,     0,   407,     0,   391,     0,     0,
       0,     0,     0,   880,   881,   882,   884,   883,  1002,   887,
     888,   889,   995,   886,   885,   990,   991,   992,   993,   994,
     977,   890,   931,   922,   927,   872,   973,   963,   934,   966,
     909,   916,   913,   900,   956,   945,   872,   953,   971,   907,
     908,   978,   894,   901,   949,   965,   970,   967,   928,   906,
     975,   847,   905,   925,   918,   915,   872,   964,   954,   895,
     944,   983,   921,   935,   917,   936,   920,   959,   942,   903,
     872,   892,   976,   898,   960,   912,   939,   951,   911,   872,
     940,   937,   938,   946,   958,   948,   914,   919,   943,   932,
     933,   950,   982,   955,   924,   957,   910,   984,   941,   929,
     923,   930,   926,   969,   897,   891,   962,   968,   902,   904,
     893,   974,   952,   972,   947,   961,   899,   896,   980,   872,
     981,   979,   997,   998,   999,  1000,  1001,   988,   989,   985,
     986,   987,   996,   873,     0,     0,   547,   546,     0,   551,
     545,     0,   385,     0,     0,     0,     0,     0,     0,     0,
       0,   459,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   300,     0,     0,     0,     0,
     683,   701,   709,   752,     0,   642,   644,   266,   267,     0,
     284,   286,     0,     0,     0,  1056,  1054,  1055,   588,     0,
     611,     0,     0,     0,  1053,     0,     0,     0,   144,   233,
     234,   235,   236,   239,   238,   240,   232,   237,     0,     0,
       0,   272,   272,   272,   272,   272,   272,     0,     0,     0,
     276,   276,   276,   272,     0,     0,     0,   272,     0,     0,
       0,   272,   276,   276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    87,    41,    37,    39,
       0,     0,     0,   280,   270,   360,     0,     0,     0,     0,
     659,   660,     0,   654,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   530,     0,   555,   726,     0,   724,
       0,   556,     0,   573,     0,     0,     0,     0,     0,     0,
     776,     0,     0,     0,     0,     0,     0,   872,     0,   787,
     794,     0,   872,     0,   387,   400,     0,   409,   410,   411,
       0,     0,     0,     0,     0,   384,   846,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   534,   549,
       0,     0,   393,     0,     0,     0,   433,   462,   463,   461,
     497,   506,     0,   687,     0,     0,     0,     0,   716,     0,
       0,     0,   713,     0,   712,     0,   722,     0,     0,     0,
       0,     0,     0,   682,   751,   641,   265,   283,   290,   289,
       0,     0,   622,   621,   617,   616,     0,   592,   585,     7,
     142,   139,   156,   157,   214,   276,   276,   276,   276,   276,
     276,   216,     0,   152,     0,     0,     0,     0,     0,   276,
     119,     0,     0,   276,   127,     0,     0,   276,     0,     0,
     192,   193,   194,   197,   198,     0,   203,   208,     0,     0,
       0,     0,   265,   268,   271,   287,   280,   356,     0,   355,
     354,     0,     0,   353,     0,     0,     0,     0,     0,   514,
       0,     0,   512,   527,     0,     0,     0,   560,     0,   749,
     766,     0,   784,   768,     0,     0,     0,   777,   775,   759,
     760,   761,   763,     0,   872,     0,   849,   677,     0,   851,
     401,     0,   395,   392,     0,   399,   874,     0,     0,     0,
       0,     0,   872,     0,   548,     0,     0,   551,   389,     0,
       0,     0,   386,     0,   685,   703,     0,     0,     0,     0,
       0,   714,   715,   301,   710,   689,     0,     0,     0,     0,
       0,     0,     0,   285,  1057,     0,   589,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,   273,     0,
     100,   102,   104,     0,   272,     0,     0,     0,   272,     0,
       0,     0,   136,   138,     0,     0,     0,     0,   292,   263,
       0,     0,   262,   293,   287,   361,   329,   661,     0,     0,
       0,     0,     0,   515,     0,   558,     0,   727,   725,     0,
     782,   783,     0,     0,     0,   872,     0,   848,   850,     0,
     397,   412,   388,     0,   879,   878,   875,   877,   876,     0,
       0,   550,     0,   535,   396,   394,     0,     0,   717,     0,
       0,   723,     0,   688,     0,     0,     0,     0,     0,   695,
       0,     0,     0,     0,   613,     0,     0,   591,   108,   110,
     106,   112,   114,   116,   217,     0,   265,   277,   118,   276,
     121,   123,   126,   276,   129,   131,   134,   200,    75,     0,
       0,   269,   265,     0,   298,   258,     0,     0,   474,   467,
       0,   471,   509,     0,     0,   765,   767,   781,   778,     0,
     853,     0,   401,  1021,   872,     0,   390,     0,     0,   711,
       0,   684,   690,   691,     0,     0,     0,     0,   598,     0,
     593,     0,   595,   596,   275,   278,     0,     0,   272,   272,
       0,   272,   272,     0,     0,   264,   295,   294,     0,   257,
       0,     0,     0,     0,     0,   779,   780,   852,     0,     0,
     403,   398,     0,   552,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   594,     0,   265,   120,   276,   276,   128,
     276,   276,    76,    77,     0,     0,   299,     0,     0,   468,
     510,   728,     0,     0,   402,     0,  1022,     0,     0,     0,
       0,     0,     0,   696,   694,   599,     0,   279,     0,     0,
       0,     0,   297,   296,     0,     0,   730,     0,   405,   404,
       0,     0,     0,     0,   730,     0,     0,   597,   122,   124,
     130,   132,     0,     0,   557,   729,     0,     0,     0,     0,
     718,     0,     0,   697,   692,     0,     0,     0,   744,     0,
       0,   686,     0,   730,   730,     0,     0,   693,     0,     0,
       0,   745,   559,     0,   741,   743,   742,     0,     0,     0,
     720,   719,     0,   698,     0,     0,   746,   747,   731,   739,
     733,     0,   735,   740,   737,     0,   730,     0,   440,     0,
     734,   732,   738,   736,   721,     0,   441,     0,     0,     0,
       0,     0,     0,   699,   700
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,   833,  1287,  1540,  1542,  1538,   834,  1170,   845,
    1541,   835,  1277,  1534,  1278,  1535,   846,  1768,  1769,  1770,
    2113,  2111,  2112,  2114,  2115,  2116,  2123,  2434,  2588,  2589,
    2127,  2438,  2591,  2592,  2131,  1778,  1779,   852,  1472,   511,
      26,    27,   806,  1817,  2323,  2080,  2452,  2153,  2120,  2428,
    2296,  2527,  1143,  1711,  1712,  1444,  1290,  2544,  2599,  2066,
     135,   371,   372,   648,   381,   382,   383,   384,  1003,   671,
     385,   668,  1017,   669,  1013,  1564,  1565,  1002,  1551,  2156,
     386,    28,   108,   195,   472,    29,   485,    30,  2206,  2480,
    2609,  2610,  1388,  1389,    31,    32,   997,   157,    33,   789,
      34,    35,  1569,    36,    37,    38,   791,  1121,  1677,  1678,
      39,    40,  1576,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   410,    60,   693,  1585,    61,  1112,  1401,  1666,
    2037,  2039,  2228,    62,    63,  1609,    64,  1450,  2271,  2094,
    2419,  2517,  2624,  2416,   123,   224,   828,  1155,  1454,  2092,
    1723,  1153,    65,    66,   189,   470,   800,   803,  1140,  1439,
    1440,  1441,    67,   138,  1009,    68,   167,    69,    70,    71,
    2263,  2070,  2692,  2693,   106,  1426,  1427,  2180,  2178,  2642,
    2684,  1849,  1428,  1337,  1070,  1081,  1350,  1351,   762,  1355,
    1133,  1134,    72,   133,   134,    73,   768,   769,   770,  1642,
    1657,  2033,    74,    75,   436,   437,    76,   452,   780,    77,
      78,   424,   721,    79,  1715,  2087
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2048
static const yytype_int16 yypact[] =
{
   13424,  -160,  -141,   178, 13423,   184, -2048,   815, -2048,   194,
     207,   202,  -109,    48, -2048,    43, -2048,   127,   753,   126,
     515,   -35,   176,   183,   327,   544,   171, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
     631, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
     668,   814,   816,   250,   824, -2048,   217,   502,   675,   839,
     690,   844,   132,   846,   850,   857,   675, -2048,   623,   741,
     675,   509,   520,   101,   377,   944,   698, -2048,    78,   522,
     539,   955,   545,   564,   957,   582,   583,   584,   568,   578,
     585,   586,  1003,   856,   838,   595, -2048, -2048,  1013,  1015,
     856,   805,    62,   605, -2048,  1177,  1019,   922,    49, -2048,
    1026,  -110,   926,   935,   941,   872,   953,   646,  1062,  1091,
    1094,   963,   666,   947,   990, -2048, 13424,   521,  -176,   580,
    1069,   170,  1130,   632,    30,   439,   868,  1135,  1106,  1156,
     728,   993,   593,   897,   732,   712,   996,  1197, -2048,   569,
    1200,   647,   649,  1078,   939,  1028,   949,  1225,   675,   819,
     800,  1258, -2048, -2048, -2048,   -90, -2048,   984, -2048,   986,
   -2048, -2048,   995, -2048,  1001,  1089, -2048,  1007,   104,  1025,
   -2048,  1036,   653,   654, -2048,  1043, -2048,  1047,   657, -2048,
   -2048, -2048, -2048, -2048,  1331, -2048,  1333, -2048,  1101,  1345,
   10058, 10058, -2048, -2048,  1370,   473, -2048, -2048, -2048, -2048,
    1387, 10058, 10058, 10058, -2048, -2048, -2048,  7314, -2048, -2048,
     965, -2048, -2048, -2048,  1018, -2048, -2048, -2048, -2048, -2048,
   -2048,  1378,  1021,  1060,  1112,  1120,  1132,  1152,  1154,  1157,
    1158,  1159,  1161,  1162,  1164,  1167,  1168,  1169,  1170,  1171,
    1174,  1175,  1176,  1178,  1179,  1180,  1181,  1182,  1183,  1186,
    1187,  1188,  1189,  1190,  1191,  1192,  1206,  1208,  1209,  1213,
    1214,  1217,  1219,  1221,  1223,  1224,  1226,  1227,  1228,  1246,
    1248,  1249,  1250,  1251,  1252,  1259,  1277, -2048, -2048,  1287,
    1290,  1291,  1295,  1297,  1298,  1300,  1301,  1307,  1308,  1309,
    1310,  1312,  1314,  1315,  1317,  1318,  1319,  1320,  1321,  1322,
    1323,  1324,  1328,  1329,  1332,  1334,  1340,  1341,  1343,  1347,
    1348,  1351,  1355,  1356,  1357,  1359,  1360,  1364,  1365,  1366,
    1367,  1368,  1369,  1371,  1373,  1374,  1375,  1376,  1379, 10058,
   14157,   -91, -2048,   988,   924,   978,    36,  1380,  1495,  1381,
     134,  -177,   591, -2048,  1541, -2048,  1541, -2048,  1618,  1502,
    1744,  1758,  1764,  1766,  1794,  1790,  1548, -2048,  1400,  1819,
    1795,  1821,  1824, -2048,  1779,  1780, -2048, -2048,  1791,  1837,
     265, -2048, -2048,   737,   598,   321,   112,   466,   629,   603,
    1419,  1774,  1570,  1605,   175,   704, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048,   482, -2048,  1852,  1853,
   -2048, -2048, 13822,  1660,    68,  1855,  1662,  1580,  1860,    68,
   -2048, -2048,   -79,    39, -2048,  1669,   659,  1592, -2048,  1602,
    1599, -2048,  1600,  1464,  1880,  1456,  1882,  1609,  1884,  1885,
     -45,  1862, -2048,  -130,  -164,    49,  1889,  1891,  1892,  1893,
    1894,    40,  1895, -2048, -2048, -2048,  1896,  1897,  1827,  1622,
    1838,  1630,  1912,  1913, -2048,  1636,  -186, -2048,  1915,  -178,
   14320, 14320, -2048,  1917, 10058, 10058,  1553,  1553,  1888, 10058,
   13714,    79,  1923,  1925,  1494, -2048, 10058,  6530, 10058, 10058,
   10058, 10058, 10058, 10058, 10058, 10058, 10058,  1497, 10058, 10058,
   10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058,
   10058, 10058, 10058,  1498, 10058, 10058, 10058,  1499, 10058, 10058,
   10058, 10058, 10058, 10058,  7706, 10058, 10058, 10058, 10058, 10058,
   10058, 10058, 10058, 10058, 10058,  1500,  1501,  1503,  1504,  1505,
   10058, 10058,  1506,  1507,  1508, 10058, 10058,  1934,  1509,  1510,
   10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058,
   10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058,
   10058, 10058,  1513, 10058, 10058, 10058,  1518, 10058, 10058, 10058,
   10058, 10058, 10058, 10058, 10058, 10058, 10058,  1520, 10058, 10058,
   10617, -2048, 10058, 10058, 10058, 10058, 10058,    52,  1522,   887,
   10058,  6922, 10058, 10058, 10058, 10058, 10058, 10058, 10058, 10058,
   10058, 10058, 10058, 10058, 10058, 10058, 10058,  1956, -2048,    49,
    1957, 10058,  1959,  1963,   436, -2048,   543, 10058,  1530,   519,
    1965,    49, -2048, -2048, -2048,   -67, -2048,    49,  1806,  1775,
   -2048,  1972,  1973,  1706,  1976,  1578,  1579,  1710,  1714,  1716,
    1988,  1719,  1989,  1721,  1559,  1726,  1724, -2048, -2048,  1994,
    1723,  1960,  1961, -2048,  1998,  2001,  2002,  2003,  2004,  2005,
   -2048,  2006,  2007, -2048,  2008,  2009, 13822,  2010,  1769,  2012,
    2015,  1999,  2017,  2016,  2019,  1644,  2020,    35,   635,  2021,
   -2048, -2048,  1807,  1810, -2048,   117,  1593,  1594, -2048, -2048,
    1595,  1595,  1595,  1595,  1595, -2048,  1595, -2048,  1596,  1595,
    1595,  1595,  1964, -2048,  1964, -2048,  1595,  1595,  1595,  1597,
    1964,  1595,  1964, -2048, -2048, -2048, -2048, -2048,  1603,  1604,
    1612, -2048,   650,  2063, 13822,  2070,  2090,  2091,  1658,  1659,
   -2048,  -138,  2093,  2095,  1902,  1663, -2048, -2048, -2048, -2048,
    1904,  2076,  1733,  2127,  1935,  1850,  2130,   175,  1698, -2048,
    2132,  1859,  2134,  2135,  2000,  2138,  1942,  1707,   -75, -2048,
     525, -2048, -2048,    60, -2048, 10058,  1946,    49,  -218,   800,
   -2048, -2048, -2048, -2048, -2048,  1749, -2048,   104, -2048, -2048,
    2148, -2048,  2172, -2048, -2048,  2174,  2175,  2176,   401, -2048,
    2175,   440, -2048,  6746, -2048,  1745, 14320, 13741,   449, -2048,
   10058, 10058, -2048,  1746, -2048, 10058,  1940,   597, -2048, -2048,
   -2048, 10655,  8098,  6994,  7021,  7058, 10711, 10738, 10765, 10792,
   10819, 10846, -2048,  7098,  7145,  7341,  7386, 10873,  7415,  7442,
    7490, 10906, 10936, 10980,   310,  7530, 11008,  7733, -2048, 11037,
   11075, 11102, -2048, 14220,  7778,  7807,  7836,  7882, 10560,  1747,
   11131, 11158, 11185, 11212, 11239, 11266, 11293, 11326,  7922,  8125,
    8170, -2048, -2048, -2048, -2048, -2048, 11356,  8199,  1835,  1836,
    1845,   764,   852,  1750,  1849,  1851,  8228, 11400, 11428, 11457,
   11495, 11522, 11551, 11578, 11605,  8274,  8314,  8517,  8562,  8599,
    8628,  8666,  8706,   912, 11632, 11659, 11686,  8909, -2048,   967,
   11713,  8954, -2048,  8991,  9020,  9058,  9098, 11746, 11776, 11820,
    9301,  9346,  9383, -2048, 11848,  9412, -2048,  6959,  2056,  1678,
    2140,  2140, -2048,    71, -2048, -2048,  1947, 10058, 10058,  1771,
   10058, 14254,  1772,  1773,  1781, 10058,  1647,  1405,  1405,  1607,
    1417,  1325,  1311,  1311,   919,   919,   919,   919,   858,  1888,
    1888,   140, -2048,   -93,  2064, -2048, -2048,  1767,   543,  2046,
    2047,  2054, -2048,  1940,   436, 11877, -2048, -2048,     3,  -171,
     591,  1775,  1775,  2059,  2022,    49, -2048,  2060, -2048, -2048,
    1788,  1954,  2223,  2224,  1818,  1796,  1820,  1823,  2226, -2048,
    1801,  2099,  1802,  1808,   920,   265,  2042,  2045,   443, 13822,
   13822,  2240, -2048,  2028, -2048, -2048, -2048,  2029,  2208, 13822,
    2250,  2013,  2024,  2253, -2048, -2048, -2048, -2048, -2048, -2048,
    2256, -2048,  2260, -2048,  2263,  2264, -2048,    68,    68,  2265,
   -2048, -2048, -2048, -2048, -2048, -2048,  2267, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048,  2267, -2048, -2048, -2048,
    2268,  2269,  2270,  2079,  1839,  1840, 10058,  1841,  2208, 13822,
   13822, 13822,  2066,    68,   272,   232,  -133,  2083,  2278,   685,
     110,   745,  2143,  2281,  -120,  2282,  2283,  2094,  1898,  1602,
    1854, -2048, -2048, -2048,  1870,  2188,  1868,  1875, -2048, -2048,
    2204,  2298,   688, -2048,  1541, -2048,  2303, -2048, -2048, -2048,
      -5, 14320,  2244,  2142,  -218, -2048, -2048,  2306, -2048, -2048,
   -2048, -2048,  2294,  -151, -2048,   535,  1883, -2048,  -151,  1883,
    2125, 10058, -2048, 10058, -2048, 10058, 14018, 13846,  2238,  9450,
    1901,  1900, 10058, 10058, -2048, 10058, 13887,  2169,  2169, 10058,
   -2048, -2048, -2048, -2048, -2048, -2048, 10058, 10058, 10058, 10058,
   -2048, 10058, 10058, 10058, -2048, -2048, -2048, -2048, 10058, 10058,
   -2048, 10058, -2048, -2048, -2048, 13822, 13822, 10058, 10058, 10058,
    2327, -2048,  1982,  1983,  1985,  1997,  2011,  2014, -2048, -2048,
   -2048, 10058, 10058, 10058, -2048, 10058,  1918,  1919,  1920,  2018,
    2348,  2023,  2353,  2025,  1924,  1926, 10058, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, 10058, 10058, 10058, 10058, 10058,
   10058, 10058, 10058, -2048, 10058, -2048, -2048, -2048, 10058, -2048,
   10058, -2048, 10058, 10058, 10058, 10058, 10058, -2048, -2048, -2048,
   10058, 10058, 10058, -2048, 10058, -2048, -2048, 10058,  1940,  2140,
    2140,  2118, 14287, 10058, -2048, 10058, 10058,  1940, -2048,  1958,
    2097,    49,  2363,   436,  2229,  2229,  2229,  1937, -2048,   594,
   10058,  2369,  2382,  1946, -2048, -2048,    49, 10058,   -58,    49,
      69,  1950,  1986,  2211,  2371,    72,  2372,  2390,  2219,  2380,
    2399,  2403,  2388, -2048, -2048, -2048,  2406,  2406,  1974,  2247,
    2248,  1977,  2208,  2208, 13822, -2048, -2048,   637,  2208, -2048,
    2411,  2412, -2048, -2048, -2048,  2194,  2195,  1981,  1984,   574,
     540,   931,   540,   540, -2048,   608,   540,   540,   540,   931,
     931,   540,   540,   540,   610,   931,   540,   931,  1987,  1991,
    1992,  2341, -2048, 10058, 14320,   232,  2208,  2208,  2208,   909,
   -2048,  1995,  1996, -2048,  2030,  2034,  2035,  2036,   612, -2048,
    2152,   232,  2419,  -119,  2370, -2048,  2293,  2027, -2048, -2048,
      27,  2189,  2076,  2168,   232,   -86,  2243,  2438,  2422, -2048,
     615,  1859,  2440,  2441,  2445,  2430,  2448,  -123,  2450,  2037,
    2290,   606,  2038,  2039,  2291,  2040,   622, -2048,  2455,  1940,
   -2048, -2048,  2460,    53,  2453,  2461,  2473,  2043,   504, -2048,
    2067, -2048,   757, 10058,  2266, -2048, -2048,  8490,  2343,  2510,
   -2048, -2048,  2511,  8882,  -149, -2048,  -149, -2048, -2048, 14320,
   14091, -2048, 10058,  2080, 10058, -2048, -2048, 10588,  1361, 11915,
   10058, 10058,  2078,  2081, 11942, 11971, 11998,  9490,  9693, 12025,
   12052, 12079, 12106, 12133, 12166,    81,    82, 12196, 12240,  9738,
    2082,  2084,  2085,  2086,  2087,  2088,  2089,  2031,  9775, 12268,
   12297, -2048, -2048, -2048,  2102,   642,  2104,   645,  2106, -2048,
   -2048, 12335,  9804,  9842,  9882, 12362, 12391, 10085, 10130,  2092,
    2470,  6629, 12418, 12445, 12472, 12499, 12526, 12553, 10159, 10196,
   10234, 12586,  2107,  2111, 10058,  1940, 10058,  1271,  1940, 14320,
    1940,  2113,  1940,  2114,  2115,  2466,  2385,  -218, -2048, -2048,
    2364,  2117,  2124,  2126, -2048,  2525, 14320,  2523,     4,  2142,
   -2048, 14320, 10058,  2128, -2048, -2048,   -58, -2048, -2048,  2116,
      69,  2527,  2556,  2559, -2048, -2048,  2129,  2561, -2048,  2563,
    2562,  2296,  2133,  2568, -2048,  2136,  -187, 10058,  2137,  2139,
    2573,   637,   637,  2208,  2384,  2575,  2145,  2146,  2149,  2532,
    2583,  2151,  2589,   222, -2048, -2048, -2048,  2432,  2436, -2048,
     637, -2048, -2048, -2048, -2048,  2381,   751, -2048,  2596, -2048,
   -2048,  2368,  2600, -2048,  2605, -2048, -2048, -2048, -2048,  2177,
   12616,   655, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048,   788,   232,  2607,  2609,  2611,  2612,  2613, -2048,
    2614,  2182,   658,  2183,   273,   232, -2048,  1712,  2509,  2625,
   -2048, -2048, -2048, -2048, -2048,  2626,  2365,  2143,  2196,   667,
    2366,   232,  2630,   -74,  2634,  2619,  2620,   671, -2048, -2048,
   -2048, -2048,  2540,  2640,  2512,   688, -2048,   458, 10058,  2213,
    2214,  2221,  2656,  2656,  2228,  2573,    37,   688, 13822, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048,   504,   684,   504,   -23,
     553,  2234, -2048,  6668,   681, -2048, -2048, 14320,  2404,  2647,
   -2048, -2048, 14320,   703, -2048,  2476, -2048, -2048, 14320,  2670,
   -2048, 10058, -2048, -2048, 10058, -2048, 12660, 13687, -2048, -2048,
   -2048, -2048, -2048, 10058, 10058, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, 10058, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, 10058, 10058, -2048, -2048,  2324,  2324,
    2324, -2048,  2326,  1080, -2048,  2328,  1138, -2048,  2324,  2324,
   -2048, 10058, 10058, 10058, -2048, -2048, 10058, 10058, -2048, 10058,
   -2048, 10058, -2048, 10058, -2048, -2048, -2048, -2048, -2048, -2048,
   10058, 10058, 10058, -2048, -2048, -2048,  2246,  2259,  1271,  2261,
    2262, -2048,  2272, -2048, -2048,  2586,  2627,  2549,  2385, -2048,
    2697,  2697,  2697,  2271, 10058, 10058,  2698,  2266, 14320,  2656,
   -2048,    69,  2273, -2048, -2048,  2690,    72,  2691, -2048,  2645,
    2279,  2701,  2284,  2710,  2709, 12688,  2712,  2714, -2048,   708,
   -2048, -2048,   637, -2048, -2048,  2713, 10058,  2715,  2677,    54,
   10058, -2048, -2048, -2048, -2048, -2048, -2048,  2297,  2299,  2301,
   10058, -2048, -2048, -2048,   909,  2669, -2048,  2295,  2730, -2048,
     931, -2048,   931,   931, 10058, -2048, -2048,  2681, -2048,   715,
    2740,  2308,  2313,  2314,  2315, -2048,   232, -2048,   232,  2316,
    2318,   718,  2186, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048,  2538,  2616, -2048,  2319,  2322,  2482,
    2189,   232, -2048,  2325,   724,  2329,  2492,   232,  2330,  2757,
    2759, -2048,   615,  2760,  2334,  2495,   729,  2336,  2610,  2615,
    2337, 12717,  2712,  2656,  2656, -2048,   733,   736,  2714,   738,
      18, -2048, -2048,  2208,   750, -2048, -2048, -2048, -2048,  2772,
   -2048, -2048,   757, 10058, 10058, -2048, -2048,  2338, -2048,  9274,
   -2048,  9666,  2347,  2689,  2266,  2349, 12755, 12782, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, 12811, 12838,
   12865,  2324,  2324,  2324,  2324,  2324,  2324,  6706, 12892,  2721,
    2587,  2587,  2587,  2324,  2352,  2355,  2356,  2324,  2358,  2359,
    2360,  2324,  2587,  2587, 12919, 12946, 12973, 13006, 13036, 10274,
   13080, 13108, 10477, 10506, 10533, -2048, -2048, -2048, -2048, -2048,
    2389, 10058, 10058,  1946,  2549, -2048,   754,   759,   761,  2795,
   14320, 14320,  2781, -2048,   775,  2373,    69,  2643,  2374,  2644,
    2804,  2793,  2376,  2810, -2048,  2773,  2799, -2048,   796, -2048,
     799, -2048,  2815, -2048,   802, 13137,   808,  2383,  2386,  2657,
   -2048, 13175,  2392,  2394,  2396, 13202,   795, -2048,  2529, -2048,
   -2048, 13231, -2048,  2820, -2048, -2048,  2397, -2048, -2048, -2048,
    2817,   810,   813,   232,  2832, -2048, -2048,  3111,  3402,  3693,
    3984,  4275,  4566,  2779,  2723,  2839, 10058,  2765, -2048,  2365,
     834,   232, -2048,   232,  2408,   837, -2048, -2048, -2048, -2048,
   -2048, -2048,  2720,    37, 10058,  2409,  2421,  2573, -2048,   841,
     843,   847, -2048,  2855, -2048,   873, -2048,   193,  2423,  2858,
    2800,   287,  2801, -2048,   643, -2048,   553, -2048, 14320, 14320,
    2859,  2862, -2048, 14320, -2048, 14320,  8882,  2431, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048,  2587,  2587,  2587,  2587,  2587,
    2587, -2048, 10058, -2048,  2863,  2805,  2435,  2439,  2447,  2587,
   -2048,  2519,  2528,  2587, -2048,  2535,  2537,  2587,  2454,  2458,
   -2048, -2048, -2048, -2048, -2048, 10058, -2048, -2048,  2868,  2870,
    2872,  2887, 14125,   -70, 14320,  2142,  1946, -2048,  2896, -2048,
   -2048,  2463, 10058, -2048,    69,  2465,  2881,    72,  2884, -2048,
    2901,  2902, -2048, -2048,  2641,  2702,  2908, -2048,  2909, -2048,
   -2048,  2910,  1185, -2048,  2912, 10058, 10058, -2048, -2048, -2048,
   -2048, -2048, -2048,  2853, -2048,  4857, -2048, -2048,  5148, -2048,
    2637,  2481, -2048, -2048,   876,  2740, -2048,  2842,  2789,  2766,
    2758,  2649, -2048,  2706, -2048, 13258,  2493,  2482, -2048,   878,
     882,   232, -2048,  2494,     5, -2048, 13285,  2712,  2714,   884,
    2724, -2048, -2048, -2048, -2048, -2048,  2927,  2932,   301,   -59,
    2524,  2518,  2739, -2048, -2048,  2928,  2515,   888,  2947,  2854,
    2521,  2534,  2544,  2550,  2551,  2552, 13312, -2048,  2536,  2987,
   -2048, -2048, -2048,  2554,  2324,  2557,  2558,  2555,  2324,  2560,
    2564,  2565, -2048, -2048, 13339,  2566,  2567,  2569, -2048, -2048,
    2784, 10058, -2048,  2864,  2142, -2048, -2048, 14320,  2570,    69,
    2991,   893,  3002, -2048,   895, -2048,  3006, -2048, -2048,  2574,
   -2048, -2048,  2582, 13366, 13393, -2048,  5439, -2048, -2048,  2584,
   -2048, -2048, -2048,  2588, -2048, -2048, -2048, -2048, -2048,  5730,
    2963, -2048, 10058, -2048, -2048, -2048,   925,  3019, -2048,   927,
     929, -2048,  3023, -2048,  2591,  3029,  3031,  2606,  2608, -2048,
    3016,  2617, 10058,  3038, -2048,   961,   -10, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048,  3040,   553,  2618, -2048,  2587,
   -2048, -2048, -2048,  2587, -2048, -2048, -2048, -2048, -2048,  3041,
    3042, -2048, 14125,   408,  2888, -2048,    69,  2624, -2048, -2048,
      72, -2048, -2048,  3044,  2621, -2048, -2048,  1195, -2048,  6021,
   -2048,  3046,  2637, -2048, -2048, 13426, -2048,  2628,  2843, -2048,
     933, -2048, -2048, -2048,  3048,  3049,  3050,  3052, 14320,  3043,
   -2048,  3055, -2048, -2048, -2048, -2048,  3061,  2629,  2324,  2324,
    2631,  2324,  2324,  2633,  2638, -2048,  2836,  2845,  2656, -2048,
    2636,    69,  2642,  2646,  3074, -2048, -2048, -2048,  3064,   969,
   -2048, -2048,  6312, -2048,  2840,  3084,  3085,  3074,  2652,  2655,
    2661,  2662, 10058, -2048,  2860,   553, -2048,  2587,  2587, -2048,
    2587,  2587, -2048, -2048,  2913,  2922,  2665,    69,  2666, -2048,
   -2048, -2048,   971,  3100, -2048,  3046, -2048,  2671,   977,  2672,
     979,  2673,  2877, -2048, -2048, 14320,  2862, -2048,  2674,  2675,
    2676,  2683, -2048, -2048,  2684,    69, -2048,  3107, -2048, -2048,
    3119,  3122,  3074,  3074, -2048,  2898,  3125,  2515, -2048, -2048,
   -2048, -2048,    69,  2694,   109, -2048,  2696,  2699,   981,   983,
     546,  3131,   985, -2048, -2048,  2711,    69,    17,  2985,    12,
      19, -2048,  3074, -2048, -2048,  3051,  2876, -2048,  2898,    69,
    2716, -2048, -2048,    33, -2048, -2048, -2048,     9,   497,   987,
     546,   546,  2976, -2048,  2718,    69, -2048, -2048, -2048, -2048,
   -2048,    -4, -2048, -2048, -2048,     6, -2048,  2903, -2048,  2719,
   -2048, -2048, -2048, -2048,   546,    96, -2048,  2955,  2960,  2967,
    2968,  3155,  3158, -2048, -2048
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2048,  3008,  -135, -2048, -2048, -2048, -2048, -1100,  1702, -2048,
    1881, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,  1990,  2659,
   -2048,  -311,  -778,  1358, -2048, -1708, -2048,  1024, -1584, -2048,
   -2047, -2048, -1302, -2048,  1093, -1552, -2048, -2048, -2048, -1687,
   -2048, -2048,  2531,  -363,  -370,  2522,  -658, -2048, -2048,  -381,
   -2048, -2048,   444, -2048, -2048, -2048,  1620,  -944,   259,  -294,
   -2048, -2048, -2048,  2999,  2387, -2048,  2375, -2048,   820,   636,
   -2048,   549, -1372, -2048, -2048, -2048, -2048, -2048, -2048,  2072,
   -2048, -2048, -1562, -2048, -2048, -2048,  2075,  1789, -2048,  1147,
   -2048, -2048, -1824, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -2048, -2048,  2513, -2048,  2166,  1877, -2048,  1800,  1538,  1166,
   -2048,   980,   821, -2048, -2048, -1494, -2048, -1103, -2048, -2048,
   -2048, -2048, -2048,   554,   798,  3081,  2717, -2048,  2055, -2048,
     937,  2391, -2048, -2048, -2048, -2048, -2048, -2048, -2048, -2048,
   -1397,  1512, -2048, -2048, -2048, -2048,   577, -2048, -2048, -2048,
   -2048,   972, -2048,   514, -2048,  1546,  1526, -2043, -2045, -1938,
   -1846, -1679, -2048, -1318,   475,   143,   185, -1060,  -607,  2153,
   -1406, -2048, -2048, -2048,  2992, -2048,  -431, -2048,  2131,  1372,
   -1652, -2048, -2048, -2048, -2048,  2507, -2048, -2048, -2048, -2048,
   -2048,  2783, -2048, -2048, -1783, -2048
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -835
static const yytype_int16 yytable[] =
{
     370,  1559,  2081,  1631,  1902,   672,  2067,  1827,  1832,  1014,
     659,  1686,  2168,   654,  1591,  1592,  2069,  2249,   775,  1652,
    1610,  1359,  1360,  1300,  1825,  2255,  2077,  1365,   776,  1367,
    1145,  1128,  1669,   428,   429,   430,   431,   432,   433,   621,
    1059,  1707,   781,   814,  2163,   649,   475,  1289,  1448,   388,
    1448,   131,   376,  2257,   826,  1455,   805,  1457,   962,    80,
    1298,  1458,   830,   660,  1137,   232,  2257,  1660,   650,   658,
     963,   764,   144,  1567,  2297,  2298,  1574,  1275,   777,  1128,
    2582,   190,  1431,  2728,   765,  2308,  2309,   647,  -834,  2078,
    1844,   801,    81,  1129,  1432,   500,   501,  1850,  1851,  1048,
    2747,   408,   807,   805,   183,   808,   506,   507,   508,  2740,
    1011,    85,   510,  1396,  2711,   700,  1873,  1094,  1094,  2742,
     428,   429,   430,   431,   432,   433,  2717,  2697,  1104,   139,
    1433,  2726,  2188,  1390,  1661,   171,  -372,   376,  1434,  1562,
    1701,  1129,  2164,   128,   805,  2507,  1403,  1654,  1012,  2714,
     622,   623,   624,   625,   626,   627,   628,  1098,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   233,   646,  1532,   483,   778,
    1670,    86,  2727,   701,  1662,  2121,  2122,   107,  1435,  2741,
    2258,  1128,  2046,   715,  2132,  2133,   702,   124,  2405,  2743,
     802,  2729,  2259,   839,   840,   126,  2698,  2450,  1563,  2508,
     125,    82,  2715,  2406,   191,  2259,   377,   172,   766,  2730,
     661,   140,   378,   434,  2198,   422,  1862,  1863,  1864,  1865,
     127,  1303,   192,  2260,   620,  1383,  2203,  1436,  2420,  2421,
    2422,  2423,  2424,  2425,    83,   964,  2260,  2716,  2583,  2731,
     827,  1843,  2433,  1129,   193,  2189,  2437,   184,   827,   409,
    2441,   661,  1568,   767,  1276,  1575,    84,  1302,  1663,  2165,
     132,  1889,  1437,  2217,   476,  1852,  1130,  2718,  -834,   993,
    2748,   194,  2261,  1901,  2218,  1664,  2712,  1449,   173,  1724,
    2071,   389,  2699,  1004,  1866,  2261,  1138,  1139,  1105,  2044,
     129,   377,  1702,  1391,  2219,   471,  2700,   378,  -372,  2074,
     434,  2278,  1060,  1685,   484,  2190,  1404,  1655,  2220,   779,
     622,   623,   624,   625,   626,   627,   628,  2221,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   661,   646,   651,   476,  1549,
    1671,  1725,  2499,  1726,   841,  2500,  2262,  1308,  2183,   716,
    1131,  1132,  2047,   145,   146,   147,  1445,  2222,  2451,  2262,
     836,   965,   148,   691,   837,    16,  2250,  2251,   423,   136,
     185,   847,   851,   853,   854,   855,   856,   857,   858,   859,
     860,   861,   698,   863,   864,   865,   866,   867,   868,   869,
     870,   871,   872,   873,   874,   875,   876,   877,  2505,   879,
     880,   881,  2079,   883,   884,   885,   886,   887,   888,   890,
     891,   892,   893,   894,   895,   896,   897,   898,   899,   900,
     379,  1438,  1332,  1333,  1806,   906,   907,  1144,  1301,  1826,
     911,   912,  1338,   782,   815,   916,   917,   918,   919,   920,
     921,   922,   923,   924,   925,   926,   927,   928,   929,   930,
     931,   932,   933,   934,   935,   936,   937,   435,   939,   940,
     941,   653,   943,   944,   945,   946,   947,   948,   949,   950,
     951,   952,  2587,   954,   955,   380,  2590,   957,   958,   959,
     960,   961,  1376,  1377,  1378,   971,   976,   977,   978,   979,
     980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,  1546,  2461,  1397,   379,   370,  1157,  1751,  1752,
    1160,  1328,  1005,   692,  2211,   196,  2212,  2285,  2286,  2287,
    2288,  2289,  2290,   186,   703,  1171,  2057,   704,   699,  2299,
    1381,  1899,   198,  2303,   155,  2365,   621,  2307,   201,  2506,
    2368,   717,   718,   719,   720,  1867,  1868,  1869,  2413,  1384,
    1385,  1386,  1387,  1880,  2705,  1882,  1883,   203,  2399,   999,
     380,  2732,   455,  1164,  1165,   404,   405,  1329,   438,  1288,
    2658,  2659,   151,  2660,  2661,   206,   208,   210,   214,   216,
    1000,  1431,  2058,   149,   647,   406,   446,  -334,  1485,  1486,
     150,   696,  2077,  1432,  2335,   156,   708,   622,   623,   624,
     625,   626,   627,   628,  2449,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   706,   646,   158,  1293,  1347,  1348,  2596,  1433,
    1061,   439,    16,  2698,  1330,   670,   162,  1434,  1560,   152,
     459,  1566,   461,   164,   456,  1594,   488,   490,  1870,  2059,
     494,  1594,   784,  1382,  1900,  2078,  2597,   662,  1093,  2230,
    1141,   159,  1156,   177,   709,  2235,  1595,   180,   197,  2650,
     411,    16,   697,   705,  2085,  1596,  1094,   710,  1597,  2733,
    1598,  1596,  1297,  1599,  1597,   199,  1598,  1435,  1062,  1599,
     412,   202,  2410,  1001,  1331,  1166,  1167,  2734,  1600,  2086,
    1169,  1159,  2476,   707,  1600,  1601,  1602,  1176,   165,  2060,
     204,  1601,  1602,  2411,   841,   457,  2602,  1593,  1095,  2699,
    2489,   407,   426,  1172,  2688,  2689,  1394,  2735,   207,   209,
     211,   215,   217,  2700,   663,  1395,  1436,  1197,  1198,   447,
    1603,   450,   427,  1429,  -340,  2264,  1603,   153,   154,  1418,
    1709,  1690,  1710,  1096,  2719,   468,  1419,  1604,   664,  1818,
    1691,   451,  2458,  2453,   622,   623,   624,   625,   626,   627,
     628,   665,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,  1619,
     646,  1605,  1875,   460,   722,   462,   666,  1605,   694,   489,
     491,  1876,   130,   495,   230,   785,   137,   160,  2585,   161,
    1620,   695,  1420,  2559,   723,   231,  1421,   163,  2690,   667,
    1606,   166,  1279,  1280,  2595,  1282,  1606,  2395,  1607,  1887,
     620,  2374,   168,  1422,  1607,   169,  2363,   170,  1888,   174,
    2529,  2325,  1423,   175,  2533,  2364,  -600,  2720,  2721,  2389,
     176,  2390,   622,   623,   624,   625,   626,   627,   628,   178,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,  1082,   646,  1424,
    2744,   644,   645,  1087,   646,  1089,   179,  2547,  1608,  -600,
     967,   968,  2545,   969,  1608,   181,   970,  -600,   503,   504,
     109,  2636,  2612,   141,   142,   143,   182,  2657,  1555,   724,
     725,  1547,   622,   623,   624,   625,   626,   627,   628,  -600,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   187,   646,  1425,
     188,   643,   644,   645,   110,   646,  1007,   661,   200,   219,
     205,  1374,  1135,  1136,   212,  1323,  1324,  1533,  1398,  1399,
     111,  1632,  1451,  1452,   213,  1633,  1544,   622,   623,   624,
     625,   626,   627,   628,  2600,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   220,   646,  2627,  2628,   218,  2630,  2631,   225,
     221,  1617,  1618,  1621,  1622,   222,   227,   112,   228,  2496,
    1675,  1676,   373,  1634,  2454,   219,  1635,  -604,  1459,   387,
    1460,   393,   223,   226,   113,  1173,   114,  1467,  1468,  2638,
    1469,  1636,   115,   234,  1474,  1623,  1624,  1625,  1624,  1649,
    1650,  1475,  1476,  1477,  1478,   395,  1479,  1480,  1481,  1696,
    1697,  1637,   390,  1482,  1483,   396,  1484,   116,   220,  1638,
    -604,   391,  1487,  1488,  1489,  2664,   374,   392,  -604,  1772,
    1773,  -601,  1775,  1776,  2125,  2126,  1497,  1498,  1499,   394,
    1500,  2073,  1886,  1650,   397,  1897,  1650,   398,   375,   399,
    -604,  1511,   400,  2683,  2042,  1650,   401,   413,  2051,  2052,
    1512,  1513,  1514,  1515,  1516,  1517,  1518,  1519,  1699,  1520,
    2695,  2075,  1708,  1521,  -601,  1522,   402,  1523,  1524,  1525,
    1526,  1527,  -601,   425,  2710,  1528,  1529,  1530,   441,  1531,
    2090,  2091,  2129,  2130,   414,  2181,  2182,  2724,  1537,   440,
    1539,  1539,  2204,  1650,  -601,  2215,  1650,   442,  1639,   443,
    1640,  2232,  1650,  2739,   444,  1556,  2243,  1697,   449,   415,
    2252,  2253,  1561,  2254,  2253,  2256,  2182,   416,   448,  1641,
     235,   236,   237,   238,   239,   240,   117,  2265,  1708,   417,
     445,  2327,  2328,   453,   241,   242,  2329,  2328,  2330,  2328,
     454,  1229,  1230,   458,   243,   244,  1071,  1072,  1073,  1074,
     118,  1075,  2333,  2253,  1077,  1078,  1079,   245,   463,   119,
     464,  1083,  1084,  1085,  1807,   465,  1088,  1809,   467,  1810,
     466,  1812,   120,  2345,  2346,   471,  2347,  2348,  1630,  2350,
    2351,   121,  2470,  2471,   122,  2353,  2354,  2372,  1650,   246,
    2373,  1650,  2605,  2606,   247,   469,   418,   248,   249,  1352,
    1353,   473,  1356,  1357,  1358,   477,   250,   478,  1361,  1362,
    1363,  2388,  1650,  1366,  2392,  1650,   479,   419,  2400,  2346,
    2401,  2253,   480,   251,  2402,  2253,   481,   252,   482,  1231,
    1232,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   486,   646,  1713,   420,
    2404,  2348,  1717,  2482,  1650,  2494,  1650,   487,  1722,  2495,
    1650,  2501,  2182,   253,   492,  2514,  2091,  1728,   493,  1169,
    2549,  2550,  2552,  2553,   496,  1736,  1737,   497,   421,   639,
     640,   641,   642,   643,   644,   645,   498,   646,   499,  1253,
    1254,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     254,   646,  2566,  1650,  2568,  2346,  2569,  2348,  2616,  2617,
     255,   622,   623,   624,   625,   626,   627,   628,   131,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   505,   646,  2580,  2581,
     512,  1808,   256,   257,  1259,  1260,  2644,  2645,  2666,  2667,
     258,   259,  2671,  2672,   514,   260,  2674,  2667,  2703,  2667,
    2704,  2667,  2707,  2708,  2736,  2667,   652,  1828,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     261,   646,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,  1845,   646,   513,  1304,  1305,   515,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   516,   300,   656,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,  2157,  2158,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   517,   348,
     349,   350,   351,  2061,  1552,  1553,   518,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   519,   363,
     364,   365,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,   520,   646,
     521,   366,   670,   522,   523,   524,  2096,   525,   526,  2097,
     527,   367,   368,   528,   529,   530,   531,   532,  2108,  2109,
     533,   534,   535,   369,   536,   537,   538,   539,   540,   541,
    2110,   673,   542,   543,   544,   545,   546,   547,   548,  2117,
    2118,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   549,   646,   550,   551,  2134,  2135,  2136,   552,
     553,  2137,  2138,   554,  2139,   555,  2140,   556,  2141,   557,
     558,   674,   559,   560,   561,  2142,  2143,  2144,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   562,   646,   563,   564,   565,   566,   567,  2160,
    2161,   625,   626,   627,   628,   568,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   569,   646,  1903,  1904,  1905,  1906,  1907,
    1908,  2185,  1909,   570,  1910,  2191,   571,   572,  1911,  1912,
    1913,   573,  1914,   574,   575,  2195,   576,   577,  1915,  1916,
    1917,  1918,  1919,   578,   579,   580,   581,   675,   582,  2201,
     583,   584,  1920,   585,   586,   587,   588,   589,   590,   591,
     592,   676,  1921,  1922,   593,   594,  1923,   677,   595,   678,
     596,  1924,  1925,  1926,  1927,  1928,   597,   598,  1929,   599,
    1930,  1931,  1932,   600,   601,  1933,  1934,   602,  1935,  1936,
    1937,   603,   604,   605,  1938,   606,   607,   679,  1733,  1734,
     608,   609,   610,   611,   612,   613,   680,   614,  1939,   615,
     616,   617,   618,  1940,   681,   619,   655,   657,  1941,  1942,
    1943,   682,   683,   684,   685,  1944,  1945,   686,  1946,  1947,
    1948,  1949,   687,   688,  1950,   689,  1951,  1952,  1953,  1954,
     690,  1955,   711,  1956,  1957,   712,  1958,   713,  1959,  1960,
     714,  1961,  1962,  1963,  1964,   726,   727,   763,   771,   772,
    1965,   773,  1966,   774,  1967,  1968,   783,  1969,  1970,  1971,
    1972,  1973,  1974,   786,  1975,  1976,  1977,  1978,  1979,   788,
     790,   792,   793,   794,   795,   796,   797,   798,   799,  1980,
     804,  1981,   809,  1982,   810,   811,   812,   813,   816,   817,
     818,   819,  1983,   820,  1984,  1985,  1986,  1987,  1988,  1989,
    1990,   822,   821,  1991,  1992,   823,   824,   825,   829,  1993,
     832,  1994,  1995,  1996,   646,  1997,   842,  1998,   843,  1999,
    2000,  2001,  2002,   844,   862,   878,   882,   901,   902,   913,
     903,   904,   905,   908,   909,   910,   914,   915,  2268,  2269,
     938,  2003,  2004,  2005,  2273,   942,  2275,   953,   966,   992,
     994,  2006,   996,  2007,  2008,  2009,   998,  1006,  1008,  1015,
    2010,  1016,  2011,  2012,  2013,  1018,  1019,  1020,  2014,  1021,
    1022,  1023,  2015,  2016,  1024,  1025,  2017,  2018,  2019,  2020,
    1026,  1027,  1028,  2021,  1029,  1030,  1031,  1032,  1033,  1034,
     408,  1038,  1036,  1037,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1049,  1050,  1051,  2322,  2324,  1052,  1053,
    1054,  1055,  1056,  1057,  1064,  1058,  1063,  1065,  1080,  1067,
    1068,  1069,  1076,  1086,  2022,  2023,  2024,  2025,  2026,  1090,
    1091,   622,   623,   624,   625,   626,   627,   628,  1092,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,  1097,   646,   624,   625,
     626,   627,   628,  1099,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,  2385,   646,  1100,  1101,  1102,  1106,  1103,  1107,  1108,
    1109,  1110,   622,   623,   624,   625,   626,   627,   628,  2396,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,  1111,   646,  1113,
    1114,  1116,  1115,  1117,  1118,  1119,  1120,  1122,  1123,  1126,
    1124,  1722,  1125,  1127,  1142,  1147,  2027,  2028,  2029,  2030,
    2031,  1149,  2032,  -835,  -835,  -835,  -835,  2426,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,  1150,   646,  1151,  1152,  1154,
    2444,    16,  1162,  1168,  1212,  1226,  1227,  1233,   -84,  1903,
    1904,  1905,  1906,  1907,  1908,  1228,  1909,  2457,  1910,  1234,
    1291,  1235,  1911,  1912,  1913,  1292,  1914,  1281,  1284,  1285,
    1294,  1295,  1915,  1916,  1917,  1918,  1919,  1286,  1296,  1307,
    2473,  2474,  1306,  1309,  1310,  1311,  1920,  1312,  1313,  1314,
    1318,  1316,  1315,  1317,  1319,  1320,  1921,  1922,  1321,  1326,
    1923,  1322,  1327,  1334,  1094,  1924,  1925,  1926,  1927,  1928,
    1335,  1336,  1929,  1339,  1930,  1931,  1932,  1342,  1340,  1933,
    1934,  1343,  1935,  1936,  1937,  1344,  1345,  1346,  1938,  1341,
    1349,  1354,  1371,  1368,  1369,  1370,  1373,  1375,  1372,  1379,
    1392,  1393,  1939,  1400,  1402,  1405,  1406,  1940,  1412,  1413,
    1410,  1407,  1941,  1942,  1943,  1408,  1414,  1415,  1416,  1944,
    1945,  1417,  1946,  1947,  1948,  1949,  1430,  1442,  1950,  1446,
    2216,  1952,  1953,  1954,  1447,  1955,  2542,  1956,  1957,  1453,
    1958,  1443,  1959,  1960,  1448,  1961,  1962,  1963,  1964,  1463,
    1471,  1490,  1491,  1492,  1965,  1493,  1966,  1466,  1967,  1968,
    1465,  1969,  1970,  1971,  1972,  1973,  1974,  1494,  1975,  1976,
    1977,  1978,  1979,  1505,  1501,  1502,  1503,  2565,  1507,   -86,
    1509,  1495,  1510,  1980,  1496,  1981,  1548,  1982,  1504,  1550,
    1545,   805,  1557,  1506,  1554,  1508,  1983,  2578,  1984,  1985,
    1986,  1987,  1988,  1989,  1990,  1558,  1570,  1991,  1992,  1571,
    1572,  1573,  1577,  1993,  1578,  1994,  1995,  1996,  1579,  1997,
    1580,  1998,  1581,  1999,  2000,  2001,  2002,  1582,  1583,  1584,
    1587,  1588,  1589,  1590,  1611,  1612,  1613,  1614,  1615,  1629,
    1651,  1616,  1653,  1659,  1626,  2003,  2004,  2005,  1627,  1628,
    1656,  1643,  1644,  1658,  1665,  2006,  1668,  2007,  2008,  2009,
    1672,  1673,  1674,  1680,  2010,  1681,  2011,  2012,  2013,  1682,
    1683,  1684,  2014,  1687,  1689,  1694,  2015,  2016,  1698,  1703,
    2017,  2018,  2019,  2020,  1700,  1704,  1645,  2021,  1763,  1764,
    1646,  1647,  1648,  1688,  1692,  1693,  1695,  1705,  1714,  1706,
     622,   623,   624,   625,   626,   627,   628,  2655,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,  1708,   646,  1718,  2022,  2023,
    2024,  2025,  2026,  1719,  1720,  1738,  1729,  1815,  1739,  1756,
    1757,  1758,  1759,  1760,  1761,  1762,  1816,  1819,  1823,  1788,
    1789,  1833,  1903,  1904,  1905,  1906,  1907,  1908,  1771,  1909,
    1774,  1910,  1777,  1824,  1804,  1911,  1912,  1913,  1805,  1914,
    1811,  1813,  1814,  1820,  1831,  1915,  1916,  1917,  1918,  1919,
    1821,  1834,  1822,  1835,  1829,  1837,  1839,  1836,  1838,  1920,
    1840,  1841,  1842,  1846,  1843,  1847,  1848,  1853,  1854,  1921,
    1922,  1855,  1856,  1923,  1858,  1857,  1859,  1860,  1924,  1925,
    1926,  1927,  1928,  1861,  1874,  1929,  1871,  1930,  1931,  1932,
    1872,  1877,  1933,  1934,  1879,  1935,  1936,  1937,  1878,  1881,
    1890,  1938,  1891,  1884,  1892,  1893,  1894,  1895,  1896,  1898,
    2027,  2028,  2029,  2030,  2031,  1939,  2032,  2034,  2035,  2036,
    1940,  2038,  2041,  2045,  2043,  1941,  1942,  1943,  2048,  2049,
    2050,  2053,  1944,  1945,  2054,  1946,  1947,  1948,  1949,  2062,
    2063,  1950,  2055,  2366,  1952,  1953,  1954,  2064,  1955,  2065,
    1956,  1957,  2088,  1958,  2068,  1959,  1960,  2089,  1961,  1962,
    1963,  1964,  2082,  2093,  2095,  2119,  2124,  1965,  2128,  1966,
    2150,  1967,  1968,  2145,  1969,  1970,  1971,  1972,  1973,  1974,
    2151,  1975,  1976,  1977,  1978,  1979,  2146,  2152,  2147,  2148,
    2155,  2162,  2167,  2169,  2170,  2172,  1980,  2159,  1981,  2149,
    1982,  2166,  2171,  2174,  2175,  2177,  2173,  2179,  2184,  1983,
    2186,  1984,  1985,  1986,  1987,  1988,  1989,  1990,  2187,  2197,
    1991,  1992,  2199,  2192,  2200,  2193,  1993,  2194,  1994,  1995,
    1996,  2202,  1997,  2205,  1998,  2207,  1999,  2000,  2001,  2002,
    2208,  2209,  2213,  2210,  2214,  2223,  2224,  2225,  2226,  2227,
    2234,  2231,  2237,  2238,  2240,  2233,  2242,  2236,  2003,  2004,
    2005,  2241,  2244,  2247,  2245,  2266,  2270,  2277,  2006,  2246,
    2007,  2008,  2009,  2276,  2294,  2295,  2279,  2010,  2300,  2011,
    2012,  2013,  2301,  2302,  2304,  2014,  2305,  2306,  2331,  2015,
    2016,  2332,  2321,  2017,  2018,  2019,  2020,  2336,  2338,  2339,
    2021,  2334,  2337,  2340,  2341,  2342,  2343,  2344,  2349,  2355,
    2371,  2357,  2356,  1903,  1904,  1905,  1906,  1907,  1908,  2359,
    1909,  2360,  1910,  2361,  2370,  2375,  1911,  1912,  1913,  2382,
    1914,  2383,  2384,  2386,  2391,  2397,  1915,  1916,  1917,  1918,
    1919,  2022,  2023,  2024,  2025,  2026,  2393,  2398,  2403,  2407,
    1920,  2408,  2414,  2409,  2412,  2415,  2427,  2418,  2429,  2435,
    1921,  1922,  2430,  2445,  1923,  2446,  2431,  2447,  2436,  1924,
    1925,  1926,  1927,  1928,  2432,  2439,  1929,  2440,  1930,  1931,
    1932,  2442,  2448,  1933,  1934,  2443,  1935,  1936,  1937,  2455,
    2456,  2460,  1938,  2459,  2462,  2463,  2464,  1790,  1791,  2466,
    2465,  2467,  2468,  2475,  2479,  2469,  1939,  2472,  2481,  2484,
    2485,  1940,  2486,  2490,  2487,  2488,  1941,  1942,  1943,  2492,
    2497,  2502,  2503,  1944,  1945,  2504,  1946,  1947,  1948,  1949,
    2509,  2510,  1950,  2511,  2369,  1952,  1953,  1954,  2512,  1955,
    2515,  1956,  1957,  2513,  1958,  2516,  1959,  1960,  2518,  1961,
    1962,  1963,  1964,  2027,  2028,  2029,  2030,  2031,  1965,  2032,
    1966,  2519,  1967,  1968,  2525,  1969,  1970,  1971,  1972,  1973,
    1974,  2520,  1975,  1976,  1977,  1978,  1979,  2521,  2522,  2523,
    2526,  2528,  2532,  2530,  2531,  2548,  2534,  1980,  2541,  1981,
    2535,  1982,  2536,  2538,  2543,  2539,  2551,  2540,  2546,  2554,
    1983,  2555,  1984,  1985,  1986,  1987,  1988,  1989,  1990,  2556,
    2561,  1991,  1992,  2564,  2567,  2562,  2570,  1993,  2571,  1994,
    1995,  1996,  2572,  1997,  2573,  1998,  2576,  1999,  2000,  2001,
    2002,  2579,  2574,  2584,  2575,  2593,  2594,  2598,  2603,  2608,
    2615,  2618,  2619,  2577,  2620,  2621,  2586,  2604,  2623,  2003,
    2004,  2005,  2601,  2622,  2625,  2614,  2626,  2634,  2629,  2006,
    2632,  2007,  2008,  2009,  2637,  2633,  2635,  2641,  2010,  2639,
    2011,  2012,  2013,  2640,  2643,  2647,  2014,  2648,  2649,  2651,
    2015,  2016,  2652,  2662,  2017,  2018,  2019,  2020,  2653,  2654,
    2656,  2021,  2663,  2253,  2665,  2668,  2676,  2670,  2673,  2675,
    2685,  2678,  2679,  2680,  1903,  1904,  1905,  1906,  1907,  1908,
    2681,  1909,  2682,  1910,  2686,  2687,  2691,  1911,  1912,  1913,
    2694,  1914,  2696,  2701,  2706,  2702,  2713,  1915,  1916,  1917,
    1918,  1919,  2022,  2023,  2024,  2025,  2026,  2722,  2711,  2709,
    2737,  1920,  2749,  2745,  2725,  2738,  2746,  2750,  2751,  2752,
    2753,  1921,  1922,  2754,   403,  1923,  1730,  1543,  1473,   838,
    1924,  1925,  1926,  1927,  1928,  2267,  2154,  1929,  2326,  1930,
    1931,  1932,   995,  1010,  1933,  1934,  1830,  1935,  1936,  1937,
     474,  1409,  1148,  1938,  2669,  2483,  1146,  1411,  2611,  2239,
    1679,  1325,  1667,  1035,  1586,  2040,  2229,  1939,  2493,  2387,
    2677,   229,  1940,  2417,  1456,  2394,   831,  1941,  1942,  1943,
    2076,  1158,  2723,  2072,  1944,  1945,   502,  1946,  1947,  1948,
    1949,  2056,  1066,  1950,  1380,  2376,  1952,  1953,  1954,  1364,
    1955,   787,  1956,  1957,     0,  1958,  2196,  1959,  1960,     0,
    1961,  1962,  1963,  1964,  2027,  2028,  2029,  2030,  2031,  1965,
    2032,  1966,     0,  1967,  1968,     0,  1969,  1970,  1971,  1972,
    1973,  1974,     0,  1975,  1976,  1977,  1978,  1979,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1980,     0,
    1981,     0,  1982,     0,     0,     0,     0,     0,     0,     0,
       0,  1983,     0,  1984,  1985,  1986,  1987,  1988,  1989,  1990,
       0,     0,  1991,  1992,     0,     0,     0,     0,  1993,     0,
    1994,  1995,  1996,     0,  1997,     0,  1998,     0,  1999,  2000,
    2001,  2002,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2003,  2004,  2005,     0,     0,     0,     0,     0,     0,     0,
    2006,     0,  2007,  2008,  2009,     0,     0,     0,     0,  2010,
       0,  2011,  2012,  2013,     0,     0,     0,  2014,     0,     0,
       0,  2015,  2016,     0,     0,  2017,  2018,  2019,  2020,     0,
       0,     0,  2021,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1903,  1904,  1905,  1906,  1907,
    1908,     0,  1909,     0,  1910,     0,     0,     0,  1911,  1912,
    1913,     0,  1914,     0,     0,     0,     0,     0,  1915,  1916,
    1917,  1918,  1919,  2022,  2023,  2024,  2025,  2026,     0,     0,
       0,     0,  1920,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1921,  1922,     0,     0,  1923,     0,     0,     0,
       0,  1924,  1925,  1926,  1927,  1928,     0,     0,  1929,     0,
    1930,  1931,  1932,     0,     0,  1933,  1934,     0,  1935,  1936,
    1937,     0,     0,     0,  1938,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1939,     0,
       0,     0,     0,  1940,     0,     0,     0,     0,  1941,  1942,
    1943,     0,     0,     0,     0,  1944,  1945,     0,  1946,  1947,
    1948,  1949,     0,     0,  1950,     0,  2377,  1952,  1953,  1954,
       0,  1955,     0,  1956,  1957,     0,  1958,     0,  1959,  1960,
       0,  1961,  1962,  1963,  1964,  2027,  2028,  2029,  2030,  2031,
    1965,  2032,  1966,     0,  1967,  1968,     0,  1969,  1970,  1971,
    1972,  1973,  1974,     0,  1975,  1976,  1977,  1978,  1979,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1980,
       0,  1981,     0,  1982,     0,     0,     0,     0,     0,     0,
       0,     0,  1983,     0,  1984,  1985,  1986,  1987,  1988,  1989,
    1990,     0,     0,  1991,  1992,     0,     0,     0,     0,  1993,
       0,  1994,  1995,  1996,     0,  1997,     0,  1998,     0,  1999,
    2000,  2001,  2002,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2003,  2004,  2005,     0,     0,     0,     0,     0,     0,
       0,  2006,     0,  2007,  2008,  2009,     0,     0,     0,     0,
    2010,     0,  2011,  2012,  2013,     0,     0,     0,  2014,     0,
       0,     0,  2015,  2016,     0,     0,  2017,  2018,  2019,  2020,
       0,     0,     0,  2021,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1903,  1904,  1905,  1906,
    1907,  1908,     0,  1909,     0,  1910,     0,     0,     0,  1911,
    1912,  1913,     0,  1914,     0,     0,     0,     0,     0,  1915,
    1916,  1917,  1918,  1919,  2022,  2023,  2024,  2025,  2026,     0,
       0,     0,     0,  1920,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1921,  1922,     0,     0,  1923,     0,     0,
       0,     0,  1924,  1925,  1926,  1927,  1928,     0,     0,  1929,
       0,  1930,  1931,  1932,     0,     0,  1933,  1934,     0,  1935,
    1936,  1937,     0,     0,     0,  1938,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1939,
       0,     0,     0,     0,  1940,     0,     0,     0,     0,  1941,
    1942,  1943,     0,     0,     0,     0,  1944,  1945,     0,  1946,
    1947,  1948,  1949,     0,     0,  1950,     0,  2378,  1952,  1953,
    1954,     0,  1955,     0,  1956,  1957,     0,  1958,     0,  1959,
    1960,     0,  1961,  1962,  1963,  1964,  2027,  2028,  2029,  2030,
    2031,  1965,  2032,  1966,     0,  1967,  1968,     0,  1969,  1970,
    1971,  1972,  1973,  1974,     0,  1975,  1976,  1977,  1978,  1979,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1980,     0,  1981,     0,  1982,     0,     0,     0,     0,     0,
       0,     0,     0,  1983,     0,  1984,  1985,  1986,  1987,  1988,
    1989,  1990,     0,     0,  1991,  1992,     0,     0,     0,     0,
    1993,     0,  1994,  1995,  1996,     0,  1997,     0,  1998,     0,
    1999,  2000,  2001,  2002,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2003,  2004,  2005,     0,     0,     0,     0,     0,
       0,     0,  2006,     0,  2007,  2008,  2009,     0,     0,     0,
       0,  2010,     0,  2011,  2012,  2013,     0,     0,     0,  2014,
       0,     0,     0,  2015,  2016,     0,     0,  2017,  2018,  2019,
    2020,     0,     0,     0,  2021,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1903,  1904,  1905,
    1906,  1907,  1908,     0,  1909,     0,  1910,     0,     0,     0,
    1911,  1912,  1913,     0,  1914,     0,     0,     0,     0,     0,
    1915,  1916,  1917,  1918,  1919,  2022,  2023,  2024,  2025,  2026,
       0,     0,     0,     0,  1920,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1921,  1922,     0,     0,  1923,     0,
       0,     0,     0,  1924,  1925,  1926,  1927,  1928,     0,     0,
    1929,     0,  1930,  1931,  1932,     0,     0,  1933,  1934,     0,
    1935,  1936,  1937,     0,     0,     0,  1938,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1939,     0,     0,     0,     0,  1940,     0,     0,     0,     0,
    1941,  1942,  1943,     0,     0,     0,     0,  1944,  1945,     0,
    1946,  1947,  1948,  1949,     0,     0,  1950,     0,  2379,  1952,
    1953,  1954,     0,  1955,     0,  1956,  1957,     0,  1958,     0,
    1959,  1960,     0,  1961,  1962,  1963,  1964,  2027,  2028,  2029,
    2030,  2031,  1965,  2032,  1966,     0,  1967,  1968,     0,  1969,
    1970,  1971,  1972,  1973,  1974,     0,  1975,  1976,  1977,  1978,
    1979,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1980,     0,  1981,     0,  1982,     0,     0,     0,     0,
       0,     0,     0,     0,  1983,     0,  1984,  1985,  1986,  1987,
    1988,  1989,  1990,     0,     0,  1991,  1992,     0,     0,     0,
       0,  1993,     0,  1994,  1995,  1996,     0,  1997,     0,  1998,
       0,  1999,  2000,  2001,  2002,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2003,  2004,  2005,     0,     0,     0,     0,
       0,     0,     0,  2006,     0,  2007,  2008,  2009,     0,     0,
       0,     0,  2010,     0,  2011,  2012,  2013,     0,     0,     0,
    2014,     0,     0,     0,  2015,  2016,     0,     0,  2017,  2018,
    2019,  2020,     0,     0,     0,  2021,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1903,  1904,
    1905,  1906,  1907,  1908,     0,  1909,     0,  1910,     0,     0,
       0,  1911,  1912,  1913,     0,  1914,     0,     0,     0,     0,
       0,  1915,  1916,  1917,  1918,  1919,  2022,  2023,  2024,  2025,
    2026,     0,     0,     0,     0,  1920,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1921,  1922,     0,     0,  1923,
       0,     0,     0,     0,  1924,  1925,  1926,  1927,  1928,     0,
       0,  1929,     0,  1930,  1931,  1932,     0,     0,  1933,  1934,
       0,  1935,  1936,  1937,     0,     0,     0,  1938,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1939,     0,     0,     0,     0,  1940,     0,     0,     0,
       0,  1941,  1942,  1943,     0,     0,     0,     0,  1944,  1945,
       0,  1946,  1947,  1948,  1949,     0,     0,  1950,     0,  2380,
    1952,  1953,  1954,     0,  1955,     0,  1956,  1957,     0,  1958,
       0,  1959,  1960,     0,  1961,  1962,  1963,  1964,  2027,  2028,
    2029,  2030,  2031,  1965,  2032,  1966,     0,  1967,  1968,     0,
    1969,  1970,  1971,  1972,  1973,  1974,     0,  1975,  1976,  1977,
    1978,  1979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1980,     0,  1981,     0,  1982,     0,     0,     0,
       0,     0,     0,     0,     0,  1983,     0,  1984,  1985,  1986,
    1987,  1988,  1989,  1990,     0,     0,  1991,  1992,     0,     0,
       0,     0,  1993,     0,  1994,  1995,  1996,     0,  1997,     0,
    1998,     0,  1999,  2000,  2001,  2002,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2003,  2004,  2005,     0,     0,     0,
       0,     0,     0,     0,  2006,     0,  2007,  2008,  2009,     0,
       0,     0,     0,  2010,     0,  2011,  2012,  2013,     0,     0,
       0,  2014,     0,     0,     0,  2015,  2016,     0,     0,  2017,
    2018,  2019,  2020,     0,     0,     0,  2021,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1903,
    1904,  1905,  1906,  1907,  1908,     0,  1909,     0,  1910,     0,
       0,     0,  1911,  1912,  1913,     0,  1914,     0,     0,     0,
       0,     0,  1915,  1916,  1917,  1918,  1919,  2022,  2023,  2024,
    2025,  2026,     0,     0,     0,     0,  1920,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1921,  1922,     0,     0,
    1923,     0,     0,     0,     0,  1924,  1925,  1926,  1927,  1928,
       0,     0,  1929,     0,  1930,  1931,  1932,     0,     0,  1933,
    1934,     0,  1935,  1936,  1937,     0,     0,     0,  1938,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1939,     0,     0,     0,     0,  1940,     0,     0,
       0,     0,  1941,  1942,  1943,     0,     0,     0,     0,  1944,
    1945,     0,  1946,  1947,  1948,  1949,     0,     0,  1950,     0,
    2381,  1952,  1953,  1954,     0,  1955,     0,  1956,  1957,     0,
    1958,     0,  1959,  1960,     0,  1961,  1962,  1963,  1964,  2027,
    2028,  2029,  2030,  2031,  1965,  2032,  1966,     0,  1967,  1968,
       0,  1969,  1970,  1971,  1972,  1973,  1974,     0,  1975,  1976,
    1977,  1978,  1979,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1980,     0,  1981,     0,  1982,     0,     0,
       0,     0,     0,     0,     0,     0,  1983,     0,  1984,  1985,
    1986,  1987,  1988,  1989,  1990,     0,     0,  1991,  1992,     0,
       0,     0,     0,  1993,     0,  1994,  1995,  1996,     0,  1997,
       0,  1998,     0,  1999,  2000,  2001,  2002,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2003,  2004,  2005,     0,     0,
       0,     0,     0,     0,     0,  2006,     0,  2007,  2008,  2009,
       0,     0,     0,     0,  2010,     0,  2011,  2012,  2013,     0,
       0,     0,  2014,     0,     0,     0,  2015,  2016,     0,     0,
    2017,  2018,  2019,  2020,     0,     0,     0,  2021,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1903,  1904,  1905,  1906,  1907,  1908,     0,  1909,     0,  1910,
       0,     0,     0,  1911,  1912,  1913,     0,  1914,     0,     0,
       0,     0,     0,  1915,  1916,  1917,  1918,  1919,  2022,  2023,
    2024,  2025,  2026,     0,     0,     0,     0,  1920,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1921,  1922,     0,
       0,  1923,     0,     0,     0,     0,  1924,  1925,  1926,  1927,
    1928,     0,     0,  1929,     0,  1930,  1931,  1932,     0,     0,
    1933,  1934,     0,  1935,  1936,  1937,     0,     0,     0,  1938,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1939,     0,     0,     0,     0,  1940,     0,
       0,     0,     0,  1941,  1942,  1943,     0,     0,     0,     0,
    1944,  1945,     0,  1946,  1947,  1948,  1949,     0,     0,  1950,
       0,  2477,  1952,  1953,  1954,     0,  1955,     0,  1956,  1957,
       0,  1958,     0,  1959,  1960,     0,  1961,  1962,  1963,  1964,
    2027,  2028,  2029,  2030,  2031,  1965,  2032,  1966,     0,  1967,
    1968,     0,  1969,  1970,  1971,  1972,  1973,  1974,     0,  1975,
    1976,  1977,  1978,  1979,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1980,     0,  1981,     0,  1982,     0,
       0,     0,     0,     0,     0,     0,     0,  1983,     0,  1984,
    1985,  1986,  1987,  1988,  1989,  1990,     0,     0,  1991,  1992,
       0,     0,     0,     0,  1993,     0,  1994,  1995,  1996,     0,
    1997,     0,  1998,     0,  1999,  2000,  2001,  2002,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2003,  2004,  2005,     0,
       0,     0,     0,     0,     0,     0,  2006,     0,  2007,  2008,
    2009,     0,     0,     0,     0,  2010,     0,  2011,  2012,  2013,
       0,     0,     0,  2014,     0,     0,     0,  2015,  2016,     0,
       0,  2017,  2018,  2019,  2020,     0,     0,     0,  2021,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1903,  1904,  1905,  1906,  1907,  1908,     0,  1909,     0,
    1910,     0,     0,     0,  1911,  1912,  1913,     0,  1914,     0,
       0,     0,     0,     0,  1915,  1916,  1917,  1918,  1919,  2022,
    2023,  2024,  2025,  2026,     0,     0,     0,     0,  1920,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1921,  1922,
       0,     0,  1923,     0,     0,     0,     0,  1924,  1925,  1926,
    1927,  1928,     0,     0,  1929,     0,  1930,  1931,  1932,     0,
       0,  1933,  1934,     0,  1935,  1936,  1937,     0,     0,     0,
    1938,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1939,     0,     0,     0,     0,  1940,
       0,     0,     0,     0,  1941,  1942,  1943,     0,     0,     0,
       0,  1944,  1945,     0,  1946,  1947,  1948,  1949,     0,     0,
    1950,     0,  2478,  1952,  1953,  1954,     0,  1955,     0,  1956,
    1957,     0,  1958,     0,  1959,  1960,     0,  1961,  1962,  1963,
    1964,  2027,  2028,  2029,  2030,  2031,  1965,  2032,  1966,     0,
    1967,  1968,     0,  1969,  1970,  1971,  1972,  1973,  1974,     0,
    1975,  1976,  1977,  1978,  1979,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1980,     0,  1981,     0,  1982,
       0,     0,     0,     0,     0,     0,     0,     0,  1983,     0,
    1984,  1985,  1986,  1987,  1988,  1989,  1990,     0,     0,  1991,
    1992,     0,     0,     0,     0,  1993,     0,  1994,  1995,  1996,
       0,  1997,     0,  1998,     0,  1999,  2000,  2001,  2002,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2003,  2004,  2005,
       0,     0,     0,     0,     0,     0,     0,  2006,     0,  2007,
    2008,  2009,     0,     0,     0,     0,  2010,     0,  2011,  2012,
    2013,     0,     0,     0,  2014,     0,     0,     0,  2015,  2016,
       0,     0,  2017,  2018,  2019,  2020,     0,     0,     0,  2021,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1903,  1904,  1905,  1906,  1907,  1908,     0,  1909,
       0,  1910,     0,     0,     0,  1911,  1912,  1913,     0,  1914,
       0,     0,     0,     0,     0,  1915,  1916,  1917,  1918,  1919,
    2022,  2023,  2024,  2025,  2026,     0,     0,     0,     0,  1920,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1921,
    1922,     0,     0,  1923,     0,     0,     0,     0,  1924,  1925,
    1926,  1927,  1928,     0,     0,  1929,     0,  1930,  1931,  1932,
       0,     0,  1933,  1934,     0,  1935,  1936,  1937,     0,     0,
       0,  1938,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1939,     0,     0,     0,     0,
    1940,     0,     0,     0,     0,  1941,  1942,  1943,     0,     0,
       0,     0,  1944,  1945,     0,  1946,  1947,  1948,  1949,     0,
       0,  1950,     0,  2560,  1952,  1953,  1954,     0,  1955,     0,
    1956,  1957,     0,  1958,     0,  1959,  1960,     0,  1961,  1962,
    1963,  1964,  2027,  2028,  2029,  2030,  2031,  1965,  2032,  1966,
       0,  1967,  1968,     0,  1969,  1970,  1971,  1972,  1973,  1974,
       0,  1975,  1976,  1977,  1978,  1979,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1980,     0,  1981,     0,
    1982,     0,     0,     0,     0,     0,     0,     0,     0,  1983,
       0,  1984,  1985,  1986,  1987,  1988,  1989,  1990,     0,     0,
    1991,  1992,     0,     0,     0,     0,  1993,     0,  1994,  1995,
    1996,     0,  1997,     0,  1998,     0,  1999,  2000,  2001,  2002,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2003,  2004,
    2005,     0,     0,     0,     0,     0,     0,     0,  2006,     0,
    2007,  2008,  2009,     0,     0,     0,     0,  2010,     0,  2011,
    2012,  2013,     0,     0,     0,  2014,     0,     0,     0,  2015,
    2016,     0,     0,  2017,  2018,  2019,  2020,     0,     0,     0,
    2021,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1903,  1904,  1905,  1906,  1907,  1908,     0,
    1909,     0,  1910,     0,     0,     0,  1911,  1912,  1913,     0,
    1914,     0,     0,     0,     0,     0,  1915,  1916,  1917,  1918,
    1919,  2022,  2023,  2024,  2025,  2026,     0,     0,     0,     0,
    1920,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1921,  1922,     0,     0,  1923,     0,     0,     0,     0,  1924,
    1925,  1926,  1927,  1928,     0,     0,  1929,     0,  1930,  1931,
    1932,     0,     0,  1933,  1934,     0,  1935,  1936,  1937,     0,
       0,     0,  1938,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1939,     0,     0,     0,
       0,  1940,     0,     0,     0,     0,  1941,  1942,  1943,     0,
       0,     0,     0,  1944,  1945,     0,  1946,  1947,  1948,  1949,
       0,     0,  1950,     0,  2563,  1952,  1953,  1954,     0,  1955,
       0,  1956,  1957,     0,  1958,     0,  1959,  1960,     0,  1961,
    1962,  1963,  1964,  2027,  2028,  2029,  2030,  2031,  1965,  2032,
    1966,     0,  1967,  1968,     0,  1969,  1970,  1971,  1972,  1973,
    1974,     0,  1975,  1976,  1977,  1978,  1979,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1980,     0,  1981,
       0,  1982,     0,     0,     0,     0,     0,     0,     0,     0,
    1983,     0,  1984,  1985,  1986,  1987,  1988,  1989,  1990,     0,
       0,  1991,  1992,     0,     0,     0,     0,  1993,     0,  1994,
    1995,  1996,     0,  1997,     0,  1998,     0,  1999,  2000,  2001,
    2002,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2003,
    2004,  2005,     0,     0,     0,     0,     0,     0,     0,  2006,
       0,  2007,  2008,  2009,     0,     0,     0,     0,  2010,     0,
    2011,  2012,  2013,     0,     0,     0,  2014,     0,     0,     0,
    2015,  2016,     0,     0,  2017,  2018,  2019,  2020,     0,     0,
       0,  2021,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1903,  1904,  1905,  1906,  1907,  1908,
       0,  1909,     0,  1910,     0,     0,     0,  1911,  1912,  1913,
       0,  1914,     0,     0,     0,     0,     0,  1915,  1916,  1917,
    1918,  1919,  2022,  2023,  2024,  2025,  2026,     0,     0,     0,
       0,  1920,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1921,  1922,     0,     0,  1923,     0,     0,     0,     0,
    1924,  1925,  1926,  1927,  1928,     0,     0,  1929,     0,  1930,
    1931,  1932,     0,     0,  1933,  1934,     0,  1935,  1936,  1937,
       0,     0,     0,  1938,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1939,     0,     0,
       0,     0,  1940,     0,     0,     0,     0,  1941,  1942,  1943,
       0,     0,     0,     0,  1944,  1945,     0,  1946,  1947,  1948,
    1949,     0,     0,  1950,     0,  2607,  1952,  1953,  1954,     0,
    1955,     0,  1956,  1957,     0,  1958,     0,  1959,  1960,     0,
    1961,  1962,  1963,  1964,  2027,  2028,  2029,  2030,  2031,  1965,
    2032,  1966,     0,  1967,  1968,     0,  1969,  1970,  1971,  1972,
    1973,  1974,     0,  1975,  1976,  1977,  1978,  1979,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1980,     0,
    1981,     0,  1982,     0,     0,     0,     0,     0,     0,     0,
       0,  1983,     0,  1984,  1985,  1986,  1987,  1988,  1989,  1990,
       0,     0,  1991,  1992,     0,     0,     0,     0,  1993,     0,
    1994,  1995,  1996,     0,  1997,     0,  1998,     0,  1999,  2000,
    2001,  2002,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2003,  2004,  2005,     0,     0,     0,     0,     0,     0,     0,
    2006,     0,  2007,  2008,  2009,     0,     0,     0,     0,  2010,
       0,  2011,  2012,  2013,     0,     0,     0,  2014,     0,     0,
       0,  2015,  2016,     0,     0,  2017,  2018,  2019,  2020,     0,
       0,     0,  2021,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1903,  1904,  1905,  1906,  1907,
    1908,     0,  1909,     0,  1910,     0,     0,     0,  1911,  1912,
    1913,     0,  1914,     0,     0,     0,     0,     0,  1915,  1916,
    1917,  1918,  1919,  2022,  2023,  2024,  2025,  2026,     0,     0,
       0,     0,  1920,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1921,  1922,     0,     0,  1923,     0,     0,     0,
       0,  1924,  1925,  1926,  1927,  1928,     0,     0,  1929,     0,
    1930,  1931,  1932,     0,     0,  1933,  1934,     0,  1935,  1936,
    1937,     0,     0,     0,  1938,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1939,     0,
       0,     0,     0,  1940,     0,     0,     0,     0,  1941,  1942,
    1943,     0,     0,     0,     0,  1944,  1945,     0,  1946,  1947,
    1948,  1949,     0,     0,  1950,     0,  2646,  1952,  1953,  1954,
       0,  1955,     0,  1956,  1957,     0,  1958,     0,  1959,  1960,
       0,  1961,  1962,  1963,  1964,  2027,  2028,  2029,  2030,  2031,
    1965,  2032,  1966,     0,  1967,  1968,     0,  1969,  1970,  1971,
    1972,  1973,  1974,     0,  1975,  1976,  1977,  1978,  1979,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1980,
       0,  1981,     0,  1982,     0,     0,     0,     0,     0,     0,
       0,     0,  1983,     0,  1984,  1985,  1986,  1987,  1988,  1989,
    1990,     0,     0,  1991,  1992,     0,     0,     0,     0,  1993,
       0,  1994,  1995,  1996,     0,  1997,     0,  1998,     0,  1999,
    2000,  2001,  2002,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,   241,   242,     0,
       0,  2003,  2004,  2005,     0,     0,     0,   243,     0,     0,
       0,  2006,     0,  2007,  2008,  2009,     0,     0,     0,     0,
    2010,     0,  2011,  2012,  2013,     0,     0,     0,  2014,     0,
       0,     0,  2015,  2016,     0,     0,  2017,  2018,  2019,  2020,
       0,     0,     0,  2021,     0,   848,     0,     0,     0,     0,
       0,     0,   246,     0,     0,     0,     0,   247,     0,     0,
     248,   249,     0,     0,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2022,  2023,  2024,  2025,  2026,   622,
     623,   624,   625,   626,   627,   628,     0,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   622,   623,
     624,   625,   626,   627,   628,     0,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,     0,   849,     0,
       0,     0,     0,   254,     0,     0,   622,   623,   624,   625,
     626,   627,   628,   255,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,  2027,  2028,  2029,  2030,
    2031,     0,  2032,     0,     0,   256,   622,   623,   624,   625,
     626,   627,   628,     0,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,   850,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,  2083,
     300,     0,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
       0,     0,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,     0,   348,   349,   350,   351,     0,     0,     0,     0,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,     0,   363,   364,   365,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,     0,   241,
     242,     0,     0,     0,   366,     0,     0,     0,     0,   243,
       0,     0,     0,     0,   367,   368,     0,     0,     0,     0,
       0,     0,   972,     0,     0,     0,   369,     0,     0,   973,
     623,   624,   625,   626,   627,   628,     0,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   246,   646,     0,     0,     0,   247,
       0,     0,   248,   249,   622,   623,   624,   625,   626,   627,
     628,   250,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,     0,
     646,   622,   623,   624,   625,   626,   627,   628,     0,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,     0,     0,
       0,     0,     0,     0,     0,     0,  1792,  1793,   622,   623,
     624,   625,   626,   627,   628,     0,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   254,  2084,     0,   622,   623,
     624,   625,   626,   627,   628,   255,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,     0,     0,     0,
       0,     0,     0,  2291,  2292,     0,     0,   256,     0,     0,
       0,     0,     0,     0,   974,   622,   623,   624,   625,   626,
     627,   628,     0,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,     0,     0,  1161,   261,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     0,   300,     0,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,     0,     0,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,     0,   348,   349,   350,   351,     0,     0,
       0,     0,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,     0,   363,   364,   365,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,   241,   242,     0,     0,     0,   366,     0,     0,     0,
       0,   243,     0,     0,     0,     0,   367,   368,     0,     0,
       0,   622,   623,   624,   625,   626,   627,   628,   975,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,     0,
       0,   247,     0,     0,   248,   249,   622,   623,   624,   625,
     626,   627,   628,   250,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,   622,   623,   624,   625,   626,
     627,   628,  1177,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1178,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1179,   254,     0,     0,
     622,   623,   624,   625,   626,   627,   628,   255,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1186,     0,     0,   256,
     622,   623,   624,   625,   626,   627,   628,     0,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   261,     0,     0,
       0,     0,     0,  1187,     0,     0,     0,     0,     0,   509,
       0,     0,     0,     0,     0,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,     0,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,     0,     0,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,     0,   348,   349,   350,   351,
       0,     0,     0,     0,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,     0,   363,   364,   365,   235,
     236,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,     0,   241,   242,     0,     0,     0,   366,     0,
       0,     0,     0,   243,   889,     0,     0,     0,   367,   368,
       0,     0,     0,   622,   623,   624,   625,   626,   627,   628,
     369,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,     0,     0,     0,     0,     0,     0,   246,  1188,
       0,     0,     0,   247,     0,     0,   248,   249,   622,   623,
     624,   625,   626,   627,   628,   250,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,   622,   623,   624,
     625,   626,   627,   628,  1189,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1191,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,     0,     0,     0,
    1192,     0,     0,     0,     0,     0,     0,     0,     0,   254,
       0,     0,   622,   623,   624,   625,   626,   627,   628,   255,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1193,     0,
       0,   256,   622,   623,   624,   625,   626,   627,   628,     0,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1199,   261,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     0,   300,     0,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,     0,     0,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,     0,   348,   349,
     350,   351,     0,     0,     0,     0,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,   235,   236,   237,   238,   239,   240,     0,     0,     0,
       0,     0,     0,     0,     0,   241,   242,     0,     0,     0,
     366,     0,     0,     0,     0,   243,     0,     0,     0,     0,
     367,   368,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,   369,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,     0,     0,     0,     0,     0,     0,     0,     0,
     246,  1201,     0,     0,     0,   247,     0,     0,   248,   249,
     622,   623,   624,   625,   626,   627,   628,   250,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,     0,   622,
     623,   624,   625,   626,   627,   628,  1206,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,  1175,   646,     0,     0,   622,   623,
     624,   625,   626,   627,   628,  1207,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1208,     0,     0,     0,     0,     0,
       0,   254,     0,     0,   622,   623,   624,   625,   626,   627,
     628,   255,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,     0,
     646,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1209,     0,     0,   256,   622,   623,   624,   625,   626,   627,
     628,     0,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,     0,
     646,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1221,   261,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     0,   300,     0,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,     0,     0,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,     0,
     348,   349,   350,   351,     0,     0,     0,     0,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,     0,
     363,   364,   365,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,   241,   242,     0,
       0,     0,   366,     0,     0,     0,     0,   243,     0,     0,
       0,     0,   367,   368,     0,     0,     0,   622,   623,   624,
     625,   626,   627,   628,   369,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,   246,  1222,     0,     0,     0,   247,     0,     0,
     248,   249,   622,   623,   624,   625,   626,   627,   628,   250,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,     0,     0,  1716,     0,     0,     0,     0,  1223,   622,
     623,   624,   625,   626,   627,   628,     0,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,     0,  1225,   622,   623,
     624,   625,   626,   627,   628,     0,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,  1236,     0,     0,     0,
       0,     0,     0,   254,     0,     0,   622,   623,   624,   625,
     626,   627,   628,   255,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1245,     0,     0,   256,   622,   623,   624,   625,
     626,   627,   628,     0,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1246,   261,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     0,
     300,     0,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
       0,     0,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,     0,   348,   349,   350,   351,     0,     0,     0,     0,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,     0,   363,   364,   365,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,     0,   241,
     242,     0,     0,     0,   366,     0,     0,     0,     0,   243,
       0,     0,     0,     0,   367,   368,     0,     0,     0,   622,
     623,   624,   625,   626,   627,   628,   369,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,     0,     0,     0,     0,
       0,     0,     0,     0,   246,  1247,     0,     0,     0,   247,
       0,     0,   248,   249,   622,   623,   624,   625,   626,   627,
     628,   250,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,     0,
     646,     0,     0,     0,     0,  1721,     0,     0,     0,     0,
    1248,   622,   623,   624,   625,   626,   627,   628,     0,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,     0,     0,
     622,   623,   624,   625,   626,   627,   628,  1249,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,     0,     0,
       0,     0,     0,     0,     0,   254,  1250,     0,   622,   623,
     624,   625,   626,   627,   628,   255,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1251,     0,     0,   256,   622,   623,
     624,   625,   626,   627,   628,     0,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1252,   261,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     0,   300,     0,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,     0,     0,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,     0,   348,   349,   350,   351,     0,     0,
       0,     0,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,     0,   363,   364,   365,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,   241,   242,     0,     0,     0,   366,     0,     0,     0,
       0,   243,     0,     0,     0,     0,   367,   368,     0,     0,
       0,   622,   623,   624,   625,   626,   627,   628,   369,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,     0,     0,
       0,     0,     0,     0,     0,     0,   246,  1258,     0,     0,
       0,   247,     0,     0,   248,   249,   622,   623,   624,   625,
     626,   627,   628,   250,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,  2272,     0,     0,
       0,     0,  1262,   622,   623,   624,   625,   626,   627,   628,
       0,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,   622,   623,   624,   625,   626,   627,   628,  1263,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,   254,  1264,     0,
     622,   623,   624,   625,   626,   627,   628,   255,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1265,     0,     0,   256,
     622,   623,   624,   625,   626,   627,   628,     0,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1266,   261,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,     0,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,     0,     0,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,     0,   348,   349,   350,   351,
       0,     0,     0,     0,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,     0,   363,   364,   365,   235,
     236,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,     0,   241,   242,     0,     0,     0,   366,     0,
       0,     0,     0,   243,     0,     0,     0,     0,   367,   368,
       0,     0,     0,   622,   623,   624,   625,   626,   627,   628,
     369,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,     0,     0,     0,     0,     0,     0,   246,  1270,
       0,     0,     0,   247,     0,     0,   248,   249,   622,   623,
     624,   625,   626,   627,   628,   250,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,     0,     0,  2274,
       0,     0,     0,     0,  1271,   622,   623,   624,   625,   626,
     627,   628,     0,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,     0,     0,   622,   623,   624,   625,   626,   627,
     628,  1272,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,     0,
     646,     0,     0,     0,     0,     0,     0,     0,     0,   254,
    1274,     0,   622,   623,   624,   625,   626,   627,   628,   255,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1464,     0,
       0,   256,   622,   623,   624,   625,   626,   627,   628,     0,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1743,   261,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     0,   300,     0,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,     0,     0,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,     0,   348,   349,
     350,   351,     0,     0,     0,     0,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,   235,   236,   237,   238,   239,   240,     0,     0,     0,
       0,     0,     0,     0,     0,   241,   242,     0,     0,     0,
     366,     0,     0,     0,     0,   243,     0,     0,     0,     0,
     367,   368,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,   369,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,     0,     0,     0,     0,     0,     0,     0,     0,
     246,  1744,     0,     0,     0,   247,     0,     0,   248,   249,
     622,   623,   624,   625,   626,   627,   628,   250,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,     0,   622,
     623,   624,   625,   626,   627,   628,  1755,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1765,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,   254,  1781,     0,   622,   623,   624,   625,   626,   627,
     628,   255,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,     0,
     646,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1782,     0,     0,   256,   622,   623,   624,   625,   626,   627,
     628,     0,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,     0,
     646,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1783,   261,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     0,   300,     0,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,     0,     0,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,     0,
     348,   349,   350,   351,     0,     0,     0,     0,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,     0,
     363,   364,   365,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   368,     0,     0,     0,   622,   623,   624,
     625,   626,   627,   628,   369,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1786,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,   622,   623,   624,   625,   626,   627,   628,
       0,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,  1787,   646,
     622,   623,   624,   625,   626,   627,   628,     0,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,  1800,   622,   623,
     624,   625,   626,   627,   628,     0,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,   622,   623,   624,
     625,   626,   627,   628,  1801,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,  1802,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2315,     0,     0,     0,     0,     0,     0,     0,
       0,   622,   623,   624,   625,   626,   627,   628,  1731,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,   622,   623,
     624,   625,   626,   627,   628,     0,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,   622,   623,   624,   625,   626,
     627,   628,     0,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,     0,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,   622,
     623,   624,   625,   626,   627,   628,     0,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,   622,   623,   624,   625,
     626,   627,   628,     0,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,  1210,   646,   622,   623,   624,   625,   626,   627,   628,
       0,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,     0,     0,     0,  2318,   622,   623,   624,   625,
     626,   627,   628,     0,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,  2319,     0,   622,   623,   624,   625,
     626,   627,   628,     0,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,  2320,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     622,   623,   624,   625,   626,   627,   628,  1211,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,   622,   623,
     624,   625,   626,   627,   628,  1732,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,   622,   623,   624,
     625,   626,   627,   628,   956,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,  1174,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,     0,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,   622,   623,   624,   625,   626,   627,   628,  1180,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,   622,   623,
     624,   625,   626,   627,   628,  1181,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,   622,   623,   624,   625,   626,
     627,   628,  1182,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1183,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,   622,
     623,   624,   625,   626,   627,   628,  1184,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,   622,   623,   624,   625,
     626,   627,   628,  1185,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,   622,   623,   624,   625,   626,   627,   628,
    1190,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,     0,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1194,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1195,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     622,   623,   624,   625,   626,   627,   628,  1196,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,   622,   623,
     624,   625,   626,   627,   628,  1200,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,   622,   623,   624,
     625,   626,   627,   628,  1202,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,  1203,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1204,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,   622,   623,   624,   625,   626,   627,   628,  1213,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,   622,   623,
     624,   625,   626,   627,   628,  1214,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,   622,   623,   624,   625,   626,
     627,   628,  1215,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1216,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,   622,
     623,   624,   625,   626,   627,   628,  1217,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,   622,   623,   624,   625,
     626,   627,   628,  1218,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,   622,   623,   624,   625,   626,   627,   628,
    1219,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,     0,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1220,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1224,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     622,   623,   624,   625,   626,   627,   628,  1237,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,   622,   623,
     624,   625,   626,   627,   628,  1238,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,   622,   623,   624,
     625,   626,   627,   628,  1239,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,  1240,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1241,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,   622,   623,   624,   625,   626,   627,   628,  1242,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,   622,   623,
     624,   625,   626,   627,   628,  1243,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,   622,   623,   624,   625,   626,
     627,   628,  1244,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1255,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,   622,
     623,   624,   625,   626,   627,   628,  1256,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,   622,   623,   624,   625,
     626,   627,   628,  1257,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,   622,   623,   624,   625,   626,   627,   628,
    1261,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,     0,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1267,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1268,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     622,   623,   624,   625,   626,   627,   628,  1269,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,   622,   623,
     624,   625,   626,   627,   628,  1273,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,   622,   623,   624,
     625,   626,   627,   628,  1299,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,  1735,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1740,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,   622,   623,   624,   625,   626,   627,   628,  1741,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,   622,   623,
     624,   625,   626,   627,   628,  1742,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,   622,   623,   624,   625,   626,
     627,   628,  1745,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1746,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,   622,
     623,   624,   625,   626,   627,   628,  1747,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,   622,   623,   624,   625,
     626,   627,   628,  1748,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,   622,   623,   624,   625,   626,   627,   628,
    1749,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,     0,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1750,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1753,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     622,   623,   624,   625,   626,   627,   628,  1754,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,   622,   623,
     624,   625,   626,   627,   628,  1766,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,   622,   623,   624,
     625,   626,   627,   628,  1767,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,  1780,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1784,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,   622,   623,   624,   625,   626,   627,   628,  1785,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,   622,   623,
     624,   625,   626,   627,   628,  1794,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,   622,   623,   624,   625,   626,
     627,   628,  1795,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  1796,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,   622,
     623,   624,   625,   626,   627,   628,  1797,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,   622,   623,   624,   625,
     626,   627,   628,  1798,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,   622,   623,   624,   625,   626,   627,   628,
    1799,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,     0,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1803,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  1885,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     622,   623,   624,   625,   626,   627,   628,  2098,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,   622,   623,
     624,   625,   626,   627,   628,  2176,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,   622,   623,   624,
     625,   626,   627,   628,  2248,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,  2280,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  2281,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,     0,
       0,   622,   623,   624,   625,   626,   627,   628,  2282,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,   622,   623,
     624,   625,   626,   627,   628,  2283,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,   622,   623,   624,   625,   626,
     627,   628,  2284,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,   622,   623,   624,   625,   626,   627,   628,  2293,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   646,   622,
     623,   624,   625,   626,   627,   628,  2310,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,     0,   646,   622,   623,   624,   625,
     626,   627,   628,  2311,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,   622,   623,   624,   625,   626,   627,   628,
    2312,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,     0,   646,
       0,     0,     0,    87,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  2313,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     1,   646,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,  2314,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,  2316,    88,     0,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     6,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2317,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2352,     0,     0,     0,    92,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
      12,     0,    13,     0,     0,     0,     0,     0,     0,  2362,
      14,     0,    94,     0,    95,     0,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,  2367,    97,
      98,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,    18,     0,    99,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,  2491,     0,   622,   623,   624,
     625,   626,   627,   628,     0,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,  2498,   646,   622,   623,   624,   625,   626,   627,
     628,     0,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,  2524,
     646,   622,   623,   624,   625,   626,   627,   628,     0,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,  2537,   646,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2099,  2100,     0,   100,     0,  2101,     0,  2102,     0,
       0,     0,     0,  2557,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,    20,
       0,     0,     0,     0,     0,     0,     0,   102,    21,     0,
    2558,  2103,  2104,     0,  2105,     0,     0,     0,     0,     0,
     103,     0,     0,    22,    23,     0,     0,     0,     0,   104,
       0,     0,   105,    24,     0,     0,   622,   623,   624,   625,
     626,   627,   628,  2613,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,     0,   646,   728,   729,     0,   730,     0,   731,   732,
       0,     0,     0,     0,     0,     0,     0,   622,   623,   624,
     625,   626,   627,   628,   733,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   734,   735,   736,   737,
       0,     0,     0,     0,     0,   738,     0,     0,     0,     0,
       0,     0,     0,     0,   739,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2106,  2107,     0,     0,     0,
       0,     0,     0,     0,   740,     0,     0,     0,     0,     0,
       0,     0,   741,     0,     0,     0,     0,     0,     0,   509,
       0,     0,     0,     0,  1163,     0,     0,   742,     0,     0,
       0,     0,     0,     0,   743,     0,     0,   744,     0,     0,
     745,   746,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1470,     0,     0,     0,   747,   622,   623,
     624,   625,   626,   627,   628,     0,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,     0,   646,     0,     0,     0,     0,     0,
       0,   748,   749,     0,     0,   750,   751,     0,     0,     0,
       0,   752,     0,   753,     0,     0,     0,     0,   754,   755,
       0,     0,     0,     0,   756,     0,   757,     0,     0,     0,
       0,     0,   758,     0,   759,   760,     0,     0,     0,  1462,
     761,   622,   623,   624,   625,   626,   627,   628,     0,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,     0,   646,     0,     0,
       0,     0,     0,     0,     0,   622,   623,   624,   625,   626,
     627,   628,  1461,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     621,   646,     0,     0,     0,     0,     0,   622,   623,   624,
     625,   626,   627,   628,  2077,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   647,     0,
       0,     0,     0,     0,     0,  1727,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     622,   623,   624,   625,   626,   627,   628,  2078,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646,     0,     0,     0,
       0,     0,     0,     0,   622,   623,   624,   625,   626,   627,
     628,  1205,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,     0,
     646,     0,     0,     0,     0,     0,     0,   622,   623,   624,
     625,   626,   627,   628,  1283,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,     0,   646,     0,     0,     0,     0,     0,     0,
     622,   623,   624,   625,   626,   627,   628,  1536,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,     0,   646
};

static const yytype_int16 yycheck[] =
{
     135,  1303,  1710,  1375,  1656,   386,  1693,  1559,  1570,   667,
     380,  1417,  1836,   376,  1332,  1333,  1695,  2062,   449,  1391,
    1338,  1081,  1082,    20,    20,  2068,    49,  1087,   107,  1089,
     808,   154,  1404,     3,     4,     5,     6,     7,     8,     3,
       5,  1438,     3,     3,  1827,   136,   136,   140,   199,   159,
     199,     8,     3,    48,   240,  1158,   274,  1160,     6,   219,
    1004,  1161,   240,   240,     4,     3,    48,    40,   159,   380,
      18,     3,   107,     4,  2121,  2122,     4,     6,   157,   154,
      90,     3,    87,    74,    16,  2132,  2133,    51,    51,   112,
     277,   136,   252,   216,    99,   230,   231,  1591,  1592,   706,
       4,   277,   266,   274,     3,   475,   241,   242,   243,   113,
     177,   252,   247,     3,    97,     3,  1610,    36,    36,   113,
       3,     4,     5,     6,     7,     8,   107,    18,   266,     3,
     135,    98,    78,   266,   107,     3,   266,     3,   143,   197,
      87,   216,  1829,   252,   274,   204,   266,   266,   215,   137,
      10,    11,    12,    13,    14,    15,    16,   764,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   113,    36,  1277,    74,   258,
     266,     3,   149,    71,   157,  1769,  1770,     3,   193,   193,
     172,   154,   266,    18,  1778,  1779,    84,     3,     5,   193,
     245,   192,   197,   124,   125,     3,    97,   277,   266,   268,
       3,   371,   200,    20,   136,   197,   167,    85,   150,   210,
     438,    95,   173,   193,  1876,    55,     4,     5,     6,     7,
      28,  1009,   154,   228,   369,     3,  1888,   242,  2285,  2286,
    2287,  2288,  2289,  2290,   404,   193,   228,   235,   258,   240,
     436,   438,  2299,   216,   176,   201,  2303,   156,   436,   435,
    2307,   438,   193,   195,   193,   193,   426,   438,   241,  1831,
     227,  1643,   277,  1925,   438,  1593,   351,   258,   241,   649,
     184,   203,   277,  1655,  1936,   258,   269,   438,   156,   438,
    1696,   401,   183,   656,    72,   277,   236,   237,   436,  1671,
     252,   167,   249,   436,  1956,   435,   197,   173,   438,  1706,
     193,  2094,   277,   436,   210,   261,   436,   436,  1970,   398,
      10,    11,    12,    13,    14,    15,    16,  1979,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   438,    36,   438,   438,  1293,
     436,  1454,  2397,  1456,   275,  2398,   351,  1015,  1852,   184,
     435,   436,   436,   398,   399,   400,  1144,  2019,   438,   351,
     505,   319,   407,   108,   509,   241,  2063,  2064,   208,   252,
       3,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,    71,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   107,   544,
     545,   546,   435,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     381,   436,  1039,  1040,  1534,   570,   571,   807,   435,   435,
     575,   576,  1049,   404,   404,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   437,   603,   604,
     605,   435,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,  2529,   618,   619,   436,  2533,   622,   623,   624,
     625,   626,  1099,  1100,  1101,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,  1290,  2337,   404,   381,   651,   828,   437,   437,
     831,    78,   657,   258,  1896,     3,  1898,  2111,  2112,  2113,
    2114,  2115,  2116,   156,   422,   846,    78,    71,   217,  2123,
     268,   268,     3,  2127,     0,  2197,     3,  2131,     3,   248,
    2202,   376,   377,   378,   379,   333,   334,   335,  2266,   327,
     328,   329,   330,  1623,    18,  1625,  1626,     3,  2247,   133,
     436,    74,     3,   124,   125,    54,    55,   134,   139,   439,
    2627,  2628,   255,  2630,  2631,     3,     3,     3,     3,     3,
     154,    87,   134,   417,    51,    74,     3,     3,  1205,  1206,
     417,     3,    49,    99,  2166,   434,     3,    10,    11,    12,
      13,    14,    15,    16,  2322,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     3,    36,     3,   998,  1067,  1068,   230,   135,
       5,   202,   241,    97,   201,    51,   396,   143,  1306,   322,
       3,  1309,     3,   436,    85,    18,     3,     3,   436,   201,
       3,    18,     3,   391,   391,   112,   258,    76,    18,  2041,
     805,     3,   271,    96,    71,  2047,    39,   100,   156,  2617,
     100,   241,    84,   217,     3,    48,    36,    84,    51,   192,
      53,    48,  1003,    56,    51,   156,    53,   193,    63,    56,
     120,   156,   415,   267,   261,   840,   841,   210,    71,    28,
     845,   271,  2364,    84,    71,    78,    79,   852,   216,   261,
     156,    78,    79,   436,   275,   156,  2550,  1334,    78,   183,
    2382,   210,   100,   136,  2672,  2673,    51,   240,   156,   156,
     156,   156,   156,   197,   153,    60,   242,   437,   438,   156,
     113,    39,   120,  1134,   163,  2073,   113,   430,   431,    71,
       3,   155,     5,   113,  2702,   188,    78,   130,   177,  1547,
     164,    59,  2334,  2325,    10,    11,    12,    13,    14,    15,
      16,   190,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   259,
      36,   164,    51,   156,   100,   156,   215,   164,    71,   156,
     156,    60,    14,   156,     9,   156,    18,     3,  2526,     3,
     280,    84,   134,  2475,   120,    20,   138,     3,  2674,   238,
     193,   156,   967,   968,  2542,   970,   193,  2243,   201,    51,
     975,  2213,     3,   155,   201,   155,    51,     3,    60,     3,
    2434,  2153,   164,     3,  2438,    60,   103,  2703,  2704,  2231,
       3,  2233,    10,    11,    12,    13,    14,    15,    16,   246,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   744,    36,   201,
    2736,    33,    34,   750,    36,   752,   155,  2459,   261,   146,
      13,    14,  2454,    16,   261,   396,    19,   154,   435,   436,
      95,  2598,  2564,   398,   399,   400,   396,  2625,  1299,   437,
     438,  1291,    10,    11,    12,    13,    14,    15,    16,   176,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,   261,
     252,    32,    33,    34,   139,    36,   437,   438,     3,   103,
       3,  1096,   437,   438,   396,    45,    46,  1278,   223,   224,
     155,    62,   437,   438,   396,    66,  1287,    10,    11,    12,
      13,    14,    15,    16,  2546,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   146,    36,  2588,  2589,     3,  2591,  2592,   171,
     154,   437,   438,    82,    83,   159,     3,   202,     3,  2391,
     405,   406,     3,   114,  2326,   103,   117,   103,  1163,     3,
    1165,   159,   176,   438,   219,   438,   221,  1172,  1173,  2601,
    1175,   132,   227,   438,  1179,   437,   438,   437,   438,   437,
     438,  1186,  1187,  1188,  1189,   409,  1191,  1192,  1193,   437,
     438,   152,   136,  1198,  1199,     3,  1201,   252,   146,   160,
     146,   136,  1207,  1208,  1209,  2637,   154,   136,   154,   437,
     438,   103,   437,   438,     4,     5,  1221,  1222,  1223,   136,
    1225,  1698,   437,   438,     3,   437,   438,     3,   176,   136,
     176,  1236,   436,  2665,   437,   438,   159,    38,   437,   438,
    1245,  1246,  1247,  1248,  1249,  1250,  1251,  1252,  1429,  1254,
    2682,   437,   438,  1258,   146,  1260,   136,  1262,  1263,  1264,
    1265,  1266,   154,     3,  2696,  1270,  1271,  1272,     3,  1274,
     437,   438,     4,     5,    75,   437,   438,  2709,  1283,   281,
    1285,  1286,   437,   438,   176,   437,   438,    51,   249,     3,
     251,   437,   438,  2725,   436,  1300,   437,   438,   436,   100,
     437,   438,  1307,   437,   438,   437,   438,   108,   281,   270,
       3,     4,     5,     6,     7,     8,   371,   437,   438,   120,
     197,   437,   438,   197,    17,    18,   437,   438,   437,   438,
       3,   437,   438,     3,    27,    28,   731,   732,   733,   734,
     395,   736,   437,   438,   739,   740,   741,    40,   140,   404,
     281,   746,   747,   748,  1535,   197,   751,  1538,     3,  1540,
     281,  1542,   417,   437,   438,   435,   437,   438,  1373,   437,
     438,   426,    57,    58,   429,   437,   438,   437,   438,    72,
     437,   438,    57,    58,    77,   436,   187,    80,    81,  1074,
    1075,     3,  1077,  1078,  1079,   281,    89,   281,  1083,  1084,
    1085,   437,   438,  1088,   437,   438,   281,   208,   437,   438,
     437,   438,   281,   106,   437,   438,   197,   110,   281,   437,
     438,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   281,    36,  1443,   240,
     437,   438,  1447,   437,   438,   437,   438,   281,  1453,   437,
     438,   437,   438,   146,   281,   437,   438,  1462,   281,  1464,
     437,   438,   437,   438,     3,  1470,  1471,     4,   269,    28,
      29,    30,    31,    32,    33,    34,   245,    36,     3,   437,
     438,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     183,    36,   437,   438,   437,   438,   437,   438,   435,   436,
     193,    10,    11,    12,    13,    14,    15,    16,     8,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     9,    36,   437,   438,
     435,  1536,   225,   226,   437,   438,   437,   438,   437,   438,
     233,   234,   435,   436,    36,   238,   437,   438,   437,   438,
     437,   438,   437,   438,   437,   438,   438,  1562,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     263,    36,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,  1587,    36,   436,  1011,  1012,   436,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   436,   320,     3,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,  1821,  1822,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   436,   372,
     373,   374,   375,  1688,  1295,  1296,   436,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   436,   392,
     393,   394,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   436,    36,
     436,   414,    51,   436,   436,   436,  1731,   436,   436,  1734,
     436,   424,   425,   436,   436,   436,   436,   436,  1743,  1744,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
    1755,     3,   436,   436,   436,   436,   436,   436,   436,  1764,
    1765,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   436,    36,   436,   436,  1781,  1782,  1783,   436,
     436,  1786,  1787,   436,  1789,   436,  1791,   436,  1793,   436,
     436,   159,   436,   436,   436,  1800,  1801,  1802,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   436,    36,   436,   436,   436,   436,   436,  1824,
    1825,    13,    14,    15,    16,   436,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   436,    36,     3,     4,     5,     6,     7,
       8,  1856,    10,   436,    12,  1860,   436,   436,    16,    17,
      18,   436,    20,   436,   436,  1870,   436,   436,    26,    27,
      28,    29,    30,   436,   436,   436,   436,     3,   436,  1884,
     436,   436,    40,   436,   436,   436,   436,   436,   436,   436,
     436,     3,    50,    51,   436,   436,    54,     3,   436,     3,
     436,    59,    60,    61,    62,    63,   436,   436,    66,   436,
      68,    69,    70,   436,   436,    73,    74,   436,    76,    77,
      78,   436,   436,   436,    82,   436,   436,     3,   437,   438,
     436,   436,   436,   436,   436,   436,    16,   436,    96,   436,
     436,   436,   436,   101,   266,   436,   436,   436,   106,   107,
     108,   421,     3,    28,     3,   113,   114,     3,   116,   117,
     118,   119,    53,    53,   122,    44,   124,   125,   126,   127,
       3,   129,   423,   131,   132,    71,   134,   277,   136,   137,
     245,   139,   140,   141,   142,     3,     3,   197,     3,   197,
     148,   281,   150,     3,   152,   153,   197,   155,   156,   157,
     158,   159,   160,   281,   162,   163,   164,   165,   166,   277,
     281,   281,   418,     3,   428,     3,   277,     3,     3,   177,
      28,   179,     3,   181,     3,     3,     3,     3,     3,     3,
       3,    74,   190,   281,   192,   193,   194,   195,   196,   197,
     198,   281,    74,   201,   202,     3,     3,   281,     3,   207,
       3,   209,   210,   211,    36,   213,     3,   215,     3,   217,
     218,   219,   220,   439,   437,   437,   437,   437,   437,     5,
     437,   437,   437,   437,   437,   437,   437,   437,  2083,  2084,
     437,   239,   240,   241,  2089,   437,  2091,   437,   436,     3,
       3,   249,     3,   251,   252,   253,     3,   437,     3,   163,
     258,   196,   260,   261,   262,     3,     3,   271,   266,     3,
     402,   402,   270,   271,   274,   271,   274,   275,   276,   277,
     274,     3,   273,   281,     5,   274,   437,   271,   274,     5,
     277,     3,    42,    42,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,   245,     3,  2151,  2152,     3,    20,
       3,     5,     3,   379,   217,     5,     5,   217,    64,   436,
     436,   436,   436,   436,   322,   323,   324,   325,   326,   436,
     436,    10,    11,    12,    13,    14,    15,    16,   436,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     3,    36,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  2226,    36,     3,     3,   437,     3,   438,     3,   197,
     437,   197,    10,    11,    12,    13,    14,    15,    16,  2244,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    51,    36,   396,
       3,   281,   197,     3,   436,     3,   277,     3,     3,   197,
     140,  2276,     4,   436,   198,   396,   434,   435,   436,   437,
     438,     3,   440,    13,    14,    15,    16,  2292,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     3,    36,     3,     3,     3,
    2315,   241,   437,   437,   437,   350,   350,   437,   241,     3,
       4,     5,     6,     7,     8,   350,    10,  2332,    12,   350,
     136,   350,    16,    17,    18,   438,    20,   436,   436,   436,
     164,   164,    26,    27,    28,    29,    30,   436,   164,   197,
    2355,  2356,   163,   163,   436,   271,    40,     4,     4,   411,
       4,   411,   436,   410,   433,   136,    50,    51,   436,   197,
      54,   433,   197,     3,    36,    59,    60,    61,    62,    63,
     222,   222,    66,     3,    68,    69,    70,     4,   245,    73,
      74,     5,    76,    77,    78,     5,     3,     3,    82,   245,
       5,     4,   193,     5,     5,     5,   436,   436,   439,   213,
     197,     3,    96,   140,     3,     3,     3,   101,   418,   101,
     436,   197,   106,   107,   108,   397,   428,   422,    94,   113,
     114,     3,   116,   117,   118,   119,     3,    63,   122,     3,
     124,   125,   126,   127,    20,   129,  2451,   131,   132,   436,
     134,   179,   136,   137,   199,   139,   140,   141,   142,    91,
     161,     4,   350,   350,   148,   350,   150,   437,   152,   153,
     439,   155,   156,   157,   158,   159,   160,   350,   162,   163,
     164,   165,   166,     5,   436,   436,   436,  2492,     5,   241,
     436,   350,   436,   177,   350,   179,     3,   181,   350,   140,
     412,   274,     3,   350,   437,   350,   190,  2512,   192,   193,
     194,   195,   196,   197,   198,     3,   436,   201,   202,   403,
     179,    20,    20,   207,     4,   209,   210,   211,   179,   213,
      20,   215,     3,   217,   218,   219,   220,     4,    20,     3,
     436,   164,   164,   436,     3,     3,   222,   222,   437,    78,
     268,   437,     3,   396,   437,   239,   240,   241,   437,   437,
      60,   436,   436,   140,   245,   249,   268,   251,   252,   253,
     197,     3,    20,     3,   258,     4,   260,   261,   262,     4,
      20,     3,   266,     3,   164,   164,   270,   271,     3,     6,
     274,   275,   276,   277,     4,     4,   436,   281,   437,   438,
     436,   436,   436,   436,   436,   436,   436,     4,   212,   436,
      10,    11,    12,    13,    14,    15,    16,  2622,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   438,    36,   164,   322,   323,
     324,   325,   326,     3,     3,   437,   436,    51,   437,   437,
     436,   436,   436,   436,   436,   436,   141,   163,     3,   437,
     438,     4,     3,     4,     5,     6,     7,     8,   436,    10,
     436,    12,   436,    20,   437,    16,    17,    18,   437,    20,
     437,   437,   437,   436,   438,    26,    27,    28,    29,    30,
     436,     5,   436,     4,   436,     4,     4,   438,     5,    40,
     274,   438,     4,   436,   438,   436,     3,   193,     3,    50,
      51,   436,   436,    54,    52,   436,     3,   436,    59,    60,
      61,    62,    63,     4,   213,    66,   164,    68,    69,    70,
     164,     5,    73,    74,     4,    76,    77,    78,   240,     4,
       3,    82,     3,   436,     3,     3,     3,     3,   436,   436,
     434,   435,   436,   437,   438,    96,   440,   118,     3,     3,
     101,   266,   436,     3,   268,   106,   107,   108,     4,    20,
      20,   101,   113,   114,     4,   116,   117,   118,   119,   436,
     436,   122,   140,   124,   125,   126,   127,   436,   129,     3,
     131,   132,   258,   134,   436,   136,   137,    20,   139,   140,
     141,   142,   438,   197,     4,   351,   350,   148,   350,   150,
      94,   152,   153,   437,   155,   156,   157,   158,   159,   160,
      63,   162,   163,   164,   165,   166,   437,   148,   437,   437,
       3,     3,    12,    12,    59,     4,   177,   436,   179,   437,
     181,   438,   433,     3,     5,     3,   432,     3,     5,   190,
       5,   192,   193,   194,   195,   196,   197,   198,    51,    60,
     201,   202,   437,   436,     4,   436,   207,   436,   209,   210,
     211,    60,   213,     3,   215,   437,   217,   218,   219,   220,
     437,   437,   436,   438,   436,   217,   140,   438,   436,   277,
     268,   436,     5,     4,     4,   436,   271,   437,   239,   240,
     241,   437,   436,   436,   164,     3,   438,    88,   249,   164,
     251,   252,   253,   436,    63,   198,   437,   258,   436,   260,
     261,   262,   437,   437,   436,   266,   437,   437,     3,   270,
     271,    20,   413,   274,   275,   276,   277,   164,   164,     5,
     281,   438,   438,    20,   438,     5,    43,    18,     3,   436,
       3,   164,   436,     3,     4,     5,     6,     7,     8,   437,
      10,   437,    12,   437,   437,     3,    16,    17,    18,    60,
      20,   118,     3,    78,   436,   436,    26,    27,    28,    29,
      30,   322,   323,   324,   325,   326,   136,   436,     3,   436,
      40,     3,     3,    63,    63,     3,     3,   436,    63,   350,
      50,    51,   437,     5,    54,     5,   437,     5,   350,    59,
      60,    61,    62,    63,   437,   350,    66,   350,    68,    69,
      70,   437,     5,    73,    74,   437,    76,    77,    78,     3,
     437,    20,    82,   438,    20,     4,     4,   437,   438,   207,
     269,     3,     3,    60,   277,     5,    96,     5,   437,    77,
     131,   101,   156,   217,   166,   276,   106,   107,   108,   436,
     436,   207,     5,   113,   114,     3,   116,   117,   118,   119,
     416,   423,   122,   204,   124,   125,   126,   127,    20,   129,
       3,   131,   132,   438,   134,   101,   136,   137,   437,   139,
     140,   141,   142,   434,   435,   436,   437,   438,   148,   440,
     150,   437,   152,   153,   438,   155,   156,   157,   158,   159,
     160,   437,   162,   163,   164,   165,   166,   437,   437,   437,
       3,   437,   437,   436,   436,     4,   436,   177,   214,   179,
     436,   181,   437,   437,   140,   438,     4,   438,   438,     3,
     190,   437,   192,   193,   194,   195,   196,   197,   198,   437,
     436,   201,   202,    60,     5,   437,     3,   207,   437,   209,
     210,   211,     3,   213,     3,   215,    20,   217,   218,   219,
     220,     3,   436,     3,   436,     4,     4,   159,     4,     3,
     207,     3,     3,   436,     4,     3,   438,   436,     3,   239,
     240,   241,   438,    20,     3,   437,   437,   231,   437,   249,
     437,   251,   252,   253,   438,   437,   231,     3,   258,   437,
     260,   261,   262,   437,    20,   245,   266,     3,     3,   437,
     270,   271,   437,   180,   274,   275,   276,   277,   437,   437,
     240,   281,   180,   438,   438,     5,   229,   436,   436,   436,
       3,   437,   437,   437,     3,     4,     5,     6,     7,     8,
     437,    10,   438,    12,     5,     3,   228,    16,    17,    18,
       5,    20,   438,   437,     3,   436,   151,    26,    27,    28,
      29,    30,   322,   323,   324,   325,   326,   271,    97,   438,
     174,    40,   197,   250,   438,   437,   437,   197,   191,   191,
       5,    50,    51,     5,   156,    54,  1464,  1286,  1178,   510,
      59,    60,    61,    62,    63,  2082,  1818,    66,  2154,    68,
      69,    70,   651,   661,    73,    74,  1566,    76,    77,    78,
     191,  1119,   817,    82,  2645,  2375,   809,  1122,  2562,  2052,
    1411,  1035,  1402,   690,  1327,  1667,  2040,    96,  2387,  2229,
    2656,   130,   101,  2276,  1159,  2243,   499,   106,   107,   108,
    1708,   830,  2708,  1697,   113,   114,   234,   116,   117,   118,
     119,  1685,   725,   122,  1103,   124,   125,   126,   127,  1086,
     129,   458,   131,   132,    -1,   134,  1874,   136,   137,    -1,
     139,   140,   141,   142,   434,   435,   436,   437,   438,   148,
     440,   150,    -1,   152,   153,    -1,   155,   156,   157,   158,
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
      -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,
     118,   119,    -1,    -1,   122,    -1,   124,   125,   126,   127,
      -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,   137,
      -1,   139,   140,   141,   142,   434,   435,   436,   437,   438,
     148,   440,   150,    -1,   152,   153,    -1,   155,   156,   157,
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
      -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
     107,   108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,
     117,   118,   119,    -1,    -1,   122,    -1,   124,   125,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,
     137,    -1,   139,   140,   141,   142,   434,   435,   436,   437,
     438,   148,   440,   150,    -1,   152,   153,    -1,   155,   156,
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
     277,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,   322,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,    -1,
     116,   117,   118,   119,    -1,    -1,   122,    -1,   124,   125,
     126,   127,    -1,   129,    -1,   131,   132,    -1,   134,    -1,
     136,   137,    -1,   139,   140,   141,   142,   434,   435,   436,
     437,   438,   148,   440,   150,    -1,   152,   153,    -1,   155,
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
     276,   277,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,   434,   435,
     436,   437,   438,   148,   440,   150,    -1,   152,   153,    -1,
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
     275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
     114,    -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,
     124,   125,   126,   127,    -1,   129,    -1,   131,   132,    -1,
     134,    -1,   136,   137,    -1,   139,   140,   141,   142,   434,
     435,   436,   437,   438,   148,   440,   150,    -1,   152,   153,
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
     274,   275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,
     113,   114,    -1,   116,   117,   118,   119,    -1,    -1,   122,
      -1,   124,   125,   126,   127,    -1,   129,    -1,   131,   132,
      -1,   134,    -1,   136,   137,    -1,   139,   140,   141,   142,
     434,   435,   436,   437,   438,   148,   440,   150,    -1,   152,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,   322,
     323,   324,   325,   326,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,   114,    -1,   116,   117,   118,   119,    -1,    -1,
     122,    -1,   124,   125,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,    -1,   136,   137,    -1,   139,   140,   141,
     142,   434,   435,   436,   437,   438,   148,   440,   150,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,   114,    -1,   116,   117,   118,   119,    -1,
      -1,   122,    -1,   124,   125,   126,   127,    -1,   129,    -1,
     131,   132,    -1,   134,    -1,   136,   137,    -1,   139,   140,
     141,   142,   434,   435,   436,   437,   438,   148,   440,   150,
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
     281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,   114,    -1,   116,   117,   118,   119,
      -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,   129,
      -1,   131,   132,    -1,   134,    -1,   136,   137,    -1,   139,
     140,   141,   142,   434,   435,   436,   437,   438,   148,   440,
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
      -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,   108,
      -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,   118,
     119,    -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,
     129,    -1,   131,   132,    -1,   134,    -1,   136,   137,    -1,
     139,   140,   141,   142,   434,   435,   436,   437,   438,   148,
     440,   150,    -1,   152,   153,    -1,   155,   156,   157,   158,
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
      -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,
     118,   119,    -1,    -1,   122,    -1,   124,   125,   126,   127,
      -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,   137,
      -1,   139,   140,   141,   142,   434,   435,   436,   437,   438,
     148,   440,   150,    -1,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,    -1,   162,   163,   164,   165,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,   179,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,   202,    -1,    -1,    -1,    -1,   207,
      -1,   209,   210,   211,    -1,   213,    -1,   215,    -1,   217,
     218,   219,   220,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,   239,   240,   241,    -1,    -1,    -1,    27,    -1,    -1,
      -1,   249,    -1,   251,   252,   253,    -1,    -1,    -1,    -1,
     258,    -1,   260,   261,   262,    -1,    -1,    -1,   266,    -1,
      -1,    -1,   270,   271,    -1,    -1,   274,   275,   276,   277,
      -1,    -1,    -1,   281,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,   178,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,   434,   435,   436,   437,
     438,    -1,   440,    -1,    -1,   225,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,   254,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   181,
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
      -1,    -1,    40,    -1,    -1,    -1,   436,    -1,    -1,    47,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    72,    36,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   437,   438,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,   438,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   437,   438,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,   438,   263,    -1,    -1,    -1,    -1,
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
      -1,    10,    11,    12,    13,    14,    15,    16,   436,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   438,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   438,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   438,   183,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,    -1,   225,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,   438,    -1,    -1,    -1,    -1,    -1,   275,
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
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,   424,   425,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     436,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,   438,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   438,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   438,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,
      -1,   225,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,   263,
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
     424,   425,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   436,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,   438,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   438,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   136,    36,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   438,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   438,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     438,    -1,    -1,   225,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     438,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   424,   425,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   436,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,   438,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,   438,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,   438,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,   438,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   438,    -1,    -1,   225,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   438,   263,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   436,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,   438,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,
     438,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   438,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,   438,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   438,    -1,    -1,   225,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   438,   263,    -1,    -1,    -1,    -1,
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
      -1,    10,    11,    12,    13,    14,    15,    16,   436,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,   438,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,   438,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   438,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   438,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,    -1,   225,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   438,   263,    -1,    -1,
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
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     436,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,   438,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,   438,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   438,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     438,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,
      -1,   225,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,   263,
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
     424,   425,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   436,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,   438,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   438,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   438,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,   438,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     438,    -1,    -1,   225,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     438,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     392,   393,   394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   424,   425,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   436,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   438,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   438,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,   438,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   438,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   438,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   140,    18,
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
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   321,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,   438,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,   438,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   438,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   437,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   437,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   437,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   437,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     437,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   437,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   437,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   437,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   437,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     437,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   437,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   437,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   437,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   437,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     437,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   437,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   437,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   437,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   437,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     437,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   437,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   437,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   437,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   437,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     437,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   437,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   437,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   437,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   437,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   437,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   437,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   437,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     437,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    10,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    37,    36,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,   437,    95,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   437,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   437,    -1,    -1,    -1,   155,    -1,
      -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,
     206,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,   437,
     216,    -1,   219,    -1,   221,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,    -1,    -1,   437,   246,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,    -1,   261,    -1,    -1,    -1,    -1,    -1,
      -1,   267,    -1,    -1,    -1,   437,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   437,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   437,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   437,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,    -1,   371,    -1,   109,    -1,   111,    -1,
      -1,    -1,    -1,   437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,   395,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,   404,    -1,
     437,   144,   145,    -1,   147,    -1,    -1,    -1,    -1,    -1,
     417,    -1,    -1,   419,   420,    -1,    -1,    -1,    -1,   426,
      -1,    -1,   429,   429,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   437,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    61,    62,    -1,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    82,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,   279,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,   275,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,   182,    -1,    -1,   185,    -1,    -1,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,   205,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,   239,   240,    -1,    -1,   243,   244,    -1,    -1,    -1,
      -1,   249,    -1,   251,    -1,    -1,    -1,    -1,   256,   257,
      -1,    -1,    -1,    -1,   262,    -1,   264,    -1,    -1,    -1,
      -1,    -1,   270,    -1,   272,   273,    -1,    -1,    -1,   253,
     278,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   124,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    49,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     395,   404,   419,   420,   429,   442,   481,   482,   522,   526,
     528,   535,   536,   539,   541,   542,   544,   545,   546,   551,
     552,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     574,   577,   584,   585,   587,   603,   604,   613,   616,   618,
     619,   620,   643,   646,   653,   654,   657,   660,   661,   664,
     219,   252,   371,   404,   426,   252,     3,    10,    95,   102,
     138,   139,   155,   202,   219,   221,   227,   246,   247,   261,
     371,   395,   404,   417,   426,   429,   625,     3,   523,    95,
     139,   155,   202,   219,   221,   227,   252,   371,   395,   404,
     417,   426,   429,   595,     3,     3,     3,    28,   252,   252,
     595,     8,   227,   644,   645,   501,   252,   595,   614,     3,
      95,   398,   399,   400,   107,   398,   399,   400,   407,   417,
     417,   255,   322,   430,   431,     0,   434,   538,     3,     3,
       3,     3,   396,     3,   436,   216,   156,   617,     3,   155,
       3,     3,    85,   156,     3,     3,     3,   617,   246,   155,
     617,   396,   396,     3,   156,     3,   156,     3,   252,   605,
       3,   136,   154,   176,   203,   524,     3,   156,     3,   156,
       3,     3,   156,     3,   156,     3,     3,   156,     3,   156,
       3,   156,   396,   396,     3,   156,     3,   156,     3,   103,
     146,   154,   159,   176,   596,   171,   438,     3,     3,   596,
       9,    20,     3,   113,   438,     3,     4,     5,     6,     7,
       8,    17,    18,    27,    28,    40,    72,    77,    80,    81,
      89,   106,   110,   146,   183,   193,   225,   226,   233,   234,
     238,   263,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     320,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   372,   373,
     374,   375,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   392,   393,   394,   414,   424,   425,   436,
     443,   502,   503,     3,   154,   176,     3,   167,   173,   381,
     436,   505,   506,   507,   508,   511,   521,     3,   159,   401,
     136,   136,   136,   159,   136,   409,     3,     3,     3,   136,
     436,   159,   136,   442,    54,    55,    74,   210,   277,   435,
     573,   100,   120,    38,    75,   100,   108,   120,   187,   208,
     240,   269,    55,   208,   662,     3,   100,   120,     3,     4,
       5,     6,     7,     8,   193,   437,   655,   656,   139,   202,
     281,     3,    51,     3,   436,   197,     3,   156,   281,   436,
      39,    59,   658,   197,     3,     3,    85,   156,     3,     3,
     156,     3,   156,   140,   281,   197,   281,     3,   617,   436,
     606,   435,   525,     3,   524,   136,   438,   281,   281,   281,
     281,   197,   281,    74,   210,   527,   281,   281,     3,   156,
       3,   156,   281,   281,     3,   156,     3,     4,   245,     3,
     443,   443,   645,   435,   436,     9,   443,   443,   443,   275,
     443,   480,   435,   436,    36,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     443,     3,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    36,    51,   504,   136,
     159,   438,   438,   435,   504,   436,     3,   436,   482,   505,
     240,   438,    76,   153,   177,   190,   215,   238,   512,   514,
      51,   510,   510,     3,   159,     3,     3,     3,     3,     3,
      16,   266,   421,     3,    28,     3,     3,    53,    53,    44,
       3,   108,   258,   575,    71,    84,     3,    84,    71,   217,
       3,    71,    84,   422,    71,   217,     3,    84,     3,    71,
      84,   423,    71,   277,   245,    18,   184,   376,   377,   378,
     379,   663,   100,   120,   437,   438,     3,     3,    61,    62,
      64,    66,    67,    82,   114,   115,   116,   117,   123,   132,
     152,   160,   175,   182,   185,   188,   189,   205,   239,   240,
     243,   244,   249,   251,   256,   257,   262,   264,   270,   272,
     273,   278,   639,   197,     3,    16,   150,   195,   647,   648,
     649,     3,   197,   281,     3,   647,   107,   157,   258,   398,
     659,     3,   404,   197,     3,   156,   281,   662,   277,   540,
     281,   547,   281,   418,     3,   428,     3,   277,     3,     3,
     607,   136,   245,   608,    28,   274,   483,   266,   505,     3,
       3,     3,     3,     3,     3,   404,     3,     3,     3,    74,
     281,    74,   281,     3,     3,   281,   240,   436,   597,     3,
     240,   597,     3,   443,   448,   452,   443,   443,   480,   124,
     125,   275,     3,     3,   439,   450,   457,   443,    65,   178,
     254,   443,   478,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   437,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   437,   443,
     443,   443,   437,   443,   443,   443,   443,   443,   443,    28,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   437,   437,   437,   437,   437,   443,   443,   437,   437,
     437,   443,   443,     5,   437,   437,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   437,   443,
     443,   443,   437,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   437,   443,   443,   437,   443,   443,   443,
     443,   443,     6,    18,   193,   319,   436,    13,    14,    16,
      19,   443,    40,    47,   232,   436,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,     3,   505,     3,   503,     3,   537,     3,   133,
     154,   267,   518,   509,   504,   443,   437,   437,     3,   615,
     506,   177,   215,   515,   507,   163,   196,   513,     3,     3,
     271,     3,   402,   402,   274,   271,   274,     3,   273,     5,
     274,   437,   271,   274,     5,   573,    42,    42,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,   639,     3,
     245,     3,     3,    20,     3,     5,     3,   379,     5,     5,
     277,     5,    63,     5,   217,   217,   656,   436,   436,   436,
     635,   635,   635,   635,   635,   635,   436,   635,   635,   635,
      64,   636,   636,   635,   635,   635,   436,   636,   635,   636,
     436,   436,   436,    18,    36,    78,   113,     3,   639,     3,
       3,     3,   437,   438,   266,   436,     3,     3,   197,   437,
     197,    51,   578,   396,     3,   197,   281,     3,   436,     3,
     277,   548,     3,     3,   140,     4,   197,   436,   154,   216,
     351,   435,   436,   641,   642,   437,   438,     4,   236,   237,
     609,   443,   198,   493,   505,   483,   525,   396,   527,     3,
       3,     3,     3,   602,     3,   598,   271,   482,   602,   271,
     482,   438,   437,   253,   124,   125,   443,   443,   437,   443,
     449,   482,   136,   438,   437,   136,   443,   438,   438,   438,
     437,   437,   437,   437,   437,   437,   438,   438,   438,   438,
     437,   438,   438,   438,   437,   437,   437,   437,   438,   438,
     437,   438,   437,   437,   437,    51,   438,   438,   438,   438,
     321,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   438,   438,   438,   437,   438,   350,   350,   350,   437,
     438,   437,   438,   437,   350,   350,   438,   437,   437,   437,
     437,   437,   437,   437,   437,   438,   438,   438,   438,   438,
     438,   438,   438,   437,   438,   437,   437,   437,   438,   437,
     438,   437,   438,   438,   438,   438,   438,   437,   437,   437,
     438,   438,   438,   437,   438,     6,   193,   453,   455,   443,
     443,   436,   443,    50,   436,   436,   436,   444,   439,   140,
     497,   136,   438,   504,   164,   164,   164,   482,   518,   437,
      20,   435,   438,   483,   513,   513,   163,   197,   507,   163,
     436,   271,     4,     4,   411,   436,   411,   410,     4,   433,
     136,   436,   433,    45,    46,   575,   197,   197,    78,   134,
     201,   261,   639,   639,     3,   222,   222,   634,   639,     3,
     245,   245,     4,     5,     5,     3,     3,   647,   647,     5,
     637,   638,   637,   637,     4,   640,   637,   637,   637,   638,
     638,   637,   637,   637,   640,   638,   637,   638,     5,     5,
       5,   193,   439,   436,   443,   436,   639,   639,   639,   213,
     649,   268,   391,     3,   327,   328,   329,   330,   533,   534,
     266,   436,   197,     3,    51,    60,     3,   404,   223,   224,
     140,   579,     3,   266,   436,     3,     3,   197,   397,   540,
     436,   547,   418,   101,   428,   422,    94,     3,    71,    78,
     134,   138,   155,   164,   201,   261,   626,   627,   633,   510,
       3,    87,    99,   135,   143,   193,   242,   277,   436,   610,
     611,   612,    63,   179,   496,   483,     3,    20,   199,   438,
     588,   437,   438,   436,   599,   588,   599,   588,   448,   443,
     443,   124,   253,    91,   438,   439,   437,   443,   443,   443,
     136,   161,   479,   479,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   639,   639,   443,   443,   443,
       4,   350,   350,   350,   350,   350,   350,   443,   443,   443,
     443,   436,   436,   436,   350,     5,   350,     5,   350,   436,
     436,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   448,   482,   454,   456,    50,   443,   447,   443,
     445,   451,   446,   451,   482,   412,   483,   505,     3,   518,
     140,   519,   519,   519,   437,   510,   443,     3,     3,   493,
     507,   443,   197,   266,   516,   517,   507,     4,   193,   543,
     436,   403,   179,    20,     4,   193,   553,    20,     4,   179,
      20,     3,     4,    20,     3,   576,   576,   436,   164,   164,
     436,   634,   634,   639,    18,    39,    48,    51,    53,    56,
      71,    78,    79,   113,   130,   164,   193,   201,   261,   586,
     634,     3,     3,   222,   222,   437,   437,   437,   438,   259,
     280,    82,    83,   437,   438,   437,   437,   437,   437,    78,
     443,   533,    62,    66,   114,   117,   132,   152,   160,   249,
     251,   270,   650,   436,   436,   436,   436,   436,   436,   437,
     438,   268,   533,     3,   266,   436,    60,   651,   140,   396,
      40,   107,   157,   241,   258,   245,   580,   578,   268,   533,
     266,   436,   197,     3,    20,   405,   406,   549,   550,   548,
       3,     4,     4,    20,     3,   436,   641,     3,   436,   164,
     155,   164,   436,   436,   164,   436,   437,   438,     3,   482,
       4,    87,   249,     6,     4,     4,   436,   611,   438,     3,
       5,   494,   495,   443,   212,   665,   113,   443,   164,     3,
       3,   113,   443,   601,   438,   588,   588,   124,   443,   436,
     449,   140,   437,   437,   438,   437,   443,   443,   437,   437,
     437,   437,   437,   438,   438,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   438,   437,   436,   436,   436,
     436,   436,   436,   437,   438,   438,   437,   437,   458,   459,
     460,   436,   437,   438,   436,   437,   438,   436,   476,   477,
     437,   438,   438,   438,   437,   437,   438,   438,   437,   438,
     437,   438,   437,   438,   437,   437,   437,   437,   437,   437,
     438,   438,   438,   437,   437,   437,   448,   482,   443,   482,
     482,   437,   482,   437,   437,    51,   141,   484,   483,   163,
     436,   436,   436,     3,    20,    20,   435,   496,   443,   436,
     517,   438,   543,     4,     5,     4,   438,     4,     5,     4,
     274,   438,     4,   438,   277,   443,   436,   436,     3,   632,
     586,   586,   634,   193,     3,   436,   436,   436,    52,     3,
     436,     4,     4,     5,     6,     7,    72,   333,   334,   335,
     436,   164,   164,   586,   213,    51,    60,     5,   240,     4,
     638,     4,   638,   638,   436,   437,   437,    51,    60,   533,
       3,     3,     3,     3,     3,     3,   436,   437,   436,   268,
     391,   533,   651,     3,     4,     5,     6,     7,     8,    10,
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
     277,   281,   322,   323,   324,   325,   326,   434,   435,   436,
     437,   438,   440,   652,   118,     3,     3,   581,   266,   582,
     579,   436,   437,   268,   533,     3,   266,   436,     4,    20,
      20,   437,   438,   101,     4,   140,   626,    78,   134,   201,
     261,   443,   436,   436,   436,     3,   500,   500,   436,   632,
     622,   641,   627,   639,   611,   437,   612,    49,   112,   435,
     486,   486,   438,   181,   438,     3,    28,   666,   258,    20,
     437,   438,   600,   197,   590,     4,   443,   443,   437,   104,
     105,   109,   111,   144,   145,   147,   278,   279,   443,   443,
     443,   462,   463,   461,   464,   465,   466,   443,   443,   351,
     489,   489,   489,   467,   350,     4,     5,   471,   350,     4,
       5,   475,   489,   489,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   437,   437,   437,   437,   437,
      94,    63,   148,   488,   484,     3,   520,   520,   520,   436,
     443,   443,     3,   665,   500,   543,   438,    12,   553,    12,
      59,   433,     4,   432,     3,     5,   437,     3,   629,     3,
     628,   437,   438,   586,     5,   443,     5,    51,    78,   201,
     261,   443,   436,   436,   436,   443,   650,    60,   651,   437,
       4,   443,    60,   651,   437,     3,   529,   437,   437,   437,
     438,   533,   533,   436,   436,   437,   124,   651,   651,   651,
     651,   651,   651,   217,   140,   438,   436,   277,   583,   580,
     533,   436,   437,   436,   268,   533,   437,     5,     4,   550,
       4,   437,   271,   437,   436,   164,   164,   436,   437,   629,
     500,   500,   437,   438,   437,   628,   437,    48,   172,   197,
     228,   277,   351,   621,   634,   437,     3,   495,   443,   443,
     438,   589,   113,   443,   113,   443,   436,    88,   665,   437,
     437,   437,   437,   437,   437,   489,   489,   489,   489,   489,
     489,   437,   438,   437,    63,   198,   491,   491,   491,   489,
     436,   437,   437,   489,   436,   437,   437,   489,   491,   491,
     437,   437,   437,   437,   437,   438,   437,   437,   438,   438,
     438,   413,   443,   485,   443,   493,   488,   437,   438,   437,
     437,     3,    20,   437,   438,   543,   164,   438,   164,     5,
      20,   438,     5,    43,    18,   437,   438,   437,   438,     3,
     437,   438,   437,   437,   438,   436,   436,   164,   437,   437,
     437,   437,   437,    51,    60,   651,   124,   437,   651,   124,
     437,     3,   437,   437,   533,     3,   124,   124,   124,   124,
     124,   124,    60,   118,     3,   443,    78,   582,   437,   533,
     533,   436,   437,   136,   622,   641,   443,   436,   436,   632,
     437,   437,   437,     3,   437,     5,    20,   436,     3,    63,
     415,   436,    63,   486,     3,     3,   594,   601,   436,   591,
     491,   491,   491,   491,   491,   491,   443,     3,   490,    63,
     437,   437,   437,   491,   468,   350,   350,   491,   472,   350,
     350,   491,   437,   437,   443,     5,     5,     5,     5,   486,
     277,   438,   487,   496,   493,     3,   437,   443,   543,   438,
      20,   553,    20,     4,     4,   269,   207,     3,     3,     5,
      57,    58,     5,   443,   443,    60,   651,   124,   124,   277,
     530,   437,   437,   529,    77,   131,   156,   166,   276,   651,
     217,   437,   436,   583,   437,   437,   533,   436,   437,   629,
     628,   437,   207,     5,     3,   107,   248,   204,   268,   416,
     423,   204,    20,   438,   437,     3,   101,   592,   437,   437,
     437,   437,   437,   437,   437,   438,     3,   492,   437,   489,
     436,   436,   437,   489,   436,   436,   437,   437,   437,   438,
     438,   214,   443,   140,   498,   496,   438,   543,     4,   437,
     438,     4,   437,   438,     3,   437,   437,   437,   437,   651,
     124,   436,   437,   124,    60,   443,   437,     5,   437,   437,
       3,   437,     3,     3,   436,   436,    20,   436,   443,     3,
     437,   438,    90,   258,     3,   486,   438,   491,   469,   470,
     491,   473,   474,     4,     4,   486,   230,   258,   159,   499,
     543,   438,   553,     4,   436,    57,    58,   124,     3,   531,
     532,   530,   651,   437,   437,   207,   435,   436,     3,     3,
       4,     3,    20,     3,   593,     3,   437,   489,   489,   437,
     489,   489,   437,   437,   231,   231,   500,   438,   543,   437,
     437,     3,   630,    20,   437,   438,   124,   245,     3,     3,
     630,   437,   437,   437,   437,   443,   240,   486,   491,   491,
     491,   491,   180,   180,   543,   438,   437,   438,     5,   532,
     436,   435,   436,   436,   437,   436,   229,   594,   437,   437,
     437,   437,   438,   543,   631,     3,     5,     3,   630,   630,
     631,   228,   623,   624,     5,   543,   438,    18,    97,   183,
     197,   437,   436,   437,   437,    18,     3,   437,   438,   438,
     543,    97,   269,   151,   137,   200,   235,   107,   258,   630,
     631,   631,   271,   624,   543,   438,    98,   149,    74,   192,
     210,   240,    74,   192,   210,   240,   437,   174,   437,   543,
     113,   193,   113,   193,   631,   250,   437,     4,   184,   197,
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
#line 526 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 532 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 533 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 535 "parser/evoparser.y"
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
#line 548 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 550 "parser/evoparser.y"
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
#line 578 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 586 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 594 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 600 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 607 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 608 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 609 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 610 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 611 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 612 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 613 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 614 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 615 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 616 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 617 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 618 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 619 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 620 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 621 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 622 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 623 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 624 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 625 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 627 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 632 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 633 "parser/evoparser.y"
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
#line 641 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 642 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 643 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 644 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 645 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 646 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 651 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 653 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 656 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 657 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 658 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 659 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 660 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 663 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 664 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 668 "parser/evoparser.y"
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
#line 677 "parser/evoparser.y"
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
#line 695 "parser/evoparser.y"
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
#line 704 "parser/evoparser.y"
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
#line 723 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 724 "parser/evoparser.y"
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
#line 784 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 793 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 799 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 804 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 806 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 808 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 813 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 818 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 823 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 831 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 833 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 835 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 837 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 839 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 841 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 843 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 845 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 847 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 849 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 856 "parser/evoparser.y"
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
#line 867 "parser/evoparser.y"
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
#line 877 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 881 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 881 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 882 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 882 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 883 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 884 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 891 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 892 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 899 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 900 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 910 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 914 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 915 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 916 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 917 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 918 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 919 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 920 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 921 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 925 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 926 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 927 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 928 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 929 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 930 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 932 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 933 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 934 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 935 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 936 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 937 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 938 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 939 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 940 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 941 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 942 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 943 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 945 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 946 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 947 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 948 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 949 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 950 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 951 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 952 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 953 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 954 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 955 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 956 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 957 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 958 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 959 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 960 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 962 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 963 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 964 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 965 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 966 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 967 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 970 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 971 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 972 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 973 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 974 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 975 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 976 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 977 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 978 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 979 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 980 "parser/evoparser.y"
    { emit("CALL 1 TOKEN_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_TOKEN_LENGTH, (yyvsp[(3) - (4)].exprval), "token_length"); ;}
    break;

  case 150:
#line 981 "parser/evoparser.y"
    { emit("CALL 2 EVO_CALL_EXTERNAL"); (yyval.exprval) = expr_make_func2(EXPR_PG_CALL_EXTERNAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "evo_call_external"); ;}
    break;

  case 151:
#line 982 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 983 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 153:
#line 984 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 154:
#line 985 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 155:
#line 986 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 156:
#line 987 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 157:
#line 988 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 158:
#line 989 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 159:
#line 990 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 160:
#line 991 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 161:
#line 992 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 162:
#line 993 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 163:
#line 994 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 164:
#line 995 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 165:
#line 996 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 166:
#line 997 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 167:
#line 998 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 168:
#line 999 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 169:
#line 1000 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 170:
#line 1001 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 171:
#line 1002 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 172:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 173:
#line 1004 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 174:
#line 1005 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 175:
#line 1007 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 176:
#line 1008 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 177:
#line 1009 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 178:
#line 1010 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 179:
#line 1011 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 180:
#line 1012 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 181:
#line 1013 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 182:
#line 1014 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 183:
#line 1016 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 184:
#line 1017 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 185:
#line 1018 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 186:
#line 1019 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 187:
#line 1020 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 188:
#line 1021 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 189:
#line 1022 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 190:
#line 1023 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 191:
#line 1024 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 192:
#line 1025 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 193:
#line 1026 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 194:
#line 1027 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 195:
#line 1028 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 196:
#line 1029 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 197:
#line 1030 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 198:
#line 1031 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 199:
#line 1032 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 200:
#line 1033 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 201:
#line 1034 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1035 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 203:
#line 1036 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 204:
#line 1037 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 205:
#line 1039 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 206:
#line 1040 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 207:
#line 1041 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 208:
#line 1042 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 209:
#line 1043 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 210:
#line 1045 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 211:
#line 1046 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 212:
#line 1048 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 213:
#line 1049 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 214:
#line 1050 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 215:
#line 1052 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 216:
#line 1053 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 217:
#line 1054 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 218:
#line 1055 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 219:
#line 1062 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 220:
#line 1069 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 221:
#line 1076 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1080 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1084 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 224:
#line 1088 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 225:
#line 1092 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 226:
#line 1096 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 227:
#line 1102 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 228:
#line 1103 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 229:
#line 1104 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 230:
#line 1108 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 231:
#line 1114 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 232:
#line 1120 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 233:
#line 1121 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1122 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1123 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 236:
#line 1124 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 237:
#line 1125 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 238:
#line 1126 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1127 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 240:
#line 1128 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 241:
#line 1132 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1134 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 243:
#line 1136 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 244:
#line 1138 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 245:
#line 1142 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 246:
#line 1150 "parser/evoparser.y"
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
#line 1160 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 248:
#line 1161 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 249:
#line 1164 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 250:
#line 1165 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 251:
#line 1169 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1177 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 253:
#line 1185 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 254:
#line 1193 "parser/evoparser.y"
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
#line 1207 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 256:
#line 1216 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 257:
#line 1222 "parser/evoparser.y"
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
#line 1235 "parser/evoparser.y"
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
#line 1248 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 262:
#line 1250 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 263:
#line 1253 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 264:
#line 1260 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 265:
#line 1268 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1269 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1270 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1273 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1274 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 271:
#line 1278 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1287 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 275:
#line 1289 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 278:
#line 1297 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 279:
#line 1299 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 284:
#line 1311 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 285:
#line 1317 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 286:
#line 1324 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 287:
#line 1332 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 288:
#line 1333 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 289:
#line 1334 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1335 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 292:
#line 1347 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 293:
#line 1350 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 294:
#line 1351 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 295:
#line 1352 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 296:
#line 1353 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1354 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 299:
#line 1358 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 300:
#line 1361 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1362 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 302:
#line 1365 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1366 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 304:
#line 1367 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 305:
#line 1368 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 306:
#line 1369 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 307:
#line 1370 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 308:
#line 1371 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 309:
#line 1372 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 310:
#line 1373 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 311:
#line 1376 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 312:
#line 1377 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 313:
#line 1379 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 314:
#line 1387 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 315:
#line 1392 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 316:
#line 1393 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 317:
#line 1394 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 318:
#line 1397 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 319:
#line 1398 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1407 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 323:
#line 1415 "parser/evoparser.y"
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
#line 1424 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 325:
#line 1425 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 326:
#line 1427 "parser/evoparser.y"
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
#line 1436 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 328:
#line 1441 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 329:
#line 1447 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 330:
#line 1454 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 331:
#line 1458 "parser/evoparser.y"
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
#line 1478 "parser/evoparser.y"
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
#line 1504 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 336:
#line 1506 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 337:
#line 1508 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 338:
#line 1510 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1512 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 340:
#line 1515 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 341:
#line 1516 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1517 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 343:
#line 1520 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 344:
#line 1521 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 345:
#line 1524 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 346:
#line 1525 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 347:
#line 1528 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 348:
#line 1529 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 349:
#line 1530 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1537 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 353:
#line 1538 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 354:
#line 1543 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 355:
#line 1545 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1547 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 358:
#line 1551 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1552 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 360:
#line 1555 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 361:
#line 1556 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 362:
#line 1559 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 363:
#line 1564 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 364:
#line 1574 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 365:
#line 1581 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 366:
#line 1582 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 367:
#line 1583 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 368:
#line 1584 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 369:
#line 1589 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1593 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 371:
#line 1595 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 374:
#line 1601 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 375:
#line 1606 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 376:
#line 1613 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 377:
#line 1620 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 379:
#line 1632 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 380:
#line 1633 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 381:
#line 1638 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 382:
#line 1645 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 383:
#line 1652 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1660 "parser/evoparser.y"
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
#line 1670 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 386:
#line 1678 "parser/evoparser.y"
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
#line 1688 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 388:
#line 1696 "parser/evoparser.y"
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
#line 1705 "parser/evoparser.y"
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
#line 1714 "parser/evoparser.y"
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
#line 1724 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 392:
#line 1732 "parser/evoparser.y"
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
#line 1741 "parser/evoparser.y"
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
#line 1750 "parser/evoparser.y"
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
#line 1760 "parser/evoparser.y"
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
#line 1769 "parser/evoparser.y"
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
#line 1786 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 398:
#line 1794 "parser/evoparser.y"
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
#line 1805 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 400:
#line 1807 "parser/evoparser.y"
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
#line 1820 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 402:
#line 1821 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 403:
#line 1824 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 404:
#line 1826 "parser/evoparser.y"
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
#line 1838 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 406:
#line 1848 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 407:
#line 1853 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 408:
#line 1858 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 409:
#line 1864 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1871 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 411:
#line 1878 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 412:
#line 1885 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 413:
#line 1895 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 414:
#line 1902 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1911 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 416:
#line 1918 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 417:
#line 1924 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 418:
#line 1932 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 419:
#line 1938 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 421:
#line 1946 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 422:
#line 1947 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 423:
#line 1948 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 424:
#line 1949 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 425:
#line 1965 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1966 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1967 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1976 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 429:
#line 1977 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 430:
#line 1982 "parser/evoparser.y"
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
#line 1992 "parser/evoparser.y"
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
#line 2007 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 433:
#line 2008 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 434:
#line 2013 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 435:
#line 2021 "parser/evoparser.y"
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
#line 2030 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 437:
#line 2052 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2053 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 439:
#line 2054 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 440:
#line 2059 "parser/evoparser.y"
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
#line 2076 "parser/evoparser.y"
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
#line 2097 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 443:
#line 2098 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 444:
#line 2104 "parser/evoparser.y"
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
#line 2113 "parser/evoparser.y"
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
#line 2127 "parser/evoparser.y"
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
#line 2136 "parser/evoparser.y"
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
#line 2161 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2162 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2163 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2164 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2165 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2166 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 454:
#line 2167 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 455:
#line 2172 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 456:
#line 2179 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 457:
#line 2190 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 462:
#line 2204 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 463:
#line 2206 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 464:
#line 2211 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 465:
#line 2219 "parser/evoparser.y"
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
#line 2228 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 467:
#line 2240 "parser/evoparser.y"
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
#line 2252 "parser/evoparser.y"
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
#line 2266 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 470:
#line 2267 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 471:
#line 2273 "parser/evoparser.y"
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
#line 2287 "parser/evoparser.y"
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
#line 2297 "parser/evoparser.y"
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
#line 2311 "parser/evoparser.y"
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
#line 2325 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 476:
#line 2333 "parser/evoparser.y"
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
#line 2344 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2350 "parser/evoparser.y"
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
#line 2361 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2367 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 481:
#line 2374 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 482:
#line 2380 "parser/evoparser.y"
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
#line 2401 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 484:
#line 2402 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 485:
#line 2403 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 486:
#line 2404 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 487:
#line 2409 "parser/evoparser.y"
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
#line 2418 "parser/evoparser.y"
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
#line 2435 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        DropSubscriptionProcess(0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 490:
#line 2443 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (5)].strval));
        DropSubscriptionProcess(1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 491:
#line 2454 "parser/evoparser.y"
    {
        emit("RESUME SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        ResumeSubscriptionProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 492:
#line 2465 "parser/evoparser.y"
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
#line 2484 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 494:
#line 2485 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 495:
#line 2486 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 496:
#line 2491 "parser/evoparser.y"
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
#line 2501 "parser/evoparser.y"
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
#line 2514 "parser/evoparser.y"
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
#line 2523 "parser/evoparser.y"
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
#line 2535 "parser/evoparser.y"
    {
        emit("ALTER JOB %s ENABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(1);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 501:
#line 2543 "parser/evoparser.y"
    {
        emit("ALTER JOB %s DISABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(0);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 502:
#line 2563 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 503:
#line 2564 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 504:
#line 2565 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 505:
#line 2570 "parser/evoparser.y"
    {
        if (strcasecmp((yyvsp[(3) - (4)].strval), "LOG") != 0) {
            yyerror(scanner, "expected LOG after MESSAGE in CREATE MESSAGE LOG");
            free((yyvsp[(3) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR;
        }
        emit("CREATE MESSAGE LOG %s", (yyvsp[(4) - (4)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (4)].strval));
        CreateMessageLogProcess(0);
        free((yyvsp[(3) - (4)].strval)); free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 506:
#line 2582 "parser/evoparser.y"
    {
        if (strcasecmp((yyvsp[(3) - (10)].strval), "LOG") != 0) {
            yyerror(scanner, "expected LOG after MESSAGE in CREATE MESSAGE LOG");
            free((yyvsp[(3) - (10)].strval)); free((yyvsp[(4) - (10)].strval)); free((yyvsp[(9) - (10)].strval)); YYERROR;
        }
        emit("CREATE MESSAGE LOG %s WITH ttl=%s", (yyvsp[(4) - (10)].strval), (yyvsp[(9) - (10)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (10)].strval));
        /* literal "<N> days" or bare "<N>" — first integer wins */
        char buf[64];
        snprintf(buf, sizeof(buf), "%s", (yyvsp[(9) - (10)].strval));
        int slen = (int)strlen(buf);
        if (slen >= 2 && buf[0] == '\'' && buf[slen-1] == '\'') {
            buf[slen-1] = '\0';
            SetMessageLogTtlDays(atoi(buf + 1));
        } else {
            SetMessageLogTtlDays(atoi(buf));
        }
        CreateMessageLogProcess(0);
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(4) - (10)].strval)); free((yyvsp[(9) - (10)].strval));
    ;}
    break;

  case 507:
#line 2607 "parser/evoparser.y"
    {
        if (strcasecmp((yyvsp[(3) - (4)].strval), "LOG") != 0) {
            yyerror(scanner, "expected LOG after MESSAGE in DROP MESSAGE LOG");
            free((yyvsp[(3) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR;
        }
        emit("DROP MESSAGE LOG %s", (yyvsp[(4) - (4)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (4)].strval));
        DropMessageLogProcess(0);
        free((yyvsp[(3) - (4)].strval)); free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 508:
#line 2619 "parser/evoparser.y"
    {
        if (strcasecmp((yyvsp[(3) - (6)].strval), "LOG") != 0) {
            yyerror(scanner, "expected LOG after MESSAGE in DROP MESSAGE LOG");
            free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval)); YYERROR;
        }
        emit("DROP MESSAGE LOG IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(6) - (6)].strval));
        DropMessageLogProcess(1);
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 509:
#line 2634 "parser/evoparser.y"
    {
        emit("MESSAGE APPEND INTO %s", (yyvsp[(4) - (12)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (12)].strval));
        SetMessageLogSession((yyvsp[(7) - (12)].strval));
        SetMessageLogRole((yyvsp[(9) - (12)].strval));
        SetMessageLogContent((yyvsp[(11) - (12)].strval));
        SetMessageLogMeta(NULL);
        LogAppendProcess();
        free((yyvsp[(4) - (12)].strval)); free((yyvsp[(7) - (12)].strval)); free((yyvsp[(9) - (12)].strval)); free((yyvsp[(11) - (12)].strval));
    ;}
    break;

  case 510:
#line 2646 "parser/evoparser.y"
    {
        emit("MESSAGE APPEND INTO %s WITH meta", (yyvsp[(4) - (14)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (14)].strval));
        SetMessageLogSession((yyvsp[(7) - (14)].strval));
        SetMessageLogRole((yyvsp[(9) - (14)].strval));
        SetMessageLogContent((yyvsp[(11) - (14)].strval));
        SetMessageLogMeta((yyvsp[(13) - (14)].strval));
        LogAppendProcess();
        free((yyvsp[(4) - (14)].strval)); free((yyvsp[(7) - (14)].strval)); free((yyvsp[(9) - (14)].strval)); free((yyvsp[(11) - (14)].strval)); free((yyvsp[(13) - (14)].strval));
    ;}
    break;

  case 511:
#line 2658 "parser/evoparser.y"
    {
        emit("MESSAGE READ FROM %s SESSION=%s", (yyvsp[(4) - (8)].strval), (yyvsp[(8) - (8)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (8)].strval));
        SetMessageLogSession((yyvsp[(8) - (8)].strval));
        LogReadProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 512:
#line 2667 "parser/evoparser.y"
    {
        emit("MESSAGE READ FROM %s SESSION=%s LAST %d", (yyvsp[(4) - (10)].strval), (yyvsp[(8) - (10)].strval), (yyvsp[(10) - (10)].intval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (10)].strval));
        SetMessageLogSession((yyvsp[(8) - (10)].strval));
        SetMessageLogLimit((yyvsp[(10) - (10)].intval));
        LogReadProcess();
        free((yyvsp[(4) - (10)].strval)); free((yyvsp[(8) - (10)].strval));
    ;}
    break;

  case 513:
#line 2677 "parser/evoparser.y"
    {
        emit("MESSAGE TRUNCATE FROM %s SESSION=%s", (yyvsp[(4) - (8)].strval), (yyvsp[(8) - (8)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (8)].strval));
        SetMessageLogSession((yyvsp[(8) - (8)].strval));
        LogTruncateProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 514:
#line 2686 "parser/evoparser.y"
    {
        emit("MESSAGE TRUNCATE FROM %s SESSION=%s BEFORE %d", (yyvsp[(4) - (10)].strval), (yyvsp[(8) - (10)].strval), (yyvsp[(10) - (10)].intval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (10)].strval));
        SetMessageLogSession((yyvsp[(8) - (10)].strval));
        SetMessageLogTruncSeq((long long)(yyvsp[(10) - (10)].intval));
        LogTruncateProcess();
        free((yyvsp[(4) - (10)].strval)); free((yyvsp[(8) - (10)].strval));
    ;}
    break;

  case 515:
#line 2696 "parser/evoparser.y"
    {
        /* COUNT(*) — FCOUNT is the lexer token for COUNT followed by '(' */
        emit("MESSAGE COUNT FROM %s SESSION=%s", (yyvsp[(7) - (11)].strval), (yyvsp[(11) - (11)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(7) - (11)].strval));
        SetMessageLogSession((yyvsp[(11) - (11)].strval));
        LogCountProcess();
        free((yyvsp[(7) - (11)].strval)); free((yyvsp[(11) - (11)].strval));
    ;}
    break;

  case 516:
#line 2709 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 517:
#line 2716 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 518:
#line 2725 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 519:
#line 2733 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 520:
#line 2739 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 522:
#line 2756 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 523:
#line 2760 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 524:
#line 2769 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 526:
#line 2784 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 527:
#line 2788 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 528:
#line 2793 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 529:
#line 2800 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 530:
#line 2805 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 531:
#line 2812 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 532:
#line 2816 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 533:
#line 2817 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 534:
#line 2823 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 535:
#line 2835 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 536:
#line 2844 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 537:
#line 2845 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 538:
#line 2846 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 539:
#line 2850 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 540:
#line 2851 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 541:
#line 2852 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 542:
#line 2853 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 543:
#line 2854 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 544:
#line 2855 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 547:
#line 2864 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 548:
#line 2865 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 550:
#line 2870 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 552:
#line 2875 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 553:
#line 2880 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 554:
#line 2887 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 555:
#line 2896 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 556:
#line 2902 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 557:
#line 2908 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 558:
#line 2915 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 559:
#line 2921 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 560:
#line 2928 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 561:
#line 2934 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 562:
#line 2940 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 563:
#line 2946 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 564:
#line 2952 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 565:
#line 2958 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 566:
#line 2964 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 567:
#line 2970 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 568:
#line 2976 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 569:
#line 2982 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 570:
#line 2988 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 571:
#line 2994 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 572:
#line 3000 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 573:
#line 3006 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 574:
#line 3012 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 575:
#line 3018 "parser/evoparser.y"
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

  case 576:
#line 3031 "parser/evoparser.y"
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

  case 577:
#line 3041 "parser/evoparser.y"
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

  case 578:
#line 3051 "parser/evoparser.y"
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

  case 579:
#line 3061 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s SET TTL %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableSetTtl((yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 580:
#line 3067 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s DROP TTL", (yyvsp[(3) - (5)].strval));
        AlterTableSetTtl((yyvsp[(3) - (5)].strval), NULL);
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 581:
#line 3074 "parser/evoparser.y"
    { ;}
    break;

  case 582:
#line 3075 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 583:
#line 3076 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 584:
#line 3080 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 585:
#line 3088 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 586:
#line 3094 "parser/evoparser.y"
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

  case 588:
#line 3107 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 589:
#line 3107 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 592:
#line 3115 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 593:
#line 3116 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 594:
#line 3117 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 595:
#line 3121 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 596:
#line 3122 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 597:
#line 3123 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 598:
#line 3127 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 599:
#line 3135 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 600:
#line 3144 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 601:
#line 3145 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 602:
#line 3146 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 603:
#line 3147 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 604:
#line 3148 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 608:
#line 3155 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 609:
#line 3159 "parser/evoparser.y"
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

  case 610:
#line 3169 "parser/evoparser.y"
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

  case 611:
#line 3181 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 612:
#line 3182 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 613:
#line 3182 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 614:
#line 3185 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 615:
#line 3186 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 616:
#line 3187 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 617:
#line 3188 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 618:
#line 3192 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 619:
#line 3195 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 620:
#line 3196 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 621:
#line 3197 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 622:
#line 3198 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 623:
#line 3204 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 624:
#line 3210 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 625:
#line 3215 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 626:
#line 3220 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 627:
#line 3224 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 628:
#line 3228 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 629:
#line 3230 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 632:
#line 3236 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 633:
#line 3237 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 634:
#line 3241 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 635:
#line 3242 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 636:
#line 3246 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 637:
#line 3247 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 638:
#line 3248 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 645:
#line 3263 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 646:
#line 3264 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 647:
#line 3265 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 648:
#line 3266 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 649:
#line 3267 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 650:
#line 3268 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 651:
#line 3269 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 652:
#line 3270 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 653:
#line 3275 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 654:
#line 3284 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 655:
#line 3291 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 656:
#line 3292 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 657:
#line 3293 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 658:
#line 3298 "parser/evoparser.y"
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

  case 659:
#line 3309 "parser/evoparser.y"
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

  case 660:
#line 3321 "parser/evoparser.y"
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

  case 661:
#line 3332 "parser/evoparser.y"
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

  case 662:
#line 3347 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 663:
#line 3351 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 664:
#line 3355 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 665:
#line 3356 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 666:
#line 3361 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 667:
#line 3363 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 668:
#line 3365 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 669:
#line 3367 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 670:
#line 3370 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 671:
#line 3371 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 672:
#line 3377 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 673:
#line 3382 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 674:
#line 3384 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 675:
#line 3386 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 676:
#line 3388 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 677:
#line 3390 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 678:
#line 3394 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 679:
#line 3398 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 680:
#line 3399 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 681:
#line 3404 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 682:
#line 3414 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 684:
#line 3427 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 685:
#line 3435 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 686:
#line 3443 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 688:
#line 3451 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 689:
#line 3452 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 690:
#line 3453 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 691:
#line 3454 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 692:
#line 3456 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 693:
#line 3458 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 694:
#line 3460 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 695:
#line 3465 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 696:
#line 3470 "parser/evoparser.y"
    { emit("TABLE OPT TTL_COLUMN %s", (yyvsp[(6) - (7)].strval)); SetTableTtlColumn((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 699:
#line 3478 "parser/evoparser.y"
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

  case 700:
#line 3493 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 701:
#line 3501 "parser/evoparser.y"
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

  case 702:
#line 3515 "parser/evoparser.y"
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

  case 703:
#line 3529 "parser/evoparser.y"
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

  case 704:
#line 3543 "parser/evoparser.y"
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

  case 705:
#line 3555 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 706:
#line 3556 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 707:
#line 3557 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 708:
#line 3560 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 709:
#line 3561 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 710:
#line 3564 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 711:
#line 3565 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 712:
#line 3566 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 713:
#line 3567 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 714:
#line 3568 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 715:
#line 3569 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 716:
#line 3570 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 717:
#line 3571 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 718:
#line 3573 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 719:
#line 3575 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 720:
#line 3577 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 721:
#line 3579 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 722:
#line 3581 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 723:
#line 3583 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 724:
#line 3586 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 725:
#line 3587 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 726:
#line 3590 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 727:
#line 3591 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 728:
#line 3594 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 729:
#line 3595 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 731:
#line 3599 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 732:
#line 3600 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 733:
#line 3601 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 734:
#line 3602 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 735:
#line 3603 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 736:
#line 3604 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 737:
#line 3605 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 738:
#line 3606 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 739:
#line 3607 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 740:
#line 3608 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 741:
#line 3609 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 742:
#line 3610 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 743:
#line 3611 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 744:
#line 3612 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 745:
#line 3613 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 746:
#line 3614 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 747:
#line 3615 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 748:
#line 3618 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 749:
#line 3619 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 750:
#line 3622 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 751:
#line 3624 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 752:
#line 3632 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 753:
#line 3633 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 755:
#line 3635 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 756:
#line 3636 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 757:
#line 3637 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 758:
#line 3638 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 759:
#line 3639 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 760:
#line 3640 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 761:
#line 3641 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 762:
#line 3642 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 763:
#line 3643 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 764:
#line 3650 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 765:
#line 3651 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 766:
#line 3652 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 767:
#line 3653 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 768:
#line 3654 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 769:
#line 3655 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 770:
#line 3656 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 771:
#line 3657 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 772:
#line 3658 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 773:
#line 3659 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 774:
#line 3660 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 775:
#line 3661 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 776:
#line 3662 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 777:
#line 3663 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 778:
#line 3664 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 779:
#line 3665 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 780:
#line 3666 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 781:
#line 3667 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 782:
#line 3668 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 783:
#line 3669 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 784:
#line 3670 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 785:
#line 3673 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 786:
#line 3674 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 787:
#line 3675 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 788:
#line 3678 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 789:
#line 3679 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 790:
#line 3682 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 791:
#line 3683 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 792:
#line 3684 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 794:
#line 3688 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 795:
#line 3689 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 796:
#line 3693 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 797:
#line 3694 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 798:
#line 3695 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 799:
#line 3696 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 800:
#line 3697 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 801:
#line 3698 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 802:
#line 3699 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 803:
#line 3700 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 804:
#line 3701 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 805:
#line 3702 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 806:
#line 3703 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 807:
#line 3704 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 808:
#line 3705 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 809:
#line 3706 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 810:
#line 3707 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 811:
#line 3708 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 812:
#line 3709 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 813:
#line 3710 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 814:
#line 3711 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 815:
#line 3712 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 816:
#line 3713 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 817:
#line 3714 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 818:
#line 3715 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 819:
#line 3716 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 820:
#line 3717 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 821:
#line 3718 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 822:
#line 3719 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 823:
#line 3720 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 824:
#line 3721 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 825:
#line 3722 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 826:
#line 3723 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 827:
#line 3724 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 828:
#line 3725 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 829:
#line 3726 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 830:
#line 3727 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 831:
#line 3730 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 832:
#line 3731 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 833:
#line 3735 "parser/evoparser.y"
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

  case 834:
#line 3747 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 835:
#line 3748 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 836:
#line 3749 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 837:
#line 3753 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 838:
#line 3756 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 839:
#line 3757 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 843:
#line 3761 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 844:
#line 3762 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 845:
#line 3770 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 846:
#line 3775 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 847:
#line 3781 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 848:
#line 3787 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 849:
#line 3794 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 850:
#line 3801 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 851:
#line 3807 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 852:
#line 3813 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 853:
#line 3820 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 858:
#line 3836 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 859:
#line 3837 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 860:
#line 3838 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 861:
#line 3839 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 862:
#line 3842 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 863:
#line 3843 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 864:
#line 3844 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 865:
#line 3845 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 866:
#line 3846 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 867:
#line 3847 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 868:
#line 3848 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 869:
#line 3849 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 870:
#line 3850 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 871:
#line 3851 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 880:
#line 3868 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 881:
#line 3869 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1002:
#line 3887 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1003:
#line 3894 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 1004:
#line 3899 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1005:
#line 3905 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1006:
#line 3911 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1007:
#line 3917 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1008:
#line 3928 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 1009:
#line 3933 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 1010:
#line 3939 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 1013:
#line 3950 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 1014:
#line 3951 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1015:
#line 3952 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 1016:
#line 3953 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 1017:
#line 3954 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 1018:
#line 3955 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1019:
#line 3956 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1020:
#line 3963 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 1021:
#line 3968 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 1022:
#line 3974 "parser/evoparser.y"
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

  case 1023:
#line 3989 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 1024:
#line 3990 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 1025:
#line 3993 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1026:
#line 3994 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 1027:
#line 3995 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 1028:
#line 3996 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1029:
#line 3999 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 1030:
#line 4004 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1031:
#line 4010 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1032:
#line 4019 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1033:
#line 4027 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1034:
#line 4037 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 1035:
#line 4042 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 1038:
#line 4055 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1039:
#line 4056 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1040:
#line 4057 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1041:
#line 4058 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1042:
#line 4059 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1043:
#line 4060 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1044:
#line 4061 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1045:
#line 4062 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1046:
#line 4065 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1047:
#line 4070 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1048:
#line 4076 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1049:
#line 4086 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1050:
#line 4093 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1051:
#line 4100 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1052:
#line 4108 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1054:
#line 4118 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1056:
#line 4122 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1057:
#line 4123 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12913 "parser/evoparser.tab.c"
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


#line 4126 "parser/evoparser.y"

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
