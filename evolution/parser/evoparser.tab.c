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
     FILTER = 681,
     GRAPH = 682,
     NEIGHBORS = 683,
     EDGE = 684,
     DEPTH = 685,
     UPSERT = 686
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
#define GRAPH 682
#define NEIGHBORS 683
#define EDGE 684
#define DEPTH 685
#define UPSERT 686




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
	#include "../db/Graph.h"

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
#line 77 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 1036 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1049 "parser/evoparser.tab.c"

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
#define YYFINAL  173
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   15018

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  449
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  236
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1091
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2877

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   686

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     444,   445,    28,    26,   446,    27,   443,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   442,
       2,   448,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   447,    32,     2,     2,     2,     2,     2,
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
     435,   436,   437,   438,   439,   440,   441
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
    2656,  2669,  2684,  2691,  2700,  2709,  2720,  2727,  2729,  2731,
    2733,  2738,  2745,  2750,  2757,  2771,  2785,  2801,  2808,  2817,
    2827,  2829,  2833,  2835,  2840,  2847,  2848,  2853,  2858,  2861,
    2862,  2867,  2875,  2880,  2882,  2886,  2888,  2890,  2892,  2903,
    2916,  2917,  2920,  2923,  2924,  2927,  2930,  2933,  2936,  2939,
    2940,  2943,  2945,  2949,  2950,  2955,  2956,  2962,  2968,  2976,
    2987,  2998,  3016,  3029,  3049,  3061,  3068,  3077,  3084,  3091,
    3098,  3108,  3115,  3121,  3130,  3138,  3148,  3157,  3168,  3178,
    3186,  3194,  3203,  3212,  3220,  3226,  3227,  3229,  3232,  3234,
    3245,  3252,  3253,  3254,  3260,  3261,  3266,  3267,  3271,  3276,
    3279,  3280,  3286,  3290,  3296,  3297,  3300,  3303,  3306,  3309,
    3311,  3312,  3313,  3317,  3319,  3323,  3327,  3328,  3335,  3337,
    3339,  3343,  3347,  3355,  3359,  3363,  3369,  3375,  3377,  3386,
    3394,  3402,  3404,  3405,  3413,  3414,  3418,  3420,  3424,  3426,
    3428,  3430,  3432,  3434,  3435,  3437,  3442,  3446,  3448,  3452,
    3455,  3458,  3461,  3463,  3466,  3469,  3472,  3474,  3476,  3486,
    3487,  3490,  3493,  3497,  3503,  3509,  3517,  3523,  3525,  3530,
    3535,  3539,  3545,  3549,  3555,  3556,  3559,  3561,  3567,  3575,
    3583,  3593,  3605,  3607,  3610,  3614,  3616,  3627,  3628,  3633,
    3645,  3664,  3665,  3670,  3674,  3680,  3686,  3696,  3707,  3715,
    3720,  3728,  3730,  3734,  3744,  3754,  3764,  3771,  3783,  3792,
    3793,  3795,  3798,  3800,  3804,  3810,  3818,  3823,  3828,  3834,
    3840,  3845,  3852,  3864,  3878,  3892,  3908,  3913,  3920,  3922,
    3926,  3928,  3932,  3934,  3938,  3939,  3944,  3950,  3955,  3961,
    3966,  3972,  3977,  3983,  3988,  3993,  3997,  4001,  4005,  4008,
    4012,  4017,  4022,  4024,  4028,  4029,  4034,  4035,  4039,  4042,
    4046,  4050,  4054,  4058,  4064,  4070,  4076,  4080,  4086,  4089,
    4097,  4103,  4111,  4117,  4120,  4124,  4127,  4131,  4134,  4138,
    4144,  4149,  4155,  4163,  4172,  4181,  4189,  4196,  4203,  4209,
    4210,  4214,  4220,  4221,  4223,  4224,  4227,  4230,  4231,  4236,
    4240,  4243,  4247,  4251,  4255,  4259,  4263,  4267,  4271,  4275,
    4279,  4283,  4285,  4287,  4289,  4291,  4293,  4297,  4303,  4306,
    4311,  4313,  4315,  4317,  4319,  4323,  4327,  4331,  4335,  4341,
    4347,  4349,  4351,  4353,  4358,  4362,  4364,  4368,  4372,  4373,
    4375,  4377,  4379,  4383,  4387,  4390,  4392,  4396,  4400,  4404,
    4406,  4417,  4427,  4440,  4452,  4465,  4477,  4492,  4506,  4507,
    4509,  4511,  4515,  4518,  4522,  4526,  4530,  4532,  4534,  4536,
    4538,  4540,  4542,  4544,  4546,  4548,  4550,  4551,  4554,  4559,
    4565,  4571,  4577,  4583,  4589,  4591,  4593,  4595,  4597,  4599,
    4601,  4603,  4605,  4607,  4609,  4611,  4613,  4615,  4617,  4619,
    4621,  4623,  4625,  4627,  4629,  4631,  4633,  4635,  4637,  4639,
    4641,  4643,  4645,  4647,  4649,  4651,  4653,  4655,  4657,  4659,
    4661,  4663,  4665,  4667,  4669,  4671,  4673,  4675,  4677,  4679,
    4681,  4683,  4685,  4687,  4689,  4691,  4693,  4695,  4697,  4699,
    4701,  4703,  4705,  4707,  4709,  4711,  4713,  4715,  4717,  4719,
    4721,  4723,  4725,  4727,  4729,  4731,  4733,  4735,  4737,  4739,
    4741,  4743,  4745,  4747,  4749,  4751,  4753,  4755,  4757,  4759,
    4761,  4763,  4765,  4767,  4769,  4771,  4773,  4775,  4777,  4779,
    4781,  4783,  4785,  4787,  4789,  4791,  4793,  4795,  4797,  4799,
    4801,  4803,  4805,  4807,  4809,  4811,  4813,  4815,  4817,  4819,
    4821,  4823,  4825,  4827,  4829,  4831,  4833,  4835,  4837,  4841,
    4847,  4851,  4857,  4859,  4864,  4870,  4872,  4876,  4878,  4880,
    4882,  4884,  4886,  4888,  4890,  4892,  4906,  4922,  4924,  4926,
    4928,  4930,  4932,  4934,  4936,  4940,  4946,  4951,  4956,  4958,
    4964,  4965,  4968,  4972,  4975,  4979,  4982,  4985,  4988,  4990,
    4993,  4995,  4999,  5005,  5010,  5015,  5022,  5029,  5030,  5033,
    5036,  5038
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     450,     0,    -1,   489,   442,    -1,   489,   442,   450,    -1,
       3,    -1,     3,   443,     3,    -1,    89,   443,     3,    -1,
     183,   444,     3,   445,    91,   444,     4,   445,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   451,    26,   451,    -1,   451,    27,   451,    -1,   451,
      28,   451,    -1,   451,    29,   451,    -1,   451,    30,   451,
      -1,   451,    31,   451,    -1,    27,   451,    -1,   444,   451,
     445,    -1,   451,    12,   451,    -1,   451,    10,   451,    -1,
     451,    11,   451,    -1,   451,    23,   451,    -1,   451,    24,
     451,    -1,   451,    32,   451,    -1,   451,    25,   451,    -1,
     451,    34,   451,    -1,   451,    33,   451,    -1,    18,   451,
      -1,    17,   451,    -1,   451,    20,   451,    -1,    -1,   451,
      20,   444,   452,   490,   445,    -1,    -1,   451,    20,    47,
     444,   453,   490,   445,    -1,    -1,   451,    20,   232,   444,
     454,   490,   445,    -1,    -1,   451,    20,    40,   444,   455,
     490,   445,    -1,   451,    20,    47,   444,   459,   445,    -1,
     451,    20,   232,   444,   459,   445,    -1,   451,    15,   193,
      -1,   451,    15,    18,   193,    -1,   451,    15,     6,    -1,
     451,    15,    18,     6,    -1,     8,     9,   451,    -1,   451,
      19,   451,    50,   451,    -1,   451,    18,    19,   451,    50,
     451,    -1,   451,    -1,   451,   446,   456,    -1,   451,    -1,
     451,   446,   457,    -1,    -1,   263,    36,   458,   457,   447,
      -1,   263,    36,   447,    -1,   451,    36,   451,   447,    -1,
     451,    -1,   380,   444,   451,   445,    -1,   380,   444,   451,
     446,   451,   445,    -1,   381,   444,   451,   445,    -1,   382,
     444,   451,   446,   451,   445,    -1,   383,   444,   445,    -1,
     414,   444,   445,    -1,   384,   444,   451,   446,   451,   445,
      -1,   385,   444,   451,   446,   451,   445,    -1,   386,   444,
     451,   446,   451,   445,    -1,   387,   444,   451,   446,   451,
     445,    -1,   388,   444,   451,   445,    -1,   389,   444,   451,
     445,    -1,   390,   444,   451,   445,    -1,   451,    22,   451,
      -1,   451,    21,   451,    -1,   392,   444,   451,   446,   451,
     446,   451,   446,     5,   445,    -1,   393,   444,   451,   446,
     451,   446,   451,   446,     5,   446,     4,   445,    -1,   394,
     444,   451,   446,   451,   446,   451,   446,     5,   446,     4,
     445,    -1,    -1,   456,    -1,    -1,   451,    16,   444,   461,
     456,   445,    -1,    -1,   451,    18,    16,   444,   462,   456,
     445,    -1,    -1,   451,    16,   444,   463,   490,   445,    -1,
      -1,   451,    18,    16,   444,   464,   490,   445,    -1,    -1,
     281,   444,   465,   490,   445,    -1,     3,   444,   460,   445,
      -1,   322,   444,    28,   445,    -1,   322,   444,   451,   445,
      -1,   323,   444,   451,   445,    -1,   324,   444,   451,   445,
      -1,   325,   444,   451,   445,    -1,   326,   444,   451,   445,
      -1,   320,   444,   451,   445,    -1,   320,   444,   451,   321,
       4,   445,    -1,    -1,   342,   444,   445,   350,   444,   466,
     497,   499,   445,    -1,    -1,   343,   444,   445,   350,   444,
     467,   497,   499,   445,    -1,    -1,   344,   444,   445,   350,
     444,   468,   497,   499,   445,    -1,    -1,   323,   444,   451,
     445,   350,   444,   469,   497,   499,   445,    -1,    -1,   322,
     444,    28,   445,   350,   444,   470,   497,   499,   445,    -1,
      -1,   322,   444,   451,   445,   350,   444,   471,   497,   499,
     445,    -1,    -1,   324,   444,   451,   445,   350,   444,   472,
     497,   499,   445,    -1,    -1,   325,   444,   451,   445,   350,
     444,   473,   497,   499,   445,    -1,    -1,   326,   444,   451,
     445,   350,   444,   474,   497,   499,   445,    -1,    -1,   345,
     444,   451,   445,   350,   444,   475,   497,   499,   445,    -1,
      -1,   345,   444,   451,   446,     5,   445,   350,   444,   476,
     497,   499,   445,    -1,    -1,   345,   444,   451,   446,     5,
     446,     4,   445,   350,   444,   477,   497,   499,   445,    -1,
      -1,   345,   444,   451,   446,     5,   446,     5,   445,   350,
     444,   478,   497,   499,   445,    -1,    -1,   346,   444,   451,
     445,   350,   444,   479,   497,   499,   445,    -1,    -1,   346,
     444,   451,   446,     5,   445,   350,   444,   480,   497,   499,
     445,    -1,    -1,   346,   444,   451,   446,     5,   446,     4,
     445,   350,   444,   481,   497,   499,   445,    -1,    -1,   346,
     444,   451,   446,     5,   446,     5,   445,   350,   444,   482,
     497,   499,   445,    -1,    -1,   347,   444,     5,   445,   350,
     444,   483,   497,   499,   445,    -1,    -1,   348,   444,   445,
     350,   444,   484,   497,   499,   445,    -1,    -1,   349,   444,
     445,   350,   444,   485,   497,   499,   445,    -1,   282,   444,
     451,   446,   451,   446,   451,   445,    -1,   282,   444,   451,
     446,   451,   445,    -1,   282,   444,   451,   136,   451,   445,
      -1,   282,   444,   451,   136,   451,   140,   451,   445,    -1,
     283,   444,   451,   445,    -1,   283,   444,   486,   451,   136,
     451,   445,    -1,   283,   444,   486,   136,   451,   445,    -1,
     327,   444,   451,   445,    -1,   328,   444,   451,   445,    -1,
     329,   444,   451,   445,    -1,   424,   444,   451,   445,    -1,
     425,   444,   451,   446,   451,   445,    -1,   330,   444,   451,
     446,   451,   445,    -1,   331,   444,   451,   446,   451,   446,
     451,   445,    -1,   332,   444,   451,   446,   451,   445,    -1,
     294,   444,   451,   446,   451,   445,    -1,   295,   444,   451,
     446,   451,   445,    -1,   296,   444,   451,   446,   451,   446,
     451,   445,    -1,   297,   444,   451,   446,   451,   446,   451,
     445,    -1,   298,   444,   451,   445,    -1,   299,   444,   451,
     446,   451,   445,    -1,   300,   444,   451,   446,   451,   445,
      -1,   301,   444,   451,   446,   451,   445,    -1,   302,   444,
     451,   445,    -1,   303,   444,   451,   445,    -1,   304,   444,
     451,   445,    -1,   305,   444,   451,   446,   451,   445,    -1,
     305,   444,   451,   445,    -1,   306,   444,   451,   446,   451,
     445,    -1,   307,   444,   451,   445,    -1,   308,   444,   451,
     446,   451,   445,    -1,   309,   444,   445,    -1,   310,   444,
     451,   445,    -1,   311,   444,   451,   445,    -1,   312,   444,
     451,   445,    -1,   313,   444,   445,    -1,   293,   444,   445,
      -1,   286,   444,   451,   446,   451,   445,    -1,   287,   444,
     451,   445,    -1,   288,   444,   451,   445,    -1,   289,   444,
     451,   445,    -1,   290,   444,   451,   445,    -1,   291,   444,
     451,   445,    -1,   292,   444,   451,   445,    -1,   352,   444,
     451,   446,   451,   445,    -1,   353,   444,   451,   445,    -1,
     354,   444,   451,   445,    -1,   355,   444,   451,   445,    -1,
     356,   444,   451,   445,    -1,   357,   444,   451,   445,    -1,
     358,   444,   451,   445,    -1,   359,   444,   451,   445,    -1,
     360,   444,   451,   445,    -1,   361,   444,   451,   446,   451,
     446,   451,   445,    -1,   362,   444,   451,   446,   451,   446,
     451,   445,    -1,   363,   444,   451,   446,   451,   446,   451,
     445,    -1,   364,   444,   451,   446,   451,   445,    -1,   365,
     444,   451,   446,   451,   445,    -1,   366,   444,   451,   446,
     451,   446,   451,   445,    -1,   367,   444,   451,   446,   451,
     446,   451,   445,    -1,   368,   444,   451,   446,   451,   445,
      -1,   368,   444,   451,   446,   451,   446,   451,   446,   451,
     445,    -1,   369,   444,   451,   445,    -1,   369,   444,   451,
     446,   451,   445,    -1,   369,   444,   451,   446,   451,   446,
     451,   445,    -1,   370,   444,   451,   445,    -1,   372,   444,
     451,   445,    -1,   373,   444,   451,   445,    -1,   374,   444,
     451,   446,   451,   445,    -1,   374,   444,   451,   446,   451,
     446,   451,   445,    -1,   375,   444,   445,    -1,   314,   444,
     451,    51,   657,   445,    -1,   315,   444,   451,   446,   657,
     445,    -1,   316,   444,   451,   446,   451,   445,    -1,   317,
     444,   451,   446,   451,   445,    -1,   318,   444,   451,   446,
     451,   446,   451,   445,    -1,   451,    15,   319,    -1,   330,
     444,   451,   446,   451,   446,   451,   445,    -1,   330,   444,
     451,   446,   451,   446,   451,   446,   451,   445,    -1,   333,
     444,   445,    -1,   334,   444,   445,    -1,   335,   444,   445,
      -1,   336,   444,   445,    -1,   337,   444,   445,    -1,   338,
      -1,   339,    -1,   340,   444,   451,   445,    -1,   341,   444,
     451,   446,   451,   445,    -1,   178,    -1,   254,    -1,    65,
      -1,   284,   444,   451,   446,   487,   445,    -1,   285,   444,
     451,   446,   487,   445,    -1,   161,   451,   278,    -1,   161,
     451,   104,    -1,   161,   451,   105,    -1,   161,   451,   109,
      -1,   161,   451,   111,    -1,   161,   451,   279,    -1,   161,
     451,   145,    -1,   161,   451,   144,    -1,   161,   451,   147,
      -1,    77,   451,   488,   124,    -1,    77,   451,   488,   125,
     451,   124,    -1,    77,   488,   124,    -1,    77,   488,   125,
     451,   124,    -1,   275,   451,   253,   451,    -1,   488,   275,
     451,   253,   451,    -1,   451,    14,   451,    -1,   451,    18,
      14,   451,    -1,   451,    13,   451,    -1,   451,    18,    13,
     451,    -1,    72,    -1,    80,    -1,    81,    -1,   225,    -1,
     490,    -1,   241,   509,   510,    -1,   241,   509,   510,   136,
     513,   505,   491,   492,   496,   501,   504,   506,   507,    -1,
     241,   509,   510,   159,     3,   136,   513,   491,   492,   496,
     501,   504,    -1,    -1,   274,   451,    -1,    -1,   141,    63,
     493,   495,    -1,   451,   494,    -1,   493,   446,   451,   494,
      -1,    -1,    49,    -1,   112,    -1,    -1,   277,   214,    -1,
      -1,   148,   451,    -1,    -1,   351,    63,   498,    -1,     3,
      -1,   498,   446,     3,    -1,    -1,   198,    63,   500,    -1,
       3,   494,    -1,   500,   446,     3,   494,    -1,    -1,   198,
      63,   502,    -1,   503,    -1,   502,   446,   503,    -1,     3,
     494,    -1,     3,   443,     3,   494,    -1,     5,   494,    -1,
      -1,   179,   451,    -1,   179,   451,   446,   451,    -1,   179,
     451,   181,   451,    -1,    -1,   140,   412,    51,    94,   413,
       5,    -1,    -1,   140,   258,    -1,   140,   230,    -1,   140,
     258,   231,   180,    -1,   140,   230,   231,   180,    -1,    -1,
     159,   508,    -1,     3,    -1,   508,   446,     3,    -1,    -1,
     509,    40,    -1,   509,   106,    -1,   509,   110,    -1,   509,
     146,    -1,   509,   238,    -1,   509,   226,    -1,   509,   234,
      -1,   509,   233,    -1,   511,    -1,   510,   446,   511,    -1,
      28,    -1,   451,   512,    -1,    51,     3,    -1,     3,    -1,
      -1,   514,    -1,   513,   446,   514,    -1,   515,    -1,   519,
      -1,     3,   512,   526,    -1,   173,     3,   512,   526,    -1,
       3,   443,     3,   512,   526,    -1,   529,   518,     3,    -1,
     516,   518,     3,    -1,   381,   444,   451,   445,    -1,   381,
     444,   451,   445,   518,     3,    -1,   381,   444,   451,   445,
     518,     3,   444,     3,   445,    -1,   444,   513,   445,    -1,
      -1,   167,   444,   517,   490,   445,    -1,    51,    -1,    -1,
     514,   520,   163,   515,   524,    -1,   514,   238,   515,    -1,
     514,   238,   515,   197,   451,    -1,   514,   522,   521,   163,
     515,   525,    -1,   514,   190,   523,   163,   515,    -1,    -1,
     153,    -1,    76,    -1,    -1,   196,    -1,   177,    -1,   215,
      -1,   177,   521,    -1,   215,   521,    -1,    -1,    -1,   525,
      -1,   197,   451,    -1,   266,   444,   508,   445,    -1,   267,
     164,   527,   444,   528,   445,    -1,   154,   164,   527,   444,
     528,   445,    -1,   133,   164,   527,   444,   528,   445,    -1,
      -1,   140,   163,    -1,    -1,     3,    -1,   528,   446,     3,
      -1,   444,   490,   445,    -1,   530,    -1,   107,   531,   136,
       3,   491,   501,   504,   683,    -1,   531,   176,    -1,   531,
     203,    -1,   531,   154,    -1,    -1,   107,   531,   532,   136,
     513,   491,    -1,     3,   533,    -1,   532,   446,     3,   533,
      -1,    -1,   443,    28,    -1,   107,   531,   136,   532,   266,
     513,   491,    -1,   534,    -1,   108,   252,     3,   535,    -1,
     108,   252,   156,   281,     3,   535,    -1,    -1,    74,    -1,
     210,    -1,   536,    -1,    73,   155,     3,   197,     3,   444,
     541,   445,    -1,    73,   138,   155,     3,   197,     3,   444,
     541,   445,    -1,    73,   155,   156,   281,     3,   197,     3,
     444,   541,   445,    -1,    73,   261,   155,     3,   197,     3,
     444,   541,   445,    -1,    73,   261,   155,   156,   281,     3,
     197,     3,   444,   541,   445,    -1,    73,   155,     3,   197,
       3,   266,   268,   444,   541,   445,    -1,    73,   155,   156,
     281,     3,   197,     3,   266,   268,   444,   541,   445,    -1,
      73,   261,   155,     3,   197,     3,   266,   268,   444,   541,
     445,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     266,   268,   444,   541,   445,    -1,    73,   155,    85,     3,
     197,     3,   444,   541,   445,    -1,    73,   155,    85,   156,
     281,     3,   197,     3,   444,   541,   445,    -1,    73,   261,
     155,    85,     3,   197,     3,   444,   541,   445,    -1,    73,
     261,   155,    85,   156,   281,     3,   197,     3,   444,   541,
     445,    -1,    73,   155,    85,     3,   197,     3,   266,   268,
     444,   541,   445,    -1,    73,   261,   155,    85,     3,   197,
       3,   266,   268,   444,   541,   445,    -1,    73,   155,     3,
     197,     3,   266,   391,   444,     3,   537,   445,   538,    -1,
      73,   155,   156,   281,     3,   197,     3,   266,   391,   444,
       3,   537,   445,   538,    -1,    -1,     3,    -1,    -1,   277,
     444,   539,   445,    -1,   540,    -1,   539,   446,   540,    -1,
       3,    20,     5,    -1,     3,    -1,   541,   446,     3,    -1,
     542,    -1,   327,   444,     3,   445,    -1,   328,   444,     3,
     445,    -1,   329,   444,     3,   445,    -1,   330,   444,     3,
     446,     3,   445,    -1,   543,    -1,   108,   155,     3,    -1,
     544,   546,    -1,   255,   252,     3,    -1,   255,   252,     3,
     446,   545,    -1,     3,    -1,   545,   446,     3,    -1,    -1,
     546,    74,    -1,   546,   210,    -1,   546,    55,    53,    -1,
     546,    54,    53,    -1,   566,    -1,   567,    -1,   568,    -1,
     547,    -1,   549,    -1,    73,   395,   396,     3,   548,    -1,
      73,   395,   396,   156,   281,     3,   548,    -1,    -1,   277,
     444,   397,    20,     4,   445,    -1,   108,   395,   396,     3,
      -1,   108,   395,   396,     3,    74,    -1,   108,   395,   396,
     156,   281,     3,    -1,   550,    -1,   552,    -1,   553,    -1,
     395,   398,   159,     3,   271,   444,   551,   446,   551,   446,
     551,   446,   551,   446,   551,   446,   551,   446,   551,   445,
      -1,   395,   398,   401,   159,     3,   271,   444,   551,   446,
     551,   446,   551,   446,   551,   446,   551,   446,   551,   446,
     551,   445,    -1,     4,    -1,   193,    -1,   395,   399,   136,
       3,   402,     4,    -1,   395,   399,   136,     3,   402,     4,
     403,     4,    -1,   395,   400,   136,     3,   402,     4,    -1,
     395,   400,   136,     3,   402,     4,   179,     5,    -1,   554,
      -1,   559,    -1,   560,    -1,   562,    -1,   563,    -1,   564,
      -1,   565,    -1,    73,   404,   396,     3,   555,   556,    -1,
      73,   404,   396,   156,   281,     3,   555,   556,    -1,    -1,
      -1,   277,   444,   557,   445,    -1,   558,    -1,   557,   446,
     558,    -1,   405,    20,     5,    -1,   406,    20,     4,    -1,
     108,   404,   396,     3,    -1,   108,   404,   396,     3,    74,
      -1,   108,   404,   396,   156,   281,     3,    -1,   404,   398,
     159,     3,   271,   444,   561,   446,   561,   446,   561,   445,
      -1,   404,   398,   159,     3,   271,   444,   561,   446,   561,
     446,   561,   446,   561,   445,    -1,     4,    -1,   193,    -1,
     404,   399,   136,     3,   274,   411,    20,     4,    12,   164,
      20,     4,    -1,   404,   407,     3,   266,   273,     4,    -1,
     404,   407,     3,   266,   273,     4,   179,     5,    -1,   404,
     107,   136,     3,   274,   411,    20,     4,    12,   164,    20,
       4,    -1,   404,   400,   409,    16,     3,    -1,   404,   400,
     409,    16,     3,   410,     4,    -1,   168,     3,    -1,   168,
       3,   171,    -1,   170,     3,    -1,   170,    28,    -1,   169,
       3,    -1,   169,     3,   446,     4,    -1,   569,    -1,   570,
      -1,   571,    -1,   572,    -1,    73,   417,     3,   140,   418,
       3,    -1,    73,   417,   156,   281,     3,   140,   418,     3,
      -1,   108,   417,     3,    -1,   108,   417,   156,   281,     3,
      -1,   419,   417,     3,    -1,   420,   417,     3,   421,     5,
      -1,   573,    -1,   574,    -1,   575,    -1,    73,   426,     3,
     197,   428,     4,   101,     4,    -1,    73,   426,   156,   281,
       3,   197,   428,     4,   101,     4,    -1,   108,   426,     3,
      -1,   108,   426,   156,   281,     3,    -1,    37,   426,     3,
     120,    -1,    37,   426,     3,   100,    -1,   576,    -1,   577,
      -1,   578,    -1,    73,   429,     3,     3,    -1,    73,   429,
       3,     3,   277,   444,   422,    20,     4,   445,    -1,   108,
     429,     3,     3,    -1,   108,   429,     3,   156,   281,     3,
      -1,   429,   430,   159,     3,   271,   444,     4,   446,     4,
     446,     4,   445,    -1,   429,   430,   159,     3,   271,   444,
       4,   446,     4,   446,     4,   446,     4,   445,    -1,   429,
     431,   136,     3,   274,   433,    20,     4,    -1,   429,   431,
     136,     3,   274,   433,    20,     4,   432,     5,    -1,   429,
     255,   136,     3,   274,   433,    20,     4,    -1,   429,   255,
     136,     3,   274,   433,    20,     4,    59,     5,    -1,   429,
     322,   444,    28,   445,   136,     3,   274,   433,    20,     4,
      -1,   579,    -1,   584,    -1,   585,    -1,    73,   434,   396,
       3,   580,   581,    -1,    73,   434,   396,   156,   281,     3,
     580,   581,    -1,    -1,    -1,   277,   444,   582,   445,    -1,
     583,    -1,   582,   446,   583,    -1,   405,    20,     5,    -1,
     406,    20,     4,    -1,   108,   434,   396,     3,    -1,   108,
     434,   396,   156,   281,     3,    -1,   434,   435,   159,     3,
     271,   444,     4,   446,     4,   446,     4,   445,    -1,   434,
     435,   159,     3,   271,   444,     4,   446,     4,   446,     4,
     446,     4,   445,    -1,   434,   436,   136,     3,   274,     4,
      -1,   434,   436,   136,     3,   274,     4,   179,     5,    -1,
     434,   407,     3,   266,   273,     4,   179,     5,    -1,   434,
     407,     3,   266,   273,     4,   274,     4,   179,     5,    -1,
     434,   107,   136,     3,   274,     4,    -1,   586,    -1,   587,
      -1,   588,    -1,    73,   437,   396,     3,    -1,    73,   437,
     396,   156,   281,     3,    -1,   108,   437,   396,     3,    -1,
     108,   437,   396,   156,   281,     3,    -1,   437,   441,   191,
     159,     3,   271,   444,     4,   446,     4,   446,     4,   445,
      -1,   437,   441,   439,   159,     3,   271,   444,     4,   446,
       4,   446,     4,   445,    -1,   437,   441,   439,   159,     3,
     271,   444,     4,   446,     4,   446,     4,   446,     4,   445,
      -1,   437,   438,    94,     4,    16,     3,    -1,   437,   438,
      94,     4,    16,     3,   440,     5,    -1,   437,   438,    94,
       4,    16,     3,    51,    94,     4,    -1,   589,    -1,   206,
     252,     3,    -1,   590,    -1,   592,     3,   591,   593,    -1,
     592,     3,   443,     3,   591,   593,    -1,    -1,   277,    44,
       5,    45,    -1,   277,    44,     5,    46,    -1,    41,   252,
      -1,    -1,   258,    42,   197,   594,    -1,   258,    42,   197,
     594,   277,     5,    43,    -1,   108,    42,   197,   594,    -1,
       3,    -1,   594,   446,     3,    -1,   603,    -1,   595,    -1,
     602,    -1,    73,   221,     3,   197,     3,   596,   597,   598,
     600,   601,    -1,    73,   221,     3,   197,   404,   396,     3,
     596,   597,   598,   600,   601,    -1,    -1,    51,   223,    -1,
      51,   224,    -1,    -1,   140,    40,    -1,   140,   241,    -1,
     140,   157,    -1,   140,   258,    -1,   140,   107,    -1,    -1,
     245,   599,    -1,     3,    -1,   599,   446,     3,    -1,    -1,
     266,   444,   451,   445,    -1,    -1,   277,    78,   444,   451,
     445,    -1,   108,   221,     3,   197,     3,    -1,   108,   221,
       3,   197,   404,   396,     3,    -1,    37,   252,     3,    38,
      71,     3,    78,   444,   451,   445,    -1,    37,   252,     3,
      38,    71,     3,   261,   444,   650,   445,    -1,    37,   252,
       3,    38,    71,     3,   134,   164,   444,   647,   445,   207,
       3,   444,   648,   445,   649,    -1,    37,   252,     3,    38,
      71,     3,    78,   444,   451,   445,    18,   269,    -1,    37,
     252,     3,    38,    71,     3,   134,   164,   444,   647,   445,
     207,     3,   444,   648,   445,   649,    18,   269,    -1,    37,
     252,     3,    38,    71,     3,   201,   164,   444,   646,   445,
      -1,    37,   252,     3,   108,    71,     3,    -1,    37,   252,
       3,   208,    71,     3,   245,     3,    -1,    37,   252,     3,
     120,    71,     3,    -1,    37,   252,     3,   100,    71,     3,
      -1,    37,   252,     3,   269,    71,     3,    -1,    37,   252,
       3,    38,    84,     3,   657,   652,   604,    -1,    37,   252,
       3,   108,    84,     3,    -1,    37,   252,     3,   108,     3,
      -1,    37,   252,     3,   208,    84,     3,   245,     3,    -1,
      37,   252,     3,   208,     3,   245,     3,    -1,    37,   252,
       3,   187,    84,     3,   657,   652,   604,    -1,    37,   252,
       3,   187,     3,   657,   652,   604,    -1,    37,   252,     3,
      75,    84,     3,     3,   657,   652,   604,    -1,    37,   252,
       3,    75,     3,     3,   657,   652,   604,    -1,    37,   252,
       3,   120,   217,     3,   222,    -1,    37,   252,     3,   100,
     217,     3,   222,    -1,    37,   404,   396,     3,   120,   217,
       3,   222,    -1,    37,   404,   396,     3,   100,   217,     3,
     222,    -1,    37,   252,     3,   240,   423,    20,     4,    -1,
      37,   252,     3,   108,   422,    -1,    -1,   130,    -1,    39,
       3,    -1,   605,    -1,   157,   613,   614,     3,   615,   271,
     617,   606,   608,   683,    -1,   157,   613,   614,     3,   615,
     490,    -1,    -1,    -1,   199,   164,   258,   607,   612,    -1,
      -1,   197,    88,   609,   610,    -1,    -1,   444,     3,   445,
      -1,   444,     3,   446,     3,    -1,   101,    90,    -1,    -1,
     101,   258,   611,   240,   612,    -1,     3,    20,   451,    -1,
     612,   446,     3,    20,   451,    -1,    -1,   613,   176,    -1,
     613,   103,    -1,   613,   146,    -1,   613,   154,    -1,   159,
      -1,    -1,    -1,   444,   616,   445,    -1,     3,    -1,   616,
     446,     3,    -1,   444,   619,   445,    -1,    -1,   617,   446,
     618,   444,   619,   445,    -1,   451,    -1,   113,    -1,   619,
     446,   451,    -1,   619,   446,   113,    -1,   157,   613,   614,
       3,   240,   620,   606,    -1,     3,    20,   451,    -1,     3,
      20,   113,    -1,   620,   446,     3,    20,   451,    -1,   620,
     446,     3,    20,   113,    -1,   621,    -1,   216,   613,   614,
       3,   615,   271,   617,   606,    -1,   216,   613,   614,     3,
     240,   620,   606,    -1,   216,   613,   614,     3,   615,   490,
     606,    -1,   622,    -1,    -1,    86,     3,   623,   624,   626,
     627,   628,    -1,    -1,   444,   625,   445,    -1,     3,    -1,
     625,   446,     3,    -1,   136,    -1,   245,    -1,     4,    -1,
     236,    -1,   237,    -1,    -1,   629,    -1,   277,   444,   629,
     445,    -1,   444,   629,   445,    -1,   630,    -1,   629,   446,
     630,    -1,   135,    87,    -1,   135,   249,    -1,    99,     4,
      -1,   143,    -1,   143,     6,    -1,   193,     4,    -1,   242,
       4,    -1,    87,    -1,   631,    -1,   258,   632,   513,   240,
     633,   491,   501,   504,   683,    -1,    -1,   613,   176,    -1,
     613,   154,    -1,     3,    20,   451,    -1,     3,   443,     3,
      20,   451,    -1,   633,   446,     3,    20,   451,    -1,   633,
     446,     3,   443,     3,    20,   451,    -1,   208,   252,     3,
     245,     3,    -1,   634,    -1,    73,    95,   635,     3,    -1,
      73,   227,   635,     3,    -1,   108,    95,     3,    -1,   108,
      95,   156,   281,     3,    -1,   108,   227,     3,    -1,   108,
     227,   156,   281,     3,    -1,    -1,   156,   281,    -1,   636,
      -1,    73,   102,     3,    51,   657,    -1,    73,   102,     3,
      51,   657,   113,   451,    -1,    73,   102,     3,    51,   657,
      18,   193,    -1,    73,   102,     3,    51,   657,    78,   444,
     451,   445,    -1,    73,   102,     3,    51,   657,    18,   193,
      78,   444,   451,   445,    -1,   637,    -1,   267,     3,    -1,
     267,    95,     3,    -1,   638,    -1,    73,   643,   252,   635,
       3,   444,   644,   445,   640,   639,    -1,    -1,   172,   444,
       3,   445,    -1,    73,   643,   252,   635,     3,   443,     3,
     444,   644,   445,   640,    -1,    73,   643,   252,   635,     3,
     351,    94,     3,   140,   271,   136,   444,     5,   445,   245,
     444,     5,   445,    -1,    -1,   640,    48,    20,     5,    -1,
     640,    48,     5,    -1,   640,   197,     3,   107,     3,    -1,
     640,   197,     3,   248,     3,    -1,   640,   228,    63,   268,
     444,     3,   445,   229,     5,    -1,   640,   228,    63,   204,
     444,     3,   445,   444,   641,   445,    -1,   640,   351,    63,
     204,   444,     3,   445,    -1,   640,   277,   415,   416,    -1,
     640,   277,   444,   423,    20,     4,   445,    -1,   642,    -1,
     641,   446,   642,    -1,   228,     3,   271,   174,   250,     4,
     197,   191,     5,    -1,   228,     3,   271,   174,   250,   184,
     197,   191,     5,    -1,    73,   643,   252,   635,     3,   444,
     644,   445,   659,    -1,    73,   643,   252,   635,     3,   659,
      -1,    73,   643,   252,   635,     3,   443,     3,   444,   644,
     445,   659,    -1,    73,   643,   252,   635,     3,   443,     3,
     659,    -1,    -1,   246,    -1,   247,   246,    -1,   645,    -1,
     644,   446,   645,    -1,   201,   164,   444,   646,   445,    -1,
      71,     3,   201,   164,   444,   646,   445,    -1,   164,   444,
     508,   445,    -1,   155,   444,   508,   445,    -1,   138,   155,
     444,   508,   445,    -1,   138,   164,   444,   508,   445,    -1,
      78,   444,   451,   445,    -1,    71,     3,    78,   444,   451,
     445,    -1,   134,   164,   444,   647,   445,   207,     3,   444,
     648,   445,   649,    -1,   134,   164,   444,   647,   445,   207,
       3,   443,     3,   444,   648,   445,   649,    -1,    71,     3,
     134,   164,   444,   647,   445,   207,     3,   444,   648,   445,
     649,    -1,    71,     3,   134,   164,   444,   647,   445,   207,
       3,   443,     3,   444,   648,   445,   649,    -1,   261,   444,
     650,   445,    -1,    71,     3,   261,   444,   650,   445,    -1,
       3,    -1,   646,   446,     3,    -1,     3,    -1,   647,   446,
       3,    -1,     3,    -1,   648,   446,     3,    -1,    -1,   649,
     197,   107,    74,    -1,   649,   197,   107,   240,   193,    -1,
     649,   197,   107,   210,    -1,   649,   197,   107,   240,   113,
      -1,   649,   197,   258,    74,    -1,   649,   197,   258,   240,
     193,    -1,   649,   197,   258,   210,    -1,   649,   197,   258,
     240,   113,    -1,   649,   197,   107,   192,    -1,   649,   197,
     258,   192,    -1,   649,   183,   137,    -1,   649,   183,   235,
      -1,   649,   183,   200,    -1,   649,    97,    -1,   649,    18,
      97,    -1,   649,    97,   151,    98,    -1,   649,    97,   151,
     149,    -1,     3,    -1,   650,   446,     3,    -1,    -1,   651,
       3,   657,   652,    -1,    -1,   652,    18,   193,    -1,   652,
     193,    -1,   652,   113,     4,    -1,   652,   113,     5,    -1,
     652,   113,     7,    -1,   652,   113,     6,    -1,   652,   113,
     333,   444,   445,    -1,   652,   113,   334,   444,   445,    -1,
     652,   113,   335,   444,   445,    -1,   652,   113,    72,    -1,
     652,   113,   444,   451,   445,    -1,   652,    48,    -1,   652,
      48,   444,     5,   446,     5,   445,    -1,   652,    48,   444,
       5,   445,    -1,   652,    53,   444,     5,   446,     5,   445,
      -1,   652,    53,   444,     5,   445,    -1,   652,    53,    -1,
     652,   261,   164,    -1,   652,   261,    -1,   652,   201,   164,
      -1,   652,   164,    -1,   652,    79,     4,    -1,   652,    78,
     444,   451,   445,    -1,   652,    71,     3,   261,    -1,   652,
      71,     3,   201,   164,    -1,   652,    71,     3,    78,   444,
     451,   445,    -1,   652,    56,    52,    51,   444,   451,   445,
      57,    -1,   652,    56,    52,    51,   444,   451,   445,    58,
      -1,   652,    56,    52,    51,   444,   451,   445,    -1,   652,
      51,   444,   451,   445,    57,    -1,   652,    51,   444,   451,
     445,    58,    -1,   652,    51,   444,   451,   445,    -1,    -1,
     444,     5,   445,    -1,   444,     5,   446,     5,   445,    -1,
      -1,    64,    -1,    -1,   655,   259,    -1,   655,   280,    -1,
      -1,   656,    82,   240,     4,    -1,   656,    83,     4,    -1,
      67,   653,    -1,   244,   653,   655,    -1,   239,   653,   655,
      -1,   189,   653,   655,    -1,   160,   653,   655,    -1,   152,
     653,   655,    -1,    66,   653,   655,    -1,   205,   653,   655,
      -1,   114,   653,   655,    -1,   132,   653,   655,    -1,   116,
     653,   655,    -1,   117,    -1,   257,    -1,   251,    -1,   115,
      -1,   278,    -1,    82,   653,   656,    -1,   270,   444,     5,
     445,   656,    -1,    64,   653,    -1,   272,   444,     5,   445,
      -1,   256,    -1,    61,    -1,   188,    -1,   182,    -1,   243,
     654,   656,    -1,   249,   654,   656,    -1,   185,   654,   656,
      -1,   175,   654,   656,    -1,   123,   444,   658,   445,   656,
      -1,   240,   444,   658,   445,   656,    -1,    62,    -1,   262,
      -1,   264,    -1,   273,   444,     5,   445,    -1,   657,    36,
     447,    -1,     4,    -1,   658,   446,     4,    -1,   660,   518,
     490,    -1,    -1,   154,    -1,   216,    -1,   661,    -1,   240,
     227,     3,    -1,   240,   227,   113,    -1,   240,   662,    -1,
     663,    -1,   662,   446,   663,    -1,     8,    20,   451,    -1,
       8,     9,   451,    -1,   664,    -1,    73,   202,     3,   444,
     665,   445,    51,    60,   669,   124,    -1,    73,   202,     3,
     444,   665,   445,    60,   669,   124,    -1,    73,    10,   216,
     202,     3,   444,   665,   445,    51,    60,   669,   124,    -1,
      73,    10,   216,   202,     3,   444,   665,   445,    60,   669,
     124,    -1,    73,   139,     3,   444,   665,   445,   213,   668,
      51,    60,   669,   124,    -1,    73,   139,     3,   444,   665,
     445,   213,   668,    60,   669,   124,    -1,    73,    10,   216,
     139,     3,   444,   665,   445,   213,   668,    51,    60,   669,
     124,    -1,    73,    10,   216,   139,     3,   444,   665,   445,
     213,   668,    60,   669,   124,    -1,    -1,   666,    -1,   667,
      -1,   666,   446,   667,    -1,     3,   657,    -1,    16,     3,
     657,    -1,   195,     3,   657,    -1,   150,     3,   657,    -1,
     152,    -1,   160,    -1,   270,    -1,   249,    -1,    62,    -1,
     132,    -1,   114,    -1,    66,    -1,   117,    -1,   251,    -1,
      -1,   669,   670,    -1,   669,    60,   669,   124,    -1,   669,
     156,   669,   124,   156,    -1,   669,   276,   669,   124,   276,
      -1,   669,   166,   669,   124,   166,    -1,   669,   131,   669,
     124,   131,    -1,   669,    77,   669,   124,    77,    -1,     3,
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
      -1,   277,    -1,   202,    -1,   139,    -1,   213,    -1,   444,
      -1,   445,    -1,   446,    -1,   442,    -1,   443,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    17,
      -1,   448,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,     8,    -1,   671,    -1,   108,   202,     3,
      -1,   108,   202,   156,   281,     3,    -1,   108,   139,     3,
      -1,   108,   139,   156,   281,     3,    -1,   672,    -1,    68,
       3,   444,   445,    -1,    68,     3,   444,   673,   445,    -1,
     674,    -1,   673,   446,   674,    -1,     5,    -1,     4,    -1,
       7,    -1,   193,    -1,     6,    -1,     3,    -1,     8,    -1,
     675,    -1,    73,   219,     3,   676,   677,   197,     3,   140,
     118,   217,    60,   669,   124,    -1,    73,   219,     3,   676,
     677,   197,   404,   396,     3,   140,   118,   217,    60,   669,
     124,    -1,    59,    -1,    39,    -1,   157,    -1,   258,    -1,
     107,    -1,   398,    -1,   678,    -1,   108,   219,     3,    -1,
     108,   219,   156,   281,     3,    -1,    37,   219,     3,   120,
      -1,    37,   219,     3,   100,    -1,   679,    -1,    73,   371,
     635,     3,   680,    -1,    -1,   680,   681,    -1,   376,   277,
       5,    -1,   376,     5,    -1,   377,    63,     5,    -1,   377,
       5,    -1,   378,     5,    -1,   184,     5,    -1,   379,    -1,
      18,   379,    -1,   682,    -1,   108,   371,     3,    -1,   108,
     371,   156,   281,     3,    -1,    37,   371,     3,   680,    -1,
      37,   371,     3,    55,    -1,    37,   371,     3,    55,   277,
       5,    -1,    37,   371,     3,   208,   245,     3,    -1,    -1,
     212,    28,    -1,   212,   684,    -1,     3,    -1,   684,   446,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   528,   528,   529,   534,   541,   542,   543,   557,   558,
     586,   594,   602,   608,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   641,   641,   650,   650,   652,   652,
     654,   654,   659,   661,   665,   666,   667,   668,   669,   672,
     673,   676,   685,   703,   712,   732,   732,   792,   801,   808,
     812,   814,   816,   821,   826,   831,   839,   841,   843,   845,
     847,   849,   851,   853,   855,   857,   864,   875,   886,   887,
     890,   890,   891,   891,   892,   892,   900,   900,   908,   908,
     919,   923,   924,   925,   926,   927,   928,   929,   930,   934,
     934,   936,   936,   938,   938,   941,   941,   943,   943,   945,
     945,   947,   947,   949,   949,   951,   951,   954,   954,   956,
     956,   958,   958,   960,   960,   962,   962,   964,   964,   966,
     966,   968,   968,   971,   971,   973,   973,   975,   975,   979,
     980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,  1016,  1017,  1018,  1019,  1020,
    1021,  1022,  1023,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,  1046,  1048,  1049,  1050,  1051,  1052,
    1054,  1055,  1057,  1058,  1059,  1061,  1062,  1063,  1064,  1071,
    1078,  1085,  1089,  1093,  1097,  1101,  1105,  1111,  1112,  1113,
    1116,  1122,  1129,  1130,  1131,  1132,  1133,  1134,  1135,  1136,
    1137,  1140,  1142,  1144,  1146,  1150,  1158,  1169,  1170,  1173,
    1174,  1177,  1185,  1193,  1201,  1215,  1225,  1226,  1240,  1256,
    1257,  1258,  1259,  1262,  1269,  1277,  1278,  1279,  1282,  1283,
    1286,  1287,  1291,  1292,  1295,  1297,  1301,  1302,  1305,  1307,
    1311,  1312,  1315,  1316,  1319,  1325,  1332,  1341,  1342,  1343,
    1344,  1354,  1355,  1359,  1360,  1361,  1362,  1363,  1366,  1367,
    1370,  1371,  1374,  1375,  1376,  1377,  1378,  1379,  1380,  1381,
    1382,  1385,  1386,  1387,  1395,  1401,  1402,  1403,  1406,  1407,
    1410,  1411,  1415,  1423,  1433,  1434,  1435,  1444,  1449,  1455,
    1463,  1467,  1467,  1507,  1508,  1512,  1514,  1516,  1518,  1520,
    1524,  1525,  1526,  1529,  1530,  1533,  1534,  1537,  1538,  1539,
    1542,  1543,  1546,  1547,  1551,  1553,  1555,  1557,  1560,  1561,
    1564,  1565,  1568,  1572,  1582,  1590,  1591,  1592,  1593,  1597,
    1601,  1603,  1607,  1607,  1609,  1614,  1621,  1628,  1640,  1641,
    1642,  1646,  1653,  1660,  1668,  1678,  1686,  1696,  1704,  1713,
    1722,  1732,  1740,  1749,  1758,  1768,  1777,  1794,  1802,  1814,
    1815,  1829,  1830,  1833,  1834,  1846,  1856,  1861,  1866,  1872,
    1879,  1886,  1893,  1903,  1910,  1919,  1926,  1932,  1940,  1946,
    1954,  1955,  1956,  1957,  1958,  1974,  1975,  1976,  1985,  1986,
    1990,  2000,  2016,  2017,  2021,  2029,  2038,  2061,  2062,  2063,
    2067,  2084,  2106,  2107,  2112,  2121,  2135,  2144,  2170,  2171,
    2172,  2173,  2174,  2175,  2176,  2180,  2187,  2199,  2202,  2203,
    2207,  2208,  2212,  2214,  2219,  2227,  2236,  2248,  2260,  2275,
    2276,  2281,  2295,  2305,  2319,  2333,  2341,  2352,  2358,  2369,
    2375,  2382,  2388,  2410,  2411,  2412,  2413,  2417,  2426,  2443,
    2451,  2462,  2473,  2493,  2494,  2495,  2499,  2509,  2522,  2531,
    2543,  2551,  2572,  2573,  2574,  2578,  2590,  2615,  2627,  2642,
    2654,  2666,  2675,  2685,  2694,  2704,  2728,  2729,  2730,  2734,
    2741,  2751,  2754,  2755,  2759,  2760,  2764,  2766,  2771,  2779,
    2790,  2801,  2813,  2822,  2832,  2842,  2853,  2871,  2872,  2873,
    2877,  2885,  2896,  2904,  2915,  2926,  2938,  2950,  2959,  2969,
    2982,  2989,  2998,  3006,  3012,  3027,  3029,  3033,  3042,  3055,
    3057,  3061,  3066,  3073,  3078,  3086,  3090,  3091,  3095,  3107,
    3118,  3119,  3120,  3124,  3125,  3126,  3127,  3128,  3129,  3132,
    3134,  3138,  3139,  3142,  3144,  3147,  3149,  3153,  3160,  3169,
    3175,  3181,  3188,  3194,  3201,  3207,  3213,  3219,  3225,  3231,
    3237,  3243,  3249,  3255,  3261,  3267,  3273,  3279,  3285,  3291,
    3304,  3314,  3324,  3334,  3340,  3348,  3349,  3350,  3353,  3361,
    3367,  3380,  3381,  3381,  3385,  3386,  3389,  3390,  3391,  3395,
    3396,  3396,  3400,  3408,  3418,  3419,  3420,  3421,  3422,  3425,
    3425,  3428,  3429,  3432,  3442,  3455,  3456,  3456,  3459,  3460,
    3461,  3462,  3465,  3469,  3470,  3471,  3472,  3478,  3481,  3487,
    3492,  3498,  3502,  3502,  3507,  3508,  3510,  3511,  3515,  3516,
    3520,  3521,  3522,  3525,  3526,  3527,  3528,  3532,  3533,  3537,
    3538,  3539,  3540,  3541,  3542,  3543,  3544,  3548,  3556,  3565,
    3566,  3567,  3571,  3582,  3594,  3605,  3620,  3625,  3629,  3630,
    3634,  3636,  3638,  3640,  3644,  3645,  3651,  3655,  3657,  3659,
    3661,  3663,  3668,  3672,  3673,  3677,  3686,  3699,  3700,  3708,
    3716,  3724,  3725,  3726,  3727,  3728,  3729,  3731,  3733,  3738,
    3743,  3747,  3748,  3751,  3766,  3773,  3788,  3801,  3816,  3829,
    3830,  3831,  3834,  3835,  3838,  3839,  3840,  3841,  3842,  3843,
    3844,  3845,  3846,  3848,  3850,  3852,  3854,  3856,  3860,  3861,
    3864,  3865,  3868,  3869,  3872,  3873,  3874,  3875,  3876,  3877,
    3878,  3879,  3880,  3881,  3882,  3883,  3884,  3885,  3886,  3887,
    3888,  3889,  3892,  3893,  3896,  3896,  3906,  3907,  3908,  3909,
    3910,  3911,  3912,  3913,  3914,  3915,  3916,  3917,  3924,  3925,
    3926,  3927,  3928,  3929,  3930,  3931,  3932,  3933,  3934,  3935,
    3936,  3937,  3938,  3939,  3940,  3941,  3942,  3943,  3944,  3947,
    3948,  3949,  3952,  3953,  3956,  3957,  3958,  3961,  3962,  3963,
    3967,  3968,  3969,  3970,  3971,  3972,  3973,  3974,  3975,  3976,
    3977,  3978,  3979,  3980,  3981,  3982,  3983,  3984,  3985,  3986,
    3987,  3988,  3989,  3990,  3991,  3992,  3993,  3994,  3995,  3996,
    3997,  3998,  3999,  4000,  4001,  4004,  4005,  4008,  4021,  4022,
    4023,  4027,  4030,  4031,  4032,  4033,  4033,  4035,  4036,  4044,
    4048,  4054,  4060,  4067,  4074,  4080,  4086,  4093,  4102,  4103,
    4106,  4107,  4110,  4111,  4112,  4113,  4116,  4117,  4118,  4119,
    4120,  4121,  4122,  4123,  4124,  4125,  4132,  4133,  4134,  4135,
    4136,  4137,  4138,  4139,  4142,  4143,  4144,  4144,  4144,  4145,
    4145,  4145,  4145,  4145,  4145,  4146,  4146,  4146,  4146,  4146,
    4146,  4146,  4146,  4146,  4147,  4147,  4147,  4147,  4147,  4147,
    4147,  4148,  4148,  4148,  4148,  4149,  4149,  4149,  4149,  4149,
    4149,  4149,  4149,  4149,  4149,  4149,  4149,  4150,  4150,  4150,
    4150,  4150,  4150,  4150,  4150,  4151,  4151,  4151,  4151,  4151,
    4151,  4151,  4151,  4152,  4152,  4152,  4152,  4152,  4152,  4152,
    4152,  4152,  4153,  4153,  4153,  4153,  4153,  4153,  4153,  4153,
    4154,  4154,  4154,  4155,  4155,  4155,  4155,  4155,  4155,  4155,
    4155,  4156,  4156,  4156,  4156,  4156,  4156,  4156,  4157,  4157,
    4157,  4157,  4157,  4157,  4157,  4158,  4158,  4158,  4158,  4159,
    4159,  4159,  4159,  4159,  4159,  4159,  4159,  4159,  4159,  4159,
    4159,  4160,  4160,  4160,  4160,  4160,  4161,  4168,  4172,  4178,
    4184,  4190,  4202,  4206,  4212,  4220,  4221,  4224,  4225,  4226,
    4227,  4228,  4229,  4230,  4237,  4241,  4247,  4263,  4264,  4267,
    4268,  4269,  4270,  4273,  4277,  4283,  4292,  4300,  4311,  4315,
    4324,  4325,  4329,  4330,  4331,  4332,  4333,  4334,  4335,  4336,
    4339,  4343,  4349,  4359,  4366,  4373,  4381,  4391,  4392,  4393,
    4396,  4397
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
  "FILTER", "GRAPH", "NEIGHBORS", "EDGE", "DEPTH", "UPSERT", "';'", "'.'",
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
  "notify_stmt", "create_subscription_stmt", "drop_subscription_stmt",
  "resume_subscription_stmt", "ack_subscription_stmt", "create_job_stmt",
  "drop_job_stmt", "alter_job_stmt", "create_message_log_stmt",
  "drop_message_log_stmt", "message_dml_stmt", "create_doc_store_stmt",
  "doc_reset", "opt_doc_with", "doc_with_list", "doc_with_item",
  "drop_doc_store_stmt", "doc_dml_stmt", "create_graph_store_stmt",
  "drop_graph_store_stmt", "graph_dml_stmt", "reclaim_table_stmt",
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
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   449,   450,   450,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   452,   451,   453,   451,   454,   451,
     455,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   456,   456,   457,   457,   458,   451,   451,   451,   459,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   460,   460,
     461,   451,   462,   451,   463,   451,   464,   451,   465,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   466,
     451,   467,   451,   468,   451,   469,   451,   470,   451,   471,
     451,   472,   451,   473,   451,   474,   451,   475,   451,   476,
     451,   477,   451,   478,   451,   479,   451,   480,   451,   481,
     451,   482,   451,   483,   451,   484,   451,   485,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   486,   486,   486,
     451,   451,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   451,   451,   451,   451,   488,   488,   451,   451,   451,
     451,   451,   451,   451,   451,   489,   490,   490,   490,   491,
     491,   492,   492,   493,   493,   494,   494,   494,   495,   495,
     496,   496,   497,   497,   498,   498,   499,   499,   500,   500,
     501,   501,   502,   502,   503,   503,   503,   504,   504,   504,
     504,   505,   505,   506,   506,   506,   506,   506,   507,   507,
     508,   508,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   510,   510,   510,   511,   512,   512,   512,   513,   513,
     514,   514,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   517,   516,   518,   518,   519,   519,   519,   519,   519,
     520,   520,   520,   521,   521,   522,   522,   523,   523,   523,
     524,   524,   525,   525,   526,   526,   526,   526,   527,   527,
     528,   528,   529,   489,   530,   531,   531,   531,   531,   530,
     532,   532,   533,   533,   530,   489,   534,   534,   535,   535,
     535,   489,   536,   536,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   536,   536,   536,   536,   536,   536,   537,
     537,   538,   538,   539,   539,   540,   541,   541,   541,   542,
     542,   542,   542,   489,   543,   489,   544,   544,   545,   545,
     546,   546,   546,   546,   546,   489,   489,   489,   489,   489,
     547,   547,   548,   548,   549,   549,   549,   489,   489,   489,
     550,   550,   551,   551,   552,   552,   553,   553,   489,   489,
     489,   489,   489,   489,   489,   554,   554,   555,   556,   556,
     557,   557,   558,   558,   559,   559,   559,   560,   560,   561,
     561,   562,   563,   563,   564,   565,   565,   566,   566,   567,
     567,   568,   568,   489,   489,   489,   489,   569,   569,   570,
     570,   571,   572,   489,   489,   489,   573,   573,   574,   574,
     575,   575,   489,   489,   489,   576,   576,   577,   577,   578,
     578,   578,   578,   578,   578,   578,   489,   489,   489,   579,
     579,   580,   581,   581,   582,   582,   583,   583,   584,   584,
     585,   585,   585,   585,   585,   585,   585,   489,   489,   489,
     586,   586,   587,   587,   588,   588,   588,   588,   588,   588,
     489,   589,   489,   590,   590,   591,   591,   591,   592,   593,
     593,   593,   593,   594,   594,   489,   489,   489,   595,   595,
     596,   596,   596,   597,   597,   597,   597,   597,   597,   598,
     598,   599,   599,   600,   600,   601,   601,   602,   602,   603,
     603,   603,   603,   603,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   603,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   603,   603,   604,   604,   604,   489,   605,
     605,   606,   607,   606,   608,   608,   609,   609,   609,   610,
     611,   610,   612,   612,   613,   613,   613,   613,   613,   614,
     614,   615,   615,   616,   616,   617,   618,   617,   619,   619,
     619,   619,   605,   620,   620,   620,   620,   489,   621,   621,
     621,   489,   623,   622,   624,   624,   625,   625,   626,   626,
     627,   627,   627,   628,   628,   628,   628,   629,   629,   630,
     630,   630,   630,   630,   630,   630,   630,   489,   631,   632,
     632,   632,   633,   633,   633,   633,   489,   489,   634,   634,
     489,   489,   489,   489,   635,   635,   489,   636,   636,   636,
     636,   636,   489,   637,   637,   489,   638,   639,   639,   638,
     638,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   641,   641,   642,   642,   638,   638,   638,   638,   643,
     643,   643,   644,   644,   645,   645,   645,   645,   645,   645,
     645,   645,   645,   645,   645,   645,   645,   645,   646,   646,
     647,   647,   648,   648,   649,   649,   649,   649,   649,   649,
     649,   649,   649,   649,   649,   649,   649,   649,   649,   649,
     649,   649,   650,   650,   651,   645,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   653,
     653,   653,   654,   654,   655,   655,   655,   656,   656,   656,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   658,   658,   659,   660,   660,
     660,   489,   661,   661,   661,   662,   662,   663,   663,   489,
     664,   664,   664,   664,   664,   664,   664,   664,   665,   665,
     666,   666,   667,   667,   667,   667,   668,   668,   668,   668,
     668,   668,   668,   668,   668,   668,   669,   669,   669,   669,
     669,   669,   669,   669,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   489,   671,   671,
     671,   671,   489,   672,   672,   673,   673,   674,   674,   674,
     674,   674,   674,   674,   489,   675,   675,   676,   676,   677,
     677,   677,   677,   489,   678,   678,   489,   489,   489,   679,
     680,   680,   681,   681,   681,   681,   681,   681,   681,   681,
     489,   682,   682,   489,   489,   489,   489,   683,   683,   683,
     684,   684
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
      12,    14,     6,     8,     8,    10,     6,     1,     1,     1,
       4,     6,     4,     6,    13,    13,    15,     6,     8,     9,
       1,     3,     1,     4,     6,     0,     4,     4,     2,     0,
       4,     7,     4,     1,     3,     1,     1,     1,    10,    12,
       0,     2,     2,     0,     2,     2,     2,     2,     2,     0,
       2,     1,     3,     0,     4,     0,     5,     5,     7,    10,
      10,    17,    12,    19,    11,     6,     8,     6,     6,     6,
       9,     6,     5,     8,     7,     9,     8,    10,     9,     7,
       7,     8,     8,     7,     5,     0,     1,     2,     1,    10,
       6,     0,     0,     5,     0,     4,     0,     3,     4,     2,
       0,     5,     3,     5,     0,     2,     2,     2,     2,     1,
       0,     0,     3,     1,     3,     3,     0,     6,     1,     1,
       3,     3,     7,     3,     3,     5,     5,     1,     8,     7,
       7,     1,     0,     7,     0,     3,     1,     3,     1,     1,
       1,     1,     1,     0,     1,     4,     3,     1,     3,     2,
       2,     2,     1,     2,     2,     2,     1,     1,     9,     0,
       2,     2,     3,     5,     5,     7,     5,     1,     4,     4,
       3,     5,     3,     5,     0,     2,     1,     5,     7,     7,
       9,    11,     1,     2,     3,     1,    10,     0,     4,    11,
      18,     0,     4,     3,     5,     5,     9,    10,     7,     4,
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
       1,     1,     1,     1,     1,    13,    15,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     4,     4,     1,     5,
       0,     2,     3,     2,     3,     2,     2,     2,     1,     2,
       1,     3,     5,     4,     4,     6,     6,     0,     2,     2,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   739,     0,   368,     0,   634,     0,
       0,     0,     0,     0,   634,     0,   302,     0,   689,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
     363,   375,   381,   413,   420,   428,   429,   437,   438,   439,
     448,   449,   450,   451,   452,   453,   454,   425,   426,   427,
     483,   484,   485,   486,   493,   494,   495,   502,   503,   504,
     516,   517,   518,   537,   538,   539,   550,   552,     0,   566,
     567,   565,   618,   657,   661,   687,   697,   706,   712,   715,
     871,   879,  1037,  1042,  1054,  1063,  1068,  1080,     0,     0,
       0,     0,     0,   558,     0,     0,   704,     0,     0,     0,
       0,     0,     0,     0,   704,   740,     0,     0,   704,     0,
       0,     0,     0,     0,     0,     0,     0,   662,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   640,   477,   481,   479,   480,
       0,     0,   640,     0,     0,   874,   875,     0,     0,     0,
       0,   713,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,   415,   555,     0,     0,  1070,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   741,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   704,   664,
     372,     0,   367,   365,   366,     0,   700,     0,  1040,     0,
     414,  1038,     0,  1064,     0,     0,   702,     0,   378,     0,
    1081,     0,     0,     0,   489,     0,   498,     0,     0,     0,
       0,   636,   637,   638,   639,   635,     0,   478,     0,   551,
       0,     0,     0,     0,   872,   873,     0,     4,     9,    10,
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
       0,     0,   317,   256,   311,   416,   691,   690,   317,     0,
       0,     0,     0,     0,   318,   320,   334,   321,   334,   714,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   491,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,   421,   422,     0,     0,   559,
    1067,  1066,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1084,     0,  1083,     0,   501,   500,  1052,  1048,  1047,
    1051,  1049,  1053,  1050,  1043,     0,  1045,     0,     0,   705,
     698,     0,     0,   888,     0,     0,     0,     0,   888,  1058,
    1057,     0,     0,   699,     0,     0,     0,  1070,   432,     0,
     457,     0,     0,     0,     0,     0,   505,   521,     0,   540,
       0,     0,     0,     0,     0,   370,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   379,   380,   376,     0,
       0,   434,     0,   464,     0,     0,     0,   507,     0,   528,
       0,   542,     0,   641,   482,     0,   641,   878,   877,   876,
       0,    78,     0,    32,    31,    20,     0,     0,     0,     0,
       0,    55,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   314,     0,     0,     0,     0,
       0,   357,   331,   317,     0,     0,     0,     0,     0,   342,
     341,   345,   349,   346,     0,     0,   343,   333,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   424,   423,     0,   555,     0,     0,   553,     0,     0,
       0,     0,     0,     0,   602,     0,     0,   614,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1078,  1071,     0,     0,  1044,     0,
       0,     0,   851,   860,   819,   819,   819,   819,   819,   844,
     819,   841,     0,   819,   819,   819,   822,   853,   822,   852,
     819,   819,   819,     0,   822,   819,   822,   843,   850,   842,
     861,   862,     0,     0,     0,   845,   707,     0,     0,     0,
       0,     0,     0,   889,   890,     0,     0,     0,     0,     0,
    1061,  1059,  1060,  1062,     0,   570,     0,     0,     0,     0,
       0,  1069,     0,   430,     0,   458,     0,     0,     0,     0,
       0,     0,   522,     0,     0,   868,   666,     0,   668,   669,
       0,   373,     0,   280,     0,   259,   372,   701,  1041,  1039,
    1065,   587,     0,   703,   378,  1082,   435,     0,   465,     0,
     490,   499,     0,     0,     0,     0,     0,     0,   696,     0,
       0,     5,    51,    79,     0,    48,     0,     0,   243,     0,
       0,     6,     0,    57,     0,     0,     0,   229,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,     0,     0,
       0,   174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   219,   220,   221,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   209,     0,     0,
       0,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,    21,    23,    24,    22,   249,
     247,    46,     0,    44,   215,    80,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    33,    74,    73,    25,    26,
      28,    14,    15,    16,    17,    18,    19,    27,    30,    29,
       0,   315,   291,     0,   312,   418,   417,   317,     0,     0,
       0,   322,     0,   357,     0,   362,   330,     0,   259,   319,
     343,   343,     0,   336,     0,   344,     0,   326,   325,     0,
       0,     0,     0,     0,     0,     0,   475,     0,   492,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   559,     0,     0,     0,     0,     0,     0,   598,     0,
     595,   601,   597,     0,   786,     0,     0,     0,     0,     0,
     599,  1085,  1086,  1079,  1077,  1073,     0,  1075,     0,  1076,
       0,     0,  1046,   888,   888,     0,   848,   824,   830,   827,
     824,   824,     0,   824,   824,   824,   823,   827,   827,   824,
     824,   824,     0,   827,   824,   827,     0,     0,     0,     0,
       0,     0,     0,     0,   892,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   573,     0,
       0,     0,     0,     0,     0,   432,     0,   455,   457,   487,
       0,     0,     0,     0,     0,   519,   521,   541,   869,   870,
       0,     0,   784,   736,   334,   665,     0,   670,   671,   672,
     673,   260,     0,   287,   259,   369,   371,     0,   377,   436,
     466,   508,   529,   543,     0,   621,   643,     0,     0,   620,
     621,     0,   621,     0,    90,     0,   241,     0,     0,     0,
       0,    53,     0,     0,     0,     0,   143,     0,     0,     0,
       0,     0,   177,   178,   179,   180,   181,   182,     0,     0,
       0,     0,   158,     0,     0,     0,   162,   163,   164,   166,
       0,     0,   168,     0,   171,   172,   173,     0,     0,     0,
       0,     0,     0,    97,    91,    92,    93,    94,    95,    96,
     146,   147,   148,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,     0,     0,
       0,     0,     0,     0,     0,   201,     0,   204,   205,   206,
       0,    60,     0,    62,     0,     0,     0,     0,     0,    70,
      71,    72,     0,     0,     0,   149,     0,    47,    45,     0,
       0,   250,   248,    82,     0,     0,    40,    36,    38,     0,
      58,     0,   259,     0,     0,   357,   359,   359,   359,     0,
     323,   327,     0,     0,     0,   280,   347,   348,     0,     0,
     350,     0,     0,     0,   444,   446,     0,     0,     0,     0,
     472,     0,     0,     0,     0,   536,     0,     0,   532,   547,
       0,     0,   556,   557,   554,     0,     0,     0,     0,     0,
       0,   786,   786,     0,   610,   609,   615,   786,   604,     0,
       0,   613,  1072,  1074,     0,     0,     0,     0,     0,   836,
     846,   838,   840,   865,     0,   839,   835,   834,   857,   856,
     833,   837,   832,     0,   854,   831,   855,     0,     0,     0,
     709,   864,     0,   708,     0,   893,   895,   894,     0,   891,
       0,     0,   406,     0,     0,     0,     0,     0,   408,     0,
       0,     0,     0,     0,   906,     0,     0,   571,   572,     0,
     579,   570,     0,     0,     0,     0,     0,     0,   431,     0,
     458,     0,     0,     0,     0,     0,   522,     0,   868,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   742,     0,
       0,   667,   686,     0,     0,   682,     0,     0,     0,     0,
     663,   674,   677,     0,     0,  1087,   374,   588,     0,     0,
       0,   652,   642,     0,     0,   621,   659,   621,   660,    52,
     245,     0,   244,     0,     0,     0,    56,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,   101,   103,     0,     0,     0,     0,     0,
     135,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      59,     0,     0,     0,     0,     0,     0,   261,   259,   419,
     324,     0,     0,     0,     0,   332,     0,   692,     0,     0,
     287,   339,   337,     0,     0,   335,   351,     0,   442,   443,
       0,     0,     0,     0,     0,   469,   470,     0,     0,   476,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   563,   562,   560,     0,     0,     0,     0,
     615,   615,   786,     0,     0,   798,     0,   803,     0,     0,
       0,     0,     0,   616,   807,   788,     0,   805,   606,   615,
     596,   603,   612,   611,     0,     0,   820,     0,   825,   826,
       0,     0,   827,     0,   827,   827,   849,   863,     0,     0,
       0,   900,   903,   902,   904,   901,   896,   897,   899,   905,
     898,     0,     0,     0,     0,     0,     0,     0,   382,     0,
       0,     0,     0,     0,     0,   906,     0,     0,     0,   574,
     578,   576,   575,   577,     0,   583,   573,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   460,   456,   488,
     496,     0,     0,     0,     0,     0,   524,   520,     0,   784,
     738,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     721,   784,     0,   867,   681,   679,   680,   683,   684,   685,
       0,     0,     0,   265,   265,   281,   282,   288,     0,   364,
     654,   653,     0,     0,   644,   649,   648,     0,   646,   624,
     658,   242,   246,     0,    54,     0,   141,   140,     0,   145,
       0,     0,   230,   231,   176,   154,   155,     0,     0,   159,
     160,   161,   165,   167,   169,   210,   211,   212,   213,     0,
      98,   107,   109,   105,   111,   113,   115,   151,     0,     0,
     153,   226,   272,   272,   272,   117,     0,     0,   125,     0,
       0,   133,   272,   272,   183,     0,     0,     0,   195,   196,
       0,     0,   199,     0,   202,     0,   207,     0,    61,    63,
      66,    67,    68,    69,     0,     0,     0,   150,    81,    85,
       0,     0,    50,     0,     0,    42,     0,    43,    35,     0,
       0,   270,   261,   358,     0,     0,     0,   328,     0,     0,
       0,  1087,   352,     0,   338,     0,     0,   445,   447,     0,
       0,     0,   473,   513,     0,     0,   511,   534,     0,     0,
     533,     0,   548,     0,     0,     0,     0,     0,     0,     0,
     782,     0,   600,   608,   615,   787,   617,     0,     0,     0,
       0,     0,     0,   808,   789,   790,   792,   791,   796,     0,
       0,     0,     0,   806,   804,   605,     0,     0,   906,     0,
       0,   829,   858,   866,   859,   847,     0,   710,   383,     0,
     906,     0,   399,     0,     0,     0,     0,   407,     0,   391,
       0,     0,     0,     0,     0,   914,   915,   916,   918,   917,
    1036,   921,   922,   923,  1029,   920,   919,  1024,  1025,  1026,
    1027,  1028,  1011,   924,   965,   956,   961,   906,  1007,   997,
     968,  1000,   943,   950,   947,   934,   990,   979,   906,   987,
    1005,   941,   942,  1012,   928,   935,   983,   999,  1004,  1001,
     962,   940,  1009,   881,   939,   959,   952,   949,   906,   998,
     988,   929,   978,  1017,   955,   969,   951,   970,   954,   993,
     976,   937,   906,   926,  1010,   932,   994,   946,   973,   985,
     945,   906,   974,   971,   972,   980,   992,   982,   948,   953,
     977,   966,   967,   984,  1016,   989,   958,   991,   944,  1018,
     975,   963,   957,   964,   960,  1003,   931,   925,   996,  1002,
     936,   938,   927,  1008,   986,  1006,   981,   995,   933,   930,
    1014,   906,  1015,  1013,  1031,  1032,  1033,  1034,  1035,  1022,
    1023,  1019,  1020,  1021,  1030,   907,     0,     0,   581,   580,
       0,   585,   579,     0,   385,     0,     0,     0,     0,     0,
       0,     0,     0,   459,     0,     0,     0,     0,     0,   523,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   300,     0,     0,     0,     0,   717,   735,   743,   786,
       0,   676,   678,   266,   267,     0,   284,   286,     0,     0,
       0,  1090,  1088,  1089,   622,     0,   645,     0,     0,     0,
    1087,     0,     0,     0,   144,   233,   234,   235,   236,   239,
     238,   240,   232,   237,     0,     0,     0,   272,   272,   272,
     272,   272,   272,     0,     0,     0,   276,   276,   276,   272,
       0,     0,     0,   272,     0,     0,     0,   272,   276,   276,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    87,    41,    37,    39,     0,     0,     0,   280,
     270,   360,     0,     0,     0,     0,   693,   694,     0,   688,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   549,     0,     0,   564,     0,   589,   760,     0,
     758,     0,   590,     0,   607,     0,     0,     0,     0,     0,
       0,   810,     0,     0,     0,     0,     0,     0,   906,     0,
     821,   828,     0,   906,     0,   387,   400,     0,   409,   410,
     411,     0,     0,     0,     0,     0,   384,   880,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   568,
     583,     0,     0,   393,     0,     0,     0,   433,   462,   463,
     461,   497,   506,   526,   527,   525,     0,   721,     0,     0,
       0,     0,   750,     0,     0,     0,   747,     0,   746,     0,
     756,     0,     0,     0,     0,     0,     0,   716,   785,   675,
     265,   283,   290,   289,     0,     0,   656,   655,   651,   650,
       0,   626,   619,     7,   142,   139,   156,   157,   214,   276,
     276,   276,   276,   276,   276,   216,     0,   152,     0,     0,
       0,     0,     0,   276,   119,     0,     0,   276,   127,     0,
       0,   276,     0,     0,   192,   193,   194,   197,   198,     0,
     203,   208,     0,     0,     0,     0,   265,   268,   271,   287,
     280,   356,     0,   355,   354,     0,     0,   353,     0,     0,
       0,     0,     0,   514,     0,     0,   512,   535,     0,     0,
       0,   561,     0,     0,     0,   594,     0,   783,   800,     0,
     818,   802,     0,     0,     0,   811,   809,   793,   794,   795,
     797,     0,   906,     0,   883,   711,     0,   885,   401,     0,
     395,   392,     0,   399,   908,     0,     0,     0,     0,     0,
     906,     0,   582,     0,     0,   585,   389,     0,     0,     0,
     386,     0,   719,   737,     0,     0,     0,     0,     0,   748,
     749,   301,   744,   723,     0,     0,     0,     0,     0,     0,
       0,   285,  1091,     0,   623,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,   273,     0,   100,   102,
     104,     0,   272,     0,     0,     0,   272,     0,     0,     0,
     136,   138,     0,     0,     0,     0,   292,   263,     0,     0,
     262,   293,   287,   361,   329,   695,     0,     0,     0,     0,
       0,   515,     0,     0,     0,     0,   592,     0,   761,   759,
       0,   816,   817,     0,     0,     0,   906,     0,   882,   884,
       0,   397,   412,   388,     0,   913,   912,   909,   911,   910,
       0,     0,   584,     0,   569,   396,   394,     0,     0,   751,
       0,     0,   757,     0,   722,     0,     0,     0,     0,     0,
     729,     0,     0,     0,     0,   647,     0,     0,   625,   108,
     110,   106,   112,   114,   116,   217,     0,   265,   277,   118,
     276,   121,   123,   126,   276,   129,   131,   134,   200,    75,
       0,     0,   269,   265,     0,   298,   258,     0,     0,   474,
     467,     0,   471,   509,     0,   530,     0,     0,     0,     0,
     799,   801,   815,   812,     0,   887,     0,   401,  1055,   906,
       0,   390,     0,     0,   745,     0,   718,   724,   725,     0,
       0,     0,     0,   632,     0,   627,     0,   629,   630,   275,
     278,     0,     0,   272,   272,     0,   272,   272,     0,     0,
     264,   295,   294,     0,   257,     0,     0,     0,     0,     0,
     544,   545,     0,     0,   813,   814,   886,     0,     0,   403,
     398,     0,   586,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   628,     0,   265,   120,   276,   276,   128,   276,
     276,    76,    77,     0,     0,   299,     0,     0,   468,   510,
     531,     0,   762,     0,     0,   402,     0,  1056,     0,     0,
       0,     0,     0,     0,   730,   728,   633,     0,   279,     0,
       0,     0,     0,   297,   296,     0,     0,   546,   764,     0,
     405,   404,     0,     0,     0,     0,   764,     0,     0,   631,
     122,   124,   130,   132,     0,     0,   591,   763,     0,     0,
       0,     0,   752,     0,     0,   731,   726,     0,     0,     0,
     778,     0,     0,   720,     0,   764,   764,     0,     0,   727,
       0,     0,     0,   779,   593,     0,   775,   777,   776,     0,
       0,     0,   754,   753,     0,   732,     0,     0,   780,   781,
     765,   773,   767,     0,   769,   774,   771,     0,   764,     0,
     440,     0,   768,   766,   772,   770,   755,     0,   441,     0,
       0,     0,     0,     0,     0,   733,   734
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,   882,  1349,  1611,  1613,  1609,   883,  1232,   894,
    1612,   884,  1339,  1605,  1340,  1606,   895,  1852,  1853,  1854,
    2209,  2207,  2208,  2210,  2211,  2212,  2219,  2542,  2703,  2704,
    2223,  2546,  2706,  2707,  2227,  1862,  1863,   901,  1543,   548,
      28,    29,   853,  1901,  2427,  2176,  2560,  2249,  2216,  2536,
    2400,  2638,  1203,  1795,  1796,  1515,  1352,  2655,  2714,  2162,
     147,   393,   394,   685,   403,   404,   405,   406,  1052,   708,
     407,   705,  1066,   706,  1062,  1635,  1636,  1051,  1622,  2252,
     408,    30,   118,   215,   505,    31,   518,    32,  2307,  2591,
    2728,  2729,  1457,  1458,    33,    34,  1046,   175,    35,   833,
      36,    37,  1640,    38,    39,    40,   835,  1177,  1756,  1757,
      41,    42,  1647,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,   842,  1185,  1765,  1766,    61,    62,    63,    64,    65,
      66,    67,   439,    68,   737,  1664,    69,  1168,  1470,  1745,
    2129,  2131,  2329,    70,    71,  1688,    72,  1521,  2375,  2190,
    2527,  2628,  2743,  2524,   135,   246,   877,  1217,  1525,  2188,
    1807,  1215,    73,    74,   209,   503,   847,   850,  1200,  1510,
    1511,  1512,    75,   150,  1058,    76,   185,    77,    78,    79,
    2367,  2166,  2814,  2815,   116,  1497,  1498,  2281,  2279,  2763,
    2806,  1941,  1499,  1406,  1126,  1137,  1419,  1420,   806,  1424,
    1193,  1194,    80,   145,   146,    81,   812,   813,   814,  1721,
    1736,  2125,    82,    83,   465,   466,    84,   481,   824,    85,
      86,   453,   765,    87,  1799,  2183
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2182
static const yytype_int16 yypact[] =
{
   14117,   -34,  -133,   313, 14057,   321, -2182, 14039, -2182,   540,
     656,   105,  -125,   336, -2182,    74, -2182,   368,   690,   234,
     483,   224,  -306,   249,   319,   -57,  -120,   706,   297, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,   779, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,   797,   853,
     856,   281,   864, -2182,   340,   579,   717,   887,   748,   889,
     558,   931,   955,   958,   717, -2182,   693,   832,   717,   595,
     608,    83,    86,  1006,   618,   620,   787, -2182,   187,    90,
     170,  1054,   174,   561,  1058,   574,   584,   624,   675,   685,
     631,   636,  1074,   699,   716,   777,   908,   637, -2182, -2182,
    1083,  1086,   777,   186,    87,   647, -2182,  7443,  1102,   781,
      52, -2182,  1112,  -107,   981,   996,   999,   962,  1003,   750,
    1140,  1153,  1169,  1038,   732,  1025,  1063,  1085,  1232,  1092,
    1139,  1184,  -134, -2182, 14117,   502,  -103,   661,   588,   589,
    1291,   663,    93,    -9,  1031,  1334,  1229,  1343,   920,  1173,
     642,  1095,   922,   792,  1183,  1382, -2182,   568,  1384,   670,
     677,  1251,  1115,  1209,  1185,  1421,   679,   681,   717,   982,
    1021,  1470, -2182, -2182, -2182,   -98, -2182,  1196, -2182,  1197,
   -2182, -2182,  1199, -2182,  1200,  1282, -2182,  1201,    11,  1202,
   -2182,  1203,   682,   683, -2182,  1204, -2182,  1206,   686,   687,
     689, -2182, -2182, -2182, -2182, -2182,  1502, -2182,  1503, -2182,
    1261,  1505, 10971, 10971, -2182, -2182,  1501,  -242, -2182, -2182,
   -2182, -2182,  1504, 10971, 10971, 10971, -2182, -2182, -2182,  8227,
   -2182, -2182,  1067, -2182, -2182, -2182,  1070, -2182, -2182, -2182,
   -2182, -2182, -2182,  1475,  1071,  1072,  1073,  1076,  1077,  1078,
    1079,  1080,  1081,  1082,  1084,  1124,  1126,  1155,  1156,  1176,
    1182,  1216,  1217,  1218,  1220,  1221,  1222,  1223,  1225,  1226,
    1228,  1231,  1233,  1234,  1235,  1238,  1239,  1240,  1241,  1242,
    1243,  1244,  1245,  1246,  1247,  1250,  1252,  1253,  1254,  1255,
    1256,  1271,  1273,  1278,  1281,  1283,  1285,  1287,  1288, -2182,
   -2182,  1289,  1290,  1292,  1296,  1297,  1298,  1299,  1300,  1301,
    1302,  1303,  1304,  1305,  1306,  1313,  1315,  1319,  1323,  1325,
    1326,  1327,  1328,  1335,  1336,  1337,  1338,  1339,  1340,  1341,
    1342,  1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,  1353,
    1356,  1359,  1360,  1362,  1368,  1369,  1375,  1376,  1379,  1383,
    1387, 10971, 14747,  -101, -2182,  1181,   783,   784,    26,  1388,
    1515,  1392,    24,  -156,   919, -2182,  1476, -2182,  1476, -2182,
    1526,  1469,  1637,  1655,  1673,  1692,  1718,  1719,  1507, -2182,
    1366,  1825,  1805,  1834,  1835,  1836,  1574,  1838,  1839,  1841,
    1684,  1687, -2182,  1794,  1795, -2182, -2182,  1806,  1848,   -29,
   -2182, -2182,   509,   112,   108,    42,   110,   307,   695,  1429,
    1782,  1580,  1613,   176,   734, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182,   401, -2182,  1856,  1857, -2182,
   -2182, 14632,  1666,   107,  1865,  1672,  1595,  1875,   107, -2182,
   -2182,   -26,   135, -2182,  1686,   692,  1600, -2182,  1609,  1610,
   -2182,  1611,  1477,  1890,  1466,  1894,  1622, -2182,  1621, -2182,
    1628,  1912,  1913,   -41,  1889, -2182,   276,  -197,    52,  1915,
    1916,  1917,  1918,  1919,   163,  1920, -2182, -2182, -2182,  1921,
    1923,  1854,  1649,  1858,  1650,  1930,  1931, -2182,  1654, -2182,
    1656, -2182,  1658,  -153, -2182,  1933,  -152,  4023,  4023, -2182,
    1944, 10971, 10971,  1277,  1277,  1924, 10971, 14572,   435,  1945,
    1948,  1506, -2182, 10971,  1249, 10971, 10971, 10971, 10971, 10971,
   10971, 10971, 10971, 10971,  1509, 10971, 10971, 10971, 10971, 10971,
   10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971,
    1511, 10971, 10971, 10971,  1517, 10971, 10971, 10971, 10971, 10971,
   10971,  8619, 10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971,
   10971, 10971,  1519,  1524,  1525,  1527,  1528, 10971, 10971,  1529,
    1530,  1531, 10971, 10971,  1947,  1532,  1533, 10971, 10971, 10971,
   10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971,
   10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971,  1534,
   10971, 10971, 10971,  1535, 10971, 10971, 10971, 10971, 10971, 10971,
   10971, 10971, 10971, 10971,  1536, 10971, 10971, 11398, -2182, 10971,
   10971, 10971, 10971, 10971,    35,  1538,   875, 10971,  7835, 10971,
   10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971, 10971,
   10971, 10971, 10971, 10971,  1968, -2182,    52,  1980, 10971,  1981,
    1982,   504, -2182,   183, 10971,  1541,   433,  1987,    52, -2182,
   -2182, -2182,   455, -2182,    52,  1828,  1796, -2182,  1990,  1991,
    1724,  1993,  1596,  1601,  1728,  1733,  1731,  2004,  1738,  2007,
    1739,  1570,  1745,  1743,  1746,  1753,  1750,  1754,  2011,  2027,
    2028, -2182, -2182,  2029,  1758,  1994,  1995, -2182,  2036,  2038,
    2046,  2064,  2066,  2077, -2182,  2095,  2106, -2182,  2124,  2126,
   14632,  2134,  1910,  2154,  2159,  2162,  2180,  2179,  2182,  1807,
    2183,    59,   697,  2184, -2182, -2182,  1970,  1978, -2182,   728,
    1755,  1756, -2182, -2182,  1765,  1765,  1765,  1765,  1765, -2182,
    1765, -2182,  1783,  1765,  1765,  1765,  2133, -2182,  2133, -2182,
    1765,  1765,  1765,  1785,  2133,  1765,  2133, -2182, -2182, -2182,
   -2182, -2182,  1786,  1787,  1788, -2182,   638,  2195, 14632,  2231,
    2233,  2234,  1790,  1792, -2182,  -191,  2236,  2237,  2044,  1822,
   -2182, -2182, -2182, -2182,  2072,  2219,  1877,  2268,  2078,  1996,
    2271,   176,  1832, -2182,  2275,  2002,  2277,  2278,  2142,  2279,
    2087,  1842,  2008,  2284,  2285,   386, -2182,   487, -2182, -2182,
      62, -2182, 10971,  2093,    52,  -150,  1021, -2182, -2182, -2182,
   -2182, -2182,  1896, -2182,    11, -2182, -2182,  2287, -2182,  2290,
   -2182, -2182,  2291,  2292,  2293,  2294,  2295,   507, -2182,  2294,
     591, -2182,  1425, -2182,  1855,  4023, 14599,   524, -2182, 10971,
   10971, -2182,  1859, -2182, 10971,  2058,   585, -2182, -2182, -2182,
   11435,  9011,  3279,  3630,  3981, 11483, 11517, 11546, 11573, 11607,
   11634, -2182,  4332,  4683,  5034,  5385, 11661,  5736,  6087,  6438,
   11688, 11715, 11742,   791,  6789, 11769,  7137, -2182, 11796, 11826,
   11863, -2182, 14901,  7182,  7544,  7580,  7619, 11179,  1866, 11890,
   11919, 11953, 11983, 12010, 12044, 12071, 12098,  7907,  7934,  7973,
   -2182, -2182, -2182, -2182, -2182, 12125,  8019,  1951,  1952,  1953,
     886,   952,  1868,  1965,  1971,  8058, 12152, 12179, 12206, 12233,
   12262, 12291, 12318, 12347,  8299,  8336,  8363,  8411,  8448,  8691,
    8728,  8765,  1022, 12381, 12411, 12438,  8803, -2182,  1389, 12472,
    8840, -2182,  9083,  9130,  9157,  9232, 12499, 12526, 12553,  9475,
    9512,  9539, -2182, 12580,  9611, -2182,  4373,  2063,  2145,  4722,
    4722, -2182,    57, -2182, -2182,  2082, 10971, 10971,  1880, 10971,
   14935,  1881,  1882,  1883, 10971,  1623,  1680,  1680,  1214,  1198,
     916,  1097,  1097,   892,   892,   892,   892,   819,  1924,  1924,
     131, -2182,   -94,  2197, -2182, -2182,  1888,   183,  2171,  2172,
    2173, -2182,  2058,   504, 12607, -2182, -2182,    13,  -137,   919,
    1796,  1796,  2175,  2143,    52, -2182,  2176, -2182, -2182,  1897,
    2073,  2339,  2341,  1935,  1903,  1937,  1939,  2346, -2182,  1922,
    2215,  1914,  1926,  2350,  2353,  1925,  2356,  2363,  2096,  2102,
     951,   -29,  2177,  2185,   506, 14632, 14632,  2374, -2182,  2161,
   -2182, -2182, -2182,  2163,  2345, 14632,  2383,  2144,  2146,  2384,
   -2182, -2182, -2182, -2182, -2182, -2182,  2382, -2182,  2385, -2182,
    2389,  2390, -2182,   107,   107,  2391, -2182, -2182, -2182, -2182,
   -2182, -2182,  2393, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182,  2393, -2182, -2182, -2182,  2394,  2395,  2396,  2201,
    1955,  1960, 10971,  1961,  2345, 14632, 14632, 14632,  2193,   107,
    -177,    28,  -132,  2198,  2404,   268,   168,   778,  2273,  2408,
    -130,  2411,  2414,  2225,  2026,  1609,  1986, -2182, -2182, -2182,
    2014,  2324,  2009,  2013,  2001, -2182, -2182, -2182, -2182, -2182,
    2352,  2437,   512, -2182,  1476, -2182,  2444, -2182, -2182, -2182,
     100,  4023,  2386,  2269,  -150, -2182, -2182,  2448, -2182, -2182,
   -2182, -2182, -2182, -2182,  2433,  -140, -2182,   576,  2019, -2182,
    -140,  2019,  2270, 10971, -2182, 10971, -2182, 10971,  2970, 14647,
    2379,  9867,  2024,  2030, 10971, 10971, -2182, 10971,  1329,  2311,
    2311, 10971, -2182, -2182, -2182, -2182, -2182, -2182, 10971, 10971,
   10971, 10971, -2182, 10971, 10971, 10971, -2182, -2182, -2182, -2182,
   10971, 10971, -2182, 10971, -2182, -2182, -2182, 14632, 14632, 10971,
   10971, 10971,  2469, -2182,  2130,  2132,  2135,  2136,  2137,  2138,
   -2182, -2182, -2182, 10971, 10971, 10971, -2182, 10971,  2040,  2045,
    2047,  2140,  2488,  2151,  2497,  2155,  2062,  2070, 10971, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, 10971, 10971, 10971,
   10971, 10971, 10971, 10971, 10971, -2182, 10971, -2182, -2182, -2182,
   10971, -2182, 10971, -2182, 10971, 10971, 10971, 10971, 10971, -2182,
   -2182, -2182, 10971, 10971, 10971, -2182, 10971, -2182, -2182, 10971,
    2058,  4722,  4722,  2266, 14968, 10971, -2182, 10971, 10971,  2058,
   -2182,  2098,  2200,    52,  2505,   504,  2376,  2376,  2376,  2079,
   -2182,   672, 10971,  2515,  2520,  2093, -2182, -2182,    52, 10971,
     -68,    52,    61,  2081,  2123,  2348,  2508,    63,  2509,  2526,
    2354,  2511,  2529,  2530,  2516, -2182,   -85,  2531,  2360,   118,
    2100,  2101, -2182, -2182, -2182,  2537,  2537,  2103,  2388,  2392,
    2104,  2345,  2345, 14632, -2182, -2182, 14126,  2345, -2182,  2543,
    2546, -2182, -2182, -2182,  2328,  2335,  2113,  2114,   578,   137,
     924,   137,   137, -2182,   583,   137,   137,   137,   924,   924,
     137,   137,   137,   617,   924,   137,   924,  2116,  2122,  2125,
    2491, -2182, 10971,  4023,    28,  2345,  2345,  2345,   519, -2182,
    2127,  2131, -2182,  2141,  2168,  2170,  2174,   619, -2182,  2306,
      28,  2578,   -91,  2522, -2182,  2440,  2188, -2182, -2182,    81,
    2370,  2219,  2318,    28,   -83,  2419,  2614,  2599, -2182,   662,
    2002,  2617,  2618,  2619,  2601,   664,  2008,  2626,   -40,  2627,
    2187,  2468,   239,  2189,  2190,  2471,  2196,   628, -2182,  2633,
    2058, -2182, -2182,  2635,   136,  2636,  2637,  2639,  2202,   548,
   -2182,  2199, -2182,   769, 10971,  2432, -2182, -2182,  9403,  2483,
    2645, -2182, -2182,  2646,  9795,  -139, -2182,  -139, -2182, -2182,
    4023,  3672, -2182, 10971,  2206, 10971, -2182, -2182,   248,  2032,
   12634, 10971, 10971,  2207,  2208, 12661, 12690, 12719,  9904,  9941,
   12746, 12775, 12809, 12839, 12866, 12900,    -8,    47, 12927, 12954,
    9979,  2209,  2211,  2218,  2220,  2222,  2223,  2224,  2092, 10011,
   12981, 13008, -2182, -2182, -2182,  2228,   630,  2230,   639,  2240,
   -2182, -2182, 13035, 10259, 10296, 10333, 13062, 13089, 10408, 10651,
    2120,  2192,  2232, 13118, 13147, 13174, 13203, 13237, 13267, 10688,
   10725, 10787, 13294,  2241,  2242, 10971,  2058, 10971,  1468,  2058,
    4023,  2058,  2243,  2058,  2244,  2245,  2600,  2534,  -150, -2182,
   -2182,  2513,  2247,  2248,  2250, -2182,  2682,  4023,  2675,    19,
    2269, -2182,  4023, 10971,  2252, -2182, -2182,   -68, -2182, -2182,
    2251,    61,  2694,  2695,  2697, -2182, -2182,  2253,  2698, -2182,
    2700,  2702,  2434,  2263,  2706,  2712,  2707,  2272,  2715,  2630,
    2720,  2724,  2728, -2182,  2288,  -201, 10971,  2289,  2296,  2733,
   14126, 14126,  2345,  2544,  2735,  2297,  2298,  2299,  2687,  2748,
    2308,  2749,    67, -2182, -2182, -2182,  2591,  2592, -2182, 14126,
   -2182, -2182, -2182, -2182,  2549,   338, -2182,  2752, -2182, -2182,
    2523,  2760, -2182,  2761, -2182, -2182, -2182, -2182,  2329, 13328,
     646, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182,   726,    28,  2765,  2771,  2773,  2778,  2780, -2182,  2783,
    2344,   652,  2347,  -164,    28, -2182,  1748,  2678,  2794, -2182,
   -2182, -2182, -2182, -2182,  2795,  2533,  2273,  2358,   654,  2532,
      28,  2801,   -63,  2803,  2800,  2802,   665, -2182, -2182, -2182,
   -2182,  2713,  2817,  2804,  2805,   674, -2182, -2182,  2683,   512,
   -2182,   508, 10971,  2387,  2397,  2398,  2823,  2823,  2400,  2733,
      97,   512, 14632, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
     548,   696,   548,   119,   616,  2381, -2182,  2577,   659, -2182,
   -2182,  4023,  2570,  2809, -2182, -2182,  4023,   700, -2182,  2638,
   -2182, -2182,  4023,  2829, -2182, 10971, -2182, -2182, 10971, -2182,
   13355, 14545, -2182, -2182, -2182, -2182, -2182, 10971, 10971, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, 10971,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, 10971, 10971,
   -2182, -2182,  2485,  2485,  2485, -2182,  2487,  1143, -2182,  2489,
    1145, -2182,  2485,  2485, -2182, 10971, 10971, 10971, -2182, -2182,
   10971, 10971, -2182, 10971, -2182, 10971, -2182, 10971, -2182, -2182,
   -2182, -2182, -2182, -2182, 10971, 10971, 10971, -2182, -2182, -2182,
    2407,  2412,  1468,  2413,  2416, -2182,  2420, -2182, -2182,  2744,
    2777,  2705,  2534, -2182,  2853,  2853,  2853,  2415, 10971, 10971,
    2864,  2432,  4023,  2823, -2182,    61,  2423, -2182, -2182,  2862,
      63,  2863, -2182,  2818,  2443,  2874,  2447, -2182,  2701,  2877,
   -2182,  2878, -2182,  2438,  2439,  2880,  2881, 13382,  2884,  2885,
   -2182,   707, -2182, -2182, 14126, -2182, -2182,  2886, 10971,  2890,
    2838,    54, 10971, -2182, -2182, -2182, -2182, -2182, -2182,  2446,
    2452,  2453, 10971, -2182, -2182, -2182,   519,  2839, -2182,  2455,
    2894, -2182,   924, -2182,   924,   924, 10971, -2182, -2182,  2841,
   -2182,   709,  2900,  2462,  2463,  2464,  2466, -2182,    28, -2182,
      28,  2472,  2473,   725,  2302, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182,  2693,  2781, -2182,  2474,
    2478,  2641,  2370,    28, -2182,  2481,   737,  2482,  2663,    28,
    2490,  2927,  2929, -2182,   662,  2932,  2492,  2933,  2935, -2182,
     664,  2669,   745,  2504,  2806,  2807,  2524, 13409,  2884,  2823,
    2823, -2182,   747,   749,  2885,   751,     8, -2182, -2182,  2345,
     757, -2182, -2182, -2182, -2182,  2963, -2182, -2182,   769, 10971,
   10971, -2182, -2182,  2527, -2182, 10187, -2182, 10579,  2525,  2899,
    2432,  2560, 13436, 13463, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, 13490, 13517, 13546,  2485,  2485,  2485,
    2485,  2485,  2485,  2931, 13575,  2909,  2776,  2776,  2776,  2485,
    2569,  2572,  2573,  2485,  2571,  2574,  2580,  2485,  2776,  2776,
   13602, 13631, 13665, 13695, 13722, 11006, 13756, 13783, 11043, 11080,
   11117, -2182, -2182, -2182, -2182, -2182,  2613, 10971, 10971,  2093,
    2705, -2182,   759,   762,   764,  3024,  4023,  4023,  3008, -2182,
     766,  2583,    61,  2871,  2590,  2873,  3033,  3019,  2594,  3036,
    3037,  2597, -2182,  3041,  3042, -2182,  3005,  3029, -2182,   768,
   -2182,   771, -2182,  3046, -2182,   773, 13810,   813,  2606,  2607,
    2888, -2182, 13837,  2608,  2611,  2612, 13864,   790, -2182,  2653,
   -2182, -2182, 13891, -2182,  3004, -2182, -2182,  2615, -2182, -2182,
   -2182,  3056,   815,   817,    28,  3058, -2182, -2182,  3355,  3706,
    4057,  4408,  4759,  5110,  3002,  2950,  3066, 10971,  2993, -2182,
    2533,   823,    28, -2182,    28,  2631,   825, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182,  2940,    97, 10971,  2640,
    2643,  2733, -2182,   827,   837,   839, -2182,  3076, -2182,   841,
   -2182,   649,  2644,  3080,  3022,   257,  3026, -2182,  3266, -2182,
     616, -2182,  4023,  4023,  3087,  3088, -2182,  4023, -2182,  4023,
    9795,  2648, -2182, -2182, -2182, -2182, -2182, -2182, -2182,  2776,
    2776,  2776,  2776,  2776,  2776, -2182, 10971, -2182,  3090,  3039,
    2658,  2659,  2661,  2776, -2182,  2757,  2758,  2776, -2182,  2759,
    2763,  2776,  2670,  2671, -2182, -2182, -2182, -2182, -2182, 10971,
   -2182, -2182,  3109,  3114,  3119,  3120, 14707,  -199,  4023,  2269,
    2093, -2182,  3124, -2182, -2182,  2689, 10971, -2182,    61,  2686,
    3117,    63,  3122, -2182,  3135,  3143, -2182, -2182,  3144,  2703,
    2704, -2182,  2882,  2946,  3152, -2182,  3155, -2182, -2182,  3160,
    1207, -2182,  3166, 10971, 10971, -2182, -2182, -2182, -2182, -2182,
   -2182,  3112, -2182,  5461, -2182, -2182,  5812, -2182,  2896,  2729,
   -2182, -2182,   843,  2900, -2182,  3098,  3045,  3021,  3012,  2903,
   -2182,  2965, -2182, 13918,  2736,  2641, -2182,   845,   847,    28,
   -2182,  2740,    20, -2182, 13945,  2884,  2885,   870,  2979, -2182,
   -2182, -2182, -2182, -2182,  3182,  3185,   -15,   -84,  2774,  2766,
    2987, -2182, -2182,  3172,  2747,   872,  3192,  3102,  2762,  2764,
    2767,  2775,  2782,  2784, 13974, -2182,  2770,  3201, -2182, -2182,
   -2182,  2785,  2485,  2787,  2788,  2789,  2485,  2791,  2792,  2793,
   -2182, -2182, 14003,  2796,  2772,  2779, -2182, -2182,  2994, 10971,
   -2182,  3070,  2269, -2182, -2182,  4023,  2808,    61,  3222,   874,
    3224, -2182,   877,   879,  3229,  3233, -2182,  3236, -2182, -2182,
    2797, -2182, -2182,  2813, 14030, 14059, -2182,  6163, -2182, -2182,
    2815, -2182, -2182, -2182,  2816, -2182, -2182, -2182, -2182, -2182,
    6514,  3180, -2182, 10971, -2182, -2182, -2182,   882,  3241, -2182,
     888,   890, -2182,  3244, -2182,  2822,  3245,  3246,  2819,  2824,
   -2182,  3230,  2825, 10971,  3248, -2182,   923,    88, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182,  3249,   616,  2814, -2182,
    2776, -2182, -2182, -2182,  2776, -2182, -2182, -2182, -2182, -2182,
    3267,  3268, -2182, 14707,   -38,  3118, -2182,    61,  2827, -2182,
   -2182,    63, -2182, -2182,  3272, -2182,  3278,  2842,   927,  2844,
   -2182, -2182,  1317, -2182,  6865, -2182,  3280,  2896, -2182, -2182,
   14093, -2182,  2851,  3079, -2182,   935, -2182, -2182, -2182,  3313,
    3315,  3316,  3318,  4023,  3303, -2182,  3321, -2182, -2182, -2182,
   -2182,  3322,  2887,  2485,  2485,  2889,  2485,  2485,  2891,  2893,
   -2182,  3100,  3104,  2823, -2182,  2895,    61,  2897,  2898,  2901,
   -2182, -2182,  3329,  3336, -2182, -2182, -2182,  3320,   936, -2182,
   -2182,  7216, -2182,  3103,  3344,  3346,  3336,  2905,  2906,  2907,
    2908, 10971, -2182,  3115,   616, -2182,  2776,  2776, -2182,  2776,
    2776, -2182, -2182,  3174,  3176,  2911,    61,  2918, -2182, -2182,
   -2182,  2921, -2182,   938,  3363, -2182,  3280, -2182,  2925,   946,
    2926,   947,  2930,  3149, -2182, -2182,  4023,  3088, -2182,  2941,
    2942,  2943,  2944, -2182, -2182,  2934,    61, -2182, -2182,  3387,
   -2182, -2182,  3386,  3389,  3336,  3336, -2182,  3165,  3391,  2747,
   -2182, -2182, -2182, -2182,    61,  2948,   528, -2182,  2952,  2954,
     983,   985,   555,  3396,   988, -2182, -2182,  2955,    61,    75,
    3251,   518,   117, -2182,  3336, -2182, -2182,  3306,  3129, -2182,
    3165,    61,  2958, -2182, -2182,   606, -2182, -2182, -2182,   505,
     554,  1017,   555,   555,  3234, -2182,  2962,    61, -2182, -2182,
   -2182, -2182, -2182,   -11, -2182, -2182, -2182,    22, -2182,  3161,
   -2182,  2967, -2182, -2182, -2182, -2182,   555,   124, -2182,  3213,
    3216,  3228,  3231,  3415,  3421, -2182, -2182
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2182,  3253,  -147, -2182, -2182, -2182, -2182, -1098,  1899, -2182,
    2088, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,  2203,  2892,
   -2182,  -332,  -842,  1539, -2182, -1788, -2182,  1188, -1843, -2182,
   -2181, -2182, -1364, -2182,  1257, -1621, -2182, -2182, -2182, -1773,
   -2182, -2182,  2754,  -390,  -399,  2742,  -690, -2182, -2182,  -406,
   -2182, -2182,   409, -2182, -2182, -2182,  1808, -1004,   114,  -430,
   -2182, -2182, -2182,  3242,  2588, -2182,  2593, -2182,   971,   788,
   -2182,   694, -1439, -2182, -2182, -2182, -2182, -2182, -2182,  2280,
   -2182, -2182, -1598, -2182, -2182, -2182,  2286,  1998, -2182,  1314,
   -2182, -2182, -1904, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -2182,  2304,  1984, -2182,  1316, -2182, -2182, -2182, -2182, -2182,
   -2182, -2182,  2741, -2182,  2402,  2080, -2182,  2012,  1742,  1367,
   -2182,  1168,   990, -2182, -2182, -1609, -2182, -1178, -2182, -2182,
   -2182, -2182, -2182,   723,   379,  3359,  2966, -2182,  2283, -2182,
    1129,  2647, -2182, -2182, -2182, -2182, -2182, -2182, -2182, -2182,
   -1458,  1714, -2182, -2182, -2182, -2182,    -1, -2182, -2182, -2182,
   -2182,  1175, -2182,   698, -2182,  1747,  1744, -2124, -2132, -2068,
   -2067, -1757, -2182, -1384,   235,    80,  -141, -1113,  -638,  2399,
   -1476, -2182, -2182, -2182,  3273, -2182,  -463, -2182,  2364,  1558,
   -1728, -2182, -2182, -2182, -2182,  2768, -2182, -2182, -2182, -2182,
   -2182,  3043, -2182, -2182, -1857, -2182
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -869
static const yytype_int16 yytable[] =
{
     392,  1630,   709,   696,  2163,  1710,  2177,  1994,   691,  1911,
    2217,  2218,  1770,  1205,  1063,   819,  2264,  1670,  1671,  2228,
    2229,  1731,  2165,  1689,  1428,  1429,  2353,   398,  1150,   658,
    1434,  1452,  1436,  1362,  1748,   686,  2401,  2402,   508,  1909,
    2359,  1011,  1526,  1916,  1528,   744,  1351,  2412,  2413,  1360,
     167,  1791,   410,  1012,  2259,   398,  2361,   430,   687,  1519,
    1519,  1942,  1943,  1337,  1115,  1638,  1197,  1645,  2361,   854,
     695,  1954,  1955,  1956,  1957,  1160,  1936,   684,  2558,   735,
    1965,   820,   143,  1150,   697,   516,   201,   875,   879,   203,
     254,  1450,  2616,   216,  1655,   848,   457,   458,   459,   460,
     461,   462,  2862,   195,  1991,   537,   538,   198,   138,   855,
     808,   161,  1104,   745,  1188,   740,   543,   544,   545,    93,
    2618,  1739,   547,   809,   852,  1529,   746,   140,  2869,  1633,
     467,   821,  2289,   139,  1459,  2864,  1472,   852,   825,  1958,
    2260,   659,   660,   661,   662,   663,   664,   665,  -868,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   861,   683,  2173,  1659,
    1154,  1465,  2833,   218,   437,  1733,  1189,   221,  2697,   742,
    2362,   748,  2863,  1749,  2619,    88,   658,  1502,  1740,  1656,
     210,   399,  2711,   468,   759,   252,   741,   400,  1634,  1503,
     255,   540,   541,  2138,   849,  2363,   253,   501,  2528,  2529,
    2530,  2531,  2532,  2533,  1451,  2865,  1365,  2363,    89,   399,
    2712,   517,  2541,  1785,  2839,   400,  2545,  1992,  1013,   736,
    2549,  2174,   822,  2617,   684,  1504,  2364,   151,  1741,   202,
    2299,  1603,   204,  1505,   657,  1935,   217,  2559,  2364,   509,
    1338,  1188,  2304,  1161,  1639,  2290,  1646,   810,   659,   660,
     661,   662,   663,   664,   665,    16,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,  1981,   683,  2365,   463,  1042,  1944,  2318,
     698,   876,   876,  1506,   411,  1993,   698,  2365,  1198,  1199,
    2319,   144,   811,  1053,  2167,   431,  1520,  1808,  2870,  1364,
     750,  2136,  1460,  1189,  1473,  2291,    94,  2261,   171,  1463,
    2320,   172,  1742,   211,   117,   743,   219,   749,  1464,   152,
     222,   156,  2170,  2382,  2321,  2284,  1116,    90,  -868,  1743,
     438,   212,  1507,  2322,  2834,   688,  2698,  1809,   509,  1810,
     168,  1620,   698,  1734,  1014,  1453,  1454,  1455,  1456,  2366,
     760,  1750,  1516,   213,  2389,  2390,  2391,  2392,  2393,  2394,
      91,  2366,   823,  2610,  1370,  2840,  2403,  1508,   169,   170,
    2407,  2139,  2611,  2323,  2411,  1786,  2354,  2355,  1815,  1967,
     214,   751,    92,   142,  1774,   885,  1698,   149,  1968,   886,
    1959,  1960,  1961,  1775,  1769,   401,   896,   900,   902,   903,
     904,   905,   906,   907,   908,   909,   910,  1699,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
     924,   925,   926,   401,   928,   929,   930,  1835,   932,   933,
     934,   935,   936,   937,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,  1204,  1363,  1401,  1402,  2702,
     955,   956,  1910,  2705,   747,   960,   961,  1407,   402,   690,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
     985,   986,  1836,   988,   989,   990,   402,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1890,  1003,  1004,
    1617,  1962,  1006,  1007,  1008,  1009,  1010,  1445,  1446,  1447,
    1020,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,
    1034,  1035,  1036,  1037,  1038,  1039,  1040,  2569,   464,   826,
    1188,   392,  -372,   136,  1509,  1219,  2819,  1054,  1222,  2312,
     852,  2313,   761,   762,   763,   764,   433,   434,  1660,   888,
     889,   189,  2175,  1233,   223,  2779,  2780,   862,  2781,  2782,
    2473,   484,  1466,  2827,   163,  2476,   435,   226,  1350,  2850,
     738,  1711,  2521,  1489,  1397,  1712,  2153,   228,   141,  1972,
    1490,  1974,  1975,   739,  2507,   659,   660,   661,   662,   663,
     664,   665,  1189,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
     148,   683,   157,   158,   159,  2820,   442,   230,  2854,  1556,
    1557,   160,  1060,  1713,   234,  1502,  1714,  1048,  2557,   236,
    1398,   164,  2154,   190,   451,   475,  1491,  1503,  1226,  1227,
    1492,  1715,  2820,   485,  2513,  2836,  1149,  1355,  1049,   137,
    1416,  1417,  2181,   443,  2439,  2173,   162,  1493,  2771,  2514,
    1061,  1716,  2518,   488,  1150,  -334,  1494,   180,  1631,  1717,
     490,  1637,   497,  1504,   499,   521,   523,  2182,   444,   527,
     529,  1505,   531,  1816,  2331,   828,   445,  2851,   752,  2640,
    2336,  2519,  1117,  2644,  2848,  1201,   173,  1399,   446,  2155,
     890,  2821,   436,  1495,   191,  2852,  1151,   224,  2837,   504,
    1359,  1234,  -372,   707,   486,  2822,  2810,  2811,  2174,  2812,
     227,   457,   458,   459,   460,   461,   462,  1190,  2821,   174,
     229,  1506,  1228,  1229,  2587,  2853,  2855,  1231,    16,   165,
     166,  1152,  2822,  2838,  1238,  2849,  2841,  2717,  2842,  2843,
    1118,   440,  2600,   455,  2856,  1672,   753,  1400,  1718,  2156,
    1719,  1050,  1793,  1496,  1794,   447,  1902,  1979,  1218,   754,
     231,   441,   176,   456,   182,  2368,  1980,   235,  1500,  1720,
    1507,  2866,   237,  -634,  2857,   183,   448,   452,   476,   890,
     177,   659,   660,   661,   662,   663,   664,   665,  2561,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   489,   683,   449,  1191,
    1192,   479,    16,   491,   766,   498,  -634,   500,   522,   524,
    2566,  2471,   528,   530,  -634,   532,   768,   769,   829,  2700,
    2472,   480,   681,   682,   767,   683,   178,   450,  2674,   179,
    2746,  2747,  1221,  2749,  2750,  2710,  -634,   181,  1138,  1341,
    1342,  2503,  1344,   184,  1143,  2482,  1145,   657,  1056,   698,
     241,   153,   154,   155,   241,  2429,  -638,  -635,  1016,  1017,
     186,  1018,   188,  2497,  1019,  2498,   659,   660,   661,   662,
     663,   664,   665,   187,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,   463,   683,   242,   680,   681,   682,   242,   683,  -638,
    -635,   243,  1195,  1196,   192,   396,   244,  -638,  -635,   196,
    2755,  2656,   674,   675,   676,   677,   678,   679,   680,   681,
     682,  2731,   683,   245,  1618,  1626,  2778,   397,   193,  -638,
    -635,   194,   659,   660,   661,   662,   663,   664,   665,  2658,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,   197,   683,  1421,
    1422,   199,  1425,  1426,  1427,   699,  1392,  1393,  1430,  1431,
    1432,  1467,  1468,  1435,   200,  1443,  1700,  1701,  1604,   205,
    1127,  1128,  1129,  1130,   206,  1131,   207,  1615,  1133,  1134,
    1135,  1522,  1523,  1696,  1697,  1139,  1140,  1141,  1702,  1703,
    1144,  1235,   659,   660,   661,   662,   663,   664,   665,   208,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,   220,   683,  2715,
    2607,   225,  1704,  1703,  1728,  1729,  2562,  1754,  1755,  1763,
    1764,   232,   700,  1780,  1781,  1856,  1857,   238,  1530,   247,
    1531,   233,  -340,   248,  1859,  1860,   249,  1538,  1539,   250,
    1540,  1978,  1729,   256,  1545,   239,   701,  1989,  1729,  2134,
    1729,  1546,  1547,  1548,  1549,   395,  1550,  1551,  1552,   702,
    2143,  2144,   240,  1553,  1554,   409,  1555,   412,  2757,  2149,
    2150,   415,  1558,  1559,  1560,   676,   677,   678,   679,   680,
     681,   682,   413,   683,   703,   414,  1568,  1569,  1570,   416,
    1571,  2171,  1792,   418,  2169,  2186,  2187,  2221,  2222,  2225,
    2226,  1582,  2282,  2283,  2305,  1729,   419,   704,  2785,   417,
    1583,  1584,  1585,  1586,  1587,  1588,  1589,  1590,  1783,  1591,
    2316,  1729,   420,  1592,   421,  1593,   422,  1594,  1595,  1596,
    1597,  1598,  2333,  1729,   423,  1599,  1600,  1601,  2805,  1602,
    2347,  1781,  2356,  2357,  2358,  2357,  2360,  2283,  1608,   424,
    1610,  1610,  2369,  1792,  2431,  2432,  2817,  2433,  2432,  2434,
    2432,  2437,  2357,  2453,  2454,  1627,  2455,  2456,  2458,  2459,
    2832,   425,  1632,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,  2846,   683,   426,  1259,  1260,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,  2861,
     683,   427,   257,   258,   259,   260,   261,   262,  2461,  2462,
    2480,  1729,  2481,  1729,  2581,  2582,   263,   264,  2496,  1729,
    2500,  1729,  2508,  2454,  1891,   428,   265,  1893,   429,  1894,
     471,  1896,  2509,  2357,  2510,  2357,  2512,  2456,  2593,  1729,
    2605,  1729,  2606,  1729,   454,  1709,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   469,   683,   897,  2612,  2283,  2625,  2187,  2660,
    2661,   268,  2663,  2664,  2665,  2666,   269,  2681,  1729,   270,
     271,  1291,  1292,  2683,  2454,  2684,  2456,   470,   272,   659,
     660,   661,   662,   663,   664,   665,   472,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,   473,   683,   478,  1797,  2695,  2696,
     474,  1801,  2721,  2722,  2724,  2725,   477,  1806,  2735,  2736,
     482,  2765,  2766,  2788,  2789,   483,  1812,   487,  1231,  2793,
    2794,   492,  2796,  2789,  1820,  1821,   493,  1293,  1294,   659,
     660,   661,   662,   663,   664,   665,   494,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,   496,   683,   502,   898,  2825,  2789,
    2826,  2789,   276,  2829,  2830,   659,   660,   661,   662,   663,
     664,   665,   277,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
    1892,   683,  2858,  2789,   504,  1541,   495,  1315,  1316,  1366,
    1367,  1623,  1624,   506,   278,  2253,  2254,   510,   511,   514,
     512,   513,   515,   519,   520,   525,  1912,   526,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,   899,   683,   533,   535,   534,   536,   143,
     549,   551,   283,   542,   550,   552,   553,   554,   693,  1937,
     555,   556,   557,   558,   559,   560,   561,   707,   562,   710,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   563,   322,
     564,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   565,
     566,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     567,   370,   371,   372,   373,  2157,   568,   689,   711,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     712,   385,   386,   387,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   713,   683,
     569,   570,   571,   388,   572,   573,   574,   575,  2192,   576,
     577,  2193,   578,   389,   390,   579,   714,   580,   581,   582,
    2204,  2205,   583,   584,   585,   586,   587,   588,   589,   590,
     591,   592,  2206,   391,   593,   715,   594,   595,   596,   597,
     598,  2213,  2214,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,   599,   683,   600,  2230,  2231,
    2232,   716,   601,  2233,  2234,   602,  2235,   603,  2236,   604,
    2237,   605,   606,   607,   608,   717,   609,  2238,  2239,  2240,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,  1995,  1996,  1997,  1998,  1999,  2000,   621,  2001,   622,
    2002,  2256,  2257,   623,  2003,  2004,  2005,   624,  2006,   625,
     626,   627,   628,   718,  2007,  2008,  2009,  2010,  2011,   629,
     630,   631,   632,   633,   634,   635,   636,   719,  2012,   637,
     638,   639,   640,   641,   642,   643,   644,   645,  2013,  2014,
     646,  2286,  2015,   647,   648,  2292,   649,  2016,  2017,  2018,
    2019,  2020,   650,   651,  2021,  2296,  2022,  2023,  2024,   652,
     653,  2025,  2026,   654,  2027,  2028,  2029,   655,   720,  2302,
    2030,   656,   692,   721,  1321,  1322,   694,   722,   723,   724,
     725,   726,   727,   729,  2031,   728,   730,   731,   732,  2032,
     733,   734,   755,   756,  2033,  2034,  2035,   757,   758,   770,
     771,  2036,  2037,   807,  2038,  2039,  2040,  2041,   815,   816,
    2042,  1223,  2043,  2044,  2045,  2046,   817,  2047,   818,  2048,
    2049,   830,  2050,   827,  2051,  2052,   832,  2053,  2054,  2055,
    2056,   834,   836,   838,   839,   837,  2057,   840,  2058,   841,
    2059,  2060,   843,  2061,  2062,  2063,  2064,  2065,  2066,   844,
    2067,  2068,  2069,  2070,  2071,   845,   846,   851,   856,   857,
     858,   859,   860,   863,   864,  2072,   865,  2073,   866,  2074,
     867,   869,   868,   870,   871,   872,   878,   873,  2075,   874,
    2076,  2077,  2078,  2079,  2080,  2081,  2082,   881,   891,  2083,
    2084,   892,   962,   893,   911,  2085,   927,  2086,  2087,  2088,
     683,  2089,   931,  2090,   950,  2091,  2092,  2093,  2094,   951,
     952,  1041,   953,   954,   957,   958,   959,   963,   964,   987,
     991,  1002,  1015,  1043,  1045,  1047,  1055,  2095,  2096,  2097,
    1057,  1064,  1065,  1067,  1068,  1069,  1070,  2098,  1071,  2099,
    2100,  2101,  1073,  1072,  1074,  1075,  2102,  1076,  2103,  2104,
    2105,  1077,  1078,  1079,  2106,  1080,  1081,  1082,  2107,  2108,
    1083,  1085,  2109,  2110,  2111,  2112,  1084,  1087,  1086,  2113,
    1088,  1089,  2372,  2373,  1090,   437,  1092,  1093,  2377,  1094,
    2379,  1095,   659,   660,   661,   662,   663,   664,   665,  1096,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,  1097,   683,  1098,
    2114,  2115,  2116,  2117,  2118,   661,   662,   663,   664,   665,
    1099,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,  1100,   683,
    2426,  2428,   659,   660,   661,   662,   663,   664,   665,  1101,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,  1102,   683,  1103,
     659,   660,   661,   662,   663,   664,   665,  1105,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,  1106,   683,  1107,   662,   663,
     664,   665,  1108,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
    2493,   683,  1109,  1110,  1111,  1112,  1113,  1120,  1114,  1119,
    2119,  2120,  2121,  2122,  2123,  1121,  2124,  1136,  1153,  1123,
    1124,  2504,   659,   660,   661,   662,   663,   664,   665,  1125,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,  1132,   683,  1142,
    1146,  1147,  1148,  1806,  1155,  1158,  1156,  1157,  1159,  1162,
    1163,  1164,   659,   660,   661,   662,   663,   664,   665,  2534,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,  1165,   683,  1166,
    1167,  1170,  2552,  1169,  1173,  1171,  1174,  1172,  1175,  1176,
    1178,  1179,  1180,  1181,  1182,  1184,  1183,  1186,  1187,  2565,
    1209,  1202,  1207,  1210,  1211,  1212,  1213,  1214,  1216,    16,
    1224,  1288,  1289,  1290,  1230,  1995,  1996,  1997,  1998,  1999,
    2000,  1274,  2001,  1295,  2002,  1296,  2584,  2585,  2003,  2004,
    2005,  1297,  2006,   -84,  1343,  1346,  1347,  1348,  2007,  2008,
    2009,  2010,  2011,  1353,  1354,  1356,  1357,  1358,  1368,  1371,
    1369,  1372,  2012,  1374,  1373,  1375,  1376,  1377,  1378,  1379,
    1380,  1382,  2013,  2014,  1385,  1381,  2015,  1386,  1383,  1384,
    1388,  2016,  2017,  2018,  2019,  2020,  1389,  1390,  2021,  1387,
    2022,  2023,  2024,  1391,  1395,  2025,  2026,  1403,  2027,  2028,
    2029,  1150,  1396,  1404,  2030,  1405,  1408,  1412,  1411,  1409,
    1413,  1410,  1414,  1415,  1440,  1461,  1418,  1423,  2031,  1437,
    1438,  1439,  1441,  2032,  1442,  1444,  1448,  1462,  2033,  2034,
    2035,  1471,  2653,  1469,  1474,  2036,  2037,  1475,  2038,  2039,
    2040,  2041,  1476,  1477,  2042,  1482,  2317,  2044,  2045,  2046,
    1479,  2047,  1481,  2048,  2049,  1484,  2050,  1483,  2051,  2052,
    1488,  2053,  2054,  2055,  2056,  1485,  1487,  1501,  1514,  1513,
    2057,  1517,  2058,  1518,  2059,  2060,  2680,  2061,  2062,  2063,
    2064,  2065,  2066,  1524,  2067,  2068,  2069,  2070,  2071,  1519,
    1534,  1536,  1542,  1561,   852,  1537,  2693,  1817,  1818,  2072,
    1562,  2073,  1563,  2074,  1572,  1564,  1565,  1566,  1567,  1573,
    1575,  1574,  2075,  1576,  2076,  2077,  2078,  2079,  2080,  2081,
    2082,  1577,  1578,  2083,  2084,  1579,  1580,   -86,  1619,  2085,
    1616,  2086,  2087,  2088,  1581,  2089,  1621,  2090,  1628,  2091,
    2092,  2093,  2094,  1629,  1625,  1641,  1642,  1643,  1644,  1648,
    1649,  1651,  1652,  1650,  1653,  1657,  1654,  1847,  1848,  1658,
    1663,  2095,  2096,  2097,  1661,  1662,  1690,  1666,  1669,  1691,
    1692,  2098,  1667,  2099,  2100,  2101,  1668,  1693,  1694,  1695,
    2102,  1705,  2103,  2104,  2105,  1872,  1873,  1706,  2106,  1708,
    1707,  1722,  2107,  2108,  1730,  1723,  2109,  2110,  2111,  2112,
    1737,  1732,  1735,  2113,  1738,  1724,  1747,   659,   660,   661,
     662,   663,   664,   665,  2776,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,  1725,   683,  1726,  1744,  1751,  1752,  1727,  1753,
    1759,  1762,  1760,  1761,  2114,  2115,  2116,  2117,  2118,  1768,
    1771,  1772,  1773,  1776,  1777,  1778,  1782,  1874,  1875,  1784,
    1779,  1788,  1787,  1789,  1798,  1792,  1790,  1802,  1803,  1804,
    1813,  1899,  1822,  1823,  1840,  1841,  1995,  1996,  1997,  1998,
    1999,  2000,  1842,  2001,  1843,  2002,  1844,  1845,  1846,  2003,
    2004,  2005,  1855,  2006,  1858,  1900,  1903,  1876,  1877,  2007,
    2008,  2009,  2010,  2011,  1861,  1907,  1888,  1889,  1895,  1897,
    1898,  1904,  1905,  2012,  1906,  1908,  1913,  1915,  1917,  1920,
    1918,  1919,  1921,  2013,  2014,  1922,  1923,  2015,  1924,  1925,
    1926,  1928,  2016,  2017,  2018,  2019,  2020,  1927,  1929,  2021,
    1930,  2022,  2023,  2024,  1931,  1932,  2025,  2026,  1933,  2027,
    2028,  2029,  1934,  1938,  1935,  2030,  1940,  1945,  1946,  1950,
    1939,  1947,  1948,  1949,  2119,  2120,  2121,  2122,  2123,  2031,
    2124,  1951,  1952,  1953,  2032,  1963,  1964,  1969,  2179,  2033,
    2034,  2035,  1966,  1970,  1971,  1973,  2036,  2037,  1982,  2038,
    2039,  2040,  2041,  1976,  1983,  2042,  1984,  2474,  2044,  2045,
    2046,  1985,  2047,  1986,  2048,  2049,  1987,  2050,  1988,  2051,
    2052,  1990,  2053,  2054,  2055,  2056,  2126,  2127,  2128,  2130,
    2135,  2057,  2133,  2058,  2137,  2059,  2060,  2140,  2061,  2062,
    2063,  2064,  2065,  2066,  2145,  2067,  2068,  2069,  2070,  2071,
    2141,  2146,  2142,  2151,  2147,  2148,  2161,  2178,  2184,  2185,
    2072,  2158,  2073,  2191,  2074,  2189,  2215,  2220,  2246,  2224,
    2247,  2159,  2160,  2075,  2164,  2076,  2077,  2078,  2079,  2080,
    2081,  2082,  2241,  2248,  2083,  2084,  2251,  2242,  2243,  2255,
    2085,  2244,  2086,  2087,  2088,  2245,  2089,  2258,  2090,  2262,
    2091,  2092,  2093,  2094,  2263,  2265,  2267,  2266,  2268,  2269,
    2270,  2271,  2272,  2275,  2273,  2274,  2276,  2278,  2280,  2288,
    2293,  2285,  2095,  2096,  2097,  2287,  2294,  2295,  2301,  2298,
    2300,  2303,  2098,  2306,  2099,  2100,  2101,  2308,  2309,  2310,
    2324,  2102,  2311,  2103,  2104,  2105,  2314,  2315,  2328,  2106,
    2326,  2325,  2327,  2107,  2108,  2332,  2334,  2109,  2110,  2111,
    2112,  2335,  2338,  2339,  2113,  2337,  2341,  2342,  2343,  2344,
    2346,   659,   660,   661,   662,   663,   664,   665,  2348,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,  2370,   683,  2351,  2380,
    2349,  2350,  2398,  2374,  2399,  2114,  2115,  2116,  2117,  2118,
     659,   660,   661,   662,   663,   664,   665,  2381,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,  2383,   683,  1995,  1996,  1997,
    1998,  1999,  2000,  2404,  2001,  2408,  2002,  2405,  2406,  2409,
    2003,  2004,  2005,  2180,  2006,  2410,  2425,  2435,  2436,  2438,
    2007,  2008,  2009,  2010,  2011,  2440,  2441,  2442,  2443,  2444,
    2445,  2446,  2447,  2448,  2012,  2449,  2450,  2452,  2451,  2457,
    2463,  2464,  2465,  2467,  2013,  2014,  2468,  2469,  2015,  2479,
    2478,  2483,  2490,  2016,  2017,  2018,  2019,  2020,  2491,  2492,
    2021,  2494,  2022,  2023,  2024,  2499,  2501,  2025,  2026,  2511,
    2027,  2028,  2029,  2516,  2505,  2517,  2030,  2506,  2515,  2520,
    2522,  2523,  2526,  2535,  1532,  2119,  2120,  2121,  2122,  2123,
    2031,  2124,  2537,  2538,  2539,  2032,  2540,  2543,  2544,  2547,
    2033,  2034,  2035,  2548,  2553,  2550,  2551,  2036,  2037,  2554,
    2038,  2039,  2040,  2041,  2555,  2556,  2042,  2563,  2477,  2044,
    2045,  2046,  2567,  2047,  2564,  2048,  2049,  2568,  2050,  2571,
    2051,  2052,  2570,  2053,  2054,  2055,  2056,  2572,  2573,  2574,
    2575,  2576,  2057,  2577,  2058,  2578,  2059,  2060,  2579,  2061,
    2062,  2063,  2064,  2065,  2066,  2580,  2067,  2068,  2069,  2070,
    2071,  2583,  2586,  2590,  2592,  2595,  2596,  2597,  2598,  2599,
    2603,  2072,  2601,  2073,  2608,  2074,  2613,  2614,  2615,  2621,
    2620,  2622,  2623,  2624,  2075,  2626,  2076,  2077,  2078,  2079,
    2080,  2081,  2082,  2627,  2637,  2083,  2084,  2629,  2652,  2630,
    2654,  2085,  2631,  2086,  2087,  2088,  2636,  2089,  2650,  2090,
    2632,  2091,  2092,  2093,  2094,  2651,  2659,  2633,  2662,  2634,
    2639,  2641,  2642,  2667,  2643,  2645,  2646,  2668,  2647,  2669,
    2679,  2649,  2670,  2095,  2096,  2097,  2682,  2685,  2687,  2688,
    2691,  2694,  2699,  2098,  2657,  2099,  2100,  2101,  2671,  2676,
    2701,  2677,  2102,  2689,  2103,  2104,  2105,  2686,  2690,  2692,
    2106,  2708,  2709,  2716,  2107,  2108,  2718,  2713,  2109,  2110,
    2111,  2112,  2719,  2727,  1673,  2113,  2734,  2720,  2723,   659,
     660,   661,   662,   663,   664,   665,  2733,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,  1675,   683,  2737,  1676,  2738,  1677,
    2739,  2740,  1678,  2741,  2742,  2744,  2114,  2115,  2116,  2117,
    2118,  2753,  2745,  2761,  2748,  2754,  2751,  1679,  2752,  2762,
    2764,  2756,  2758,  2759,  1680,  1681,  2760,  2769,  2768,  2770,
    2772,  2773,  2774,  2775,  2783,  2777,  2784,  2357,  1995,  1996,
    1997,  1998,  1999,  2000,  2786,  2001,  2787,  2002,  2790,  2792,
    2795,  2003,  2004,  2005,  2797,  2006,  2395,  2396,  2798,  1682,
    2804,  2007,  2008,  2009,  2010,  2011,  2800,  2801,  2802,  2803,
    2807,  2808,  2809,  2813,  2818,  2012,  2816,  2823,  2824,  2828,
    2844,  2831,  2835,  2833,  2847,  2013,  2014,  2860,  2859,  2015,
    2871,  2867,  2868,  2872,  2016,  2017,  2018,  2019,  2020,  2873,
    2875,  2021,  2874,  2022,  2023,  2024,  2876,   432,  2025,  2026,
    1684,  2027,  2028,  2029,  1814,  2371,  1614,  2030,  2430,   887,
    1059,  2250,  1044,  1544,  1206,  1914,  2119,  2120,  2121,  2122,
    2123,  2031,  2124,   507,  2594,  1478,  2032,  1208,  2340,  1685,
    2791,  2033,  2034,  2035,  1480,  2730,  2345,  1686,  2036,  2037,
    1767,  2038,  2039,  2040,  2041,  1091,  1665,  2042,  1758,  2484,
    2044,  2045,  2046,  1746,  2047,  2604,  2048,  2049,  2132,  2050,
    1486,  2051,  2052,  1394,  2053,  2054,  2055,  2056,  2495,  2330,
    2799,   251,   880,  2057,  1527,  2058,  2172,  2059,  2060,  2525,
    2061,  2062,  2063,  2064,  2065,  2066,  2152,  2067,  2068,  2069,
    2070,  2071,  2502,  1449,  2297,  2168,  1220,  1687,  2845,   539,
     831,     0,  2072,     0,  2073,     0,  2074,  1122,     0,     0,
       0,  1433,     0,     0,     0,  2075,     0,  2076,  2077,  2078,
    2079,  2080,  2081,  2082,     0,     0,  2083,  2084,     0,     0,
       0,     0,  2085,     0,  2086,  2087,  2088,     0,  2089,     0,
    2090,     0,  2091,  2092,  2093,  2094,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2095,  2096,  2097,     0,     0,     0,
       0,     0,     0,     0,  2098,     0,  2099,  2100,  2101,     0,
       0,     0,     0,  2102,     0,  2103,  2104,  2105,     0,     0,
       0,  2106,     0,     0,     0,  2107,  2108,     0,     0,  2109,
    2110,  2111,  2112,     0,     0,     0,  2113,     0,     0,     0,
     659,   660,   661,   662,   663,   664,   665,     0,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2114,  2115,  2116,
    2117,  2118,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,  1995,
    1996,  1997,  1998,  1999,  2000,     0,  2001,     0,  2002,     0,
       0,     0,  2003,  2004,  2005,  1239,  2006,     0,     0,     0,
       0,     0,  2007,  2008,  2009,  2010,  2011,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2012,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2013,  2014,     0,     0,
    2015,     0,     0,     0,     0,  2016,  2017,  2018,  2019,  2020,
       0,     0,  2021,     0,  2022,  2023,  2024,     0,     0,  2025,
    2026,     0,  2027,  2028,  2029,     0,     0,     0,  2030,     0,
       0,     0,     0,     0,     0,     0,  1811,  2119,  2120,  2121,
    2122,  2123,  2031,  2124,     0,     0,     0,  2032,     0,     0,
       0,     0,  2033,  2034,  2035,     0,     0,     0,     0,  2036,
    2037,     0,  2038,  2039,  2040,  2041,     0,     0,  2042,     0,
    2485,  2044,  2045,  2046,     0,  2047,     0,  2048,  2049,     0,
    2050,     0,  2051,  2052,     0,  2053,  2054,  2055,  2056,     0,
       0,     0,     0,     0,  2057,     0,  2058,     0,  2059,  2060,
       0,  2061,  2062,  2063,  2064,  2065,  2066,     0,  2067,  2068,
    2069,  2070,  2071,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2072,     0,  2073,     0,  2074,     0,     0,
       0,     0,     0,     0,     0,     0,  2075,     0,  2076,  2077,
    2078,  2079,  2080,  2081,  2082,     0,     0,  2083,  2084,     0,
       0,     0,     0,  2085,     0,  2086,  2087,  2088,     0,  2089,
       0,  2090,     0,  2091,  2092,  2093,  2094,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2095,  2096,  2097,     0,     0,
       0,     0,     0,     0,     0,  2098,     0,  2099,  2100,  2101,
       0,     0,     0,     0,  2102,     0,  2103,  2104,  2105,     0,
       0,     0,  2106,     0,     0,     0,  2107,  2108,     0,     0,
    2109,  2110,  2111,  2112,     0,     0,     0,  2113,     0,     0,
       0,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2114,  2115,
    2116,  2117,  2118,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
    1995,  1996,  1997,  1998,  1999,  2000,     0,  2001,     0,  2002,
       0,     0,     0,  2003,  2004,  2005,  1240,  2006,     0,     0,
       0,     0,     0,  2007,  2008,  2009,  2010,  2011,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2012,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2013,  2014,     0,
       0,  2015,     0,     0,     0,     0,  2016,  2017,  2018,  2019,
    2020,     0,     0,  2021,     0,  2022,  2023,  2024,     0,     0,
    2025,  2026,     0,  2027,  2028,  2029,     0,     0,     0,  2030,
       0,     0,     0,     0,     0,     0,     0,     0,  2119,  2120,
    2121,  2122,  2123,  2031,  2124,     0,     0,     0,  2032,     0,
       0,     0,     0,  2033,  2034,  2035,     0,     0,     0,     0,
    2036,  2037,     0,  2038,  2039,  2040,  2041,     0,     0,  2042,
       0,  2486,  2044,  2045,  2046,     0,  2047,     0,  2048,  2049,
       0,  2050,     0,  2051,  2052,     0,  2053,  2054,  2055,  2056,
       0,     0,     0,     0,     0,  2057,     0,  2058,     0,  2059,
    2060,     0,  2061,  2062,  2063,  2064,  2065,  2066,     0,  2067,
    2068,  2069,  2070,  2071,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2072,     0,  2073,     0,  2074,     0,
       0,     0,     0,     0,     0,     0,     0,  2075,     0,  2076,
    2077,  2078,  2079,  2080,  2081,  2082,     0,     0,  2083,  2084,
       0,     0,     0,     0,  2085,     0,  2086,  2087,  2088,     0,
    2089,     0,  2090,     0,  2091,  2092,  2093,  2094,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2095,  2096,  2097,     0,
       0,     0,     0,     0,     0,     0,  2098,     0,  2099,  2100,
    2101,     0,     0,     0,     0,  2102,     0,  2103,  2104,  2105,
       0,     0,     0,  2106,     0,     0,     0,  2107,  2108,     0,
       0,  2109,  2110,  2111,  2112,     0,     0,     0,  2113,     0,
       0,     0,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2114,
    2115,  2116,  2117,  2118,   660,   661,   662,   663,   664,   665,
       0,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,  1995,  1996,  1997,  1998,  1999,  2000,     0,  2001,     0,
    2002,     0,     0,     0,  2003,  2004,  2005,  1241,  2006,     0,
       0,     0,     0,     0,  2007,  2008,  2009,  2010,  2011,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2012,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2013,  2014,
       0,     0,  2015,     0,     0,     0,     0,  2016,  2017,  2018,
    2019,  2020,     0,     0,  2021,     0,  2022,  2023,  2024,     0,
       0,  2025,  2026,     0,  2027,  2028,  2029,     0,     0,     0,
    2030,     0,     0,     0,     0,     0,     0,     0,     0,  2119,
    2120,  2121,  2122,  2123,  2031,  2124,     0,     0,     0,  2032,
       0,     0,     0,     0,  2033,  2034,  2035,     0,     0,     0,
       0,  2036,  2037,     0,  2038,  2039,  2040,  2041,     0,     0,
    2042,     0,  2487,  2044,  2045,  2046,     0,  2047,     0,  2048,
    2049,     0,  2050,     0,  2051,  2052,     0,  2053,  2054,  2055,
    2056,     0,     0,     0,     0,     0,  2057,     0,  2058,     0,
    2059,  2060,     0,  2061,  2062,  2063,  2064,  2065,  2066,     0,
    2067,  2068,  2069,  2070,  2071,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2072,     0,  2073,     0,  2074,
       0,     0,     0,     0,     0,     0,     0,     0,  2075,     0,
    2076,  2077,  2078,  2079,  2080,  2081,  2082,     0,     0,  2083,
    2084,     0,     0,     0,     0,  2085,     0,  2086,  2087,  2088,
       0,  2089,     0,  2090,     0,  2091,  2092,  2093,  2094,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2095,  2096,  2097,
       0,     0,     0,     0,     0,     0,     0,  2098,     0,  2099,
    2100,  2101,     0,     0,     0,     0,  2102,     0,  2103,  2104,
    2105,     0,     0,     0,  2106,     0,     0,     0,  2107,  2108,
       0,     0,  2109,  2110,  2111,  2112,     0,     0,     0,  2113,
       0,     0,     0,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2114,  2115,  2116,  2117,  2118,  -869,  -869,  -869,  -869,     0,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,     0,
       0,     0,  1995,  1996,  1997,  1998,  1999,  2000,     0,  2001,
       0,  2002,     0,     0,     0,  2003,  2004,  2005,  1248,  2006,
       0,     0,     0,     0,     0,  2007,  2008,  2009,  2010,  2011,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2012,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2013,
    2014,     0,     0,  2015,     0,     0,     0,     0,  2016,  2017,
    2018,  2019,  2020,     0,     0,  2021,     0,  2022,  2023,  2024,
       0,     0,  2025,  2026,     0,  2027,  2028,  2029,     0,     0,
       0,  2030,     0,     0,     0,     0,     0,     0,     0,     0,
    2119,  2120,  2121,  2122,  2123,  2031,  2124,     0,     0,     0,
    2032,     0,     0,     0,     0,  2033,  2034,  2035,     0,     0,
       0,     0,  2036,  2037,     0,  2038,  2039,  2040,  2041,     0,
       0,  2042,     0,  2488,  2044,  2045,  2046,     0,  2047,     0,
    2048,  2049,     0,  2050,     0,  2051,  2052,     0,  2053,  2054,
    2055,  2056,     0,     0,     0,     0,     0,  2057,     0,  2058,
       0,  2059,  2060,     0,  2061,  2062,  2063,  2064,  2065,  2066,
       0,  2067,  2068,  2069,  2070,  2071,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2072,     0,  2073,     0,
    2074,     0,     0,     0,     0,     0,     0,     0,     0,  2075,
       0,  2076,  2077,  2078,  2079,  2080,  2081,  2082,     0,     0,
    2083,  2084,     0,     0,     0,     0,  2085,     0,  2086,  2087,
    2088,     0,  2089,     0,  2090,     0,  2091,  2092,  2093,  2094,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2095,  2096,
    2097,     0,     0,     0,     0,     0,     0,     0,  2098,     0,
    2099,  2100,  2101,     0,     0,     0,     0,  2102,     0,  2103,
    2104,  2105,     0,     0,     0,  2106,     0,     0,     0,  2107,
    2108,     0,     0,  2109,  2110,  2111,  2112,     0,     0,     0,
    2113,     0,     0,     0,   659,   660,   661,   662,   663,   664,
     665,     0,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2114,  2115,  2116,  2117,  2118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1995,  1996,  1997,  1998,  1999,  2000,     0,
    2001,     0,  2002,     0,     0,     0,  2003,  2004,  2005,  1249,
    2006,     0,     0,     0,     0,     0,  2007,  2008,  2009,  2010,
    2011,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2012,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2013,  2014,     0,     0,  2015,     0,     0,     0,     0,  2016,
    2017,  2018,  2019,  2020,     0,     0,  2021,     0,  2022,  2023,
    2024,     0,     0,  2025,  2026,     0,  2027,  2028,  2029,     0,
       0,     0,  2030,     0,     0,     0,     0,     0,     0,     0,
       0,  2119,  2120,  2121,  2122,  2123,  2031,  2124,     0,     0,
       0,  2032,     0,     0,     0,     0,  2033,  2034,  2035,     0,
       0,     0,     0,  2036,  2037,     0,  2038,  2039,  2040,  2041,
       0,     0,  2042,     0,  2489,  2044,  2045,  2046,     0,  2047,
       0,  2048,  2049,     0,  2050,     0,  2051,  2052,     0,  2053,
    2054,  2055,  2056,     0,     0,     0,     0,     0,  2057,     0,
    2058,     0,  2059,  2060,     0,  2061,  2062,  2063,  2064,  2065,
    2066,     0,  2067,  2068,  2069,  2070,  2071,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2072,     0,  2073,
       0,  2074,     0,     0,     0,     0,     0,     0,     0,     0,
    2075,     0,  2076,  2077,  2078,  2079,  2080,  2081,  2082,     0,
       0,  2083,  2084,     0,     0,     0,     0,  2085,     0,  2086,
    2087,  2088,     0,  2089,     0,  2090,     0,  2091,  2092,  2093,
    2094,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2095,
    2096,  2097,     0,     0,     0,     0,     0,     0,     0,  2098,
       0,  2099,  2100,  2101,     0,     0,     0,     0,  2102,     0,
    2103,  2104,  2105,     0,     0,     0,  2106,     0,     0,     0,
    2107,  2108,     0,     0,  2109,  2110,  2111,  2112,     0,     0,
       0,  2113,     0,     0,     0,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2114,  2115,  2116,  2117,  2118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1995,  1996,  1997,  1998,  1999,  2000,
       0,  2001,     0,  2002,     0,     0,     0,  2003,  2004,  2005,
    1250,  2006,     0,     0,     0,     0,     0,  2007,  2008,  2009,
    2010,  2011,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2012,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2013,  2014,     0,     0,  2015,     0,     0,     0,     0,
    2016,  2017,  2018,  2019,  2020,     0,     0,  2021,     0,  2022,
    2023,  2024,     0,     0,  2025,  2026,     0,  2027,  2028,  2029,
       0,     0,     0,  2030,     0,     0,     0,     0,     0,     0,
       0,     0,  2119,  2120,  2121,  2122,  2123,  2031,  2124,     0,
       0,     0,  2032,     0,     0,     0,     0,  2033,  2034,  2035,
       0,     0,     0,     0,  2036,  2037,     0,  2038,  2039,  2040,
    2041,     0,     0,  2042,     0,  2588,  2044,  2045,  2046,     0,
    2047,     0,  2048,  2049,     0,  2050,     0,  2051,  2052,     0,
    2053,  2054,  2055,  2056,     0,     0,     0,     0,     0,  2057,
       0,  2058,     0,  2059,  2060,     0,  2061,  2062,  2063,  2064,
    2065,  2066,     0,  2067,  2068,  2069,  2070,  2071,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2072,     0,
    2073,     0,  2074,     0,     0,     0,     0,     0,     0,     0,
       0,  2075,     0,  2076,  2077,  2078,  2079,  2080,  2081,  2082,
       0,     0,  2083,  2084,     0,     0,     0,     0,  2085,     0,
    2086,  2087,  2088,     0,  2089,     0,  2090,     0,  2091,  2092,
    2093,  2094,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2095,  2096,  2097,     0,     0,     0,     0,     0,     0,     0,
    2098,     0,  2099,  2100,  2101,     0,     0,     0,     0,  2102,
       0,  2103,  2104,  2105,     0,     0,     0,  2106,     0,     0,
       0,  2107,  2108,     0,     0,  2109,  2110,  2111,  2112,     0,
       0,     0,  2113,     0,     0,     0,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2114,  2115,  2116,  2117,  2118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1995,  1996,  1997,  1998,  1999,
    2000,     0,  2001,     0,  2002,     0,     0,     0,  2003,  2004,
    2005,  1251,  2006,     0,     0,     0,     0,     0,  2007,  2008,
    2009,  2010,  2011,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2012,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2013,  2014,     0,     0,  2015,     0,     0,     0,
       0,  2016,  2017,  2018,  2019,  2020,     0,     0,  2021,     0,
    2022,  2023,  2024,     0,     0,  2025,  2026,     0,  2027,  2028,
    2029,     0,     0,     0,  2030,     0,     0,     0,     0,     0,
       0,     0,     0,  2119,  2120,  2121,  2122,  2123,  2031,  2124,
       0,     0,     0,  2032,     0,     0,     0,     0,  2033,  2034,
    2035,     0,     0,     0,     0,  2036,  2037,     0,  2038,  2039,
    2040,  2041,     0,     0,  2042,     0,  2589,  2044,  2045,  2046,
       0,  2047,     0,  2048,  2049,     0,  2050,     0,  2051,  2052,
       0,  2053,  2054,  2055,  2056,     0,     0,     0,     0,     0,
    2057,     0,  2058,     0,  2059,  2060,     0,  2061,  2062,  2063,
    2064,  2065,  2066,     0,  2067,  2068,  2069,  2070,  2071,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2072,
       0,  2073,     0,  2074,     0,     0,     0,     0,     0,     0,
       0,     0,  2075,     0,  2076,  2077,  2078,  2079,  2080,  2081,
    2082,     0,     0,  2083,  2084,     0,     0,     0,     0,  2085,
       0,  2086,  2087,  2088,     0,  2089,     0,  2090,     0,  2091,
    2092,  2093,  2094,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2095,  2096,  2097,     0,     0,     0,     0,     0,     0,
       0,  2098,     0,  2099,  2100,  2101,     0,     0,     0,     0,
    2102,     0,  2103,  2104,  2105,     0,     0,     0,  2106,     0,
       0,     0,  2107,  2108,     0,     0,  2109,  2110,  2111,  2112,
       0,     0,     0,  2113,     0,     0,     0,   659,   660,   661,
     662,   663,   664,   665,     0,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2114,  2115,  2116,  2117,  2118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1995,  1996,  1997,  1998,
    1999,  2000,     0,  2001,     0,  2002,     0,     0,     0,  2003,
    2004,  2005,  1253,  2006,     0,     0,     0,     0,     0,  2007,
    2008,  2009,  2010,  2011,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2012,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2013,  2014,     0,     0,  2015,     0,     0,
       0,     0,  2016,  2017,  2018,  2019,  2020,     0,     0,  2021,
       0,  2022,  2023,  2024,     0,     0,  2025,  2026,     0,  2027,
    2028,  2029,     0,     0,     0,  2030,     0,     0,     0,     0,
       0,     0,     0,     0,  2119,  2120,  2121,  2122,  2123,  2031,
    2124,     0,     0,     0,  2032,     0,     0,     0,     0,  2033,
    2034,  2035,     0,     0,     0,     0,  2036,  2037,     0,  2038,
    2039,  2040,  2041,     0,     0,  2042,     0,  2675,  2044,  2045,
    2046,     0,  2047,     0,  2048,  2049,     0,  2050,     0,  2051,
    2052,     0,  2053,  2054,  2055,  2056,     0,     0,     0,     0,
       0,  2057,     0,  2058,     0,  2059,  2060,     0,  2061,  2062,
    2063,  2064,  2065,  2066,     0,  2067,  2068,  2069,  2070,  2071,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2072,     0,  2073,     0,  2074,     0,     0,     0,     0,     0,
       0,     0,     0,  2075,     0,  2076,  2077,  2078,  2079,  2080,
    2081,  2082,     0,     0,  2083,  2084,     0,     0,     0,     0,
    2085,     0,  2086,  2087,  2088,     0,  2089,     0,  2090,     0,
    2091,  2092,  2093,  2094,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2095,  2096,  2097,     0,     0,     0,     0,     0,
       0,     0,  2098,     0,  2099,  2100,  2101,     0,     0,     0,
       0,  2102,     0,  2103,  2104,  2105,     0,     0,     0,  2106,
       0,     0,     0,  2107,  2108,     0,     0,  2109,  2110,  2111,
    2112,     0,     0,     0,  2113,     0,     0,     0,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2114,  2115,  2116,  2117,  2118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1995,  1996,  1997,
    1998,  1999,  2000,     0,  2001,     0,  2002,     0,     0,     0,
    2003,  2004,  2005,  1254,  2006,     0,     0,     0,     0,     0,
    2007,  2008,  2009,  2010,  2011,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2012,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2013,  2014,     0,     0,  2015,     0,
       0,     0,     0,  2016,  2017,  2018,  2019,  2020,     0,     0,
    2021,     0,  2022,  2023,  2024,     0,     0,  2025,  2026,     0,
    2027,  2028,  2029,     0,     0,     0,  2030,     0,     0,     0,
       0,     0,     0,     0,     0,  2119,  2120,  2121,  2122,  2123,
    2031,  2124,     0,     0,     0,  2032,     0,     0,     0,     0,
    2033,  2034,  2035,     0,     0,     0,     0,  2036,  2037,     0,
    2038,  2039,  2040,  2041,     0,     0,  2042,     0,  2678,  2044,
    2045,  2046,     0,  2047,     0,  2048,  2049,     0,  2050,     0,
    2051,  2052,     0,  2053,  2054,  2055,  2056,     0,     0,     0,
       0,     0,  2057,     0,  2058,     0,  2059,  2060,     0,  2061,
    2062,  2063,  2064,  2065,  2066,     0,  2067,  2068,  2069,  2070,
    2071,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2072,     0,  2073,     0,  2074,     0,     0,     0,     0,
       0,     0,     0,     0,  2075,     0,  2076,  2077,  2078,  2079,
    2080,  2081,  2082,     0,     0,  2083,  2084,     0,     0,     0,
       0,  2085,     0,  2086,  2087,  2088,     0,  2089,     0,  2090,
       0,  2091,  2092,  2093,  2094,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2095,  2096,  2097,     0,     0,     0,     0,
       0,     0,     0,  2098,     0,  2099,  2100,  2101,     0,     0,
       0,     0,  2102,     0,  2103,  2104,  2105,     0,     0,     0,
    2106,     0,     0,     0,  2107,  2108,     0,     0,  2109,  2110,
    2111,  2112,     0,     0,     0,  2113,     0,     0,     0,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2114,  2115,  2116,  2117,
    2118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1995,  1996,
    1997,  1998,  1999,  2000,     0,  2001,     0,  2002,     0,     0,
       0,  2003,  2004,  2005,  1255,  2006,     0,     0,     0,     0,
       0,  2007,  2008,  2009,  2010,  2011,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2012,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2013,  2014,     0,     0,  2015,
       0,     0,     0,     0,  2016,  2017,  2018,  2019,  2020,     0,
       0,  2021,     0,  2022,  2023,  2024,     0,     0,  2025,  2026,
       0,  2027,  2028,  2029,     0,     0,     0,  2030,     0,     0,
       0,     0,     0,     0,     0,     0,  2119,  2120,  2121,  2122,
    2123,  2031,  2124,     0,     0,     0,  2032,     0,     0,     0,
       0,  2033,  2034,  2035,     0,     0,     0,     0,  2036,  2037,
       0,  2038,  2039,  2040,  2041,     0,     0,  2042,     0,  2726,
    2044,  2045,  2046,     0,  2047,     0,  2048,  2049,     0,  2050,
       0,  2051,  2052,     0,  2053,  2054,  2055,  2056,     0,     0,
       0,     0,     0,  2057,     0,  2058,     0,  2059,  2060,     0,
    2061,  2062,  2063,  2064,  2065,  2066,     0,  2067,  2068,  2069,
    2070,  2071,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2072,     0,  2073,     0,  2074,     0,     0,     0,
       0,     0,     0,     0,     0,  2075,     0,  2076,  2077,  2078,
    2079,  2080,  2081,  2082,     0,     0,  2083,  2084,     0,     0,
       0,     0,  2085,     0,  2086,  2087,  2088,     0,  2089,     0,
    2090,     0,  2091,  2092,  2093,  2094,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2095,  2096,  2097,     0,     0,     0,
       0,     0,     0,     0,  2098,     0,  2099,  2100,  2101,     0,
       0,     0,     0,  2102,     0,  2103,  2104,  2105,     0,     0,
       0,  2106,     0,     0,     0,  2107,  2108,     0,     0,  2109,
    2110,  2111,  2112,     0,     0,     0,  2113,   659,   660,   661,
     662,   663,   664,   665,     0,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2114,  2115,  2116,
    2117,  2118,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,  1995,
    1996,  1997,  1998,  1999,  2000,     0,  2001,     0,  2002,     0,
       0,     0,  2003,  2004,  2005,  1261,  2006,     0,     0,     0,
       0,     0,  2007,  2008,  2009,  2010,  2011,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2012,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2013,  2014,     0,     0,
    2015,     0,     0,     0,     0,  2016,  2017,  2018,  2019,  2020,
       0,     0,  2021,     0,  2022,  2023,  2024,     0,     0,  2025,
    2026,     0,  2027,  2028,  2029,     0,     0,     0,  2030,     0,
       0,     0,     0,     0,     0,     0,     0,  2119,  2120,  2121,
    2122,  2123,  2031,  2124,     0,     0,     0,  2032,     0,     0,
       0,     0,  2033,  2034,  2035,     0,     0,     0,     0,  2036,
    2037,     0,  2038,  2039,  2040,  2041,     0,     0,  2042,     0,
    2767,  2044,  2045,  2046,     0,  2047,     0,  2048,  2049,     0,
    2050,     0,  2051,  2052,     0,  2053,  2054,  2055,  2056,     0,
       0,     0,     0,     0,  2057,     0,  2058,     0,  2059,  2060,
       0,  2061,  2062,  2063,  2064,  2065,  2066,     0,  2067,  2068,
    2069,  2070,  2071,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2072,     0,  2073,     0,  2074,     0,     0,
       0,     0,     0,     0,     0,     0,  2075,     0,  2076,  2077,
    2078,  2079,  2080,  2081,  2082,     0,     0,  2083,  2084,     0,
       0,     0,     0,  2085,     0,  2086,  2087,  2088,     0,  2089,
       0,  2090,     0,  2091,  2092,  2093,  2094,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   257,   258,   259,   260,
     261,   262,     0,     0,     0,  2095,  2096,  2097,     0,     0,
     263,   264,     0,     0,     0,  2098,     0,  2099,  2100,  2101,
     265,   266,     0,     0,  2102,     0,  2103,  2104,  2105,     0,
       0,     0,  2106,   267,     0,     0,  2107,  2108,     0,     0,
    2109,  2110,  2111,  2112,     0,     0,     0,  2113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   268,     0,     0,     0,     0,
     269,     0,     0,   270,   271,     0,     0,     0,     0,     0,
       0,     0,   272,     0,     0,     0,     0,     0,  2114,  2115,
    2116,  2117,  2118,     0,     0,     0,     0,     0,     0,   273,
       0,     0,     0,   274,   659,   660,   661,   662,   663,   664,
     665,     0,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,     0,     0,  1263,     0,     0,     0,     0,     0,   275,
     659,   660,   661,   662,   663,   664,   665,     0,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,  1268,   659,
     660,   661,   662,   663,   664,   665,   277,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,  2119,  2120,
    2121,  2122,  2123,     0,  2124,     0,     0,     0,   278,   279,
       0,     0,     0,     0,     0,     0,   280,   281,     0,     0,
       0,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   283,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,     0,   322,     0,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,     0,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,     0,   370,   371,   372,   373,     0,
       0,     0,     0,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,     0,   385,   386,   387,   257,   258,
     259,   260,   261,   262,     0,     0,     0,     0,     0,     0,
       0,     0,   263,   264,     0,     0,     0,   388,     0,     0,
       0,     0,   265,     0,     0,     0,     0,   389,   390,     0,
       0,     0,     0,     0,     0,  1021,     0,     0,     0,     0,
       0,     0,  1022,     0,     0,     0,     0,   391,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   268,     0,     0,
       0,     0,   269,     0,     0,   270,   271,   659,   660,   661,
     662,   663,   664,   665,   272,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   659,   660,   661,   662,   663,   664,
     665,     0,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   659,   660,   661,   662,   663,   664,   665,
    1269,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,     0,     0,     0,     0,   276,     0,
       0,     0,     0,     0,     0,     0,  1270,     0,   277,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,     0,
     278,     0,     0,     0,     0,  1271,     0,  1023,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,     0,   283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,     0,   322,     0,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,     0,   370,   371,   372,
     373,     0,     0,     0,     0,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,     0,   385,   386,   387,
     257,   258,   259,   260,   261,   262,     0,     0,     0,     0,
       0,     0,     0,     0,   263,   264,     0,     0,     0,   388,
       0,     0,     0,     0,   265,     0,     0,     0,     0,   389,
     390,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1024,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
       0,     0,     0,     0,   269,     0,     0,   270,   271,   659,
     660,   661,   662,   663,   664,   665,   272,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   659,   660,   661,   662,
     663,   664,   665,  1283,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,   659,   660,   661,   662,   663,   664,   665,
    1284,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     276,     0,     0,     0,     0,     0,     0,     0,     0,  1285,
     277,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
       0,     0,   278,     0,     0,     0,     0,     0,   659,   660,
     661,   662,   663,   664,   665,  1287,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,     0,     0,     0,
     283,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   546,     0,  1298,     0,     0,     0,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,     0,   322,     0,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,     0,   370,
     371,   372,   373,     0,     0,     0,     0,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,     0,   385,
     386,   387,   257,   258,   259,   260,   261,   262,     0,     0,
       0,     0,     0,     0,     0,     0,   263,   264,     0,     0,
       0,   388,     0,     0,     0,     0,   265,   938,     0,     0,
       0,   389,   390,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   268,     0,     0,     0,     0,   269,     0,     0,   270,
     271,   659,   660,   661,   662,   663,   664,   665,   272,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   659,   660,
     661,   662,   663,   664,   665,  1307,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   659,   660,   661,   662,   663,
     664,   665,  1308,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,   276,     0,     0,     0,     0,     0,     0,  1309,
       0,     0,   277,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,   278,     0,     0,     0,     0,     0,
     659,   660,   661,   662,   663,   664,   665,  1310,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,     0,     0,     0,
       0,     0,   283,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1311,     0,     0,     0,     0,     0,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,     0,   322,
       0,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
       0,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
       0,   370,   371,   372,   373,     0,     0,     0,     0,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
       0,   385,   386,   387,   257,   258,   259,   260,   261,   262,
       0,     0,     0,     0,     0,     0,     0,     0,   263,   264,
       0,     0,     0,   388,     0,     0,     0,     0,   265,     0,
       0,     0,     0,   389,   390,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   391,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   268,     0,     0,     0,     0,   269,     0,
       0,   270,   271,   659,   660,   661,   662,   663,   664,   665,
     272,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1312,     0,     0,
     659,   660,   661,   662,   663,   664,   665,  1237,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,   659,   660,   661,
     662,   663,   664,   665,  1313,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,     0,     0,     0,     0,     0,
       0,  1314,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   278,     0,     0,     0,
       0,     0,   659,   660,   661,   662,   663,   664,   665,  1320,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,     0,
       0,     0,     0,     0,   283,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1324,     0,     0,     0,
       0,     0,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
       0,   322,     0,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,     0,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,     0,   370,   371,   372,   373,     0,     0,     0,
       0,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,     0,   385,   386,   387,   257,   258,   259,   260,
     261,   262,     0,     0,     0,     0,     0,     0,     0,     0,
     263,   264,     0,     0,     0,   388,     0,     0,     0,     0,
     265,     0,     0,     0,     0,   389,   390,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   268,     0,     0,     0,     0,
     269,     0,     0,   270,   271,   659,   660,   661,   662,   663,
     664,   665,   272,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,     0,     0,     0,     0,  1800,     0,     0,     0,
       0,     0,   659,   660,   661,   662,   663,   664,   665,  1325,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,  1326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,     0,     0,     0,
       0,     0,     0,  1327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   659,   660,   661,   662,   663,   664,   665,   278,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   283,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1328,     0,
       0,     0,     0,     0,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,     0,   322,     0,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,     0,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,     0,   370,   371,   372,   373,     0,
       0,     0,     0,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,     0,   385,   386,   387,   257,   258,
     259,   260,   261,   262,     0,     0,     0,     0,     0,     0,
       0,     0,   263,   264,     0,     0,     0,   388,     0,     0,
       0,     0,   265,     0,     0,     0,     0,   389,   390,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   391,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   268,     0,     0,
       0,     0,   269,     0,     0,   270,   271,   659,   660,   661,
     662,   663,   664,   665,   272,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,     0,     0,  1805,     0,
       0,     0,     0,     0,   659,   660,   661,   662,   663,   664,
     665,  1332,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   659,   660,   661,   662,   663,   664,   665,  1333,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,   276,     0,
       0,     0,     0,     0,     0,  1334,     0,     0,   277,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,     0,
     278,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1336,   283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,     0,   322,     0,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,     0,   370,   371,   372,
     373,     0,     0,     0,     0,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,     0,   385,   386,   387,
     257,   258,   259,   260,   261,   262,     0,     0,     0,     0,
       0,     0,     0,     0,   263,   264,     0,     0,     0,   388,
       0,     0,     0,     0,   265,     0,     0,     0,     0,   389,
     390,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
       0,     0,     0,     0,   269,     0,     0,   270,   271,   659,
     660,   661,   662,   663,   664,   665,   272,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,     0,
    2376,     0,     0,     0,     0,     0,   659,   660,   661,   662,
     663,   664,   665,  1535,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   659,   660,   661,   662,   663,   664,   665,
    1827,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     277,     0,     0,     0,     0,     0,     0,  1828,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   278,     0,     0,     0,     0,     0,   659,   660,
     661,   662,   663,   664,   665,  1839,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,     0,     0,     0,
     283,     0,     0,     0,     0,     0,     0,  1849,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,     0,   322,     0,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,     0,   370,
     371,   372,   373,     0,     0,     0,     0,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,     0,   385,
     386,   387,   257,   258,   259,   260,   261,   262,     0,     0,
       0,     0,     0,     0,     0,     0,   263,   264,     0,     0,
       0,   388,     0,     0,     0,     0,   265,     0,     0,     0,
       0,   389,   390,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   268,     0,     0,     0,     0,   269,     0,     0,   270,
     271,   659,   660,   661,   662,   663,   664,   665,   272,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
       0,     0,  2378,     0,     0,     0,     0,     0,   659,   660,
     661,   662,   663,   664,   665,  1865,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   659,   660,   661,   662,   663,
     664,   665,  1866,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,     0,     0,     0,     0,     0,     0,  1867,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   659,   660,   661,
     662,   663,   664,   665,   278,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   283,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1870,     0,     0,     0,     0,     0,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,     0,   322,
       0,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
       0,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
       0,   370,   371,   372,   373,     0,     0,     0,     0,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
       0,   385,   386,   387,   257,   258,   259,   260,   261,   262,
       0,     0,     0,     0,     0,     0,     0,     0,   263,   264,
       0,     0,     0,   388,     0,     0,     0,     0,   265,     0,
       0,     0,     0,   389,   390,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   659,   660,   661,   662,
     663,   664,   665,   391,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,   268,     0,     0,     0,     0,   269,     0,
       0,   270,   271,   659,   660,   661,   662,   663,   664,   665,
     272,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     659,   660,   661,   662,   663,   664,   665,  1871,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   659,   660,   661,
     662,   663,   664,   665,  1884,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,     0,     0,     0,     0,     0,
       0,  1885,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   659,
     660,   661,   662,   663,   664,   665,   278,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1886,   283,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
       0,   322,     0,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,     0,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,     0,   370,   371,   372,   373,     0,     0,     0,
       0,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,     0,   385,   386,   387,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   388,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   389,   390,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   659,   660,
     661,   662,   663,   664,   665,   391,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   659,   660,   661,   662,   663,
     664,   665,  2419,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2422,
       0,     0,     0,   659,   660,   661,   662,   663,   664,   665,
    1272,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,     0,     0,  2423,   659,   660,   661,
     662,   663,   664,   665,     0,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,   659,   660,   661,   662,
     663,   664,   665,  2424,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,     0,     0,     0,   659,   660,   661,
     662,   663,   664,   665,  1273,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   659,   660,   661,   662,   663,   664,
     665,     0,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,     0,     0,     0,   659,   660,   661,   662,
     663,   664,   665,  1005,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   659,   660,   661,   662,   663,   664,   665,
    1236,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
     659,   660,   661,   662,   663,   664,   665,     0,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,     0,  1242,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,     0,
       0,     0,  1243,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,  1244,     0,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,  1245,   683,
     659,   660,   661,   662,   663,   664,   665,     0,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,     0,     0,     0,
       0,     0,  1246,     0,   659,   660,   661,   662,   663,   664,
     665,     0,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,  1247,
     683,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,  1252,   683,   659,   660,
     661,   662,   663,   664,   665,     0,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,  1256,   683,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
    1257,   683,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,  1258,   683,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,  1262,   683,   659,   660,   661,   662,
     663,   664,   665,     0,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,  1264,   683,   659,   660,   661,   662,   663,   664,   665,
       0,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,  1265,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,     0,
       0,   659,   660,   661,   662,   663,   664,   665,  1266,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,   659,   660,
     661,   662,   663,   664,   665,  1275,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,   659,   660,   661,
     662,   663,   664,   665,  1276,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,     0,     0,     0,     0,
       0,   659,   660,   661,   662,   663,   664,   665,  1277,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
       0,   659,   660,   661,   662,   663,   664,   665,  1278,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,   659,   660,
     661,   662,   663,   664,   665,  1279,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,     0,     0,     0,
       0,     0,   659,   660,   661,   662,   663,   664,   665,  1280,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,   659,
     660,   661,   662,   663,   664,   665,  1281,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,   659,   660,   661,   662,
     663,   664,   665,  1282,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,   659,   660,   661,   662,   663,   664,   665,
    1286,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
     659,   660,   661,   662,   663,   664,   665,  1299,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,   659,   660,   661,
     662,   663,   664,   665,  1300,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   659,   660,   661,   662,   663,   664,
     665,  1301,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,   659,   660,   661,   662,   663,   664,   665,  1302,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
     659,   660,   661,   662,   663,   664,   665,  1303,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,     0,     0,   659,
     660,   661,   662,   663,   664,   665,  1304,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,   659,   660,   661,   662,
     663,   664,   665,  1305,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,     0,     0,   659,   660,   661,   662,   663,
     664,   665,  1306,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,     0,     0,     0,     0,     0,     0,     0,   659,
     660,   661,   662,   663,   664,   665,  1317,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,   659,
     660,   661,   662,   663,   664,   665,  1318,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,   659,   660,   661,   662,
     663,   664,   665,  1319,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,     0,     0,     0,     0,     0,     0,     0,
     659,   660,   661,   662,   663,   664,   665,  1323,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,   659,   660,   661,
     662,   663,   664,   665,  1329,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   659,   660,   661,   662,   663,   664,
     665,  1330,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,   659,   660,   661,   662,   663,   664,   665,  1331,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,   659,   660,
     661,   662,   663,   664,   665,  1335,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,   659,   660,   661,   662,   663,
     664,   665,  1361,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,   659,   660,   661,   662,   663,   664,   665,  1819,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,   659,
     660,   661,   662,   663,   664,   665,  1824,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,   659,   660,
     661,   662,   663,   664,   665,  1825,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,   659,   660,   661,
     662,   663,   664,   665,  1826,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   659,   660,   661,   662,   663,   664,
     665,  1829,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,     0,     0,   659,   660,   661,   662,   663,   664,   665,
    1830,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,     0,     0,     0,   659,   660,   661,
     662,   663,   664,   665,  1831,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,     0,   659,   660,   661,
     662,   663,   664,   665,  1832,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   659,   660,   661,   662,   663,   664,
     665,  1833,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,     0,     0,     0,     0,     0,     0,     0,   659,   660,
     661,   662,   663,   664,   665,  1834,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,   659,   660,   661,   662,   663,
     664,   665,  1837,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,   659,   660,   661,   662,   663,   664,   665,  1838,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,   659,
     660,   661,   662,   663,   664,   665,  1850,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,   659,   660,   661,   662,
     663,   664,   665,  1851,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,   659,   660,   661,   662,   663,   664,   665,
    1864,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
     659,   660,   661,   662,   663,   664,   665,  1868,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,   659,   660,   661,
     662,   663,   664,   665,  1869,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,   659,   660,   661,   662,
     663,   664,   665,  1878,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,     0,     0,   659,   660,   661,   662,   663,
     664,   665,  1879,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,   659,   660,   661,   662,   663,   664,   665,  1880,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,     0,
       0,   659,   660,   661,   662,   663,   664,   665,  1881,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
       0,     0,     0,     0,     0,   659,   660,   661,   662,   663,
     664,   665,  1882,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,     0,     0,     0,   659,   660,   661,   662,   663,
     664,   665,  1883,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,   659,   660,   661,   662,   663,   664,   665,  1887,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,     0,
       0,     0,     0,     0,     0,     0,   659,   660,   661,   662,
     663,   664,   665,  1977,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,     0,   683,   659,   660,   661,   662,   663,   664,   665,
    2194,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
     659,   660,   661,   662,   663,   664,   665,  2277,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,   659,   660,   661,
     662,   663,   664,   665,  2352,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   659,   660,   661,   662,   663,   664,
     665,  2384,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,   659,   660,   661,   662,   663,   664,   665,  2385,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,   659,   660,
     661,   662,   663,   664,   665,  2386,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,   659,   660,   661,   662,   663,
     664,   665,  2387,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,     0,     0,   659,   660,   661,   662,   663,   664,
     665,  2388,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,     0,
     683,     0,     0,   659,   660,   661,   662,   663,   664,   665,
    2397,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
     659,   660,   661,   662,   663,   664,   665,  2414,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   683,    95,     0,   659,
     660,   661,   662,   663,   664,   665,  2415,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,     0,
       0,     0,     0,   659,   660,   661,   662,   663,   664,   665,
    2416,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,     0,   683,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
    2417,     0,     0,     0,  1673,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     1,     0,     0,     0,     2,    97,
       0,     0,     0,     0,     0,  1674,     0,  2418,     0,     0,
       0,     0,     0,     0,  1675,     0,     0,  1676,   120,  1677,
       0,     0,  1678,     0,     0,     3,     0,     0,     0,     0,
       4,     0,     0,     0,   121,    98,    99,  1679,     0,     0,
       0,  2420,     0,     5,  1680,  1681,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     0,     0,  2421,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1682,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2460,  1683,     0,   123,   101,
     124,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     8,     0,   102,     0,   103,     0,
       0,     0,  2466,     0,   104,     9,    10,    11,     0,     0,
    1684,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,     0,     0,     0,     0,  2470,
       0,     0,     0,     0,     0,     0,     0,     0,   107,  1685,
       0,     0,     0,    12,     0,    13,     0,  1686,     0,     0,
       0,     0,     0,    14,     0,     0,  2475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,     0,
       0,     0,     0,  2602,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,  1687,     0,     0,
    2609,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,     0,  2635,
       0,     0,     0,     0,     0,     0,     0,     0,   108,     0,
       0,     0,     0,     0,   128,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,     0,     0,     0,  2648,     0,
       0,     0,   109,     0,     0,     0,   130,     0,     0,     0,
       0,   110,     0,     0,     0,   131,     0,     0,   132,     0,
       0,     0,     0,   133,   111,  2672,   134,     0,     0,     0,
       0,     0,     0,   112,     0,     0,   113,     0,     0,     0,
       0,   114,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2673,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,  2732,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,    25,     0,     0,    26,   659,   660,   661,   662,   663,
     664,   665,     0,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,   659,   660,   661,   662,   663,   664,   665,     0,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,     0,   683,   659,
     660,   661,   662,   663,   664,   665,     0,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2195,
    2196,     0,     0,     0,  2197,     0,  2198,   659,   660,   661,
     662,   663,   664,   665,     0,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,     0,     0,     0,  2199,
    2200,     0,  2201,   772,   773,     0,   774,     0,   775,   776,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   777,     0,     0,   659,   660,   661,
     662,   663,   664,   665,     0,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,     0,     0,   778,   779,   780,   781,
     658,     0,     0,     0,     0,   782,  2173,   659,   660,   661,
     662,   663,   664,   665,   783,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,     0,   683,   784,     0,     0,     0,     0,     0,
       0,     0,   785,     0,     0,     0,     0,     0,   684,     0,
       0,     0,     0,     0,     0,     0,     0,   786,     0,     0,
       0,     0,     0,     0,   787,     0,     0,   788,     0,  2174,
     789,   790,     0,  2202,  2203,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   791,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   546,     0,     0,
       0,     0,  1225,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   792,   793,     0,     0,   794,   795,     0,     0,     0,
       0,   796,     0,   797,     0,     0,     0,     0,   798,   799,
       0,     0,     0,     0,   800,     0,   801,     0,     0,     0,
    1533,     0,   802,     0,   803,   804,     0,     0,     0,     0,
     805,   659,   660,   661,   662,   663,   664,   665,     0,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,     0,   683,     0,     0,
       0,     0,     0,     0,     0,   659,   660,   661,   662,   663,
     664,   665,  1267,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
       0,   683,     0,     0,     0,     0,     0,     0,   659,   660,
     661,   662,   663,   664,   665,  1345,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,     0,   683,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1607
};

static const yytype_int16 yycheck[] =
{
     147,  1365,   408,   402,  1777,  1444,  1794,  1735,   398,  1630,
    1853,  1854,  1488,   855,   704,   478,  1920,  1401,  1402,  1862,
    1863,  1460,  1779,  1407,  1137,  1138,  2158,     3,    36,     3,
    1143,     3,  1145,    20,  1473,   136,  2217,  2218,   136,    20,
    2164,     6,  1220,  1641,  1222,     3,   140,  2228,  2229,  1053,
     107,  1509,   159,    18,  1911,     3,    48,   191,   159,   199,
     199,  1670,  1671,     6,     5,     4,     4,     4,    48,   266,
     402,     4,     5,     6,     7,   266,   277,    51,   277,   108,
    1689,   107,     8,    36,   240,    74,     3,   240,   240,     3,
       3,   268,   107,     3,   179,   136,     3,     4,     5,     6,
       7,     8,   113,   104,   268,   252,   253,   108,     3,   508,
       3,   417,   750,    71,   154,     3,   263,   264,   265,   252,
     204,    40,   269,    16,   274,  1223,    84,   252,     4,   197,
     139,   157,    78,    28,   266,   113,   266,   274,     3,    72,
    1913,    10,    11,    12,    13,    14,    15,    16,    51,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     3,    36,    49,    51,
     808,     3,    97,     3,   277,   266,   216,     3,    90,    71,
     172,    71,   193,   266,   268,   219,     3,    87,   107,   274,
       3,   167,   230,   202,    18,     9,    84,   173,   266,    99,
     113,   443,   444,   266,   245,   197,    20,   208,  2389,  2390,
    2391,  2392,  2393,  2394,   391,   193,  1058,   197,   252,   167,
     258,   210,  2403,    87,   107,   173,  2407,   391,   193,   258,
    2411,   112,   258,   248,    51,   135,   228,     3,   157,   156,
    1968,  1339,   156,   143,   391,   446,   156,   446,   228,   446,
     193,   154,  1980,   444,   193,   201,   193,   150,    10,    11,
      12,    13,    14,    15,    16,   241,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,  1722,    36,   277,   193,   686,  1672,  2017,
     446,   444,   444,   193,   401,  1734,   446,   277,   236,   237,
    2028,   227,   195,   693,  1780,   439,   446,   446,   184,   446,
       3,  1750,   444,   216,   444,   261,     3,  1915,   438,    51,
    2048,   441,   241,   136,     3,   217,   156,   217,    60,    95,
     156,   107,  1790,  2190,  2062,  1944,   277,   371,   241,   258,
     443,   154,   242,  2071,   269,   446,   258,  1525,   446,  1527,
     407,  1355,   446,   444,   319,   327,   328,   329,   330,   351,
     184,   444,  1204,   176,  2207,  2208,  2209,  2210,  2211,  2212,
     404,   351,   398,  2505,  1064,   258,  2219,   277,   435,   436,
    2223,   444,  2506,  2111,  2227,   249,  2159,  2160,   140,    51,
     203,    84,   426,    14,   155,   542,   259,    18,    60,   546,
     333,   334,   335,   164,   444,   381,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   280,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   381,   581,   582,   583,   445,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   854,   443,  1095,  1096,  2640,
     607,   608,   443,  2644,   422,   612,   613,  1105,   444,   443,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   445,   640,   641,   642,   444,   644,   645,   646,
     647,   648,   649,   650,   651,   652,   653,  1605,   655,   656,
    1352,   444,   659,   660,   661,   662,   663,  1155,  1156,  1157,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,  2441,   445,   404,
     154,   688,   266,     3,   444,   877,    18,   694,   880,  1988,
     274,  1990,   376,   377,   378,   379,    54,    55,   440,   124,
     125,     3,   443,   895,     3,  2746,  2747,   404,  2749,  2750,
    2298,     3,   404,    18,   255,  2303,    74,     3,   447,    74,
      71,    62,  2370,    71,    78,    66,    78,     3,   252,  1702,
      78,  1704,  1705,    84,  2351,    10,    11,    12,    13,    14,
      15,    16,   216,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     252,    36,   398,   399,   400,    97,    38,     3,    74,  1267,
    1268,   407,   177,   114,     3,    87,   117,   133,  2426,     3,
     134,   322,   134,    85,    55,     3,   134,    99,   124,   125,
     138,   132,    97,    85,     5,   137,    18,  1047,   154,     3,
    1123,  1124,     3,    75,  2262,    49,   417,   155,  2736,    20,
     215,   152,   415,     3,    36,     3,   164,   396,  1368,   160,
       3,  1371,     3,   135,     3,     3,     3,    28,   100,     3,
       3,   143,     3,   445,  2133,     3,   108,   192,     3,  2542,
    2139,   444,     5,  2546,    98,   852,     0,   201,   120,   201,
     275,   183,   210,   201,   156,   210,    78,   156,   200,   443,
    1052,   136,   446,    51,   156,   197,  2794,  2795,   112,  2796,
     156,     3,     4,     5,     6,     7,     8,   351,   183,   442,
     156,   193,   889,   890,  2472,   240,   192,   894,   241,   430,
     431,   113,   197,   235,   901,   149,  2824,  2661,  2825,  2826,
      63,   100,  2490,   100,   210,  1403,    71,   261,   249,   261,
     251,   267,     3,   261,     5,   187,  1618,    51,   271,    84,
     156,   120,     3,   120,   444,  2169,    60,   156,  1194,   270,
     242,  2858,   156,   103,   240,   216,   208,   208,   156,   275,
       3,    10,    11,    12,    13,    14,    15,    16,  2429,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   156,    36,   240,   443,
     444,    39,   241,   156,   100,   156,   146,   156,   156,   156,
    2438,    51,   156,   156,   154,   156,   445,   446,   156,  2637,
      60,    59,    33,    34,   120,    36,     3,   269,  2586,     3,
    2703,  2704,   271,  2706,  2707,  2653,   176,     3,   788,  1016,
    1017,  2347,  1019,   156,   794,  2314,   796,  1024,   445,   446,
     103,   398,   399,   400,   103,  2249,   103,   103,    13,    14,
       3,    16,     3,  2332,    19,  2334,    10,    11,    12,    13,
      14,    15,    16,   155,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   193,    36,   146,    32,    33,    34,   146,    36,   146,
     146,   154,   445,   446,     3,   154,   159,   154,   154,   246,
    2713,  2562,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  2679,    36,   176,  1353,  1361,  2744,   176,     3,   176,
     176,     3,    10,    11,    12,    13,    14,    15,    16,  2567,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   155,    36,  1130,
    1131,   396,  1133,  1134,  1135,    76,    45,    46,  1139,  1140,
    1141,   223,   224,  1144,   396,  1152,    82,    83,  1340,     3,
     775,   776,   777,   778,   396,   780,   396,  1349,   783,   784,
     785,   445,   446,   445,   446,   790,   791,   792,   445,   446,
     795,   446,    10,    11,    12,    13,    14,    15,    16,   252,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,  2657,
    2499,     3,   445,   446,   445,   446,  2430,   405,   406,   405,
     406,   396,   153,   445,   446,   445,   446,     3,  1225,   171,
    1227,   396,   163,   446,   445,   446,     3,  1234,  1235,     3,
    1237,   445,   446,   446,  1241,   396,   177,   445,   446,   445,
     446,  1248,  1249,  1250,  1251,     3,  1253,  1254,  1255,   190,
     445,   446,   396,  1260,  1261,     3,  1263,   136,  2716,   445,
     446,   159,  1269,  1270,  1271,    28,    29,    30,    31,    32,
      33,    34,   136,    36,   215,   136,  1283,  1284,  1285,   136,
    1287,   445,   446,     3,  1782,   445,   446,     4,     5,     4,
       5,  1298,   445,   446,   445,   446,     3,   238,  2756,   409,
    1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1500,  1316,
     445,   446,     3,  1320,   136,  1322,   444,  1324,  1325,  1326,
    1327,  1328,   445,   446,   159,  1332,  1333,  1334,  2786,  1336,
     445,   446,   445,   446,   445,   446,   445,   446,  1345,   136,
    1347,  1348,   445,   446,   445,   446,  2804,   445,   446,   445,
     446,   445,   446,   445,   446,  1362,   445,   446,   445,   446,
    2818,   136,  1369,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,  2831,    36,     3,   445,   446,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  2847,
      36,   159,     3,     4,     5,     6,     7,     8,   445,   446,
     445,   446,   445,   446,    57,    58,    17,    18,   445,   446,
     445,   446,   445,   446,  1606,   136,    27,  1609,    94,  1611,
      51,  1613,   445,   446,   445,   446,   445,   446,   445,   446,
     445,   446,   445,   446,     3,  1442,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   281,    36,    65,   445,   446,   445,   446,   445,
     446,    72,   445,   446,   445,   446,    77,   445,   446,    80,
      81,   445,   446,   445,   446,   445,   446,     3,    89,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   444,    36,   444,  1514,   445,   446,
     197,  1518,   445,   446,    57,    58,   281,  1524,   443,   444,
     197,   445,   446,   445,   446,     3,  1533,     3,  1535,   443,
     444,   140,   445,   446,  1541,  1542,   281,   445,   446,    10,
      11,    12,    13,    14,    15,    16,   197,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     3,    36,   444,   178,   445,   446,
     445,   446,   183,   445,   446,    10,    11,    12,    13,    14,
      15,    16,   193,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    1607,    36,   445,   446,   443,   136,   281,   445,   446,  1060,
    1061,  1357,  1358,     3,   225,  1905,  1906,   281,   281,   197,
     281,   281,   281,   281,   281,   281,  1633,   281,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   254,    36,     3,   245,     4,     3,     8,
     443,    36,   263,     9,   444,   444,   444,   444,     3,  1666,
     444,   444,   444,   444,   444,   444,   444,    51,   444,     3,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   444,   320,
     444,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   444,
     444,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     444,   372,   373,   374,   375,  1772,   444,   446,   159,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
       3,   392,   393,   394,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     3,    36,
     444,   444,   444,   414,   444,   444,   444,   444,  1815,   444,
     444,  1818,   444,   424,   425,   444,     3,   444,   444,   444,
    1827,  1828,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,  1839,   444,   444,     3,   444,   444,   444,   444,
     444,  1848,  1849,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   444,    36,   444,  1865,  1866,
    1867,     3,   444,  1870,  1871,   444,  1873,   444,  1875,   444,
    1877,   444,   444,   444,   444,    16,   444,  1884,  1885,  1886,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,     3,     4,     5,     6,     7,     8,   444,    10,   444,
      12,  1908,  1909,   444,    16,    17,    18,   444,    20,   444,
     444,   444,   444,   266,    26,    27,    28,    29,    30,   444,
     444,   444,   444,   444,   444,   444,   444,   421,    40,   444,
     444,   444,   444,   444,   444,   444,   444,   444,    50,    51,
     444,  1948,    54,   444,   444,  1952,   444,    59,    60,    61,
      62,    63,   444,   444,    66,  1962,    68,    69,    70,   444,
     444,    73,    74,   444,    76,    77,    78,   444,     3,  1976,
      82,   444,   444,    28,   445,   446,   444,     3,     3,     3,
     266,     3,     3,   159,    96,     4,   159,    53,    53,   101,
      44,     3,   423,    71,   106,   107,   108,   277,   245,     3,
       3,   113,   114,   197,   116,   117,   118,   119,     3,   197,
     122,   446,   124,   125,   126,   127,   281,   129,     3,   131,
     132,   281,   134,   197,   136,   137,   277,   139,   140,   141,
     142,   281,   281,     3,   428,   418,   148,     3,   150,   277,
     152,   153,   281,   155,   156,   157,   158,   159,   160,   281,
     162,   163,   164,   165,   166,     3,     3,    28,     3,     3,
       3,     3,     3,     3,     3,   177,     3,   179,    74,   181,
     281,   281,    74,     3,     3,   281,     3,   281,   190,   281,
     192,   193,   194,   195,   196,   197,   198,     3,     3,   201,
     202,     3,     5,   447,   445,   207,   445,   209,   210,   211,
      36,   213,   445,   215,   445,   217,   218,   219,   220,   445,
     445,     3,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   444,     3,     3,     3,   445,   239,   240,   241,
       3,   163,   196,     3,     3,   271,     3,   249,   402,   251,
     252,   253,   274,   402,   271,   274,   258,     3,   260,   261,
     262,   273,     5,   274,   266,   445,   271,   274,   270,   271,
     274,   271,   274,   275,   276,   277,   273,    16,   274,   281,
       3,     3,  2179,  2180,     5,   277,    42,    42,  2185,     3,
    2187,     3,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,     3,
     322,   323,   324,   325,   326,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     3,    36,
    2247,  2248,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,     3,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   245,    36,     3,    13,    14,
      15,    16,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    2327,    36,    20,     3,     5,     3,   379,   217,     5,     5,
     442,   443,   444,   445,   446,   217,   448,    64,     3,   444,
     444,  2348,    10,    11,    12,    13,    14,    15,    16,   444,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   444,    36,   444,
     444,   444,   444,  2380,     3,   445,     3,     3,   446,     3,
       3,   197,    10,    11,    12,    13,    14,    15,    16,  2396,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   445,    36,   197,
      51,     3,  2419,   396,     3,   197,   444,   281,     3,   277,
       3,     3,   140,     4,   197,   277,   444,     3,     3,  2436,
       3,   198,   396,     3,     3,     3,     3,     3,     3,   241,
     445,   350,   350,   350,   445,     3,     4,     5,     6,     7,
       8,   445,    10,   445,    12,   350,  2463,  2464,    16,    17,
      18,   350,    20,   241,   444,   444,   444,   444,    26,    27,
      28,    29,    30,   136,   446,   164,   164,   164,   163,   163,
     197,   444,    40,     4,   271,     4,   411,   444,   411,   410,
       4,   136,    50,    51,     4,   433,    54,     4,   444,   433,
       4,    59,    60,    61,    62,    63,     3,   271,    66,   444,
      68,    69,    70,   271,   197,    73,    74,     3,    76,    77,
      78,    36,   197,   222,    82,   222,     3,     5,     4,   245,
       5,   245,     3,     3,   193,   197,     5,     4,    96,     5,
       5,     5,   447,   101,   444,   444,   213,     3,   106,   107,
     108,     3,  2559,   140,     3,   113,   114,     3,   116,   117,
     118,   119,   197,   397,   122,   101,   124,   125,   126,   127,
     444,   129,   418,   131,   132,   422,   134,   428,   136,   137,
       3,   139,   140,   141,   142,   444,    94,     3,   179,    63,
     148,     3,   150,    20,   152,   153,  2603,   155,   156,   157,
     158,   159,   160,   444,   162,   163,   164,   165,   166,   199,
      91,   447,   161,     4,   274,   445,  2623,   445,   446,   177,
     350,   179,   350,   181,   444,   350,   350,   350,   350,   444,
     350,   444,   190,     5,   192,   193,   194,   195,   196,   197,
     198,   350,     5,   201,   202,   350,   444,   241,     3,   207,
     412,   209,   210,   211,   444,   213,   140,   215,     3,   217,
     218,   219,   220,     3,   445,   444,   403,   179,    20,    20,
       4,    20,     3,   179,     4,     4,    20,   445,   446,   179,
       3,   239,   240,   241,   444,   444,     3,   444,   444,     3,
     222,   249,   164,   251,   252,   253,   164,   222,   445,   445,
     258,   445,   260,   261,   262,   445,   446,   445,   266,    78,
     445,   444,   270,   271,   268,   444,   274,   275,   276,   277,
     140,     3,    60,   281,   396,   444,   268,    10,    11,    12,
      13,    14,    15,    16,  2741,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   444,    36,   444,   245,   197,     3,   444,    20,
       3,    20,     4,     4,   322,   323,   324,   325,   326,     3,
       3,   444,   164,   444,   444,   164,     3,   445,   446,     4,
     444,     4,     6,     4,   212,   446,   444,   164,     3,     3,
     444,    51,   445,   445,   445,   444,     3,     4,     5,     6,
       7,     8,   444,    10,   444,    12,   444,   444,   444,    16,
      17,    18,   444,    20,   444,   141,   163,   445,   446,    26,
      27,    28,    29,    30,   444,     3,   445,   445,   445,   445,
     445,   444,   444,    40,   444,    20,   444,   446,     4,   446,
       5,     4,     4,    50,    51,     5,     4,    54,   274,   446,
       4,     4,    59,    60,    61,    62,    63,     5,   446,    66,
       5,    68,    69,    70,    94,     5,    73,    74,     4,    76,
      77,    78,     4,   444,   446,    82,     3,   193,     3,    52,
     444,   444,   444,   444,   442,   443,   444,   445,   446,    96,
     448,     3,   444,     4,   101,   164,   164,     5,   181,   106,
     107,   108,   213,   240,     4,     4,   113,   114,     3,   116,
     117,   118,   119,   444,     3,   122,     3,   124,   125,   126,
     127,     3,   129,     3,   131,   132,     3,   134,   444,   136,
     137,   444,   139,   140,   141,   142,   118,     3,     3,   266,
     268,   148,   444,   150,     3,   152,   153,     4,   155,   156,
     157,   158,   159,   160,   101,   162,   163,   164,   165,   166,
      20,     4,    20,   140,    20,    20,     3,   446,   258,    20,
     177,   444,   179,     4,   181,   197,   351,   350,    94,   350,
      63,   444,   444,   190,   444,   192,   193,   194,   195,   196,
     197,   198,   445,   148,   201,   202,     3,   445,   445,   444,
     207,   445,   209,   210,   211,   445,   213,     3,   215,   446,
     217,   218,   219,   220,    12,    12,   433,    59,     4,   432,
     179,     4,     4,     3,   446,   446,     5,     3,     3,    51,
     444,     5,   239,   240,   241,     5,   444,   444,     4,    60,
     445,    60,   249,     3,   251,   252,   253,   445,   445,   445,
     217,   258,   446,   260,   261,   262,   444,   444,   277,   266,
     446,   140,   444,   270,   271,   444,   444,   274,   275,   276,
     277,   268,     5,     4,   281,   445,     4,   445,     5,     4,
     271,    10,    11,    12,    13,    14,    15,    16,   444,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     3,    36,   444,   444,
     164,   164,    63,   446,   198,   322,   323,   324,   325,   326,
      10,    11,    12,    13,    14,    15,    16,    88,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   445,    36,     3,     4,     5,
       6,     7,     8,   444,    10,   444,    12,   445,   445,   445,
      16,    17,    18,   446,    20,   445,   413,     3,    20,   446,
      26,    27,    28,    29,    30,   164,   446,   164,     5,    20,
     446,     5,     5,   446,    40,     4,     4,    18,    43,     3,
     444,   444,   164,   445,    50,    51,   445,   445,    54,     3,
     445,     3,    60,    59,    60,    61,    62,    63,   118,     3,
      66,    78,    68,    69,    70,   444,   136,    73,    74,     3,
      76,    77,    78,     3,   444,    63,    82,   444,   444,    63,
       3,     3,   444,     3,   124,   442,   443,   444,   445,   446,
      96,   448,    63,   445,   445,   101,   445,   350,   350,   350,
     106,   107,   108,   350,     5,   445,   445,   113,   114,     5,
     116,   117,   118,   119,     5,     5,   122,     3,   124,   125,
     126,   127,   446,   129,   445,   131,   132,    20,   134,     4,
     136,   137,    20,   139,   140,   141,   142,     4,     4,   446,
     446,   269,   148,   207,   150,     3,   152,   153,     3,   155,
     156,   157,   158,   159,   160,     5,   162,   163,   164,   165,
     166,     5,    60,   277,   445,    77,   131,   156,   166,   276,
     444,   177,   217,   179,   444,   181,   207,     5,     3,   423,
     416,   204,    20,   446,   190,     3,   192,   193,   194,   195,
     196,   197,   198,   101,     3,   201,   202,   445,   214,   445,
     140,   207,   445,   209,   210,   211,   446,   213,   446,   215,
     445,   217,   218,   219,   220,   446,     4,   445,     4,   445,
     445,   444,   444,     4,   445,   444,   444,     4,   445,     3,
      60,   445,   445,   239,   240,   241,     5,     3,     3,     3,
      20,     3,     3,   249,   446,   251,   252,   253,   445,   444,
     446,   445,   258,   444,   260,   261,   262,   445,   444,   444,
     266,     4,     4,   446,   270,   271,     4,   159,   274,   275,
     276,   277,     4,     3,    18,   281,   207,   445,   444,    10,
      11,    12,    13,    14,    15,    16,   445,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    48,    36,     3,    51,     3,    53,
       4,     3,    56,    20,     3,     3,   322,   323,   324,   325,
     326,   231,   445,     4,   445,   231,   445,    71,   445,     3,
      20,   446,   445,   445,    78,    79,   445,     3,   245,     3,
     445,   445,   445,   445,   180,   240,   180,   446,     3,     4,
       5,     6,     7,     8,   446,    10,   445,    12,     5,   444,
     444,    16,    17,    18,   444,    20,   445,   446,   229,   113,
     446,    26,    27,    28,    29,    30,   445,   445,   445,   445,
       3,     5,     3,   228,   446,    40,     5,   445,   444,     3,
     271,   446,   151,    97,   446,    50,    51,   445,   174,    54,
     197,   250,   445,   197,    59,    60,    61,    62,    63,   191,
       5,    66,   191,    68,    69,    70,     5,   174,    73,    74,
     164,    76,    77,    78,  1535,  2178,  1348,    82,  2250,   547,
     698,  1902,   688,  1240,   856,  1637,   442,   443,   444,   445,
     446,    96,   448,   211,  2483,  1175,   101,   864,  2144,   193,
    2766,   106,   107,   108,  1178,  2677,  2150,   201,   113,   114,
    1486,   116,   117,   118,   119,   734,  1396,   122,  1480,   124,
     125,   126,   127,  1471,   129,  2495,   131,   132,  1746,   134,
    1186,   136,   137,  1091,   139,   140,   141,   142,  2330,  2132,
    2777,   142,   536,   148,  1221,   150,  1792,   152,   153,  2380,
     155,   156,   157,   158,   159,   160,  1769,   162,   163,   164,
     165,   166,  2347,  1159,  1966,  1781,   879,   261,  2830,   256,
     487,    -1,   177,    -1,   179,    -1,   181,   769,    -1,    -1,
      -1,  1142,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,   446,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   442,   443,   444,
     445,   446,    96,   448,    -1,    -1,    -1,   101,    -1,    -1,
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
     274,   275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,   446,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   442,   443,
     444,   445,   446,    96,   448,    -1,    -1,    -1,   101,    -1,
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
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
     323,   324,   325,   326,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,   446,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   442,
     443,   444,   445,   446,    96,   448,    -1,    -1,    -1,   101,
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
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,   446,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     442,   443,   444,   445,   446,    96,   448,    -1,    -1,    -1,
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
     281,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,   446,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   442,   443,   444,   445,   446,    96,   448,    -1,    -1,
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
      -1,   281,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
     446,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   442,   443,   444,   445,   446,    96,   448,    -1,
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
      -1,    -1,   281,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,   446,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   442,   443,   444,   445,   446,    96,   448,
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
      -1,    -1,    -1,   281,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,   446,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   442,   443,   444,   445,   446,    96,
     448,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
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
     277,    -1,    -1,    -1,   281,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,   446,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   442,   443,   444,   445,   446,
      96,   448,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
     276,   277,    -1,    -1,    -1,   281,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,   446,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   442,   443,   444,   445,
     446,    96,   448,    -1,    -1,    -1,   101,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,   446,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   442,   443,   444,
     445,   446,    96,   448,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,
      17,    18,    -1,    -1,    -1,   249,    -1,   251,   252,   253,
      27,    28,    -1,    -1,   258,    -1,   260,   261,   262,    -1,
      -1,    -1,   266,    40,    -1,    -1,   270,   271,    -1,    -1,
     274,   275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,   110,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,   146,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   446,    10,
      11,    12,    13,    14,    15,    16,   193,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,   442,   443,
     444,   445,   446,    -1,   448,    -1,    -1,    -1,   225,   226,
      -1,    -1,    -1,    -1,    -1,    -1,   233,   234,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    27,    -1,    -1,    -1,    -1,   424,   425,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,   444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,    12,
      13,    14,    15,    16,    89,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     446,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,   193,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,    -1,   446,    -1,   232,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,   263,    -1,
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
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   424,
     425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   444,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,
      11,    12,    13,    14,    15,    16,    89,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   446,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     446,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,
     193,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   446,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   275,    -1,   446,    -1,    -1,    -1,   281,   282,
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
      -1,   414,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,   424,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    10,    11,    12,    13,    14,    15,    16,    89,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   446,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   446,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   183,    -1,    -1,    -1,    -1,    -1,    -1,   446,
      -1,    -1,   193,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   446,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    10,    11,    12,    13,    14,    15,    16,
      89,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   136,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   446,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,
      -1,   446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   446,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,
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
      17,    18,    -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    10,    11,    12,    13,    14,
      15,    16,    89,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   446,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   446,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   225,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,
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
      -1,    -1,    27,    -1,    -1,    -1,    -1,   424,   425,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,    12,
      13,    14,    15,    16,    89,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   446,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   446,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   183,    -1,
      -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,   193,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
     225,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,   263,    -1,
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
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   424,
     425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   444,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,
      11,    12,    13,    14,    15,    16,    89,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   446,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     446,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   446,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,
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
      -1,   414,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,   424,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    10,    11,    12,    13,    14,    15,    16,    89,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   446,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   446,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,   446,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   225,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   444,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    10,    11,    12,    13,    14,    15,    16,
      89,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   446,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   446,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,
      -1,   446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   225,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   446,   263,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   444,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   446,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     321,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,   446,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   446,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   445,    18,    19,    20,    21,    22,
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
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   445,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     445,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   445,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,   445,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   445,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   445,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,   445,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   445,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   445,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   445,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     445,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   445,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   445,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   445,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   445,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   445,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   445,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   445,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   445,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   445,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   445,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   445,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   445,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   445,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     445,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   445,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   445,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   445,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   445,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   445,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   445,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   445,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   445,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   445,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   445,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   445,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   445,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   445,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   445,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   445,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   445,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   445,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   445,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   445,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   445,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   445,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   445,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     445,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   445,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   445,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   445,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   445,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   445,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   445,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   445,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   445,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     445,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   445,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   445,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   445,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   445,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   445,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   445,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   445,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   445,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   445,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   445,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     445,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   445,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   445,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   445,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   445,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   445,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   445,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   445,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     445,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   445,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    -1,    10,
      11,    12,    13,    14,    15,    16,   445,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     445,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
     445,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    37,    -1,    -1,    -1,    41,   102,
      -1,    -1,    -1,    -1,    -1,    39,    -1,   445,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,   139,    53,
      -1,    -1,    56,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,   155,   138,   139,    71,    -1,    -1,
      -1,   445,    -1,    86,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,   108,    -1,    -1,   445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   445,   130,    -1,   219,   202,
     221,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,   219,    -1,   221,    -1,
      -1,    -1,   445,    -1,   227,   168,   169,   170,    -1,    -1,
     164,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,   247,    -1,    -1,    -1,    -1,   445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,   193,
      -1,    -1,    -1,   206,    -1,   208,    -1,   201,    -1,    -1,
      -1,    -1,    -1,   216,    -1,    -1,   445,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,    -1,
      -1,    -1,    -1,   445,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,    -1,    -1,   261,    -1,    -1,
     445,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,
      -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,   445,    -1,
      -1,    -1,   395,    -1,    -1,    -1,   417,    -1,    -1,    -1,
      -1,   404,    -1,    -1,    -1,   426,    -1,    -1,   429,    -1,
      -1,    -1,    -1,   434,   417,   445,   437,    -1,    -1,    -1,
      -1,    -1,    -1,   426,    -1,    -1,   429,    -1,    -1,    -1,
      -1,   434,    -1,    -1,   437,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   445,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   419,   420,   445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,    -1,    -1,
      -1,   434,    -1,    -1,   437,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,    -1,    -1,    -1,   109,    -1,   111,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,   147,    61,    62,    -1,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,   114,   115,   116,   117,
       3,    -1,    -1,    -1,    -1,   123,    49,    10,    11,    12,
      13,    14,    15,    16,   132,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,   182,    -1,    -1,   185,    -1,   112,
     188,   189,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   239,   240,    -1,    -1,   243,   244,    -1,    -1,    -1,
      -1,   249,    -1,   251,    -1,    -1,    -1,    -1,   256,   257,
      -1,    -1,    -1,    -1,   262,    -1,   264,    -1,    -1,    -1,
     253,    -1,   270,    -1,   272,   273,    -1,    -1,    -1,    -1,
     278,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    51,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    50,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     395,   404,   419,   420,   429,   434,   437,   450,   489,   490,
     530,   534,   536,   543,   544,   547,   549,   550,   552,   553,
     554,   559,   560,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   584,   585,   586,   587,   588,   589,   590,   592,   595,
     602,   603,   605,   621,   622,   631,   634,   636,   637,   638,
     661,   664,   671,   672,   675,   678,   679,   682,   219,   252,
     371,   404,   426,   252,     3,    10,    95,   102,   138,   139,
     155,   202,   219,   221,   227,   246,   247,   261,   371,   395,
     404,   417,   426,   429,   434,   437,   643,     3,   531,    95,
     139,   155,   202,   219,   221,   227,   252,   371,   395,   404,
     417,   426,   429,   434,   437,   613,     3,     3,     3,    28,
     252,   252,   613,     8,   227,   662,   663,   509,   252,   613,
     632,     3,    95,   398,   399,   400,   107,   398,   399,   400,
     407,   417,   417,   255,   322,   430,   431,   107,   407,   435,
     436,   438,   441,     0,   442,   546,     3,     3,     3,     3,
     396,     3,   444,   216,   156,   635,     3,   155,     3,     3,
      85,   156,     3,     3,     3,   635,   246,   155,   635,   396,
     396,     3,   156,     3,   156,     3,   396,   396,   252,   623,
       3,   136,   154,   176,   203,   532,     3,   156,     3,   156,
       3,     3,   156,     3,   156,     3,     3,   156,     3,   156,
       3,   156,   396,   396,     3,   156,     3,   156,     3,   396,
     396,   103,   146,   154,   159,   176,   614,   171,   446,     3,
       3,   614,     9,    20,     3,   113,   446,     3,     4,     5,
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
     425,   444,   451,   510,   511,     3,   154,   176,     3,   167,
     173,   381,   444,   513,   514,   515,   516,   519,   529,     3,
     159,   401,   136,   136,   136,   159,   136,   409,     3,     3,
       3,   136,   444,   159,   136,   136,     3,   159,   136,    94,
     191,   439,   450,    54,    55,    74,   210,   277,   443,   591,
     100,   120,    38,    75,   100,   108,   120,   187,   208,   240,
     269,    55,   208,   680,     3,   100,   120,     3,     4,     5,
       6,     7,     8,   193,   445,   673,   674,   139,   202,   281,
       3,    51,     3,   444,   197,     3,   156,   281,   444,    39,
      59,   676,   197,     3,     3,    85,   156,     3,     3,   156,
       3,   156,   140,   281,   197,   281,     3,     3,   156,     3,
     156,   635,   444,   624,   443,   533,     3,   532,   136,   446,
     281,   281,   281,   281,   197,   281,    74,   210,   535,   281,
     281,     3,   156,     3,   156,   281,   281,     3,   156,     3,
     156,     3,   156,     3,     4,   245,     3,   451,   451,   663,
     443,   444,     9,   451,   451,   451,   275,   451,   488,   443,
     444,    36,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   451,     3,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    36,    51,   512,   136,   159,   446,   446,
     443,   512,   444,     3,   444,   490,   513,   240,   446,    76,
     153,   177,   190,   215,   238,   520,   522,    51,   518,   518,
       3,   159,     3,     3,     3,     3,     3,    16,   266,   421,
       3,    28,     3,     3,     3,   266,     3,     3,     4,   159,
     159,    53,    53,    44,     3,   108,   258,   593,    71,    84,
       3,    84,    71,   217,     3,    71,    84,   422,    71,   217,
       3,    84,     3,    71,    84,   423,    71,   277,   245,    18,
     184,   376,   377,   378,   379,   681,   100,   120,   445,   446,
       3,     3,    61,    62,    64,    66,    67,    82,   114,   115,
     116,   117,   123,   132,   152,   160,   175,   182,   185,   188,
     189,   205,   239,   240,   243,   244,   249,   251,   256,   257,
     262,   264,   270,   272,   273,   278,   657,   197,     3,    16,
     150,   195,   665,   666,   667,     3,   197,   281,     3,   665,
     107,   157,   258,   398,   677,     3,   404,   197,     3,   156,
     281,   680,   277,   548,   281,   555,   281,   418,     3,   428,
       3,   277,   580,   281,   281,     3,     3,   625,   136,   245,
     626,    28,   274,   491,   266,   513,     3,     3,     3,     3,
       3,     3,   404,     3,     3,     3,    74,   281,    74,   281,
       3,     3,   281,   281,   281,   240,   444,   615,     3,   240,
     615,     3,   451,   456,   460,   451,   451,   488,   124,   125,
     275,     3,     3,   447,   458,   465,   451,    65,   178,   254,
     451,   486,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   445,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   445,   451,   451,
     451,   445,   451,   451,   451,   451,   451,   451,    28,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     445,   445,   445,   445,   445,   451,   451,   445,   445,   445,
     451,   451,     5,   445,   445,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   445,   451,   451,
     451,   445,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   445,   451,   451,   445,   451,   451,   451,   451,
     451,     6,    18,   193,   319,   444,    13,    14,    16,    19,
     451,    40,    47,   232,   444,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,     3,   513,     3,   511,     3,   545,     3,   133,   154,
     267,   526,   517,   512,   451,   445,   445,     3,   633,   514,
     177,   215,   523,   515,   163,   196,   521,     3,     3,   271,
       3,   402,   402,   274,   271,   274,     3,   273,     5,   274,
     445,   271,   274,   274,   273,   271,   274,    16,     3,     3,
       5,   591,    42,    42,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,   657,     3,   245,     3,     3,    20,
       3,     5,     3,   379,     5,     5,   277,     5,    63,     5,
     217,   217,   674,   444,   444,   444,   653,   653,   653,   653,
     653,   653,   444,   653,   653,   653,    64,   654,   654,   653,
     653,   653,   444,   654,   653,   654,   444,   444,   444,    18,
      36,    78,   113,     3,   657,     3,     3,     3,   445,   446,
     266,   444,     3,     3,   197,   445,   197,    51,   596,   396,
       3,   197,   281,     3,   444,     3,   277,   556,     3,     3,
     140,     4,   197,   444,   277,   581,     3,     3,   154,   216,
     351,   443,   444,   659,   660,   445,   446,     4,   236,   237,
     627,   451,   198,   501,   513,   491,   533,   396,   535,     3,
       3,     3,     3,     3,     3,   620,     3,   616,   271,   490,
     620,   271,   490,   446,   445,   253,   124,   125,   451,   451,
     445,   451,   457,   490,   136,   446,   445,   136,   451,   446,
     446,   446,   445,   445,   445,   445,   445,   445,   446,   446,
     446,   446,   445,   446,   446,   446,   445,   445,   445,   445,
     446,   446,   445,   446,   445,   445,   445,    51,   446,   446,
     446,   446,   321,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   446,   446,   446,   445,   446,   350,   350,
     350,   445,   446,   445,   446,   445,   350,   350,   446,   445,
     445,   445,   445,   445,   445,   445,   445,   446,   446,   446,
     446,   446,   446,   446,   446,   445,   446,   445,   445,   445,
     446,   445,   446,   445,   446,   446,   446,   446,   446,   445,
     445,   445,   446,   446,   446,   445,   446,     6,   193,   461,
     463,   451,   451,   444,   451,    50,   444,   444,   444,   452,
     447,   140,   505,   136,   446,   512,   164,   164,   164,   490,
     526,   445,    20,   443,   446,   491,   521,   521,   163,   197,
     515,   163,   444,   271,     4,     4,   411,   444,   411,   410,
       4,   433,   136,   444,   433,     4,     4,   444,     4,     3,
     271,   271,    45,    46,   593,   197,   197,    78,   134,   201,
     261,   657,   657,     3,   222,   222,   652,   657,     3,   245,
     245,     4,     5,     5,     3,     3,   665,   665,     5,   655,
     656,   655,   655,     4,   658,   655,   655,   655,   656,   656,
     655,   655,   655,   658,   656,   655,   656,     5,     5,     5,
     193,   447,   444,   451,   444,   657,   657,   657,   213,   667,
     268,   391,     3,   327,   328,   329,   330,   541,   542,   266,
     444,   197,     3,    51,    60,     3,   404,   223,   224,   140,
     597,     3,   266,   444,     3,     3,   197,   397,   548,   444,
     555,   418,   101,   428,   422,   444,   580,    94,     3,    71,
      78,   134,   138,   155,   164,   201,   261,   644,   645,   651,
     518,     3,    87,    99,   135,   143,   193,   242,   277,   444,
     628,   629,   630,    63,   179,   504,   491,     3,    20,   199,
     446,   606,   445,   446,   444,   617,   606,   617,   606,   456,
     451,   451,   124,   253,    91,   446,   447,   445,   451,   451,
     451,   136,   161,   487,   487,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   657,   657,   451,   451,
     451,     4,   350,   350,   350,   350,   350,   350,   451,   451,
     451,   451,   444,   444,   444,   350,     5,   350,     5,   350,
     444,   444,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   456,   490,   462,   464,    50,   451,   455,
     451,   453,   459,   454,   459,   490,   412,   491,   513,     3,
     526,   140,   527,   527,   527,   445,   518,   451,     3,     3,
     501,   515,   451,   197,   266,   524,   525,   515,     4,   193,
     551,   444,   403,   179,    20,     4,   193,   561,    20,     4,
     179,    20,     3,     4,    20,   179,   274,     4,   179,    51,
     440,   444,   444,     3,   594,   594,   444,   164,   164,   444,
     652,   652,   657,    18,    39,    48,    51,    53,    56,    71,
      78,    79,   113,   130,   164,   193,   201,   261,   604,   652,
       3,     3,   222,   222,   445,   445,   445,   446,   259,   280,
      82,    83,   445,   446,   445,   445,   445,   445,    78,   451,
     541,    62,    66,   114,   117,   132,   152,   160,   249,   251,
     270,   668,   444,   444,   444,   444,   444,   444,   445,   446,
     268,   541,     3,   266,   444,    60,   669,   140,   396,    40,
     107,   157,   241,   258,   245,   598,   596,   268,   541,   266,
     444,   197,     3,    20,   405,   406,   557,   558,   556,     3,
       4,     4,    20,   405,   406,   582,   583,   581,     3,   444,
     659,     3,   444,   164,   155,   164,   444,   444,   164,   444,
     445,   446,     3,   490,     4,    87,   249,     6,     4,     4,
     444,   629,   446,     3,     5,   502,   503,   451,   212,   683,
     113,   451,   164,     3,     3,   113,   451,   619,   446,   606,
     606,   124,   451,   444,   457,   140,   445,   445,   446,   445,
     451,   451,   445,   445,   445,   445,   445,   446,   446,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   446,
     445,   444,   444,   444,   444,   444,   444,   445,   446,   446,
     445,   445,   466,   467,   468,   444,   445,   446,   444,   445,
     446,   444,   484,   485,   445,   446,   446,   446,   445,   445,
     446,   446,   445,   446,   445,   446,   445,   446,   445,   445,
     445,   445,   445,   445,   446,   446,   446,   445,   445,   445,
     456,   490,   451,   490,   490,   445,   490,   445,   445,    51,
     141,   492,   491,   163,   444,   444,   444,     3,    20,    20,
     443,   504,   451,   444,   525,   446,   551,     4,     5,     4,
     446,     4,     5,     4,   274,   446,     4,     5,     4,   446,
       5,    94,     5,     4,     4,   446,   277,   451,   444,   444,
       3,   650,   604,   604,   652,   193,     3,   444,   444,   444,
      52,     3,   444,     4,     4,     5,     6,     7,    72,   333,
     334,   335,   444,   164,   164,   604,   213,    51,    60,     5,
     240,     4,   656,     4,   656,   656,   444,   445,   445,    51,
      60,   541,     3,     3,     3,     3,     3,     3,   444,   445,
     444,   268,   391,   541,   669,     3,     4,     5,     6,     7,
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
     275,   276,   277,   281,   322,   323,   324,   325,   326,   442,
     443,   444,   445,   446,   448,   670,   118,     3,     3,   599,
     266,   600,   597,   444,   445,   268,   541,     3,   266,   444,
       4,    20,    20,   445,   446,   101,     4,    20,    20,   445,
     446,   140,   644,    78,   134,   201,   261,   451,   444,   444,
     444,     3,   508,   508,   444,   650,   640,   659,   645,   657,
     629,   445,   630,    49,   112,   443,   494,   494,   446,   181,
     446,     3,    28,   684,   258,    20,   445,   446,   618,   197,
     608,     4,   451,   451,   445,   104,   105,   109,   111,   144,
     145,   147,   278,   279,   451,   451,   451,   470,   471,   469,
     472,   473,   474,   451,   451,   351,   497,   497,   497,   475,
     350,     4,     5,   479,   350,     4,     5,   483,   497,   497,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   445,   445,   445,   445,   445,    94,    63,   148,   496,
     492,     3,   528,   528,   528,   444,   451,   451,     3,   683,
     508,   551,   446,    12,   561,    12,    59,   433,     4,   432,
     179,     4,     4,   446,   446,     3,     5,   445,     3,   647,
       3,   646,   445,   446,   604,     5,   451,     5,    51,    78,
     201,   261,   451,   444,   444,   444,   451,   668,    60,   669,
     445,     4,   451,    60,   669,   445,     3,   537,   445,   445,
     445,   446,   541,   541,   444,   444,   445,   124,   669,   669,
     669,   669,   669,   669,   217,   140,   446,   444,   277,   601,
     598,   541,   444,   445,   444,   268,   541,   445,     5,     4,
     558,     4,   445,     5,     4,   583,   271,   445,   444,   164,
     164,   444,   445,   647,   508,   508,   445,   446,   445,   646,
     445,    48,   172,   197,   228,   277,   351,   639,   652,   445,
       3,   503,   451,   451,   446,   607,   113,   451,   113,   451,
     444,    88,   683,   445,   445,   445,   445,   445,   445,   497,
     497,   497,   497,   497,   497,   445,   446,   445,    63,   198,
     499,   499,   499,   497,   444,   445,   445,   497,   444,   445,
     445,   497,   499,   499,   445,   445,   445,   445,   445,   446,
     445,   445,   446,   446,   446,   413,   451,   493,   451,   501,
     496,   445,   446,   445,   445,     3,    20,   445,   446,   551,
     164,   446,   164,     5,    20,   446,     5,     5,   446,     4,
       4,    43,    18,   445,   446,   445,   446,     3,   445,   446,
     445,   445,   446,   444,   444,   164,   445,   445,   445,   445,
     445,    51,    60,   669,   124,   445,   669,   124,   445,     3,
     445,   445,   541,     3,   124,   124,   124,   124,   124,   124,
      60,   118,     3,   451,    78,   600,   445,   541,   541,   444,
     445,   136,   640,   659,   451,   444,   444,   650,   445,   445,
     445,     3,   445,     5,    20,   444,     3,    63,   415,   444,
      63,   494,     3,     3,   612,   619,   444,   609,   499,   499,
     499,   499,   499,   499,   451,     3,   498,    63,   445,   445,
     445,   499,   476,   350,   350,   499,   480,   350,   350,   499,
     445,   445,   451,     5,     5,     5,     5,   494,   277,   446,
     495,   504,   501,     3,   445,   451,   551,   446,    20,   561,
      20,     4,     4,     4,   446,   446,   269,   207,     3,     3,
       5,    57,    58,     5,   451,   451,    60,   669,   124,   124,
     277,   538,   445,   445,   537,    77,   131,   156,   166,   276,
     669,   217,   445,   444,   601,   445,   445,   541,   444,   445,
     647,   646,   445,   207,     5,     3,   107,   248,   204,   268,
     416,   423,   204,    20,   446,   445,     3,   101,   610,   445,
     445,   445,   445,   445,   445,   445,   446,     3,   500,   445,
     497,   444,   444,   445,   497,   444,   444,   445,   445,   445,
     446,   446,   214,   451,   140,   506,   504,   446,   551,     4,
     445,   446,     4,   445,   446,   445,   446,     4,     4,     3,
     445,   445,   445,   445,   669,   124,   444,   445,   124,    60,
     451,   445,     5,   445,   445,     3,   445,     3,     3,   444,
     444,    20,   444,   451,     3,   445,   446,    90,   258,     3,
     494,   446,   499,   477,   478,   499,   481,   482,     4,     4,
     494,   230,   258,   159,   507,   551,   446,   561,     4,     4,
     445,   445,   446,   444,    57,    58,   124,     3,   539,   540,
     538,   669,   445,   445,   207,   443,   444,     3,     3,     4,
       3,    20,     3,   611,     3,   445,   497,   497,   445,   497,
     497,   445,   445,   231,   231,   508,   446,   551,   445,   445,
     445,     4,     3,   648,    20,   445,   446,   124,   245,     3,
       3,   648,   445,   445,   445,   445,   451,   240,   494,   499,
     499,   499,   499,   180,   180,   551,   446,   445,   445,   446,
       5,   540,   444,   443,   444,   444,   445,   444,   229,   612,
     445,   445,   445,   445,   446,   551,   649,     3,     5,     3,
     648,   648,   649,   228,   641,   642,     5,   551,   446,    18,
      97,   183,   197,   445,   444,   445,   445,    18,     3,   445,
     446,   446,   551,    97,   269,   151,   137,   200,   235,   107,
     258,   648,   649,   649,   271,   642,   551,   446,    98,   149,
      74,   192,   210,   240,    74,   192,   210,   240,   445,   174,
     445,   551,   113,   193,   113,   193,   649,   250,   445,     4,
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
#line 535 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 541 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 542 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 544 "parser/evoparser.y"
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
#line 557 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 559 "parser/evoparser.y"
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
#line 587 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 595 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 603 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 609 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 616 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 617 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 618 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 619 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 620 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 621 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 622 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 623 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 624 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 625 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 626 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 627 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 628 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 629 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 630 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 631 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 632 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 633 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 634 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 636 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 641 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 642 "parser/evoparser.y"
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
#line 650 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 651 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 652 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 653 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 654 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 655 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 660 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 662 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 665 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 666 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 667 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 668 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 669 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 672 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 673 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 677 "parser/evoparser.y"
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
#line 686 "parser/evoparser.y"
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
#line 704 "parser/evoparser.y"
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
#line 713 "parser/evoparser.y"
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
#line 732 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 733 "parser/evoparser.y"
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
#line 793 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 802 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 808 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 813 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 815 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 817 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 822 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 827 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 832 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 840 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 842 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 844 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 846 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 848 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 850 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 852 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 854 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 856 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 858 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 865 "parser/evoparser.y"
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
#line 876 "parser/evoparser.y"
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
#line 886 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 890 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 890 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 891 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 891 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 892 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 893 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 900 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 901 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 908 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 909 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 919 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 923 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 924 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 925 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 926 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 927 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 928 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 929 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 930 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 934 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 935 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 936 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 937 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 938 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 939 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 941 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 942 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 943 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 944 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 945 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 946 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 947 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 948 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 949 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 950 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 951 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 952 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 954 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 955 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 956 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 957 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 958 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 959 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 960 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 961 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 962 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 963 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 964 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 965 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 966 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 967 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 968 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 969 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 971 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 972 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 973 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 974 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 975 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 976 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 979 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 980 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 981 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 982 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 983 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 984 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 985 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 986 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 987 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 988 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 989 "parser/evoparser.y"
    { emit("CALL 1 TOKEN_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_TOKEN_LENGTH, (yyvsp[(3) - (4)].exprval), "token_length"); ;}
    break;

  case 150:
#line 990 "parser/evoparser.y"
    { emit("CALL 2 EVO_CALL_EXTERNAL"); (yyval.exprval) = expr_make_func2(EXPR_PG_CALL_EXTERNAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "evo_call_external"); ;}
    break;

  case 151:
#line 991 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 992 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 153:
#line 993 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 154:
#line 994 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 155:
#line 995 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 156:
#line 996 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 157:
#line 997 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 158:
#line 998 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 159:
#line 999 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 160:
#line 1000 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 161:
#line 1001 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 162:
#line 1002 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 163:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 164:
#line 1004 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 165:
#line 1005 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 166:
#line 1006 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 167:
#line 1007 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 168:
#line 1008 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 169:
#line 1009 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 170:
#line 1010 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 171:
#line 1011 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 172:
#line 1012 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 173:
#line 1013 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 174:
#line 1014 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 175:
#line 1016 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 176:
#line 1017 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 177:
#line 1018 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 178:
#line 1019 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 179:
#line 1020 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 180:
#line 1021 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 181:
#line 1022 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 182:
#line 1023 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 183:
#line 1025 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 184:
#line 1026 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 185:
#line 1027 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 186:
#line 1028 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 187:
#line 1029 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 188:
#line 1030 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 189:
#line 1031 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 190:
#line 1032 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 191:
#line 1033 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 192:
#line 1034 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 193:
#line 1035 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 194:
#line 1036 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 195:
#line 1037 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 196:
#line 1038 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 197:
#line 1039 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 198:
#line 1040 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 199:
#line 1041 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 200:
#line 1042 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 201:
#line 1043 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1044 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 203:
#line 1045 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 204:
#line 1046 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 205:
#line 1048 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 206:
#line 1049 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 207:
#line 1050 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 208:
#line 1051 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 209:
#line 1052 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 210:
#line 1054 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 211:
#line 1055 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 212:
#line 1057 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 213:
#line 1058 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 214:
#line 1059 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 215:
#line 1061 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 216:
#line 1062 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 217:
#line 1063 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 218:
#line 1064 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 219:
#line 1071 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 220:
#line 1078 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 221:
#line 1085 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1089 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1093 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 224:
#line 1097 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 225:
#line 1101 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 226:
#line 1105 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 227:
#line 1111 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 228:
#line 1112 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 229:
#line 1113 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 230:
#line 1117 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 231:
#line 1123 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 232:
#line 1129 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 233:
#line 1130 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1131 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1132 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 236:
#line 1133 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 237:
#line 1134 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 238:
#line 1135 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1136 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 240:
#line 1137 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 241:
#line 1141 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1143 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 243:
#line 1145 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 244:
#line 1147 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 245:
#line 1151 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 246:
#line 1159 "parser/evoparser.y"
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
#line 1169 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 248:
#line 1170 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 249:
#line 1173 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 250:
#line 1174 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 251:
#line 1178 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1186 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 253:
#line 1194 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 254:
#line 1202 "parser/evoparser.y"
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
#line 1216 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 256:
#line 1225 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 257:
#line 1231 "parser/evoparser.y"
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
#line 1244 "parser/evoparser.y"
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
#line 1257 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 262:
#line 1259 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 263:
#line 1262 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 264:
#line 1269 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 265:
#line 1277 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1278 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1279 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1282 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1283 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 271:
#line 1287 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1296 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 275:
#line 1298 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 278:
#line 1306 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 279:
#line 1308 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 284:
#line 1320 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 285:
#line 1326 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 286:
#line 1333 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 287:
#line 1341 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 288:
#line 1342 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 289:
#line 1343 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1344 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 292:
#line 1356 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 293:
#line 1359 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 294:
#line 1360 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 295:
#line 1361 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 296:
#line 1362 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1363 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 299:
#line 1367 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 300:
#line 1370 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1371 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 302:
#line 1374 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1375 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 304:
#line 1376 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 305:
#line 1377 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 306:
#line 1378 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 307:
#line 1379 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 308:
#line 1380 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 309:
#line 1381 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 310:
#line 1382 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 311:
#line 1385 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 312:
#line 1386 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 313:
#line 1388 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 314:
#line 1396 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 315:
#line 1401 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 316:
#line 1402 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 317:
#line 1403 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 318:
#line 1406 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 319:
#line 1407 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1416 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 323:
#line 1424 "parser/evoparser.y"
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
#line 1433 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 325:
#line 1434 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 326:
#line 1436 "parser/evoparser.y"
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
#line 1445 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 328:
#line 1450 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 329:
#line 1456 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 330:
#line 1463 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 331:
#line 1467 "parser/evoparser.y"
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
#line 1487 "parser/evoparser.y"
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
#line 1513 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 336:
#line 1515 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 337:
#line 1517 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 338:
#line 1519 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1521 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 340:
#line 1524 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 341:
#line 1525 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1526 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 343:
#line 1529 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 344:
#line 1530 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 345:
#line 1533 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 346:
#line 1534 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 347:
#line 1537 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 348:
#line 1538 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 349:
#line 1539 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1546 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 353:
#line 1547 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 354:
#line 1552 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 355:
#line 1554 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1556 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 358:
#line 1560 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1561 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 360:
#line 1564 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 361:
#line 1565 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 362:
#line 1568 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 363:
#line 1573 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 364:
#line 1583 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 365:
#line 1590 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 366:
#line 1591 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 367:
#line 1592 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 368:
#line 1593 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 369:
#line 1598 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1602 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 371:
#line 1604 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 374:
#line 1610 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 375:
#line 1615 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 376:
#line 1622 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 377:
#line 1629 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 379:
#line 1641 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 380:
#line 1642 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 381:
#line 1647 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 382:
#line 1654 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 383:
#line 1661 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1669 "parser/evoparser.y"
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
#line 1679 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 386:
#line 1687 "parser/evoparser.y"
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
#line 1697 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 388:
#line 1705 "parser/evoparser.y"
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
#line 1714 "parser/evoparser.y"
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
#line 1723 "parser/evoparser.y"
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
#line 1733 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 392:
#line 1741 "parser/evoparser.y"
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
#line 1750 "parser/evoparser.y"
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
#line 1759 "parser/evoparser.y"
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
#line 1769 "parser/evoparser.y"
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
#line 1778 "parser/evoparser.y"
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
#line 1795 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 398:
#line 1803 "parser/evoparser.y"
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
#line 1814 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 400:
#line 1816 "parser/evoparser.y"
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
#line 1829 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 402:
#line 1830 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 403:
#line 1833 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 404:
#line 1835 "parser/evoparser.y"
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
#line 1847 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 406:
#line 1857 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 407:
#line 1862 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 408:
#line 1867 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 409:
#line 1873 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1880 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 411:
#line 1887 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 412:
#line 1894 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 413:
#line 1904 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 414:
#line 1911 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1920 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 416:
#line 1927 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 417:
#line 1933 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 418:
#line 1941 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 419:
#line 1947 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 421:
#line 1955 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 422:
#line 1956 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 423:
#line 1957 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 424:
#line 1958 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 425:
#line 1974 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1975 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1976 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1985 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 429:
#line 1986 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 430:
#line 1991 "parser/evoparser.y"
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
#line 2001 "parser/evoparser.y"
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
#line 2016 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 433:
#line 2017 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 434:
#line 2022 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 435:
#line 2030 "parser/evoparser.y"
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
#line 2039 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 437:
#line 2061 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2062 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 439:
#line 2063 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 440:
#line 2068 "parser/evoparser.y"
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
#line 2085 "parser/evoparser.y"
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
#line 2106 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 443:
#line 2107 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 444:
#line 2113 "parser/evoparser.y"
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
#line 2122 "parser/evoparser.y"
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
#line 2136 "parser/evoparser.y"
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
#line 2145 "parser/evoparser.y"
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
#line 2170 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2171 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2172 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2173 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2174 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2175 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 454:
#line 2176 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 455:
#line 2181 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 456:
#line 2188 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 457:
#line 2199 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 462:
#line 2213 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 463:
#line 2215 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 464:
#line 2220 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 465:
#line 2228 "parser/evoparser.y"
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
#line 2237 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 467:
#line 2249 "parser/evoparser.y"
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
#line 2261 "parser/evoparser.y"
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
#line 2275 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 470:
#line 2276 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 471:
#line 2282 "parser/evoparser.y"
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
#line 2296 "parser/evoparser.y"
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
#line 2306 "parser/evoparser.y"
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
#line 2320 "parser/evoparser.y"
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
#line 2334 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 476:
#line 2342 "parser/evoparser.y"
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
#line 2353 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2359 "parser/evoparser.y"
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
#line 2370 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2376 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 481:
#line 2383 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 482:
#line 2389 "parser/evoparser.y"
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
#line 2410 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 484:
#line 2411 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 485:
#line 2412 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 486:
#line 2413 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 487:
#line 2418 "parser/evoparser.y"
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
#line 2427 "parser/evoparser.y"
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
#line 2444 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        DropSubscriptionProcess(0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 490:
#line 2452 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (5)].strval));
        DropSubscriptionProcess(1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 491:
#line 2463 "parser/evoparser.y"
    {
        emit("RESUME SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        ResumeSubscriptionProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 492:
#line 2474 "parser/evoparser.y"
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
#line 2493 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 494:
#line 2494 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 495:
#line 2495 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 496:
#line 2500 "parser/evoparser.y"
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
#line 2510 "parser/evoparser.y"
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
#line 2523 "parser/evoparser.y"
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
#line 2532 "parser/evoparser.y"
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
#line 2544 "parser/evoparser.y"
    {
        emit("ALTER JOB %s ENABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(1);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 501:
#line 2552 "parser/evoparser.y"
    {
        emit("ALTER JOB %s DISABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(0);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 502:
#line 2572 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 503:
#line 2573 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 504:
#line 2574 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 505:
#line 2579 "parser/evoparser.y"
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
#line 2591 "parser/evoparser.y"
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
#line 2616 "parser/evoparser.y"
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
#line 2628 "parser/evoparser.y"
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
#line 2643 "parser/evoparser.y"
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
#line 2655 "parser/evoparser.y"
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
#line 2667 "parser/evoparser.y"
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
#line 2676 "parser/evoparser.y"
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
#line 2686 "parser/evoparser.y"
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
#line 2695 "parser/evoparser.y"
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
#line 2705 "parser/evoparser.y"
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
#line 2728 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 517:
#line 2729 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 518:
#line 2730 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 519:
#line 2735 "parser/evoparser.y"
    {
        emit("CREATE DOCUMENT STORE %s", (yyvsp[(4) - (6)].strval));
        SetDocumentStoreName((yyvsp[(4) - (6)].strval));
        CreateDocumentStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 520:
#line 2742 "parser/evoparser.y"
    {
        emit("CREATE DOCUMENT STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetDocumentStoreName((yyvsp[(6) - (8)].strval));
        CreateDocumentStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 521:
#line 2751 "parser/evoparser.y"
    { ResetDocumentOpts(); ;}
    break;

  case 526:
#line 2765 "parser/evoparser.y"
    { SetDocumentEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 527:
#line 2767 "parser/evoparser.y"
    { SetDocumentDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 528:
#line 2772 "parser/evoparser.y"
    {
        emit("DROP DOCUMENT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (4)].strval));
        DropDocumentStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 529:
#line 2780 "parser/evoparser.y"
    {
        emit("DROP DOCUMENT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(6) - (6)].strval));
        DropDocumentStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 530:
#line 2791 "parser/evoparser.y"
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
#line 2802 "parser/evoparser.y"
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
#line 2814 "parser/evoparser.y"
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
#line 2823 "parser/evoparser.y"
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
#line 2833 "parser/evoparser.y"
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
#line 2843 "parser/evoparser.y"
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
#line 2854 "parser/evoparser.y"
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
#line 2871 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 538:
#line 2872 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 539:
#line 2873 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 540:
#line 2878 "parser/evoparser.y"
    {
        emit("CREATE GRAPH STORE %s", (yyvsp[(4) - (4)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(4) - (4)].strval));
        CreateGraphStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 541:
#line 2886 "parser/evoparser.y"
    {
        emit("CREATE GRAPH STORE IF NOT EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (6)].strval));
        CreateGraphStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 542:
#line 2897 "parser/evoparser.y"
    {
        emit("DROP GRAPH STORE %s", (yyvsp[(4) - (4)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(4) - (4)].strval));
        DropGraphStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 543:
#line 2905 "parser/evoparser.y"
    {
        emit("DROP GRAPH STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (6)].strval));
        DropGraphStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 544:
#line 2916 "parser/evoparser.y"
    {
        emit("GRAPH UPSERT NODE INTO %s", (yyvsp[(5) - (13)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(5) - (13)].strval));
        SetGraphNodeId((yyvsp[(8) - (13)].strval));
        SetGraphNodeType((yyvsp[(10) - (13)].strval));
        SetGraphNodeProps((yyvsp[(12) - (13)].strval));
        GraphUpsertNodeProcess();
        free((yyvsp[(5) - (13)].strval)); free((yyvsp[(8) - (13)].strval)); free((yyvsp[(10) - (13)].strval)); free((yyvsp[(12) - (13)].strval));
    ;}
    break;

  case 545:
#line 2927 "parser/evoparser.y"
    {
        emit("GRAPH UPSERT EDGE INTO %s", (yyvsp[(5) - (13)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(5) - (13)].strval));
        SetGraphEdgeSrc((yyvsp[(8) - (13)].strval));
        SetGraphEdgeRel((yyvsp[(10) - (13)].strval));
        SetGraphEdgeDst((yyvsp[(12) - (13)].strval));
        SetGraphEdgeProps(NULL);
        GraphUpsertEdgeProcess();
        free((yyvsp[(5) - (13)].strval)); free((yyvsp[(8) - (13)].strval)); free((yyvsp[(10) - (13)].strval)); free((yyvsp[(12) - (13)].strval));
    ;}
    break;

  case 546:
#line 2939 "parser/evoparser.y"
    {
        emit("GRAPH UPSERT EDGE INTO %s WITH props", (yyvsp[(5) - (15)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(5) - (15)].strval));
        SetGraphEdgeSrc((yyvsp[(8) - (15)].strval));
        SetGraphEdgeRel((yyvsp[(10) - (15)].strval));
        SetGraphEdgeDst((yyvsp[(12) - (15)].strval));
        SetGraphEdgeProps((yyvsp[(14) - (15)].strval));
        GraphUpsertEdgeProcess();
        free((yyvsp[(5) - (15)].strval)); free((yyvsp[(8) - (15)].strval)); free((yyvsp[(10) - (15)].strval)); free((yyvsp[(12) - (15)].strval)); free((yyvsp[(14) - (15)].strval));
    ;}
    break;

  case 547:
#line 2951 "parser/evoparser.y"
    {
        emit("GRAPH NEIGHBORS OF %s IN %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (6)].strval));
        SetGraphNeighborsId((yyvsp[(4) - (6)].strval));
        GraphNeighborsProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 548:
#line 2960 "parser/evoparser.y"
    {
        emit("GRAPH NEIGHBORS OF %s IN %s DEPTH %d", (yyvsp[(4) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].intval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (8)].strval));
        SetGraphNeighborsId((yyvsp[(4) - (8)].strval));
        SetGraphNeighborsDepth((yyvsp[(8) - (8)].intval));
        GraphNeighborsProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 549:
#line 2970 "parser/evoparser.y"
    {
        emit("GRAPH NEIGHBORS OF %s IN %s AS OF %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (9)].strval));
        SetGraphNeighborsId((yyvsp[(4) - (9)].strval));
        SetGraphNeighborsAsOf((yyvsp[(9) - (9)].strval));
        GraphNeighborsProcess();
        free((yyvsp[(4) - (9)].strval)); free((yyvsp[(6) - (9)].strval)); free((yyvsp[(9) - (9)].strval));
    ;}
    break;

  case 550:
#line 2983 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 551:
#line 2990 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 552:
#line 2999 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 553:
#line 3007 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 554:
#line 3013 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 556:
#line 3030 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 557:
#line 3034 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 558:
#line 3043 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 560:
#line 3058 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 561:
#line 3062 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 562:
#line 3067 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 563:
#line 3074 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 564:
#line 3079 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 565:
#line 3086 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 566:
#line 3090 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 567:
#line 3091 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 568:
#line 3097 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 569:
#line 3109 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 570:
#line 3118 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 571:
#line 3119 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 572:
#line 3120 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 573:
#line 3124 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 574:
#line 3125 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 575:
#line 3126 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 576:
#line 3127 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 577:
#line 3128 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 578:
#line 3129 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 581:
#line 3138 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 582:
#line 3139 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 584:
#line 3144 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 586:
#line 3149 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 587:
#line 3154 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 588:
#line 3161 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 589:
#line 3170 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 590:
#line 3176 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 591:
#line 3182 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 592:
#line 3189 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 593:
#line 3195 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 594:
#line 3202 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 595:
#line 3208 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 596:
#line 3214 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 597:
#line 3220 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 598:
#line 3226 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 599:
#line 3232 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 600:
#line 3238 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 601:
#line 3244 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 602:
#line 3250 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 603:
#line 3256 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 604:
#line 3262 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 605:
#line 3268 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 606:
#line 3274 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 607:
#line 3280 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 608:
#line 3286 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 609:
#line 3292 "parser/evoparser.y"
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

  case 610:
#line 3305 "parser/evoparser.y"
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

  case 611:
#line 3315 "parser/evoparser.y"
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

  case 612:
#line 3325 "parser/evoparser.y"
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

  case 613:
#line 3335 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s SET TTL %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableSetTtl((yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 614:
#line 3341 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s DROP TTL", (yyvsp[(3) - (5)].strval));
        AlterTableSetTtl((yyvsp[(3) - (5)].strval), NULL);
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 615:
#line 3348 "parser/evoparser.y"
    { ;}
    break;

  case 616:
#line 3349 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 617:
#line 3350 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 618:
#line 3354 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 619:
#line 3362 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 620:
#line 3368 "parser/evoparser.y"
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

  case 622:
#line 3381 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 623:
#line 3381 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 626:
#line 3389 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 627:
#line 3390 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 628:
#line 3391 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 629:
#line 3395 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 630:
#line 3396 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 631:
#line 3397 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 632:
#line 3401 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 633:
#line 3409 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 634:
#line 3418 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 635:
#line 3419 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 636:
#line 3420 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 637:
#line 3421 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 638:
#line 3422 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 642:
#line 3429 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 643:
#line 3433 "parser/evoparser.y"
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

  case 644:
#line 3443 "parser/evoparser.y"
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

  case 645:
#line 3455 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 646:
#line 3456 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 647:
#line 3456 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 648:
#line 3459 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 649:
#line 3460 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 650:
#line 3461 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 651:
#line 3462 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 652:
#line 3466 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 653:
#line 3469 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 654:
#line 3470 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 655:
#line 3471 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 656:
#line 3472 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 657:
#line 3478 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 658:
#line 3484 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 659:
#line 3489 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 660:
#line 3494 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 661:
#line 3498 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 662:
#line 3502 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 663:
#line 3504 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 666:
#line 3510 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 667:
#line 3511 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 668:
#line 3515 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 669:
#line 3516 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 670:
#line 3520 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 671:
#line 3521 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 672:
#line 3522 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 679:
#line 3537 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 680:
#line 3538 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 681:
#line 3539 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 682:
#line 3540 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 683:
#line 3541 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 684:
#line 3542 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 685:
#line 3543 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 686:
#line 3544 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 687:
#line 3549 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 688:
#line 3558 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 689:
#line 3565 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 690:
#line 3566 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 691:
#line 3567 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 692:
#line 3572 "parser/evoparser.y"
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

  case 693:
#line 3583 "parser/evoparser.y"
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

  case 694:
#line 3595 "parser/evoparser.y"
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

  case 695:
#line 3606 "parser/evoparser.y"
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

  case 696:
#line 3621 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 697:
#line 3625 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 698:
#line 3629 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 699:
#line 3630 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 700:
#line 3635 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 701:
#line 3637 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 702:
#line 3639 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 703:
#line 3641 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 704:
#line 3644 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 705:
#line 3645 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 706:
#line 3651 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 707:
#line 3656 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 708:
#line 3658 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 709:
#line 3660 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 710:
#line 3662 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 711:
#line 3664 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 712:
#line 3668 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 713:
#line 3672 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 714:
#line 3673 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 715:
#line 3678 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 716:
#line 3688 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 718:
#line 3701 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 719:
#line 3709 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 720:
#line 3717 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 722:
#line 3725 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 723:
#line 3726 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 724:
#line 3727 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 725:
#line 3728 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 726:
#line 3730 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 727:
#line 3732 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 728:
#line 3734 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 729:
#line 3739 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 730:
#line 3744 "parser/evoparser.y"
    { emit("TABLE OPT TTL_COLUMN %s", (yyvsp[(6) - (7)].strval)); SetTableTtlColumn((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 733:
#line 3752 "parser/evoparser.y"
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

  case 734:
#line 3767 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 735:
#line 3775 "parser/evoparser.y"
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

  case 736:
#line 3789 "parser/evoparser.y"
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

  case 737:
#line 3803 "parser/evoparser.y"
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

  case 738:
#line 3817 "parser/evoparser.y"
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

  case 739:
#line 3829 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 740:
#line 3830 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 741:
#line 3831 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 742:
#line 3834 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 743:
#line 3835 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 744:
#line 3838 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 745:
#line 3839 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 746:
#line 3840 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 747:
#line 3841 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 748:
#line 3842 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 749:
#line 3843 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 750:
#line 3844 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 751:
#line 3845 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 752:
#line 3847 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 753:
#line 3849 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 754:
#line 3851 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 755:
#line 3853 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 756:
#line 3855 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 757:
#line 3857 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 758:
#line 3860 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 759:
#line 3861 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 760:
#line 3864 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 761:
#line 3865 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 762:
#line 3868 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 763:
#line 3869 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 765:
#line 3873 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 766:
#line 3874 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 767:
#line 3875 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 768:
#line 3876 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 769:
#line 3877 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 770:
#line 3878 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 771:
#line 3879 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 772:
#line 3880 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 773:
#line 3881 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 774:
#line 3882 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 775:
#line 3883 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 776:
#line 3884 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 777:
#line 3885 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 778:
#line 3886 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 779:
#line 3887 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 780:
#line 3888 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 781:
#line 3889 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 782:
#line 3892 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 783:
#line 3893 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 784:
#line 3896 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 785:
#line 3898 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 786:
#line 3906 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 787:
#line 3907 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 789:
#line 3909 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 790:
#line 3910 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 791:
#line 3911 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 792:
#line 3912 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 793:
#line 3913 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 794:
#line 3914 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 795:
#line 3915 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 796:
#line 3916 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 797:
#line 3917 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 798:
#line 3924 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 799:
#line 3925 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 800:
#line 3926 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 801:
#line 3927 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 802:
#line 3928 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 803:
#line 3929 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 804:
#line 3930 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 805:
#line 3931 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 806:
#line 3932 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 807:
#line 3933 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 808:
#line 3934 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 809:
#line 3935 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 810:
#line 3936 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 811:
#line 3937 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 812:
#line 3938 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 813:
#line 3939 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 814:
#line 3940 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 815:
#line 3941 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 816:
#line 3942 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 817:
#line 3943 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 818:
#line 3944 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 819:
#line 3947 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 820:
#line 3948 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 821:
#line 3949 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 822:
#line 3952 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 823:
#line 3953 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 824:
#line 3956 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 825:
#line 3957 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 826:
#line 3958 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 828:
#line 3962 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 829:
#line 3963 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 830:
#line 3967 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 831:
#line 3968 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 832:
#line 3969 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 833:
#line 3970 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 834:
#line 3971 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 835:
#line 3972 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 836:
#line 3973 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 837:
#line 3974 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 838:
#line 3975 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 839:
#line 3976 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 840:
#line 3977 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 841:
#line 3978 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 842:
#line 3979 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 843:
#line 3980 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 844:
#line 3981 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 845:
#line 3982 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 846:
#line 3983 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 847:
#line 3984 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 848:
#line 3985 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 849:
#line 3986 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 850:
#line 3987 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 851:
#line 3988 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 852:
#line 3989 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 853:
#line 3990 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 854:
#line 3991 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 855:
#line 3992 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 856:
#line 3993 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 857:
#line 3994 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 858:
#line 3995 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 859:
#line 3996 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 860:
#line 3997 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 861:
#line 3998 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 862:
#line 3999 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 863:
#line 4000 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 864:
#line 4001 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 865:
#line 4004 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 866:
#line 4005 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 867:
#line 4009 "parser/evoparser.y"
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

  case 868:
#line 4021 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 869:
#line 4022 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 870:
#line 4023 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 871:
#line 4027 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 872:
#line 4030 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 873:
#line 4031 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 877:
#line 4035 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 878:
#line 4036 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 879:
#line 4044 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 880:
#line 4049 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 881:
#line 4055 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 882:
#line 4061 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 883:
#line 4068 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 884:
#line 4075 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 885:
#line 4081 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 886:
#line 4087 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 887:
#line 4094 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 892:
#line 4110 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 893:
#line 4111 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 894:
#line 4112 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 895:
#line 4113 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 896:
#line 4116 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 897:
#line 4117 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 898:
#line 4118 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 899:
#line 4119 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 900:
#line 4120 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 901:
#line 4121 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 902:
#line 4122 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 903:
#line 4123 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 904:
#line 4124 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 905:
#line 4125 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 914:
#line 4142 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 915:
#line 4143 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1036:
#line 4161 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1037:
#line 4168 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 1038:
#line 4173 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1039:
#line 4179 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1040:
#line 4185 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1041:
#line 4191 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1042:
#line 4202 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 1043:
#line 4207 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 1044:
#line 4213 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 1047:
#line 4224 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 1048:
#line 4225 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1049:
#line 4226 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 1050:
#line 4227 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 1051:
#line 4228 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 1052:
#line 4229 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1053:
#line 4230 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1054:
#line 4237 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 1055:
#line 4242 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 1056:
#line 4248 "parser/evoparser.y"
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

  case 1057:
#line 4263 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 1058:
#line 4264 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 1059:
#line 4267 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1060:
#line 4268 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 1061:
#line 4269 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 1062:
#line 4270 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1063:
#line 4273 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 1064:
#line 4278 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1065:
#line 4284 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1066:
#line 4293 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1067:
#line 4301 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1068:
#line 4311 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 1069:
#line 4316 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 1072:
#line 4329 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1073:
#line 4330 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1074:
#line 4331 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1075:
#line 4332 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1076:
#line 4333 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1077:
#line 4334 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1078:
#line 4335 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1079:
#line 4336 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1080:
#line 4339 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1081:
#line 4344 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1082:
#line 4350 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1083:
#line 4360 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1084:
#line 4367 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1085:
#line 4374 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1086:
#line 4382 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1088:
#line 4392 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1090:
#line 4396 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1091:
#line 4397 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 13451 "parser/evoparser.tab.c"
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


#line 4400 "parser/evoparser.y"

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
