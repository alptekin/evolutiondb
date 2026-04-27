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
     SESSION = 678,
     DOCUMENT = 679,
     WRITE = 680,
     FILTER = 681
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
#define DOCUMENT 679
#define WRITE 680
#define FILTER 681




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
	#include "../db/Document.h"

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
#line 76 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 1025 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1038 "parser/evoparser.tab.c"

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
#define YYFINAL  165
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   14924

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  444
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  233
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1078
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2825

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   681

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     439,   440,    28,    26,   441,    27,   438,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   437,
       2,   443,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   442,    32,     2,     2,     2,     2,     2,
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
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436
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
    2534,  2549,  2558,  2569,  2578,  2589,  2601,  2603,  2605,  2607,
    2614,  2623,  2624,  2625,  2630,  2632,  2636,  2640,  2644,  2649,
    2656,  2669,  2684,  2691,  2700,  2709,  2720,  2727,  2729,  2733,
    2735,  2740,  2747,  2748,  2753,  2758,  2761,  2762,  2767,  2775,
    2780,  2782,  2786,  2788,  2790,  2792,  2803,  2816,  2817,  2820,
    2823,  2824,  2827,  2830,  2833,  2836,  2839,  2840,  2843,  2845,
    2849,  2850,  2855,  2856,  2862,  2868,  2876,  2887,  2898,  2916,
    2929,  2949,  2961,  2968,  2977,  2984,  2991,  2998,  3008,  3015,
    3021,  3030,  3038,  3048,  3057,  3068,  3078,  3086,  3094,  3103,
    3112,  3120,  3126,  3127,  3129,  3132,  3134,  3145,  3152,  3153,
    3154,  3160,  3161,  3166,  3167,  3171,  3176,  3179,  3180,  3186,
    3190,  3196,  3197,  3200,  3203,  3206,  3209,  3211,  3212,  3213,
    3217,  3219,  3223,  3227,  3228,  3235,  3237,  3239,  3243,  3247,
    3255,  3259,  3263,  3269,  3275,  3277,  3286,  3294,  3302,  3304,
    3305,  3313,  3314,  3318,  3320,  3324,  3326,  3328,  3330,  3332,
    3334,  3335,  3337,  3342,  3346,  3348,  3352,  3355,  3358,  3361,
    3363,  3366,  3369,  3372,  3374,  3376,  3386,  3387,  3390,  3393,
    3397,  3403,  3409,  3417,  3423,  3425,  3430,  3435,  3439,  3445,
    3449,  3455,  3456,  3459,  3461,  3467,  3475,  3483,  3493,  3505,
    3507,  3510,  3514,  3516,  3527,  3528,  3533,  3545,  3564,  3565,
    3570,  3574,  3580,  3586,  3596,  3607,  3615,  3620,  3628,  3630,
    3634,  3644,  3654,  3664,  3671,  3683,  3692,  3693,  3695,  3698,
    3700,  3704,  3710,  3718,  3723,  3728,  3734,  3740,  3745,  3752,
    3764,  3778,  3792,  3808,  3813,  3820,  3822,  3826,  3828,  3832,
    3834,  3838,  3839,  3844,  3850,  3855,  3861,  3866,  3872,  3877,
    3883,  3888,  3893,  3897,  3901,  3905,  3908,  3912,  3917,  3922,
    3924,  3928,  3929,  3934,  3935,  3939,  3942,  3946,  3950,  3954,
    3958,  3964,  3970,  3976,  3980,  3986,  3989,  3997,  4003,  4011,
    4017,  4020,  4024,  4027,  4031,  4034,  4038,  4044,  4049,  4055,
    4063,  4072,  4081,  4089,  4096,  4103,  4109,  4110,  4114,  4120,
    4121,  4123,  4124,  4127,  4130,  4131,  4136,  4140,  4143,  4147,
    4151,  4155,  4159,  4163,  4167,  4171,  4175,  4179,  4183,  4185,
    4187,  4189,  4191,  4193,  4197,  4203,  4206,  4211,  4213,  4215,
    4217,  4219,  4223,  4227,  4231,  4235,  4241,  4247,  4249,  4251,
    4253,  4258,  4262,  4264,  4268,  4272,  4273,  4275,  4277,  4279,
    4283,  4287,  4290,  4292,  4296,  4300,  4304,  4306,  4317,  4327,
    4340,  4352,  4365,  4377,  4392,  4406,  4407,  4409,  4411,  4415,
    4418,  4422,  4426,  4430,  4432,  4434,  4436,  4438,  4440,  4442,
    4444,  4446,  4448,  4450,  4451,  4454,  4459,  4465,  4471,  4477,
    4483,  4489,  4491,  4493,  4495,  4497,  4499,  4501,  4503,  4505,
    4507,  4509,  4511,  4513,  4515,  4517,  4519,  4521,  4523,  4525,
    4527,  4529,  4531,  4533,  4535,  4537,  4539,  4541,  4543,  4545,
    4547,  4549,  4551,  4553,  4555,  4557,  4559,  4561,  4563,  4565,
    4567,  4569,  4571,  4573,  4575,  4577,  4579,  4581,  4583,  4585,
    4587,  4589,  4591,  4593,  4595,  4597,  4599,  4601,  4603,  4605,
    4607,  4609,  4611,  4613,  4615,  4617,  4619,  4621,  4623,  4625,
    4627,  4629,  4631,  4633,  4635,  4637,  4639,  4641,  4643,  4645,
    4647,  4649,  4651,  4653,  4655,  4657,  4659,  4661,  4663,  4665,
    4667,  4669,  4671,  4673,  4675,  4677,  4679,  4681,  4683,  4685,
    4687,  4689,  4691,  4693,  4695,  4697,  4699,  4701,  4703,  4705,
    4707,  4709,  4711,  4713,  4715,  4717,  4719,  4721,  4723,  4725,
    4727,  4729,  4731,  4733,  4735,  4737,  4741,  4747,  4751,  4757,
    4759,  4764,  4770,  4772,  4776,  4778,  4780,  4782,  4784,  4786,
    4788,  4790,  4792,  4806,  4822,  4824,  4826,  4828,  4830,  4832,
    4834,  4836,  4840,  4846,  4851,  4856,  4858,  4864,  4865,  4868,
    4872,  4875,  4879,  4882,  4885,  4888,  4890,  4893,  4895,  4899,
    4905,  4910,  4915,  4922,  4929,  4930,  4933,  4936,  4938
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     445,     0,    -1,   484,   437,    -1,   484,   437,   445,    -1,
       3,    -1,     3,   438,     3,    -1,    89,   438,     3,    -1,
     183,   439,     3,   440,    91,   439,     4,   440,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   446,    26,   446,    -1,   446,    27,   446,    -1,   446,
      28,   446,    -1,   446,    29,   446,    -1,   446,    30,   446,
      -1,   446,    31,   446,    -1,    27,   446,    -1,   439,   446,
     440,    -1,   446,    12,   446,    -1,   446,    10,   446,    -1,
     446,    11,   446,    -1,   446,    23,   446,    -1,   446,    24,
     446,    -1,   446,    32,   446,    -1,   446,    25,   446,    -1,
     446,    34,   446,    -1,   446,    33,   446,    -1,    18,   446,
      -1,    17,   446,    -1,   446,    20,   446,    -1,    -1,   446,
      20,   439,   447,   485,   440,    -1,    -1,   446,    20,    47,
     439,   448,   485,   440,    -1,    -1,   446,    20,   232,   439,
     449,   485,   440,    -1,    -1,   446,    20,    40,   439,   450,
     485,   440,    -1,   446,    20,    47,   439,   454,   440,    -1,
     446,    20,   232,   439,   454,   440,    -1,   446,    15,   193,
      -1,   446,    15,    18,   193,    -1,   446,    15,     6,    -1,
     446,    15,    18,     6,    -1,     8,     9,   446,    -1,   446,
      19,   446,    50,   446,    -1,   446,    18,    19,   446,    50,
     446,    -1,   446,    -1,   446,   441,   451,    -1,   446,    -1,
     446,   441,   452,    -1,    -1,   263,    36,   453,   452,   442,
      -1,   263,    36,   442,    -1,   446,    36,   446,   442,    -1,
     446,    -1,   380,   439,   446,   440,    -1,   380,   439,   446,
     441,   446,   440,    -1,   381,   439,   446,   440,    -1,   382,
     439,   446,   441,   446,   440,    -1,   383,   439,   440,    -1,
     414,   439,   440,    -1,   384,   439,   446,   441,   446,   440,
      -1,   385,   439,   446,   441,   446,   440,    -1,   386,   439,
     446,   441,   446,   440,    -1,   387,   439,   446,   441,   446,
     440,    -1,   388,   439,   446,   440,    -1,   389,   439,   446,
     440,    -1,   390,   439,   446,   440,    -1,   446,    22,   446,
      -1,   446,    21,   446,    -1,   392,   439,   446,   441,   446,
     441,   446,   441,     5,   440,    -1,   393,   439,   446,   441,
     446,   441,   446,   441,     5,   441,     4,   440,    -1,   394,
     439,   446,   441,   446,   441,   446,   441,     5,   441,     4,
     440,    -1,    -1,   451,    -1,    -1,   446,    16,   439,   456,
     451,   440,    -1,    -1,   446,    18,    16,   439,   457,   451,
     440,    -1,    -1,   446,    16,   439,   458,   485,   440,    -1,
      -1,   446,    18,    16,   439,   459,   485,   440,    -1,    -1,
     281,   439,   460,   485,   440,    -1,     3,   439,   455,   440,
      -1,   322,   439,    28,   440,    -1,   322,   439,   446,   440,
      -1,   323,   439,   446,   440,    -1,   324,   439,   446,   440,
      -1,   325,   439,   446,   440,    -1,   326,   439,   446,   440,
      -1,   320,   439,   446,   440,    -1,   320,   439,   446,   321,
       4,   440,    -1,    -1,   342,   439,   440,   350,   439,   461,
     492,   494,   440,    -1,    -1,   343,   439,   440,   350,   439,
     462,   492,   494,   440,    -1,    -1,   344,   439,   440,   350,
     439,   463,   492,   494,   440,    -1,    -1,   323,   439,   446,
     440,   350,   439,   464,   492,   494,   440,    -1,    -1,   322,
     439,    28,   440,   350,   439,   465,   492,   494,   440,    -1,
      -1,   322,   439,   446,   440,   350,   439,   466,   492,   494,
     440,    -1,    -1,   324,   439,   446,   440,   350,   439,   467,
     492,   494,   440,    -1,    -1,   325,   439,   446,   440,   350,
     439,   468,   492,   494,   440,    -1,    -1,   326,   439,   446,
     440,   350,   439,   469,   492,   494,   440,    -1,    -1,   345,
     439,   446,   440,   350,   439,   470,   492,   494,   440,    -1,
      -1,   345,   439,   446,   441,     5,   440,   350,   439,   471,
     492,   494,   440,    -1,    -1,   345,   439,   446,   441,     5,
     441,     4,   440,   350,   439,   472,   492,   494,   440,    -1,
      -1,   345,   439,   446,   441,     5,   441,     5,   440,   350,
     439,   473,   492,   494,   440,    -1,    -1,   346,   439,   446,
     440,   350,   439,   474,   492,   494,   440,    -1,    -1,   346,
     439,   446,   441,     5,   440,   350,   439,   475,   492,   494,
     440,    -1,    -1,   346,   439,   446,   441,     5,   441,     4,
     440,   350,   439,   476,   492,   494,   440,    -1,    -1,   346,
     439,   446,   441,     5,   441,     5,   440,   350,   439,   477,
     492,   494,   440,    -1,    -1,   347,   439,     5,   440,   350,
     439,   478,   492,   494,   440,    -1,    -1,   348,   439,   440,
     350,   439,   479,   492,   494,   440,    -1,    -1,   349,   439,
     440,   350,   439,   480,   492,   494,   440,    -1,   282,   439,
     446,   441,   446,   441,   446,   440,    -1,   282,   439,   446,
     441,   446,   440,    -1,   282,   439,   446,   136,   446,   440,
      -1,   282,   439,   446,   136,   446,   140,   446,   440,    -1,
     283,   439,   446,   440,    -1,   283,   439,   481,   446,   136,
     446,   440,    -1,   283,   439,   481,   136,   446,   440,    -1,
     327,   439,   446,   440,    -1,   328,   439,   446,   440,    -1,
     329,   439,   446,   440,    -1,   424,   439,   446,   440,    -1,
     425,   439,   446,   441,   446,   440,    -1,   330,   439,   446,
     441,   446,   440,    -1,   331,   439,   446,   441,   446,   441,
     446,   440,    -1,   332,   439,   446,   441,   446,   440,    -1,
     294,   439,   446,   441,   446,   440,    -1,   295,   439,   446,
     441,   446,   440,    -1,   296,   439,   446,   441,   446,   441,
     446,   440,    -1,   297,   439,   446,   441,   446,   441,   446,
     440,    -1,   298,   439,   446,   440,    -1,   299,   439,   446,
     441,   446,   440,    -1,   300,   439,   446,   441,   446,   440,
      -1,   301,   439,   446,   441,   446,   440,    -1,   302,   439,
     446,   440,    -1,   303,   439,   446,   440,    -1,   304,   439,
     446,   440,    -1,   305,   439,   446,   441,   446,   440,    -1,
     305,   439,   446,   440,    -1,   306,   439,   446,   441,   446,
     440,    -1,   307,   439,   446,   440,    -1,   308,   439,   446,
     441,   446,   440,    -1,   309,   439,   440,    -1,   310,   439,
     446,   440,    -1,   311,   439,   446,   440,    -1,   312,   439,
     446,   440,    -1,   313,   439,   440,    -1,   293,   439,   440,
      -1,   286,   439,   446,   441,   446,   440,    -1,   287,   439,
     446,   440,    -1,   288,   439,   446,   440,    -1,   289,   439,
     446,   440,    -1,   290,   439,   446,   440,    -1,   291,   439,
     446,   440,    -1,   292,   439,   446,   440,    -1,   352,   439,
     446,   441,   446,   440,    -1,   353,   439,   446,   440,    -1,
     354,   439,   446,   440,    -1,   355,   439,   446,   440,    -1,
     356,   439,   446,   440,    -1,   357,   439,   446,   440,    -1,
     358,   439,   446,   440,    -1,   359,   439,   446,   440,    -1,
     360,   439,   446,   440,    -1,   361,   439,   446,   441,   446,
     441,   446,   440,    -1,   362,   439,   446,   441,   446,   441,
     446,   440,    -1,   363,   439,   446,   441,   446,   441,   446,
     440,    -1,   364,   439,   446,   441,   446,   440,    -1,   365,
     439,   446,   441,   446,   440,    -1,   366,   439,   446,   441,
     446,   441,   446,   440,    -1,   367,   439,   446,   441,   446,
     441,   446,   440,    -1,   368,   439,   446,   441,   446,   440,
      -1,   368,   439,   446,   441,   446,   441,   446,   441,   446,
     440,    -1,   369,   439,   446,   440,    -1,   369,   439,   446,
     441,   446,   440,    -1,   369,   439,   446,   441,   446,   441,
     446,   440,    -1,   370,   439,   446,   440,    -1,   372,   439,
     446,   440,    -1,   373,   439,   446,   440,    -1,   374,   439,
     446,   441,   446,   440,    -1,   374,   439,   446,   441,   446,
     441,   446,   440,    -1,   375,   439,   440,    -1,   314,   439,
     446,    51,   649,   440,    -1,   315,   439,   446,   441,   649,
     440,    -1,   316,   439,   446,   441,   446,   440,    -1,   317,
     439,   446,   441,   446,   440,    -1,   318,   439,   446,   441,
     446,   441,   446,   440,    -1,   446,    15,   319,    -1,   330,
     439,   446,   441,   446,   441,   446,   440,    -1,   330,   439,
     446,   441,   446,   441,   446,   441,   446,   440,    -1,   333,
     439,   440,    -1,   334,   439,   440,    -1,   335,   439,   440,
      -1,   336,   439,   440,    -1,   337,   439,   440,    -1,   338,
      -1,   339,    -1,   340,   439,   446,   440,    -1,   341,   439,
     446,   441,   446,   440,    -1,   178,    -1,   254,    -1,    65,
      -1,   284,   439,   446,   441,   482,   440,    -1,   285,   439,
     446,   441,   482,   440,    -1,   161,   446,   278,    -1,   161,
     446,   104,    -1,   161,   446,   105,    -1,   161,   446,   109,
      -1,   161,   446,   111,    -1,   161,   446,   279,    -1,   161,
     446,   145,    -1,   161,   446,   144,    -1,   161,   446,   147,
      -1,    77,   446,   483,   124,    -1,    77,   446,   483,   125,
     446,   124,    -1,    77,   483,   124,    -1,    77,   483,   125,
     446,   124,    -1,   275,   446,   253,   446,    -1,   483,   275,
     446,   253,   446,    -1,   446,    14,   446,    -1,   446,    18,
      14,   446,    -1,   446,    13,   446,    -1,   446,    18,    13,
     446,    -1,    72,    -1,    80,    -1,    81,    -1,   225,    -1,
     485,    -1,   241,   504,   505,    -1,   241,   504,   505,   136,
     508,   500,   486,   487,   491,   496,   499,   501,   502,    -1,
     241,   504,   505,   159,     3,   136,   508,   486,   487,   491,
     496,   499,    -1,    -1,   274,   446,    -1,    -1,   141,    63,
     488,   490,    -1,   446,   489,    -1,   488,   441,   446,   489,
      -1,    -1,    49,    -1,   112,    -1,    -1,   277,   214,    -1,
      -1,   148,   446,    -1,    -1,   351,    63,   493,    -1,     3,
      -1,   493,   441,     3,    -1,    -1,   198,    63,   495,    -1,
       3,   489,    -1,   495,   441,     3,   489,    -1,    -1,   198,
      63,   497,    -1,   498,    -1,   497,   441,   498,    -1,     3,
     489,    -1,     3,   438,     3,   489,    -1,     5,   489,    -1,
      -1,   179,   446,    -1,   179,   446,   441,   446,    -1,   179,
     446,   181,   446,    -1,    -1,   140,   412,    51,    94,   413,
       5,    -1,    -1,   140,   258,    -1,   140,   230,    -1,   140,
     258,   231,   180,    -1,   140,   230,   231,   180,    -1,    -1,
     159,   503,    -1,     3,    -1,   503,   441,     3,    -1,    -1,
     504,    40,    -1,   504,   106,    -1,   504,   110,    -1,   504,
     146,    -1,   504,   238,    -1,   504,   226,    -1,   504,   234,
      -1,   504,   233,    -1,   506,    -1,   505,   441,   506,    -1,
      28,    -1,   446,   507,    -1,    51,     3,    -1,     3,    -1,
      -1,   509,    -1,   508,   441,   509,    -1,   510,    -1,   514,
      -1,     3,   507,   521,    -1,   173,     3,   507,   521,    -1,
       3,   438,     3,   507,   521,    -1,   524,   513,     3,    -1,
     511,   513,     3,    -1,   381,   439,   446,   440,    -1,   381,
     439,   446,   440,   513,     3,    -1,   381,   439,   446,   440,
     513,     3,   439,     3,   440,    -1,   439,   508,   440,    -1,
      -1,   167,   439,   512,   485,   440,    -1,    51,    -1,    -1,
     509,   515,   163,   510,   519,    -1,   509,   238,   510,    -1,
     509,   238,   510,   197,   446,    -1,   509,   517,   516,   163,
     510,   520,    -1,   509,   190,   518,   163,   510,    -1,    -1,
     153,    -1,    76,    -1,    -1,   196,    -1,   177,    -1,   215,
      -1,   177,   516,    -1,   215,   516,    -1,    -1,    -1,   520,
      -1,   197,   446,    -1,   266,   439,   503,   440,    -1,   267,
     164,   522,   439,   523,   440,    -1,   154,   164,   522,   439,
     523,   440,    -1,   133,   164,   522,   439,   523,   440,    -1,
      -1,   140,   163,    -1,    -1,     3,    -1,   523,   441,     3,
      -1,   439,   485,   440,    -1,   525,    -1,   107,   526,   136,
       3,   486,   496,   499,   675,    -1,   526,   176,    -1,   526,
     203,    -1,   526,   154,    -1,    -1,   107,   526,   527,   136,
     508,   486,    -1,     3,   528,    -1,   527,   441,     3,   528,
      -1,    -1,   438,    28,    -1,   107,   526,   136,   527,   266,
     508,   486,    -1,   529,    -1,   108,   252,     3,   530,    -1,
     108,   252,   156,   281,     3,   530,    -1,    -1,    74,    -1,
     210,    -1,   531,    -1,    73,   155,     3,   197,     3,   439,
     536,   440,    -1,    73,   138,   155,     3,   197,     3,   439,
     536,   440,    -1,    73,   155,   156,   281,     3,   197,     3,
     439,   536,   440,    -1,    73,   261,   155,     3,   197,     3,
     439,   536,   440,    -1,    73,   261,   155,   156,   281,     3,
     197,     3,   439,   536,   440,    -1,    73,   155,     3,   197,
       3,   266,   268,   439,   536,   440,    -1,    73,   155,   156,
     281,     3,   197,     3,   266,   268,   439,   536,   440,    -1,
      73,   261,   155,     3,   197,     3,   266,   268,   439,   536,
     440,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     266,   268,   439,   536,   440,    -1,    73,   155,    85,     3,
     197,     3,   439,   536,   440,    -1,    73,   155,    85,   156,
     281,     3,   197,     3,   439,   536,   440,    -1,    73,   261,
     155,    85,     3,   197,     3,   439,   536,   440,    -1,    73,
     261,   155,    85,   156,   281,     3,   197,     3,   439,   536,
     440,    -1,    73,   155,    85,     3,   197,     3,   266,   268,
     439,   536,   440,    -1,    73,   261,   155,    85,     3,   197,
       3,   266,   268,   439,   536,   440,    -1,    73,   155,     3,
     197,     3,   266,   391,   439,     3,   532,   440,   533,    -1,
      73,   155,   156,   281,     3,   197,     3,   266,   391,   439,
       3,   532,   440,   533,    -1,    -1,     3,    -1,    -1,   277,
     439,   534,   440,    -1,   535,    -1,   534,   441,   535,    -1,
       3,    20,     5,    -1,     3,    -1,   536,   441,     3,    -1,
     537,    -1,   327,   439,     3,   440,    -1,   328,   439,     3,
     440,    -1,   329,   439,     3,   440,    -1,   330,   439,     3,
     441,     3,   440,    -1,   538,    -1,   108,   155,     3,    -1,
     539,   541,    -1,   255,   252,     3,    -1,   255,   252,     3,
     441,   540,    -1,     3,    -1,   540,   441,     3,    -1,    -1,
     541,    74,    -1,   541,   210,    -1,   541,    55,    53,    -1,
     541,    54,    53,    -1,   561,    -1,   562,    -1,   563,    -1,
     542,    -1,   544,    -1,    73,   395,   396,     3,   543,    -1,
      73,   395,   396,   156,   281,     3,   543,    -1,    -1,   277,
     439,   397,    20,     4,   440,    -1,   108,   395,   396,     3,
      -1,   108,   395,   396,     3,    74,    -1,   108,   395,   396,
     156,   281,     3,    -1,   545,    -1,   547,    -1,   548,    -1,
     395,   398,   159,     3,   271,   439,   546,   441,   546,   441,
     546,   441,   546,   441,   546,   441,   546,   441,   546,   440,
      -1,   395,   398,   401,   159,     3,   271,   439,   546,   441,
     546,   441,   546,   441,   546,   441,   546,   441,   546,   441,
     546,   440,    -1,     4,    -1,   193,    -1,   395,   399,   136,
       3,   402,     4,    -1,   395,   399,   136,     3,   402,     4,
     403,     4,    -1,   395,   400,   136,     3,   402,     4,    -1,
     395,   400,   136,     3,   402,     4,   179,     5,    -1,   549,
      -1,   554,    -1,   555,    -1,   557,    -1,   558,    -1,   559,
      -1,   560,    -1,    73,   404,   396,     3,   550,   551,    -1,
      73,   404,   396,   156,   281,     3,   550,   551,    -1,    -1,
      -1,   277,   439,   552,   440,    -1,   553,    -1,   552,   441,
     553,    -1,   405,    20,     5,    -1,   406,    20,     4,    -1,
     108,   404,   396,     3,    -1,   108,   404,   396,     3,    74,
      -1,   108,   404,   396,   156,   281,     3,    -1,   404,   398,
     159,     3,   271,   439,   556,   441,   556,   441,   556,   440,
      -1,   404,   398,   159,     3,   271,   439,   556,   441,   556,
     441,   556,   441,   556,   440,    -1,     4,    -1,   193,    -1,
     404,   399,   136,     3,   274,   411,    20,     4,    12,   164,
      20,     4,    -1,   404,   407,     3,   266,   273,     4,    -1,
     404,   407,     3,   266,   273,     4,   179,     5,    -1,   404,
     107,   136,     3,   274,   411,    20,     4,    12,   164,    20,
       4,    -1,   404,   400,   409,    16,     3,    -1,   404,   400,
     409,    16,     3,   410,     4,    -1,   168,     3,    -1,   168,
       3,   171,    -1,   170,     3,    -1,   170,    28,    -1,   169,
       3,    -1,   169,     3,   441,     4,    -1,   564,    -1,   565,
      -1,   566,    -1,   567,    -1,    73,   417,     3,   140,   418,
       3,    -1,    73,   417,   156,   281,     3,   140,   418,     3,
      -1,   108,   417,     3,    -1,   108,   417,   156,   281,     3,
      -1,   419,   417,     3,    -1,   420,   417,     3,   421,     5,
      -1,   568,    -1,   569,    -1,   570,    -1,    73,   426,     3,
     197,   428,     4,   101,     4,    -1,    73,   426,   156,   281,
       3,   197,   428,     4,   101,     4,    -1,   108,   426,     3,
      -1,   108,   426,   156,   281,     3,    -1,    37,   426,     3,
     120,    -1,    37,   426,     3,   100,    -1,   571,    -1,   572,
      -1,   573,    -1,    73,   429,     3,     3,    -1,    73,   429,
       3,     3,   277,   439,   422,    20,     4,   440,    -1,   108,
     429,     3,     3,    -1,   108,   429,     3,   156,   281,     3,
      -1,   429,   430,   159,     3,   271,   439,     4,   441,     4,
     441,     4,   440,    -1,   429,   430,   159,     3,   271,   439,
       4,   441,     4,   441,     4,   441,     4,   440,    -1,   429,
     431,   136,     3,   274,   433,    20,     4,    -1,   429,   431,
     136,     3,   274,   433,    20,     4,   432,     5,    -1,   429,
     255,   136,     3,   274,   433,    20,     4,    -1,   429,   255,
     136,     3,   274,   433,    20,     4,    59,     5,    -1,   429,
     322,   439,    28,   440,   136,     3,   274,   433,    20,     4,
      -1,   574,    -1,   579,    -1,   580,    -1,    73,   434,   396,
       3,   575,   576,    -1,    73,   434,   396,   156,   281,     3,
     575,   576,    -1,    -1,    -1,   277,   439,   577,   440,    -1,
     578,    -1,   577,   441,   578,    -1,   405,    20,     5,    -1,
     406,    20,     4,    -1,   108,   434,   396,     3,    -1,   108,
     434,   396,   156,   281,     3,    -1,   434,   435,   159,     3,
     271,   439,     4,   441,     4,   441,     4,   440,    -1,   434,
     435,   159,     3,   271,   439,     4,   441,     4,   441,     4,
     441,     4,   440,    -1,   434,   436,   136,     3,   274,     4,
      -1,   434,   436,   136,     3,   274,     4,   179,     5,    -1,
     434,   407,     3,   266,   273,     4,   179,     5,    -1,   434,
     407,     3,   266,   273,     4,   274,     4,   179,     5,    -1,
     434,   107,   136,     3,   274,     4,    -1,   581,    -1,   206,
     252,     3,    -1,   582,    -1,   584,     3,   583,   585,    -1,
     584,     3,   438,     3,   583,   585,    -1,    -1,   277,    44,
       5,    45,    -1,   277,    44,     5,    46,    -1,    41,   252,
      -1,    -1,   258,    42,   197,   586,    -1,   258,    42,   197,
     586,   277,     5,    43,    -1,   108,    42,   197,   586,    -1,
       3,    -1,   586,   441,     3,    -1,   595,    -1,   587,    -1,
     594,    -1,    73,   221,     3,   197,     3,   588,   589,   590,
     592,   593,    -1,    73,   221,     3,   197,   404,   396,     3,
     588,   589,   590,   592,   593,    -1,    -1,    51,   223,    -1,
      51,   224,    -1,    -1,   140,    40,    -1,   140,   241,    -1,
     140,   157,    -1,   140,   258,    -1,   140,   107,    -1,    -1,
     245,   591,    -1,     3,    -1,   591,   441,     3,    -1,    -1,
     266,   439,   446,   440,    -1,    -1,   277,    78,   439,   446,
     440,    -1,   108,   221,     3,   197,     3,    -1,   108,   221,
       3,   197,   404,   396,     3,    -1,    37,   252,     3,    38,
      71,     3,    78,   439,   446,   440,    -1,    37,   252,     3,
      38,    71,     3,   261,   439,   642,   440,    -1,    37,   252,
       3,    38,    71,     3,   134,   164,   439,   639,   440,   207,
       3,   439,   640,   440,   641,    -1,    37,   252,     3,    38,
      71,     3,    78,   439,   446,   440,    18,   269,    -1,    37,
     252,     3,    38,    71,     3,   134,   164,   439,   639,   440,
     207,     3,   439,   640,   440,   641,    18,   269,    -1,    37,
     252,     3,    38,    71,     3,   201,   164,   439,   638,   440,
      -1,    37,   252,     3,   108,    71,     3,    -1,    37,   252,
       3,   208,    71,     3,   245,     3,    -1,    37,   252,     3,
     120,    71,     3,    -1,    37,   252,     3,   100,    71,     3,
      -1,    37,   252,     3,   269,    71,     3,    -1,    37,   252,
       3,    38,    84,     3,   649,   644,   596,    -1,    37,   252,
       3,   108,    84,     3,    -1,    37,   252,     3,   108,     3,
      -1,    37,   252,     3,   208,    84,     3,   245,     3,    -1,
      37,   252,     3,   208,     3,   245,     3,    -1,    37,   252,
       3,   187,    84,     3,   649,   644,   596,    -1,    37,   252,
       3,   187,     3,   649,   644,   596,    -1,    37,   252,     3,
      75,    84,     3,     3,   649,   644,   596,    -1,    37,   252,
       3,    75,     3,     3,   649,   644,   596,    -1,    37,   252,
       3,   120,   217,     3,   222,    -1,    37,   252,     3,   100,
     217,     3,   222,    -1,    37,   404,   396,     3,   120,   217,
       3,   222,    -1,    37,   404,   396,     3,   100,   217,     3,
     222,    -1,    37,   252,     3,   240,   423,    20,     4,    -1,
      37,   252,     3,   108,   422,    -1,    -1,   130,    -1,    39,
       3,    -1,   597,    -1,   157,   605,   606,     3,   607,   271,
     609,   598,   600,   675,    -1,   157,   605,   606,     3,   607,
     485,    -1,    -1,    -1,   199,   164,   258,   599,   604,    -1,
      -1,   197,    88,   601,   602,    -1,    -1,   439,     3,   440,
      -1,   439,     3,   441,     3,    -1,   101,    90,    -1,    -1,
     101,   258,   603,   240,   604,    -1,     3,    20,   446,    -1,
     604,   441,     3,    20,   446,    -1,    -1,   605,   176,    -1,
     605,   103,    -1,   605,   146,    -1,   605,   154,    -1,   159,
      -1,    -1,    -1,   439,   608,   440,    -1,     3,    -1,   608,
     441,     3,    -1,   439,   611,   440,    -1,    -1,   609,   441,
     610,   439,   611,   440,    -1,   446,    -1,   113,    -1,   611,
     441,   446,    -1,   611,   441,   113,    -1,   157,   605,   606,
       3,   240,   612,   598,    -1,     3,    20,   446,    -1,     3,
      20,   113,    -1,   612,   441,     3,    20,   446,    -1,   612,
     441,     3,    20,   113,    -1,   613,    -1,   216,   605,   606,
       3,   607,   271,   609,   598,    -1,   216,   605,   606,     3,
     240,   612,   598,    -1,   216,   605,   606,     3,   607,   485,
     598,    -1,   614,    -1,    -1,    86,     3,   615,   616,   618,
     619,   620,    -1,    -1,   439,   617,   440,    -1,     3,    -1,
     617,   441,     3,    -1,   136,    -1,   245,    -1,     4,    -1,
     236,    -1,   237,    -1,    -1,   621,    -1,   277,   439,   621,
     440,    -1,   439,   621,   440,    -1,   622,    -1,   621,   441,
     622,    -1,   135,    87,    -1,   135,   249,    -1,    99,     4,
      -1,   143,    -1,   143,     6,    -1,   193,     4,    -1,   242,
       4,    -1,    87,    -1,   623,    -1,   258,   624,   508,   240,
     625,   486,   496,   499,   675,    -1,    -1,   605,   176,    -1,
     605,   154,    -1,     3,    20,   446,    -1,     3,   438,     3,
      20,   446,    -1,   625,   441,     3,    20,   446,    -1,   625,
     441,     3,   438,     3,    20,   446,    -1,   208,   252,     3,
     245,     3,    -1,   626,    -1,    73,    95,   627,     3,    -1,
      73,   227,   627,     3,    -1,   108,    95,     3,    -1,   108,
      95,   156,   281,     3,    -1,   108,   227,     3,    -1,   108,
     227,   156,   281,     3,    -1,    -1,   156,   281,    -1,   628,
      -1,    73,   102,     3,    51,   649,    -1,    73,   102,     3,
      51,   649,   113,   446,    -1,    73,   102,     3,    51,   649,
      18,   193,    -1,    73,   102,     3,    51,   649,    78,   439,
     446,   440,    -1,    73,   102,     3,    51,   649,    18,   193,
      78,   439,   446,   440,    -1,   629,    -1,   267,     3,    -1,
     267,    95,     3,    -1,   630,    -1,    73,   635,   252,   627,
       3,   439,   636,   440,   632,   631,    -1,    -1,   172,   439,
       3,   440,    -1,    73,   635,   252,   627,     3,   438,     3,
     439,   636,   440,   632,    -1,    73,   635,   252,   627,     3,
     351,    94,     3,   140,   271,   136,   439,     5,   440,   245,
     439,     5,   440,    -1,    -1,   632,    48,    20,     5,    -1,
     632,    48,     5,    -1,   632,   197,     3,   107,     3,    -1,
     632,   197,     3,   248,     3,    -1,   632,   228,    63,   268,
     439,     3,   440,   229,     5,    -1,   632,   228,    63,   204,
     439,     3,   440,   439,   633,   440,    -1,   632,   351,    63,
     204,   439,     3,   440,    -1,   632,   277,   415,   416,    -1,
     632,   277,   439,   423,    20,     4,   440,    -1,   634,    -1,
     633,   441,   634,    -1,   228,     3,   271,   174,   250,     4,
     197,   191,     5,    -1,   228,     3,   271,   174,   250,   184,
     197,   191,     5,    -1,    73,   635,   252,   627,     3,   439,
     636,   440,   651,    -1,    73,   635,   252,   627,     3,   651,
      -1,    73,   635,   252,   627,     3,   438,     3,   439,   636,
     440,   651,    -1,    73,   635,   252,   627,     3,   438,     3,
     651,    -1,    -1,   246,    -1,   247,   246,    -1,   637,    -1,
     636,   441,   637,    -1,   201,   164,   439,   638,   440,    -1,
      71,     3,   201,   164,   439,   638,   440,    -1,   164,   439,
     503,   440,    -1,   155,   439,   503,   440,    -1,   138,   155,
     439,   503,   440,    -1,   138,   164,   439,   503,   440,    -1,
      78,   439,   446,   440,    -1,    71,     3,    78,   439,   446,
     440,    -1,   134,   164,   439,   639,   440,   207,     3,   439,
     640,   440,   641,    -1,   134,   164,   439,   639,   440,   207,
       3,   438,     3,   439,   640,   440,   641,    -1,    71,     3,
     134,   164,   439,   639,   440,   207,     3,   439,   640,   440,
     641,    -1,    71,     3,   134,   164,   439,   639,   440,   207,
       3,   438,     3,   439,   640,   440,   641,    -1,   261,   439,
     642,   440,    -1,    71,     3,   261,   439,   642,   440,    -1,
       3,    -1,   638,   441,     3,    -1,     3,    -1,   639,   441,
       3,    -1,     3,    -1,   640,   441,     3,    -1,    -1,   641,
     197,   107,    74,    -1,   641,   197,   107,   240,   193,    -1,
     641,   197,   107,   210,    -1,   641,   197,   107,   240,   113,
      -1,   641,   197,   258,    74,    -1,   641,   197,   258,   240,
     193,    -1,   641,   197,   258,   210,    -1,   641,   197,   258,
     240,   113,    -1,   641,   197,   107,   192,    -1,   641,   197,
     258,   192,    -1,   641,   183,   137,    -1,   641,   183,   235,
      -1,   641,   183,   200,    -1,   641,    97,    -1,   641,    18,
      97,    -1,   641,    97,   151,    98,    -1,   641,    97,   151,
     149,    -1,     3,    -1,   642,   441,     3,    -1,    -1,   643,
       3,   649,   644,    -1,    -1,   644,    18,   193,    -1,   644,
     193,    -1,   644,   113,     4,    -1,   644,   113,     5,    -1,
     644,   113,     7,    -1,   644,   113,     6,    -1,   644,   113,
     333,   439,   440,    -1,   644,   113,   334,   439,   440,    -1,
     644,   113,   335,   439,   440,    -1,   644,   113,    72,    -1,
     644,   113,   439,   446,   440,    -1,   644,    48,    -1,   644,
      48,   439,     5,   441,     5,   440,    -1,   644,    48,   439,
       5,   440,    -1,   644,    53,   439,     5,   441,     5,   440,
      -1,   644,    53,   439,     5,   440,    -1,   644,    53,    -1,
     644,   261,   164,    -1,   644,   261,    -1,   644,   201,   164,
      -1,   644,   164,    -1,   644,    79,     4,    -1,   644,    78,
     439,   446,   440,    -1,   644,    71,     3,   261,    -1,   644,
      71,     3,   201,   164,    -1,   644,    71,     3,    78,   439,
     446,   440,    -1,   644,    56,    52,    51,   439,   446,   440,
      57,    -1,   644,    56,    52,    51,   439,   446,   440,    58,
      -1,   644,    56,    52,    51,   439,   446,   440,    -1,   644,
      51,   439,   446,   440,    57,    -1,   644,    51,   439,   446,
     440,    58,    -1,   644,    51,   439,   446,   440,    -1,    -1,
     439,     5,   440,    -1,   439,     5,   441,     5,   440,    -1,
      -1,    64,    -1,    -1,   647,   259,    -1,   647,   280,    -1,
      -1,   648,    82,   240,     4,    -1,   648,    83,     4,    -1,
      67,   645,    -1,   244,   645,   647,    -1,   239,   645,   647,
      -1,   189,   645,   647,    -1,   160,   645,   647,    -1,   152,
     645,   647,    -1,    66,   645,   647,    -1,   205,   645,   647,
      -1,   114,   645,   647,    -1,   132,   645,   647,    -1,   116,
     645,   647,    -1,   117,    -1,   257,    -1,   251,    -1,   115,
      -1,   278,    -1,    82,   645,   648,    -1,   270,   439,     5,
     440,   648,    -1,    64,   645,    -1,   272,   439,     5,   440,
      -1,   256,    -1,    61,    -1,   188,    -1,   182,    -1,   243,
     646,   648,    -1,   249,   646,   648,    -1,   185,   646,   648,
      -1,   175,   646,   648,    -1,   123,   439,   650,   440,   648,
      -1,   240,   439,   650,   440,   648,    -1,    62,    -1,   262,
      -1,   264,    -1,   273,   439,     5,   440,    -1,   649,    36,
     442,    -1,     4,    -1,   650,   441,     4,    -1,   652,   513,
     485,    -1,    -1,   154,    -1,   216,    -1,   653,    -1,   240,
     227,     3,    -1,   240,   227,   113,    -1,   240,   654,    -1,
     655,    -1,   654,   441,   655,    -1,     8,    20,   446,    -1,
       8,     9,   446,    -1,   656,    -1,    73,   202,     3,   439,
     657,   440,    51,    60,   661,   124,    -1,    73,   202,     3,
     439,   657,   440,    60,   661,   124,    -1,    73,    10,   216,
     202,     3,   439,   657,   440,    51,    60,   661,   124,    -1,
      73,    10,   216,   202,     3,   439,   657,   440,    60,   661,
     124,    -1,    73,   139,     3,   439,   657,   440,   213,   660,
      51,    60,   661,   124,    -1,    73,   139,     3,   439,   657,
     440,   213,   660,    60,   661,   124,    -1,    73,    10,   216,
     139,     3,   439,   657,   440,   213,   660,    51,    60,   661,
     124,    -1,    73,    10,   216,   139,     3,   439,   657,   440,
     213,   660,    60,   661,   124,    -1,    -1,   658,    -1,   659,
      -1,   658,   441,   659,    -1,     3,   649,    -1,    16,     3,
     649,    -1,   195,     3,   649,    -1,   150,     3,   649,    -1,
     152,    -1,   160,    -1,   270,    -1,   249,    -1,    62,    -1,
     132,    -1,   114,    -1,    66,    -1,   117,    -1,   251,    -1,
      -1,   661,   662,    -1,   661,    60,   661,   124,    -1,   661,
     156,   661,   124,   156,    -1,   661,   276,   661,   124,   276,
      -1,   661,   166,   661,   124,   166,    -1,   661,   131,   661,
     124,   131,    -1,   661,    77,   661,   124,    77,    -1,     3,
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
      -1,   277,    -1,   202,    -1,   139,    -1,   213,    -1,   439,
      -1,   440,    -1,   441,    -1,   437,    -1,   438,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    17,
      -1,   443,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,     8,    -1,   663,    -1,   108,   202,     3,
      -1,   108,   202,   156,   281,     3,    -1,   108,   139,     3,
      -1,   108,   139,   156,   281,     3,    -1,   664,    -1,    68,
       3,   439,   440,    -1,    68,     3,   439,   665,   440,    -1,
     666,    -1,   665,   441,   666,    -1,     5,    -1,     4,    -1,
       7,    -1,   193,    -1,     6,    -1,     3,    -1,     8,    -1,
     667,    -1,    73,   219,     3,   668,   669,   197,     3,   140,
     118,   217,    60,   661,   124,    -1,    73,   219,     3,   668,
     669,   197,   404,   396,     3,   140,   118,   217,    60,   661,
     124,    -1,    59,    -1,    39,    -1,   157,    -1,   258,    -1,
     107,    -1,   398,    -1,   670,    -1,   108,   219,     3,    -1,
     108,   219,   156,   281,     3,    -1,    37,   219,     3,   120,
      -1,    37,   219,     3,   100,    -1,   671,    -1,    73,   371,
     627,     3,   672,    -1,    -1,   672,   673,    -1,   376,   277,
       5,    -1,   376,     5,    -1,   377,    63,     5,    -1,   377,
       5,    -1,   378,     5,    -1,   184,     5,    -1,   379,    -1,
      18,   379,    -1,   674,    -1,   108,   371,     3,    -1,   108,
     371,   156,   281,     3,    -1,    37,   371,     3,   672,    -1,
      37,   371,     3,    55,    -1,    37,   371,     3,    55,   277,
       5,    -1,    37,   371,     3,   208,   245,     3,    -1,    -1,
     212,    28,    -1,   212,   676,    -1,     3,    -1,   676,   441,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   523,   523,   524,   529,   536,   537,   538,   552,   553,
     581,   589,   597,   603,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630,   636,   636,   645,   645,   647,   647,
     649,   649,   654,   656,   660,   661,   662,   663,   664,   667,
     668,   671,   680,   698,   707,   727,   727,   787,   796,   803,
     807,   809,   811,   816,   821,   826,   834,   836,   838,   840,
     842,   844,   846,   848,   850,   852,   859,   870,   881,   882,
     885,   885,   886,   886,   887,   887,   895,   895,   903,   903,
     914,   918,   919,   920,   921,   922,   923,   924,   925,   929,
     929,   931,   931,   933,   933,   936,   936,   938,   938,   940,
     940,   942,   942,   944,   944,   946,   946,   949,   949,   951,
     951,   953,   953,   955,   955,   957,   957,   959,   959,   961,
     961,   963,   963,   966,   966,   968,   968,   970,   970,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1040,  1041,  1043,  1044,  1045,  1046,  1047,
    1049,  1050,  1052,  1053,  1054,  1056,  1057,  1058,  1059,  1066,
    1073,  1080,  1084,  1088,  1092,  1096,  1100,  1106,  1107,  1108,
    1111,  1117,  1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,
    1132,  1135,  1137,  1139,  1141,  1145,  1153,  1164,  1165,  1168,
    1169,  1172,  1180,  1188,  1196,  1210,  1220,  1221,  1235,  1251,
    1252,  1253,  1254,  1257,  1264,  1272,  1273,  1274,  1277,  1278,
    1281,  1282,  1286,  1287,  1290,  1292,  1296,  1297,  1300,  1302,
    1306,  1307,  1310,  1311,  1314,  1320,  1327,  1336,  1337,  1338,
    1339,  1349,  1350,  1354,  1355,  1356,  1357,  1358,  1361,  1362,
    1365,  1366,  1369,  1370,  1371,  1372,  1373,  1374,  1375,  1376,
    1377,  1380,  1381,  1382,  1390,  1396,  1397,  1398,  1401,  1402,
    1405,  1406,  1410,  1418,  1428,  1429,  1430,  1439,  1444,  1450,
    1458,  1462,  1462,  1502,  1503,  1507,  1509,  1511,  1513,  1515,
    1519,  1520,  1521,  1524,  1525,  1528,  1529,  1532,  1533,  1534,
    1537,  1538,  1541,  1542,  1546,  1548,  1550,  1552,  1555,  1556,
    1559,  1560,  1563,  1567,  1577,  1585,  1586,  1587,  1588,  1592,
    1596,  1598,  1602,  1602,  1604,  1609,  1616,  1623,  1635,  1636,
    1637,  1641,  1648,  1655,  1663,  1673,  1681,  1691,  1699,  1708,
    1717,  1727,  1735,  1744,  1753,  1763,  1772,  1789,  1797,  1809,
    1810,  1824,  1825,  1828,  1829,  1841,  1851,  1856,  1861,  1867,
    1874,  1881,  1888,  1898,  1905,  1914,  1921,  1927,  1935,  1941,
    1949,  1950,  1951,  1952,  1953,  1969,  1970,  1971,  1980,  1981,
    1985,  1995,  2011,  2012,  2016,  2024,  2033,  2056,  2057,  2058,
    2062,  2079,  2101,  2102,  2107,  2116,  2130,  2139,  2165,  2166,
    2167,  2168,  2169,  2170,  2171,  2175,  2182,  2194,  2197,  2198,
    2202,  2203,  2207,  2209,  2214,  2222,  2231,  2243,  2255,  2270,
    2271,  2276,  2290,  2300,  2314,  2328,  2336,  2347,  2353,  2364,
    2370,  2377,  2383,  2405,  2406,  2407,  2408,  2412,  2421,  2438,
    2446,  2457,  2468,  2488,  2489,  2490,  2494,  2504,  2517,  2526,
    2538,  2546,  2567,  2568,  2569,  2573,  2585,  2610,  2622,  2637,
    2649,  2661,  2670,  2680,  2689,  2699,  2723,  2724,  2725,  2729,
    2736,  2746,  2749,  2750,  2754,  2755,  2759,  2761,  2766,  2774,
    2785,  2796,  2808,  2817,  2827,  2837,  2848,  2860,  2867,  2876,
    2884,  2890,  2905,  2907,  2911,  2920,  2933,  2935,  2939,  2944,
    2951,  2956,  2964,  2968,  2969,  2973,  2985,  2996,  2997,  2998,
    3002,  3003,  3004,  3005,  3006,  3007,  3010,  3012,  3016,  3017,
    3020,  3022,  3025,  3027,  3031,  3038,  3047,  3053,  3059,  3066,
    3072,  3079,  3085,  3091,  3097,  3103,  3109,  3115,  3121,  3127,
    3133,  3139,  3145,  3151,  3157,  3163,  3169,  3182,  3192,  3202,
    3212,  3218,  3226,  3227,  3228,  3231,  3239,  3245,  3258,  3259,
    3259,  3263,  3264,  3267,  3268,  3269,  3273,  3274,  3274,  3278,
    3286,  3296,  3297,  3298,  3299,  3300,  3303,  3303,  3306,  3307,
    3310,  3320,  3333,  3334,  3334,  3337,  3338,  3339,  3340,  3343,
    3347,  3348,  3349,  3350,  3356,  3359,  3365,  3370,  3376,  3380,
    3380,  3385,  3386,  3388,  3389,  3393,  3394,  3398,  3399,  3400,
    3403,  3404,  3405,  3406,  3410,  3411,  3415,  3416,  3417,  3418,
    3419,  3420,  3421,  3422,  3426,  3434,  3443,  3444,  3445,  3449,
    3460,  3472,  3483,  3498,  3503,  3507,  3508,  3512,  3514,  3516,
    3518,  3522,  3523,  3529,  3533,  3535,  3537,  3539,  3541,  3546,
    3550,  3551,  3555,  3564,  3577,  3578,  3586,  3594,  3602,  3603,
    3604,  3605,  3606,  3607,  3609,  3611,  3616,  3621,  3625,  3626,
    3629,  3644,  3651,  3666,  3679,  3694,  3707,  3708,  3709,  3712,
    3713,  3716,  3717,  3718,  3719,  3720,  3721,  3722,  3723,  3724,
    3726,  3728,  3730,  3732,  3734,  3738,  3739,  3742,  3743,  3746,
    3747,  3750,  3751,  3752,  3753,  3754,  3755,  3756,  3757,  3758,
    3759,  3760,  3761,  3762,  3763,  3764,  3765,  3766,  3767,  3770,
    3771,  3774,  3774,  3784,  3785,  3786,  3787,  3788,  3789,  3790,
    3791,  3792,  3793,  3794,  3795,  3802,  3803,  3804,  3805,  3806,
    3807,  3808,  3809,  3810,  3811,  3812,  3813,  3814,  3815,  3816,
    3817,  3818,  3819,  3820,  3821,  3822,  3825,  3826,  3827,  3830,
    3831,  3834,  3835,  3836,  3839,  3840,  3841,  3845,  3846,  3847,
    3848,  3849,  3850,  3851,  3852,  3853,  3854,  3855,  3856,  3857,
    3858,  3859,  3860,  3861,  3862,  3863,  3864,  3865,  3866,  3867,
    3868,  3869,  3870,  3871,  3872,  3873,  3874,  3875,  3876,  3877,
    3878,  3879,  3882,  3883,  3886,  3899,  3900,  3901,  3905,  3908,
    3909,  3910,  3911,  3911,  3913,  3914,  3922,  3926,  3932,  3938,
    3945,  3952,  3958,  3964,  3971,  3980,  3981,  3984,  3985,  3988,
    3989,  3990,  3991,  3994,  3995,  3996,  3997,  3998,  3999,  4000,
    4001,  4002,  4003,  4010,  4011,  4012,  4013,  4014,  4015,  4016,
    4017,  4020,  4021,  4022,  4022,  4022,  4023,  4023,  4023,  4023,
    4023,  4023,  4024,  4024,  4024,  4024,  4024,  4024,  4024,  4024,
    4024,  4025,  4025,  4025,  4025,  4025,  4025,  4025,  4026,  4026,
    4026,  4026,  4027,  4027,  4027,  4027,  4027,  4027,  4027,  4027,
    4027,  4027,  4027,  4027,  4028,  4028,  4028,  4028,  4028,  4028,
    4028,  4028,  4029,  4029,  4029,  4029,  4029,  4029,  4029,  4029,
    4030,  4030,  4030,  4030,  4030,  4030,  4030,  4030,  4030,  4031,
    4031,  4031,  4031,  4031,  4031,  4031,  4031,  4032,  4032,  4032,
    4033,  4033,  4033,  4033,  4033,  4033,  4033,  4033,  4034,  4034,
    4034,  4034,  4034,  4034,  4034,  4035,  4035,  4035,  4035,  4035,
    4035,  4035,  4036,  4036,  4036,  4036,  4037,  4037,  4037,  4037,
    4037,  4037,  4037,  4037,  4037,  4037,  4037,  4037,  4038,  4038,
    4038,  4038,  4038,  4039,  4046,  4050,  4056,  4062,  4068,  4080,
    4084,  4090,  4098,  4099,  4102,  4103,  4104,  4105,  4106,  4107,
    4108,  4115,  4119,  4125,  4141,  4142,  4145,  4146,  4147,  4148,
    4151,  4155,  4161,  4170,  4178,  4189,  4193,  4202,  4203,  4207,
    4208,  4209,  4210,  4211,  4212,  4213,  4214,  4217,  4221,  4227,
    4237,  4244,  4251,  4259,  4269,  4270,  4271,  4274,  4275
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
  "MESSAGE", "APPEND", "READ", "LAST", "SESSION", "DOCUMENT", "WRITE",
  "FILTER", "';'", "'.'", "'('", "')'", "','", "']'", "'='", "$accept",
  "stmt_list", "expr", "@1", "@2", "@3", "@4", "val_list",
  "array_val_list", "@5", "any_array_arg", "opt_val_list", "@6", "@7",
  "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "@17",
  "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26", "@27",
  "@28", "@29", "@30", "trim_ltb", "interval_exp", "case_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
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
  "notify_stmt", "create_subscription_stmt", "drop_subscription_stmt",
  "resume_subscription_stmt", "ack_subscription_stmt", "create_job_stmt",
  "drop_job_stmt", "alter_job_stmt", "create_message_log_stmt",
  "drop_message_log_stmt", "message_dml_stmt", "create_doc_store_stmt",
  "doc_reset", "opt_doc_with", "doc_with_list", "doc_with_item",
  "drop_doc_store_stmt", "doc_dml_stmt", "reclaim_table_stmt",
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
     675,   676,   677,   678,   679,   680,   681,    59,    46,    40,
      41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   444,   445,   445,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   447,   446,   448,   446,   449,   446,
     450,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   451,   451,   452,   452,   453,   446,   446,   446,   454,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   455,   455,
     456,   446,   457,   446,   458,   446,   459,   446,   460,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   461,
     446,   462,   446,   463,   446,   464,   446,   465,   446,   466,
     446,   467,   446,   468,   446,   469,   446,   470,   446,   471,
     446,   472,   446,   473,   446,   474,   446,   475,   446,   476,
     446,   477,   446,   478,   446,   479,   446,   480,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   481,   481,   481,
     446,   446,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   446,   446,   446,   446,   483,   483,   446,   446,   446,
     446,   446,   446,   446,   446,   484,   485,   485,   485,   486,
     486,   487,   487,   488,   488,   489,   489,   489,   490,   490,
     491,   491,   492,   492,   493,   493,   494,   494,   495,   495,
     496,   496,   497,   497,   498,   498,   498,   499,   499,   499,
     499,   500,   500,   501,   501,   501,   501,   501,   502,   502,
     503,   503,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   505,   505,   505,   506,   507,   507,   507,   508,   508,
     509,   509,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   512,   511,   513,   513,   514,   514,   514,   514,   514,
     515,   515,   515,   516,   516,   517,   517,   518,   518,   518,
     519,   519,   520,   520,   521,   521,   521,   521,   522,   522,
     523,   523,   524,   484,   525,   526,   526,   526,   526,   525,
     527,   527,   528,   528,   525,   484,   529,   529,   530,   530,
     530,   484,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   532,
     532,   533,   533,   534,   534,   535,   536,   536,   536,   537,
     537,   537,   537,   484,   538,   484,   539,   539,   540,   540,
     541,   541,   541,   541,   541,   484,   484,   484,   484,   484,
     542,   542,   543,   543,   544,   544,   544,   484,   484,   484,
     545,   545,   546,   546,   547,   547,   548,   548,   484,   484,
     484,   484,   484,   484,   484,   549,   549,   550,   551,   551,
     552,   552,   553,   553,   554,   554,   554,   555,   555,   556,
     556,   557,   558,   558,   559,   560,   560,   561,   561,   562,
     562,   563,   563,   484,   484,   484,   484,   564,   564,   565,
     565,   566,   567,   484,   484,   484,   568,   568,   569,   569,
     570,   570,   484,   484,   484,   571,   571,   572,   572,   573,
     573,   573,   573,   573,   573,   573,   484,   484,   484,   574,
     574,   575,   576,   576,   577,   577,   578,   578,   579,   579,
     580,   580,   580,   580,   580,   580,   580,   484,   581,   484,
     582,   582,   583,   583,   583,   584,   585,   585,   585,   585,
     586,   586,   484,   484,   484,   587,   587,   588,   588,   588,
     589,   589,   589,   589,   589,   589,   590,   590,   591,   591,
     592,   592,   593,   593,   594,   594,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   596,   596,   596,   484,   597,   597,   598,   599,
     598,   600,   600,   601,   601,   601,   602,   603,   602,   604,
     604,   605,   605,   605,   605,   605,   606,   606,   607,   607,
     608,   608,   609,   610,   609,   611,   611,   611,   611,   597,
     612,   612,   612,   612,   484,   613,   613,   613,   484,   615,
     614,   616,   616,   617,   617,   618,   618,   619,   619,   619,
     620,   620,   620,   620,   621,   621,   622,   622,   622,   622,
     622,   622,   622,   622,   484,   623,   624,   624,   624,   625,
     625,   625,   625,   484,   484,   626,   626,   484,   484,   484,
     484,   627,   627,   484,   628,   628,   628,   628,   628,   484,
     629,   629,   484,   630,   631,   631,   630,   630,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   633,   633,
     634,   634,   630,   630,   630,   630,   635,   635,   635,   636,
     636,   637,   637,   637,   637,   637,   637,   637,   637,   637,
     637,   637,   637,   637,   637,   638,   638,   639,   639,   640,
     640,   641,   641,   641,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   641,   641,   642,
     642,   643,   637,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
     644,   644,   644,   644,   644,   644,   645,   645,   645,   646,
     646,   647,   647,   647,   648,   648,   648,   649,   649,   649,
     649,   649,   649,   649,   649,   649,   649,   649,   649,   649,
     649,   649,   649,   649,   649,   649,   649,   649,   649,   649,
     649,   649,   649,   649,   649,   649,   649,   649,   649,   649,
     649,   649,   650,   650,   651,   652,   652,   652,   484,   653,
     653,   653,   654,   654,   655,   655,   484,   656,   656,   656,
     656,   656,   656,   656,   656,   657,   657,   658,   658,   659,
     659,   659,   659,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   661,   661,   661,   661,   661,   661,   661,
     661,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   484,   663,   663,   663,   663,   484,
     664,   664,   665,   665,   666,   666,   666,   666,   666,   666,
     666,   484,   667,   667,   668,   668,   669,   669,   669,   669,
     484,   670,   670,   484,   484,   484,   671,   672,   672,   673,
     673,   673,   673,   673,   673,   673,   673,   484,   674,   674,
     484,   484,   484,   484,   675,   675,   675,   676,   676
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
      14,     8,    10,     8,    10,    11,     1,     1,     1,     6,
       8,     0,     0,     4,     1,     3,     3,     3,     4,     6,
      12,    14,     6,     8,     8,    10,     6,     1,     3,     1,
       4,     6,     0,     4,     4,     2,     0,     4,     7,     4,
       1,     3,     1,     1,     1,    10,    12,     0,     2,     2,
       0,     2,     2,     2,     2,     2,     0,     2,     1,     3,
       0,     4,     0,     5,     5,     7,    10,    10,    17,    12,
      19,    11,     6,     8,     6,     6,     6,     9,     6,     5,
       8,     7,     9,     8,    10,     9,     7,     7,     8,     8,
       7,     5,     0,     1,     2,     1,    10,     6,     0,     0,
       5,     0,     4,     0,     3,     4,     2,     0,     5,     3,
       5,     0,     2,     2,     2,     2,     1,     0,     0,     3,
       1,     3,     3,     0,     6,     1,     1,     3,     3,     7,
       3,     3,     5,     5,     1,     8,     7,     7,     1,     0,
       7,     0,     3,     1,     3,     1,     1,     1,     1,     1,
       0,     1,     4,     3,     1,     3,     2,     2,     2,     1,
       2,     2,     2,     1,     1,     9,     0,     2,     2,     3,
       5,     5,     7,     5,     1,     4,     4,     3,     5,     3,
       5,     0,     2,     1,     5,     7,     7,     9,    11,     1,
       2,     3,     1,    10,     0,     4,    11,    18,     0,     4,
       3,     5,     5,     9,    10,     7,     4,     7,     1,     3,
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
       1,     1,    13,    15,     1,     1,     1,     1,     1,     1,
       1,     3,     5,     4,     4,     1,     5,     0,     2,     3,
       2,     3,     2,     2,     2,     1,     2,     1,     3,     5,
       4,     4,     6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   726,     0,   368,     0,   621,     0,
       0,     0,     0,     0,   621,     0,   302,     0,   676,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,   363,
     375,   381,   413,   420,   428,   429,   437,   438,   439,   448,
     449,   450,   451,   452,   453,   454,   425,   426,   427,   483,
     484,   485,   486,   493,   494,   495,   502,   503,   504,   516,
     517,   518,   537,   539,     0,   553,   554,   552,   605,   644,
     648,   674,   684,   693,   699,   702,   858,   866,  1024,  1029,
    1041,  1050,  1055,  1067,     0,     0,     0,     0,     0,   545,
       0,     0,   691,     0,     0,     0,     0,     0,     0,     0,
     691,   727,     0,     0,   691,     0,     0,     0,     0,     0,
       0,     0,   649,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   627,
     477,   481,   479,   480,     0,     0,   627,     0,     0,   861,
     862,     0,     0,     0,     0,   700,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,   415,   542,     0,
       0,  1057,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   728,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   691,
     651,   372,     0,   367,   365,   366,     0,   687,     0,  1027,
       0,   414,  1025,     0,  1051,     0,     0,   689,     0,   378,
       0,  1068,     0,     0,     0,   489,     0,   498,     0,     0,
       0,   623,   624,   625,   626,   622,     0,   478,     0,   538,
       0,     0,     0,     0,   859,   860,     0,     4,     9,    10,
      12,    11,     8,     0,     0,     0,   313,   303,   251,     0,
     252,   253,     0,   304,   305,   306,     0,    13,   254,   308,
     310,   309,   307,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   317,   256,   311,   416,   678,   677,   317,     0,
       0,     0,     0,     0,   318,   320,   334,   321,   334,   701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   491,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,   421,   422,     0,     0,   546,  1054,  1053,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1071,     0,
    1070,     0,   501,   500,  1039,  1035,  1034,  1038,  1036,  1040,
    1037,  1030,     0,  1032,     0,     0,   692,   685,     0,     0,
     875,     0,     0,     0,     0,   875,  1045,  1044,     0,     0,
     686,     0,     0,     0,  1057,   432,     0,   457,     0,     0,
       0,     0,     0,   505,   521,     0,     0,     0,     0,     0,
     370,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   379,   380,   376,     0,     0,   434,     0,   464,     0,
       0,     0,   507,     0,   528,     0,   628,   482,     0,   628,
     865,   864,   863,     0,    78,     0,    32,    31,    20,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   424,   423,     0,   542,     0,     0,   540,     0,     0,
       0,     0,     0,     0,   589,     0,     0,   601,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1065,  1058,     0,     0,  1031,     0,
       0,     0,   838,   847,   806,   806,   806,   806,   806,   831,
     806,   828,     0,   806,   806,   806,   809,   840,   809,   839,
     806,   806,   806,     0,   809,   806,   809,   830,   837,   829,
     848,   849,     0,     0,     0,   832,   694,     0,     0,     0,
       0,     0,     0,   876,   877,     0,     0,     0,     0,     0,
    1048,  1046,  1047,  1049,     0,   557,     0,     0,     0,     0,
       0,  1056,     0,   430,     0,   458,     0,     0,     0,     0,
       0,     0,   522,     0,   855,   653,     0,   655,   656,     0,
     373,     0,   280,     0,   259,   372,   688,  1028,  1026,  1052,
     574,     0,   690,   378,  1069,   435,     0,   465,     0,   490,
     499,     0,     0,     0,     0,     0,   683,     0,     0,     5,
      51,    79,     0,    48,     0,     0,   243,     0,     0,     6,
       0,    57,     0,     0,     0,   229,   227,   228,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,     0,    21,    23,    24,    22,   249,   247,    46,
       0,    44,   215,    80,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    33,    74,    73,    25,    26,    28,    14,
      15,    16,    17,    18,    19,    27,    30,    29,     0,   315,
     291,     0,   312,   418,   417,   317,     0,     0,     0,   322,
       0,   357,     0,   362,   330,     0,   259,   319,   343,   343,
       0,   336,     0,   344,     0,   326,   325,     0,     0,     0,
       0,     0,     0,     0,   475,     0,   492,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,     0,   585,     0,   582,   588,   584,     0,   773,
       0,     0,     0,     0,     0,   586,  1072,  1073,  1066,  1064,
    1060,     0,  1062,     0,  1063,     0,     0,  1033,   875,   875,
       0,   835,   811,   817,   814,   811,   811,     0,   811,   811,
     811,   810,   814,   814,   811,   811,   811,     0,   814,   811,
     814,     0,     0,     0,     0,     0,     0,     0,     0,   879,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   560,     0,     0,     0,     0,     0,     0,
     432,     0,   455,   457,   487,     0,     0,     0,     0,     0,
     519,   521,   856,   857,     0,     0,   771,   723,   334,   652,
       0,   657,   658,   659,   660,   260,     0,   287,   259,   369,
     371,     0,   377,   436,   466,   508,   529,     0,   608,   630,
       0,     0,   607,   608,     0,   608,     0,    90,     0,   241,
       0,     0,     0,     0,    53,     0,     0,     0,     0,   143,
       0,     0,     0,     0,     0,   177,   178,   179,   180,   181,
     182,     0,     0,     0,     0,   158,     0,     0,     0,   162,
     163,   164,   166,     0,     0,   168,     0,   171,   172,   173,
       0,     0,     0,     0,     0,     0,    97,    91,    92,    93,
      94,    95,    96,   146,   147,   148,     0,     0,     0,   225,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,   185,   186,   187,   188,   189,   190,   191,
       0,     0,     0,     0,     0,     0,     0,     0,   201,     0,
     204,   205,   206,     0,    60,     0,    62,     0,     0,     0,
       0,     0,    70,    71,    72,     0,     0,     0,   149,     0,
      47,    45,     0,     0,   250,   248,    82,     0,     0,    40,
      36,    38,     0,    58,     0,   259,     0,     0,   357,   359,
     359,   359,     0,   323,   327,     0,     0,     0,   280,   347,
     348,     0,     0,   350,     0,     0,     0,   444,   446,     0,
       0,     0,     0,   472,     0,     0,     0,     0,   536,     0,
       0,   532,   543,   544,   541,     0,     0,     0,     0,     0,
       0,   773,   773,     0,   597,   596,   602,   773,   591,     0,
       0,   600,  1059,  1061,     0,     0,     0,     0,     0,   823,
     833,   825,   827,   852,     0,   826,   822,   821,   844,   843,
     820,   824,   819,     0,   841,   818,   842,     0,     0,     0,
     696,   851,     0,   695,     0,   880,   882,   881,     0,   878,
       0,     0,   406,     0,     0,     0,     0,     0,   408,     0,
       0,     0,     0,     0,   893,     0,     0,   558,   559,     0,
     566,   557,     0,     0,     0,     0,     0,     0,   431,     0,
     458,     0,     0,     0,     0,     0,   522,     0,   855,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   729,     0,
       0,   654,   673,     0,     0,   669,     0,     0,     0,     0,
     650,   661,   664,     0,     0,  1074,   374,   575,     0,     0,
       0,   639,   629,     0,     0,   608,   646,   608,   647,    52,
     245,     0,   244,     0,     0,     0,    56,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,   101,   103,     0,     0,     0,     0,     0,
     135,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      59,     0,     0,     0,     0,     0,     0,   261,   259,   419,
     324,     0,     0,     0,     0,   332,     0,   679,     0,     0,
     287,   339,   337,     0,     0,   335,   351,     0,   442,   443,
       0,     0,     0,     0,     0,   469,   470,     0,     0,   476,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   550,
     549,   547,     0,     0,     0,     0,   602,   602,   773,     0,
       0,   785,     0,   790,     0,     0,     0,     0,     0,   603,
     794,   775,     0,   792,   593,   602,   583,   590,   599,   598,
       0,     0,   807,     0,   812,   813,     0,     0,   814,     0,
     814,   814,   836,   850,     0,     0,     0,   887,   890,   889,
     891,   888,   883,   884,   886,   892,   885,     0,     0,     0,
       0,     0,     0,     0,   382,     0,     0,     0,     0,     0,
       0,   893,     0,     0,     0,   561,   565,   563,   562,   564,
       0,   570,   560,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   460,   456,   488,   496,     0,     0,     0,
       0,     0,   524,   520,     0,   771,   725,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   708,   771,     0,   854,
     668,   666,   667,   670,   671,   672,     0,     0,     0,   265,
     265,   281,   282,   288,     0,   364,   641,   640,     0,     0,
     631,   636,   635,     0,   633,   611,   645,   242,   246,     0,
      54,     0,   141,   140,     0,   145,     0,     0,   230,   231,
     176,   154,   155,     0,     0,   159,   160,   161,   165,   167,
     169,   210,   211,   212,   213,     0,    98,   107,   109,   105,
     111,   113,   115,   151,     0,     0,   153,   226,   272,   272,
     272,   117,     0,     0,   125,     0,     0,   133,   272,   272,
     183,     0,     0,     0,   195,   196,     0,     0,   199,     0,
     202,     0,   207,     0,    61,    63,    66,    67,    68,    69,
       0,     0,     0,   150,    81,    85,     0,     0,    50,     0,
       0,    42,     0,    43,    35,     0,     0,   270,   261,   358,
       0,     0,     0,   328,     0,     0,     0,  1074,   352,     0,
     338,     0,     0,   445,   447,     0,     0,     0,   473,   513,
       0,     0,   511,   534,     0,     0,   533,     0,     0,     0,
       0,     0,   769,     0,   587,   595,   602,   774,   604,     0,
       0,     0,     0,     0,     0,   795,   776,   777,   779,   778,
     783,     0,     0,     0,     0,   793,   791,   592,     0,     0,
     893,     0,     0,   816,   845,   853,   846,   834,     0,   697,
     383,     0,   893,     0,   399,     0,     0,     0,     0,   407,
       0,   391,     0,     0,     0,     0,     0,   901,   902,   903,
     905,   904,  1023,   908,   909,   910,  1016,   907,   906,  1011,
    1012,  1013,  1014,  1015,   998,   911,   952,   943,   948,   893,
     994,   984,   955,   987,   930,   937,   934,   921,   977,   966,
     893,   974,   992,   928,   929,   999,   915,   922,   970,   986,
     991,   988,   949,   927,   996,   868,   926,   946,   939,   936,
     893,   985,   975,   916,   965,  1004,   942,   956,   938,   957,
     941,   980,   963,   924,   893,   913,   997,   919,   981,   933,
     960,   972,   932,   893,   961,   958,   959,   967,   979,   969,
     935,   940,   964,   953,   954,   971,  1003,   976,   945,   978,
     931,  1005,   962,   950,   944,   951,   947,   990,   918,   912,
     983,   989,   923,   925,   914,   995,   973,   993,   968,   982,
     920,   917,  1001,   893,  1002,  1000,  1018,  1019,  1020,  1021,
    1022,  1009,  1010,  1006,  1007,  1008,  1017,   894,     0,     0,
     568,   567,     0,   572,   566,     0,   385,     0,     0,     0,
       0,     0,     0,     0,     0,   459,     0,     0,     0,     0,
       0,   523,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   300,     0,     0,     0,     0,   704,   722,
     730,   773,     0,   663,   665,   266,   267,     0,   284,   286,
       0,     0,     0,  1077,  1075,  1076,   609,     0,   632,     0,
       0,     0,  1074,     0,     0,     0,   144,   233,   234,   235,
     236,   239,   238,   240,   232,   237,     0,     0,     0,   272,
     272,   272,   272,   272,   272,     0,     0,     0,   276,   276,
     276,   272,     0,     0,     0,   272,     0,     0,     0,   272,
     276,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,    87,    41,    37,    39,     0,     0,
       0,   280,   270,   360,     0,     0,     0,     0,   680,   681,
       0,   675,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   551,     0,   576,   747,     0,   745,
       0,   577,     0,   594,     0,     0,     0,     0,     0,     0,
     797,     0,     0,     0,     0,     0,     0,   893,     0,   808,
     815,     0,   893,     0,   387,   400,     0,   409,   410,   411,
       0,     0,     0,     0,     0,   384,   867,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   555,   570,
       0,     0,   393,     0,     0,     0,   433,   462,   463,   461,
     497,   506,   526,   527,   525,     0,   708,     0,     0,     0,
       0,   737,     0,     0,     0,   734,     0,   733,     0,   743,
       0,     0,     0,     0,     0,     0,   703,   772,   662,   265,
     283,   290,   289,     0,     0,   643,   642,   638,   637,     0,
     613,   606,     7,   142,   139,   156,   157,   214,   276,   276,
     276,   276,   276,   276,   216,     0,   152,     0,     0,     0,
       0,     0,   276,   119,     0,     0,   276,   127,     0,     0,
     276,     0,     0,   192,   193,   194,   197,   198,     0,   203,
     208,     0,     0,     0,     0,   265,   268,   271,   287,   280,
     356,     0,   355,   354,     0,     0,   353,     0,     0,     0,
       0,     0,   514,     0,     0,   512,   535,     0,   548,     0,
       0,     0,   581,     0,   770,   787,     0,   805,   789,     0,
       0,     0,   798,   796,   780,   781,   782,   784,     0,   893,
       0,   870,   698,     0,   872,   401,     0,   395,   392,     0,
     399,   895,     0,     0,     0,     0,     0,   893,     0,   569,
       0,     0,   572,   389,     0,     0,     0,   386,     0,   706,
     724,     0,     0,     0,     0,     0,   735,   736,   301,   731,
     710,     0,     0,     0,     0,     0,     0,     0,   285,  1078,
       0,   610,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,   273,     0,   100,   102,   104,     0,   272,
       0,     0,     0,   272,     0,     0,     0,   136,   138,     0,
       0,     0,     0,   292,   263,     0,     0,   262,   293,   287,
     361,   329,   682,     0,     0,     0,     0,     0,   515,     0,
       0,   579,     0,   748,   746,     0,   803,   804,     0,     0,
       0,   893,     0,   869,   871,     0,   397,   412,   388,     0,
     900,   899,   896,   898,   897,     0,     0,   571,     0,   556,
     396,   394,     0,     0,   738,     0,     0,   744,     0,   709,
       0,     0,     0,     0,     0,   716,     0,     0,     0,     0,
     634,     0,     0,   612,   108,   110,   106,   112,   114,   116,
     217,     0,   265,   277,   118,   276,   121,   123,   126,   276,
     129,   131,   134,   200,    75,     0,     0,   269,   265,     0,
     298,   258,     0,     0,   474,   467,     0,   471,   509,     0,
     530,     0,     0,   786,   788,   802,   799,     0,   874,     0,
     401,  1042,   893,     0,   390,     0,     0,   732,     0,   705,
     711,   712,     0,     0,     0,     0,   619,     0,   614,     0,
     616,   617,   275,   278,     0,     0,   272,   272,     0,   272,
     272,     0,     0,   264,   295,   294,     0,   257,     0,     0,
       0,     0,     0,     0,   800,   801,   873,     0,     0,   403,
     398,     0,   573,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   615,     0,   265,   120,   276,   276,   128,   276,
     276,    76,    77,     0,     0,   299,     0,     0,   468,   510,
     531,   749,     0,     0,   402,     0,  1043,     0,     0,     0,
       0,     0,     0,   717,   715,   620,     0,   279,     0,     0,
       0,     0,   297,   296,     0,     0,   751,     0,   405,   404,
       0,     0,     0,     0,   751,     0,     0,   618,   122,   124,
     130,   132,     0,     0,   578,   750,     0,     0,     0,     0,
     739,     0,     0,   718,   713,     0,     0,     0,   765,     0,
       0,   707,     0,   751,   751,     0,     0,   714,     0,     0,
       0,   766,   580,     0,   762,   764,   763,     0,     0,     0,
     741,   740,     0,   719,     0,     0,   767,   768,   752,   760,
     754,     0,   756,   761,   758,     0,   751,     0,   440,     0,
     755,   753,   759,   757,   742,     0,   441,     0,     0,     0,
       0,     0,     0,   720,   721
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,   860,  1322,  1581,  1583,  1579,   861,  1205,   872,
    1582,   862,  1312,  1575,  1313,  1576,   873,  1818,  1819,  1820,
    2171,  2169,  2170,  2172,  2173,  2174,  2181,  2499,  2656,  2657,
    2185,  2503,  2659,  2660,  2189,  1828,  1829,   879,  1513,   531,
      27,    28,   832,  1867,  2386,  2138,  2517,  2211,  2178,  2493,
    2359,  2593,  1177,  1761,  1762,  1485,  1325,  2610,  2667,  2124,
     141,   383,   384,   668,   393,   394,   395,   396,  1030,   691,
     397,   688,  1044,   689,  1040,  1605,  1606,  1029,  1592,  2214,
     398,    29,   113,   206,   490,    30,   503,    31,  2266,  2546,
    2678,  2679,  1427,  1428,    32,    33,  1024,   167,    34,   813,
      35,    36,  1610,    37,    38,    39,   815,  1152,  1722,  1723,
      40,    41,  1617,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,   822,  1160,  1731,  1732,    60,    61,    62,    63,   426,
      64,   717,  1630,    65,  1143,  1440,  1711,  2091,  2093,  2288,
      66,    67,  1654,    68,  1491,  2334,  2152,  2484,  2583,  2693,
    2481,   129,   236,   855,  1190,  1495,  2150,  1773,  1188,    69,
      70,   200,   488,   826,   829,  1174,  1480,  1481,  1482,    71,
     144,  1036,    72,   177,    73,    74,    75,  2326,  2128,  2762,
    2763,   111,  1467,  1468,  2240,  2238,  2712,  2754,  1903,  1469,
    1376,  1101,  1112,  1389,  1390,   786,  1394,  1167,  1168,    76,
     139,   140,    77,   792,   793,   794,  1687,  1702,  2087,    78,
      79,   452,   453,    80,   468,   804,    81,    82,   440,   745,
      83,  1765,  2145
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2138
static const yytype_int16 yypact[] =
{
   13941,   315,  -154,    90, 13874,   149, -2138,  2149, -2138,   183,
     274,   350,  -125,    66, -2138,    54, -2138,   317,   686,   113,
     370,   -68,   -93,   -70,   284,   -73,   364,   -63, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138,   616, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138,   635,   660,   663,   280,   679, -2138,
     267,   550,   554,   775,   629,   787,   555,   789,   798,   826,
     554, -2138,   581,   700,   554,   447,   450,   112,   202,   847,
     469,   626, -2138,    93,   203,   204,   864,   216,   217,   877,
     419,   546,   557,   495,   517,   562,   565,   915,   527,   688,
     758,   485, -2138, -2138,   928,   932,   688,   669,   118,   511,
   -2138,  1221,   967,   690,   148, -2138,   988,  -115,   860,   862,
     899,   873,   917,   612,  1023,  1055,  1062,   948,   652,   909,
     952,   958,  1097,   949,   978, -2138, 13941,   161,  -177,   577,
      34,   167,  1115,   605,    45,    -7,   842,  1126,  1086,  1148,
     724,   956,   568,   886,   742,   622,   995,  1194, -2138,   561,
    1215,   573,   580,  1092,   971,  1060,  1008,  1256,   588,   554,
     870,   875,  1319, -2138, -2138, -2138,  -100, -2138,  1049, -2138,
    1061, -2138, -2138,  1065, -2138,  1067,  1158, -2138,  1073,   463,
    1075, -2138,  1076,   589,   590, -2138,  1077, -2138,  1078,   592,
     596, -2138, -2138, -2138, -2138, -2138,  1357, -2138,  1359, -2138,
    1116,  1362, 10858, 10858, -2138, -2138,  1358,   342, -2138, -2138,
   -2138, -2138,  1360, 10858, 10858, 10858, -2138, -2138, -2138,  8114,
   -2138, -2138,   930, -2138, -2138, -2138,   933, -2138, -2138, -2138,
   -2138, -2138, -2138,  1337,   945,   963,   966,   993,   996,   998,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1009,  1010,  1012,
    1013,  1014,  1017,  1018,  1019,  1021,  1022,  1039,  1041,  1042,
    1043,  1044,  1046,  1047,  1048,  1050,  1051,  1053,  1054,  1056,
    1057,  1058,  1059,  1101,  1103,  1132,  1133,  1153,  1159,  1160,
    1161,  1173,  1191,  1193,  1195,  1197,  1198,  1199,  1200, -2138,
   -2138,  1202,  1203,  1205,  1208,  1209,  1210,  1211,  1212,  1216,
    1217,  1218,  1219,  1220,  1222,  1223,  1224,  1226,  1227,  1228,
    1229,  1230,  1231,  1232,  1233,  1248,  1250,  1258,  1260,  1262,
    1264,  1265,  1266,  1267,  1268,  1269,  1273,  1274,  1275,  1276,
    1277,  1278,  1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,
    1288, 10858, 14735,  -101, -2138,   965,   706,   765,    43,  1289,
    1371,  1290,   146,  -181,   494, -2138,  1383, -2138,  1383, -2138,
    1442,  1291,  1485,  1491,  1496,  1497,  1498,  1617,  1388, -2138,
    1272,  1728,  1702,  1729,  1732,  1733,  1478,  1759,  1761, -2138,
    1712,  1713, -2138, -2138,  1723,  1765,   -22, -2138, -2138,   322,
     114,   491,    26,   503,   125,   583,  1347,  1700,  1495,  1529,
      13,   640, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138,   397, -2138,  1778,  1782, -2138, -2138, 14396,  1589,
      67,  1784,  1594,  1512,  1791,    67, -2138, -2138,   -62,    22,
   -2138,  1598,   599,  1515, -2138,  1526,  1523, -2138,  1524,  1391,
    1803,  1382,  1808,  1536, -2138,  1533,  1812,  1813,   -13,  1789,
   -2138,  -133,  -193,   148,  1815,  1816,  1817,  1818,  1821,    53,
    1822, -2138, -2138, -2138,  1824,  1825,  1755,  1549,  1762,  1558,
    1840,  1841, -2138,  1566, -2138,  1570,  -175, -2138,  1849,  -169,
   14888, 14888, -2138,  1850, 10858, 10858,  1183,  1183,  1819, 10858,
   14366,   479,  1853,  1854,  1416, -2138, 10858,  7329, 10858, 10858,
   10858, 10858, 10858, 10858, 10858, 10858, 10858,  1419, 10858, 10858,
   10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858,
   10858, 10858, 10858,  1420, 10858, 10858, 10858,  1421, 10858, 10858,
   10858, 10858, 10858, 10858,  8506, 10858, 10858, 10858, 10858, 10858,
   10858, 10858, 10858, 10858, 10858,  1422,  1423,  1424,  1425,  1426,
   10858, 10858,  1427,  1429,  1430, 10858, 10858,  1866,  1432,  1434,
   10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858,
   10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858,
   10858, 10858,  1435, 10858, 10858, 10858,  1436, 10858, 10858, 10858,
   10858, 10858, 10858, 10858, 10858, 10858, 10858,  1437, 10858, 10858,
    1254, -2138, 10858, 10858, 10858, 10858, 10858,    37,  1444,   769,
   10858,  7722, 10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858,
   10858, 10858, 10858, 10858, 10858, 10858, 10858,  1878, -2138,   148,
    1879, 10858,  1881,  1884,   480, -2138,   574, 10858,  1452,   408,
    1890,   148, -2138, -2138, -2138,   438, -2138,   148,  1737,  1699,
   -2138,  1899,  1902,  1636,  1907,  1513,  1514,  1643,  1647,  1645,
    1918,  1650,  1921,  1659,  1499,  1669,  1667,  1668,  1670,  1673,
    1671, -2138, -2138,  1941,  1675,  1905,  1906, -2138,  1947,  1951,
    1952,  1953,  1954,  1955, -2138,  1956,  1957, -2138,  1958,  1960,
   14396,  1968,  1730,  1969,  1973,  1964,  1974,  1975,  1983,  1599,
    1988,    56,   124,  1989, -2138, -2138,  1771,  1779, -2138,   132,
    1556,  1559, -2138, -2138,  1560,  1560,  1560,  1560,  1560, -2138,
    1560, -2138,  1563,  1560,  1560,  1560,  1933, -2138,  1933, -2138,
    1560,  1560,  1560,  1564,  1933,  1560,  1933, -2138, -2138, -2138,
   -2138, -2138,  1565,  1568,  1571, -2138,   717,  2002, 14396,  2006,
    2011,  2012,  1576,  1577, -2138,  -159,  2014,  2016,  1823,  1582,
   -2138, -2138, -2138, -2138,  1829,  1976,  1632,  2026,  1834,  1754,
    2033,    13,  1600, -2138,  2034,  1763,  2038,  2041,  1910,  2047,
    1848,  1613,  1777,  2052,  -112, -2138,   418, -2138, -2138,    63,
   -2138, 10858,  1858,   148,  -184,   875, -2138, -2138, -2138, -2138,
   -2138,  1661, -2138,   463, -2138, -2138,  2055, -2138,  2056, -2138,
   -2138,  2058,  2059,  2060,  2061,   105, -2138,  2060,   391, -2138,
    4614, -2138,  1620, 14888, 14393,   486, -2138, 10858, 10858, -2138,
    1625, -2138, 10858,  1826,   792, -2138, -2138, -2138, 10682,  8898,
    4960,  5306,  5652, 10930, 10962, 11034, 11074, 11280, 11311, -2138,
    5998,  6344,  6690,  7036, 11353,  7427,  7460,  7505, 11385, 11412,
   11439,   874,  7545, 11466,  7794, -2138, 11497, 11524, 11551, -2138,
   14780,  7821,  7851,  7906,  7945,  1397,  1626, 11578, 11605, 11632,
   11659, 11703, 11734, 11776, 11808,  8144,  8186,  8218, -2138, -2138,
   -2138, -2138, -2138, 11835,  8245,  1724,  1742,  1756,   935,  1367,
    1684,  1776,  1780,  8298, 11862, 11889, 11920, 11947, 11974, 12001,
   12028, 12055,  8330,  8536,  8578,  8610,  8642,  8690,  8722,  8928,
    1727, 12082, 12126, 12157,  8970, -2138,  2089, 12199,  9034, -2138,
    9082,  9114,  9320,  9362, 12231, 12258, 12285,  9394,  9421,  9474,
   -2138, 12312,  9506, -2138,  7759, 14041,  2057, 14472, 14472, -2138,
      82, -2138, -2138,  1886, 10858, 10858,  1689, 10858, 14822,  1690,
    1692,  1693, 10858,  1595,  1652,  1652,   951,  1011,  1157,  1142,
    1142,   888,   888,   888,   888,   763,  1819,  1819,   147, -2138,
    -103,  1997, -2138, -2138,  1694,   574,  1970,  1972,  1999, -2138,
    1826,   480, 12343, -2138, -2138,     6,  -130,   494,  1699,  1699,
    2013,  1940,   148, -2138,  2031, -2138, -2138,  1726,  1925,  2193,
    2195,  1790,  1764,  1793,  1792,  2196, -2138,  1773,  2069,  1768,
    1775,  2212,  2213,  1781,  2214,   824,   -22,  2022,  2024,    11,
   14396, 14396,  2219, -2138,  2001, -2138, -2138, -2138,  2003,  2188,
   14396,  2223,  1982,  1984,  2224, -2138, -2138, -2138, -2138, -2138,
   -2138,  2225, -2138,  2226, -2138,  2229,  2230, -2138,    67,    67,
    2231, -2138, -2138, -2138, -2138, -2138, -2138,  2234, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138,  2234, -2138, -2138,
   -2138,  2235,  2236,  2237,  2042,  1797,  1795, 10858,  1804,  2188,
   14396, 14396, 14396,  2032,    67,   305,    21,  -135,  2049,  2244,
     644,   127,   648,  2108,  2246,  -119,  2247,  2248,  2062,  1855,
    1526,  1814, -2138, -2138, -2138,  1837,  2155,  1830,  1835,  1827,
   -2138, -2138, -2138, -2138,  2166,  2258,   121, -2138,  1383, -2138,
    2259, -2138, -2138, -2138,   102, 14888,  2200,  2085,  -184, -2138,
   -2138,  2262, -2138, -2138, -2138, -2138, -2138,  2255,  -152, -2138,
     435,  1828, -2138,  -152,  1828,  2078, 10858, -2138, 10858, -2138,
   10858, 14665, 14420,  2177,  9712,  1839,  1845, 10858, 10858, -2138,
   10858, 14584,  2126,  2126, 10858, -2138, -2138, -2138, -2138, -2138,
   -2138, 10858, 10858, 10858, 10858, -2138, 10858, 10858, 10858, -2138,
   -2138, -2138, -2138, 10858, 10858, -2138, 10858, -2138, -2138, -2138,
   14396, 14396, 10858, 10858, 10858,  2285, -2138,  1948,  1949,  1950,
    1959,  1961,  1962, -2138, -2138, -2138, 10858, 10858, 10858, -2138,
   10858,  1851,  1852,  1862,  1963,  2292,  1965,  2297,  1971,  1864,
    1868, 10858, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   10858, 10858, 10858, 10858, 10858, 10858, 10858, 10858, -2138, 10858,
   -2138, -2138, -2138, 10858, -2138, 10858, -2138, 10858, 10858, 10858,
   10858, 10858, -2138, -2138, -2138, 10858, 10858, 10858, -2138, 10858,
   -2138, -2138, 10858,  1826, 14472, 14472,  2064, 14855, 10858, -2138,
   10858, 10858,  1826, -2138,  1896,  2036,   148,  2311,   480,  2178,
    2178,  2178,  1882, -2138,   593, 10858,  2316,  2320,  1858, -2138,
   -2138,   148, 10858,   -75,   148,    72,  1885,  1927,  2152,  2313,
      73,  2317,  2334,  2162,  2325,  2343,  2345,  2327, -2138,    35,
    2346,  2173, -2138, -2138, -2138,  2350,  2350,  1915,  2191,  2192,
    1919,  2188,  2188, 14396, -2138, -2138,   570,  2188, -2138,  2354,
    2356, -2138, -2138, -2138,  2138,  2139,  1923,  1924,   475,   376,
     851,   376,   376, -2138,   502,   376,   376,   376,   851,   851,
     376,   376,   376,   532,   851,   376,   851,  1926,  1929,  1931,
    2287, -2138, 10858, 14888,    21,  2188,  2188,  2188,   528, -2138,
    1938,  1939, -2138,  1942,  1981,  1994,  1995,   548, -2138,  2118,
      21,  2384,  -110,  2329, -2138,  2254,  2000, -2138, -2138,   498,
    2154,  1976,  2136,    21,   -84,  2215,  2406,  2390, -2138,   598,
    1763,  2408,  2409,  2411,  2407,   600,  1777,  2432,   -97,  2433,
    2005,  2274,   595,  2007,  2009,  2275,  2010,   579, -2138,  2437,
    1826, -2138, -2138,  2438,    -8,  2435,  2446,  2447,  2015,   544,
   -2138,  2025, -2138,   619, 10858,  2240, -2138, -2138,  9290,  2289,
    2452, -2138, -2138,  2454,  9682,  -139, -2138,  -139, -2138, -2138,
   14888, 14703, -2138, 10858,  2030, 10858, -2138, -2138, 10888,  2128,
   12370, 10858, 10858,  2040,  2048, 12397, 12424, 12451,  9754,  9786,
   12478, 12505, 12549, 12580, 12622, 12654,    18,    88, 12681, 12708,
    9818,  2050,  2035,  2039,  2043,  2053,  2054,  2063,  2159,  9866,
   12735, 12766, -2138, -2138, -2138,  2065,   608,  2070,   610,  2071,
   -2138, -2138, 12793,  9898, 10104, 10146, 12820, 12847, 10178, 10210,
    2885,  3231,  3577, 12874, 12901, 12928, 12972, 13003, 13045, 10258,
   10290, 10496, 13077,  2051,  2068, 10858,  1826, 10858,  1443,  1826,
   14888,  1826,  2072,  1826,  2073,  2074,  2414,  2330,  -184, -2138,
   -2138,  2307,  2077,  2082,  2083, -2138,  2469, 14888,  2467,     7,
    2085, -2138, 14888, 10858,  2084, -2138, -2138,   -75, -2138, -2138,
    2090,    72,  2485,  2489,  2491, -2138, -2138,  2092,  2492, -2138,
    2493,  2495,  2227,  2093,  2496,  2498,  2507,  2094,  2520, -2138,
    2097,  -131, 10858,  2100,  2106,  2494,   570,   570,  2188,  2353,
    2545,  2110,  2112,  2113,  2502,  2552,  2117,  2553,   219, -2138,
   -2138, -2138,  2394,  2395, -2138,   570, -2138, -2138, -2138, -2138,
    2347,   713, -2138,  2556, -2138, -2138,  2322,  2559, -2138,  2560,
   -2138, -2138, -2138, -2138,  2131, 13104,   615, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138,   714,    21,  2562,
    2564,  2568,  2569,  2570, -2138,  2571,  2137,   620,  2140,   352,
      21, -2138,  1772,  2459,  2577, -2138, -2138, -2138, -2138, -2138,
    2578,  2318,  2108,  2143,   623,  2319,    21,  2582,   -82,  2589,
    2566,  2574,   630, -2138, -2138, -2138, -2138,  2497,  2591,  2576,
    2581,   634, -2138, -2138,  2457,   121, -2138,   122, 10858,  2163,
    2164,  2165,  2602,  2602,  2167,  2494,    57,   121, 14396, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138,   544,   636,   544,    14,
     106,  2168, -2138,  3924,   611, -2138, -2138, 14888,  2349,  2588,
   -2138, -2138, 14888,   638, -2138,  2413, -2138, -2138, 14888,  2607,
   -2138, 10858, -2138, -2138, 10858, -2138, 13131, 14205, -2138, -2138,
   -2138, -2138, -2138, 10858, 10858, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, 10858, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, 10858, 10858, -2138, -2138,  2261,  2261,
    2261, -2138,  2263,  1006, -2138,  2264,  1024, -2138,  2261,  2261,
   -2138, 10858, 10858, 10858, -2138, -2138, 10858, 10858, -2138, 10858,
   -2138, 10858, -2138, 10858, -2138, -2138, -2138, -2138, -2138, -2138,
   10858, 10858, 10858, -2138, -2138, -2138,  2181,  2183,  1443,  2185,
    2186, -2138,  2187, -2138, -2138,  2537,  2572,  2486,  2330, -2138,
    2630,  2630,  2630,  2197, 10858, 10858,  2634,  2240, 14888,  2602,
   -2138,    72,  2202, -2138, -2138,  2632,    73,  2633, -2138,  2587,
    2216,  2643,  2218, -2138,  2472,  2644, -2138,  2650,  2649, 13158,
    2652,  2653, -2138,   649, -2138, -2138,   570, -2138, -2138,  2654,
   10858,  2655,  2606,    27, 10858, -2138, -2138, -2138, -2138, -2138,
   -2138,  2222,  2228,  2238, 10858, -2138, -2138, -2138,   528,  2598,
   -2138,  2239,  2660, -2138,   851, -2138,   851,   851, 10858, -2138,
   -2138,  2605, -2138,   656,  2665,  2243,  2251,  2252,  2256, -2138,
      21, -2138,    21,  2245,  2257,   658,  2266, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,  2453,  2529,
   -2138,  2260,  2271,  2399,  2154,    21, -2138,  2272,   664,  2273,
    2419,    21,  2253,  2690,  2694, -2138,   598,  2695,  2276,  2697,
    2696, -2138,   600,  2443,   666,  2278,  2551,  2557,  2283, 13189,
    2652,  2602,  2602, -2138,   670,   672,  2653,   680,    16, -2138,
   -2138,  2188,   687, -2138, -2138, -2138, -2138,  2720, -2138, -2138,
     619, 10858, 10858, -2138, -2138,  2286, -2138, 10074, -2138, 10466,
    2293,  2636,  2240,  2295, 13216, 13243, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, 13270, 13297, 13324,  2261,
    2261,  2261,  2261,  2261,  2261,  4269, 13351,  2670,  2542,  2542,
    2542,  2261,  2303,  2305,  2310,  2261,  2308,  2315,  2321,  2261,
    2542,  2542, 13395, 13426, 13468, 13500, 13527, 10538, 13554, 13581,
   10570, 10602, 10650, -2138, -2138, -2138, -2138, -2138,  2344, 10858,
   10858,  1858,  2486, -2138,   691,   693,   695,  2753, 14888, 14888,
    2738, -2138,   709,  2332,    72,  2595,  2338,  2599,  2761,  2760,
    2340,  2777,  2778,  2351, -2138,  2741,  2767, -2138,   721, -2138,
     755, -2138,  2783, -2138,   759, 13612,   780,  2348,  2355,  2624,
   -2138, 13639,  2357,  2358,  2359, 13666,   716, -2138,  2612, -2138,
   -2138, 13693, -2138,  2958, -2138, -2138,  2360, -2138, -2138, -2138,
    2787,   782,   790,    21,  2792, -2138, -2138,  3304,  3650,  3996,
    4342,  4688,  5034,  2736,  2683,  2800, 10858,  2733, -2138,  2318,
     794,    21, -2138,    21,  2373,   796, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138,  2679,    57, 10858,  2377,  2378,
    2494, -2138,   800,   802,   804, -2138,  2815, -2138,   806, -2138,
     360,  2381,  2821,  2763,   255,  2765, -2138,   861, -2138,   106,
   -2138, 14888, 14888,  2830,  2831, -2138, 14888, -2138, 14888,  9682,
    2396, -2138, -2138, -2138, -2138, -2138, -2138, -2138,  2542,  2542,
    2542,  2542,  2542,  2542, -2138, 10858, -2138,  2833,  2774,  2398,
    2400,  2401,  2542, -2138,  2499,  2500,  2542, -2138,  2504,  2505,
    2542,  2402,  2403, -2138, -2138, -2138, -2138, -2138, 10858, -2138,
   -2138,  2834,  2839,  2840,  2841, 14511,  -129, 14888,  2085,  1858,
   -2138,  2844, -2138, -2138,  2416, 10858, -2138,    72,  2417,  2828,
      73,  2837, -2138,  2855,  2856, -2138, -2138,  2858, -2138,  2597,
    2661,  2864, -2138,  2866, -2138, -2138,  2870,  1068, -2138,  2871,
   10858, 10858, -2138, -2138, -2138, -2138, -2138, -2138,  2811, -2138,
    5380, -2138, -2138,  5726, -2138,  2600,  2439, -2138, -2138,   810,
    2665, -2138,  2803,  2750,  2728,  2719,  2614, -2138,  2674, -2138,
   13720,  2455,  2399, -2138,   814,   822,    21, -2138,  2463,    30,
   -2138, 13747,  2652,  2653,   854,  2685, -2138, -2138, -2138, -2138,
   -2138,  2915,  2919,    97,   404,  2508,  2503,  2721, -2138, -2138,
    2903,  2487,   856,  2924,  2829,  2501,  2506,  2509,  2510,  2511,
    2512, 13774, -2138,  2488,  2928, -2138, -2138, -2138,  2513,  2261,
    2515,  2516,  2517,  2261,  2519,  2521,  2527, -2138, -2138, 13818,
    2531,  2518,  2528, -2138, -2138,  2718, 10858, -2138,  2793,  2085,
   -2138, -2138, 14888,  2532,    72,  2935,   859,  2936, -2138,   863,
     865, -2138,  2939, -2138, -2138,  2539, -2138, -2138,  2540, 13849,
   13891, -2138,  6072, -2138, -2138,  2533, -2138, -2138, -2138,  2541,
   -2138, -2138, -2138, -2138, -2138,  6418,  2883, -2138, 10858, -2138,
   -2138, -2138,   867,  2940, -2138,   871,   876, -2138,  2941, -2138,
    2543,  2944,  2945,  2538,  2550, -2138,  2962,  2554, 10858,  2953,
   -2138,   878,   -15, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138,  2987,   106,  2555, -2138,  2542, -2138, -2138, -2138,  2542,
   -2138, -2138, -2138, -2138, -2138,  2988,  2990, -2138, 14511,  -105,
    2832, -2138,    72,  2558, -2138, -2138,    73, -2138, -2138,  2991,
   -2138,  2993,  2561, -2138, -2138,  1234, -2138,  6764, -2138,  2998,
    2600, -2138, -2138, 13923, -2138,  2563,  2795, -2138,   882, -2138,
   -2138, -2138,  3001,  3002,  3003,  3007, 14888,  2986, -2138,  3008,
   -2138, -2138, -2138, -2138,  3010,  2575,  2261,  2261,  2583,  2261,
    2261,  2585,  2590, -2138,  2785,  2791,  2602, -2138,  2573,    72,
    2593,  2601,  2603,  3026, -2138, -2138, -2138,  3017,   883, -2138,
   -2138,  7110, -2138,  2794,  3035,  3039,  3026,  2604,  2608,  2616,
    2617, 10858, -2138,  2805,   106, -2138,  2542,  2542, -2138,  2542,
    2542, -2138, -2138,  2867,  2878,  2619,    72,  2620, -2138, -2138,
   -2138, -2138,   885,  3041, -2138,  2998, -2138,  2623,   890,  2628,
     892,  2629,  2849, -2138, -2138, 14888,  2831, -2138,  2639,  2641,
    2646,  2648, -2138, -2138,  2622,    72, -2138,  3066, -2138, -2138,
    3065,  3070,  3026,  3026, -2138,  2863,  3088,  2487, -2138, -2138,
   -2138, -2138,    72,  2662,   515, -2138,  2656,  2663,   894,   896,
     533,  3098,   898, -2138, -2138,  2664,    72,    23,  2956,   -50,
     -25, -2138,  3026, -2138, -2138,  3012,  2848, -2138,  2863,    72,
    2671, -2138, -2138,   245, -2138, -2138, -2138,   482,   483,   900,
     533,   533,  2930, -2138,  2686,    72, -2138, -2138, -2138, -2138,
   -2138,   466, -2138, -2138, -2138,   471, -2138,  2875, -2138,  2687,
   -2138, -2138, -2138, -2138,   533,    95, -2138,  2931,  2932,  2942,
    2943,  3125,  3126, -2138, -2138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2138,  2966,  -141, -2138, -2138, -2138, -2138, -1122,  1631, -2138,
    1820, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,  1930,  2610,
   -2138,  -323,  -826,  1270, -2138, -1757, -2138,   934, -1626, -2138,
   -2099, -2138, -1337, -2138,  1007, -1594, -2138, -2138, -2138, -1736,
   -2138, -2138,  2471,  -375,  -382,  2464,  -676, -2138, -2138,  -396,
   -2138, -2138,   306, -2138, -2138, -2138,  1537,  -993,    19,  -520,
   -2138, -2138, -2138,  2947,  2323, -2138,  2314, -2138,   722,   531,
   -2138,   448, -1410, -2138, -2138, -2138, -2138, -2138, -2138,  2020,
   -2138, -2138, -1597, -2138, -2138, -2138,  2019,  1714, -2138,  1074,
   -2138, -2138, -1874, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138, -2138,
   -2138,  2018,  1710, -2138,  1069, -2138, -2138, -2138, -2138,  2460,
   -2138,  2116,  1836, -2138,  1743,  1471,  1091, -2138,   897,   735,
   -2138, -2138, -1552, -2138, -1127, -2138, -2138, -2138, -2138, -2138,
     462,   685,  3053,  2672, -2138,  1996, -2138,   853,  2336, -2138,
   -2138, -2138, -2138, -2138, -2138, -2138, -2138, -1439,  1438, -2138,
   -2138, -2138, -2138,   529, -2138, -2138, -2138, -2138,   889, -2138,
     416, -2138,  1465,  1454, -2094, -2101, -1985, -2137, -1728, -2138,
   -1356,   237,    65,   -92, -1090,  -624,  2086, -1449, -2138, -2138,
   -2138,  2959, -2138,  -447, -2138,  2079,  1293, -1696, -2138, -2138,
   -2138, -2138,  2465, -2138, -2138, -2138, -2138, -2138,  2730, -2138,
   -2138, -1836, -2138
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -856
static const yytype_int16 yytable[] =
{
     382,  1600,   692,  2139,  1676,  1956,  1877,  2125,  1179,  1736,
     679,  1041,  2226,   674,  1882,  1636,  1637,  2127,   799,  2312,
    1697,  1655,  1398,  1399,  1422,   805,  1335,  1875,  1404,   724,
    1406,   739,  2318,  1714,   161,   669,   493,  1324,  1333,   150,
    1757,  2221,  1162,   989,   400,   800,   641,  1489,   444,   445,
     446,   447,   448,   449,  1125,   990,   840,  1162,   670,   680,
    1489,  1090,   137,  2135,  2320,   853,  1496,  1171,  1498,   678,
     788,   857,   429,   833,  1499,  2650,  1608,  1615,  2320,  1751,
    2360,  2361,  2787,   789,  1904,  1905,   715,  2784,  1310,  1367,
     831,  2371,  2372,    90,   667,   801,   201,   725,    89,  2817,
     424,   520,   521,  1927,  1163,  2248,  1079,  1135,  -855,   430,
     726,   834,   526,   527,   528,   193,   145,   720,   530,  1163,
    2781,   244,  1603,   827,  1125,  2664,  2136,   134,   730,  1092,
    1435,  1429,   454,  -372,   431,   444,   445,   446,   447,   448,
     449,   831,   432,  2222,   831,  1368,  1898,  1442,  2515,   388,
    2785,   388,   112,  2665,   433,  2135,  1699,   642,   643,   644,
     645,   646,   647,   648,  1129,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,  1715,   666,  2100,  2786,   130,  1093,  2321,  1472,
    1573,  1604,  1459,  2179,  2180,   455,   802,   740,   721,  1460,
    2115,  1473,  2190,  2191,  2571,   195,   207,   209,   146,   731,
    1338,  1162,  1369,  2322,  1625,   420,   421,   790,  2136,   212,
     214,   434,   438,  1916,  1917,  1918,  1919,  2322,  2249,   202,
     991,   245,   828,  2788,  2258,   422,   716,  1474,   450,  1164,
     640,  1752,   435,  2651,  2323,  1475,  2263,   203,   494,  2485,
    2486,  2487,  2488,  2489,  2490,  1461,  2116,   681,  2323,  1462,
     681,   425,   791,  2498,   854,  1609,  1616,  2502,   194,   204,
     854,  2506,  1370,  1163,   436,  1311,  1463,   131,  1943,  2818,
    1136,   138,  1906,  2277,  2223,  1464,   401,  1020,  2250,  1490,
    1955,  1920,  2782,  2324,  2278,  1476,   205,  2129,  -855,  1172,
    1173,  1031,  1774,   437,  1430,   489,  2098,  2324,  -372,  1626,
    1897,  1337,  2516,   389,  2279,   389,  2341,  2132,   135,   390,
    1443,   390,  1465,  2117,   155,   450,  1165,  1166,  2280,  1700,
     151,   152,   153,  1091,   162,  1590,   803,  2281,   681,   154,
     671,   494,  1735,  2796,  1477,  2572,    16,   156,  1423,  1424,
    1425,  1426,  1486,   132,  2243,  1716,   992,  2101,   196,   208,
     210,  2565,   163,   164,   165,  2470,  1343,  2325,  1775,  2566,
    1776,   423,   213,   215,   166,   439,  1191,  2282,   133,  1478,
    2471,  2325,  1466,  2118,   863,  2313,  2314,    16,   864,   741,
     742,   743,   744,   718,  2797,   874,   878,   880,   881,   882,
     883,   884,   885,   886,   887,   888,   719,   890,   891,   892,
     893,   894,   895,   896,   897,   898,   899,   900,   901,   902,
     903,   904,   217,   906,   907,   908,   806,   910,   911,   912,
     913,   914,   915,   917,   918,   919,   920,   921,   922,   923,
     924,   925,   926,   927,  1336,  1876,  1371,  1372,   727,   933,
     934,  1178,  2137,  1856,   938,   939,  1377,   841,  1801,   943,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   673,   966,   967,   968,   451,   970,   971,   972,   973,
     974,   975,   976,   977,   978,   979,  2655,   981,   982,  1587,
    2658,   984,   985,   986,   987,   988,  1415,  1416,  1417,   998,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,
    1013,  1014,  1015,  1016,  1017,  1018,  2526,   391,  1802,   391,
     382,  1436,  1192,  2767,    84,  1195,  1032,   501,  1705,   157,
    2271,  1479,  2272,  2348,  2349,  2350,  2351,  2352,  2353,   219,
    1206,  2775,  1921,  1922,  1923,  2362,  2798,  2802,   181,  2366,
     221,  2430,   722,  2370,   471,   225,  2433,    85,   227,   142,
     682,   462,  2478,  1420,   728,   218,   475,   641,  1934,  2810,
    1936,  1937,  2464,   477,  2812,   392,   732,   392,  1639,  1323,
    1677,   484,   506,   508,  1678,   512,  -334,  2728,  2729,   514,
    2730,  2731,   808,   866,   867,  1706,   158,  2760,  2573,  1640,
    1199,  1200,  2768,  1026,  2143,  1038,  1526,  1527,  1641,   168,
    1953,  1642,  1759,  1643,  1760,   667,  1644,  2398,  2514,   187,
    2768,  1472,    16,   190,  1027,  1664,  2790,  2791,   169,  2144,
     182,  1645,  1679,  1473,   690,  1680,   472,   683,  1646,  1647,
    1328,  1386,  1387,  1039,   733,  1707,  1665,  -340,  1924,  2811,
    1681,   466,  1194,   170,  2813,  1601,   171,   734,  1607,  2814,
    2475,   684,  2574,   502,  2799,  2803,   172,   427,   242,  1474,
    1682,   467,   173,  1648,   685,  2290,    86,  1475,  1683,   243,
    1175,  2295,  2800,  2804,  2476,  1433,  1421,   428,  2769,   136,
    1649,  2720,   220,   143,  1434,   442,   174,  1332,   723,   686,
     176,   183,  2770,   222,   159,   160,  2769,   473,   226,    87,
     729,   228,  2801,  2805,   463,   443,  1201,  1202,   486,   476,
    2770,  1204,   687,  2542,  1650,  1124,   478,  1476,  1211,  1708,
     746,    88,  2670,  1954,   485,   507,   509,  1028,   513,  1638,
    1740,  2555,   515,  1125,   868,   809,  1709,  2758,  2759,  1741,
     747,   868,  1868,  1651,  1929,  1941,   175,  2428,   147,   148,
     149,  1652,  1470,  1930,  1942,  2327,  2429,  1684,   178,  1685,
     523,   524,   994,   995,   179,   996,  1477,  2789,   997,  -621,
     180,   231,   184,   231,  2518,  1126,   664,   665,  1686,   666,
    2523,   185,   642,   643,   644,   645,   646,   647,   648,  -625,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   188,   666,   186,
    1127,  1653,  -621,  1113,   232,  2653,   232,   748,   749,  1118,
    -621,  1120,   233,   191,   386,  2627,   192,   234,  1034,   681,
     197,  2663,  -625,  1314,  1315,   189,  1317,  2460,  1169,  1170,
    -625,   640,  -621,  2439,   235,   198,   387,   211,  -622,  1362,
    1363,  1437,  1438,  2595,  2388,  1492,  1493,  2599,   199,  1639,
     216,  2454,  -625,  2455,   642,   643,   644,   645,   646,   647,
     648,   223,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,  1641,
     666,  -622,  1642,   224,  1643,  1662,  1663,  1644,   229,  -622,
     663,   664,   665,   230,   666,  2611,   238,  2613,  1207,   237,
    2705,   239,  1645,  1666,  1667,   240,  2681,  2727,  1596,  1646,
    1647,  -622,  1668,  1669,  1588,   642,   643,   644,   645,   646,
     647,   648,   246,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     385,   666,  1670,  1669,  1648,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,  1413,   666,  1694,  1695,
    1574,   399,  1102,  1103,  1104,  1105,   402,  1106,   403,  1585,
    1108,  1109,  1110,  1720,  1721,  1729,  1730,  1114,  1115,  1116,
    2183,  2184,  1119,  1391,  1392,  2668,  1395,  1396,  1397,  1746,
    1747,   407,  1400,  1401,  1402,  1650,   408,  1405,  2187,  2188,
    2696,  2697,   405,  2699,  2700,   404,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,  2562,   666,  1822,  1823,
    1825,  1826,  2519,   406,  1651,  1940,  1695,  1500,   409,  1501,
    1951,  1695,  1652,  2096,  1695,   410,  1508,  1509,   413,  1510,
    2105,  2106,  2707,  1515,  2111,  2112,  2133,  1758,  2148,  2149,
    1516,  1517,  1518,  1519,   411,  1520,  1521,  1522,   414,  2241,
    2242,   412,  1523,  1524,   415,  1525,  2264,  1695,  2275,  1695,
     416,  1528,  1529,  1530,  2292,  1695,  2306,  1747,   417,  2734,
    2315,  2316,  2317,  2316,   418,  1538,  1539,  1540,   441,  1541,
    2319,  2242,  1653,   456,  2131,  2536,  2537,  2328,  1758,   457,
    1552,  2390,  2391,  2392,  2391,  2393,  2391,   458,  2753,  1553,
    1554,  1555,  1556,  1557,  1558,  1559,  1560,  1749,  1561,  2396,
    2316,   459,  1562,   461,  1563,  2765,  1564,  1565,  1566,  1567,
    1568,  2410,  2411,   460,  1569,  1570,  1571,   464,  1572,  2780,
     659,   660,   661,   662,   663,   664,   665,  1578,   666,  1580,
    1580,   465,  2794,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   469,   666,  1597,  2412,  2413,   470,  2809,  2415,
    2416,  1602,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   474,   666,
    2418,  2419,  2437,  1695,   247,   248,   249,   250,   251,   252,
    2438,  1695,   479,  1208,  2453,  1695,  2457,  1695,   253,   254,
    2465,  2411,  2466,  2316,  2467,  2316,  2469,  2413,   255,   256,
    2548,  1695,   480,  1857,  2560,  1695,  1859,   481,  1860,   483,
    1862,   257,  2561,  1695,   642,   643,   644,   645,   646,   647,
     648,  1675,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   482,
     666,  2674,  2675,   258,  2567,  2242,  2580,  2149,   259,  2615,
    2616,   260,   261,  2618,  2619,  2620,  2621,  2634,  1695,   487,
     262,  2636,  2411,   489,  1232,  1233,  2637,  2413,  2648,  2649,
    2685,  2686,   491,  2714,  2715,  2736,  2737,   263,  2741,  2742,
     495,   264,  2744,  2737,  2773,  2737,  2774,  2737,  2777,  2778,
    2806,  2737,   496,  1763,  1339,  1340,   497,  1767,   498,  1593,
    1594,  2215,  2216,  1772,   500,   499,   504,   505,   510,   511,
     516,   518,  1778,   517,  1204,   519,   137,   265,   532,   525,
    1786,  1787,   533,   534,   676,  1264,  1265,   642,   643,   644,
     645,   646,   647,   648,   535,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   536,   666,   266,   537,   672,   642,   643,   644,
     645,   646,   647,   648,   267,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   538,   666,   690,   539,  1858,   540,   541,   542,
     543,   544,   545,   546,   547,   693,   268,   269,   548,   549,
     694,   550,   551,   552,   270,   271,   553,   554,   555,   272,
     556,   557,  1878,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   558,   666,
     559,   560,   561,   562,   273,   563,   564,   565,   695,   566,
     567,  1899,   568,   569,   696,   570,   571,   572,   573,   697,
     698,   699,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     574,   312,   575,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   576,   577,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   578,   360,   361,   362,   363,  2119,   579,   580,
     581,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   582,   375,   376,   377,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     583,   666,   584,   700,   585,   378,   586,   587,   588,   589,
    2154,   590,   591,  2155,   592,   379,   380,   593,   594,   595,
     596,   597,  2166,  2167,   701,   598,   599,   600,   601,   602,
     381,   603,   604,   605,  2168,   606,   607,   608,   609,   610,
     611,   612,   613,  2175,  2176,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   614,   666,   615,
    2192,  2193,  2194,   702,   983,  2195,  2196,   616,  2197,   617,
    2198,   618,  2199,   619,   620,   621,   622,   623,   624,  2200,
    2201,  2202,   625,   626,   627,   628,   629,   630,  1245,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   675,   677,
     704,   703,   705,  2218,  2219,   706,   707,   642,   643,   644,
     645,   646,   647,   648,   708,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   709,   666,   710,   711,   712,   713,   714,  2245,
     735,   736,   737,  2251,   738,  1957,  1958,  1959,  1960,  1961,
    1962,   750,  1963,  2255,  1964,   751,   787,   795,  1965,  1966,
    1967,   796,  1968,   797,   798,   807,   810,  2261,  1969,  1970,
    1971,  1972,  1973,   812,   814,   816,   818,  1266,  1267,   817,
     819,   820,  1974,   821,   823,   824,   825,   830,   835,   836,
     837,   838,  1975,  1976,   839,   842,  1977,   843,   844,   845,
     846,  1978,  1979,  1980,  1981,  1982,   847,  1246,  1983,   848,
    1984,  1985,  1986,   849,   850,  1987,  1988,   851,  1989,  1990,
    1991,   852,   856,   859,  1992,   666,   869,   870,   871,   889,
     905,   909,   928,   929,   930,   931,   932,   935,  1993,   936,
     937,   940,   941,  1994,   942,   965,   969,   980,  1995,  1996,
    1997,  1019,  1021,   993,  1023,  1998,  1999,  1025,  2000,  2001,
    2002,  2003,  1033,  1035,  2004,  1043,  2005,  2006,  2007,  2008,
    1042,  2009,  1045,  2010,  2011,  1046,  2012,  1047,  2013,  2014,
    1048,  2015,  2016,  2017,  2018,  1049,  1050,  1051,  1052,  1053,
    2019,  1054,  2020,  1055,  2021,  2022,  1056,  2023,  2024,  2025,
    2026,  2027,  2028,  1057,  2029,  2030,  2031,  2032,  2033,  1058,
    1059,  1060,  1061,  1062,  1063,  1064,  1065,  1067,  1068,  2034,
    1069,  2035,   424,  2036,  1070,  1071,  1072,  1073,  1074,  1075,
    1076,  1077,  2037,  1078,  2038,  2039,  2040,  2041,  2042,  2043,
    2044,  1080,  1082,  2045,  2046,  1081,  1083,  1085,  1088,  2047,
    1086,  2048,  2049,  2050,  1084,  2051,  1087,  2052,  1095,  2053,
    2054,  2055,  2056,  1089,  1094,  1098,  1096,  1111,  1099,  1100,
    2331,  2332,  1107,  1117,  1121,  1128,  2336,  1122,  2338,  1130,
    1123,  2057,  2058,  2059,  1131,  1132,  1133,  1137,  1134,  1138,
    1139,  2060,  1140,  2061,  2062,  2063,  1141,  1142,  1144,  1145,
    2064,  1146,  2065,  2066,  2067,  1147,  1148,  1150,  2068,  1149,
    1151,  1153,  2069,  2070,  1154,  1157,  2071,  2072,  2073,  2074,
    1155,  1156,  1158,  2075,  1159,  1161,  1176,  1181,  1183,  1184,
    1197,  1185,  1186,  1187,  1189,  1203,  1247,    16,  2385,  2387,
     645,   646,   647,   648,  1261,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,  1262,   666,  2076,  2077,  2078,  2079,  2080,   642,
     643,   644,   645,   646,   647,   648,  1263,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,  1268,   666,  1269,   -84,  1316,  1319,
    1270,  1320,  1321,  1326,  1329,  1327,  1330,  1342,   642,   643,
     644,   645,   646,   647,   648,  2450,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,  1331,   666,  1345,  2461,  1288,  1289,   642,
     643,   644,   645,   646,   647,   648,  1341,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,  1344,   666,  1346,  1347,  1772,  1348,
    1353,  1349,  1352,  1350,  1351,  1355,  1354,  1356,  1357,  2081,
    2082,  2083,  2084,  2085,  2491,  2086,  1358,  1359,  1361,  1365,
    1360,  1366,  1373,  1374,  1125,  1375,  1378,  1379,  1381,  1380,
    1382,  1383,  1384,  1385,  1412,  1410,  1388,  2509,  1393,  1411,
    1407,  1408,  1409,  1414,   114,  1418,  1431,  1432,  1439,  1441,
    1444,  1445,  1447,  1449,  2522,  1451,  1452,  1454,  1453,  1446,
    1457,  1458,  1471,  1483,  1484,  1487,  1455,  1494,  1504,  1957,
    1958,  1959,  1960,  1961,  1962,  1488,  1963,  1489,  1964,  2539,
    2540,  1506,  1965,  1966,  1967,  1507,  1968,  1512,   115,  1531,
    1542,  1543,  1969,  1970,  1971,  1972,  1973,  1546,  1532,  1533,
    1534,  1544,  1548,  1550,   116,   -86,  1974,  1551,  1586,  1535,
     831,  1536,  1537,  1545,  1589,  1547,  1975,  1976,  1591,  1598,
    1977,  1549,  1595,  1599,  1611,  1978,  1979,  1980,  1981,  1982,
    1612,  1613,  1983,  1614,  1984,  1985,  1986,  1618,  1619,  1987,
    1988,  1620,  1989,  1990,  1991,  1621,  1622,  1624,  1992,  1623,
    1627,   117,  1628,  1629,  1632,  1633,  1634,  1656,  1635,  1657,
    1658,  1659,  1993,  1660,  1661,  1674,  1671,  1994,   118,  1672,
     119,  1673,  1995,  1996,  1997,  2608,   120,  1688,  1689,  1998,
    1999,  1690,  2000,  2001,  2002,  2003,  1696,  1698,  2004,  1701,
    2276,  2006,  2007,  2008,  1703,  2009,  1704,  2010,  2011,  1710,
    2012,   121,  2013,  2014,  1713,  2015,  2016,  2017,  2018,  1718,
    1719,  1725,  1717,  1726,  2019,  1727,  2020,  2633,  2021,  2022,
    1691,  2023,  2024,  2025,  2026,  2027,  2028,  1728,  2029,  2030,
    2031,  2032,  2033,  1692,  1693,  1734,  1737,  2646,  1739,  1744,
    1748,  1753,  1750,  2034,  1738,  2035,  1742,  2036,  1743,  1745,
    1754,  1755,  1764,  1768,  1756,  1769,  2037,  1770,  2038,  2039,
    2040,  2041,  2042,  2043,  2044,  1865,  1758,  2045,  2046,  1779,
    1869,  1866,  1873,  2047,  1807,  2048,  2049,  2050,  1808,  2051,
    1788,  2052,  1809,  2053,  2054,  2055,  2056,  1874,  1789,  1883,
    1806,  1854,  1810,  1811,  1884,  1885,  1887,  1902,  1888,  1889,
    1892,  1890,  1812,  1893,  1821,  2057,  2058,  2059,  1855,  1824,
    1827,  1894,  1861,  1863,  1864,  2060,  1870,  2061,  2062,  2063,
     122,  1871,  1872,  1879,  2064,  1896,  2065,  2066,  2067,  1294,
    1295,  1881,  2068,  1886,  1891,  1895,  2069,  2070,  1897,  1900,
    2071,  2072,  2073,  2074,   123,  1901,  1907,  2075,  1908,  1909,
    2725,  1910,  1911,   124,  1912,  1913,  1914,  1915,  1925,  1926,
    1928,  1931,  1932,  1933,  1935,  1944,   125,  1945,  1783,  1784,
    1938,  1946,  1947,  1948,  1949,   126,  1950,  2088,   127,  1952,
    2089,  2090,  2095,   128,  2092,  2099,  2103,  2097,  2076,  2077,
    2078,  2079,  2080,  2102,  2104,  2108,  2109,  2113,  2107,  1813,
    1814,  2110,  2120,  2121,  2122,  2123,  2126,  2146,  2147,  2140,
    2151,  2153,  2177,  2182,  2186,  1957,  1958,  1959,  1960,  1961,
    1962,  2203,  1963,  2204,  1964,  2205,  2206,  2207,  1965,  1966,
    1967,  2208,  1968,  2213,  2210,  2209,  2217,  2220,  1969,  1970,
    1971,  1972,  1973,  2224,  2225,  2227,  2228,  2230,  2233,  2229,
    2231,  2232,  1974,  2234,  2235,  2237,  2239,  2247,  2257,  2244,
    2246,  2252,  1975,  1976,  2260,  2262,  1977,  2253,  2265,  2284,
    2283,  1978,  1979,  1980,  1981,  1982,  2287,  2254,  1983,  2259,
    1984,  1985,  1986,  2267,  2273,  1987,  1988,  2294,  1989,  1990,
    1991,  2268,  2269,  2296,  1992,  2297,  2274,  2270,  2298,  2300,
    2303,  2285,  2302,  2081,  2082,  2083,  2084,  2085,  1993,  2086,
    2286,  2291,  2293,  1994,  2305,  2308,  2301,  2307,  1995,  1996,
    1997,  2309,  2310,  2329,  2340,  1998,  1999,  2333,  2000,  2001,
    2002,  2003,  2339,  2357,  2004,  2342,  2431,  2006,  2007,  2008,
    2358,  2009,  2363,  2010,  2011,  2364,  2012,  2367,  2013,  2014,
    2365,  2015,  2016,  2017,  2018,  2368,  2394,  2384,  2395,  2399,
    2019,  2369,  2020,  2401,  2021,  2022,  2402,  2023,  2024,  2025,
    2026,  2027,  2028,  2397,  2029,  2030,  2031,  2032,  2033,  2400,
    2403,  2404,  2405,  2406,  2408,  2409,  2414,  2420,  2422,  2034,
    2436,  2035,  2407,  2036,  2421,  2440,  2447,  2424,  2425,  2426,
    2435,  2448,  2037,  2449,  2038,  2039,  2040,  2041,  2042,  2043,
    2044,  2451,  2456,  2045,  2046,  2458,  2462,  2463,  2468,  2047,
    2472,  2048,  2049,  2050,  2473,  2051,  2474,  2052,  2477,  2053,
    2054,  2055,  2056,  2479,  2480,  2483,  2492,  2494,  2495,  2510,
    2496,  2497,  2507,  2508,  2511,  2512,  2513,  2520,  2525,  2500,
    2501,  2057,  2058,  2059,  2504,  2505,  2521,  2527,  2524,  2528,
    2529,  2060,  2530,  2061,  2062,  2063,  2531,  2533,  2532,  2534,
    2064,  2541,  2065,  2066,  2067,  2535,  2538,  2545,  2068,  2547,
    2550,  2551,  2069,  2070,  2552,  2553,  2071,  2072,  2073,  2074,
    2554,  2556,  2568,  2075,  2558,   642,   643,   644,   645,   646,
     647,   648,  2563,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
    2569,   666,  2570,  2578,  2575,  2577,  2576,  2581,  2579,  2591,
    2582,  2592,  2607,  2609,  2076,  2077,  2078,  2079,  2080,  2614,
    2617,  2584,  2622,  2632,  2638,  2635,  2585,  2640,  2641,  2586,
    2587,  2588,  2589,  2594,  2596,  2597,  2647,  2598,  2600,  2605,
    2601,  1957,  1958,  1959,  1960,  1961,  1962,  2602,  1963,  2606,
    1964,  2604,  2629,  2612,  1965,  1966,  1967,  2642,  1968,  2623,
    2624,  2630,  2644,  2639,  1969,  1970,  1971,  1972,  1973,  2643,
    2652,  2666,  2661,  2645,  2662,  2671,  2654,  2672,  1974,  2669,
    2673,  2677,  2684,  2683,  2687,  2688,  2691,  2689,  1975,  1976,
    2690,  2692,  1977,  2694,  2706,  2695,  2703,  1978,  1979,  1980,
    1981,  1982,  2704,  2698,  1983,  2701,  1984,  1985,  1986,  2711,
    2702,  1987,  1988,  2708,  1989,  1990,  1991,  2713,  2718,  2717,
    1992,  2709,  2719,  2710,  2721,  2726,  2738,  2732,  2722,  2081,
    2082,  2083,  2084,  2085,  1993,  2086,  2723,  2724,  2733,  1994,
    2316,  2735,  2740,  2752,  1995,  1996,  1997,  2743,  2745,  2755,
    2756,  1998,  1999,  2757,  2000,  2001,  2002,  2003,  2746,  2748,
    2004,  2749,  2434,  2006,  2007,  2008,  2750,  2009,  2751,  2010,
    2011,  2761,  2012,  2764,  2013,  2014,  2771,  2015,  2016,  2017,
    2018,  2776,  2772,  2766,  2807,  2779,  2019,  2783,  2020,  2781,
    2021,  2022,  2795,  2023,  2024,  2025,  2026,  2027,  2028,  2792,
    2029,  2030,  2031,  2032,  2033,  2815,  2808,  2816,  2819,  2820,
    2823,  2824,   419,  2821,  2822,  2034,  1780,  2035,  2212,  2036,
     865,  1584,  1022,  1514,  1880,  1037,  2389,  2330,  2037,   492,
    2038,  2039,  2040,  2041,  2042,  2043,  2044,  1182,  1180,  2045,
    2046,  2680,  2549,  2739,  1724,  2047,  1733,  2048,  2049,  2050,
    1448,  2051,  1450,  2052,  1066,  2053,  2054,  2055,  2056,  1456,
    2299,  2304,  1364,  2094,  1712,  2289,  2452,  2559,  2747,   241,
    1497,   858,  2482,  1193,  2793,  2459,  2134,  2057,  2058,  2059,
    2114,  2130,  1631,  1403,   811,   522,     0,  2060,     0,  2061,
    2062,  2063,     0,  1419,  1097,     0,  2064,     0,  2065,  2066,
    2067,  2256,     0,     0,  2068,     0,     0,     0,  2069,  2070,
       0,     0,  2071,  2072,  2073,  2074,     0,     0,     0,  2075,
       0,   642,   643,   644,   645,   646,   647,   648,     0,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2076,  2077,  2078,  2079,  2080,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1957,  1958,  1959,
    1960,  1961,  1962,     0,  1963,     0,  1964,     0,     0,     0,
    1965,  1966,  1967,     0,  1968,  1838,  1839,     0,     0,     0,
    1969,  1970,  1971,  1972,  1973,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1974,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1975,  1976,     0,     0,  1977,     0,
       0,     0,     0,  1978,  1979,  1980,  1981,  1982,     0,     0,
    1983,     0,  1984,  1985,  1986,     0,     0,  1987,  1988,     0,
    1989,  1990,  1991,     0,     0,     0,  1992,     0,     0,     0,
       0,     0,     0,     0,     0,  2081,  2082,  2083,  2084,  2085,
    1993,  2086,     0,     0,     0,  1994,     0,     0,     0,     0,
    1995,  1996,  1997,     0,     0,     0,     0,  1998,  1999,     0,
    2000,  2001,  2002,  2003,     0,     0,  2004,     0,  2441,  2006,
    2007,  2008,     0,  2009,     0,  2010,  2011,     0,  2012,     0,
    2013,  2014,     0,  2015,  2016,  2017,  2018,     0,     0,     0,
       0,     0,  2019,     0,  2020,     0,  2021,  2022,     0,  2023,
    2024,  2025,  2026,  2027,  2028,     0,  2029,  2030,  2031,  2032,
    2033,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2034,     0,  2035,     0,  2036,     0,     0,     0,     0,
       0,     0,     0,     0,  2037,     0,  2038,  2039,  2040,  2041,
    2042,  2043,  2044,     0,     0,  2045,  2046,     0,     0,     0,
       0,  2047,     0,  2048,  2049,  2050,     0,  2051,     0,  2052,
       0,  2053,  2054,  2055,  2056,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2057,  2058,  2059,     0,     0,     0,     0,
       0,     0,     0,  2060,     0,  2061,  2062,  2063,     0,     0,
       0,     0,  2064,     0,  2065,  2066,  2067,     0,     0,     0,
    2068,     0,     0,     0,  2069,  2070,     0,     0,  2071,  2072,
    2073,  2074,     0,     0,     0,  2075,     0,   642,   643,   644,
     645,   646,   647,   648,     0,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2076,  2077,  2078,  2079,
    2080,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1957,  1958,  1959,  1960,  1961,  1962,     0,
    1963,     0,  1964,     0,     0,     0,  1965,  1966,  1967,     0,
    1968,  1840,  1841,     0,     0,     0,  1969,  1970,  1971,  1972,
    1973,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1974,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1975,  1976,     0,     0,  1977,     0,     0,     0,     0,  1978,
    1979,  1980,  1981,  1982,     0,     0,  1983,     0,  1984,  1985,
    1986,     0,     0,  1987,  1988,     0,  1989,  1990,  1991,     0,
       0,     0,  1992,     0,     0,     0,     0,     0,     0,     0,
       0,  2081,  2082,  2083,  2084,  2085,  1993,  2086,     0,     0,
       0,  1994,     0,     0,     0,     0,  1995,  1996,  1997,     0,
       0,     0,     0,  1998,  1999,     0,  2000,  2001,  2002,  2003,
       0,     0,  2004,     0,  2442,  2006,  2007,  2008,     0,  2009,
       0,  2010,  2011,     0,  2012,     0,  2013,  2014,     0,  2015,
    2016,  2017,  2018,     0,     0,     0,     0,     0,  2019,     0,
    2020,     0,  2021,  2022,     0,  2023,  2024,  2025,  2026,  2027,
    2028,     0,  2029,  2030,  2031,  2032,  2033,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2034,     0,  2035,
       0,  2036,     0,     0,     0,     0,     0,     0,     0,     0,
    2037,     0,  2038,  2039,  2040,  2041,  2042,  2043,  2044,     0,
       0,  2045,  2046,     0,     0,     0,     0,  2047,     0,  2048,
    2049,  2050,     0,  2051,     0,  2052,     0,  2053,  2054,  2055,
    2056,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2057,
    2058,  2059,     0,     0,     0,     0,     0,     0,     0,  2060,
       0,  2061,  2062,  2063,     0,     0,     0,     0,  2064,     0,
    2065,  2066,  2067,     0,     0,     0,  2068,     0,     0,     0,
    2069,  2070,     0,     0,  2071,  2072,  2073,  2074,     0,     0,
       0,  2075,     0,     0,   642,   643,   644,   645,   646,   647,
     648,     0,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2076,  2077,  2078,  2079,  2080,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1957,
    1958,  1959,  1960,  1961,  1962,     0,  1963,     0,  1964,     0,
       0,     0,  1965,  1966,  1967,     0,  1968,  1842,  1843,     0,
       0,     0,  1969,  1970,  1971,  1972,  1973,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1974,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1975,  1976,     0,     0,
    1977,     0,     0,     0,     0,  1978,  1979,  1980,  1981,  1982,
       0,     0,  1983,     0,  1984,  1985,  1986,     0,     0,  1987,
    1988,     0,  1989,  1990,  1991,     0,     0,     0,  1992,     0,
       0,     0,     0,     0,     0,     0,     0,  2081,  2082,  2083,
    2084,  2085,  1993,  2086,     0,     0,     0,  1994,     0,     0,
       0,     0,  1995,  1996,  1997,  2141,     0,     0,     0,  1998,
    1999,     0,  2000,  2001,  2002,  2003,     0,     0,  2004,     0,
    2443,  2006,  2007,  2008,     0,  2009,     0,  2010,  2011,     0,
    2012,     0,  2013,  2014,     0,  2015,  2016,  2017,  2018,     0,
       0,     0,     0,     0,  2019,     0,  2020,     0,  2021,  2022,
       0,  2023,  2024,  2025,  2026,  2027,  2028,     0,  2029,  2030,
    2031,  2032,  2033,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2034,     0,  2035,     0,  2036,     0,     0,
       0,     0,     0,     0,     0,     0,  2037,     0,  2038,  2039,
    2040,  2041,  2042,  2043,  2044,     0,     0,  2045,  2046,     0,
       0,     0,     0,  2047,     0,  2048,  2049,  2050,     0,  2051,
       0,  2052,     0,  2053,  2054,  2055,  2056,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2057,  2058,  2059,     0,     0,
       0,     0,     0,     0,     0,  2060,     0,  2061,  2062,  2063,
       0,     0,     0,     0,  2064,     0,  2065,  2066,  2067,     0,
       0,     0,  2068,     0,     0,     0,  2069,  2070,     0,     0,
    2071,  2072,  2073,  2074,     0,     0,     0,  2075,     0,   642,
     643,   644,   645,   646,   647,   648,     0,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,   666,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2076,  2077,
    2078,  2079,  2080,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1957,  1958,  1959,  1960,  1961,
    1962,     0,  1963,     0,  1964,     0,     0,     0,  1965,  1966,
    1967,     0,  1968,     0,     0,  2142,     0,     0,  1969,  1970,
    1971,  1972,  1973,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1974,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1975,  1976,     0,     0,  1977,     0,     0,     0,
       0,  1978,  1979,  1980,  1981,  1982,     0,     0,  1983,     0,
    1984,  1985,  1986,     0,     0,  1987,  1988,     0,  1989,  1990,
    1991,     0,     0,     0,  1992,     0,     0,     0,     0,     0,
       0,     0,     0,  2081,  2082,  2083,  2084,  2085,  1993,  2086,
       0,     0,     0,  1994,     0,     0,     0,     0,  1995,  1996,
    1997,     0,     0,     0,     0,  1998,  1999,     0,  2000,  2001,
    2002,  2003,     0,     0,  2004,     0,  2444,  2006,  2007,  2008,
       0,  2009,     0,  2010,  2011,     0,  2012,     0,  2013,  2014,
       0,  2015,  2016,  2017,  2018,     0,     0,     0,     0,     0,
    2019,     0,  2020,     0,  2021,  2022,     0,  2023,  2024,  2025,
    2026,  2027,  2028,     0,  2029,  2030,  2031,  2032,  2033,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2034,
       0,  2035,     0,  2036,     0,     0,     0,     0,     0,     0,
       0,     0,  2037,     0,  2038,  2039,  2040,  2041,  2042,  2043,
    2044,     0,     0,  2045,  2046,     0,     0,     0,     0,  2047,
       0,  2048,  2049,  2050,     0,  2051,     0,  2052,     0,  2053,
    2054,  2055,  2056,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2057,  2058,  2059,     0,     0,     0,     0,     0,     0,
       0,  2060,     0,  2061,  2062,  2063,     0,     0,     0,     0,
    2064,     0,  2065,  2066,  2067,     0,     0,     0,  2068,     0,
       0,     0,  2069,  2070,     0,     0,  2071,  2072,  2073,  2074,
       0,     0,     0,  2075,   642,   643,   644,   645,   646,   647,
     648,     0,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2076,  2077,  2078,  2079,  2080,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1957,  1958,  1959,  1960,  1961,  1962,     0,  1963,     0,
    1964,     0,     0,     0,  1965,  1966,  1967,     0,  1968,  2354,
    2355,     0,     0,     0,  1969,  1970,  1971,  1972,  1973,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1974,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1975,  1976,
       0,     0,  1977,     0,     0,     0,     0,  1978,  1979,  1980,
    1981,  1982,     0,     0,  1983,     0,  1984,  1985,  1986,     0,
       0,  1987,  1988,     0,  1989,  1990,  1991,     0,     0,     0,
    1992,     0,     0,     0,     0,     0,     0,     0,     0,  2081,
    2082,  2083,  2084,  2085,  1993,  2086,     0,     0,     0,  1994,
       0,     0,     0,     0,  1995,  1996,  1997,     0,     0,     0,
       0,  1998,  1999,     0,  2000,  2001,  2002,  2003,     0,     0,
    2004,     0,  2445,  2006,  2007,  2008,     0,  2009,     0,  2010,
    2011,     0,  2012,     0,  2013,  2014,     0,  2015,  2016,  2017,
    2018,     0,     0,     0,     0,     0,  2019,     0,  2020,     0,
    2021,  2022,     0,  2023,  2024,  2025,  2026,  2027,  2028,     0,
    2029,  2030,  2031,  2032,  2033,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2034,     0,  2035,     0,  2036,
       0,     0,     0,     0,     0,     0,     0,     0,  2037,     0,
    2038,  2039,  2040,  2041,  2042,  2043,  2044,     0,     0,  2045,
    2046,     0,     0,     0,     0,  2047,     0,  2048,  2049,  2050,
       0,  2051,     0,  2052,     0,  2053,  2054,  2055,  2056,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2057,  2058,  2059,
       0,     0,     0,     0,     0,     0,     0,  2060,     0,  2061,
    2062,  2063,     0,     0,     0,     0,  2064,     0,  2065,  2066,
    2067,     0,     0,     0,  2068,     0,     0,     0,  2069,  2070,
       0,     0,  2071,  2072,  2073,  2074,     0,     0,     0,  2075,
     642,   643,   644,   645,   646,   647,   648,     0,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2076,  2077,  2078,  2079,  2080,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1957,  1958,  1959,
    1960,  1961,  1962,     0,  1963,     0,  1964,     0,     0,     0,
    1965,  1966,  1967,     0,  1968,  1196,     0,     0,     0,     0,
    1969,  1970,  1971,  1972,  1973,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1974,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1975,  1976,     0,     0,  1977,     0,
       0,     0,     0,  1978,  1979,  1980,  1981,  1982,     0,     0,
    1983,     0,  1984,  1985,  1986,     0,     0,  1987,  1988,     0,
    1989,  1990,  1991,     0,     0,     0,  1992,     0,     0,     0,
       0,     0,     0,     0,     0,  2081,  2082,  2083,  2084,  2085,
    1993,  2086,     0,     0,     0,  1994,     0,     0,     0,     0,
    1995,  1996,  1997,     0,     0,     0,     0,  1998,  1999,     0,
    2000,  2001,  2002,  2003,     0,     0,  2004,     0,  2446,  2006,
    2007,  2008,     0,  2009,     0,  2010,  2011,     0,  2012,     0,
    2013,  2014,     0,  2015,  2016,  2017,  2018,     0,     0,     0,
       0,     0,  2019,     0,  2020,     0,  2021,  2022,     0,  2023,
    2024,  2025,  2026,  2027,  2028,     0,  2029,  2030,  2031,  2032,
    2033,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2034,     0,  2035,     0,  2036,     0,     0,     0,     0,
       0,     0,     0,     0,  2037,     0,  2038,  2039,  2040,  2041,
    2042,  2043,  2044,     0,     0,  2045,  2046,     0,     0,     0,
       0,  2047,     0,  2048,  2049,  2050,     0,  2051,     0,  2052,
       0,  2053,  2054,  2055,  2056,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2057,  2058,  2059,     0,     0,     0,     0,
       0,     0,     0,  2060,     0,  2061,  2062,  2063,     0,     0,
       0,     0,  2064,     0,  2065,  2066,  2067,     0,     0,     0,
    2068,     0,     0,     0,  2069,  2070,     0,     0,  2071,  2072,
    2073,  2074,     0,     0,     0,  2075,   642,   643,   644,   645,
     646,   647,   648,     0,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2076,  2077,  2078,  2079,
    2080,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1957,  1958,  1959,  1960,  1961,  1962,     0,
    1963,     0,  1964,     0,     0,     0,  1965,  1966,  1967,     0,
    1968,  1212,     0,     0,     0,     0,  1969,  1970,  1971,  1972,
    1973,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1974,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1975,  1976,     0,     0,  1977,     0,     0,     0,     0,  1978,
    1979,  1980,  1981,  1982,     0,     0,  1983,     0,  1984,  1985,
    1986,     0,     0,  1987,  1988,     0,  1989,  1990,  1991,     0,
       0,     0,  1992,     0,     0,     0,     0,     0,     0,     0,
       0,  2081,  2082,  2083,  2084,  2085,  1993,  2086,     0,     0,
       0,  1994,     0,     0,     0,     0,  1995,  1996,  1997,     0,
       0,     0,     0,  1998,  1999,     0,  2000,  2001,  2002,  2003,
       0,     0,  2004,     0,  2543,  2006,  2007,  2008,     0,  2009,
       0,  2010,  2011,     0,  2012,     0,  2013,  2014,     0,  2015,
    2016,  2017,  2018,     0,     0,     0,     0,     0,  2019,     0,
    2020,     0,  2021,  2022,     0,  2023,  2024,  2025,  2026,  2027,
    2028,     0,  2029,  2030,  2031,  2032,  2033,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2034,     0,  2035,
       0,  2036,     0,     0,     0,     0,     0,     0,     0,     0,
    2037,     0,  2038,  2039,  2040,  2041,  2042,  2043,  2044,     0,
       0,  2045,  2046,     0,     0,     0,     0,  2047,     0,  2048,
    2049,  2050,     0,  2051,     0,  2052,     0,  2053,  2054,  2055,
    2056,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2057,
    2058,  2059,     0,     0,     0,     0,     0,     0,     0,  2060,
       0,  2061,  2062,  2063,     0,     0,     0,     0,  2064,     0,
    2065,  2066,  2067,     0,     0,     0,  2068,     0,     0,     0,
    2069,  2070,     0,     0,  2071,  2072,  2073,  2074,     0,     0,
       0,  2075,   642,   643,   644,   645,   646,   647,   648,     0,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2076,  2077,  2078,  2079,  2080,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1957,
    1958,  1959,  1960,  1961,  1962,     0,  1963,     0,  1964,     0,
       0,     0,  1965,  1966,  1967,     0,  1968,  1213,     0,     0,
       0,     0,  1969,  1970,  1971,  1972,  1973,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1974,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1975,  1976,     0,     0,
    1977,     0,     0,     0,     0,  1978,  1979,  1980,  1981,  1982,
       0,     0,  1983,     0,  1984,  1985,  1986,     0,     0,  1987,
    1988,     0,  1989,  1990,  1991,     0,     0,     0,  1992,     0,
       0,     0,     0,     0,     0,     0,     0,  2081,  2082,  2083,
    2084,  2085,  1993,  2086,     0,     0,     0,  1994,     0,     0,
       0,     0,  1995,  1996,  1997,     0,     0,     0,     0,  1998,
    1999,     0,  2000,  2001,  2002,  2003,     0,     0,  2004,     0,
    2544,  2006,  2007,  2008,     0,  2009,     0,  2010,  2011,     0,
    2012,     0,  2013,  2014,     0,  2015,  2016,  2017,  2018,     0,
       0,     0,     0,     0,  2019,     0,  2020,     0,  2021,  2022,
       0,  2023,  2024,  2025,  2026,  2027,  2028,     0,  2029,  2030,
    2031,  2032,  2033,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2034,     0,  2035,     0,  2036,     0,     0,
       0,     0,     0,     0,     0,     0,  2037,     0,  2038,  2039,
    2040,  2041,  2042,  2043,  2044,     0,     0,  2045,  2046,     0,
       0,     0,     0,  2047,     0,  2048,  2049,  2050,     0,  2051,
       0,  2052,     0,  2053,  2054,  2055,  2056,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2057,  2058,  2059,     0,     0,
       0,     0,     0,     0,     0,  2060,     0,  2061,  2062,  2063,
       0,     0,     0,     0,  2064,     0,  2065,  2066,  2067,     0,
       0,     0,  2068,     0,     0,     0,  2069,  2070,     0,     0,
    2071,  2072,  2073,  2074,     0,     0,     0,  2075,   642,   643,
     644,   645,   646,   647,   648,     0,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2076,  2077,
    2078,  2079,  2080,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1957,  1958,  1959,  1960,  1961,
    1962,     0,  1963,     0,  1964,     0,     0,     0,  1965,  1966,
    1967,     0,  1968,  1214,     0,     0,     0,     0,  1969,  1970,
    1971,  1972,  1973,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1974,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1975,  1976,     0,     0,  1977,     0,     0,     0,
       0,  1978,  1979,  1980,  1981,  1982,     0,     0,  1983,     0,
    1984,  1985,  1986,     0,     0,  1987,  1988,     0,  1989,  1990,
    1991,     0,     0,     0,  1992,     0,     0,     0,     0,     0,
       0,     0,     0,  2081,  2082,  2083,  2084,  2085,  1993,  2086,
       0,     0,     0,  1994,     0,     0,     0,     0,  1995,  1996,
    1997,     0,     0,     0,     0,  1998,  1999,     0,  2000,  2001,
    2002,  2003,     0,     0,  2004,     0,  2628,  2006,  2007,  2008,
       0,  2009,     0,  2010,  2011,     0,  2012,     0,  2013,  2014,
       0,  2015,  2016,  2017,  2018,     0,     0,     0,     0,     0,
    2019,     0,  2020,     0,  2021,  2022,     0,  2023,  2024,  2025,
    2026,  2027,  2028,     0,  2029,  2030,  2031,  2032,  2033,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2034,
       0,  2035,     0,  2036,     0,     0,     0,     0,     0,     0,
       0,     0,  2037,     0,  2038,  2039,  2040,  2041,  2042,  2043,
    2044,     0,     0,  2045,  2046,     0,     0,     0,     0,  2047,
       0,  2048,  2049,  2050,     0,  2051,     0,  2052,     0,  2053,
    2054,  2055,  2056,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2057,  2058,  2059,     0,     0,     0,     0,     0,     0,
       0,  2060,     0,  2061,  2062,  2063,     0,     0,     0,     0,
    2064,     0,  2065,  2066,  2067,     0,     0,     0,  2068,     0,
       0,     0,  2069,  2070,     0,     0,  2071,  2072,  2073,  2074,
       0,     0,     0,  2075,   642,   643,   644,   645,   646,   647,
     648,     0,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2076,  2077,  2078,  2079,  2080,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1957,  1958,  1959,  1960,  1961,  1962,     0,  1963,     0,
    1964,     0,     0,     0,  1965,  1966,  1967,     0,  1968,  1221,
       0,     0,     0,     0,  1969,  1970,  1971,  1972,  1973,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1974,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1975,  1976,
       0,     0,  1977,     0,     0,     0,     0,  1978,  1979,  1980,
    1981,  1982,     0,     0,  1983,     0,  1984,  1985,  1986,     0,
       0,  1987,  1988,     0,  1989,  1990,  1991,     0,     0,     0,
    1992,     0,     0,     0,     0,     0,     0,     0,     0,  2081,
    2082,  2083,  2084,  2085,  1993,  2086,     0,     0,     0,  1994,
       0,     0,     0,     0,  1995,  1996,  1997,     0,     0,     0,
       0,  1998,  1999,     0,  2000,  2001,  2002,  2003,     0,     0,
    2004,     0,  2631,  2006,  2007,  2008,     0,  2009,     0,  2010,
    2011,     0,  2012,     0,  2013,  2014,     0,  2015,  2016,  2017,
    2018,     0,     0,     0,     0,     0,  2019,     0,  2020,     0,
    2021,  2022,     0,  2023,  2024,  2025,  2026,  2027,  2028,     0,
    2029,  2030,  2031,  2032,  2033,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2034,     0,  2035,     0,  2036,
       0,     0,     0,     0,     0,     0,     0,     0,  2037,     0,
    2038,  2039,  2040,  2041,  2042,  2043,  2044,     0,     0,  2045,
    2046,     0,     0,     0,     0,  2047,     0,  2048,  2049,  2050,
       0,  2051,     0,  2052,     0,  2053,  2054,  2055,  2056,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2057,  2058,  2059,
       0,     0,     0,     0,     0,     0,     0,  2060,     0,  2061,
    2062,  2063,     0,     0,     0,     0,  2064,     0,  2065,  2066,
    2067,     0,     0,     0,  2068,     0,     0,     0,  2069,  2070,
       0,     0,  2071,  2072,  2073,  2074,     0,     0,     0,  2075,
     642,   643,   644,   645,   646,   647,   648,     0,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2076,  2077,  2078,  2079,  2080,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1957,  1958,  1959,
    1960,  1961,  1962,     0,  1963,     0,  1964,     0,     0,     0,
    1965,  1966,  1967,     0,  1968,  1222,     0,     0,     0,     0,
    1969,  1970,  1971,  1972,  1973,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1974,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1975,  1976,     0,     0,  1977,     0,
       0,     0,     0,  1978,  1979,  1980,  1981,  1982,     0,     0,
    1983,     0,  1984,  1985,  1986,     0,     0,  1987,  1988,     0,
    1989,  1990,  1991,     0,     0,     0,  1992,     0,     0,     0,
       0,     0,     0,     0,     0,  2081,  2082,  2083,  2084,  2085,
    1993,  2086,     0,     0,     0,  1994,     0,     0,     0,     0,
    1995,  1996,  1997,     0,     0,     0,     0,  1998,  1999,     0,
    2000,  2001,  2002,  2003,     0,     0,  2004,     0,  2676,  2006,
    2007,  2008,     0,  2009,     0,  2010,  2011,     0,  2012,     0,
    2013,  2014,     0,  2015,  2016,  2017,  2018,     0,     0,     0,
       0,     0,  2019,     0,  2020,     0,  2021,  2022,     0,  2023,
    2024,  2025,  2026,  2027,  2028,     0,  2029,  2030,  2031,  2032,
    2033,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2034,     0,  2035,     0,  2036,     0,     0,     0,     0,
       0,     0,     0,     0,  2037,     0,  2038,  2039,  2040,  2041,
    2042,  2043,  2044,     0,     0,  2045,  2046,     0,     0,     0,
       0,  2047,     0,  2048,  2049,  2050,     0,  2051,     0,  2052,
       0,  2053,  2054,  2055,  2056,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2057,  2058,  2059,     0,     0,     0,     0,
       0,     0,     0,  2060,     0,  2061,  2062,  2063,     0,     0,
       0,     0,  2064,     0,  2065,  2066,  2067,     0,     0,     0,
    2068,     0,     0,     0,  2069,  2070,     0,     0,  2071,  2072,
    2073,  2074,     0,     0,     0,  2075,   642,   643,   644,   645,
     646,   647,   648,     0,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2076,  2077,  2078,  2079,
    2080,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1957,  1958,  1959,  1960,  1961,  1962,     0,
    1963,     0,  1964,     0,     0,     0,  1965,  1966,  1967,     0,
    1968,  1223,     0,     0,     0,     0,  1969,  1970,  1971,  1972,
    1973,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1974,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1975,  1976,     0,     0,  1977,     0,     0,     0,     0,  1978,
    1979,  1980,  1981,  1982,     0,     0,  1983,     0,  1984,  1985,
    1986,     0,     0,  1987,  1988,     0,  1989,  1990,  1991,     0,
       0,     0,  1992,     0,     0,     0,     0,     0,     0,     0,
       0,  2081,  2082,  2083,  2084,  2085,  1993,  2086,     0,     0,
       0,  1994,     0,     0,     0,     0,  1995,  1996,  1997,     0,
       0,     0,     0,  1998,  1999,     0,  2000,  2001,  2002,  2003,
       0,     0,  2004,     0,  2716,  2006,  2007,  2008,     0,  2009,
       0,  2010,  2011,     0,  2012,     0,  2013,  2014,     0,  2015,
    2016,  2017,  2018,     0,     0,     0,     0,     0,  2019,     0,
    2020,     0,  2021,  2022,     0,  2023,  2024,  2025,  2026,  2027,
    2028,     0,  2029,  2030,  2031,  2032,  2033,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2034,     0,  2035,
       0,  2036,     0,     0,     0,     0,     0,     0,     0,     0,
    2037,     0,  2038,  2039,  2040,  2041,  2042,  2043,  2044,     0,
       0,  2045,  2046,     0,     0,     0,     0,  2047,     0,  2048,
    2049,  2050,     0,  2051,     0,  2052,     0,  2053,  2054,  2055,
    2056,     0,   247,   248,   249,   250,   251,   252,     0,     0,
       0,     0,     0,     0,     0,     0,   253,   254,     0,  2057,
    2058,  2059,     0,     0,     0,     0,   255,     0,     0,  2060,
       0,  2061,  2062,  2063,     0,     0,     0,     0,  2064,     0,
    2065,  2066,  2067,     0,     0,     0,  2068,     0,     0,     0,
    2069,  2070,     0,     0,  2071,  2072,  2073,  2074,     0,     0,
       0,  2075,     0,     0,   875,     0,     0,     0,     0,     0,
       0,   258,     0,     0,     0,     0,   259,     0,     0,   260,
     261,     0,     0,     0,     0,     0,     0,     0,   262,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2076,  2077,  2078,  2079,  2080,   642,   643,   644,
     645,   646,   647,   648,     0,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,     0,     0,     0,     0,     0,     0,
     642,   643,   644,   645,   646,   647,   648,  1224,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   876,     0,     0,
       0,     0,   266,     0,     0,   642,   643,   644,   645,   646,
     647,   648,   267,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,     0,     0,  2081,  2082,  2083,
    2084,  2085,     0,  2086,   268,   642,   643,   644,   645,   646,
     647,   648,     0,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,   877,     0,     0,     0,     0,     0,     0,
       0,     0,   273,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,   312,
       0,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,     0,
       0,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
       0,   360,   361,   362,   363,     0,     0,     0,     0,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
       0,   375,   376,   377,     0,   247,   248,   249,   250,   251,
     252,     0,     0,     0,     0,     0,     0,     0,     0,   253,
     254,     0,     0,   378,     0,     0,     0,     0,     0,   255,
       0,     0,     0,   379,   380,     0,     0,     0,     0,     0,
       0,     0,   999,     0,     0,     0,     0,     0,   381,  1000,
     643,   644,   645,   646,   647,   648,     0,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   258,   666,     0,     0,     0,   259,
       0,     0,   260,   261,   642,   643,   644,   645,   646,   647,
     648,   262,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,     0,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,     0,     0,
       0,   642,   643,   644,   645,   646,   647,   648,  1226,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1227,     0,     0,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,   642,   643,   644,   645,
     646,   647,   648,     0,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,  1228,   268,     0,     0,
       0,     0,     0,     0,  1001,   642,   643,   644,   645,   646,
     647,   648,     0,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,   273,  1234,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,     0,     0,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,     0,   360,   361,   362,   363,     0,     0,
       0,     0,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   376,   377,   247,   248,   249,
     250,   251,   252,     0,     0,     0,     0,     0,     0,     0,
       0,   253,   254,     0,     0,     0,   378,     0,     0,     0,
       0,   255,     0,     0,     0,     0,   379,   380,     0,     0,
       0,     0,     0,     0,   642,   643,   644,   645,   646,   647,
     648,  1002,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,   258,     0,     0,     0,
       0,   259,     0,     0,   260,   261,   642,   643,   644,   645,
     646,   647,   648,   262,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,     0,   642,   643,
     644,   645,   646,   647,   648,  1236,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   642,   643,   644,   645,   646,
     647,   648,  1241,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1242,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267,   642,   643,
     644,   645,   646,   647,   648,     0,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,   268,
     642,   643,   644,   645,   646,   647,   648,  1243,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   273,     0,     0,
       0,     0,     0,     0,     0,     0,  1244,     0,     0,   529,
       0,     0,     0,     0,     0,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,     0,     0,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,     0,   360,   361,   362,   363,
       0,     0,     0,     0,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   376,   377,   247,
     248,   249,   250,   251,   252,     0,     0,     0,     0,     0,
       0,     0,     0,   253,   254,     0,     0,     0,   378,     0,
       0,     0,     0,   255,   916,     0,     0,     0,   379,   380,
       0,     0,     0,     0,     0,     0,   642,   643,   644,   645,
     646,   647,   648,   381,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,     0,   258,     0,
       0,     0,     0,   259,     0,  1256,   260,   261,   642,   643,
     644,   645,   646,   647,   648,   262,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,     0,
     642,   643,   644,   645,   646,   647,   648,  1257,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,   642,   643,   644,   645,   646,   647,   648,  1258,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,     0,     0,  1260,     0,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
     642,   643,   644,   645,   646,   647,   648,     0,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,   268,   642,   643,   644,   645,   646,   647,   648,  1271,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   273,
       0,  1280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,     0,     0,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,     0,   360,   361,
     362,   363,     0,     0,     0,     0,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,     0,   375,   376,
     377,   247,   248,   249,   250,   251,   252,     0,     0,     0,
       0,     0,     0,     0,     0,   253,   254,     0,     0,     0,
     378,     0,     0,     0,     0,   255,     0,     0,     0,     0,
     379,   380,     0,     0,     0,     0,     0,     0,   642,   643,
     644,   645,   646,   647,   648,   381,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,     0,
     258,     0,     0,     0,     0,   259,     0,  1281,   260,   261,
     642,   643,   644,   645,   646,   647,   648,   262,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1282,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   642,   643,   644,   645,   646,   647,
     648,  1283,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,  1284,     0,     0,     0,     0,     0,     0,
       0,   267,   642,   643,   644,   645,   646,   647,   648,     0,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,   268,   642,   643,   644,   645,   646,   647,
     648,  1285,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   273,     0,  1286,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,     0,     0,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,     0,
     360,   361,   362,   363,     0,     0,     0,     0,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,     0,
     375,   376,   377,   247,   248,   249,   250,   251,   252,     0,
       0,     0,     0,     0,     0,     0,     0,   253,   254,     0,
       0,     0,   378,     0,     0,     0,     0,   255,     0,     0,
       0,     0,   379,   380,     0,     0,     0,     0,     0,     0,
     642,   643,   644,   645,   646,   647,   648,   381,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,   258,     0,     0,     0,     0,   259,     0,  1287,
     260,   261,   642,   643,   644,   645,   646,   647,   648,   262,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,  1766,   642,   643,   644,   645,   646,   647,
     648,  1293,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,     0,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   266,     0,  1297,     0,     0,     0,     0,
       0,     0,     0,   267,   642,   643,   644,   645,   646,   647,
     648,     0,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,   268,   642,   643,   644,   645,
     646,   647,   648,  1298,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   273,     0,  1299,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
       0,     0,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,     0,   360,   361,   362,   363,     0,     0,     0,     0,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,     0,   375,   376,   377,   247,   248,   249,   250,   251,
     252,     0,     0,     0,     0,     0,     0,     0,     0,   253,
     254,     0,     0,     0,   378,     0,     0,     0,     0,   255,
       0,     0,     0,     0,   379,   380,     0,     0,     0,     0,
       0,     0,   642,   643,   644,   645,   646,   647,   648,   381,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,   258,     0,     0,     0,     0,   259,
       0,  1300,   260,   261,   642,   643,   644,   645,   646,   647,
     648,   262,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,  1771,   642,   643,   644,   645,
     646,   647,   648,  1301,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,     0,   642,   643,
     644,   645,   646,   647,   648,  1305,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,     0,
       0,     0,  1306,     0,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,   642,   643,   644,   645,
     646,   647,   648,     0,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,   268,   642,   643,
     644,   645,   646,   647,   648,  1307,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,     0,  1309,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,     0,     0,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,     0,   360,   361,   362,   363,     0,     0,
       0,     0,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   376,   377,   247,   248,   249,
     250,   251,   252,     0,     0,     0,     0,     0,     0,     0,
       0,   253,   254,     0,     0,     0,   378,     0,     0,     0,
       0,   255,     0,     0,     0,     0,   379,   380,     0,     0,
       0,     0,     0,     0,   642,   643,   644,   645,   646,   647,
     648,   381,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,   258,     0,     0,     0,
       0,   259,     0,  1505,   260,   261,   642,   643,   644,   645,
     646,   647,   648,   262,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,  2335,   642,   643,
     644,   645,   646,   647,   648,  1793,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,     0,
     642,   643,   644,   645,   646,   647,   648,  1794,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,  1805,
       0,     0,     0,     0,     0,     0,     0,   267,   642,   643,
     644,   645,   646,   647,   648,     0,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,   268,
     642,   643,   644,   645,   646,   647,   648,  1815,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   273,     0,  1831,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,     0,     0,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,     0,   360,   361,   362,   363,
       0,     0,     0,     0,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   376,   377,   247,
     248,   249,   250,   251,   252,     0,     0,     0,     0,     0,
       0,     0,     0,   253,   254,     0,     0,     0,   378,     0,
       0,     0,     0,   255,     0,     0,     0,     0,   379,   380,
       0,     0,     0,     0,     0,     0,   642,   643,   644,   645,
     646,   647,   648,   381,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,     0,   258,     0,
       0,     0,     0,   259,     0,  1832,   260,   261,   642,   643,
     644,   645,   646,   647,   648,   262,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,  2337,
     642,   643,   644,   645,   646,   647,   648,  1833,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,   642,   643,   644,   645,   646,   647,   648,  1836,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   266,
       0,  1837,     0,     0,     0,     0,     0,     0,     0,   267,
     642,   643,   644,   645,   646,   647,   648,     0,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,   268,   642,   643,   644,   645,   646,   647,   648,  1850,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   273,
       0,  1851,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,     0,     0,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,     0,   360,   361,
     362,   363,     0,     0,     0,     0,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,     0,   375,   376,
     377,   247,   248,   249,   250,   251,   252,     0,     0,     0,
       0,     0,     0,     0,     0,   253,   254,     0,     0,     0,
     378,     0,     0,     0,     0,   255,     0,     0,     0,     0,
     379,   380,     0,     0,     0,     0,     0,     0,   642,   643,
     644,   645,   646,   647,   648,   381,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,     0,
     258,     0,     0,     0,     0,   259,     0,  1852,   260,   261,
     642,   643,   644,   645,   646,   647,   648,   262,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,   642,   643,   644,   645,   646,   647,   648,  2378,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2381,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1781,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,  2382,   642,   643,   644,   645,   646,   647,
     648,   267,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   268,   642,   643,   644,   645,   646,   647,
     648,  2383,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   273,  1209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,     0,     0,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,     0,
     360,   361,   362,   363,     0,     0,     0,     0,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,     0,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   378,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,     0,     0,     0,     0,     0,     0,
     642,   643,   644,   645,   646,   647,   648,   381,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,   642,   643,   644,   645,   646,   647,   648,  1782,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   642,   643,   644,   645,   646,   647,   648,
    1215,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   666,
       0,     0,     0,     0,     0,   642,   643,   644,   645,   646,
     647,   648,  1216,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   642,   643,   644,   645,   646,   647,   648,     0,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,   642,
     643,   644,   645,   646,   647,   648,     0,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,  1217,   666,   642,   643,   644,   645,
     646,   647,   648,     0,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,   642,   643,   644,
     645,   646,   647,   648,  1218,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   642,   643,   644,   645,   646,   647,
     648,     0,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,     0,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   642,   643,
     644,   645,   646,   647,   648,     0,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   642,   643,   644,   645,   646,
     647,   648,     0,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   642,   643,   644,   645,   646,   647,   648,     0,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,   642,
     643,   644,   645,   646,   647,   648,     0,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,   666,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   642,   643,   644,   645,   646,   647,   648,
    1219,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   666,
       0,     0,     0,     0,   642,   643,   644,   645,   646,   647,
     648,  1220,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   642,   643,   644,   645,
     646,   647,   648,  1225,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,     0,   642,   643,
     644,   645,   646,   647,   648,  1229,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   642,   643,   644,   645,   646,
     647,   648,  1230,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   642,   643,   644,   645,   646,   647,   648,  1231,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,   642,
     643,   644,   645,   646,   647,   648,  1235,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,   666,     0,     0,     0,     0,
     642,   643,   644,   645,   646,   647,   648,  1237,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   642,   643,   644,
     645,   646,   647,   648,  1238,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   642,   643,   644,   645,   646,   647,
     648,  1239,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,  1248,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   642,   643,
     644,   645,   646,   647,   648,  1249,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   642,   643,   644,   645,   646,
     647,   648,  1250,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   642,   643,   644,   645,   646,   647,   648,  1251,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   642,   643,   644,   645,
     646,   647,   648,  1252,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,   642,   643,   644,
     645,   646,   647,   648,  1253,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   642,
     643,   644,   645,   646,   647,   648,  1254,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,   666,     0,     0,     0,     0,
       0,   642,   643,   644,   645,   646,   647,   648,  1255,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   642,   643,
     644,   645,   646,   647,   648,  1259,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   642,   643,   644,   645,   646,
     647,   648,  1272,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   642,   643,   644,   645,   646,   647,   648,  1273,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,   642,   643,   644,   645,   646,   647,   648,
    1274,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     642,   643,   644,   645,   646,   647,   648,  1275,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   642,   643,   644,
     645,   646,   647,   648,  1276,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   642,   643,   644,   645,   646,   647,
     648,  1277,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,  1278,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   642,   643,
     644,   645,   646,   647,   648,  1279,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   642,   643,   644,   645,   646,
     647,   648,  1290,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   642,
     643,   644,   645,   646,   647,   648,  1291,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,   666,     0,     0,     0,     0,
     642,   643,   644,   645,   646,   647,   648,  1292,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   642,   643,   644,   645,   646,   647,   648,  1296,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,   642,   643,   644,   645,   646,   647,
     648,  1302,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,  1303,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   642,   643,
     644,   645,   646,   647,   648,  1304,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   642,   643,   644,   645,   646,
     647,   648,  1308,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,     0,   642,   643,   644,   645,
     646,   647,   648,  1334,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,   642,   643,   644,   645,   646,   647,   648,
    1785,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     642,   643,   644,   645,   646,   647,   648,  1790,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   642,   643,   644,
     645,   646,   647,   648,  1791,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   642,   643,   644,   645,   646,   647,
     648,  1792,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,  1795,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   642,   643,
     644,   645,   646,   647,   648,  1796,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   642,   643,   644,   645,   646,   647,   648,  1797,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,   642,   643,   644,   645,   646,   647,   648,
    1798,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   666,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   642,   643,   644,   645,   646,
     647,   648,  1799,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,     0,     0,   642,   643,   644,
     645,   646,   647,   648,  1800,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   642,   643,   644,   645,   646,   647,
     648,  1803,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,  1804,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   642,   643,
     644,   645,   646,   647,   648,  1816,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,   642,
     643,   644,   645,   646,   647,   648,  1817,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,   666,   642,   643,   644,   645,
     646,   647,   648,  1830,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,   642,   643,   644,   645,   646,   647,   648,
    1834,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     642,   643,   644,   645,   646,   647,   648,  1835,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   642,   643,   644,
     645,   646,   647,   648,  1844,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   642,   643,   644,   645,   646,   647,
     648,  1845,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,  1846,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   642,   643,   644,   645,   646,
     647,   648,  1847,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,     0,   642,   643,   644,   645,
     646,   647,   648,  1848,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   642,   643,
     644,   645,   646,   647,   648,  1849,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,     0,
     642,   643,   644,   645,   646,   647,   648,  1853,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   642,   643,   644,
     645,   646,   647,   648,  1939,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   642,   643,   644,   645,   646,   647,
     648,  2156,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   642,   643,   644,   645,   646,   647,   648,  2236,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,     0,     0,
       0,     0,   642,   643,   644,   645,   646,   647,   648,  2311,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,   642,
     643,   644,   645,   646,   647,   648,  2343,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,   666,   642,   643,   644,   645,
     646,   647,   648,  2344,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,   642,   643,   644,   645,   646,   647,   648,
    2345,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     642,   643,   644,   645,   646,   647,   648,  2346,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   642,   643,   644,
     645,   646,   647,   648,  2347,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   642,   643,   644,   645,   646,   647,
     648,  2356,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   642,   643,
     644,   645,   646,   647,   648,  2373,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666,     0,     0,     0,     0,   642,
     643,   644,   645,   646,   647,   648,  2374,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,    91,   666,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   642,   643,   644,   645,   646,   647,   648,  2375,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,     0,     0,
       0,     0,     0,   642,   643,   644,   645,   646,   647,   648,
    2376,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   666,
       0,     0,     0,     0,     0,     0,     0,  2377,     0,    92,
       0,     0,     0,     0,     0,     0,    93,     0,     1,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2379,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,    94,    95,     4,     0,     0,     0,     0,     0,
       0,  2380,     0,     0,     0,     0,     0,     5,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     7,
       0,     0,  2417,   644,   645,   646,   647,   648,     0,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,    97,   666,     0,  2423,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,    99,     0,     0,     8,     0,
       0,   100,     0,     0,     0,     0,  2427,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2432,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,    13,
       0,     0,     0,     0,     0,     0,     0,    14,     0,     0,
    2557,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,  2564,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,    18,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,  2590,   642,   643,   644,   645,   646,
     647,   648,     0,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2603,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
       0,     0,     0,     0,     0,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2625,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
     108,     0,     0,   109,     0,     0,     0,     0,   110,  2157,
    2158,     0,     0,     0,  2159,     0,  2160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2626,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,  2161,
    2162,     0,  2163,     0,     0,     0,     0,     0,     0,     0,
      22,    23,     0,  2682,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,    25,   642,   643,   644,   645,
     646,   647,   648,     0,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,   666,   642,   643,   644,   645,   646,   647,   648,
       0,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     642,   643,   644,   645,   646,   647,   648,     0,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   752,   753,     0,
     754,     0,   755,   756,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   757,     0,
       0,     0,     0,  2164,  2165,  -856,  -856,  -856,  -856,     0,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
     758,   759,   760,   761,     0,     0,     0,     0,     0,   762,
       0,   642,   643,   644,   645,   646,   647,   648,   763,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   764,     0,
       0,     0,     0,     0,     0,     0,   765,     0,     0,     0,
    2135,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   766,     0,     0,     0,     0,     0,     0,   767,     0,
       0,   768,     0,     0,   769,   770,     0,     0,     0,     0,
       0,     0,     0,     0,   642,   643,   644,   645,   646,   647,
     648,   771,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
     666,     0,     0,  2136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   772,   773,     0,     0,   774,
     775,   529,     0,     0,     0,   776,  1198,   777,     0,     0,
       0,     0,   778,   779,     0,     0,     0,     0,   780,     0,
     781,     0,     0,     0,     0,     0,   782,     0,   783,   784,
       0,     0,     0,  1503,   785,   642,   643,   644,   645,   646,
     647,   648,     0,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   642,   643,   644,   645,   646,   647,   648,
    1511,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   641,   666,
       0,     0,     0,     0,     0,   642,   643,   644,   645,   646,
     647,   648,     0,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   667,     0,     0,  1502,
     642,   643,   644,   645,   646,   647,   648,     0,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1777,     0,     0,
       0,  1240,   642,   643,   644,   645,   646,   647,   648,     0,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,   666,     0,
       0,     0,     0,     0,     0,   642,   643,   644,   645,   646,
     647,   648,  1318,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   666,     0,     0,     0,     0,     0,     0,   642,   643,
     644,   645,   646,   647,   648,  1577,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,   666
};

static const yytype_int16 yycheck[] =
{
     141,  1338,   398,  1760,  1414,  1701,  1600,  1743,   834,  1458,
     392,   687,  1886,   388,  1611,  1371,  1372,  1745,   465,  2120,
    1430,  1377,  1112,  1113,     3,     3,    20,    20,  1118,     3,
    1120,    18,  2126,  1443,   107,   136,   136,   140,  1031,   107,
    1479,  1877,   154,     6,   159,   107,     3,   199,     3,     4,
       5,     6,     7,     8,    36,    18,     3,   154,   159,   240,
     199,     5,     8,    49,    48,   240,  1193,     4,  1195,   392,
       3,   240,    38,   266,  1196,    90,     4,     4,    48,    87,
    2179,  2180,   107,    16,  1636,  1637,   108,   137,     6,    78,
     274,  2190,  2191,     3,    51,   157,     3,    71,   252,     4,
     277,   242,   243,  1655,   216,    78,   730,   266,    51,    75,
      84,   493,   253,   254,   255,     3,     3,     3,   259,   216,
      97,     3,   197,   136,    36,   230,   112,   252,     3,     5,
       3,   266,   139,   266,   100,     3,     4,     5,     6,     7,
       8,   274,   108,  1879,   274,   134,   277,   266,   277,     3,
     200,     3,     3,   258,   120,    49,   266,    10,    11,    12,
      13,    14,    15,    16,   788,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   266,    36,   266,   235,     3,    63,   172,    87,
    1312,   266,    71,  1819,  1820,   202,   258,   184,    84,    78,
      78,    99,  1828,  1829,   107,     3,     3,     3,    95,    84,
    1036,   154,   201,   197,   179,    54,    55,   150,   112,     3,
       3,   187,    55,     4,     5,     6,     7,   197,   201,   136,
     193,   113,   245,   258,  1930,    74,   258,   135,   193,   351,
     381,   249,   208,   258,   228,   143,  1942,   154,   441,  2348,
    2349,  2350,  2351,  2352,  2353,   134,   134,   441,   228,   138,
     441,   438,   195,  2362,   439,   193,   193,  2366,   156,   176,
     439,  2370,   261,   216,   240,   193,   155,     3,  1688,   184,
     439,   227,  1638,  1979,  1881,   164,   401,   669,   261,   441,
    1700,    72,   269,   277,  1990,   193,   203,  1746,   241,   236,
     237,   676,   441,   269,   439,   438,  1716,   277,   441,   274,
     441,   441,   441,   167,  2010,   167,  2152,  1756,   252,   173,
     439,   173,   201,   201,   417,   193,   438,   439,  2024,   439,
     398,   399,   400,   277,   407,  1328,   398,  2033,   441,   407,
     441,   441,   439,    98,   242,   248,   241,   417,   327,   328,
     329,   330,  1178,     3,  1906,   439,   319,   439,   156,   156,
     156,  2462,   435,   436,     0,     5,  1042,   351,  1495,  2463,
    1497,   210,   156,   156,   437,   208,   271,  2073,    28,   277,
      20,   351,   261,   261,   525,  2121,  2122,   241,   529,   376,
     377,   378,   379,    71,   149,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,    84,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,     3,   564,   565,   566,   404,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   438,   438,  1070,  1071,   422,   590,
     591,   833,   438,  1575,   595,   596,  1080,   404,   440,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   438,   623,   624,   625,   440,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,  2595,   638,   639,  1325,
    2599,   642,   643,   644,   645,   646,  1130,  1131,  1132,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,  2400,   381,   440,   381,
     671,   404,   855,    18,   219,   858,   677,    74,    40,   255,
    1950,   439,  1952,  2169,  2170,  2171,  2172,  2173,  2174,     3,
     873,    18,   333,   334,   335,  2181,    74,    74,     3,  2185,
       3,  2257,    71,  2189,     3,     3,  2262,   252,     3,   252,
      76,     3,  2329,   268,    71,   156,     3,     3,  1668,   113,
    1670,  1671,  2310,     3,   113,   439,     3,   439,    18,   442,
      62,     3,     3,     3,    66,     3,     3,  2696,  2697,     3,
    2699,  2700,     3,   124,   125,   107,   322,  2744,   204,    39,
     124,   125,    97,   133,     3,   177,  1240,  1241,    48,     3,
     268,    51,     3,    53,     5,    51,    56,  2224,  2385,   100,
      97,    87,   241,   104,   154,   259,  2773,  2774,     3,    28,
      85,    71,   114,    99,    51,   117,    85,   153,    78,    79,
    1025,  1098,  1099,   215,    71,   157,   280,   163,   439,   193,
     132,    39,   271,     3,   193,  1341,     3,    84,  1344,  2806,
     415,   177,   268,   210,   192,   192,   396,   100,     9,   135,
     152,    59,     3,   113,   190,  2095,   371,   143,   160,    20,
     831,  2101,   210,   210,   439,    51,   391,   120,   183,    14,
     130,  2686,   156,    18,    60,   100,   439,  1030,   217,   215,
     156,   156,   197,   156,   430,   431,   183,   156,   156,   404,
     217,   156,   240,   240,   156,   120,   867,   868,   199,   156,
     197,   872,   238,  2429,   164,    18,   156,   193,   879,   241,
     100,   426,  2616,   391,   156,   156,   156,   267,   156,  1373,
     155,  2447,   156,    36,   275,   156,   258,  2742,  2743,   164,
     120,   275,  1588,   193,    51,    51,   216,    51,   398,   399,
     400,   201,  1168,    60,    60,  2131,    60,   249,     3,   251,
     438,   439,    13,    14,   155,    16,   242,  2772,    19,   103,
       3,   103,     3,   103,  2388,    78,    33,    34,   270,    36,
    2397,     3,    10,    11,    12,    13,    14,    15,    16,   103,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   246,    36,     3,
     113,   261,   146,   768,   146,  2592,   146,   440,   441,   774,
     154,   776,   154,   396,   154,  2541,   396,   159,   440,   441,
       3,  2608,   146,   994,   995,   155,   997,  2306,   440,   441,
     154,  1002,   176,  2273,   176,   396,   176,     3,   103,    45,
      46,   223,   224,  2499,  2211,   440,   441,  2503,   252,    18,
       3,  2291,   176,  2293,    10,    11,    12,    13,    14,    15,
      16,   396,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    48,
      36,   146,    51,   396,    53,   440,   441,    56,     3,   154,
      32,    33,    34,   396,    36,  2519,   441,  2524,   136,   171,
    2666,     3,    71,    82,    83,     3,  2632,  2694,  1334,    78,
      79,   176,   440,   441,  1326,    10,    11,    12,    13,    14,
      15,    16,   441,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    36,   440,   441,   113,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,  1127,    36,   440,   441,
    1313,     3,   755,   756,   757,   758,   136,   760,   136,  1322,
     763,   764,   765,   405,   406,   405,   406,   770,   771,   772,
       4,     5,   775,  1105,  1106,  2612,  1108,  1109,  1110,   440,
     441,   409,  1114,  1115,  1116,   164,     3,  1119,     4,     5,
    2656,  2657,   159,  2659,  2660,   136,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,  2456,    36,   440,   441,
     440,   441,  2389,   136,   193,   440,   441,  1198,     3,  1200,
     440,   441,   201,   440,   441,     3,  1207,  1208,   159,  1210,
     440,   441,  2669,  1214,   440,   441,   440,   441,   440,   441,
    1221,  1222,  1223,  1224,   136,  1226,  1227,  1228,   136,   440,
     441,   439,  1233,  1234,   136,  1236,   440,   441,   440,   441,
       3,  1242,  1243,  1244,   440,   441,   440,   441,   159,  2706,
     440,   441,   440,   441,   136,  1256,  1257,  1258,     3,  1260,
     440,   441,   261,   281,  1748,    57,    58,   440,   441,     3,
    1271,   440,   441,   440,   441,   440,   441,    51,  2735,  1280,
    1281,  1282,  1283,  1284,  1285,  1286,  1287,  1470,  1289,   440,
     441,     3,  1293,   197,  1295,  2752,  1297,  1298,  1299,  1300,
    1301,   440,   441,   439,  1305,  1306,  1307,   281,  1309,  2766,
      28,    29,    30,    31,    32,    33,    34,  1318,    36,  1320,
    1321,   439,  2779,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   197,    36,  1335,   440,   441,     3,  2795,   440,
     441,  1342,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     3,    36,
     440,   441,   440,   441,     3,     4,     5,     6,     7,     8,
     440,   441,   140,   441,   440,   441,   440,   441,    17,    18,
     440,   441,   440,   441,   440,   441,   440,   441,    27,    28,
     440,   441,   281,  1576,   440,   441,  1579,   197,  1581,     3,
    1583,    40,   440,   441,    10,    11,    12,    13,    14,    15,
      16,  1412,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   281,
      36,    57,    58,    72,   440,   441,   440,   441,    77,   440,
     441,    80,    81,   440,   441,   440,   441,   440,   441,   439,
      89,   440,   441,   438,   440,   441,   440,   441,   440,   441,
     438,   439,     3,   440,   441,   440,   441,   106,   438,   439,
     281,   110,   440,   441,   440,   441,   440,   441,   440,   441,
     440,   441,   281,  1484,  1038,  1039,   281,  1488,   281,  1330,
    1331,  1871,  1872,  1494,   281,   197,   281,   281,   281,   281,
       3,   245,  1503,     4,  1505,     3,     8,   146,   438,     9,
    1511,  1512,   439,    36,     3,   440,   441,    10,    11,    12,
      13,    14,    15,    16,   439,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   439,    36,   183,   439,   441,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   439,    36,    51,   439,  1577,   439,   439,   439,
     439,   439,   439,   439,   439,     3,   225,   226,   439,   439,
     159,   439,   439,   439,   233,   234,   439,   439,   439,   238,
     439,   439,  1603,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   439,    36,
     439,   439,   439,   439,   263,   439,   439,   439,     3,   439,
     439,  1632,   439,   439,     3,   439,   439,   439,   439,     3,
       3,     3,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     439,   320,   439,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   439,   439,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   439,   372,   373,   374,   375,  1738,   439,   439,
     439,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   439,   392,   393,   394,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     439,    36,   439,    16,   439,   414,   439,   439,   439,   439,
    1781,   439,   439,  1784,   439,   424,   425,   439,   439,   439,
     439,   439,  1793,  1794,   266,   439,   439,   439,   439,   439,
     439,   439,   439,   439,  1805,   439,   439,   439,   439,   439,
     439,   439,   439,  1814,  1815,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   439,    36,   439,
    1831,  1832,  1833,   421,   440,  1836,  1837,   439,  1839,   439,
    1841,   439,  1843,   439,   439,   439,   439,   439,   439,  1850,
    1851,  1852,   439,   439,   439,   439,   439,   439,   321,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
      28,     3,     3,  1874,  1875,     3,     3,    10,    11,    12,
      13,    14,    15,    16,   266,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     3,    36,     3,    53,    53,    44,     3,  1910,
     423,    71,   277,  1914,   245,     3,     4,     5,     6,     7,
       8,     3,    10,  1924,    12,     3,   197,     3,    16,    17,
      18,   197,    20,   281,     3,   197,   281,  1938,    26,    27,
      28,    29,    30,   277,   281,   281,     3,   440,   441,   418,
     428,     3,    40,   277,   281,     3,     3,    28,     3,     3,
       3,     3,    50,    51,     3,     3,    54,     3,     3,    74,
     281,    59,    60,    61,    62,    63,    74,   440,    66,   281,
      68,    69,    70,     3,     3,    73,    74,   281,    76,    77,
      78,   281,     3,     3,    82,    36,     3,     3,   442,   440,
     440,   440,   440,   440,   440,   440,   440,   440,    96,   440,
     440,     5,   440,   101,   440,   440,   440,   440,   106,   107,
     108,     3,     3,   439,     3,   113,   114,     3,   116,   117,
     118,   119,   440,     3,   122,   196,   124,   125,   126,   127,
     163,   129,     3,   131,   132,     3,   134,   271,   136,   137,
       3,   139,   140,   141,   142,   402,   402,   274,   271,   274,
     148,     3,   150,   273,   152,   153,     5,   155,   156,   157,
     158,   159,   160,   274,   162,   163,   164,   165,   166,   440,
     271,   274,   274,   273,   271,   274,     5,    42,    42,   177,
       3,   179,   277,   181,     3,     3,     3,     3,     3,     3,
       3,     3,   190,     3,   192,   193,   194,   195,   196,   197,
     198,     3,     3,   201,   202,   245,     3,     3,   379,   207,
       5,   209,   210,   211,    20,   213,     3,   215,   217,   217,
     218,   219,   220,     5,     5,   439,   217,    64,   439,   439,
    2141,  2142,   439,   439,   439,     3,  2147,   439,  2149,     3,
     439,   239,   240,   241,     3,     3,   440,     3,   441,     3,
     197,   249,   440,   251,   252,   253,   197,    51,   396,     3,
     258,   197,   260,   261,   262,   281,     3,     3,   266,   439,
     277,     3,   270,   271,     3,   197,   274,   275,   276,   277,
     140,     4,   439,   281,   277,     3,   198,   396,     3,     3,
     440,     3,     3,     3,     3,   440,   440,   241,  2209,  2210,
      13,    14,    15,    16,   350,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   350,    36,   322,   323,   324,   325,   326,    10,
      11,    12,    13,    14,    15,    16,   350,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   440,    36,   350,   241,   439,   439,
     350,   439,   439,   136,   164,   441,   164,   197,    10,    11,
      12,    13,    14,    15,    16,  2286,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   164,    36,   439,  2307,   440,   441,    10,
      11,    12,    13,    14,    15,    16,   163,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   163,    36,   271,     4,  2339,     4,
       4,   411,   410,   439,   411,   136,   433,   439,   433,   437,
     438,   439,   440,   441,  2355,   443,     4,     4,     4,   197,
     439,   197,     3,   222,    36,   222,     3,   245,     4,   245,
       5,     5,     3,     3,   439,   193,     5,  2378,     4,   442,
       5,     5,     5,   439,    95,   213,   197,     3,   140,     3,
       3,     3,   397,   439,  2395,   418,   101,   422,   428,   197,
      94,     3,     3,    63,   179,     3,   439,   439,    91,     3,
       4,     5,     6,     7,     8,    20,    10,   199,    12,  2420,
    2421,   442,    16,    17,    18,   440,    20,   161,   139,     4,
     439,   439,    26,    27,    28,    29,    30,     5,   350,   350,
     350,   439,     5,   439,   155,   241,    40,   439,   412,   350,
     274,   350,   350,   350,     3,   350,    50,    51,   140,     3,
      54,   350,   440,     3,   439,    59,    60,    61,    62,    63,
     403,   179,    66,    20,    68,    69,    70,    20,     4,    73,
      74,   179,    76,    77,    78,    20,     3,    20,    82,     4,
       4,   202,   179,     3,   439,   164,   164,     3,   439,     3,
     222,   222,    96,   440,   440,    78,   440,   101,   219,   440,
     221,   440,   106,   107,   108,  2516,   227,   439,   439,   113,
     114,   439,   116,   117,   118,   119,   268,     3,   122,    60,
     124,   125,   126,   127,   140,   129,   396,   131,   132,   245,
     134,   252,   136,   137,   268,   139,   140,   141,   142,     3,
      20,     3,   197,     4,   148,     4,   150,  2558,   152,   153,
     439,   155,   156,   157,   158,   159,   160,    20,   162,   163,
     164,   165,   166,   439,   439,     3,     3,  2578,   164,   164,
       3,     6,     4,   177,   439,   179,   439,   181,   439,   439,
       4,     4,   212,   164,   439,     3,   190,     3,   192,   193,
     194,   195,   196,   197,   198,    51,   441,   201,   202,   439,
     163,   141,     3,   207,   439,   209,   210,   211,   439,   213,
     440,   215,   439,   217,   218,   219,   220,    20,   440,     4,
     440,   440,   439,   439,     5,     4,     4,     3,     5,     4,
       4,   274,   439,     5,   439,   239,   240,   241,   440,   439,
     439,     4,   440,   440,   440,   249,   439,   251,   252,   253,
     371,   439,   439,   439,   258,     5,   260,   261,   262,   440,
     441,   441,   266,   441,   441,   441,   270,   271,   441,   439,
     274,   275,   276,   277,   395,   439,   193,   281,     3,   439,
    2691,   439,   439,   404,    52,     3,   439,     4,   164,   164,
     213,     5,   240,     4,     4,     3,   417,     3,   440,   441,
     439,     3,     3,     3,     3,   426,   439,   118,   429,   439,
       3,     3,   439,   434,   266,     3,    20,   268,   322,   323,
     324,   325,   326,     4,    20,     4,    20,   140,   101,   440,
     441,    20,   439,   439,   439,     3,   439,   258,    20,   441,
     197,     4,   351,   350,   350,     3,     4,     5,     6,     7,
       8,   440,    10,   440,    12,   440,   440,   440,    16,    17,
      18,    94,    20,     3,   148,    63,   439,     3,    26,    27,
      28,    29,    30,   441,    12,    12,    59,     4,     4,   433,
     432,   179,    40,     3,     5,     3,     3,    51,    60,     5,
       5,   439,    50,    51,     4,    60,    54,   439,     3,   140,
     217,    59,    60,    61,    62,    63,   277,   439,    66,   440,
      68,    69,    70,   440,   439,    73,    74,   268,    76,    77,
      78,   440,   440,   440,    82,     5,   439,   441,     4,     4,
       4,   441,     5,   437,   438,   439,   440,   441,    96,   443,
     439,   439,   439,   101,   271,   164,   440,   439,   106,   107,
     108,   164,   439,     3,    88,   113,   114,   441,   116,   117,
     118,   119,   439,    63,   122,   440,   124,   125,   126,   127,
     198,   129,   439,   131,   132,   440,   134,   439,   136,   137,
     440,   139,   140,   141,   142,   440,     3,   413,    20,   164,
     148,   440,   150,   164,   152,   153,     5,   155,   156,   157,
     158,   159,   160,   441,   162,   163,   164,   165,   166,   441,
      20,   441,     5,     5,    43,    18,     3,   439,   164,   177,
       3,   179,   441,   181,   439,     3,    60,   440,   440,   440,
     440,   118,   190,     3,   192,   193,   194,   195,   196,   197,
     198,    78,   439,   201,   202,   136,   439,   439,     3,   207,
     439,   209,   210,   211,     3,   213,    63,   215,    63,   217,
     218,   219,   220,     3,     3,   439,     3,    63,   440,     5,
     440,   440,   440,   440,     5,     5,     5,     3,    20,   350,
     350,   239,   240,   241,   350,   350,   440,    20,   441,     4,
       4,   249,     4,   251,   252,   253,   269,     3,   207,     3,
     258,    60,   260,   261,   262,     5,     5,   277,   266,   440,
      77,   131,   270,   271,   156,   166,   274,   275,   276,   277,
     276,   217,   207,   281,   439,    10,    11,    12,    13,    14,
      15,    16,   439,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       5,    36,     3,    20,   416,   204,   423,     3,   441,   441,
     101,     3,   214,   140,   322,   323,   324,   325,   326,     4,
       4,   440,     3,    60,     3,     5,   440,     3,     3,   440,
     440,   440,   440,   440,   439,   439,     3,   440,   439,   441,
     439,     3,     4,     5,     6,     7,     8,   440,    10,   441,
      12,   440,   439,   441,    16,    17,    18,   439,    20,   440,
     440,   440,    20,   440,    26,    27,    28,    29,    30,   439,
       3,   159,     4,   439,     4,     4,   441,     4,    40,   441,
     439,     3,   207,   440,     3,     3,    20,     4,    50,    51,
       3,     3,    54,     3,   441,   440,   231,    59,    60,    61,
      62,    63,   231,   440,    66,   440,    68,    69,    70,     3,
     440,    73,    74,   440,    76,    77,    78,    20,     3,   245,
      82,   440,     3,   440,   440,   240,     5,   180,   440,   437,
     438,   439,   440,   441,    96,   443,   440,   440,   180,   101,
     441,   441,   439,   441,   106,   107,   108,   439,   439,     3,
       5,   113,   114,     3,   116,   117,   118,   119,   229,   440,
     122,   440,   124,   125,   126,   127,   440,   129,   440,   131,
     132,   228,   134,     5,   136,   137,   440,   139,   140,   141,
     142,     3,   439,   441,   174,   441,   148,   151,   150,    97,
     152,   153,   441,   155,   156,   157,   158,   159,   160,   271,
     162,   163,   164,   165,   166,   250,   440,   440,   197,   197,
       5,     5,   166,   191,   191,   177,  1505,   179,  1868,   181,
     530,  1321,   671,  1213,  1607,   681,  2212,  2140,   190,   202,
     192,   193,   194,   195,   196,   197,   198,   843,   835,   201,
     202,  2630,  2440,  2715,  1450,   207,  1456,   209,   210,   211,
    1150,   213,  1153,   215,   714,   217,   218,   219,   220,  1161,
    2106,  2112,  1066,  1712,  1441,  2094,  2289,  2452,  2726,   136,
    1194,   519,  2339,   857,  2778,  2306,  1758,   239,   240,   241,
    1735,  1747,  1366,  1117,   474,   246,    -1,   249,    -1,   251,
     252,   253,    -1,  1134,   749,    -1,   258,    -1,   260,   261,
     262,  1928,    -1,    -1,   266,    -1,    -1,    -1,   270,   271,
      -1,    -1,   274,   275,   276,   277,    -1,    -1,    -1,   281,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,   440,   441,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   437,   438,   439,   440,   441,
      96,   443,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
     276,   277,    -1,    -1,    -1,   281,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,   440,   441,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   437,   438,   439,   440,   441,    96,   443,    -1,    -1,
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
      -1,   281,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,   440,   441,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,   438,   439,
     440,   441,    96,   443,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,   181,    -1,    -1,    -1,   113,
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
     274,   275,   276,   277,    -1,    -1,    -1,   281,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,   441,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   437,   438,   439,   440,   441,    96,   443,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,   440,
     441,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,
     438,   439,   440,   441,    96,   443,    -1,    -1,    -1,   101,
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
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,   441,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   437,   438,   439,   440,   441,
      96,   443,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,   441,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   437,   438,   439,   440,   441,    96,   443,    -1,    -1,
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
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,   441,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,   438,   439,
     440,   441,    96,   443,    -1,    -1,    -1,   101,    -1,    -1,
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
     324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,   441,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   437,   438,   439,   440,   441,    96,   443,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,   441,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,
     438,   439,   440,   441,    96,   443,    -1,    -1,    -1,   101,
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
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,   441,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   437,   438,   439,   440,   441,
      96,   443,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,   441,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   437,   438,   439,   440,   441,    96,   443,    -1,    -1,
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
     220,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,   239,
     240,   241,    -1,    -1,    -1,    -1,    27,    -1,    -1,   249,
      -1,   251,   252,   253,    -1,    -1,    -1,    -1,   258,    -1,
     260,   261,   262,    -1,    -1,    -1,   266,    -1,    -1,    -1,
     270,   271,    -1,    -1,   274,   275,   276,   277,    -1,    -1,
      -1,   281,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,   323,   324,   325,   326,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   441,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   193,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,   437,   438,   439,
     440,   441,    -1,   443,   225,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,
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
      18,    -1,    -1,   414,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,   439,    47,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    72,    36,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   441,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   441,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,   441,   225,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,   263,   441,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   439,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   441,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   441,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   441,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   225,
      10,    11,    12,    13,    14,    15,    16,   441,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,   275,
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
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   439,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,   441,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   441,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   441,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   225,    10,    11,    12,    13,    14,    15,    16,   441,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,
      -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     424,   425,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   439,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,   441,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   441,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   441,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   225,    10,    11,    12,    13,    14,    15,
      16,   441,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   263,    -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   424,   425,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   439,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,   441,
      80,    81,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   113,    10,    11,    12,    13,    14,    15,
      16,   441,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   441,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   225,    10,    11,    12,    13,
      14,    15,    16,   441,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   263,    -1,   441,    -1,    -1,    -1,    -1,
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
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   439,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,   441,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   113,    10,    11,    12,    13,
      14,    15,    16,   441,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   441,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   441,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   225,    10,    11,
      12,    13,    14,    15,    16,   441,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   263,    -1,   441,    -1,    -1,
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
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   439,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,   441,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   113,    10,    11,
      12,    13,    14,    15,    16,   441,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   441,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   441,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   225,
      10,    11,    12,    13,    14,    15,    16,   441,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,   441,
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
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   439,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,   441,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   113,
      10,    11,    12,    13,    14,    15,    16,   441,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   441,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   225,    10,    11,    12,    13,    14,    15,    16,   441,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,
      -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     424,   425,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   439,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,   441,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   441,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   441,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    10,    11,    12,    13,    14,    15,
      16,   441,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   263,   440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   424,   425,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   439,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     440,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   440,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   440,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   440,    18,    19,    20,    21,    22,
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
     440,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   440,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   440,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   440,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   440,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   440,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   440,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   440,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   440,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   440,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   440,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   440,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   440,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   440,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   440,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   440,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   440,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   440,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   440,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     440,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   440,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   440,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   440,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   440,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   440,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   440,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   440,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   440,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   440,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   440,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   440,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   440,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     440,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   440,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   440,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   440,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   440,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   440,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     440,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   440,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   440,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   440,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   440,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   440,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   440,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     440,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   440,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   440,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   440,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   440,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   440,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   440,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   440,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   440,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   440,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   440,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   440,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   440,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     440,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   440,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   440,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   440,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   440,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   440,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    10,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   440,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     440,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    37,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,   138,   139,    73,    -1,    -1,    -1,    -1,    -1,
      -1,   440,    -1,    -1,    -1,    -1,    -1,    86,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,
      -1,    -1,   440,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   202,    36,    -1,   440,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,    -1,   221,    -1,    -1,   157,    -1,
      -1,   227,    -1,    -1,    -1,    -1,   440,    -1,    -1,   168,
     169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   440,    -1,   261,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,
     440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,   241,    -1,    -1,    -1,    -1,   440,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,   440,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,
      -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     426,    -1,    -1,   429,    -1,    -1,    -1,    -1,   434,   104,
     105,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   440,    -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,    -1,   144,
     145,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     419,   420,    -1,   440,    -1,    -1,    -1,    -1,    -1,    -1,
     429,    -1,    -1,    -1,    -1,   434,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    61,    62,    -1,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,   278,   279,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
     114,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    10,    11,    12,    13,    14,    15,    16,   132,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   152,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,   185,    -1,    -1,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   205,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   239,   240,    -1,    -1,   243,
     244,   275,    -1,    -1,    -1,   249,   253,   251,    -1,    -1,
      -1,    -1,   256,   257,    -1,    -1,    -1,    -1,   262,    -1,
     264,    -1,    -1,    -1,    -1,    -1,   270,    -1,   272,   273,
      -1,    -1,    -1,   253,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     136,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     3,    36,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,   124,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    51,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    50,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    50,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     395,   404,   419,   420,   429,   434,   445,   484,   485,   525,
     529,   531,   538,   539,   542,   544,   545,   547,   548,   549,
     554,   555,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     579,   580,   581,   582,   584,   587,   594,   595,   597,   613,
     614,   623,   626,   628,   629,   630,   653,   656,   663,   664,
     667,   670,   671,   674,   219,   252,   371,   404,   426,   252,
       3,    10,    95,   102,   138,   139,   155,   202,   219,   221,
     227,   246,   247,   261,   371,   395,   404,   417,   426,   429,
     434,   635,     3,   526,    95,   139,   155,   202,   219,   221,
     227,   252,   371,   395,   404,   417,   426,   429,   434,   605,
       3,     3,     3,    28,   252,   252,   605,     8,   227,   654,
     655,   504,   252,   605,   624,     3,    95,   398,   399,   400,
     107,   398,   399,   400,   407,   417,   417,   255,   322,   430,
     431,   107,   407,   435,   436,     0,   437,   541,     3,     3,
       3,     3,   396,     3,   439,   216,   156,   627,     3,   155,
       3,     3,    85,   156,     3,     3,     3,   627,   246,   155,
     627,   396,   396,     3,   156,     3,   156,     3,   396,   252,
     615,     3,   136,   154,   176,   203,   527,     3,   156,     3,
     156,     3,     3,   156,     3,   156,     3,     3,   156,     3,
     156,     3,   156,   396,   396,     3,   156,     3,   156,     3,
     396,   103,   146,   154,   159,   176,   606,   171,   441,     3,
       3,   606,     9,    20,     3,   113,   441,     3,     4,     5,
       6,     7,     8,    17,    18,    27,    28,    40,    72,    77,
      80,    81,    89,   106,   110,   146,   183,   193,   225,   226,
     233,   234,   238,   263,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   320,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     372,   373,   374,   375,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   392,   393,   394,   414,   424,
     425,   439,   446,   505,   506,     3,   154,   176,     3,   167,
     173,   381,   439,   508,   509,   510,   511,   514,   524,     3,
     159,   401,   136,   136,   136,   159,   136,   409,     3,     3,
       3,   136,   439,   159,   136,   136,     3,   159,   136,   445,
      54,    55,    74,   210,   277,   438,   583,   100,   120,    38,
      75,   100,   108,   120,   187,   208,   240,   269,    55,   208,
     672,     3,   100,   120,     3,     4,     5,     6,     7,     8,
     193,   440,   665,   666,   139,   202,   281,     3,    51,     3,
     439,   197,     3,   156,   281,   439,    39,    59,   668,   197,
       3,     3,    85,   156,     3,     3,   156,     3,   156,   140,
     281,   197,   281,     3,     3,   156,   627,   439,   616,   438,
     528,     3,   527,   136,   441,   281,   281,   281,   281,   197,
     281,    74,   210,   530,   281,   281,     3,   156,     3,   156,
     281,   281,     3,   156,     3,   156,     3,     4,   245,     3,
     446,   446,   655,   438,   439,     9,   446,   446,   446,   275,
     446,   483,   438,   439,    36,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     446,     3,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    36,    51,   507,   136,
     159,   441,   441,   438,   507,   439,     3,   439,   485,   508,
     240,   441,    76,   153,   177,   190,   215,   238,   515,   517,
      51,   513,   513,     3,   159,     3,     3,     3,     3,     3,
      16,   266,   421,     3,    28,     3,     3,     3,   266,     3,
       3,    53,    53,    44,     3,   108,   258,   585,    71,    84,
       3,    84,    71,   217,     3,    71,    84,   422,    71,   217,
       3,    84,     3,    71,    84,   423,    71,   277,   245,    18,
     184,   376,   377,   378,   379,   673,   100,   120,   440,   441,
       3,     3,    61,    62,    64,    66,    67,    82,   114,   115,
     116,   117,   123,   132,   152,   160,   175,   182,   185,   188,
     189,   205,   239,   240,   243,   244,   249,   251,   256,   257,
     262,   264,   270,   272,   273,   278,   649,   197,     3,    16,
     150,   195,   657,   658,   659,     3,   197,   281,     3,   657,
     107,   157,   258,   398,   669,     3,   404,   197,     3,   156,
     281,   672,   277,   543,   281,   550,   281,   418,     3,   428,
       3,   277,   575,   281,     3,     3,   617,   136,   245,   618,
      28,   274,   486,   266,   508,     3,     3,     3,     3,     3,
       3,   404,     3,     3,     3,    74,   281,    74,   281,     3,
       3,   281,   281,   240,   439,   607,     3,   240,   607,     3,
     446,   451,   455,   446,   446,   483,   124,   125,   275,     3,
       3,   442,   453,   460,   446,    65,   178,   254,   446,   481,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   440,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   440,   446,   446,   446,   440,
     446,   446,   446,   446,   446,   446,    28,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   440,   440,
     440,   440,   440,   446,   446,   440,   440,   440,   446,   446,
       5,   440,   440,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   440,   446,   446,   446,   440,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     440,   446,   446,   440,   446,   446,   446,   446,   446,     6,
      18,   193,   319,   439,    13,    14,    16,    19,   446,    40,
      47,   232,   439,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,     3,
     508,     3,   506,     3,   540,     3,   133,   154,   267,   521,
     512,   507,   446,   440,   440,     3,   625,   509,   177,   215,
     518,   510,   163,   196,   516,     3,     3,   271,     3,   402,
     402,   274,   271,   274,     3,   273,     5,   274,   440,   271,
     274,   274,   273,   271,   274,     5,   583,    42,    42,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,   649,
       3,   245,     3,     3,    20,     3,     5,     3,   379,     5,
       5,   277,     5,    63,     5,   217,   217,   666,   439,   439,
     439,   645,   645,   645,   645,   645,   645,   439,   645,   645,
     645,    64,   646,   646,   645,   645,   645,   439,   646,   645,
     646,   439,   439,   439,    18,    36,    78,   113,     3,   649,
       3,     3,     3,   440,   441,   266,   439,     3,     3,   197,
     440,   197,    51,   588,   396,     3,   197,   281,     3,   439,
       3,   277,   551,     3,     3,   140,     4,   197,   439,   277,
     576,     3,   154,   216,   351,   438,   439,   651,   652,   440,
     441,     4,   236,   237,   619,   446,   198,   496,   508,   486,
     528,   396,   530,     3,     3,     3,     3,     3,   612,     3,
     608,   271,   485,   612,   271,   485,   441,   440,   253,   124,
     125,   446,   446,   440,   446,   452,   485,   136,   441,   440,
     136,   446,   441,   441,   441,   440,   440,   440,   440,   440,
     440,   441,   441,   441,   441,   440,   441,   441,   441,   440,
     440,   440,   440,   441,   441,   440,   441,   440,   440,   440,
      51,   441,   441,   441,   441,   321,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   441,   441,   441,   440,
     441,   350,   350,   350,   440,   441,   440,   441,   440,   350,
     350,   441,   440,   440,   440,   440,   440,   440,   440,   440,
     441,   441,   441,   441,   441,   441,   441,   441,   440,   441,
     440,   440,   440,   441,   440,   441,   440,   441,   441,   441,
     441,   441,   440,   440,   440,   441,   441,   441,   440,   441,
       6,   193,   456,   458,   446,   446,   439,   446,    50,   439,
     439,   439,   447,   442,   140,   500,   136,   441,   507,   164,
     164,   164,   485,   521,   440,    20,   438,   441,   486,   516,
     516,   163,   197,   510,   163,   439,   271,     4,     4,   411,
     439,   411,   410,     4,   433,   136,   439,   433,     4,     4,
     439,     4,    45,    46,   585,   197,   197,    78,   134,   201,
     261,   649,   649,     3,   222,   222,   644,   649,     3,   245,
     245,     4,     5,     5,     3,     3,   657,   657,     5,   647,
     648,   647,   647,     4,   650,   647,   647,   647,   648,   648,
     647,   647,   647,   650,   648,   647,   648,     5,     5,     5,
     193,   442,   439,   446,   439,   649,   649,   649,   213,   659,
     268,   391,     3,   327,   328,   329,   330,   536,   537,   266,
     439,   197,     3,    51,    60,     3,   404,   223,   224,   140,
     589,     3,   266,   439,     3,     3,   197,   397,   543,   439,
     550,   418,   101,   428,   422,   439,   575,    94,     3,    71,
      78,   134,   138,   155,   164,   201,   261,   636,   637,   643,
     513,     3,    87,    99,   135,   143,   193,   242,   277,   439,
     620,   621,   622,    63,   179,   499,   486,     3,    20,   199,
     441,   598,   440,   441,   439,   609,   598,   609,   598,   451,
     446,   446,   124,   253,    91,   441,   442,   440,   446,   446,
     446,   136,   161,   482,   482,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   649,   649,   446,   446,
     446,     4,   350,   350,   350,   350,   350,   350,   446,   446,
     446,   446,   439,   439,   439,   350,     5,   350,     5,   350,
     439,   439,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   451,   485,   457,   459,    50,   446,   450,
     446,   448,   454,   449,   454,   485,   412,   486,   508,     3,
     521,   140,   522,   522,   522,   440,   513,   446,     3,     3,
     496,   510,   446,   197,   266,   519,   520,   510,     4,   193,
     546,   439,   403,   179,    20,     4,   193,   556,    20,     4,
     179,    20,     3,     4,    20,   179,   274,     4,   179,     3,
     586,   586,   439,   164,   164,   439,   644,   644,   649,    18,
      39,    48,    51,    53,    56,    71,    78,    79,   113,   130,
     164,   193,   201,   261,   596,   644,     3,     3,   222,   222,
     440,   440,   440,   441,   259,   280,    82,    83,   440,   441,
     440,   440,   440,   440,    78,   446,   536,    62,    66,   114,
     117,   132,   152,   160,   249,   251,   270,   660,   439,   439,
     439,   439,   439,   439,   440,   441,   268,   536,     3,   266,
     439,    60,   661,   140,   396,    40,   107,   157,   241,   258,
     245,   590,   588,   268,   536,   266,   439,   197,     3,    20,
     405,   406,   552,   553,   551,     3,     4,     4,    20,   405,
     406,   577,   578,   576,     3,   439,   651,     3,   439,   164,
     155,   164,   439,   439,   164,   439,   440,   441,     3,   485,
       4,    87,   249,     6,     4,     4,   439,   621,   441,     3,
       5,   497,   498,   446,   212,   675,   113,   446,   164,     3,
       3,   113,   446,   611,   441,   598,   598,   124,   446,   439,
     452,   140,   440,   440,   441,   440,   446,   446,   440,   440,
     440,   440,   440,   441,   441,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   441,   440,   439,   439,   439,
     439,   439,   439,   440,   441,   441,   440,   440,   461,   462,
     463,   439,   440,   441,   439,   440,   441,   439,   479,   480,
     440,   441,   441,   441,   440,   440,   441,   441,   440,   441,
     440,   441,   440,   441,   440,   440,   440,   440,   440,   440,
     441,   441,   441,   440,   440,   440,   451,   485,   446,   485,
     485,   440,   485,   440,   440,    51,   141,   487,   486,   163,
     439,   439,   439,     3,    20,    20,   438,   499,   446,   439,
     520,   441,   546,     4,     5,     4,   441,     4,     5,     4,
     274,   441,     4,     5,     4,   441,     5,   441,   277,   446,
     439,   439,     3,   642,   596,   596,   644,   193,     3,   439,
     439,   439,    52,     3,   439,     4,     4,     5,     6,     7,
      72,   333,   334,   335,   439,   164,   164,   596,   213,    51,
      60,     5,   240,     4,   648,     4,   648,   648,   439,   440,
     440,    51,    60,   536,     3,     3,     3,     3,     3,     3,
     439,   440,   439,   268,   391,   536,   661,     3,     4,     5,
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
     326,   437,   438,   439,   440,   441,   443,   662,   118,     3,
       3,   591,   266,   592,   589,   439,   440,   268,   536,     3,
     266,   439,     4,    20,    20,   440,   441,   101,     4,    20,
      20,   440,   441,   140,   636,    78,   134,   201,   261,   446,
     439,   439,   439,     3,   503,   503,   439,   642,   632,   651,
     637,   649,   621,   440,   622,    49,   112,   438,   489,   489,
     441,   181,   441,     3,    28,   676,   258,    20,   440,   441,
     610,   197,   600,     4,   446,   446,   440,   104,   105,   109,
     111,   144,   145,   147,   278,   279,   446,   446,   446,   465,
     466,   464,   467,   468,   469,   446,   446,   351,   492,   492,
     492,   470,   350,     4,     5,   474,   350,     4,     5,   478,
     492,   492,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   440,   440,   440,   440,   440,    94,    63,
     148,   491,   487,     3,   523,   523,   523,   439,   446,   446,
       3,   675,   503,   546,   441,    12,   556,    12,    59,   433,
       4,   432,   179,     4,     3,     5,   440,     3,   639,     3,
     638,   440,   441,   596,     5,   446,     5,    51,    78,   201,
     261,   446,   439,   439,   439,   446,   660,    60,   661,   440,
       4,   446,    60,   661,   440,     3,   532,   440,   440,   440,
     441,   536,   536,   439,   439,   440,   124,   661,   661,   661,
     661,   661,   661,   217,   140,   441,   439,   277,   593,   590,
     536,   439,   440,   439,   268,   536,   440,     5,     4,   553,
       4,   440,     5,     4,   578,   271,   440,   439,   164,   164,
     439,   440,   639,   503,   503,   440,   441,   440,   638,   440,
      48,   172,   197,   228,   277,   351,   631,   644,   440,     3,
     498,   446,   446,   441,   599,   113,   446,   113,   446,   439,
      88,   675,   440,   440,   440,   440,   440,   440,   492,   492,
     492,   492,   492,   492,   440,   441,   440,    63,   198,   494,
     494,   494,   492,   439,   440,   440,   492,   439,   440,   440,
     492,   494,   494,   440,   440,   440,   440,   440,   441,   440,
     440,   441,   441,   441,   413,   446,   488,   446,   496,   491,
     440,   441,   440,   440,     3,    20,   440,   441,   546,   164,
     441,   164,     5,    20,   441,     5,     5,   441,    43,    18,
     440,   441,   440,   441,     3,   440,   441,   440,   440,   441,
     439,   439,   164,   440,   440,   440,   440,   440,    51,    60,
     661,   124,   440,   661,   124,   440,     3,   440,   440,   536,
       3,   124,   124,   124,   124,   124,   124,    60,   118,     3,
     446,    78,   592,   440,   536,   536,   439,   440,   136,   632,
     651,   446,   439,   439,   642,   440,   440,   440,     3,   440,
       5,    20,   439,     3,    63,   415,   439,    63,   489,     3,
       3,   604,   611,   439,   601,   494,   494,   494,   494,   494,
     494,   446,     3,   493,    63,   440,   440,   440,   494,   471,
     350,   350,   494,   475,   350,   350,   494,   440,   440,   446,
       5,     5,     5,     5,   489,   277,   441,   490,   499,   496,
       3,   440,   446,   546,   441,    20,   556,    20,     4,     4,
       4,   269,   207,     3,     3,     5,    57,    58,     5,   446,
     446,    60,   661,   124,   124,   277,   533,   440,   440,   532,
      77,   131,   156,   166,   276,   661,   217,   440,   439,   593,
     440,   440,   536,   439,   440,   639,   638,   440,   207,     5,
       3,   107,   248,   204,   268,   416,   423,   204,    20,   441,
     440,     3,   101,   602,   440,   440,   440,   440,   440,   440,
     440,   441,     3,   495,   440,   492,   439,   439,   440,   492,
     439,   439,   440,   440,   440,   441,   441,   214,   446,   140,
     501,   499,   441,   546,     4,   440,   441,     4,   440,   441,
     440,   441,     3,   440,   440,   440,   440,   661,   124,   439,
     440,   124,    60,   446,   440,     5,   440,   440,     3,   440,
       3,     3,   439,   439,    20,   439,   446,     3,   440,   441,
      90,   258,     3,   489,   441,   494,   472,   473,   494,   476,
     477,     4,     4,   489,   230,   258,   159,   502,   546,   441,
     556,     4,     4,   439,    57,    58,   124,     3,   534,   535,
     533,   661,   440,   440,   207,   438,   439,     3,     3,     4,
       3,    20,     3,   603,     3,   440,   492,   492,   440,   492,
     492,   440,   440,   231,   231,   503,   441,   546,   440,   440,
     440,     3,   640,    20,   440,   441,   124,   245,     3,     3,
     640,   440,   440,   440,   440,   446,   240,   489,   494,   494,
     494,   494,   180,   180,   546,   441,   440,   441,     5,   535,
     439,   438,   439,   439,   440,   439,   229,   604,   440,   440,
     440,   440,   441,   546,   641,     3,     5,     3,   640,   640,
     641,   228,   633,   634,     5,   546,   441,    18,    97,   183,
     197,   440,   439,   440,   440,    18,     3,   440,   441,   441,
     546,    97,   269,   151,   137,   200,   235,   107,   258,   640,
     641,   641,   271,   634,   546,   441,    98,   149,    74,   192,
     210,   240,    74,   192,   210,   240,   440,   174,   440,   546,
     113,   193,   113,   193,   641,   250,   440,     4,   184,   197,
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
#line 530 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 536 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 537 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 539 "parser/evoparser.y"
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
#line 552 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 554 "parser/evoparser.y"
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
#line 582 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 590 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 598 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 604 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 611 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 612 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 613 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 614 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 615 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 616 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 617 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 618 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 619 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 620 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 621 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 622 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 623 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 624 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 625 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 626 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 627 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 628 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 629 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 631 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 636 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 637 "parser/evoparser.y"
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
#line 645 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 646 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 647 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 648 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 649 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 650 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 655 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 657 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 660 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 661 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 662 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 663 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 664 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 667 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 668 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 672 "parser/evoparser.y"
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
#line 681 "parser/evoparser.y"
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
#line 699 "parser/evoparser.y"
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
#line 708 "parser/evoparser.y"
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
#line 727 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 728 "parser/evoparser.y"
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
#line 788 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 797 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 803 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 808 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 810 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 812 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 817 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 822 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 827 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 835 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 837 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 839 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 841 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 843 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 845 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 847 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 849 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 851 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 853 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 860 "parser/evoparser.y"
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
#line 871 "parser/evoparser.y"
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
#line 881 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 885 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 885 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 886 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 886 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 887 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 888 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 895 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 896 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 903 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 904 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 914 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 918 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 919 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 920 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 921 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 922 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 923 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 924 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 925 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 929 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 930 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 931 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 932 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 933 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 934 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 936 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 937 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 938 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 939 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 940 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 941 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 942 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 943 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 944 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 945 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 946 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 947 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 949 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 950 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 951 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 952 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 953 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 954 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 955 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 956 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 957 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 958 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 959 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 960 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 961 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 962 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 963 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 964 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 966 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 967 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 968 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 969 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 970 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 971 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 974 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 975 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 976 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 977 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 978 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 979 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 980 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 981 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 982 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 983 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 984 "parser/evoparser.y"
    { emit("CALL 1 TOKEN_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_TOKEN_LENGTH, (yyvsp[(3) - (4)].exprval), "token_length"); ;}
    break;

  case 150:
#line 985 "parser/evoparser.y"
    { emit("CALL 2 EVO_CALL_EXTERNAL"); (yyval.exprval) = expr_make_func2(EXPR_PG_CALL_EXTERNAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "evo_call_external"); ;}
    break;

  case 151:
#line 986 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 987 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 153:
#line 988 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 154:
#line 989 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 155:
#line 990 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 156:
#line 991 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 157:
#line 992 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 158:
#line 993 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 159:
#line 994 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 160:
#line 995 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 161:
#line 996 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 162:
#line 997 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 163:
#line 998 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 164:
#line 999 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 165:
#line 1000 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 166:
#line 1001 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 167:
#line 1002 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 168:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 169:
#line 1004 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 170:
#line 1005 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 171:
#line 1006 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 172:
#line 1007 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 173:
#line 1008 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 174:
#line 1009 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 175:
#line 1011 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 176:
#line 1012 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 177:
#line 1013 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 178:
#line 1014 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 179:
#line 1015 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 180:
#line 1016 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 181:
#line 1017 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 182:
#line 1018 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 183:
#line 1020 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 184:
#line 1021 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 185:
#line 1022 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 186:
#line 1023 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 187:
#line 1024 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 188:
#line 1025 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 189:
#line 1026 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 190:
#line 1027 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 191:
#line 1028 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 192:
#line 1029 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 193:
#line 1030 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 194:
#line 1031 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 195:
#line 1032 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 196:
#line 1033 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 197:
#line 1034 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 198:
#line 1035 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 199:
#line 1036 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 200:
#line 1037 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 201:
#line 1038 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1039 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 203:
#line 1040 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 204:
#line 1041 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 205:
#line 1043 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 206:
#line 1044 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 207:
#line 1045 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 208:
#line 1046 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 209:
#line 1047 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 210:
#line 1049 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 211:
#line 1050 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 212:
#line 1052 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 213:
#line 1053 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 214:
#line 1054 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 215:
#line 1056 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 216:
#line 1057 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 217:
#line 1058 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 218:
#line 1059 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 219:
#line 1066 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 220:
#line 1073 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 221:
#line 1080 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1084 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1088 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 224:
#line 1092 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 225:
#line 1096 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 226:
#line 1100 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 227:
#line 1106 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 228:
#line 1107 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 229:
#line 1108 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 230:
#line 1112 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 231:
#line 1118 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 232:
#line 1124 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 233:
#line 1125 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1126 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1127 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 236:
#line 1128 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 237:
#line 1129 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 238:
#line 1130 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1131 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 240:
#line 1132 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 241:
#line 1136 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1138 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 243:
#line 1140 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 244:
#line 1142 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 245:
#line 1146 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 246:
#line 1154 "parser/evoparser.y"
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
#line 1164 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 248:
#line 1165 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 249:
#line 1168 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 250:
#line 1169 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 251:
#line 1173 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1181 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 253:
#line 1189 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 254:
#line 1197 "parser/evoparser.y"
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
#line 1211 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 256:
#line 1220 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 257:
#line 1226 "parser/evoparser.y"
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
#line 1239 "parser/evoparser.y"
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
#line 1252 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 262:
#line 1254 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 263:
#line 1257 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 264:
#line 1264 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 265:
#line 1272 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1273 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1274 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1277 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1278 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 271:
#line 1282 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1291 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 275:
#line 1293 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 278:
#line 1301 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 279:
#line 1303 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 284:
#line 1315 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 285:
#line 1321 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 286:
#line 1328 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 287:
#line 1336 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 288:
#line 1337 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 289:
#line 1338 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1339 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 292:
#line 1351 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 293:
#line 1354 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 294:
#line 1355 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 295:
#line 1356 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 296:
#line 1357 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1358 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 299:
#line 1362 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 300:
#line 1365 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1366 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 302:
#line 1369 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1370 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 304:
#line 1371 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 305:
#line 1372 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 306:
#line 1373 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 307:
#line 1374 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 308:
#line 1375 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 309:
#line 1376 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 310:
#line 1377 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 311:
#line 1380 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 312:
#line 1381 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 313:
#line 1383 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 314:
#line 1391 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 315:
#line 1396 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 316:
#line 1397 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 317:
#line 1398 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 318:
#line 1401 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 319:
#line 1402 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1411 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 323:
#line 1419 "parser/evoparser.y"
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
#line 1428 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 325:
#line 1429 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 326:
#line 1431 "parser/evoparser.y"
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
#line 1440 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 328:
#line 1445 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 329:
#line 1451 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 330:
#line 1458 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 331:
#line 1462 "parser/evoparser.y"
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
#line 1482 "parser/evoparser.y"
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
#line 1508 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 336:
#line 1510 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 337:
#line 1512 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 338:
#line 1514 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1516 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 340:
#line 1519 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 341:
#line 1520 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1521 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 343:
#line 1524 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 344:
#line 1525 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 345:
#line 1528 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 346:
#line 1529 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 347:
#line 1532 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 348:
#line 1533 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 349:
#line 1534 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1541 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 353:
#line 1542 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 354:
#line 1547 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 355:
#line 1549 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1551 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 358:
#line 1555 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1556 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 360:
#line 1559 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 361:
#line 1560 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 362:
#line 1563 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 363:
#line 1568 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 364:
#line 1578 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 365:
#line 1585 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 366:
#line 1586 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 367:
#line 1587 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 368:
#line 1588 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 369:
#line 1593 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1597 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 371:
#line 1599 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 374:
#line 1605 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 375:
#line 1610 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 376:
#line 1617 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 377:
#line 1624 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 379:
#line 1636 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 380:
#line 1637 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 381:
#line 1642 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 382:
#line 1649 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 383:
#line 1656 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1664 "parser/evoparser.y"
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
#line 1674 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 386:
#line 1682 "parser/evoparser.y"
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
#line 1692 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 388:
#line 1700 "parser/evoparser.y"
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
#line 1709 "parser/evoparser.y"
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
#line 1718 "parser/evoparser.y"
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
#line 1728 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 392:
#line 1736 "parser/evoparser.y"
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
#line 1745 "parser/evoparser.y"
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
#line 1754 "parser/evoparser.y"
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
#line 1764 "parser/evoparser.y"
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
#line 1773 "parser/evoparser.y"
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
#line 1790 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 398:
#line 1798 "parser/evoparser.y"
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
#line 1809 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 400:
#line 1811 "parser/evoparser.y"
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
#line 1824 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 402:
#line 1825 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 403:
#line 1828 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 404:
#line 1830 "parser/evoparser.y"
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
#line 1842 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 406:
#line 1852 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 407:
#line 1857 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 408:
#line 1862 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 409:
#line 1868 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1875 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 411:
#line 1882 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 412:
#line 1889 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 413:
#line 1899 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 414:
#line 1906 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1915 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 416:
#line 1922 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 417:
#line 1928 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 418:
#line 1936 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 419:
#line 1942 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 421:
#line 1950 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 422:
#line 1951 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 423:
#line 1952 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 424:
#line 1953 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 425:
#line 1969 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1970 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1971 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1980 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 429:
#line 1981 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 430:
#line 1986 "parser/evoparser.y"
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
#line 1996 "parser/evoparser.y"
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
#line 2011 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 433:
#line 2012 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 434:
#line 2017 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 435:
#line 2025 "parser/evoparser.y"
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
#line 2034 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 437:
#line 2056 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2057 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 439:
#line 2058 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 440:
#line 2063 "parser/evoparser.y"
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
#line 2080 "parser/evoparser.y"
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
#line 2101 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 443:
#line 2102 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 444:
#line 2108 "parser/evoparser.y"
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
#line 2117 "parser/evoparser.y"
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
#line 2131 "parser/evoparser.y"
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
#line 2140 "parser/evoparser.y"
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
#line 2165 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2166 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2167 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2168 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2169 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2170 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 454:
#line 2171 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 455:
#line 2176 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 456:
#line 2183 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 457:
#line 2194 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 462:
#line 2208 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 463:
#line 2210 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 464:
#line 2215 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 465:
#line 2223 "parser/evoparser.y"
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
#line 2232 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 467:
#line 2244 "parser/evoparser.y"
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
#line 2256 "parser/evoparser.y"
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
#line 2270 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 470:
#line 2271 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 471:
#line 2277 "parser/evoparser.y"
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
#line 2291 "parser/evoparser.y"
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
#line 2301 "parser/evoparser.y"
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
#line 2315 "parser/evoparser.y"
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
#line 2329 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 476:
#line 2337 "parser/evoparser.y"
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
#line 2348 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2354 "parser/evoparser.y"
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
#line 2365 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2371 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 481:
#line 2378 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 482:
#line 2384 "parser/evoparser.y"
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
#line 2405 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 484:
#line 2406 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 485:
#line 2407 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 486:
#line 2408 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 487:
#line 2413 "parser/evoparser.y"
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
#line 2422 "parser/evoparser.y"
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
#line 2439 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        DropSubscriptionProcess(0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 490:
#line 2447 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (5)].strval));
        DropSubscriptionProcess(1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 491:
#line 2458 "parser/evoparser.y"
    {
        emit("RESUME SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        ResumeSubscriptionProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 492:
#line 2469 "parser/evoparser.y"
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
#line 2488 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 494:
#line 2489 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 495:
#line 2490 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 496:
#line 2495 "parser/evoparser.y"
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
#line 2505 "parser/evoparser.y"
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
#line 2518 "parser/evoparser.y"
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
#line 2527 "parser/evoparser.y"
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
#line 2539 "parser/evoparser.y"
    {
        emit("ALTER JOB %s ENABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(1);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 501:
#line 2547 "parser/evoparser.y"
    {
        emit("ALTER JOB %s DISABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(0);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 502:
#line 2567 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 503:
#line 2568 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 504:
#line 2569 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 505:
#line 2574 "parser/evoparser.y"
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
#line 2586 "parser/evoparser.y"
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
#line 2611 "parser/evoparser.y"
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
#line 2623 "parser/evoparser.y"
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
#line 2638 "parser/evoparser.y"
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
#line 2650 "parser/evoparser.y"
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
#line 2662 "parser/evoparser.y"
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
#line 2671 "parser/evoparser.y"
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
#line 2681 "parser/evoparser.y"
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
#line 2690 "parser/evoparser.y"
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
#line 2700 "parser/evoparser.y"
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
#line 2723 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 517:
#line 2724 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 518:
#line 2725 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 519:
#line 2730 "parser/evoparser.y"
    {
        emit("CREATE DOCUMENT STORE %s", (yyvsp[(4) - (6)].strval));
        SetDocumentStoreName((yyvsp[(4) - (6)].strval));
        CreateDocumentStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 520:
#line 2737 "parser/evoparser.y"
    {
        emit("CREATE DOCUMENT STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetDocumentStoreName((yyvsp[(6) - (8)].strval));
        CreateDocumentStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 521:
#line 2746 "parser/evoparser.y"
    { ResetDocumentOpts(); ;}
    break;

  case 526:
#line 2760 "parser/evoparser.y"
    { SetDocumentEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 527:
#line 2762 "parser/evoparser.y"
    { SetDocumentDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 528:
#line 2767 "parser/evoparser.y"
    {
        emit("DROP DOCUMENT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (4)].strval));
        DropDocumentStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 529:
#line 2775 "parser/evoparser.y"
    {
        emit("DROP DOCUMENT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(6) - (6)].strval));
        DropDocumentStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 530:
#line 2786 "parser/evoparser.y"
    {
        emit("DOCUMENT WRITE INTO %s", (yyvsp[(4) - (12)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (12)].strval));
        SetDocumentId((yyvsp[(7) - (12)].strval));
        SetDocumentContent((yyvsp[(9) - (12)].strval));
        SetDocumentMeta((yyvsp[(11) - (12)].strval));
        DocumentWriteProcess();
        free((yyvsp[(4) - (12)].strval)); free((yyvsp[(7) - (12)].strval)); free((yyvsp[(9) - (12)].strval)); free((yyvsp[(11) - (12)].strval));
    ;}
    break;

  case 531:
#line 2797 "parser/evoparser.y"
    {
        emit("DOCUMENT WRITE INTO %s WITH embedding", (yyvsp[(4) - (14)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (14)].strval));
        SetDocumentId((yyvsp[(7) - (14)].strval));
        SetDocumentContent((yyvsp[(9) - (14)].strval));
        SetDocumentMeta((yyvsp[(11) - (14)].strval));
        SetDocumentEmbedding((yyvsp[(13) - (14)].strval));
        DocumentWriteProcess();
        free((yyvsp[(4) - (14)].strval)); free((yyvsp[(7) - (14)].strval)); free((yyvsp[(9) - (14)].strval)); free((yyvsp[(11) - (14)].strval)); free((yyvsp[(13) - (14)].strval));
    ;}
    break;

  case 532:
#line 2809 "parser/evoparser.y"
    {
        emit("DOCUMENT FILTER FROM %s WHERE json", (yyvsp[(4) - (6)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (6)].strval));
        SetDocumentFilterJson((yyvsp[(6) - (6)].strval));
        DocumentFilterProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 533:
#line 2818 "parser/evoparser.y"
    {
        emit("DOCUMENT FILTER FROM %s WHERE json LIMIT %d", (yyvsp[(4) - (8)].strval), (yyvsp[(8) - (8)].intval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (8)].strval));
        SetDocumentFilterJson((yyvsp[(6) - (8)].strval));
        SetDocumentLimit((yyvsp[(8) - (8)].intval));
        DocumentFilterProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 534:
#line 2828 "parser/evoparser.y"
    {
        emit("DOCUMENT SEARCH %s LIMIT %d", (yyvsp[(3) - (8)].strval), (yyvsp[(8) - (8)].intval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(3) - (8)].strval));
        SetDocumentQuery((yyvsp[(6) - (8)].strval));
        SetDocumentLimit((yyvsp[(8) - (8)].intval));
        DocumentSearchProcess();
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 535:
#line 2838 "parser/evoparser.y"
    {
        emit("DOCUMENT SEARCH %s WHERE json LIMIT %d", (yyvsp[(3) - (10)].strval), (yyvsp[(10) - (10)].intval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(3) - (10)].strval));
        SetDocumentQuery((yyvsp[(6) - (10)].strval));
        SetDocumentFilterJson((yyvsp[(8) - (10)].strval));
        SetDocumentLimit((yyvsp[(10) - (10)].intval));
        DocumentSearchProcess();
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(8) - (10)].strval));
    ;}
    break;

  case 536:
#line 2849 "parser/evoparser.y"
    {
        emit("DOCUMENT DELETE FROM %s WHERE json", (yyvsp[(4) - (6)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (6)].strval));
        SetDocumentFilterJson((yyvsp[(6) - (6)].strval));
        DocumentDeleteProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 537:
#line 2861 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 538:
#line 2868 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 539:
#line 2877 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 540:
#line 2885 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 541:
#line 2891 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 543:
#line 2908 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 544:
#line 2912 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 545:
#line 2921 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 547:
#line 2936 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 548:
#line 2940 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 549:
#line 2945 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 550:
#line 2952 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 551:
#line 2957 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 552:
#line 2964 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 553:
#line 2968 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 554:
#line 2969 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 555:
#line 2975 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 556:
#line 2987 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 557:
#line 2996 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 558:
#line 2997 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 559:
#line 2998 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 560:
#line 3002 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 561:
#line 3003 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 562:
#line 3004 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 563:
#line 3005 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 564:
#line 3006 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 565:
#line 3007 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 568:
#line 3016 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 569:
#line 3017 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 571:
#line 3022 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 573:
#line 3027 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 574:
#line 3032 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 575:
#line 3039 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 576:
#line 3048 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 577:
#line 3054 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 578:
#line 3060 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 579:
#line 3067 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 580:
#line 3073 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 581:
#line 3080 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 582:
#line 3086 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 583:
#line 3092 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 584:
#line 3098 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 585:
#line 3104 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 586:
#line 3110 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 587:
#line 3116 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 588:
#line 3122 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 589:
#line 3128 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 590:
#line 3134 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 591:
#line 3140 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 592:
#line 3146 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 593:
#line 3152 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 594:
#line 3158 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 595:
#line 3164 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 596:
#line 3170 "parser/evoparser.y"
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

  case 597:
#line 3183 "parser/evoparser.y"
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

  case 598:
#line 3193 "parser/evoparser.y"
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

  case 599:
#line 3203 "parser/evoparser.y"
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

  case 600:
#line 3213 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s SET TTL %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableSetTtl((yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 601:
#line 3219 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s DROP TTL", (yyvsp[(3) - (5)].strval));
        AlterTableSetTtl((yyvsp[(3) - (5)].strval), NULL);
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 602:
#line 3226 "parser/evoparser.y"
    { ;}
    break;

  case 603:
#line 3227 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 604:
#line 3228 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 605:
#line 3232 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 606:
#line 3240 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 607:
#line 3246 "parser/evoparser.y"
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

  case 609:
#line 3259 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 610:
#line 3259 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 613:
#line 3267 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 614:
#line 3268 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 615:
#line 3269 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 616:
#line 3273 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 617:
#line 3274 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 618:
#line 3275 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 619:
#line 3279 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 620:
#line 3287 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 621:
#line 3296 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 622:
#line 3297 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 623:
#line 3298 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 624:
#line 3299 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 625:
#line 3300 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 629:
#line 3307 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 630:
#line 3311 "parser/evoparser.y"
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

  case 631:
#line 3321 "parser/evoparser.y"
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

  case 632:
#line 3333 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 633:
#line 3334 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 634:
#line 3334 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 635:
#line 3337 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 636:
#line 3338 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 637:
#line 3339 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 638:
#line 3340 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 639:
#line 3344 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 640:
#line 3347 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 641:
#line 3348 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 642:
#line 3349 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 643:
#line 3350 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 644:
#line 3356 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 645:
#line 3362 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 646:
#line 3367 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 647:
#line 3372 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 648:
#line 3376 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 649:
#line 3380 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 650:
#line 3382 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 653:
#line 3388 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 654:
#line 3389 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 655:
#line 3393 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 656:
#line 3394 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 657:
#line 3398 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 658:
#line 3399 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 659:
#line 3400 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 666:
#line 3415 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 667:
#line 3416 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 668:
#line 3417 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 669:
#line 3418 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 670:
#line 3419 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 671:
#line 3420 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 672:
#line 3421 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 673:
#line 3422 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 674:
#line 3427 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 675:
#line 3436 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 676:
#line 3443 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 677:
#line 3444 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 678:
#line 3445 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 679:
#line 3450 "parser/evoparser.y"
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

  case 680:
#line 3461 "parser/evoparser.y"
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

  case 681:
#line 3473 "parser/evoparser.y"
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

  case 682:
#line 3484 "parser/evoparser.y"
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

  case 683:
#line 3499 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 684:
#line 3503 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 685:
#line 3507 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 686:
#line 3508 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 687:
#line 3513 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 688:
#line 3515 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 689:
#line 3517 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 690:
#line 3519 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 691:
#line 3522 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 692:
#line 3523 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 693:
#line 3529 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 694:
#line 3534 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 695:
#line 3536 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 696:
#line 3538 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 697:
#line 3540 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 698:
#line 3542 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 699:
#line 3546 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 700:
#line 3550 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 701:
#line 3551 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 702:
#line 3556 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 703:
#line 3566 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 705:
#line 3579 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 706:
#line 3587 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 707:
#line 3595 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 709:
#line 3603 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 710:
#line 3604 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 711:
#line 3605 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 712:
#line 3606 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 713:
#line 3608 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 714:
#line 3610 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 715:
#line 3612 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 716:
#line 3617 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 717:
#line 3622 "parser/evoparser.y"
    { emit("TABLE OPT TTL_COLUMN %s", (yyvsp[(6) - (7)].strval)); SetTableTtlColumn((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 720:
#line 3630 "parser/evoparser.y"
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

  case 721:
#line 3645 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 722:
#line 3653 "parser/evoparser.y"
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

  case 723:
#line 3667 "parser/evoparser.y"
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

  case 724:
#line 3681 "parser/evoparser.y"
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

  case 725:
#line 3695 "parser/evoparser.y"
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

  case 726:
#line 3707 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 727:
#line 3708 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 728:
#line 3709 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 729:
#line 3712 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 730:
#line 3713 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 731:
#line 3716 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 732:
#line 3717 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 733:
#line 3718 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 734:
#line 3719 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 735:
#line 3720 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 736:
#line 3721 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 737:
#line 3722 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 738:
#line 3723 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 739:
#line 3725 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 740:
#line 3727 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 741:
#line 3729 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 742:
#line 3731 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 743:
#line 3733 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 744:
#line 3735 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 745:
#line 3738 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 746:
#line 3739 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 747:
#line 3742 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 748:
#line 3743 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 749:
#line 3746 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 750:
#line 3747 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 752:
#line 3751 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 753:
#line 3752 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 754:
#line 3753 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 755:
#line 3754 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 756:
#line 3755 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 757:
#line 3756 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 758:
#line 3757 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 759:
#line 3758 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 760:
#line 3759 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 761:
#line 3760 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 762:
#line 3761 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 763:
#line 3762 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 764:
#line 3763 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 765:
#line 3764 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 766:
#line 3765 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 767:
#line 3766 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 768:
#line 3767 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 769:
#line 3770 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 770:
#line 3771 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 771:
#line 3774 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 772:
#line 3776 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 773:
#line 3784 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 774:
#line 3785 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 776:
#line 3787 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 777:
#line 3788 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 778:
#line 3789 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 779:
#line 3790 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 780:
#line 3791 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 781:
#line 3792 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 782:
#line 3793 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 783:
#line 3794 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 784:
#line 3795 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 785:
#line 3802 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 786:
#line 3803 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 787:
#line 3804 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 788:
#line 3805 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 789:
#line 3806 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 790:
#line 3807 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 791:
#line 3808 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 792:
#line 3809 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 793:
#line 3810 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 794:
#line 3811 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 795:
#line 3812 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 796:
#line 3813 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 797:
#line 3814 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 798:
#line 3815 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 799:
#line 3816 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 800:
#line 3817 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 801:
#line 3818 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 802:
#line 3819 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 803:
#line 3820 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 804:
#line 3821 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 805:
#line 3822 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 806:
#line 3825 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 807:
#line 3826 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 808:
#line 3827 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 809:
#line 3830 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 810:
#line 3831 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 811:
#line 3834 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 812:
#line 3835 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 813:
#line 3836 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 815:
#line 3840 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 816:
#line 3841 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 817:
#line 3845 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 818:
#line 3846 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 819:
#line 3847 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 820:
#line 3848 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 821:
#line 3849 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 822:
#line 3850 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 823:
#line 3851 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 824:
#line 3852 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 825:
#line 3853 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 826:
#line 3854 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 827:
#line 3855 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 828:
#line 3856 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 829:
#line 3857 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 830:
#line 3858 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 831:
#line 3859 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 832:
#line 3860 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 833:
#line 3861 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 834:
#line 3862 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 835:
#line 3863 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 836:
#line 3864 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 837:
#line 3865 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 838:
#line 3866 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 839:
#line 3867 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 840:
#line 3868 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 841:
#line 3869 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 842:
#line 3870 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 843:
#line 3871 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 844:
#line 3872 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 845:
#line 3873 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 846:
#line 3874 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 847:
#line 3875 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 848:
#line 3876 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 849:
#line 3877 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 850:
#line 3878 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 851:
#line 3879 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 852:
#line 3882 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 853:
#line 3883 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 854:
#line 3887 "parser/evoparser.y"
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

  case 855:
#line 3899 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 856:
#line 3900 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 857:
#line 3901 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 858:
#line 3905 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 859:
#line 3908 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 860:
#line 3909 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 864:
#line 3913 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 865:
#line 3914 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 866:
#line 3922 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 867:
#line 3927 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 868:
#line 3933 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 869:
#line 3939 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 870:
#line 3946 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 871:
#line 3953 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 872:
#line 3959 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 873:
#line 3965 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 874:
#line 3972 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 879:
#line 3988 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 880:
#line 3989 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 881:
#line 3990 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 882:
#line 3991 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 883:
#line 3994 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 884:
#line 3995 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 885:
#line 3996 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 886:
#line 3997 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 887:
#line 3998 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 888:
#line 3999 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 889:
#line 4000 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 890:
#line 4001 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 891:
#line 4002 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 892:
#line 4003 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 901:
#line 4020 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 902:
#line 4021 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1023:
#line 4039 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1024:
#line 4046 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 1025:
#line 4051 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1026:
#line 4057 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1027:
#line 4063 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1028:
#line 4069 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1029:
#line 4080 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 1030:
#line 4085 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 1031:
#line 4091 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 1034:
#line 4102 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 1035:
#line 4103 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1036:
#line 4104 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 1037:
#line 4105 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 1038:
#line 4106 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 1039:
#line 4107 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1040:
#line 4108 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1041:
#line 4115 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 1042:
#line 4120 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 1043:
#line 4126 "parser/evoparser.y"
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

  case 1044:
#line 4141 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 1045:
#line 4142 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 1046:
#line 4145 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1047:
#line 4146 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 1048:
#line 4147 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 1049:
#line 4148 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1050:
#line 4151 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 1051:
#line 4156 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1052:
#line 4162 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1053:
#line 4171 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1054:
#line 4179 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1055:
#line 4189 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 1056:
#line 4194 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 1059:
#line 4207 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1060:
#line 4208 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1061:
#line 4209 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1062:
#line 4210 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1063:
#line 4211 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1064:
#line 4212 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1065:
#line 4213 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1066:
#line 4214 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1067:
#line 4217 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1068:
#line 4222 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1069:
#line 4228 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1070:
#line 4238 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1071:
#line 4245 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1072:
#line 4252 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1073:
#line 4260 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1075:
#line 4270 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1077:
#line 4274 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1078:
#line 4275 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 13246 "parser/evoparser.tab.c"
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


#line 4278 "parser/evoparser.y"

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
