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
     UPSERT = 686,
     ENTITY = 687,
     RANK = 688
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
#define ENTITY 687
#define RANK 688




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
	#include "../db/Entity.h"

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
#line 78 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 1041 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1054 "parser/evoparser.tab.c"

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
#define YYFINAL  182
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   15043

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  451
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  239
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2917

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   688

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     446,   447,    28,    26,   448,    27,   445,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   444,
       2,   450,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   449,    32,     2,     2,     2,     2,     2,
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
     435,   436,   437,   438,   439,   440,   441,   442,   443
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
    2827,  2829,  2831,  2833,  2838,  2845,  2850,  2857,  2868,  2881,
    2890,  2895,  2902,  2904,  2908,  2910,  2915,  2922,  2923,  2928,
    2933,  2936,  2937,  2942,  2950,  2955,  2957,  2961,  2963,  2965,
    2967,  2978,  2991,  2992,  2995,  2998,  2999,  3002,  3005,  3008,
    3011,  3014,  3015,  3018,  3020,  3024,  3025,  3030,  3031,  3037,
    3043,  3051,  3062,  3073,  3091,  3104,  3124,  3136,  3143,  3152,
    3159,  3166,  3173,  3183,  3190,  3196,  3205,  3213,  3223,  3232,
    3243,  3253,  3261,  3269,  3278,  3287,  3295,  3301,  3302,  3304,
    3307,  3309,  3320,  3327,  3328,  3329,  3335,  3336,  3341,  3342,
    3346,  3351,  3354,  3355,  3361,  3365,  3371,  3372,  3375,  3378,
    3381,  3384,  3386,  3387,  3388,  3392,  3394,  3398,  3402,  3403,
    3410,  3412,  3414,  3418,  3422,  3430,  3434,  3438,  3444,  3450,
    3452,  3461,  3469,  3477,  3479,  3480,  3488,  3489,  3493,  3495,
    3499,  3501,  3503,  3505,  3507,  3509,  3510,  3512,  3517,  3521,
    3523,  3527,  3530,  3533,  3536,  3538,  3541,  3544,  3547,  3549,
    3551,  3561,  3562,  3565,  3568,  3572,  3578,  3584,  3592,  3598,
    3600,  3605,  3610,  3614,  3620,  3624,  3630,  3631,  3634,  3636,
    3642,  3650,  3658,  3668,  3680,  3682,  3685,  3689,  3691,  3702,
    3703,  3708,  3720,  3739,  3740,  3745,  3749,  3755,  3761,  3771,
    3782,  3790,  3795,  3803,  3805,  3809,  3819,  3829,  3839,  3846,
    3858,  3867,  3868,  3870,  3873,  3875,  3879,  3885,  3893,  3898,
    3903,  3909,  3915,  3920,  3927,  3939,  3953,  3967,  3983,  3988,
    3995,  3997,  4001,  4003,  4007,  4009,  4013,  4014,  4019,  4025,
    4030,  4036,  4041,  4047,  4052,  4058,  4063,  4068,  4072,  4076,
    4080,  4083,  4087,  4092,  4097,  4099,  4103,  4104,  4109,  4110,
    4114,  4117,  4121,  4125,  4129,  4133,  4139,  4145,  4151,  4155,
    4161,  4164,  4172,  4178,  4186,  4192,  4195,  4199,  4202,  4206,
    4209,  4213,  4219,  4224,  4230,  4238,  4247,  4256,  4264,  4271,
    4278,  4284,  4285,  4289,  4295,  4296,  4298,  4299,  4302,  4305,
    4306,  4311,  4315,  4318,  4322,  4326,  4330,  4334,  4338,  4342,
    4346,  4350,  4354,  4358,  4360,  4362,  4364,  4366,  4368,  4372,
    4378,  4381,  4386,  4388,  4390,  4392,  4394,  4398,  4402,  4406,
    4410,  4416,  4422,  4424,  4426,  4428,  4433,  4437,  4439,  4443,
    4447,  4448,  4450,  4452,  4454,  4458,  4462,  4465,  4467,  4471,
    4475,  4479,  4481,  4492,  4502,  4515,  4527,  4540,  4552,  4567,
    4581,  4582,  4584,  4586,  4590,  4593,  4597,  4601,  4605,  4607,
    4609,  4611,  4613,  4615,  4617,  4619,  4621,  4623,  4625,  4626,
    4629,  4634,  4640,  4646,  4652,  4658,  4664,  4666,  4668,  4670,
    4672,  4674,  4676,  4678,  4680,  4682,  4684,  4686,  4688,  4690,
    4692,  4694,  4696,  4698,  4700,  4702,  4704,  4706,  4708,  4710,
    4712,  4714,  4716,  4718,  4720,  4722,  4724,  4726,  4728,  4730,
    4732,  4734,  4736,  4738,  4740,  4742,  4744,  4746,  4748,  4750,
    4752,  4754,  4756,  4758,  4760,  4762,  4764,  4766,  4768,  4770,
    4772,  4774,  4776,  4778,  4780,  4782,  4784,  4786,  4788,  4790,
    4792,  4794,  4796,  4798,  4800,  4802,  4804,  4806,  4808,  4810,
    4812,  4814,  4816,  4818,  4820,  4822,  4824,  4826,  4828,  4830,
    4832,  4834,  4836,  4838,  4840,  4842,  4844,  4846,  4848,  4850,
    4852,  4854,  4856,  4858,  4860,  4862,  4864,  4866,  4868,  4870,
    4872,  4874,  4876,  4878,  4880,  4882,  4884,  4886,  4888,  4890,
    4892,  4894,  4896,  4898,  4900,  4902,  4904,  4906,  4908,  4910,
    4912,  4916,  4922,  4926,  4932,  4934,  4939,  4945,  4947,  4951,
    4953,  4955,  4957,  4959,  4961,  4963,  4965,  4967,  4981,  4997,
    4999,  5001,  5003,  5005,  5007,  5009,  5011,  5015,  5021,  5026,
    5031,  5033,  5039,  5040,  5043,  5047,  5050,  5054,  5057,  5060,
    5063,  5065,  5068,  5070,  5074,  5080,  5085,  5090,  5097,  5104,
    5105,  5108,  5111,  5113
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     452,     0,    -1,   491,   444,    -1,   491,   444,   452,    -1,
       3,    -1,     3,   445,     3,    -1,    89,   445,     3,    -1,
     183,   446,     3,   447,    91,   446,     4,   447,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   453,    26,   453,    -1,   453,    27,   453,    -1,   453,
      28,   453,    -1,   453,    29,   453,    -1,   453,    30,   453,
      -1,   453,    31,   453,    -1,    27,   453,    -1,   446,   453,
     447,    -1,   453,    12,   453,    -1,   453,    10,   453,    -1,
     453,    11,   453,    -1,   453,    23,   453,    -1,   453,    24,
     453,    -1,   453,    32,   453,    -1,   453,    25,   453,    -1,
     453,    34,   453,    -1,   453,    33,   453,    -1,    18,   453,
      -1,    17,   453,    -1,   453,    20,   453,    -1,    -1,   453,
      20,   446,   454,   492,   447,    -1,    -1,   453,    20,    47,
     446,   455,   492,   447,    -1,    -1,   453,    20,   232,   446,
     456,   492,   447,    -1,    -1,   453,    20,    40,   446,   457,
     492,   447,    -1,   453,    20,    47,   446,   461,   447,    -1,
     453,    20,   232,   446,   461,   447,    -1,   453,    15,   193,
      -1,   453,    15,    18,   193,    -1,   453,    15,     6,    -1,
     453,    15,    18,     6,    -1,     8,     9,   453,    -1,   453,
      19,   453,    50,   453,    -1,   453,    18,    19,   453,    50,
     453,    -1,   453,    -1,   453,   448,   458,    -1,   453,    -1,
     453,   448,   459,    -1,    -1,   263,    36,   460,   459,   449,
      -1,   263,    36,   449,    -1,   453,    36,   453,   449,    -1,
     453,    -1,   380,   446,   453,   447,    -1,   380,   446,   453,
     448,   453,   447,    -1,   381,   446,   453,   447,    -1,   382,
     446,   453,   448,   453,   447,    -1,   383,   446,   447,    -1,
     414,   446,   447,    -1,   384,   446,   453,   448,   453,   447,
      -1,   385,   446,   453,   448,   453,   447,    -1,   386,   446,
     453,   448,   453,   447,    -1,   387,   446,   453,   448,   453,
     447,    -1,   388,   446,   453,   447,    -1,   389,   446,   453,
     447,    -1,   390,   446,   453,   447,    -1,   453,    22,   453,
      -1,   453,    21,   453,    -1,   392,   446,   453,   448,   453,
     448,   453,   448,     5,   447,    -1,   393,   446,   453,   448,
     453,   448,   453,   448,     5,   448,     4,   447,    -1,   394,
     446,   453,   448,   453,   448,   453,   448,     5,   448,     4,
     447,    -1,    -1,   458,    -1,    -1,   453,    16,   446,   463,
     458,   447,    -1,    -1,   453,    18,    16,   446,   464,   458,
     447,    -1,    -1,   453,    16,   446,   465,   492,   447,    -1,
      -1,   453,    18,    16,   446,   466,   492,   447,    -1,    -1,
     281,   446,   467,   492,   447,    -1,     3,   446,   462,   447,
      -1,   322,   446,    28,   447,    -1,   322,   446,   453,   447,
      -1,   323,   446,   453,   447,    -1,   324,   446,   453,   447,
      -1,   325,   446,   453,   447,    -1,   326,   446,   453,   447,
      -1,   320,   446,   453,   447,    -1,   320,   446,   453,   321,
       4,   447,    -1,    -1,   342,   446,   447,   350,   446,   468,
     499,   501,   447,    -1,    -1,   343,   446,   447,   350,   446,
     469,   499,   501,   447,    -1,    -1,   344,   446,   447,   350,
     446,   470,   499,   501,   447,    -1,    -1,   323,   446,   453,
     447,   350,   446,   471,   499,   501,   447,    -1,    -1,   322,
     446,    28,   447,   350,   446,   472,   499,   501,   447,    -1,
      -1,   322,   446,   453,   447,   350,   446,   473,   499,   501,
     447,    -1,    -1,   324,   446,   453,   447,   350,   446,   474,
     499,   501,   447,    -1,    -1,   325,   446,   453,   447,   350,
     446,   475,   499,   501,   447,    -1,    -1,   326,   446,   453,
     447,   350,   446,   476,   499,   501,   447,    -1,    -1,   345,
     446,   453,   447,   350,   446,   477,   499,   501,   447,    -1,
      -1,   345,   446,   453,   448,     5,   447,   350,   446,   478,
     499,   501,   447,    -1,    -1,   345,   446,   453,   448,     5,
     448,     4,   447,   350,   446,   479,   499,   501,   447,    -1,
      -1,   345,   446,   453,   448,     5,   448,     5,   447,   350,
     446,   480,   499,   501,   447,    -1,    -1,   346,   446,   453,
     447,   350,   446,   481,   499,   501,   447,    -1,    -1,   346,
     446,   453,   448,     5,   447,   350,   446,   482,   499,   501,
     447,    -1,    -1,   346,   446,   453,   448,     5,   448,     4,
     447,   350,   446,   483,   499,   501,   447,    -1,    -1,   346,
     446,   453,   448,     5,   448,     5,   447,   350,   446,   484,
     499,   501,   447,    -1,    -1,   347,   446,     5,   447,   350,
     446,   485,   499,   501,   447,    -1,    -1,   348,   446,   447,
     350,   446,   486,   499,   501,   447,    -1,    -1,   349,   446,
     447,   350,   446,   487,   499,   501,   447,    -1,   282,   446,
     453,   448,   453,   448,   453,   447,    -1,   282,   446,   453,
     448,   453,   447,    -1,   282,   446,   453,   136,   453,   447,
      -1,   282,   446,   453,   136,   453,   140,   453,   447,    -1,
     283,   446,   453,   447,    -1,   283,   446,   488,   453,   136,
     453,   447,    -1,   283,   446,   488,   136,   453,   447,    -1,
     327,   446,   453,   447,    -1,   328,   446,   453,   447,    -1,
     329,   446,   453,   447,    -1,   424,   446,   453,   447,    -1,
     425,   446,   453,   448,   453,   447,    -1,   330,   446,   453,
     448,   453,   447,    -1,   331,   446,   453,   448,   453,   448,
     453,   447,    -1,   332,   446,   453,   448,   453,   447,    -1,
     294,   446,   453,   448,   453,   447,    -1,   295,   446,   453,
     448,   453,   447,    -1,   296,   446,   453,   448,   453,   448,
     453,   447,    -1,   297,   446,   453,   448,   453,   448,   453,
     447,    -1,   298,   446,   453,   447,    -1,   299,   446,   453,
     448,   453,   447,    -1,   300,   446,   453,   448,   453,   447,
      -1,   301,   446,   453,   448,   453,   447,    -1,   302,   446,
     453,   447,    -1,   303,   446,   453,   447,    -1,   304,   446,
     453,   447,    -1,   305,   446,   453,   448,   453,   447,    -1,
     305,   446,   453,   447,    -1,   306,   446,   453,   448,   453,
     447,    -1,   307,   446,   453,   447,    -1,   308,   446,   453,
     448,   453,   447,    -1,   309,   446,   447,    -1,   310,   446,
     453,   447,    -1,   311,   446,   453,   447,    -1,   312,   446,
     453,   447,    -1,   313,   446,   447,    -1,   293,   446,   447,
      -1,   286,   446,   453,   448,   453,   447,    -1,   287,   446,
     453,   447,    -1,   288,   446,   453,   447,    -1,   289,   446,
     453,   447,    -1,   290,   446,   453,   447,    -1,   291,   446,
     453,   447,    -1,   292,   446,   453,   447,    -1,   352,   446,
     453,   448,   453,   447,    -1,   353,   446,   453,   447,    -1,
     354,   446,   453,   447,    -1,   355,   446,   453,   447,    -1,
     356,   446,   453,   447,    -1,   357,   446,   453,   447,    -1,
     358,   446,   453,   447,    -1,   359,   446,   453,   447,    -1,
     360,   446,   453,   447,    -1,   361,   446,   453,   448,   453,
     448,   453,   447,    -1,   362,   446,   453,   448,   453,   448,
     453,   447,    -1,   363,   446,   453,   448,   453,   448,   453,
     447,    -1,   364,   446,   453,   448,   453,   447,    -1,   365,
     446,   453,   448,   453,   447,    -1,   366,   446,   453,   448,
     453,   448,   453,   447,    -1,   367,   446,   453,   448,   453,
     448,   453,   447,    -1,   368,   446,   453,   448,   453,   447,
      -1,   368,   446,   453,   448,   453,   448,   453,   448,   453,
     447,    -1,   369,   446,   453,   447,    -1,   369,   446,   453,
     448,   453,   447,    -1,   369,   446,   453,   448,   453,   448,
     453,   447,    -1,   370,   446,   453,   447,    -1,   372,   446,
     453,   447,    -1,   373,   446,   453,   447,    -1,   374,   446,
     453,   448,   453,   447,    -1,   374,   446,   453,   448,   453,
     448,   453,   447,    -1,   375,   446,   447,    -1,   314,   446,
     453,    51,   662,   447,    -1,   315,   446,   453,   448,   662,
     447,    -1,   316,   446,   453,   448,   453,   447,    -1,   317,
     446,   453,   448,   453,   447,    -1,   318,   446,   453,   448,
     453,   448,   453,   447,    -1,   453,    15,   319,    -1,   330,
     446,   453,   448,   453,   448,   453,   447,    -1,   330,   446,
     453,   448,   453,   448,   453,   448,   453,   447,    -1,   333,
     446,   447,    -1,   334,   446,   447,    -1,   335,   446,   447,
      -1,   336,   446,   447,    -1,   337,   446,   447,    -1,   338,
      -1,   339,    -1,   340,   446,   453,   447,    -1,   341,   446,
     453,   448,   453,   447,    -1,   178,    -1,   254,    -1,    65,
      -1,   284,   446,   453,   448,   489,   447,    -1,   285,   446,
     453,   448,   489,   447,    -1,   161,   453,   278,    -1,   161,
     453,   104,    -1,   161,   453,   105,    -1,   161,   453,   109,
      -1,   161,   453,   111,    -1,   161,   453,   279,    -1,   161,
     453,   145,    -1,   161,   453,   144,    -1,   161,   453,   147,
      -1,    77,   453,   490,   124,    -1,    77,   453,   490,   125,
     453,   124,    -1,    77,   490,   124,    -1,    77,   490,   125,
     453,   124,    -1,   275,   453,   253,   453,    -1,   490,   275,
     453,   253,   453,    -1,   453,    14,   453,    -1,   453,    18,
      14,   453,    -1,   453,    13,   453,    -1,   453,    18,    13,
     453,    -1,    72,    -1,    80,    -1,    81,    -1,   225,    -1,
     492,    -1,   241,   511,   512,    -1,   241,   511,   512,   136,
     515,   507,   493,   494,   498,   503,   506,   508,   509,    -1,
     241,   511,   512,   159,     3,   136,   515,   493,   494,   498,
     503,   506,    -1,    -1,   274,   453,    -1,    -1,   141,    63,
     495,   497,    -1,   453,   496,    -1,   495,   448,   453,   496,
      -1,    -1,    49,    -1,   112,    -1,    -1,   277,   214,    -1,
      -1,   148,   453,    -1,    -1,   351,    63,   500,    -1,     3,
      -1,   500,   448,     3,    -1,    -1,   198,    63,   502,    -1,
       3,   496,    -1,   502,   448,     3,   496,    -1,    -1,   198,
      63,   504,    -1,   505,    -1,   504,   448,   505,    -1,     3,
     496,    -1,     3,   445,     3,   496,    -1,     5,   496,    -1,
      -1,   179,   453,    -1,   179,   453,   448,   453,    -1,   179,
     453,   181,   453,    -1,    -1,   140,   412,    51,    94,   413,
       5,    -1,    -1,   140,   258,    -1,   140,   230,    -1,   140,
     258,   231,   180,    -1,   140,   230,   231,   180,    -1,    -1,
     159,   510,    -1,     3,    -1,   510,   448,     3,    -1,    -1,
     511,    40,    -1,   511,   106,    -1,   511,   110,    -1,   511,
     146,    -1,   511,   238,    -1,   511,   226,    -1,   511,   234,
      -1,   511,   233,    -1,   513,    -1,   512,   448,   513,    -1,
      28,    -1,   453,   514,    -1,    51,     3,    -1,     3,    -1,
      -1,   516,    -1,   515,   448,   516,    -1,   517,    -1,   521,
      -1,     3,   514,   528,    -1,   173,     3,   514,   528,    -1,
       3,   445,     3,   514,   528,    -1,   531,   520,     3,    -1,
     518,   520,     3,    -1,   381,   446,   453,   447,    -1,   381,
     446,   453,   447,   520,     3,    -1,   381,   446,   453,   447,
     520,     3,   446,     3,   447,    -1,   446,   515,   447,    -1,
      -1,   167,   446,   519,   492,   447,    -1,    51,    -1,    -1,
     516,   522,   163,   517,   526,    -1,   516,   238,   517,    -1,
     516,   238,   517,   197,   453,    -1,   516,   524,   523,   163,
     517,   527,    -1,   516,   190,   525,   163,   517,    -1,    -1,
     153,    -1,    76,    -1,    -1,   196,    -1,   177,    -1,   215,
      -1,   177,   523,    -1,   215,   523,    -1,    -1,    -1,   527,
      -1,   197,   453,    -1,   266,   446,   510,   447,    -1,   267,
     164,   529,   446,   530,   447,    -1,   154,   164,   529,   446,
     530,   447,    -1,   133,   164,   529,   446,   530,   447,    -1,
      -1,   140,   163,    -1,    -1,     3,    -1,   530,   448,     3,
      -1,   446,   492,   447,    -1,   532,    -1,   107,   533,   136,
       3,   493,   503,   506,   688,    -1,   533,   176,    -1,   533,
     203,    -1,   533,   154,    -1,    -1,   107,   533,   534,   136,
     515,   493,    -1,     3,   535,    -1,   534,   448,     3,   535,
      -1,    -1,   445,    28,    -1,   107,   533,   136,   534,   266,
     515,   493,    -1,   536,    -1,   108,   252,     3,   537,    -1,
     108,   252,   156,   281,     3,   537,    -1,    -1,    74,    -1,
     210,    -1,   538,    -1,    73,   155,     3,   197,     3,   446,
     543,   447,    -1,    73,   138,   155,     3,   197,     3,   446,
     543,   447,    -1,    73,   155,   156,   281,     3,   197,     3,
     446,   543,   447,    -1,    73,   261,   155,     3,   197,     3,
     446,   543,   447,    -1,    73,   261,   155,   156,   281,     3,
     197,     3,   446,   543,   447,    -1,    73,   155,     3,   197,
       3,   266,   268,   446,   543,   447,    -1,    73,   155,   156,
     281,     3,   197,     3,   266,   268,   446,   543,   447,    -1,
      73,   261,   155,     3,   197,     3,   266,   268,   446,   543,
     447,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     266,   268,   446,   543,   447,    -1,    73,   155,    85,     3,
     197,     3,   446,   543,   447,    -1,    73,   155,    85,   156,
     281,     3,   197,     3,   446,   543,   447,    -1,    73,   261,
     155,    85,     3,   197,     3,   446,   543,   447,    -1,    73,
     261,   155,    85,   156,   281,     3,   197,     3,   446,   543,
     447,    -1,    73,   155,    85,     3,   197,     3,   266,   268,
     446,   543,   447,    -1,    73,   261,   155,    85,     3,   197,
       3,   266,   268,   446,   543,   447,    -1,    73,   155,     3,
     197,     3,   266,   391,   446,     3,   539,   447,   540,    -1,
      73,   155,   156,   281,     3,   197,     3,   266,   391,   446,
       3,   539,   447,   540,    -1,    -1,     3,    -1,    -1,   277,
     446,   541,   447,    -1,   542,    -1,   541,   448,   542,    -1,
       3,    20,     5,    -1,     3,    -1,   543,   448,     3,    -1,
     544,    -1,   327,   446,     3,   447,    -1,   328,   446,     3,
     447,    -1,   329,   446,     3,   447,    -1,   330,   446,     3,
     448,     3,   447,    -1,   545,    -1,   108,   155,     3,    -1,
     546,   548,    -1,   255,   252,     3,    -1,   255,   252,     3,
     448,   547,    -1,     3,    -1,   547,   448,     3,    -1,    -1,
     548,    74,    -1,   548,   210,    -1,   548,    55,    53,    -1,
     548,    54,    53,    -1,   568,    -1,   569,    -1,   570,    -1,
     549,    -1,   551,    -1,    73,   395,   396,     3,   550,    -1,
      73,   395,   396,   156,   281,     3,   550,    -1,    -1,   277,
     446,   397,    20,     4,   447,    -1,   108,   395,   396,     3,
      -1,   108,   395,   396,     3,    74,    -1,   108,   395,   396,
     156,   281,     3,    -1,   552,    -1,   554,    -1,   555,    -1,
     395,   398,   159,     3,   271,   446,   553,   448,   553,   448,
     553,   448,   553,   448,   553,   448,   553,   448,   553,   447,
      -1,   395,   398,   401,   159,     3,   271,   446,   553,   448,
     553,   448,   553,   448,   553,   448,   553,   448,   553,   448,
     553,   447,    -1,     4,    -1,   193,    -1,   395,   399,   136,
       3,   402,     4,    -1,   395,   399,   136,     3,   402,     4,
     403,     4,    -1,   395,   400,   136,     3,   402,     4,    -1,
     395,   400,   136,     3,   402,     4,   179,     5,    -1,   556,
      -1,   561,    -1,   562,    -1,   564,    -1,   565,    -1,   566,
      -1,   567,    -1,    73,   404,   396,     3,   557,   558,    -1,
      73,   404,   396,   156,   281,     3,   557,   558,    -1,    -1,
      -1,   277,   446,   559,   447,    -1,   560,    -1,   559,   448,
     560,    -1,   405,    20,     5,    -1,   406,    20,     4,    -1,
     108,   404,   396,     3,    -1,   108,   404,   396,     3,    74,
      -1,   108,   404,   396,   156,   281,     3,    -1,   404,   398,
     159,     3,   271,   446,   563,   448,   563,   448,   563,   447,
      -1,   404,   398,   159,     3,   271,   446,   563,   448,   563,
     448,   563,   448,   563,   447,    -1,     4,    -1,   193,    -1,
     404,   399,   136,     3,   274,   411,    20,     4,    12,   164,
      20,     4,    -1,   404,   407,     3,   266,   273,     4,    -1,
     404,   407,     3,   266,   273,     4,   179,     5,    -1,   404,
     107,   136,     3,   274,   411,    20,     4,    12,   164,    20,
       4,    -1,   404,   400,   409,    16,     3,    -1,   404,   400,
     409,    16,     3,   410,     4,    -1,   168,     3,    -1,   168,
       3,   171,    -1,   170,     3,    -1,   170,    28,    -1,   169,
       3,    -1,   169,     3,   448,     4,    -1,   571,    -1,   572,
      -1,   573,    -1,   574,    -1,    73,   417,     3,   140,   418,
       3,    -1,    73,   417,   156,   281,     3,   140,   418,     3,
      -1,   108,   417,     3,    -1,   108,   417,   156,   281,     3,
      -1,   419,   417,     3,    -1,   420,   417,     3,   421,     5,
      -1,   575,    -1,   576,    -1,   577,    -1,    73,   426,     3,
     197,   428,     4,   101,     4,    -1,    73,   426,   156,   281,
       3,   197,   428,     4,   101,     4,    -1,   108,   426,     3,
      -1,   108,   426,   156,   281,     3,    -1,    37,   426,     3,
     120,    -1,    37,   426,     3,   100,    -1,   578,    -1,   579,
      -1,   580,    -1,    73,   429,     3,     3,    -1,    73,   429,
       3,     3,   277,   446,   422,    20,     4,   447,    -1,   108,
     429,     3,     3,    -1,   108,   429,     3,   156,   281,     3,
      -1,   429,   430,   159,     3,   271,   446,     4,   448,     4,
     448,     4,   447,    -1,   429,   430,   159,     3,   271,   446,
       4,   448,     4,   448,     4,   448,     4,   447,    -1,   429,
     431,   136,     3,   274,   433,    20,     4,    -1,   429,   431,
     136,     3,   274,   433,    20,     4,   432,     5,    -1,   429,
     255,   136,     3,   274,   433,    20,     4,    -1,   429,   255,
     136,     3,   274,   433,    20,     4,    59,     5,    -1,   429,
     322,   446,    28,   447,   136,     3,   274,   433,    20,     4,
      -1,   581,    -1,   586,    -1,   587,    -1,    73,   434,   396,
       3,   582,   583,    -1,    73,   434,   396,   156,   281,     3,
     582,   583,    -1,    -1,    -1,   277,   446,   584,   447,    -1,
     585,    -1,   584,   448,   585,    -1,   405,    20,     5,    -1,
     406,    20,     4,    -1,   108,   434,   396,     3,    -1,   108,
     434,   396,   156,   281,     3,    -1,   434,   435,   159,     3,
     271,   446,     4,   448,     4,   448,     4,   447,    -1,   434,
     435,   159,     3,   271,   446,     4,   448,     4,   448,     4,
     448,     4,   447,    -1,   434,   436,   136,     3,   274,     4,
      -1,   434,   436,   136,     3,   274,     4,   179,     5,    -1,
     434,   407,     3,   266,   273,     4,   179,     5,    -1,   434,
     407,     3,   266,   273,     4,   274,     4,   179,     5,    -1,
     434,   107,   136,     3,   274,     4,    -1,   588,    -1,   589,
      -1,   590,    -1,    73,   437,   396,     3,    -1,    73,   437,
     396,   156,   281,     3,    -1,   108,   437,   396,     3,    -1,
     108,   437,   396,   156,   281,     3,    -1,   437,   441,   191,
     159,     3,   271,   446,     4,   448,     4,   448,     4,   447,
      -1,   437,   441,   439,   159,     3,   271,   446,     4,   448,
       4,   448,     4,   447,    -1,   437,   441,   439,   159,     3,
     271,   446,     4,   448,     4,   448,     4,   448,     4,   447,
      -1,   437,   438,    94,     4,    16,     3,    -1,   437,   438,
      94,     4,    16,     3,   440,     5,    -1,   437,   438,    94,
       4,    16,     3,    51,    94,     4,    -1,   591,    -1,   592,
      -1,   593,    -1,    73,   442,   396,     3,    -1,    73,   442,
     396,   156,   281,     3,    -1,   108,   442,   396,     3,    -1,
     108,   442,   396,   156,   281,     3,    -1,   442,   398,   159,
       3,   271,   446,     4,   448,     4,   447,    -1,   442,   398,
     159,     3,   271,   446,     4,   448,     4,   448,     4,   447,
      -1,   442,   399,   136,     3,   274,   164,    20,     4,    -1,
     442,   443,   136,     3,    -1,   442,   443,   136,     3,   179,
       5,    -1,   594,    -1,   206,   252,     3,    -1,   595,    -1,
     597,     3,   596,   598,    -1,   597,     3,   445,     3,   596,
     598,    -1,    -1,   277,    44,     5,    45,    -1,   277,    44,
       5,    46,    -1,    41,   252,    -1,    -1,   258,    42,   197,
     599,    -1,   258,    42,   197,   599,   277,     5,    43,    -1,
     108,    42,   197,   599,    -1,     3,    -1,   599,   448,     3,
      -1,   608,    -1,   600,    -1,   607,    -1,    73,   221,     3,
     197,     3,   601,   602,   603,   605,   606,    -1,    73,   221,
       3,   197,   404,   396,     3,   601,   602,   603,   605,   606,
      -1,    -1,    51,   223,    -1,    51,   224,    -1,    -1,   140,
      40,    -1,   140,   241,    -1,   140,   157,    -1,   140,   258,
      -1,   140,   107,    -1,    -1,   245,   604,    -1,     3,    -1,
     604,   448,     3,    -1,    -1,   266,   446,   453,   447,    -1,
      -1,   277,    78,   446,   453,   447,    -1,   108,   221,     3,
     197,     3,    -1,   108,   221,     3,   197,   404,   396,     3,
      -1,    37,   252,     3,    38,    71,     3,    78,   446,   453,
     447,    -1,    37,   252,     3,    38,    71,     3,   261,   446,
     655,   447,    -1,    37,   252,     3,    38,    71,     3,   134,
     164,   446,   652,   447,   207,     3,   446,   653,   447,   654,
      -1,    37,   252,     3,    38,    71,     3,    78,   446,   453,
     447,    18,   269,    -1,    37,   252,     3,    38,    71,     3,
     134,   164,   446,   652,   447,   207,     3,   446,   653,   447,
     654,    18,   269,    -1,    37,   252,     3,    38,    71,     3,
     201,   164,   446,   651,   447,    -1,    37,   252,     3,   108,
      71,     3,    -1,    37,   252,     3,   208,    71,     3,   245,
       3,    -1,    37,   252,     3,   120,    71,     3,    -1,    37,
     252,     3,   100,    71,     3,    -1,    37,   252,     3,   269,
      71,     3,    -1,    37,   252,     3,    38,    84,     3,   662,
     657,   609,    -1,    37,   252,     3,   108,    84,     3,    -1,
      37,   252,     3,   108,     3,    -1,    37,   252,     3,   208,
      84,     3,   245,     3,    -1,    37,   252,     3,   208,     3,
     245,     3,    -1,    37,   252,     3,   187,    84,     3,   662,
     657,   609,    -1,    37,   252,     3,   187,     3,   662,   657,
     609,    -1,    37,   252,     3,    75,    84,     3,     3,   662,
     657,   609,    -1,    37,   252,     3,    75,     3,     3,   662,
     657,   609,    -1,    37,   252,     3,   120,   217,     3,   222,
      -1,    37,   252,     3,   100,   217,     3,   222,    -1,    37,
     404,   396,     3,   120,   217,     3,   222,    -1,    37,   404,
     396,     3,   100,   217,     3,   222,    -1,    37,   252,     3,
     240,   423,    20,     4,    -1,    37,   252,     3,   108,   422,
      -1,    -1,   130,    -1,    39,     3,    -1,   610,    -1,   157,
     618,   619,     3,   620,   271,   622,   611,   613,   688,    -1,
     157,   618,   619,     3,   620,   492,    -1,    -1,    -1,   199,
     164,   258,   612,   617,    -1,    -1,   197,    88,   614,   615,
      -1,    -1,   446,     3,   447,    -1,   446,     3,   448,     3,
      -1,   101,    90,    -1,    -1,   101,   258,   616,   240,   617,
      -1,     3,    20,   453,    -1,   617,   448,     3,    20,   453,
      -1,    -1,   618,   176,    -1,   618,   103,    -1,   618,   146,
      -1,   618,   154,    -1,   159,    -1,    -1,    -1,   446,   621,
     447,    -1,     3,    -1,   621,   448,     3,    -1,   446,   624,
     447,    -1,    -1,   622,   448,   623,   446,   624,   447,    -1,
     453,    -1,   113,    -1,   624,   448,   453,    -1,   624,   448,
     113,    -1,   157,   618,   619,     3,   240,   625,   611,    -1,
       3,    20,   453,    -1,     3,    20,   113,    -1,   625,   448,
       3,    20,   453,    -1,   625,   448,     3,    20,   113,    -1,
     626,    -1,   216,   618,   619,     3,   620,   271,   622,   611,
      -1,   216,   618,   619,     3,   240,   625,   611,    -1,   216,
     618,   619,     3,   620,   492,   611,    -1,   627,    -1,    -1,
      86,     3,   628,   629,   631,   632,   633,    -1,    -1,   446,
     630,   447,    -1,     3,    -1,   630,   448,     3,    -1,   136,
      -1,   245,    -1,     4,    -1,   236,    -1,   237,    -1,    -1,
     634,    -1,   277,   446,   634,   447,    -1,   446,   634,   447,
      -1,   635,    -1,   634,   448,   635,    -1,   135,    87,    -1,
     135,   249,    -1,    99,     4,    -1,   143,    -1,   143,     6,
      -1,   193,     4,    -1,   242,     4,    -1,    87,    -1,   636,
      -1,   258,   637,   515,   240,   638,   493,   503,   506,   688,
      -1,    -1,   618,   176,    -1,   618,   154,    -1,     3,    20,
     453,    -1,     3,   445,     3,    20,   453,    -1,   638,   448,
       3,    20,   453,    -1,   638,   448,     3,   445,     3,    20,
     453,    -1,   208,   252,     3,   245,     3,    -1,   639,    -1,
      73,    95,   640,     3,    -1,    73,   227,   640,     3,    -1,
     108,    95,     3,    -1,   108,    95,   156,   281,     3,    -1,
     108,   227,     3,    -1,   108,   227,   156,   281,     3,    -1,
      -1,   156,   281,    -1,   641,    -1,    73,   102,     3,    51,
     662,    -1,    73,   102,     3,    51,   662,   113,   453,    -1,
      73,   102,     3,    51,   662,    18,   193,    -1,    73,   102,
       3,    51,   662,    78,   446,   453,   447,    -1,    73,   102,
       3,    51,   662,    18,   193,    78,   446,   453,   447,    -1,
     642,    -1,   267,     3,    -1,   267,    95,     3,    -1,   643,
      -1,    73,   648,   252,   640,     3,   446,   649,   447,   645,
     644,    -1,    -1,   172,   446,     3,   447,    -1,    73,   648,
     252,   640,     3,   445,     3,   446,   649,   447,   645,    -1,
      73,   648,   252,   640,     3,   351,    94,     3,   140,   271,
     136,   446,     5,   447,   245,   446,     5,   447,    -1,    -1,
     645,    48,    20,     5,    -1,   645,    48,     5,    -1,   645,
     197,     3,   107,     3,    -1,   645,   197,     3,   248,     3,
      -1,   645,   228,    63,   268,   446,     3,   447,   229,     5,
      -1,   645,   228,    63,   204,   446,     3,   447,   446,   646,
     447,    -1,   645,   351,    63,   204,   446,     3,   447,    -1,
     645,   277,   415,   416,    -1,   645,   277,   446,   423,    20,
       4,   447,    -1,   647,    -1,   646,   448,   647,    -1,   228,
       3,   271,   174,   250,     4,   197,   191,     5,    -1,   228,
       3,   271,   174,   250,   184,   197,   191,     5,    -1,    73,
     648,   252,   640,     3,   446,   649,   447,   664,    -1,    73,
     648,   252,   640,     3,   664,    -1,    73,   648,   252,   640,
       3,   445,     3,   446,   649,   447,   664,    -1,    73,   648,
     252,   640,     3,   445,     3,   664,    -1,    -1,   246,    -1,
     247,   246,    -1,   650,    -1,   649,   448,   650,    -1,   201,
     164,   446,   651,   447,    -1,    71,     3,   201,   164,   446,
     651,   447,    -1,   164,   446,   510,   447,    -1,   155,   446,
     510,   447,    -1,   138,   155,   446,   510,   447,    -1,   138,
     164,   446,   510,   447,    -1,    78,   446,   453,   447,    -1,
      71,     3,    78,   446,   453,   447,    -1,   134,   164,   446,
     652,   447,   207,     3,   446,   653,   447,   654,    -1,   134,
     164,   446,   652,   447,   207,     3,   445,     3,   446,   653,
     447,   654,    -1,    71,     3,   134,   164,   446,   652,   447,
     207,     3,   446,   653,   447,   654,    -1,    71,     3,   134,
     164,   446,   652,   447,   207,     3,   445,     3,   446,   653,
     447,   654,    -1,   261,   446,   655,   447,    -1,    71,     3,
     261,   446,   655,   447,    -1,     3,    -1,   651,   448,     3,
      -1,     3,    -1,   652,   448,     3,    -1,     3,    -1,   653,
     448,     3,    -1,    -1,   654,   197,   107,    74,    -1,   654,
     197,   107,   240,   193,    -1,   654,   197,   107,   210,    -1,
     654,   197,   107,   240,   113,    -1,   654,   197,   258,    74,
      -1,   654,   197,   258,   240,   193,    -1,   654,   197,   258,
     210,    -1,   654,   197,   258,   240,   113,    -1,   654,   197,
     107,   192,    -1,   654,   197,   258,   192,    -1,   654,   183,
     137,    -1,   654,   183,   235,    -1,   654,   183,   200,    -1,
     654,    97,    -1,   654,    18,    97,    -1,   654,    97,   151,
      98,    -1,   654,    97,   151,   149,    -1,     3,    -1,   655,
     448,     3,    -1,    -1,   656,     3,   662,   657,    -1,    -1,
     657,    18,   193,    -1,   657,   193,    -1,   657,   113,     4,
      -1,   657,   113,     5,    -1,   657,   113,     7,    -1,   657,
     113,     6,    -1,   657,   113,   333,   446,   447,    -1,   657,
     113,   334,   446,   447,    -1,   657,   113,   335,   446,   447,
      -1,   657,   113,    72,    -1,   657,   113,   446,   453,   447,
      -1,   657,    48,    -1,   657,    48,   446,     5,   448,     5,
     447,    -1,   657,    48,   446,     5,   447,    -1,   657,    53,
     446,     5,   448,     5,   447,    -1,   657,    53,   446,     5,
     447,    -1,   657,    53,    -1,   657,   261,   164,    -1,   657,
     261,    -1,   657,   201,   164,    -1,   657,   164,    -1,   657,
      79,     4,    -1,   657,    78,   446,   453,   447,    -1,   657,
      71,     3,   261,    -1,   657,    71,     3,   201,   164,    -1,
     657,    71,     3,    78,   446,   453,   447,    -1,   657,    56,
      52,    51,   446,   453,   447,    57,    -1,   657,    56,    52,
      51,   446,   453,   447,    58,    -1,   657,    56,    52,    51,
     446,   453,   447,    -1,   657,    51,   446,   453,   447,    57,
      -1,   657,    51,   446,   453,   447,    58,    -1,   657,    51,
     446,   453,   447,    -1,    -1,   446,     5,   447,    -1,   446,
       5,   448,     5,   447,    -1,    -1,    64,    -1,    -1,   660,
     259,    -1,   660,   280,    -1,    -1,   661,    82,   240,     4,
      -1,   661,    83,     4,    -1,    67,   658,    -1,   244,   658,
     660,    -1,   239,   658,   660,    -1,   189,   658,   660,    -1,
     160,   658,   660,    -1,   152,   658,   660,    -1,    66,   658,
     660,    -1,   205,   658,   660,    -1,   114,   658,   660,    -1,
     132,   658,   660,    -1,   116,   658,   660,    -1,   117,    -1,
     257,    -1,   251,    -1,   115,    -1,   278,    -1,    82,   658,
     661,    -1,   270,   446,     5,   447,   661,    -1,    64,   658,
      -1,   272,   446,     5,   447,    -1,   256,    -1,    61,    -1,
     188,    -1,   182,    -1,   243,   659,   661,    -1,   249,   659,
     661,    -1,   185,   659,   661,    -1,   175,   659,   661,    -1,
     123,   446,   663,   447,   661,    -1,   240,   446,   663,   447,
     661,    -1,    62,    -1,   262,    -1,   264,    -1,   273,   446,
       5,   447,    -1,   662,    36,   449,    -1,     4,    -1,   663,
     448,     4,    -1,   665,   520,   492,    -1,    -1,   154,    -1,
     216,    -1,   666,    -1,   240,   227,     3,    -1,   240,   227,
     113,    -1,   240,   667,    -1,   668,    -1,   667,   448,   668,
      -1,     8,    20,   453,    -1,     8,     9,   453,    -1,   669,
      -1,    73,   202,     3,   446,   670,   447,    51,    60,   674,
     124,    -1,    73,   202,     3,   446,   670,   447,    60,   674,
     124,    -1,    73,    10,   216,   202,     3,   446,   670,   447,
      51,    60,   674,   124,    -1,    73,    10,   216,   202,     3,
     446,   670,   447,    60,   674,   124,    -1,    73,   139,     3,
     446,   670,   447,   213,   673,    51,    60,   674,   124,    -1,
      73,   139,     3,   446,   670,   447,   213,   673,    60,   674,
     124,    -1,    73,    10,   216,   139,     3,   446,   670,   447,
     213,   673,    51,    60,   674,   124,    -1,    73,    10,   216,
     139,     3,   446,   670,   447,   213,   673,    60,   674,   124,
      -1,    -1,   671,    -1,   672,    -1,   671,   448,   672,    -1,
       3,   662,    -1,    16,     3,   662,    -1,   195,     3,   662,
      -1,   150,     3,   662,    -1,   152,    -1,   160,    -1,   270,
      -1,   249,    -1,    62,    -1,   132,    -1,   114,    -1,    66,
      -1,   117,    -1,   251,    -1,    -1,   674,   675,    -1,   674,
      60,   674,   124,    -1,   674,   156,   674,   124,   156,    -1,
     674,   276,   674,   124,   276,    -1,   674,   166,   674,   124,
     166,    -1,   674,   131,   674,   124,   131,    -1,   674,    77,
     674,   124,    77,    -1,     3,    -1,     4,    -1,     5,    -1,
       7,    -1,     6,    -1,    20,    -1,    18,    -1,    10,    -1,
      12,    -1,    16,    -1,    50,    -1,   241,    -1,   157,    -1,
     258,    -1,   107,    -1,   136,    -1,   274,    -1,   240,    -1,
     159,    -1,   271,    -1,    73,    -1,   108,    -1,   252,    -1,
     155,    -1,   253,    -1,   125,    -1,   119,    -1,    96,    -1,
     101,    -1,    68,    -1,   211,    -1,   165,    -1,   162,    -1,
      70,    -1,   194,    -1,   129,    -1,    69,    -1,   142,    -1,
     127,    -1,   195,    -1,   150,    -1,   140,    -1,    54,    -1,
     218,    -1,   209,    -1,   126,    -1,   220,    -1,    59,    -1,
     118,    -1,   217,    -1,   219,    -1,    51,    -1,   197,    -1,
     198,    -1,    63,    -1,   141,    -1,   148,    -1,   179,    -1,
     181,    -1,   163,    -1,   177,    -1,   215,    -1,   153,    -1,
     196,    -1,   137,    -1,    76,    -1,   190,    -1,   266,    -1,
     193,    -1,   113,    -1,   201,    -1,   164,    -1,   261,    -1,
      78,    -1,   134,    -1,   207,    -1,    74,    -1,   210,    -1,
     192,    -1,   152,    -1,   160,    -1,   270,    -1,   249,    -1,
      62,    -1,   132,    -1,   114,    -1,    66,    -1,   117,    -1,
     251,    -1,   239,    -1,   116,    -1,    82,    -1,   262,    -1,
      61,    -1,   260,    -1,   122,    -1,   158,    -1,    40,    -1,
     106,    -1,   281,    -1,   275,    -1,   277,    -1,   202,    -1,
     139,    -1,   213,    -1,   446,    -1,   447,    -1,   448,    -1,
     444,    -1,   445,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    17,    -1,   450,    -1,   322,    -1,
     323,    -1,   324,    -1,   325,    -1,   326,    -1,     8,    -1,
     676,    -1,   108,   202,     3,    -1,   108,   202,   156,   281,
       3,    -1,   108,   139,     3,    -1,   108,   139,   156,   281,
       3,    -1,   677,    -1,    68,     3,   446,   447,    -1,    68,
       3,   446,   678,   447,    -1,   679,    -1,   678,   448,   679,
      -1,     5,    -1,     4,    -1,     7,    -1,   193,    -1,     6,
      -1,     3,    -1,     8,    -1,   680,    -1,    73,   219,     3,
     681,   682,   197,     3,   140,   118,   217,    60,   674,   124,
      -1,    73,   219,     3,   681,   682,   197,   404,   396,     3,
     140,   118,   217,    60,   674,   124,    -1,    59,    -1,    39,
      -1,   157,    -1,   258,    -1,   107,    -1,   398,    -1,   683,
      -1,   108,   219,     3,    -1,   108,   219,   156,   281,     3,
      -1,    37,   219,     3,   120,    -1,    37,   219,     3,   100,
      -1,   684,    -1,    73,   371,   640,     3,   685,    -1,    -1,
     685,   686,    -1,   376,   277,     5,    -1,   376,     5,    -1,
     377,    63,     5,    -1,   377,     5,    -1,   378,     5,    -1,
     184,     5,    -1,   379,    -1,    18,   379,    -1,   687,    -1,
     108,   371,     3,    -1,   108,   371,   156,   281,     3,    -1,
      37,   371,     3,   685,    -1,    37,   371,     3,    55,    -1,
      37,   371,     3,    55,   277,     5,    -1,    37,   371,     3,
     208,   245,     3,    -1,    -1,   212,    28,    -1,   212,   689,
      -1,     3,    -1,   689,   448,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   532,   532,   533,   538,   545,   546,   547,   561,   562,
     590,   598,   606,   612,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   645,   645,   654,   654,   656,   656,
     658,   658,   663,   665,   669,   670,   671,   672,   673,   676,
     677,   680,   689,   707,   716,   736,   736,   796,   805,   812,
     816,   818,   820,   825,   830,   835,   843,   845,   847,   849,
     851,   853,   855,   857,   859,   861,   868,   879,   890,   891,
     894,   894,   895,   895,   896,   896,   904,   904,   912,   912,
     923,   927,   928,   929,   930,   931,   932,   933,   934,   938,
     938,   940,   940,   942,   942,   945,   945,   947,   947,   949,
     949,   951,   951,   953,   953,   955,   955,   958,   958,   960,
     960,   962,   962,   964,   964,   966,   966,   968,   968,   970,
     970,   972,   972,   975,   975,   977,   977,   979,   979,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,
    1014,  1015,  1016,  1017,  1018,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,  1050,  1052,  1053,  1054,  1055,  1056,
    1058,  1059,  1061,  1062,  1063,  1065,  1066,  1067,  1068,  1075,
    1082,  1089,  1093,  1097,  1101,  1105,  1109,  1115,  1116,  1117,
    1120,  1126,  1133,  1134,  1135,  1136,  1137,  1138,  1139,  1140,
    1141,  1144,  1146,  1148,  1150,  1154,  1162,  1173,  1174,  1177,
    1178,  1181,  1189,  1197,  1205,  1219,  1229,  1230,  1244,  1260,
    1261,  1262,  1263,  1266,  1273,  1281,  1282,  1283,  1286,  1287,
    1290,  1291,  1295,  1296,  1299,  1301,  1305,  1306,  1309,  1311,
    1315,  1316,  1319,  1320,  1323,  1329,  1336,  1345,  1346,  1347,
    1348,  1358,  1359,  1363,  1364,  1365,  1366,  1367,  1370,  1371,
    1374,  1375,  1378,  1379,  1380,  1381,  1382,  1383,  1384,  1385,
    1386,  1389,  1390,  1391,  1399,  1405,  1406,  1407,  1410,  1411,
    1414,  1415,  1419,  1427,  1437,  1438,  1439,  1448,  1453,  1459,
    1467,  1471,  1471,  1511,  1512,  1516,  1518,  1520,  1522,  1524,
    1528,  1529,  1530,  1533,  1534,  1537,  1538,  1541,  1542,  1543,
    1546,  1547,  1550,  1551,  1555,  1557,  1559,  1561,  1564,  1565,
    1568,  1569,  1572,  1576,  1586,  1594,  1595,  1596,  1597,  1601,
    1605,  1607,  1611,  1611,  1613,  1618,  1625,  1632,  1644,  1645,
    1646,  1650,  1657,  1664,  1672,  1682,  1690,  1700,  1708,  1717,
    1726,  1736,  1744,  1753,  1762,  1772,  1781,  1798,  1806,  1818,
    1819,  1833,  1834,  1837,  1838,  1850,  1860,  1865,  1870,  1876,
    1883,  1890,  1897,  1907,  1914,  1923,  1930,  1936,  1944,  1950,
    1958,  1959,  1960,  1961,  1962,  1978,  1979,  1980,  1989,  1990,
    1994,  2004,  2020,  2021,  2025,  2033,  2042,  2065,  2066,  2067,
    2071,  2088,  2110,  2111,  2116,  2125,  2139,  2148,  2174,  2175,
    2176,  2177,  2178,  2179,  2180,  2184,  2191,  2203,  2206,  2207,
    2211,  2212,  2216,  2218,  2223,  2231,  2240,  2252,  2264,  2279,
    2280,  2285,  2299,  2309,  2323,  2337,  2345,  2356,  2362,  2373,
    2379,  2386,  2392,  2414,  2415,  2416,  2417,  2421,  2430,  2447,
    2455,  2466,  2477,  2497,  2498,  2499,  2503,  2513,  2526,  2535,
    2547,  2555,  2576,  2577,  2578,  2582,  2594,  2619,  2631,  2646,
    2658,  2670,  2679,  2689,  2698,  2708,  2732,  2733,  2734,  2738,
    2745,  2755,  2758,  2759,  2763,  2764,  2768,  2770,  2775,  2783,
    2794,  2805,  2817,  2826,  2836,  2846,  2857,  2875,  2876,  2877,
    2881,  2889,  2900,  2908,  2919,  2930,  2942,  2954,  2963,  2973,
    2992,  2993,  2994,  2998,  3006,  3017,  3025,  3036,  3047,  3058,
    3067,  3075,  3087,  3094,  3103,  3111,  3117,  3132,  3134,  3138,
    3147,  3160,  3162,  3166,  3171,  3178,  3183,  3191,  3195,  3196,
    3200,  3212,  3223,  3224,  3225,  3229,  3230,  3231,  3232,  3233,
    3234,  3237,  3239,  3243,  3244,  3247,  3249,  3252,  3254,  3258,
    3265,  3274,  3280,  3286,  3293,  3299,  3306,  3312,  3318,  3324,
    3330,  3336,  3342,  3348,  3354,  3360,  3366,  3372,  3378,  3384,
    3390,  3396,  3409,  3419,  3429,  3439,  3445,  3453,  3454,  3455,
    3458,  3466,  3472,  3485,  3486,  3486,  3490,  3491,  3494,  3495,
    3496,  3500,  3501,  3501,  3505,  3513,  3523,  3524,  3525,  3526,
    3527,  3530,  3530,  3533,  3534,  3537,  3547,  3560,  3561,  3561,
    3564,  3565,  3566,  3567,  3570,  3574,  3575,  3576,  3577,  3583,
    3586,  3592,  3597,  3603,  3607,  3607,  3612,  3613,  3615,  3616,
    3620,  3621,  3625,  3626,  3627,  3630,  3631,  3632,  3633,  3637,
    3638,  3642,  3643,  3644,  3645,  3646,  3647,  3648,  3649,  3653,
    3661,  3670,  3671,  3672,  3676,  3687,  3699,  3710,  3725,  3730,
    3734,  3735,  3739,  3741,  3743,  3745,  3749,  3750,  3756,  3760,
    3762,  3764,  3766,  3768,  3773,  3777,  3778,  3782,  3791,  3804,
    3805,  3813,  3821,  3829,  3830,  3831,  3832,  3833,  3834,  3836,
    3838,  3843,  3848,  3852,  3853,  3856,  3871,  3878,  3893,  3906,
    3921,  3934,  3935,  3936,  3939,  3940,  3943,  3944,  3945,  3946,
    3947,  3948,  3949,  3950,  3951,  3953,  3955,  3957,  3959,  3961,
    3965,  3966,  3969,  3970,  3973,  3974,  3977,  3978,  3979,  3980,
    3981,  3982,  3983,  3984,  3985,  3986,  3987,  3988,  3989,  3990,
    3991,  3992,  3993,  3994,  3997,  3998,  4001,  4001,  4011,  4012,
    4013,  4014,  4015,  4016,  4017,  4018,  4019,  4020,  4021,  4022,
    4029,  4030,  4031,  4032,  4033,  4034,  4035,  4036,  4037,  4038,
    4039,  4040,  4041,  4042,  4043,  4044,  4045,  4046,  4047,  4048,
    4049,  4052,  4053,  4054,  4057,  4058,  4061,  4062,  4063,  4066,
    4067,  4068,  4072,  4073,  4074,  4075,  4076,  4077,  4078,  4079,
    4080,  4081,  4082,  4083,  4084,  4085,  4086,  4087,  4088,  4089,
    4090,  4091,  4092,  4093,  4094,  4095,  4096,  4097,  4098,  4099,
    4100,  4101,  4102,  4103,  4104,  4105,  4106,  4109,  4110,  4113,
    4126,  4127,  4128,  4132,  4135,  4136,  4137,  4138,  4138,  4140,
    4141,  4149,  4153,  4159,  4165,  4172,  4179,  4185,  4191,  4198,
    4207,  4208,  4211,  4212,  4215,  4216,  4217,  4218,  4221,  4222,
    4223,  4224,  4225,  4226,  4227,  4228,  4229,  4230,  4237,  4238,
    4239,  4240,  4241,  4242,  4243,  4244,  4247,  4248,  4249,  4249,
    4249,  4250,  4250,  4250,  4250,  4250,  4250,  4251,  4251,  4251,
    4251,  4251,  4251,  4251,  4251,  4251,  4252,  4252,  4252,  4252,
    4252,  4252,  4252,  4253,  4253,  4253,  4253,  4254,  4254,  4254,
    4254,  4254,  4254,  4254,  4254,  4254,  4254,  4254,  4254,  4255,
    4255,  4255,  4255,  4255,  4255,  4255,  4255,  4256,  4256,  4256,
    4256,  4256,  4256,  4256,  4256,  4257,  4257,  4257,  4257,  4257,
    4257,  4257,  4257,  4257,  4258,  4258,  4258,  4258,  4258,  4258,
    4258,  4258,  4259,  4259,  4259,  4260,  4260,  4260,  4260,  4260,
    4260,  4260,  4260,  4261,  4261,  4261,  4261,  4261,  4261,  4261,
    4262,  4262,  4262,  4262,  4262,  4262,  4262,  4263,  4263,  4263,
    4263,  4264,  4264,  4264,  4264,  4264,  4264,  4264,  4264,  4264,
    4264,  4264,  4264,  4265,  4265,  4265,  4265,  4265,  4266,  4273,
    4277,  4283,  4289,  4295,  4307,  4311,  4317,  4325,  4326,  4329,
    4330,  4331,  4332,  4333,  4334,  4335,  4342,  4346,  4352,  4368,
    4369,  4372,  4373,  4374,  4375,  4378,  4382,  4388,  4397,  4405,
    4416,  4420,  4429,  4430,  4434,  4435,  4436,  4437,  4438,  4439,
    4440,  4441,  4444,  4448,  4454,  4464,  4471,  4478,  4486,  4496,
    4497,  4498,  4501,  4502
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
  "FILTER", "GRAPH", "NEIGHBORS", "EDGE", "DEPTH", "UPSERT", "ENTITY",
  "RANK", "';'", "'.'", "'('", "')'", "','", "']'", "'='", "$accept",
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
  "drop_doc_store_stmt", "doc_dml_stmt", "create_graph_store_stmt",
  "drop_graph_store_stmt", "graph_dml_stmt", "create_entity_store_stmt",
  "drop_entity_store_stmt", "entity_dml_stmt", "reclaim_table_stmt",
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
     685,   686,   687,   688,    59,    46,    40,    41,    44,    93,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   451,   452,   452,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   454,   453,   455,   453,   456,   453,
     457,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   458,   458,   459,   459,   460,   453,   453,   453,   461,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   462,   462,
     463,   453,   464,   453,   465,   453,   466,   453,   467,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   468,
     453,   469,   453,   470,   453,   471,   453,   472,   453,   473,
     453,   474,   453,   475,   453,   476,   453,   477,   453,   478,
     453,   479,   453,   480,   453,   481,   453,   482,   453,   483,
     453,   484,   453,   485,   453,   486,   453,   487,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   488,   488,   488,
     453,   453,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   453,   453,   453,   453,   490,   490,   453,   453,   453,
     453,   453,   453,   453,   453,   491,   492,   492,   492,   493,
     493,   494,   494,   495,   495,   496,   496,   496,   497,   497,
     498,   498,   499,   499,   500,   500,   501,   501,   502,   502,
     503,   503,   504,   504,   505,   505,   505,   506,   506,   506,
     506,   507,   507,   508,   508,   508,   508,   508,   509,   509,
     510,   510,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   512,   512,   512,   513,   514,   514,   514,   515,   515,
     516,   516,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   519,   518,   520,   520,   521,   521,   521,   521,   521,
     522,   522,   522,   523,   523,   524,   524,   525,   525,   525,
     526,   526,   527,   527,   528,   528,   528,   528,   529,   529,
     530,   530,   531,   491,   532,   533,   533,   533,   533,   532,
     534,   534,   535,   535,   532,   491,   536,   536,   537,   537,
     537,   491,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   539,
     539,   540,   540,   541,   541,   542,   543,   543,   543,   544,
     544,   544,   544,   491,   545,   491,   546,   546,   547,   547,
     548,   548,   548,   548,   548,   491,   491,   491,   491,   491,
     549,   549,   550,   550,   551,   551,   551,   491,   491,   491,
     552,   552,   553,   553,   554,   554,   555,   555,   491,   491,
     491,   491,   491,   491,   491,   556,   556,   557,   558,   558,
     559,   559,   560,   560,   561,   561,   561,   562,   562,   563,
     563,   564,   565,   565,   566,   567,   567,   568,   568,   569,
     569,   570,   570,   491,   491,   491,   491,   571,   571,   572,
     572,   573,   574,   491,   491,   491,   575,   575,   576,   576,
     577,   577,   491,   491,   491,   578,   578,   579,   579,   580,
     580,   580,   580,   580,   580,   580,   491,   491,   491,   581,
     581,   582,   583,   583,   584,   584,   585,   585,   586,   586,
     587,   587,   587,   587,   587,   587,   587,   491,   491,   491,
     588,   588,   589,   589,   590,   590,   590,   590,   590,   590,
     491,   491,   491,   591,   591,   592,   592,   593,   593,   593,
     593,   593,   491,   594,   491,   595,   595,   596,   596,   596,
     597,   598,   598,   598,   598,   599,   599,   491,   491,   491,
     600,   600,   601,   601,   601,   602,   602,   602,   602,   602,
     602,   603,   603,   604,   604,   605,   605,   606,   606,   607,
     607,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   609,   609,   609,
     491,   610,   610,   611,   612,   611,   613,   613,   614,   614,
     614,   615,   616,   615,   617,   617,   618,   618,   618,   618,
     618,   619,   619,   620,   620,   621,   621,   622,   623,   622,
     624,   624,   624,   624,   610,   625,   625,   625,   625,   491,
     626,   626,   626,   491,   628,   627,   629,   629,   630,   630,
     631,   631,   632,   632,   632,   633,   633,   633,   633,   634,
     634,   635,   635,   635,   635,   635,   635,   635,   635,   491,
     636,   637,   637,   637,   638,   638,   638,   638,   491,   491,
     639,   639,   491,   491,   491,   491,   640,   640,   491,   641,
     641,   641,   641,   641,   491,   642,   642,   491,   643,   644,
     644,   643,   643,   645,   645,   645,   645,   645,   645,   645,
     645,   645,   645,   646,   646,   647,   647,   643,   643,   643,
     643,   648,   648,   648,   649,   649,   650,   650,   650,   650,
     650,   650,   650,   650,   650,   650,   650,   650,   650,   650,
     651,   651,   652,   652,   653,   653,   654,   654,   654,   654,
     654,   654,   654,   654,   654,   654,   654,   654,   654,   654,
     654,   654,   654,   654,   655,   655,   656,   650,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   658,   658,   658,   659,   659,   660,   660,   660,   661,
     661,   661,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   663,   663,   664,
     665,   665,   665,   491,   666,   666,   666,   667,   667,   668,
     668,   491,   669,   669,   669,   669,   669,   669,   669,   669,
     670,   670,   671,   671,   672,   672,   672,   672,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   674,   674,
     674,   674,   674,   674,   674,   674,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   491,
     676,   676,   676,   676,   491,   677,   677,   678,   678,   679,
     679,   679,   679,   679,   679,   679,   491,   680,   680,   681,
     681,   682,   682,   682,   682,   491,   683,   683,   491,   491,
     491,   684,   685,   685,   686,   686,   686,   686,   686,   686,
     686,   686,   491,   687,   687,   491,   491,   491,   491,   688,
     688,   688,   689,   689
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
       1,     1,     1,     4,     6,     4,     6,    10,    12,     8,
       4,     6,     1,     3,     1,     4,     6,     0,     4,     4,
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
       0,     0,     0,     0,   751,     0,   368,     0,   646,     0,
       0,     0,     0,     0,   646,     0,   302,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,   363,   375,   381,   413,   420,   428,   429,   437,   438,
     439,   448,   449,   450,   451,   452,   453,   454,   425,   426,
     427,   483,   484,   485,   486,   493,   494,   495,   502,   503,
     504,   516,   517,   518,   537,   538,   539,   550,   551,   552,
     562,   564,     0,   578,   579,   577,   630,   669,   673,   699,
     709,   718,   724,   727,   883,   891,  1049,  1054,  1066,  1075,
    1080,  1092,     0,     0,     0,     0,     0,   570,     0,     0,
     716,     0,     0,     0,     0,     0,     0,     0,   716,   752,
       0,     0,   716,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   652,   477,   481,   479,   480,     0,     0,   652,     0,
       0,   886,   887,     0,     0,     0,     0,   725,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,   415,   567,     0,     0,  1082,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   753,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   716,   676,
     372,     0,   367,   365,   366,     0,   712,     0,  1052,     0,
     414,  1050,     0,  1076,     0,     0,   714,     0,   378,     0,
    1093,     0,     0,     0,   489,     0,   498,     0,     0,     0,
       0,     0,   648,   649,   650,   651,   647,     0,   478,     0,
     563,     0,     0,     0,     0,   884,   885,     0,     4,     9,
      10,    12,    11,     8,     0,     0,     0,   313,   303,   251,
       0,   252,   253,     0,   304,   305,   306,     0,    13,   254,
     308,   310,   309,   307,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   317,   256,   311,   416,   703,   702,   317,
       0,     0,     0,     0,     0,   318,   320,   334,   321,   334,
     726,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     491,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,   421,
     422,     0,     0,   571,  1079,  1078,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1096,     0,  1095,     0,   501,
     500,  1064,  1060,  1059,  1063,  1061,  1065,  1062,  1055,     0,
    1057,     0,     0,   717,   710,     0,     0,   900,     0,     0,
       0,     0,   900,  1070,  1069,     0,     0,   711,     0,     0,
       0,  1082,   432,     0,   457,     0,     0,     0,     0,     0,
     505,   521,     0,   540,     0,   553,     0,     0,     0,     0,
       0,   370,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,   376,     0,     0,   434,     0,   464,
       0,     0,     0,   507,     0,   528,     0,   542,     0,   555,
       0,   653,   482,     0,   653,   890,   889,   888,     0,    78,
       0,    32,    31,    20,     0,     0,     0,     0,     0,    55,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   316,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,     0,     0,     0,     0,     0,   357,
     331,   317,     0,     0,     0,     0,     0,   342,   341,   345,
     349,   346,     0,     0,   343,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   560,   424,   423,     0,   567,     0,     0,   565,     0,
       0,     0,     0,     0,     0,   614,     0,     0,   626,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1090,  1083,     0,     0,  1056,
       0,     0,     0,   863,   872,   831,   831,   831,   831,   831,
     856,   831,   853,     0,   831,   831,   831,   834,   865,   834,
     864,   831,   831,   831,     0,   834,   831,   834,   855,   862,
     854,   873,   874,     0,     0,     0,   857,   719,     0,     0,
       0,     0,     0,     0,   901,   902,     0,     0,     0,     0,
       0,  1073,  1071,  1072,  1074,     0,   582,     0,     0,     0,
       0,     0,  1081,     0,   430,     0,   458,     0,     0,     0,
       0,     0,     0,   522,     0,     0,     0,   880,   678,     0,
     680,   681,     0,   373,     0,   280,     0,   259,   372,   713,
    1053,  1051,  1077,   599,     0,   715,   378,  1094,   435,     0,
     465,     0,   490,   499,     0,     0,     0,     0,     0,     0,
       0,   708,     0,     0,     5,    51,    79,     0,    48,     0,
       0,   243,     0,     0,     6,     0,    57,     0,     0,     0,
     229,   227,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,     0,     0,     0,   174,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,     0,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,    21,    23,
      24,    22,   249,   247,    46,     0,    44,   215,    80,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    33,    74,
      73,    25,    26,    28,    14,    15,    16,    17,    18,    19,
      27,    30,    29,     0,   315,   291,     0,   312,   418,   417,
     317,     0,     0,     0,   322,     0,   357,     0,   362,   330,
       0,   259,   319,   343,   343,     0,   336,     0,   344,     0,
     326,   325,     0,     0,     0,     0,     0,     0,     0,   475,
       0,   492,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   571,     0,     0,
       0,     0,     0,     0,   610,     0,   607,   613,   609,     0,
     798,     0,     0,     0,     0,     0,   611,  1097,  1098,  1091,
    1089,  1085,     0,  1087,     0,  1088,     0,     0,  1058,   900,
     900,     0,   860,   836,   842,   839,   836,   836,     0,   836,
     836,   836,   835,   839,   839,   836,   836,   836,     0,   839,
     836,   839,     0,     0,     0,     0,     0,     0,     0,     0,
     904,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   585,     0,     0,     0,     0,     0,
       0,   432,     0,   455,   457,   487,     0,     0,     0,     0,
       0,   519,   521,   541,   554,   881,   882,     0,     0,   796,
     748,   334,   677,     0,   682,   683,   684,   685,   260,     0,
     287,   259,   369,   371,     0,   377,   436,   466,   508,   529,
     543,   556,     0,   633,   655,     0,     0,   632,   633,     0,
     633,     0,    90,     0,   241,     0,     0,     0,     0,    53,
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
       0,     0,     0,   536,     0,     0,   532,   547,     0,     0,
       0,     0,   561,   568,   569,   566,     0,     0,     0,     0,
       0,     0,   798,   798,     0,   622,   621,   627,   798,   616,
       0,     0,   625,  1084,  1086,     0,     0,     0,     0,     0,
     848,   858,   850,   852,   877,     0,   851,   847,   846,   869,
     868,   845,   849,   844,     0,   866,   843,   867,     0,     0,
       0,   721,   876,     0,   720,     0,   905,   907,   906,     0,
     903,     0,     0,   406,     0,     0,     0,     0,     0,   408,
       0,     0,     0,     0,     0,   918,     0,     0,   583,   584,
       0,   591,   582,     0,     0,     0,     0,     0,     0,   431,
       0,   458,     0,     0,     0,     0,     0,   522,     0,   880,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   754,
       0,     0,   679,   698,     0,     0,   694,     0,     0,     0,
       0,   675,   686,   689,     0,     0,  1099,   374,   600,     0,
       0,     0,   664,   654,     0,     0,   633,   671,   633,   672,
      52,   245,     0,   244,     0,     0,     0,    56,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,   101,   103,     0,     0,     0,     0,
       0,   135,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    59,     0,     0,     0,     0,     0,     0,   261,   259,
     419,   324,     0,     0,     0,     0,   332,     0,   704,     0,
       0,   287,   339,   337,     0,     0,   335,   351,     0,   442,
     443,     0,     0,     0,     0,     0,   469,   470,     0,     0,
     476,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   575,   574,   572,     0,
       0,     0,     0,   627,   627,   798,     0,     0,   810,     0,
     815,     0,     0,     0,     0,     0,   628,   819,   800,     0,
     817,   618,   627,   608,   615,   624,   623,     0,     0,   832,
       0,   837,   838,     0,     0,   839,     0,   839,   839,   861,
     875,     0,     0,     0,   912,   915,   914,   916,   913,   908,
     909,   911,   917,   910,     0,     0,     0,     0,     0,     0,
       0,   382,     0,     0,     0,     0,     0,     0,   918,     0,
       0,     0,   586,   590,   588,   587,   589,     0,   595,   585,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     460,   456,   488,   496,     0,     0,     0,     0,     0,   524,
     520,     0,   796,   750,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   733,   796,     0,   879,   693,   691,   692,
     695,   696,   697,     0,     0,     0,   265,   265,   281,   282,
     288,     0,   364,   666,   665,     0,     0,   656,   661,   660,
       0,   658,   636,   670,   242,   246,     0,    54,     0,   141,
     140,     0,   145,     0,     0,   230,   231,   176,   154,   155,
       0,     0,   159,   160,   161,   165,   167,   169,   210,   211,
     212,   213,     0,    98,   107,   109,   105,   111,   113,   115,
     151,     0,     0,   153,   226,   272,   272,   272,   117,     0,
       0,   125,     0,     0,   133,   272,   272,   183,     0,     0,
       0,   195,   196,     0,     0,   199,     0,   202,     0,   207,
       0,    61,    63,    66,    67,    68,    69,     0,     0,     0,
     150,    81,    85,     0,     0,    50,     0,     0,    42,     0,
      43,    35,     0,     0,   270,   261,   358,     0,     0,     0,
     328,     0,     0,     0,  1099,   352,     0,   338,     0,     0,
     445,   447,     0,     0,     0,   473,   513,     0,     0,   511,
     534,     0,     0,   533,     0,   548,     0,     0,     0,   559,
       0,     0,     0,     0,     0,   794,     0,   612,   620,   627,
     799,   629,     0,     0,     0,     0,     0,     0,   820,   801,
     802,   804,   803,   808,     0,     0,     0,     0,   818,   816,
     617,     0,     0,   918,     0,     0,   841,   870,   878,   871,
     859,     0,   722,   383,     0,   918,     0,   399,     0,     0,
       0,     0,   407,     0,   391,     0,     0,     0,     0,     0,
     926,   927,   928,   930,   929,  1048,   933,   934,   935,  1041,
     932,   931,  1036,  1037,  1038,  1039,  1040,  1023,   936,   977,
     968,   973,   918,  1019,  1009,   980,  1012,   955,   962,   959,
     946,  1002,   991,   918,   999,  1017,   953,   954,  1024,   940,
     947,   995,  1011,  1016,  1013,   974,   952,  1021,   893,   951,
     971,   964,   961,   918,  1010,  1000,   941,   990,  1029,   967,
     981,   963,   982,   966,  1005,   988,   949,   918,   938,  1022,
     944,  1006,   958,   985,   997,   957,   918,   986,   983,   984,
     992,  1004,   994,   960,   965,   989,   978,   979,   996,  1028,
    1001,   970,  1003,   956,  1030,   987,   975,   969,   976,   972,
    1015,   943,   937,  1008,  1014,   948,   950,   939,  1020,   998,
    1018,   993,  1007,   945,   942,  1026,   918,  1027,  1025,  1043,
    1044,  1045,  1046,  1047,  1034,  1035,  1031,  1032,  1033,  1042,
     919,     0,     0,   593,   592,     0,   597,   591,     0,   385,
       0,     0,     0,     0,     0,     0,     0,     0,   459,     0,
       0,     0,     0,     0,   523,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   300,     0,     0,     0,
       0,   729,   747,   755,   798,     0,   688,   690,   266,   267,
       0,   284,   286,     0,     0,     0,  1102,  1100,  1101,   634,
       0,   657,     0,     0,     0,  1099,     0,     0,     0,   144,
     233,   234,   235,   236,   239,   238,   240,   232,   237,     0,
       0,     0,   272,   272,   272,   272,   272,   272,     0,     0,
       0,   276,   276,   276,   272,     0,     0,     0,   272,     0,
       0,     0,   272,   276,   276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    87,    41,    37,
      39,     0,     0,     0,   280,   270,   360,     0,     0,     0,
       0,   705,   706,     0,   700,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   549,     0,     0,
       0,   576,     0,   601,   772,     0,   770,     0,   602,     0,
     619,     0,     0,     0,     0,     0,     0,   822,     0,     0,
       0,     0,     0,     0,   918,     0,   833,   840,     0,   918,
       0,   387,   400,     0,   409,   410,   411,     0,     0,     0,
       0,     0,   384,   892,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   580,   595,     0,     0,   393,
       0,     0,     0,   433,   462,   463,   461,   497,   506,   526,
     527,   525,     0,   733,     0,     0,     0,     0,   762,     0,
       0,     0,   759,     0,   758,     0,   768,     0,     0,     0,
       0,     0,     0,   728,   797,   687,   265,   283,   290,   289,
       0,     0,   668,   667,   663,   662,     0,   638,   631,     7,
     142,   139,   156,   157,   214,   276,   276,   276,   276,   276,
     276,   216,     0,   152,     0,     0,     0,     0,     0,   276,
     119,     0,     0,   276,   127,     0,     0,   276,     0,     0,
     192,   193,   194,   197,   198,     0,   203,   208,     0,     0,
       0,     0,   265,   268,   271,   287,   280,   356,     0,   355,
     354,     0,     0,   353,     0,     0,     0,     0,     0,   514,
       0,     0,   512,   535,     0,     0,     0,   557,     0,   573,
       0,     0,     0,   606,     0,   795,   812,     0,   830,   814,
       0,     0,     0,   823,   821,   805,   806,   807,   809,     0,
     918,     0,   895,   723,     0,   897,   401,     0,   395,   392,
       0,   399,   920,     0,     0,     0,     0,     0,   918,     0,
     594,     0,     0,   597,   389,     0,     0,     0,   386,     0,
     731,   749,     0,     0,     0,     0,     0,   760,   761,   301,
     756,   735,     0,     0,     0,     0,     0,     0,     0,   285,
    1103,     0,   635,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   274,   273,     0,   100,   102,   104,     0,
     272,     0,     0,     0,   272,     0,     0,     0,   136,   138,
       0,     0,     0,     0,   292,   263,     0,     0,   262,   293,
     287,   361,   329,   707,     0,     0,     0,     0,     0,   515,
       0,     0,     0,     0,     0,   604,     0,   773,   771,     0,
     828,   829,     0,     0,     0,   918,     0,   894,   896,     0,
     397,   412,   388,     0,   925,   924,   921,   923,   922,     0,
       0,   596,     0,   581,   396,   394,     0,     0,   763,     0,
       0,   769,     0,   734,     0,     0,     0,     0,     0,   741,
       0,     0,     0,     0,   659,     0,     0,   637,   108,   110,
     106,   112,   114,   116,   217,     0,   265,   277,   118,   276,
     121,   123,   126,   276,   129,   131,   134,   200,    75,     0,
       0,   269,   265,     0,   298,   258,     0,     0,   474,   467,
       0,   471,   509,     0,   530,     0,     0,     0,   558,     0,
     811,   813,   827,   824,     0,   899,     0,   401,  1067,   918,
       0,   390,     0,     0,   757,     0,   730,   736,   737,     0,
       0,     0,     0,   644,     0,   639,     0,   641,   642,   275,
     278,     0,     0,   272,   272,     0,   272,   272,     0,     0,
     264,   295,   294,     0,   257,     0,     0,     0,     0,     0,
     544,   545,     0,     0,   825,   826,   898,     0,     0,   403,
     398,     0,   598,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   640,     0,   265,   120,   276,   276,   128,   276,
     276,    76,    77,     0,     0,   299,     0,     0,   468,   510,
     531,     0,   774,     0,     0,   402,     0,  1068,     0,     0,
       0,     0,     0,     0,   742,   740,   645,     0,   279,     0,
       0,     0,     0,   297,   296,     0,     0,   546,   776,     0,
     405,   404,     0,     0,     0,     0,   776,     0,     0,   643,
     122,   124,   130,   132,     0,     0,   603,   775,     0,     0,
       0,     0,   764,     0,     0,   743,   738,     0,     0,     0,
     790,     0,     0,   732,     0,   776,   776,     0,     0,   739,
       0,     0,     0,   791,   605,     0,   787,   789,   788,     0,
       0,     0,   766,   765,     0,   744,     0,     0,   792,   793,
     777,   785,   779,     0,   781,   786,   783,     0,   776,     0,
     440,     0,   780,   778,   784,   782,   767,     0,   441,     0,
       0,     0,     0,     0,     0,   745,   746
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,   905,  1377,  1642,  1644,  1640,   906,  1260,   917,
    1643,   907,  1367,  1636,  1368,  1637,   918,  1885,  1886,  1887,
    2244,  2242,  2243,  2245,  2246,  2247,  2254,  2580,  2743,  2744,
    2258,  2584,  2746,  2747,  2262,  1895,  1896,   924,  1574,   566,
      29,    30,   875,  1934,  2463,  2211,  2598,  2284,  2251,  2574,
    2436,  2677,  1230,  1828,  1829,  1546,  1380,  2694,  2754,  2197,
     153,   404,   405,   703,   414,   415,   416,   417,  1075,   726,
     418,   723,  1089,   724,  1085,  1666,  1667,  1074,  1653,  2287,
     419,    31,   123,   225,   521,    32,   534,    33,  2343,  2630,
    2768,  2769,  1488,  1489,    34,    35,  1069,   184,    36,   854,
      37,    38,  1671,    39,    40,    41,   856,  1203,  1789,  1790,
      42,    43,  1678,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,   863,  1211,  1798,  1799,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   453,    72,   758,  1697,    73,
    1194,  1501,  1778,  2164,  2166,  2365,    74,    75,  1721,    76,
    1552,  2411,  2225,  2565,  2667,  2783,  2562,   141,   257,   900,
    1245,  1556,  2223,  1840,  1243,    77,    78,   219,   519,   869,
     872,  1227,  1541,  1542,  1543,    79,   156,  1081,    80,   194,
      81,    82,    83,  2403,  2201,  2854,  2855,   121,  1528,  1529,
    2317,  2315,  2803,  2846,  1976,  1530,  1437,  1152,  1163,  1450,
    1451,   827,  1455,  1220,  1221,    84,   151,   152,    85,   833,
     834,   835,  1754,  1769,  2160,    86,    87,   479,   480,    88,
     495,   845,    89,    90,   467,   786,    91,  1832,  2218
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2580
static const yytype_int16 yypact[] =
{
   14042,  -143,   -33,   226, 13968,   232, -2580, 13920, -2580,   255,
     287,   777,    65,    82, -2580,    69, -2580,   112,   615,   228,
     659,   -60,   159,   190,   315,   -53,   239,   -80,   633,   147,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580,   622, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580,   664,   679,   803,   405,   855, -2580,   357,   667,
     741,   906,   780,   929,   236,   939,   946,   949,   741, -2580,
     710,   799,   741,   566,   613,   125,   195,   964,   618,   620,
     624,   754, -2580,    98,   201,   257,  1019,   402,   557,  1031,
     571,   574,   591,   628,   640,   625,   626,  1041,   675,   677,
     707,   785,   881,   608, -2580, -2580,  1072,  1098,   785,   790,
     578,   663, -2580,  6827,  1103,   787,    29, -2580,  1112,   -91,
     991,   995,   998,   978,  1003,   732,  1140,  1148,  1154,  1045,
     744,  1008,  1070,  1074,  1193,  1039,  1085,  1147,  -119,  1084,
    1119,  1121, -2580, 14042,   655,   -76,   672,   658,   576,  1278,
     721,    75,   600,  1009,  1291,  1241,  1299,   902,  1169,   683,
    1056,   928,   810,  1215,  1396, -2580,   585,  1411,   690,   694,
    1281,  1166,  1232,  1175,  1471,   695,   697,   698,   741,  1057,
    1092,  1516, -2580, -2580, -2580,   -95, -2580,  1292, -2580,  1310,
   -2580, -2580,  1319, -2580,  1337,  1367, -2580,  1348,   375,  1366,
   -2580,  1368,   701,   704, -2580,  1372, -2580,  1380,   711,   728,
     739,   740, -2580, -2580, -2580, -2580, -2580,  1676, -2580,  1689,
   -2580,  1495,  1749, 10747, 10747, -2580, -2580,  1746,   524, -2580,
   -2580, -2580, -2580,  1747, 10747, 10747, 10747, -2580, -2580, -2580,
    8003, -2580, -2580,  1332, -2580, -2580, -2580,  1334, -2580, -2580,
   -2580, -2580, -2580, -2580,  1745,  1336,  1338,  1339,  1340,  1341,
    1351,  1369,  1371,  1373,  1374,  1375,  1376,  1377,  1378,  1379,
    1381,  1382,  1383,  1385,  1386,  1387,  1389,  1390,  1391,  1392,
    1393,  1394,  1395,  1397,  1399,  1400,  1401,  1402,  1403,  1404,
    1405,  1406,  1407,  1408,  1409,  1410,  1420,  1438,  1442,  1443,
    1444,  1445,  1446,  1447,  1448,  1449,  1456,  1458,  1460,  1461,
   -2580, -2580,  1462,  1466,  1472,  1478,  1479,  1480,  1481,  1482,
    1483,  1484,  1485,  1486,  1488,  1489,  1490,  1491,  1492,  1493,
    1494,  1496,  1499,  1500,  1503,  1505,  1511,  1512,  1514,  1518,
    1519,  1522,  1526,  1527,  1528,  1532,  1533,  1534,  1535,  1536,
    1537,  1538,  1539,  1540,  1541,  1542,  1544,  1545,  1546,  1547,
    1549,  1550, 10747, 14854,  -106, -2580,  1335,   797,   831,    63,
    1551,  1815,  1552,    22,  -156,   513, -2580,  1775, -2580,  1775,
   -2580,  1839,  1698,  1911,  1914,  1938,  1945,  1999,  1987,  1739,
   -2580,  1587,  2010,  1986,  2013,  2018,  2020,  1760,  2025,  2033,
    2034,  1878,  1880,  2037,  2039,  2041, -2580,  1994,  2001, -2580,
   -2580,  2019,  2061,     4, -2580, -2580,   509,   183,    47,    45,
     174,   589,   330,  1642,  1995,  1791,  1826,   187,   762, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,   527,
   -2580,  2070,  2072, -2580, -2580, 14478,  1879,    87,  2074,  1881,
    1798,  2077,    87, -2580, -2580,   -50,    70, -2580,  1884,   773,
    1801, -2580,  1807,  1812, -2580,  1816,  1678,  2095,  1671,  2098,
    1828, -2580,  1833, -2580,  1834, -2580,  1835,  2104,  2106,    58,
    2089, -2580,   -36,  -160,    29,  2115,  2116,  2117,  2118,  2119,
     127,  2120, -2580, -2580, -2580,  2121,  2122,  2052,  1846,  2054,
    1850,  2132,  2133, -2580,  1856, -2580,  1857, -2580,  1858, -2580,
    1859,  -152, -2580,  2138,  -151, 15007, 15007, -2580,  2140, 10747,
   10747,  1059,  1059,  2111, 10747,  2262,   444,  2145,  2146,  1701,
   -2580, 10747,  7219, 10747, 10747, 10747, 10747, 10747, 10747, 10747,
   10747, 10747,  1705, 10747, 10747, 10747, 10747, 10747, 10747, 10747,
   10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747,  1709, 10747,
   10747, 10747,  1710, 10747, 10747, 10747, 10747, 10747, 10747,  8395,
   10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747,
    1711,  1713,  1714,  1715,  1718, 10747, 10747,  1719,  1724,  1725,
   10747, 10747,  2168,  1735,  1753, 10747, 10747, 10747, 10747, 10747,
   10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747,
   10747, 10747, 10747, 10747, 10747, 10747, 10747,  1755, 10747, 10747,
   10747,  1756, 10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747,
   10747, 10747,  1757, 10747, 10747, 10931, -2580, 10747, 10747, 10747,
   10747, 10747,    40,  1759,   952, 10747,  7611, 10747, 10747, 10747,
   10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747, 10747,
   10747, 10747,  2203, -2580,    29,  2204, 10747,  2205,  2206,   531,
   -2580,   322, 10747,  1764,   594,  2209,    29, -2580, -2580, -2580,
     580, -2580,    29,  2050,  2024, -2580,  2211,  2218,  1951,  2220,
    1822,  1823,  1952,  1956,  1955,  2227,  1966,  2252,  1985,  1813,
    1990,  1988,  1991,  1993,  1996,  1997,  2248,  2265,  2266,  2026,
    2027,  2091, -2580, -2580,  2294,  2023,  2275,  2278, -2580,  2318,
    2319,  2320,  2321,  2322,  2323, -2580,  2324,  2325, -2580,  2326,
    2327, 14478,  2328,  2087,  2330,  2331,  2315,  2333,  2337,  2342,
    1965,  2345,    60,   194,  2353, -2580, -2580,  2129,  2130, -2580,
     206,  1930,  1932, -2580, -2580,  1933,  1933,  1933,  1933,  1933,
   -2580,  1933, -2580,  1934,  1933,  1933,  1933,  2317, -2580,  2317,
   -2580,  1933,  1933,  1933,  1936,  2317,  1933,  2317, -2580, -2580,
   -2580, -2580, -2580,  1937,  1939,  1940, -2580,   734,  2381, 14478,
    2384,  2385,  2392,  1950,  1953, -2580,  -175,  2396,  2397,  2208,
    1960, -2580, -2580, -2580, -2580,  2212,  2357,  2014,  2408,  2221,
    2136,  2416,   187,  1974, -2580,  2418,  2147,  2419,  2420,  2285,
    2423,  2231,  1983,  2153,  2428,  2429,  2430,   -85, -2580,   616,
   -2580, -2580,    71, -2580, 10747,  2236,    29,  -159,  1092, -2580,
   -2580, -2580, -2580, -2580,  2042, -2580,   375, -2580, -2580,  2432,
   -2580,  2436, -2580, -2580,  2438,  2439,  2440,  2447,  2448,  2450,
     536, -2580,  2448,   602, -2580,  1556, -2580,  2011, 15007,  8229,
     665, -2580, 10747, 10747, -2580,  2022, -2580, 10747,  2216,   151,
   -2580, -2580, -2580, 10970,  8787,  1583,  1612,  1644, 11215, 11242,
   11271, 11299, 11328, 11361, -2580,  1780,  2165,  2222,  2341, 11400,
    6928,  6956,  7003, 11427, 11454, 11481,   590,  7291, 11508,  7318,
   -2580, 11535, 11562, 11606, -2580, 14907,  7359,  7403,  7683,  7722,
   10890,  2028, 11645, 11672, 11701, 11729, 11758, 11791, 11830, 11857,
    7749,  7798,  7834, -2580, -2580, -2580, -2580, -2580, 11884,  8040,
    2123,  2124,  2126,   629,   804,  2030,  2128,  2131,  8075, 11911,
   11938, 11965, 11992, 12036, 12075, 12102, 12131,  8114,  8188,  8432,
    8479,  8506,  8571,  8619,  8824,   892, 12159, 12188, 12221,  8871,
   -2580,   968, 12260,  8919, -2580,  8963,  9010,  9216,  9275, 12287,
   12314, 12341,  9302,  9363,  9402, -2580, 12368,  9608, -2580,  1357,
    1849,  7053,  7434,  7434, -2580,    80, -2580, -2580,  2224, 10747,
   10747,  2015, 10747, 14941,  2021,  2038,  2040, 10747,  2282,  1202,
    1202,  1234,  1246,  1658,   999,   999,   979,   979,   979,   979,
     985,  2111,  2111,   123, -2580,   -98,  2334, -2580, -2580,  2031,
     322,  2302,  2307,  2308, -2580,  2216,   531, 12395, -2580, -2580,
       0,  -116,   513,  2024,  2024,  2332,  2283,    29, -2580,  2335,
   -2580, -2580,  2044,  2214,  2479,  2484,  2080,  2051,  2085,  2096,
    2497, -2580,  2081,  2371,  2073,  2083,  2517,  2520,  2084,  2525,
    2528,  2261,  2264,  2094,  2369,  2542,  1021,     4,  2356,  2358,
     445, 14478, 14478,  2551, -2580,  2336, -2580, -2580, -2580,  2338,
    2521, 14478,  2556,  2316,  2329,  2558, -2580, -2580, -2580, -2580,
   -2580, -2580,  2559, -2580,  2561, -2580,  2565,  2566, -2580,    87,
      87,  2567, -2580, -2580, -2580, -2580, -2580, -2580,  2569, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,  2569, -2580,
   -2580, -2580,  2570,  2580,  2585,  2377,  2143,  2125, 10747,  2152,
    2521, 14478, 14478, 14478,  2387,    87,  -144,    68,  -149,  2405,
    2604,   749,   157,   846,  2468,  2607,  -146,  2608,  2609,  2417,
    2223,  1807,  2169, -2580, -2580, -2580,  2200,  2518,  2193,  2201,
    2176, -2580, -2580, -2580, -2580, -2580, -2580,  2530,  2626,   610,
   -2580,  1775, -2580,  2627, -2580, -2580, -2580,   116, 15007,  2568,
    2453,  -159, -2580, -2580,  2630, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580,  2614,  -135, -2580,   649,  2190, -2580,  -135,  2190,
    2441, 10747, -2580, 10747, -2580, 10747, 14747, 14502,  2550,  9667,
    2194,  2195, 10747, 10747, -2580, 10747, 14666,  2488,  2488, 10747,
   -2580, -2580, -2580, -2580, -2580, -2580, 10747, 10747, 10747, 10747,
   -2580, 10747, 10747, 10747, -2580, -2580, -2580, -2580, 10747, 10747,
   -2580, 10747, -2580, -2580, -2580, 14478, 14478, 10747, 10747, 10747,
    2641, -2580,  2300,  2303,  2304,  2305,  2309,  2314, -2580, -2580,
   -2580, 10747, 10747, 10747, -2580, 10747,  2219,  2225,  2226,  2339,
    2653,  2346,  2661,  2348,  2228,  2229, 10747, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, 10747, 10747, 10747, 10747, 10747,
   10747, 10747, 10747, -2580, 10747, -2580, -2580, -2580, 10747, -2580,
   10747, -2580, 10747, 10747, 10747, 10747, 10747, -2580, -2580, -2580,
   10747, 10747, 10747, -2580, 10747, -2580, -2580, 10747,  2216,  7434,
    7434,  2435, 14974, 10747, -2580, 10747, 10747,  2216, -2580,  2257,
    2399,    29,  2674,   531,  2539,  2539,  2539,  2233, -2580,   627,
   10747,  2675,  2678,  2236, -2580, -2580,    29, 10747,   487,    29,
      83,  2237,  2279,  2505,  2665,   100,  2666,  2683,  2509,  2680,
    2698,  2702,  2699, -2580,    37,  2714,  2541,    41,  2276,  2277,
    2717,  2704, -2580, -2580, -2580, -2580,  2722,  2722,  2280,  2564,
    2571,  2284,  2521,  2521, 14478, -2580, -2580,  2538,  2521, -2580,
    2726,  2729, -2580, -2580, -2580,  2511,  2512,  2289,  2293,   657,
     528,  1016,   528,   528, -2580,   660,   528,   528,   528,  1016,
    1016,   528,   528,   528,   666,  1016,   528,  1016,  2295,  2296,
    2297,  2667, -2580, 10747, 15007,    68,  2521,  2521,  2521,   891,
   -2580,  2306,  2312, -2580,  2313,  2340,  2344,  2350,   670, -2580,
    2483,    68,  2751,  -141,  2706, -2580,  2622,  2372, -2580, -2580,
      86,  2522,  2357,  2502,    68,  -134,  2574,  2769,  2753, -2580,
     714,  2147,  2771,  2772,  2773,  2755,   716,  2153,  2775,  -103,
    2776,  2351,  2616,   706,  2352,  2361,  2617,  2362,   685, -2580,
    2779,  2216, -2580, -2580,  2780,    81,  2781,  2787,  2788,  2364,
     651, -2580,  2354, -2580,   720, 10747,  2573, -2580, -2580,  9179,
    2651,  2814, -2580, -2580,  2817,  9571,  -132, -2580,  -132, -2580,
   -2580, 15007, 14785, -2580, 10747,  2376, 10747, -2580, -2580, 11176,
    1285, 12422, 10747, 10747,  2378,  2391, 12466, 12505, 12532,  9706,
    9747, 12561, 12589, 12618, 12651, 12690, 12717,    23,    57, 12744,
   12771,  9794,  2394,  2402,  2409,  2410,  2411,  2412,  2413,  1331,
   10000, 12798, 12825, -2580, -2580, -2580,  2414,   700,  2415,   702,
    2421, -2580, -2580, 12852, 10059, 10098, 10147, 12896, 12935, 10186,
   10392,  1412,  1439,  1468, 12962, 12991, 13019, 13048, 13081, 13120,
   10451, 10490, 10539, 13147,  2407,  2422, 10747,  2216, 10747,  1302,
    2216, 15007,  2216,  2424,  2216,  2425,  2426,  2811,  2724,  -159,
   -2580, -2580,  2700,  2444,  2445,  2446, -2580,  2867, 15007,  2854,
      24,  2453, -2580, 15007, 10747,  2449, -2580, -2580,   487, -2580,
   -2580,  2427,    83,  2872,  2873,  2882, -2580, -2580,  2451,  2883,
   -2580,  2888,  2897,  2629,  2460,  2905,  2906,  2908,  2462,  2909,
    2819,  2910,  2912,  2913,  2470,  2915, -2580,  2472,  -183, 10747,
    2475,  2476,  2920,  2538,  2538,  2521,  2731,  2922,  2485,  2486,
    2487,  2877,  2927,  2489,  2930,    33, -2580, -2580, -2580,  2777,
    2778, -2580,  2538, -2580, -2580, -2580, -2580,  2730,   886, -2580,
    2932, -2580, -2580,  2710,  2940, -2580,  2942, -2580, -2580, -2580,
   -2580,  2506, 13174,   705, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580,   899,    68,  2948,  2951,  2952,  2953,
    2956, -2580,  2957,  2519,   708,  2523,   -62,    68, -2580,  1893,
    2848,  2964, -2580, -2580, -2580, -2580, -2580,  2967,  2705,  2468,
    2526,   724,  2707,    68,  2970,   -74,  2972,  2954,  2958,   745,
   -2580, -2580, -2580, -2580,  2876,  2975,  2960,  2961,   757, -2580,
   -2580,  2842,   610, -2580,   493, 10747,  2537,  2540,  2543,  2981,
    2981,  2544,  2920,    34,   610, 14478, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580,   651,   765,   651,   -16,   730,  2549, -2580,
    1502,   852, -2580, -2580, 15007,  2727,  2968, -2580, -2580, 15007,
     767, -2580,  2790, -2580, -2580, 15007,  2995, -2580, 10747, -2580,
   -2580, 10747, -2580, 13201, 14475, -2580, -2580, -2580, -2580, -2580,
   10747, 10747, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, 10747, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, 10747, 10747, -2580, -2580,  2650,  2650,  2650, -2580,  2652,
    1159, -2580,  2657,  1173, -2580,  2650,  2650, -2580, 10747, 10747,
   10747, -2580, -2580, 10747, 10747, -2580, 10747, -2580, 10747, -2580,
   10747, -2580, -2580, -2580, -2580, -2580, -2580, 10747, 10747, 10747,
   -2580, -2580, -2580,  2572,  2575,  1302,  2576,  2577, -2580,  2578,
   -2580, -2580,  2926,  2963,  2855,  2724, -2580,  3018,  3018,  3018,
    2581, 10747, 10747,  3026,  2573, 15007,  2981, -2580,    83,  2582,
   -2580, -2580,  3019,   100,  3020, -2580,  2974,  2601,  3031,  2605,
   -2580,  2857,  3036, -2580,  3037, -2580,  2595,  2596,  3041, -2580,
    3043,  3047, 13228,  3050,  3052, -2580,   769, -2580, -2580,  2538,
   -2580, -2580,  3054, 10747,  3055,  3012,    17, 10747, -2580, -2580,
   -2580, -2580, -2580, -2580,  2621,  2623,  2625, 10747, -2580, -2580,
   -2580,   891,  3008, -2580,  2628,  3068, -2580,  1016, -2580,  1016,
    1016, 10747, -2580, -2580,  3013, -2580,   771,  3071,  2631,  2632,
    2633,  2634, -2580,    68, -2580,    68,  2635,  2637,   792,  2386,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580,  2859,  2937, -2580,  2638,  2639,  2810,  2522,    68, -2580,
    2642,   798,  2644,  2823,    68,  2645,  3088,  3093, -2580,   714,
    3094,  2656,  3095,  3104, -2580,   716,  2828,   800,  2663,  2947,
    2959,  2670, 13255,  3050,  2981,  2981, -2580,   802,   806,  3052,
     836,    49, -2580, -2580,  2521,   840, -2580, -2580, -2580, -2580,
    3115, -2580, -2580,   720, 10747, 10747, -2580, -2580,  2673, -2580,
    9963, -2580, 10355,  2693,  3038,  2573,  2695, 13282, 13326, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, 13365,
   13392, 13421,  2650,  2650,  2650,  2650,  2650,  2650,  1529, 13449,
    3086,  2962,  2962,  2962,  2650,  2709,  2711,  2712,  2650,  2715,
    2716,  2719,  2650,  2962,  2962, 13478, 13511, 13550, 13577, 13604,
   10578, 13631, 13658, 10784, 10831, 10858, -2580, -2580, -2580, -2580,
   -2580,  2743, 10747, 10747,  2236,  2855, -2580,   947,   950,   953,
    3154, 15007, 15007,  3142, -2580,   956,  2720,    83,  3000,  2723,
    3006,  3167,  3153,  2728,  3169,  3170,  2739, -2580,  3173,  3175,
     958, -2580,  3145,  3174, -2580,   960, -2580,   962, -2580,  3188,
   -2580,   970, 13685,  1029,  2747,  2748,  3032, -2580, 13712,  2757,
    2762,  2763, 13756,   904, -2580,  2687, -2580, -2580, 13795, -2580,
    2988, -2580, -2580,  2764, -2580, -2580, -2580,  3197,  1058,  1060,
      68,  3199, -2580, -2580,  3289,  3590,  3891,  4192,  4493,  4794,
    3152,  3096,  3210, 10747,  3137, -2580,  2705,  1062,    68, -2580,
      68,  2770,  1203, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580,  3081,    34, 10747,  2774,  2784,  2920, -2580,  1249,
    1252,  1254, -2580,  3215, -2580,  1256, -2580,   212,  2785,  3216,
    3158,  -174,  3159, -2580,   684, -2580,   730, -2580, 15007, 15007,
    3220,  3221, -2580, 15007, -2580, 15007,  9571,  2786, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580,  2962,  2962,  2962,  2962,  2962,
    2962, -2580, 10747, -2580,  3222,  3163,  2789,  2791,  2795,  2962,
   -2580,  2884,  2885,  2962, -2580,  2893,  2894,  2962,  2798,  2800,
   -2580, -2580, -2580, -2580, -2580, 10747, -2580, -2580,  3228,  3246,
    3247,  3248, 14812,   -86, 15007,  2453,  2236, -2580,  3252, -2580,
   -2580,  2809, 10747, -2580,    83,  2812,  3237,   100,  3241, -2580,
    3262,  3263, -2580, -2580,  3264,  2822,  2824, -2580,  3267, -2580,
    3004,  3067,  3272, -2580,  3273, -2580, -2580,  3274,  1563, -2580,
    3275, 10747, 10747, -2580, -2580, -2580, -2580, -2580, -2580,  3217,
   -2580,  5095, -2580, -2580,  5396, -2580,  3001,  2834, -2580, -2580,
    1258,  3071, -2580,  3205,  3155,  3127,  3118,  3009, -2580,  3070,
   -2580, 13822,  2843,  2810, -2580,  1262,  1264,    68, -2580,  2844,
      51, -2580, 13851,  3050,  3052,  1266,  3084, -2580, -2580, -2580,
   -2580, -2580,  3283,  3295,    93,   507,  2886,  2880,  3100, -2580,
   -2580,  3280,  2860,  1268,  3317,  3223,  2874,  2875,  2878,  2879,
    2881,  2887, 13879, -2580,  2889,  3320, -2580, -2580, -2580,  2891,
    2650,  2890,  2895,  2898,  2650,  2896,  2900,  2907, -2580, -2580,
   13908,  2914,  2899,  2916, -2580, -2580,  3113, 10747, -2580,  3190,
    2453, -2580, -2580, 15007,  2921,    83,  3327,  1270,  3328, -2580,
    1273,  1275,  3329,  3331,  2923, -2580,  3341, -2580, -2580,  2925,
   -2580, -2580,  2928, 13941, 13980, -2580,  5697, -2580, -2580,  2931,
   -2580, -2580, -2580,  2929, -2580, -2580, -2580, -2580, -2580,  5998,
    3293, -2580, 10747, -2580, -2580, -2580,  1277,  3351, -2580,  1279,
    1283, -2580,  3357, -2580,  2933,  3365,  3370,  2935,  2936, -2580,
    3354,  2938, 10747,  3375, -2580,  1287,    12, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580,  3376,   730,  2939, -2580,  2962,
   -2580, -2580, -2580,  2962, -2580, -2580, -2580, -2580, -2580,  3379,
    3382, -2580, 14812,   538,  3229, -2580,    83,  2941, -2580, -2580,
     100, -2580, -2580,  3387, -2580,  3388,  2946,  1289, -2580,  2955,
   -2580, -2580,  1624, -2580,  6299, -2580,  3391,  3001, -2580, -2580,
   14007, -2580,  2965,  3191, -2580,  1293, -2580, -2580, -2580,  3396,
    3397,  3400,  3406, 15007,  3390, -2580,  3414, -2580, -2580, -2580,
   -2580,  3416,  2977,  2650,  2650,  2980,  2650,  2650,  2993,  2996,
   -2580,  3219,  3225,  2981, -2580,  3010,    83,  3014,  3015,  3016,
   -2580, -2580,  3418,  3454, -2580, -2580, -2580,  3439,  1294, -2580,
   -2580,  6600, -2580,  3224,  3457,  3461,  3454,  3024,  3025,  3027,
    3028, 10747, -2580,  3227,   730, -2580,  2962,  2962, -2580,  2962,
    2962, -2580, -2580,  3285,  3296,  3029,    83,  3030, -2580, -2580,
   -2580,  3033, -2580,  1296,  3468, -2580,  3391, -2580,  3042,  1303,
    3046,  1311,  3048,  3260, -2580, -2580, 15007,  3221, -2580,  3056,
    3058,  3063,  3064, -2580, -2580,  3045,    83, -2580, -2580,  3492,
   -2580, -2580,  3496,  3494,  3454,  3454, -2580,  3284,  3508,  2860,
   -2580, -2580, -2580, -2580,    83,  3066,   537, -2580,  3069,  3072,
    1313,  1315,   539,  3512,  1320, -2580, -2580,  3073,    83,    11,
    3366,   656,   146, -2580,  3454, -2580, -2580,  3422,  3249, -2580,
    3284,    83,  3074, -2580, -2580,   534, -2580, -2580, -2580,   477,
     516,  1322,   539,   539,  3349, -2580,  3077,    83, -2580, -2580,
   -2580, -2580, -2580,   156, -2580, -2580, -2580,   522, -2580,  3276,
   -2580,  3078, -2580, -2580, -2580, -2580,   539,   203, -2580,  3330,
    3334,  3342,  3343,  3527,  3530, -2580, -2580
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2580,  3353,  -153, -2580, -2580, -2580, -2580, -1061,  1971, -2580,
    2163, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,  2286,  2978,
   -2580,  -351,  -861,  1609, -2580, -1824, -2580,  1260, -1868, -2580,
   -2203, -2580, -1392, -2580,  1333, -1652, -2580, -2580, -2580, -1806,
   -2580, -2580,  2846,  -396,  -405,  2832,  -707, -2580, -2580,  -417,
   -2580, -2580,   688, -2580, -2580, -2580,  1885, -1031,   388,  -163,
   -2580, -2580, -2580,  3335,  2679, -2580,  2672, -2580,  1040,   850,
   -2580,   756, -1469, -2580, -2580, -2580, -2580, -2580, -2580,  2367,
   -2580, -2580, -1602, -2580, -2580, -2580,  2365,  2060, -2580,  1398,
   -2580, -2580, -1927, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580, -2580,
   -2580,  2360,  2056, -2580,  1414, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -2580, -2580,  2820, -2580,  2457,  2149, -2580,
    2076,  1800,  1413, -2580,  1216,  1048, -2580, -2580, -1648, -2580,
   -1150, -2580, -2580, -2580, -2580, -2580,   766,   845,  3436,  3034,
   -2580,  2343, -2580,  1170,  2685, -2580, -2580, -2580, -2580, -2580,
   -2580, -2580, -2580, -1488,  1765, -2580, -2580, -2580, -2580,   567,
   -2580, -2580, -2580, -2580,  1206, -2580,   715, -2580,  1789,  1787,
   -2163, -2159, -2579, -1826, -1791, -2580, -1421,   249,   121,     9,
   -1140,  -766,  2437, -1509, -2580, -2580, -2580,  3336, -2580,  -478,
   -2580,  2442,  1603, -1761, -2580, -2580, -2580, -2580,  2831, -2580,
   -2580, -2580, -2580, -2580,  3108, -2580, -2580, -1901, -2580
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -881
static const yytype_int16 yytable[] =
{
     403,  1661,   727,  2212,  2198,  1130,  1743,  2029,   714,  1944,
    1803,  1703,  1704,   709,   840,  1086,  1232,  1722,  2252,  2253,
    1390,  2200,  1764,  1459,  1460,   409,  2299,  2263,  2264,  1465,
     704,  1467,   409,  2208,  2389,  1781,  2395,  1989,  1990,  1991,
    1992,   524,  1379,  2294,  1942,  1388,  1034,   162,   765,  2437,
    2438,  1215,  1824,   705,   173,  1977,  1978,   841,  1035,  1176,
    2448,  2449,   713,  1180,  1550,  1141,   676,  1550,   421,  1215,
    1949,  1483,   441,   846,  2000,  1224,    92,   149,   471,   472,
     473,   474,   475,   476,   715,  -880,  1365,  1669,   898,   902,
     829,  1186,  1690,  1176,  1971,  2325,  2209,  2397,  1557,  2397,
    1559,   220,  2737,   830,  1676,  1993,   876,   842,  2873,    93,
     555,   556,   756,  1216,   702,   874,   766,  1490,   763,   877,
    1503,   561,   562,   563,  1481,  1766,  1772,   565,   210,   767,
     883,  1216,  1782,   677,   678,   679,   680,   681,   682,   683,
    2295,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   874,   701,
    1496,   677,   678,   679,   680,   681,   682,   683,  1818,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   761,   701,  1215,   410,
    1560,  2596,  2173,  1773,   870,   411,   410,  2811,   212,  1143,
    2655,   451,   411,  1533,   226,   780,  2026,  2909,   843,   471,
     472,   473,   474,   475,   476,  1534,  1686,  2551,  2326,    97,
    1393,  2398,  2566,  2567,  2568,  2569,  2570,  2571,    94,    98,
    -372,   157,  2552,  1036,   221,   122,  2579,   831,   874,   198,
    2583,  2556,  2335,  1774,  2587,   769,  2399,  1482,  2399,   675,
    1216,  1535,   222,  2879,  2340,  2850,  2851,  1144,   142,  1536,
     228,    95,   757,    16,   764,  1970,  1217,   762,   477,  2902,
    2738,  1187,  2557,  1366,   223,  -880,  1670,  2400,  2327,  2400,
    2874,   211,   832,    96,  1979,  2881,  2016,  1262,   525,   716,
     143,  2354,   716,  1677,   899,   899,   150,  1491,  2028,  1065,
    1504,   224,  2355,   871,  2202,  1767,  1634,  1225,  1226,  1537,
     422,  1687,  1783,  1551,  2171,  1076,  1841,   146,   179,   180,
     442,   199,  2356,   158,  2418,   676,  2401,  1775,  2401,  2027,
    1819,  2320,  1392,   773,   147,  2205,  2357,  1142,   163,   164,
     165,  2656,   706,  1802,  1776,  2358,  2296,   166,   844,  2903,
     716,   213,  1651,   525,   174,  1432,  1433,   227,  1538,  1037,
    1218,  1219,  2597,   181,   154,  1438,  1994,  1995,  1996,   452,
    1547,   781,  2174,   702,  2425,  2426,  2427,  2428,  2429,  2430,
    1398,  2650,   175,   176,  2649,  2359,  2439,  2910,  2390,  2391,
    2443,   770,   200,  1539,  2447,  1484,  1485,  1486,  1487,   477,
    2402,   774,  2402,   412,  2880,   231,  1842,   908,  1843,   520,
     412,   909,  -372,   229,   775,  1476,  1477,  1478,   919,   923,
     925,   926,   927,   928,   929,   930,   931,   932,   933,  2210,
     935,   936,   937,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,  1391,   951,   952,   953,   532,
     955,   956,   957,   958,   959,   960,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   768,   413,  1943,
    1868,  1231,   978,   979,   847,   413,  2742,   983,   984,  1997,
    2745,  1691,   988,   989,   990,   991,   992,   993,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1869,  1011,  1012,  1013,   708,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1648,
    1026,  1027,   478,  1428,  1029,  1030,  1031,  1032,  1033,  1587,
    1588,   884,  1043,  1048,  1049,  1050,  1051,  1052,  1053,  1054,
    1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1247,
    2607,  2890,  1250,   403,  2348,  2859,  2349,  2867,   232,  1077,
     233,  1497,  1540,   782,   783,   784,   785,  1261,   911,   912,
     169,  2188,  1378,  2511,   236,  1923,   167,   238,  2514,  1429,
     759,   265,  2559,  2819,  2820,   533,  2821,  2822,   498,   717,
    2894,   183,   771,   760,   240,  2007,  2545,  2009,  2010,  1263,
     677,   678,   679,   680,   681,   682,   683,   168,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   185,   701,  2189,   244,   246,
    -334,   465,  2888,   182,  2860,  2904,  2860,   170,  2595,   677,
     678,   679,   680,   681,   682,   683,  1430,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,  1071,   701,   718,   186,  1705,  2891,
     499,  1447,  1448,   772,  1383,   204,  -340,   177,   725,   207,
     178,  1520,   187,  2889,  1664,  1072,   489,  2892,  1521,  1662,
     719,   266,  1668,   502,  2190,  2475,   456,   504,   511,  2367,
     513,   515,  1706,   720,   537,  2372,  1431,   539,  2895,   447,
     448,  2657,  2679,   234,   543,  2905,  2683,  2893,  -646,   913,
    2861,  1228,  2861,  1826,  1387,  1827,  2896,   237,   721,   449,
     239,   545,  1708,   457,  2862,  1709,  2862,  1710,  1533,   481,
    1711,   500,   547,   549,  1522,   171,   172,   241,  1523,  2626,
    1534,   722,  1175,  1665,  2191,  1712,  2897,  1083,   458,  1256,
    1257,  -646,  1713,  1714,  1259,  1524,   459,  2639,  2751,  -646,
    1176,  1266,   454,  2757,  1525,  2658,   849,    16,   460,  2208,
     144,   245,   247,  2404,   466,   517,  1535,  1731,  1935,  1254,
    1255,  -646,   455,  2876,  1536,  1084,  2752,  1715,  1073,   263,
    1494,   189,   482,   191,  1531,   145,   188,  1246,  1732,  1495,
     264,  1526,  1177,  2599,   677,   678,   679,   680,   681,   682,
     683,   469,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   490,
     701,   470,  2209,    16,  1537,   461,   503,  1178,  1717,   493,
     505,   512,  2740,   514,   516,  2216,  2877,   538,   190,   148,
     540,  1807,   787,   155,  2714,   450,   462,   544,  2750,   494,
    1808,  1527,  2604,  1249,  2541,  2786,  2787,  1718,  2789,  2790,
    2217,  2520,   788,   192,   546,  1719,  1369,  1370,   252,  1372,
     252,  2878,  2465,  1538,   675,   548,   550,   193,   463,  2535,
    -650,  2536,   677,   678,   679,   680,   681,   682,   683,   195,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   464,   701,   850,
    1164,   253,   197,   253,  -647,   196,  1169,  2002,  1171,   254,
     913,   407,   201,  -650,   255,  1720,  2003,  2795,  2695,   202,
    2014,  -650,   203,  1744,   206,  2509,   205,  1745,  2771,  2015,
    2818,   256,   208,   408,  2510,  1039,  1040,   214,  1041,   558,
     559,  1042,  1657,  -650,   789,   790,  1649,  -647,   677,   678,
     679,   680,   681,   682,   683,  -647,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,  2697,   701,  1746,   218,  -647,  1747,   209,
    2852,   698,   699,   700,   215,   701,   216,  1635,   699,   700,
     217,   701,   230,  1748,   242,  1474,  1646,   694,   695,   696,
     697,   698,   699,   700,   235,   701,   243,  1287,  1288,  2882,
    2883,  1079,   716,  1749,   248,  1153,  1154,  1155,  1156,  2204,
    1157,  1750,   258,  1159,  1160,  1161,   259,   159,   160,   161,
    1165,  1166,  1167,  1222,  1223,  1170,  1423,  1424,  2646,  1498,
    1499,   249,  2906,   250,  2600,   260,  1319,  1320,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,  2755,   701,  1553,  1554,  1733,  1734,
    1561,   261,  1562,   251,  1729,  1730,   406,  1735,  1736,  1569,
    1570,   267,  1571,  1737,  1736,   420,  1576,  1761,  1762,  1787,
    1788,  1796,  1797,  1577,  1578,  1579,  1580,   423,  1581,  1582,
    1583,   424,  1813,  1814,   425,  1584,  1585,   426,  1586,   427,
    1751,   428,  1752,   429,  1589,  1590,  1591,  1889,  1890,  1892,
    1893,   430,  2013,  1762,  2797,  2024,  1762,   431,  1599,  1600,
    1601,  1753,  1602,  2256,  2257,  1452,  1453,   434,  1456,  1457,
    1458,  2169,  1762,  1613,  1461,  1462,  1463,  2260,  2261,  1466,
    1816,   432,  1614,  1615,  1616,  1617,  1618,  1619,  1620,  1621,
     433,  1622,  2178,  2179,  2825,  1623,   437,  1624,   438,  1625,
    1626,  1627,  1628,  1629,  2184,  2185,   435,  1630,  1631,  1632,
     436,  1633,  2206,  1825,  2221,  2222,  2318,  2319,  2341,  1762,
    1639,   439,  1641,  1641,  2845,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,  1658,   701,  2352,
    1762,   440,  2857,   443,  1663,  2369,  1762,  2383,  1814,  2392,
    2393,  1321,  1322,  2394,  2393,   444,  2872,   445,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,  2886,
     701,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   468,   701,  2396,  2319,  2901,  1924,  2405,  1825,  1926,
     483,  1927,   485,  1929,   484,   677,   678,   679,   680,   681,
     682,   683,   486,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
    1742,   701,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   491,   701,  1343,
    1344,   677,   678,   679,   680,   681,   682,   683,   487,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   488,   701,   678,   679,
     680,   681,   682,   683,   492,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,  1830,   701,  2467,  2468,  1834,  2469,  2468,   497,
    2470,  2468,  1839,  2473,  2393,  2487,  2488,  2491,  2492,  2493,
    2494,  1845,   496,  1259,   501,  1349,  1350,  2496,  2497,  1853,
    1854,   506,   677,   678,   679,   680,   681,   682,   683,   508,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   507,   701,   677,
     678,   679,   680,   681,   682,   683,   509,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   510,   701,  2499,  2500,   677,   678,
     679,   680,   681,   682,   683,  1925,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   518,   701,  2518,  1762,  2519,  1762,  2534,
    1762,  1945,   677,   678,   679,   680,   681,   682,   683,   522,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   520,   701,   677,
     678,   679,   680,   681,   682,   683,  1972,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   530,   701,   677,   678,   679,   680,
     681,   682,   683,   526,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   527,   701,   677,   678,   679,   680,   681,   682,   683,
     528,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   529,   701,
    2620,  2621,   677,   678,   679,   680,   681,   682,   683,   531,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   535,   701,   536,
    2538,  1762,  2192,   541,   677,   678,   679,   680,   681,   682,
     683,   542,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   551,
     701,  2764,  2765,  2214,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   552,   701,  2227,  2546,  2492,  2228,  2547,
    2393,  2548,  2393,  2550,  2494,  2632,  1762,  2239,  2240,  2644,
    1762,  2645,  1762,  2651,  2319,  2664,  2222,  2699,  2700,  2241,
    2702,  2703,  2704,  2705,  2721,  1762,  2723,  2492,  2248,  2249,
    2724,  2494,  1850,  1851,  2735,  2736,  2761,  2762,  2775,  2776,
     553,  2805,  2806,  2828,  2829,  2265,  2266,  2267,  2833,  2834,
    2268,  2269,   554,  2270,   149,  2271,   560,  2272,  2836,  2829,
    2865,  2829,  2866,  2829,  2273,  2274,  2275,  2869,  2870,  2898,
    2829,  1394,  1395,  1654,  1655,  2288,  2289,   567,  1880,  1881,
     568,   569,   570,   707,   571,   572,   573,   574,  2291,  2292,
     677,   678,   679,   680,   681,   682,   683,   575,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   576,   701,   577,   711,   578,
     579,   580,   581,   582,   583,   584,   725,   585,   586,   587,
    2322,   588,   589,   590,  2328,   591,   592,   593,   594,   595,
     596,   597,   728,   598,  2332,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   729,  2338,  1905,
    1906,   679,   680,   681,   682,   683,   611,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   612,   701,  1907,  1908,   613,   614,
     615,   616,   617,   618,   619,   620,  2030,  2031,  2032,  2033,
    2034,  2035,   621,  2036,   622,  2037,   623,   624,   625,  2038,
    2039,  2040,   626,  2041,   730,  1909,  1910,   731,   627,  2042,
    2043,  2044,  2045,  2046,   628,   629,   630,   631,   632,   633,
     634,   635,   636,  2047,   637,   638,   639,   640,   641,   642,
     643,   732,   644,  2048,  2049,   645,   646,  2050,   733,   647,
    2215,   648,  2051,  2052,  2053,  2054,  2055,   649,   650,  2056,
     651,  2057,  2058,  2059,   652,   653,  2060,  2061,   654,  2062,
    2063,  2064,   655,   656,   657,  2065,  2431,  2432,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,  2066,
     669,   670,   671,   672,  2067,   673,   674,   710,   712,  2068,
    2069,  2070,   734,   735,  1251,   736,  2071,  2072,   737,  2073,
    2074,  2075,  2076,   738,   739,  2077,   740,  2078,  2079,  2080,
    2081,   741,  2082,   742,  2083,  2084,   743,  2085,   744,  2086,
    2087,  1267,  2088,  2089,  2090,  2091,   745,   747,   746,   748,
     749,  2092,   750,  2093,   751,  2094,  2095,   752,  2096,  2097,
    2098,  2099,  2100,  2101,   753,  2102,  2103,  2104,  2105,  2106,
    1268,  2408,  2409,   754,   755,   776,   777,  2413,   778,  2415,
    2107,   779,  2108,   791,  2109,   792,   828,   836,   837,   838,
     839,   848,   851,  2110,   853,  2111,  2112,  2113,  2114,  2115,
    2116,  2117,  1269,   855,  2118,  2119,   858,   857,   859,   860,
    2120,   861,  2121,  2122,  2123,   862,  2124,   867,  2125,   868,
    2126,  2127,  2128,  2129,   864,   865,   866,   873,   878,   879,
     880,   881,   882,   885,   886,   887,   888,   889,   890,  2462,
    2464,   891,  2130,  2131,  2132,   892,   893,   894,   895,   896,
     897,   901,  2133,   904,  2134,  2135,  2136,   701,   914,   915,
     916,  2137,   934,  2138,  2139,  2140,   950,   954,   973,  2141,
     974,   975,   976,  2142,  2143,   977,   980,  2144,  2145,  2146,
    2147,   981,   982,   985,  2148,   677,   678,   679,   680,   681,
     682,   683,   986,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     987,   701,  1010,  1014,  1025,  1038,  1064,  1066,  1068,  1070,
    2531,  1078,  1080,  1087,  1090,  2149,  2150,  2151,  2152,  2153,
    1088,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1276,  1098,
    1099,  2542,   677,   678,   679,   680,   681,   682,   683,  1100,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,  1101,   701,  1102,
    1103,  1104,  1105,  1839,  1110,  1106,  1107,  1108,  1111,  1112,
    1115,  1109,   677,   678,   679,   680,   681,   682,   683,  2572,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,  1113,   701,  1116,
     451,  1114,  2590,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,  1118,   701,  2603,
    1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,  1128,
    1129,  1131,  1132,  1133,  1134,  1135,  1136,  2154,  2155,  2156,
    2157,  2158,  1137,  2159,  1139,  1138,  1146,  1147,  2623,  2624,
    1140,   677,   678,   679,   680,   681,   682,   683,  1145,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,  1149,   701,  1150,  1151,
    1158,  1162,  1168,  1172,  1179,  1173,  1174,  1181,  1182,  2030,
    2031,  2032,  2033,  2034,  2035,  1183,  2036,  1184,  2037,  1188,
    1189,  1185,  2038,  2039,  2040,  1190,  2041,  1191,  1193,  1192,
    1195,  1196,  2042,  2043,  2044,  2045,  2046,  1198,  1197,  1199,
    1200,  1201,  1204,  1205,  1202,  1206,  2047,  1207,  1208,  1209,
    1210,  1212,  1213,  1214,  1229,  1236,  2048,  2049,  1234,  1237,
    2050,  1238,  1239,  1240,  2692,  2051,  2052,  2053,  2054,  2055,
    1241,  1242,  2056,  1244,  2057,  2058,  2059,    16,  1252,  2060,
    2061,  1371,  2062,  2063,  2064,   -84,  1384,  1374,  2065,  1258,
    1381,  1385,  1386,  1316,  1317,  1302,  1318,  1323,  1324,  1382,
    1397,  1325,  2066,  1402,  1375,  1401,  1376,  2067,  1403,  2720,
    1400,  1404,  2068,  2069,  2070,  1396,  1406,  1405,  1399,  2071,
    2072,  1408,  2073,  2074,  2075,  2076,  1407,  1410,  2077,  2733,
    2353,  2079,  2080,  2081,  1409,  2082,  1412,  2083,  2084,  1411,
    2085,  1413,  2086,  2087,  1414,  2088,  2089,  2090,  2091,  1416,
    1415,  1417,  1418,  1421,  2092,  1419,  2093,   564,  2094,  2095,
    1420,  2096,  2097,  2098,  2099,  2100,  2101,  1422,  2102,  2103,
    2104,  2105,  2106,  1426,  1434,  1427,  1706,  1176,  1435,  1439,
    1436,  1440,  1442,  2107,  1443,  2108,  1444,  2109,  1445,  1446,
    1471,  1473,  1449,  1454,  1441,  1468,  2110,  1707,  2111,  2112,
    2113,  2114,  2115,  2116,  2117,  1469,  1708,  2118,  2119,  1709,
    1470,  1710,  1472,  2120,  1711,  2121,  2122,  2123,  1475,  2124,
    1479,  2125,  1492,  2126,  2127,  2128,  2129,  1493,  1500,  1712,
    1502,  1505,  1506,  1277,  1507,  1510,  1713,  1714,  1512,  1513,
    1508,  1514,  1516,  1515,  1518,  2130,  2131,  2132,  2816,  1519,
    1532,  1544,  1545,  1548,  1549,  2133,  1555,  2134,  2135,  2136,
    1550,  1565,  1568,  1567,  2137,  1592,  2138,  2139,  2140,  1573,
    1593,  1715,  2141,  1594,  1595,  1596,  2142,  2143,  1607,  1597,
    2144,  2145,  2146,  2147,  1598,  1603,  1609,  2148,  1716,  1647,
    1278,  1604,  1605,   874,  1611,  1612,   -86,  1650,  1659,  1652,
    1656,  1660,  1673,  1672,  1674,  1675,  1679,  1680,  1681,  1606,
    2030,  2031,  2032,  2033,  2034,  2035,  1608,  2036,  1610,  2037,
    1682,  1683,  1717,  2038,  2039,  2040,  1684,  2041,  2149,  2150,
    2151,  2152,  2153,  2042,  2043,  2044,  2045,  2046,  1688,  1685,
    1689,  1694,  1692,  1693,  1695,  1696,  1699,  2047,  1700,  1723,
    1702,  1718,  1724,  1725,  1726,  1701,  1727,  2048,  2049,  1719,
    1728,  2050,  1738,  1739,  1740,  1741,  2051,  2052,  2053,  2054,
    2055,  1763,  1755,  2056,  1765,  2057,  2058,  2059,  1756,  1757,
    2060,  2061,  1770,  2062,  2063,  2064,  1768,  1777,  1771,  2065,
    1780,  1784,  1785,  1786,  1792,  1795,  1793,  1794,  1801,  1804,
    1806,  1811,  1815,  2066,  1817,  1831,  1758,  1820,  2067,  1279,
    1759,  1821,  1822,  2068,  2069,  2070,  1760,  1805,  1809,  1720,
    2071,  2072,  1825,  2073,  2074,  2075,  2076,  1810,  1812,  2077,
    1823,  2512,  2079,  2080,  2081,  1835,  2082,  1836,  2083,  2084,
    1837,  2085,  1846,  2086,  2087,  1855,  2088,  2089,  2090,  2091,
    2154,  2155,  2156,  2157,  2158,  2092,  2159,  2093,  1856,  2094,
    2095,  1873,  2096,  2097,  2098,  2099,  2100,  2101,  1874,  2102,
    2103,  2104,  2105,  2106,  1921,  1875,  1876,  1877,  1878,  1879,
    1888,  1891,  1932,  1936,  2107,  1933,  2108,  1894,  2109,  1922,
    1940,  1928,  1930,  1931,  1941,  1948,  1950,  2110,  1951,  2111,
    2112,  2113,  2114,  2115,  2116,  2117,  1952,  1954,  2118,  2119,
    1937,  1938,  1939,  1955,  2120,  1946,  2121,  2122,  2123,  1953,
    2124,  1956,  2125,  1957,  2126,  2127,  2128,  2129,  1958,  1959,
    1962,  1960,  1961,  1964,  1963,  1965,  1966,  1967,  1968,  1969,
    1970,  1973,  1974,  1975,  1980,  1981,  2130,  2131,  2132,  1985,
    1986,  1982,  1983,  1984,  1988,  1987,  2133,  2004,  2134,  2135,
    2136,  1998,  1999,  2001,  2006,  2137,  2008,  2138,  2139,  2140,
    2005,  2017,  2011,  2141,  2018,  2019,  2020,  2142,  2143,  2021,
    2022,  2144,  2145,  2146,  2147,  2023,  2161,  2162,  2148,  2025,
    2163,  2165,  2168,  2172,  2176,  2170,  2175,  2180,  2177,  2181,
    2182,  2183,  2186,  2193,  2196,  2219,  2194,  2224,  2220,  2195,
    2199,  2030,  2031,  2032,  2033,  2034,  2035,  2213,  2036,  2226,
    2037,  2250,  2255,  2283,  2038,  2039,  2040,  2259,  2041,  2149,
    2150,  2151,  2152,  2153,  2042,  2043,  2044,  2045,  2046,  2276,
    2281,  2286,  2277,  2278,  2279,  2280,  2282,  2290,  2047,  2293,
    2297,  2298,  2300,  2301,  2302,  2303,  2305,  2304,  2048,  2049,
    2306,  2307,  2050,  2308,  2309,  2310,  2311,  2051,  2052,  2053,
    2054,  2055,  2312,  2314,  2056,  2316,  2057,  2058,  2059,  2321,
    2323,  2060,  2061,  2324,  2062,  2063,  2064,  2329,  2334,  2330,
    2065,  2331,  2337,  2339,  2342,  2336,  2360,  2361,  2344,  2345,
    2346,  2350,  2347,  2351,  2066,  2363,  2362,  2364,  2368,  2067,
    2370,  2371,  2373,  2374,  2068,  2069,  2070,  2375,  2377,  2382,
    2379,  2071,  2072,  2378,  2073,  2074,  2075,  2076,  2380,  2384,
    2077,  2385,  2515,  2079,  2080,  2081,  2387,  2082,  2406,  2083,
    2084,  2410,  2085,  2386,  2086,  2087,  2417,  2088,  2089,  2090,
    2091,  2154,  2155,  2156,  2157,  2158,  2092,  2159,  2093,  2416,
    2094,  2095,  2419,  2096,  2097,  2098,  2099,  2100,  2101,  2434,
    2102,  2103,  2104,  2105,  2106,  2440,  2461,  2471,  2441,  2442,
    2435,  2444,  2472,  2445,  2476,  2107,  2446,  2108,  2474,  2109,
    2478,  2477,  2479,  2480,  2482,  2483,  2481,  2485,  2110,  2486,
    2111,  2112,  2113,  2114,  2115,  2116,  2117,  2484,  2489,  2118,
    2119,  2495,  2490,  2501,  2502,  2120,  2503,  2121,  2122,  2123,
    2517,  2124,  2521,  2125,  2505,  2126,  2127,  2128,  2129,  2506,
    2507,  2516,  2528,  2530,  2529,  2532,  2537,  2539,  2549,  2554,
    2543,  2555,  2558,  2560,  2561,  2573,  2575,  2130,  2131,  2132,
    2544,  2553,  2564,  2591,  2581,  2582,  2576,  2133,  2577,  2134,
    2135,  2136,  2578,  2585,  2586,  2588,  2137,  2589,  2138,  2139,
    2140,  2592,  2593,  2594,  2141,  2601,  2602,  2606,  2142,  2143,
    2605,  2608,  2144,  2145,  2146,  2147,  2609,  2610,  2611,  2148,
    2612,  2614,  2613,  2615,  2616,  2617,  2618,  2625,  2629,  2619,
    2622,  2631,  2634,  2636,  2637,  2638,  2635,  2640,  2653,  2642,
    2647,  2652,  2030,  2031,  2032,  2033,  2034,  2035,  2654,  2036,
    2662,  2037,  2659,  2660,  2661,  2038,  2039,  2040,  2663,  2041,
    2149,  2150,  2151,  2152,  2153,  2042,  2043,  2044,  2045,  2046,
    2665,  2668,  2669,  2676,  2666,  2670,  2671,  2691,  2672,  2047,
    2693,  2698,  2701,  2706,  2673,  2707,  2680,  2675,  2678,  2048,
    2049,  2681,  2684,  2050,  2709,  2682,  2685,  2689,  2051,  2052,
    2053,  2054,  2055,  2719,  2686,  2056,  2722,  2057,  2058,  2059,
    2725,  2688,  2060,  2061,  2690,  2062,  2063,  2064,  2727,  2696,
    2708,  2065,  2710,  2728,  2731,  2711,  2717,  2716,  2734,  2739,
    2726,  2729,  2730,  2748,  2732,  2066,  2749,  2741,  2753,  2756,
    2067,  2758,  2759,  2760,  2767,  2068,  2069,  2070,  2774,  2777,
    2778,  2763,  2071,  2072,  2779,  2073,  2074,  2075,  2076,  2780,
    2781,  2077,  2773,  2522,  2079,  2080,  2081,  2782,  2082,  2784,
    2083,  2084,  2801,  2085,  2785,  2086,  2087,  2788,  2088,  2089,
    2090,  2091,  2154,  2155,  2156,  2157,  2158,  2092,  2159,  2093,
    2791,  2094,  2095,  2792,  2096,  2097,  2098,  2099,  2100,  2101,
    2793,  2102,  2103,  2104,  2105,  2106,  2794,  2802,  2796,  2804,
    2809,  2798,  2799,  2800,  2810,  2823,  2107,  2817,  2108,  2808,
    2109,  2812,  2813,  2830,  2814,  2815,  2824,  2393,  2826,  2110,
    2827,  2111,  2112,  2113,  2114,  2115,  2116,  2117,  2832,  2838,
    2118,  2119,  2835,  2844,  2837,  2847,  2120,  2849,  2121,  2122,
    2123,  2848,  2124,  2840,  2125,  2841,  2126,  2127,  2128,  2129,
    2842,  2843,  2853,  2856,  2858,  2868,  2863,  2875,  2864,  2873,
    2884,  2871,  2887,  2899,  2900,  2908,  2907,  2911,  2130,  2131,
    2132,  2912,  2915,  2913,  2914,  2916,   446,  1847,  2133,  1645,
    2134,  2135,  2136,   910,  2285,  2466,  2407,  2137,  1082,  2138,
    2139,  2140,  1067,  1947,  1575,  2141,   523,  1233,  1235,  2142,
    2143,  2633,  2831,  2144,  2145,  2146,  2147,  2770,  1509,  1511,
    2148,  1791,  1517,  1800,  1425,  1117,  1698,  2376,  1779,  2167,
    2366,  2643,  2533,  2839,   262,  2885,  2563,  1248,   903,  2540,
    2207,  2187,  1558,  2030,  2031,  2032,  2033,  2034,  2035,  2381,
    2036,  2203,  2037,   557,  2333,  1464,  2038,  2039,  2040,   852,
    2041,  2149,  2150,  2151,  2152,  2153,  2042,  2043,  2044,  2045,
    2046,  1148,     0,     0,     0,     0,     0,  1480,     0,     0,
    2047,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2048,  2049,     0,     0,  2050,     0,     0,     0,     0,  2051,
    2052,  2053,  2054,  2055,     0,     0,  2056,     0,  2057,  2058,
    2059,     0,     0,  2060,  2061,     0,  2062,  2063,  2064,     0,
       0,     0,  2065,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2066,     0,     0,     0,
       0,  2067,     0,     0,     0,     0,  2068,  2069,  2070,     0,
       0,     0,     0,  2071,  2072,     0,  2073,  2074,  2075,  2076,
       0,     0,  2077,     0,  2523,  2079,  2080,  2081,     0,  2082,
       0,  2083,  2084,     0,  2085,     0,  2086,  2087,     0,  2088,
    2089,  2090,  2091,  2154,  2155,  2156,  2157,  2158,  2092,  2159,
    2093,     0,  2094,  2095,     0,  2096,  2097,  2098,  2099,  2100,
    2101,     0,  2102,  2103,  2104,  2105,  2106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2107,     0,  2108,
       0,  2109,     0,     0,     0,     0,     0,     0,     0,     0,
    2110,     0,  2111,  2112,  2113,  2114,  2115,  2116,  2117,     0,
       0,  2118,  2119,     0,     0,     0,     0,  2120,     0,  2121,
    2122,  2123,     0,  2124,     0,  2125,     0,  2126,  2127,  2128,
    2129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2130,
    2131,  2132,     0,     0,     0,     0,     0,     0,     0,  2133,
       0,  2134,  2135,  2136,     0,     0,     0,     0,  2137,     0,
    2138,  2139,  2140,     0,     0,     0,  2141,     0,     0,     0,
    2142,  2143,     0,     0,  2144,  2145,  2146,  2147,     0,     0,
       0,  2148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2030,  2031,  2032,  2033,  2034,  2035,
       0,  2036,     0,  2037,     0,     0,     0,  2038,  2039,  2040,
       0,  2041,  2149,  2150,  2151,  2152,  2153,  2042,  2043,  2044,
    2045,  2046,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2047,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2048,  2049,     0,     0,  2050,     0,     0,     0,     0,
    2051,  2052,  2053,  2054,  2055,     0,     0,  2056,     0,  2057,
    2058,  2059,     0,     0,  2060,  2061,     0,  2062,  2063,  2064,
       0,     0,     0,  2065,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2066,     0,     0,
       0,     0,  2067,     0,     0,     0,     0,  2068,  2069,  2070,
       0,     0,     0,     0,  2071,  2072,     0,  2073,  2074,  2075,
    2076,     0,     0,  2077,     0,  2524,  2079,  2080,  2081,     0,
    2082,     0,  2083,  2084,     0,  2085,     0,  2086,  2087,     0,
    2088,  2089,  2090,  2091,  2154,  2155,  2156,  2157,  2158,  2092,
    2159,  2093,     0,  2094,  2095,     0,  2096,  2097,  2098,  2099,
    2100,  2101,     0,  2102,  2103,  2104,  2105,  2106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2107,     0,
    2108,     0,  2109,     0,     0,     0,     0,     0,     0,     0,
       0,  2110,     0,  2111,  2112,  2113,  2114,  2115,  2116,  2117,
       0,     0,  2118,  2119,     0,     0,     0,     0,  2120,     0,
    2121,  2122,  2123,     0,  2124,     0,  2125,     0,  2126,  2127,
    2128,  2129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2130,  2131,  2132,     0,     0,     0,     0,     0,     0,     0,
    2133,     0,  2134,  2135,  2136,     0,     0,     0,     0,  2137,
       0,  2138,  2139,  2140,     0,     0,     0,  2141,     0,     0,
       0,  2142,  2143,     0,     0,  2144,  2145,  2146,  2147,     0,
       0,     0,  2148,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2030,  2031,  2032,  2033,  2034,
    2035,     0,  2036,     0,  2037,     0,     0,     0,  2038,  2039,
    2040,     0,  2041,  2149,  2150,  2151,  2152,  2153,  2042,  2043,
    2044,  2045,  2046,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2047,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2048,  2049,     0,     0,  2050,     0,     0,     0,
       0,  2051,  2052,  2053,  2054,  2055,     0,     0,  2056,     0,
    2057,  2058,  2059,     0,     0,  2060,  2061,     0,  2062,  2063,
    2064,     0,     0,     0,  2065,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2066,     0,
       0,     0,     0,  2067,     0,     0,     0,     0,  2068,  2069,
    2070,     0,     0,     0,     0,  2071,  2072,     0,  2073,  2074,
    2075,  2076,     0,     0,  2077,     0,  2525,  2079,  2080,  2081,
       0,  2082,     0,  2083,  2084,     0,  2085,     0,  2086,  2087,
       0,  2088,  2089,  2090,  2091,  2154,  2155,  2156,  2157,  2158,
    2092,  2159,  2093,     0,  2094,  2095,     0,  2096,  2097,  2098,
    2099,  2100,  2101,     0,  2102,  2103,  2104,  2105,  2106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2107,
       0,  2108,     0,  2109,     0,     0,     0,     0,     0,     0,
       0,     0,  2110,     0,  2111,  2112,  2113,  2114,  2115,  2116,
    2117,     0,     0,  2118,  2119,     0,     0,     0,     0,  2120,
       0,  2121,  2122,  2123,     0,  2124,     0,  2125,     0,  2126,
    2127,  2128,  2129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2130,  2131,  2132,     0,     0,     0,     0,     0,     0,
       0,  2133,     0,  2134,  2135,  2136,     0,     0,     0,     0,
    2137,     0,  2138,  2139,  2140,     0,     0,     0,  2141,     0,
       0,     0,  2142,  2143,     0,     0,  2144,  2145,  2146,  2147,
       0,     0,     0,  2148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2030,  2031,  2032,  2033,
    2034,  2035,     0,  2036,     0,  2037,     0,     0,     0,  2038,
    2039,  2040,     0,  2041,  2149,  2150,  2151,  2152,  2153,  2042,
    2043,  2044,  2045,  2046,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2047,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2048,  2049,     0,     0,  2050,     0,     0,
       0,     0,  2051,  2052,  2053,  2054,  2055,     0,     0,  2056,
       0,  2057,  2058,  2059,     0,     0,  2060,  2061,     0,  2062,
    2063,  2064,     0,     0,     0,  2065,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2066,
       0,     0,     0,     0,  2067,     0,     0,     0,     0,  2068,
    2069,  2070,     0,     0,     0,     0,  2071,  2072,     0,  2073,
    2074,  2075,  2076,     0,     0,  2077,     0,  2526,  2079,  2080,
    2081,     0,  2082,     0,  2083,  2084,     0,  2085,     0,  2086,
    2087,     0,  2088,  2089,  2090,  2091,  2154,  2155,  2156,  2157,
    2158,  2092,  2159,  2093,     0,  2094,  2095,     0,  2096,  2097,
    2098,  2099,  2100,  2101,     0,  2102,  2103,  2104,  2105,  2106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2107,     0,  2108,     0,  2109,     0,     0,     0,     0,     0,
       0,     0,     0,  2110,     0,  2111,  2112,  2113,  2114,  2115,
    2116,  2117,     0,     0,  2118,  2119,     0,     0,     0,     0,
    2120,     0,  2121,  2122,  2123,     0,  2124,     0,  2125,     0,
    2126,  2127,  2128,  2129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2130,  2131,  2132,     0,     0,     0,     0,     0,
       0,     0,  2133,     0,  2134,  2135,  2136,     0,     0,     0,
       0,  2137,     0,  2138,  2139,  2140,     0,     0,     0,  2141,
       0,     0,     0,  2142,  2143,     0,     0,  2144,  2145,  2146,
    2147,     0,     0,     0,  2148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2030,  2031,  2032,
    2033,  2034,  2035,     0,  2036,     0,  2037,     0,     0,     0,
    2038,  2039,  2040,     0,  2041,  2149,  2150,  2151,  2152,  2153,
    2042,  2043,  2044,  2045,  2046,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2047,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2048,  2049,     0,     0,  2050,     0,
       0,     0,     0,  2051,  2052,  2053,  2054,  2055,     0,     0,
    2056,     0,  2057,  2058,  2059,     0,     0,  2060,  2061,     0,
    2062,  2063,  2064,     0,     0,     0,  2065,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2066,     0,     0,     0,     0,  2067,     0,     0,     0,     0,
    2068,  2069,  2070,     0,     0,     0,     0,  2071,  2072,     0,
    2073,  2074,  2075,  2076,     0,     0,  2077,     0,  2527,  2079,
    2080,  2081,     0,  2082,     0,  2083,  2084,     0,  2085,     0,
    2086,  2087,     0,  2088,  2089,  2090,  2091,  2154,  2155,  2156,
    2157,  2158,  2092,  2159,  2093,     0,  2094,  2095,     0,  2096,
    2097,  2098,  2099,  2100,  2101,     0,  2102,  2103,  2104,  2105,
    2106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2107,     0,  2108,     0,  2109,     0,     0,     0,     0,
       0,     0,     0,     0,  2110,     0,  2111,  2112,  2113,  2114,
    2115,  2116,  2117,     0,     0,  2118,  2119,     0,     0,     0,
       0,  2120,     0,  2121,  2122,  2123,     0,  2124,     0,  2125,
       0,  2126,  2127,  2128,  2129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2130,  2131,  2132,     0,     0,     0,     0,
       0,     0,     0,  2133,     0,  2134,  2135,  2136,     0,     0,
       0,     0,  2137,     0,  2138,  2139,  2140,     0,     0,     0,
    2141,     0,     0,     0,  2142,  2143,     0,     0,  2144,  2145,
    2146,  2147,     0,     0,     0,  2148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2030,  2031,
    2032,  2033,  2034,  2035,     0,  2036,     0,  2037,     0,     0,
       0,  2038,  2039,  2040,     0,  2041,  2149,  2150,  2151,  2152,
    2153,  2042,  2043,  2044,  2045,  2046,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2047,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2048,  2049,     0,     0,  2050,
       0,     0,     0,     0,  2051,  2052,  2053,  2054,  2055,     0,
       0,  2056,     0,  2057,  2058,  2059,     0,     0,  2060,  2061,
       0,  2062,  2063,  2064,     0,     0,     0,  2065,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2066,     0,     0,     0,     0,  2067,     0,     0,     0,
       0,  2068,  2069,  2070,     0,     0,     0,     0,  2071,  2072,
       0,  2073,  2074,  2075,  2076,     0,     0,  2077,     0,  2627,
    2079,  2080,  2081,     0,  2082,     0,  2083,  2084,     0,  2085,
       0,  2086,  2087,     0,  2088,  2089,  2090,  2091,  2154,  2155,
    2156,  2157,  2158,  2092,  2159,  2093,     0,  2094,  2095,     0,
    2096,  2097,  2098,  2099,  2100,  2101,     0,  2102,  2103,  2104,
    2105,  2106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2107,     0,  2108,     0,  2109,     0,     0,     0,
       0,     0,     0,     0,     0,  2110,     0,  2111,  2112,  2113,
    2114,  2115,  2116,  2117,     0,     0,  2118,  2119,     0,     0,
       0,     0,  2120,     0,  2121,  2122,  2123,     0,  2124,     0,
    2125,     0,  2126,  2127,  2128,  2129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2130,  2131,  2132,     0,     0,     0,
       0,     0,     0,     0,  2133,     0,  2134,  2135,  2136,     0,
       0,     0,     0,  2137,     0,  2138,  2139,  2140,     0,     0,
       0,  2141,     0,     0,     0,  2142,  2143,     0,     0,  2144,
    2145,  2146,  2147,     0,     0,     0,  2148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2030,
    2031,  2032,  2033,  2034,  2035,     0,  2036,     0,  2037,     0,
       0,     0,  2038,  2039,  2040,     0,  2041,  2149,  2150,  2151,
    2152,  2153,  2042,  2043,  2044,  2045,  2046,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2047,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2048,  2049,     0,     0,
    2050,     0,     0,     0,     0,  2051,  2052,  2053,  2054,  2055,
       0,     0,  2056,     0,  2057,  2058,  2059,     0,     0,  2060,
    2061,     0,  2062,  2063,  2064,     0,     0,     0,  2065,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2066,     0,     0,     0,     0,  2067,     0,     0,
       0,     0,  2068,  2069,  2070,     0,     0,     0,     0,  2071,
    2072,     0,  2073,  2074,  2075,  2076,     0,     0,  2077,     0,
    2628,  2079,  2080,  2081,     0,  2082,     0,  2083,  2084,     0,
    2085,     0,  2086,  2087,     0,  2088,  2089,  2090,  2091,  2154,
    2155,  2156,  2157,  2158,  2092,  2159,  2093,     0,  2094,  2095,
       0,  2096,  2097,  2098,  2099,  2100,  2101,     0,  2102,  2103,
    2104,  2105,  2106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2107,     0,  2108,     0,  2109,     0,     0,
       0,     0,     0,     0,     0,     0,  2110,     0,  2111,  2112,
    2113,  2114,  2115,  2116,  2117,     0,     0,  2118,  2119,     0,
       0,     0,     0,  2120,     0,  2121,  2122,  2123,     0,  2124,
       0,  2125,     0,  2126,  2127,  2128,  2129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2130,  2131,  2132,     0,     0,
       0,     0,     0,     0,     0,  2133,     0,  2134,  2135,  2136,
       0,     0,     0,     0,  2137,     0,  2138,  2139,  2140,     0,
       0,     0,  2141,     0,     0,     0,  2142,  2143,     0,     0,
    2144,  2145,  2146,  2147,     0,     0,     0,  2148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2030,  2031,  2032,  2033,  2034,  2035,     0,  2036,     0,  2037,
       0,     0,     0,  2038,  2039,  2040,     0,  2041,  2149,  2150,
    2151,  2152,  2153,  2042,  2043,  2044,  2045,  2046,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2047,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2048,  2049,     0,
       0,  2050,     0,     0,     0,     0,  2051,  2052,  2053,  2054,
    2055,     0,     0,  2056,     0,  2057,  2058,  2059,     0,     0,
    2060,  2061,     0,  2062,  2063,  2064,     0,     0,     0,  2065,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2066,     0,     0,     0,     0,  2067,     0,
       0,     0,     0,  2068,  2069,  2070,     0,     0,     0,     0,
    2071,  2072,     0,  2073,  2074,  2075,  2076,     0,     0,  2077,
       0,  2715,  2079,  2080,  2081,     0,  2082,     0,  2083,  2084,
       0,  2085,     0,  2086,  2087,     0,  2088,  2089,  2090,  2091,
    2154,  2155,  2156,  2157,  2158,  2092,  2159,  2093,     0,  2094,
    2095,     0,  2096,  2097,  2098,  2099,  2100,  2101,     0,  2102,
    2103,  2104,  2105,  2106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2107,     0,  2108,     0,  2109,     0,
       0,     0,     0,     0,     0,     0,     0,  2110,     0,  2111,
    2112,  2113,  2114,  2115,  2116,  2117,     0,     0,  2118,  2119,
       0,     0,     0,     0,  2120,     0,  2121,  2122,  2123,     0,
    2124,     0,  2125,     0,  2126,  2127,  2128,  2129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2130,  2131,  2132,     0,
       0,     0,     0,     0,     0,     0,  2133,     0,  2134,  2135,
    2136,     0,     0,     0,     0,  2137,     0,  2138,  2139,  2140,
       0,     0,     0,  2141,     0,     0,     0,  2142,  2143,     0,
       0,  2144,  2145,  2146,  2147,     0,     0,     0,  2148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2030,  2031,  2032,  2033,  2034,  2035,     0,  2036,     0,
    2037,     0,     0,     0,  2038,  2039,  2040,     0,  2041,  2149,
    2150,  2151,  2152,  2153,  2042,  2043,  2044,  2045,  2046,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2047,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2048,  2049,
       0,     0,  2050,     0,     0,     0,     0,  2051,  2052,  2053,
    2054,  2055,     0,     0,  2056,     0,  2057,  2058,  2059,     0,
       0,  2060,  2061,     0,  2062,  2063,  2064,     0,     0,     0,
    2065,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2066,     0,     0,     0,     0,  2067,
       0,     0,     0,     0,  2068,  2069,  2070,     0,     0,     0,
       0,  2071,  2072,     0,  2073,  2074,  2075,  2076,     0,     0,
    2077,     0,  2718,  2079,  2080,  2081,     0,  2082,     0,  2083,
    2084,     0,  2085,     0,  2086,  2087,     0,  2088,  2089,  2090,
    2091,  2154,  2155,  2156,  2157,  2158,  2092,  2159,  2093,     0,
    2094,  2095,     0,  2096,  2097,  2098,  2099,  2100,  2101,     0,
    2102,  2103,  2104,  2105,  2106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2107,     0,  2108,     0,  2109,
       0,     0,     0,     0,     0,     0,     0,     0,  2110,     0,
    2111,  2112,  2113,  2114,  2115,  2116,  2117,     0,     0,  2118,
    2119,     0,     0,     0,     0,  2120,     0,  2121,  2122,  2123,
       0,  2124,     0,  2125,     0,  2126,  2127,  2128,  2129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2130,  2131,  2132,
       0,     0,     0,     0,     0,     0,     0,  2133,     0,  2134,
    2135,  2136,     0,     0,     0,     0,  2137,     0,  2138,  2139,
    2140,     0,     0,     0,  2141,     0,     0,     0,  2142,  2143,
       0,     0,  2144,  2145,  2146,  2147,     0,     0,     0,  2148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2030,  2031,  2032,  2033,  2034,  2035,     0,  2036,
       0,  2037,     0,     0,     0,  2038,  2039,  2040,     0,  2041,
    2149,  2150,  2151,  2152,  2153,  2042,  2043,  2044,  2045,  2046,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2047,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2048,
    2049,     0,     0,  2050,     0,     0,     0,     0,  2051,  2052,
    2053,  2054,  2055,     0,     0,  2056,     0,  2057,  2058,  2059,
       0,     0,  2060,  2061,     0,  2062,  2063,  2064,     0,     0,
       0,  2065,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2066,     0,     0,     0,     0,
    2067,     0,     0,     0,     0,  2068,  2069,  2070,     0,     0,
       0,     0,  2071,  2072,     0,  2073,  2074,  2075,  2076,     0,
       0,  2077,     0,  2766,  2079,  2080,  2081,     0,  2082,     0,
    2083,  2084,     0,  2085,     0,  2086,  2087,     0,  2088,  2089,
    2090,  2091,  2154,  2155,  2156,  2157,  2158,  2092,  2159,  2093,
       0,  2094,  2095,     0,  2096,  2097,  2098,  2099,  2100,  2101,
       0,  2102,  2103,  2104,  2105,  2106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2107,     0,  2108,     0,
    2109,     0,     0,     0,     0,     0,     0,     0,     0,  2110,
       0,  2111,  2112,  2113,  2114,  2115,  2116,  2117,     0,     0,
    2118,  2119,     0,     0,     0,     0,  2120,     0,  2121,  2122,
    2123,     0,  2124,     0,  2125,     0,  2126,  2127,  2128,  2129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2130,  2131,
    2132,     0,     0,     0,     0,     0,     0,     0,  2133,     0,
    2134,  2135,  2136,     0,     0,     0,     0,  2137,     0,  2138,
    2139,  2140,     0,     0,     0,  2141,     0,     0,     0,  2142,
    2143,     0,     0,  2144,  2145,  2146,  2147,     0,     0,     0,
    2148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2030,  2031,  2032,  2033,  2034,  2035,     0,
    2036,     0,  2037,     0,     0,     0,  2038,  2039,  2040,     0,
    2041,  2149,  2150,  2151,  2152,  2153,  2042,  2043,  2044,  2045,
    2046,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2047,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2048,  2049,     0,     0,  2050,     0,     0,     0,     0,  2051,
    2052,  2053,  2054,  2055,     0,     0,  2056,     0,  2057,  2058,
    2059,     0,     0,  2060,  2061,     0,  2062,  2063,  2064,     0,
       0,     0,  2065,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2066,     0,     0,     0,
       0,  2067,     0,     0,     0,     0,  2068,  2069,  2070,     0,
       0,     0,     0,  2071,  2072,     0,  2073,  2074,  2075,  2076,
       0,     0,  2077,     0,  2807,  2079,  2080,  2081,     0,  2082,
       0,  2083,  2084,     0,  2085,     0,  2086,  2087,     0,  2088,
    2089,  2090,  2091,  2154,  2155,  2156,  2157,  2158,  2092,  2159,
    2093,     0,  2094,  2095,     0,  2096,  2097,  2098,  2099,  2100,
    2101,     0,  2102,  2103,  2104,  2105,  2106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2107,     0,  2108,
       0,  2109,     0,     0,     0,     0,     0,     0,     0,     0,
    2110,     0,  2111,  2112,  2113,  2114,  2115,  2116,  2117,     0,
       0,  2118,  2119,     0,     0,     0,     0,  2120,     0,  2121,
    2122,  2123,     0,  2124,     0,  2125,     0,  2126,  2127,  2128,
    2129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     268,   269,   270,   271,   272,   273,     0,     0,     0,  2130,
    2131,  2132,     0,     0,   274,   275,     0,     0,     0,  2133,
       0,  2134,  2135,  2136,   276,   277,     0,     0,  2137,     0,
    2138,  2139,  2140,     0,     0,     0,  2141,   278,     0,     0,
    2142,  2143,     0,     0,  2144,  2145,  2146,  2147,     0,     0,
       0,  2148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   279,
       0,     0,     0,     0,   280,     0,     0,   281,   282,     0,
       0,     0,     0,     0,     0,     0,   283,     0,     0,     0,
       0,     0,  2149,  2150,  2151,  2152,  2153,     0,     0,     0,
       0,     0,     0,   284,     0,     0,     0,   285,   677,   678,
     679,   680,   681,   682,   683,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,   677,   678,   679,   680,
     681,   682,   683,   286,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     287,     0,     0,   677,   678,   679,   680,   681,   682,   683,
     288,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
       0,     0,     0,     0,  2154,  2155,  2156,  2157,  2158,     0,
    2159,     0,   289,   290,     0,     0,     0,     0,     0,     0,
     291,   292,     0,     0,     0,   293,   680,   681,   682,   683,
       0,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     294,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,     0,   333,     0,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,     0,     0,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,     0,   381,
     382,   383,   384,     0,     0,     0,     0,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   396,
     397,   398,   268,   269,   270,   271,   272,   273,     0,     0,
       0,     0,     0,     0,     0,     0,   274,   275,     0,     0,
       0,   399,     0,     0,     0,     0,   276,     0,     0,     0,
       0,   400,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   920,     0,     0,     0,     0,     0,
       0,   279,     0,     0,     0,     0,   280,     0,     0,   281,
     282,   677,   678,   679,   680,   681,   682,   683,   283,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  1281,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,   921,     0,     0,
       0,     0,   287,     0,  1282,     0,     0,     0,     0,     0,
       0,     0,   288,   677,   678,   679,   680,   681,   682,   683,
       0,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
       0,     0,     0,     0,   289,     0,     0,  -881,  -881,  -881,
    -881,  1283,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,   922,     0,     0,     0,     0,     0,     0,
       0,     0,   294,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,     0,   333,
       0,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,     0,
       0,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
       0,   381,   382,   383,   384,     0,     0,     0,     0,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,   396,   397,   398,   268,   269,   270,   271,   272,   273,
       0,     0,     0,     0,     0,     0,     0,     0,   274,   275,
       0,     0,     0,   399,     0,     0,     0,     0,   276,     0,
       0,     0,     0,   400,   401,     0,     0,     0,     0,     0,
       0,  1044,     0,     0,     0,     0,     0,     0,  1045,     0,
       0,     0,     0,     0,     0,   402,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   279,     0,     0,     0,     0,   280,     0,
       0,   281,   282,   677,   678,   679,   680,   681,   682,   683,
     283,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   677,   678,   679,   680,   681,   682,   683,  1289,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,   677,
     678,   679,   680,   681,   682,   683,  1291,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,   287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,  1296,   677,   678,
     679,   680,   681,   682,   683,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,   289,     0,     0,     0,
       0,     0,     0,  1046,   677,   678,   679,   680,   681,   682,
     683,  1297,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,     0,   294,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
       0,   333,     0,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,     0,     0,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,     0,   381,   382,   383,   384,     0,     0,     0,
       0,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   396,   397,   398,   268,   269,   270,   271,
     272,   273,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   275,     0,     0,     0,   399,     0,     0,     0,     0,
     276,     0,     0,     0,     0,   400,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1047,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   279,   701,     0,     0,     0,
     280,     0,     0,   281,   282,   677,   678,   679,   680,   681,
     682,   683,   283,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  1298,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1299,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   288,  1311,   677,   678,
     679,   680,   681,   682,   683,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,   289,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  1312,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,   294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   564,     0,
       0,     0,  1313,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,     0,   333,     0,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,     0,     0,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,     0,   381,   382,   383,   384,     0,
       0,     0,     0,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   396,   397,   398,   268,   269,
     270,   271,   272,   273,     0,     0,     0,     0,     0,     0,
       0,     0,   274,   275,     0,     0,     0,   399,     0,     0,
       0,     0,   276,   961,     0,     0,     0,   400,   401,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   677,   678,   679,   680,   681,   682,   683,   402,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   279,   701,     0,
       0,     0,   280,     0,     0,   281,   282,     0,     0,     0,
       0,     0,  1253,     0,   283,     0,     0,     0,  1315,   677,
     678,   679,   680,   681,   682,   683,     0,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,   677,   678,   679,   680,
     681,   682,   683,  1326,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1335,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   287,     0,
       0,   677,   678,   679,   680,   681,   682,   683,   288,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     289,     0,     0,     0,     0,     0,     0,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  1336,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,   294,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,     0,   333,     0,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,     0,     0,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,     0,   381,   382,   383,
     384,     0,     0,     0,     0,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,   396,   397,   398,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
       0,     0,     0,     0,   274,   275,     0,     0,     0,   399,
       0,     0,     0,     0,   276,     0,     0,     0,     0,   400,
     401,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,   402,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   279,
     701,     0,     0,     0,   280,     0,     0,   281,   282,     0,
       0,     0,     0,     0,     0,     0,   283,     0,     0,     0,
    1337,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1265,     0,     0,     0,  1338,     0,   677,
     678,   679,   680,   681,   682,   683,     0,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,  1339,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     287,     0,     0,   677,   678,   679,   680,   681,   682,   683,
     288,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   289,     0,     0,     0,     0,     0,     0,  1340,
     677,   678,   679,   680,   681,   682,   683,     0,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
     294,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1341,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,     0,   333,     0,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,     0,     0,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,     0,   381,
     382,   383,   384,     0,     0,     0,     0,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   396,
     397,   398,   268,   269,   270,   271,   272,   273,     0,     0,
       0,     0,     0,     0,     0,     0,   274,   275,     0,     0,
       0,   399,     0,     0,     0,     0,   276,     0,     0,     0,
       0,   400,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,   402,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   279,   701,     0,     0,     0,   280,     0,     0,   281,
     282,     0,     0,     0,     0,     0,     0,     0,   283,     0,
       0,     0,  1342,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  1833,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1348,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   287,     0,     0,     0,     0,  1352,     0,     0,
       0,     0,   288,   677,   678,   679,   680,   681,   682,   683,
       0,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
       0,     0,     0,     0,   289,     0,     0,     0,     0,     0,
       0,  1353,   677,   678,   679,   680,   681,   682,   683,     0,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,   294,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1354,     0,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,     0,   333,
       0,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,     0,
       0,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
       0,   381,   382,   383,   384,     0,     0,     0,     0,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,   396,   397,   398,   268,   269,   270,   271,   272,   273,
       0,     0,     0,     0,     0,     0,     0,     0,   274,   275,
       0,     0,     0,   399,     0,     0,     0,     0,   276,     0,
       0,     0,     0,   400,   401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,   402,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   279,   701,     0,     0,     0,   280,     0,
       0,   281,   282,     0,     0,     0,     0,     0,     0,     0,
     283,     0,     0,     0,  1355,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   677,   678,   679,
     680,   681,   682,   683,  1838,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,  1356,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
    1360,     0,     0,     0,   287,     0,     0,   677,   678,   679,
     680,   681,   682,   683,   288,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   289,     0,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  1361,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,     0,   294,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1362,     0,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
       0,   333,     0,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,     0,     0,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,     0,   381,   382,   383,   384,     0,     0,     0,
       0,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   396,   397,   398,   268,   269,   270,   271,
     272,   273,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   275,     0,     0,     0,   399,     0,     0,     0,     0,
     276,     0,     0,     0,     0,   400,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,   402,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   279,   701,     0,     0,     0,
     280,     0,     0,   281,   282,     0,     0,     0,     0,     0,
       0,     0,   283,     0,     0,     0,  1364,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  2412,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1566,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   287,     0,     0,     0,
       0,     0,     0,     0,  1860,     0,   288,   677,   678,   679,
     680,   681,   682,   683,     0,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,     0,   289,     0,
       0,     0,     0,     0,     0,  1861,   677,   678,   679,   680,
     681,   682,   683,     0,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,   294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1872,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,     0,   333,     0,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,     0,     0,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,     0,   381,   382,   383,   384,     0,
       0,     0,     0,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   396,   397,   398,   268,   269,
     270,   271,   272,   273,     0,     0,     0,     0,     0,     0,
       0,     0,   274,   275,     0,     0,     0,   399,     0,     0,
       0,     0,   276,     0,     0,     0,     0,   400,   401,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   677,   678,   679,   680,   681,   682,   683,   402,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   279,   701,     0,
       0,     0,   280,     0,     0,   281,   282,     0,     0,     0,
       0,     0,     0,     0,   283,     0,     0,     0,  1882,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  2414,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1898,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   287,     0,
       0,     0,     0,     0,     0,     0,  1899,     0,   288,   677,
     678,   679,   680,   681,   682,   683,     0,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
     289,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1900,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,   294,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1903,     0,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,     0,   333,     0,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,     0,     0,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,     0,   381,   382,   383,
     384,     0,     0,     0,     0,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,   396,   397,   398,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
       0,     0,     0,     0,   274,   275,     0,     0,     0,   399,
       0,     0,     0,     0,   276,     0,     0,     0,     0,   400,
     401,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,   402,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   279,
     701,     0,     0,     0,   280,     0,     0,   281,   282,     0,
       0,     0,     0,     0,     0,     0,   283,     0,     0,     0,
    1904,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,  1917,
     677,   678,   679,   680,   681,   682,   683,     0,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
     287,     0,     0,     0,     0,     0,     0,     0,  1918,     0,
     288,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,   289,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1919,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
     294,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2455,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,     0,   333,     0,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,     0,     0,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,     0,   381,
     382,   383,   384,     0,     0,     0,     0,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   396,
     397,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,   402,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,  1300,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  2458,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,     0,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,  2459,
       0,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,  2460,   701,     0,   677,
     678,   679,   680,   681,   682,   683,  1848,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,  1301,   677,   678,
     679,   680,   681,   682,   683,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1028,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1264,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,   677,   678,   679,
     680,   681,   682,   683,     0,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,   677,   678,   679,   680,   681,   682,
     683,     0,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,     0,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,     0,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,  1849,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  1270,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1271,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1272,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,   677,
     678,   679,   680,   681,   682,   683,  1273,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1274,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1275,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1280,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,   677,   678,   679,
     680,   681,   682,   683,  1284,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,   677,   678,   679,   680,   681,   682,
     683,  1285,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,  1286,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,  1290,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1292,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1293,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,  1294,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  1303,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1304,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1305,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,   677,
     678,   679,   680,   681,   682,   683,  1306,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1307,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1308,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1309,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,   677,   678,   679,
     680,   681,   682,   683,  1310,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,   677,   678,   679,   680,   681,   682,
     683,  1314,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,  1327,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,  1328,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1329,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1330,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,  1331,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  1332,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1333,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1334,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,   677,
     678,   679,   680,   681,   682,   683,  1345,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1346,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1347,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1351,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,   677,   678,   679,
     680,   681,   682,   683,  1357,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,   677,   678,   679,   680,   681,   682,
     683,  1358,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,  1359,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,  1363,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1389,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1852,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,  1857,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  1858,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1859,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1862,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,   677,
     678,   679,   680,   681,   682,   683,  1863,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1864,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1865,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1866,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,   677,   678,   679,
     680,   681,   682,   683,  1867,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,   677,   678,   679,   680,   681,   682,
     683,  1870,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,  1871,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,  1883,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1884,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1897,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,  1901,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  1902,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1911,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1912,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,   677,
     678,   679,   680,   681,   682,   683,  1913,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1914,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1915,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1916,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,   677,   678,   679,
     680,   681,   682,   683,  1920,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,   677,   678,   679,   680,   681,   682,
     683,  2012,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,  2229,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,  2313,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  2388,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  2420,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,  2421,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  2422,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  2423,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  2424,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,   677,
     678,   679,   680,   681,   682,   683,  2433,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  2450,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  2451,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  2452,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   124,   701,   677,   678,   679,
     680,   681,   682,   683,  2453,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,     0,     0,     0,
       0,  2454,     0,     0,     0,     0,     0,     0,     0,   125,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,   126,     0,     0,  2456,     1,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2457,   102,   103,     0,     0,
       3,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,   127,   104,     0,     0,     0,     0,     5,     0,
       0,     0,  2498,     0,     0,     0,     0,     0,     0,   128,
       0,   129,     0,     0,     0,     0,     0,   130,     0,     6,
       7,     0,     0,     0,     0,     0,     0,     0,     0,  2504,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,     0,   107,
       0,     0,     0,     0,     0,   108,     0,     0,     0,     8,
       0,     0,     0,  2508,     0,     0,     0,     0,     0,     0,
       9,    10,    11,     0,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2513,     0,     0,     0,     0,     0,    12,     0,
      13,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2641,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,   132,     0,     0,     0,     0,     0,    17,  2648,     0,
      18,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,     0,     0,     0,   133,     0,     0,     0,     0,
       0,     0,     0,     0,   134,     0,  2674,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,     0,   112,
       0,     0,     0,     0,     0,     0,   136,     0,     0,   137,
       0,     0,     0,     0,   138,  2687,     0,   139,     0,     0,
       0,     0,   140,   113,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,     0,  2712,     0,
       0,     0,     0,     0,   116,     0,     0,   117,     0,     0,
       0,     0,   118,     0,     0,   119,     0,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2713,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,  2772,     0,     0,     0,     0,     0,
       0,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,    25,     0,     0,    26,
       0,     0,     0,     0,    27,   677,   678,   679,   680,   681,
     682,   683,     0,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,     0,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,   793,
     794,     0,   795,     0,   796,   797,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     798,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2230,
    2231,     0,     0,     0,  2232,     0,  2233,     0,     0,     0,
       0,     0,   799,   800,   801,   802,     0,     0,     0,     0,
       0,   803,     0,     0,     0,     0,     0,     0,     0,     0,
     804,     0,     0,     0,     0,     0,     0,     0,     0,  2234,
    2235,     0,  2236,     0,     0,     0,     0,     0,     0,     0,
     805,     0,     0,     0,     0,     0,     0,     0,   806,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   807,     0,     0,     0,     0,     0,     0,
     808,     0,     0,   809,     0,     0,   810,   811,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,   812,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   813,   814,     0,
       0,   815,   816,     0,     0,     0,     0,   817,     0,   818,
       0,     0,     0,     0,   819,   820,     0,     0,     0,     0,
     821,     0,   822,     0,     0,     0,     0,     0,   823,     0,
     824,   825,     0,  2237,  2238,  1564,   826,   677,   678,   679,
     680,   681,   682,   683,     0,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  1572,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,     0,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,   676,     0,     0,
       0,  2208,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  1563,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   702,     0,     0,     0,  1844,
       0,     0,     0,     0,     0,     0,     0,   677,   678,   679,
     680,   681,   682,   683,  2209,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1295,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  1373,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,     0,     0,     0,     0,   677,   678,   679,
     680,   681,   682,   683,  1638,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701
};

static const yytype_int16 yycheck[] =
{
     153,  1393,   419,  1827,  1810,   771,  1475,  1768,   413,  1661,
    1519,  1432,  1433,   409,   492,   722,   877,  1438,  1886,  1887,
      20,  1812,  1491,  1163,  1164,     3,  1953,  1895,  1896,  1169,
     136,  1171,     3,    49,  2193,  1504,  2199,     4,     5,     6,
       7,   136,   140,  1944,    20,  1076,     6,   107,     3,  2252,
    2253,   154,  1540,   159,   107,  1703,  1704,   107,    18,    36,
    2263,  2264,   413,   829,   199,     5,     3,   199,   159,   154,
    1672,     3,   191,     3,  1722,     4,   219,     8,     3,     4,
       5,     6,     7,     8,   240,    51,     6,     4,   240,   240,
       3,   266,    51,    36,   277,    78,   112,    48,  1248,    48,
    1250,     3,    90,    16,     4,    72,   266,   157,    97,   252,
     263,   264,   108,   216,    51,   274,    71,   266,    71,   524,
     266,   274,   275,   276,   268,   266,    40,   280,     3,    84,
       3,   216,   266,    10,    11,    12,    13,    14,    15,    16,
    1946,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   274,    36,
       3,    10,    11,    12,    13,    14,    15,    16,    87,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     3,    36,   154,   167,
    1251,   277,   266,   107,   136,   173,   167,  2776,     3,     5,
     107,   277,   173,    87,     3,    18,   268,     4,   258,     3,
       4,     5,     6,     7,     8,    99,   179,     5,   201,   252,
    1081,   172,  2425,  2426,  2427,  2428,  2429,  2430,   371,     3,
     266,     3,    20,   193,   136,     3,  2439,   150,   274,     3,
    2443,   415,  2003,   157,  2447,    71,   197,   391,   197,   402,
     216,   135,   154,   107,  2015,  2834,  2835,    63,     3,   143,
       3,   404,   258,   241,   217,   448,   351,    84,   193,   113,
     258,   446,   446,   193,   176,   241,   193,   228,   261,   228,
     269,   156,   195,   426,  1705,  2864,  1755,   136,   448,   448,
       3,  2052,   448,   193,   446,   446,   227,   446,  1767,   704,
     446,   203,  2063,   245,  1813,   446,  1367,   236,   237,   193,
     401,   274,   446,   448,  1783,   711,   448,   252,   398,   399,
     439,    85,  2083,    95,  2225,     3,   277,   241,   277,   391,
     249,  1979,   448,     3,   252,  1823,  2097,   277,   398,   399,
     400,   248,   448,   446,   258,  2106,  1948,   407,   398,   193,
     448,   156,  1383,   448,   407,  1121,  1122,   156,   242,   319,
     445,   446,   448,   443,   252,  1131,   333,   334,   335,   445,
    1231,   184,   446,    51,  2242,  2243,  2244,  2245,  2246,  2247,
    1087,  2544,   435,   436,  2543,  2146,  2254,   184,  2194,  2195,
    2258,   217,   156,   277,  2262,   327,   328,   329,   330,   193,
     351,    71,   351,   381,   258,     3,  1556,   560,  1558,   445,
     381,   564,   448,   156,    84,  1181,  1182,  1183,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   445,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   445,   599,   600,   601,    74,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   422,   446,   445,
     447,   876,   625,   626,   404,   446,  2679,   630,   631,   446,
    2683,   440,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,   649,   650,   651,   652,
     653,   654,   655,   656,   447,   658,   659,   660,   445,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,  1380,
     673,   674,   447,    78,   677,   678,   679,   680,   681,  1295,
    1296,   404,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   900,
    2477,    74,   903,   706,  2023,    18,  2025,    18,   156,   712,
       3,   404,   446,   376,   377,   378,   379,   918,   124,   125,
     255,    78,   449,  2334,     3,  1636,   417,     3,  2339,   134,
      71,     3,  2406,  2786,  2787,   210,  2789,  2790,     3,    76,
      74,   444,     3,    84,     3,  1735,  2387,  1737,  1738,   448,
      10,    11,    12,    13,    14,    15,    16,   417,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     3,    36,   134,     3,     3,
       3,    55,    98,     0,    97,   113,    97,   322,  2462,    10,
      11,    12,    13,    14,    15,    16,   201,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   133,    36,   153,     3,  1434,   192,
      85,  1149,  1150,    84,  1070,   108,   163,   438,    51,   112,
     441,    71,     3,   149,   197,   154,     3,   210,    78,  1396,
     177,   113,  1399,     3,   201,  2297,    38,     3,     3,  2168,
       3,     3,    18,   190,     3,  2174,   261,     3,   192,    54,
      55,   204,  2580,   156,     3,   193,  2584,   240,   103,   275,
     183,   874,   183,     3,  1075,     5,   210,   156,   215,    74,
     156,     3,    48,    75,   197,    51,   197,    53,    87,   139,
      56,   156,     3,     3,   134,   430,   431,   156,   138,  2510,
      99,   238,    18,   266,   261,    71,   240,   177,   100,   912,
     913,   146,    78,    79,   917,   155,   108,  2528,   230,   154,
      36,   924,   100,  2700,   164,   268,     3,   241,   120,    49,
       3,   156,   156,  2204,   208,   218,   135,   259,  1649,   124,
     125,   176,   120,   137,   143,   215,   258,   113,   267,     9,
      51,   396,   202,   446,  1221,    28,     3,   271,   280,    60,
      20,   201,    78,  2465,    10,    11,    12,    13,    14,    15,
      16,   100,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   156,
      36,   120,   112,   241,   193,   187,   156,   113,   164,    39,
     156,   156,  2676,   156,   156,     3,   200,   156,     3,    14,
     156,   155,   100,    18,  2625,   210,   208,   156,  2692,    59,
     164,   261,  2474,   271,  2383,  2743,  2744,   193,  2746,  2747,
      28,  2350,   120,   216,   156,   201,  1039,  1040,   103,  1042,
     103,   235,  2284,   242,  1047,   156,   156,   156,   240,  2368,
     103,  2370,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   269,    36,   156,
     809,   146,     3,   146,   103,   155,   815,    51,   817,   154,
     275,   154,     3,   146,   159,   261,    60,  2753,  2600,     3,
      51,   154,     3,    62,   155,    51,   246,    66,  2719,    60,
    2784,   176,   396,   176,    60,    13,    14,     3,    16,   445,
     446,    19,  1389,   176,   447,   448,  1381,   146,    10,    11,
      12,    13,    14,    15,    16,   154,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,  2605,    36,   114,   252,   176,   117,   396,
    2836,    32,    33,    34,   396,    36,   396,  1368,    33,    34,
     396,    36,     3,   132,   396,  1178,  1377,    28,    29,    30,
      31,    32,    33,    34,     3,    36,   396,   447,   448,  2865,
    2866,   447,   448,   152,     3,   796,   797,   798,   799,  1815,
     801,   160,   171,   804,   805,   806,   448,   398,   399,   400,
     811,   812,   813,   447,   448,   816,    45,    46,  2537,   223,
     224,   396,  2898,   396,  2466,     3,   447,   448,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,  2696,    36,   447,   448,    82,    83,
    1253,     3,  1255,   396,   447,   448,     3,   447,   448,  1262,
    1263,   448,  1265,   447,   448,     3,  1269,   447,   448,   405,
     406,   405,   406,  1276,  1277,  1278,  1279,   136,  1281,  1282,
    1283,   136,   447,   448,   136,  1288,  1289,   159,  1291,   136,
     249,   409,   251,     3,  1297,  1298,  1299,   447,   448,   447,
     448,     3,   447,   448,  2756,   447,   448,     3,  1311,  1312,
    1313,   270,  1315,     4,     5,  1156,  1157,   159,  1159,  1160,
    1161,   447,   448,  1326,  1165,  1166,  1167,     4,     5,  1170,
    1531,   136,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
     446,  1344,   447,   448,  2796,  1348,     3,  1350,   159,  1352,
    1353,  1354,  1355,  1356,   447,   448,   136,  1360,  1361,  1362,
     136,  1364,   447,   448,   447,   448,   447,   448,   447,   448,
    1373,   136,  1375,  1376,  2826,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,  1390,    36,   447,
     448,    94,  2844,   159,  1397,   447,   448,   447,   448,   447,
     448,   447,   448,   447,   448,   136,  2858,   136,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  2871,
      36,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     3,    36,   447,   448,  2887,  1637,   447,   448,  1640,
     281,  1642,    51,  1644,     3,    10,    11,    12,    13,    14,
      15,    16,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    1473,    36,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   281,    36,   447,
     448,    10,    11,    12,    13,    14,    15,    16,   446,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   197,    36,    11,    12,
      13,    14,    15,    16,   446,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,  1545,    36,   447,   448,  1549,   447,   448,     3,
     447,   448,  1555,   447,   448,   447,   448,   447,   448,   447,
     448,  1564,   197,  1566,     3,   447,   448,   447,   448,  1572,
    1573,   140,    10,    11,    12,    13,    14,    15,    16,   197,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   281,    36,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     3,    36,   447,   448,    10,    11,
      12,    13,    14,    15,    16,  1638,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   446,    36,   447,   448,   447,   448,   447,
     448,  1664,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   445,    36,    10,
      11,    12,    13,    14,    15,    16,  1699,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   197,    36,    10,    11,    12,    13,
      14,    15,    16,   281,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   281,    36,    10,    11,    12,    13,    14,    15,    16,
     281,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   281,    36,
      57,    58,    10,    11,    12,    13,    14,    15,    16,   281,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   281,    36,   281,
     447,   448,  1805,   281,    10,    11,    12,    13,    14,    15,
      16,   281,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     3,
      36,    57,    58,   181,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     4,    36,  1848,   447,   448,  1851,   447,
     448,   447,   448,   447,   448,   447,   448,  1860,  1861,   447,
     448,   447,   448,   447,   448,   447,   448,   447,   448,  1872,
     447,   448,   447,   448,   447,   448,   447,   448,  1881,  1882,
     447,   448,   447,   448,   447,   448,   447,   448,   445,   446,
     245,   447,   448,   447,   448,  1898,  1899,  1900,   445,   446,
    1903,  1904,     3,  1906,     8,  1908,     9,  1910,   447,   448,
     447,   448,   447,   448,  1917,  1918,  1919,   447,   448,   447,
     448,  1083,  1084,  1385,  1386,  1938,  1939,   445,   447,   448,
     446,    36,   446,   448,   446,   446,   446,   446,  1941,  1942,
      10,    11,    12,    13,    14,    15,    16,   446,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   446,    36,   446,     3,   446,
     446,   446,   446,   446,   446,   446,    51,   446,   446,   446,
    1983,   446,   446,   446,  1987,   446,   446,   446,   446,   446,
     446,   446,     3,   446,  1997,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   159,  2011,   447,
     448,    12,    13,    14,    15,    16,   446,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   446,    36,   447,   448,   446,   446,
     446,   446,   446,   446,   446,   446,     3,     4,     5,     6,
       7,     8,   446,    10,   446,    12,   446,   446,   446,    16,
      17,    18,   446,    20,     3,   447,   448,     3,   446,    26,
      27,    28,    29,    30,   446,   446,   446,   446,   446,   446,
     446,   446,   446,    40,   446,   446,   446,   446,   446,   446,
     446,     3,   446,    50,    51,   446,   446,    54,     3,   446,
     448,   446,    59,    60,    61,    62,    63,   446,   446,    66,
     446,    68,    69,    70,   446,   446,    73,    74,   446,    76,
      77,    78,   446,   446,   446,    82,   447,   448,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,    96,
     446,   446,   446,   446,   101,   446,   446,   446,   446,   106,
     107,   108,     3,    16,   448,   266,   113,   114,   421,   116,
     117,   118,   119,     3,    28,   122,     3,   124,   125,   126,
     127,     3,   129,     3,   131,   132,   266,   134,     3,   136,
     137,   448,   139,   140,   141,   142,     3,   159,     4,   159,
       3,   148,     3,   150,     3,   152,   153,    53,   155,   156,
     157,   158,   159,   160,    53,   162,   163,   164,   165,   166,
     448,  2214,  2215,    44,     3,   423,    71,  2220,   277,  2222,
     177,   245,   179,     3,   181,     3,   197,     3,   197,   281,
       3,   197,   281,   190,   277,   192,   193,   194,   195,   196,
     197,   198,   448,   281,   201,   202,   418,   281,     3,   428,
     207,     3,   209,   210,   211,   277,   213,     3,   215,     3,
     217,   218,   219,   220,   281,   281,   281,    28,     3,     3,
       3,     3,     3,     3,     3,     3,    74,   281,    74,  2282,
    2283,   281,   239,   240,   241,     3,     3,   281,   281,   281,
     281,     3,   249,     3,   251,   252,   253,    36,     3,     3,
     449,   258,   447,   260,   261,   262,   447,   447,   447,   266,
     447,   447,   447,   270,   271,   447,   447,   274,   275,   276,
     277,   447,   447,     5,   281,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     447,    36,   447,   447,   447,   446,     3,     3,     3,     3,
    2363,   447,     3,   163,     3,   322,   323,   324,   325,   326,
     196,     3,   271,     3,   402,   402,   274,   271,   448,   274,
       3,  2384,    10,    11,    12,    13,    14,    15,    16,   273,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     5,    36,   274,
     447,   271,   274,  2416,    16,   274,   273,   271,     3,     3,
     179,   274,    10,    11,    12,    13,    14,    15,    16,  2432,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   271,    36,     5,
     277,   274,  2455,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    42,    36,  2472,
      42,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,   245,     3,     3,    20,     3,   444,   445,   446,
     447,   448,     5,   450,   379,     3,   217,   217,  2501,  2502,
       5,    10,    11,    12,    13,    14,    15,    16,     5,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   446,    36,   446,   446,
     446,    64,   446,   446,     3,   446,   446,     3,     3,     3,
       4,     5,     6,     7,     8,     3,    10,   447,    12,     3,
       3,   448,    16,    17,    18,   197,    20,   447,    51,   197,
     396,     3,    26,    27,    28,    29,    30,   281,   197,     3,
     446,     3,     3,     3,   277,   140,    40,     4,   197,   446,
     277,     3,     3,     3,   198,     3,    50,    51,   396,     3,
      54,     3,     3,     3,  2597,    59,    60,    61,    62,    63,
       3,     3,    66,     3,    68,    69,    70,   241,   447,    73,
      74,   446,    76,    77,    78,   241,   164,   446,    82,   447,
     136,   164,   164,   350,   350,   447,   350,   447,   350,   448,
     197,   350,    96,     4,   446,   271,   446,   101,     4,  2642,
     446,   411,   106,   107,   108,   163,   411,   446,   163,   113,
     114,     4,   116,   117,   118,   119,   410,   136,   122,  2662,
     124,   125,   126,   127,   433,   129,   433,   131,   132,   446,
     134,     4,   136,   137,     4,   139,   140,   141,   142,     4,
     446,     3,   271,   164,   148,   271,   150,   275,   152,   153,
     446,   155,   156,   157,   158,   159,   160,     5,   162,   163,
     164,   165,   166,   197,     3,   197,    18,    36,   222,     3,
     222,   245,     4,   177,     5,   179,     5,   181,     3,     3,
     193,   446,     5,     4,   245,     5,   190,    39,   192,   193,
     194,   195,   196,   197,   198,     5,    48,   201,   202,    51,
       5,    53,   449,   207,    56,   209,   210,   211,   446,   213,
     213,   215,   197,   217,   218,   219,   220,     3,   140,    71,
       3,     3,     3,   448,   197,   446,    78,    79,   418,   101,
     397,   428,   446,   422,    94,   239,   240,   241,  2781,     3,
       3,    63,   179,     3,    20,   249,   446,   251,   252,   253,
     199,    91,   447,   449,   258,     4,   260,   261,   262,   161,
     350,   113,   266,   350,   350,   350,   270,   271,     5,   350,
     274,   275,   276,   277,   350,   446,     5,   281,   130,   412,
     448,   446,   446,   274,   446,   446,   241,     3,     3,   140,
     447,     3,   403,   446,   179,    20,    20,     4,   179,   350,
       3,     4,     5,     6,     7,     8,   350,    10,   350,    12,
      20,     3,   164,    16,    17,    18,     4,    20,   322,   323,
     324,   325,   326,    26,    27,    28,    29,    30,     4,    20,
     179,     4,   446,   446,    20,     3,   446,    40,   164,     3,
     446,   193,     3,   222,   222,   164,   447,    50,    51,   201,
     447,    54,   447,   447,   447,    78,    59,    60,    61,    62,
      63,   268,   446,    66,     3,    68,    69,    70,   446,   446,
      73,    74,   140,    76,    77,    78,    60,   245,   396,    82,
     268,   197,     3,    20,     3,    20,     4,     4,     3,     3,
     164,   164,     3,    96,     4,   212,   446,     6,   101,   448,
     446,     4,     4,   106,   107,   108,   446,   446,   446,   261,
     113,   114,   448,   116,   117,   118,   119,   446,   446,   122,
     446,   124,   125,   126,   127,   164,   129,     3,   131,   132,
       3,   134,   446,   136,   137,   447,   139,   140,   141,   142,
     444,   445,   446,   447,   448,   148,   450,   150,   447,   152,
     153,   447,   155,   156,   157,   158,   159,   160,   446,   162,
     163,   164,   165,   166,   447,   446,   446,   446,   446,   446,
     446,   446,    51,   163,   177,   141,   179,   446,   181,   447,
       3,   447,   447,   447,    20,   448,     4,   190,     5,   192,
     193,   194,   195,   196,   197,   198,     4,     4,   201,   202,
     446,   446,   446,     5,   207,   446,   209,   210,   211,   448,
     213,     4,   215,   274,   217,   218,   219,   220,   448,     4,
     448,     5,     4,    94,     5,     5,     4,     4,   448,     4,
     448,   446,   446,     3,   193,     3,   239,   240,   241,    52,
       3,   446,   446,   446,     4,   446,   249,     5,   251,   252,
     253,   164,   164,   213,     4,   258,     4,   260,   261,   262,
     240,     3,   446,   266,     3,     3,     3,   270,   271,     3,
       3,   274,   275,   276,   277,   446,   118,     3,   281,   446,
       3,   266,   446,     3,    20,   268,     4,   101,    20,     4,
      20,    20,   140,   446,     3,   258,   446,   197,    20,   446,
     446,     3,     4,     5,     6,     7,     8,   448,    10,     4,
      12,   351,   350,   148,    16,    17,    18,   350,    20,   322,
     323,   324,   325,   326,    26,    27,    28,    29,    30,   447,
      94,     3,   447,   447,   447,   447,    63,   446,    40,     3,
     448,    12,    12,    59,   433,     4,   179,   432,    50,    51,
       4,     4,    54,   448,   448,     4,     3,    59,    60,    61,
      62,    63,     5,     3,    66,     3,    68,    69,    70,     5,
       5,    73,    74,    51,    76,    77,    78,   446,    60,   446,
      82,   446,     4,    60,     3,   447,   217,   140,   447,   447,
     447,   446,   448,   446,    96,   446,   448,   277,   446,   101,
     446,   268,   447,     5,   106,   107,   108,     4,     4,   271,
       5,   113,   114,   447,   116,   117,   118,   119,     4,   446,
     122,   164,   124,   125,   126,   127,   446,   129,     3,   131,
     132,   448,   134,   164,   136,   137,    88,   139,   140,   141,
     142,   444,   445,   446,   447,   448,   148,   450,   150,   446,
     152,   153,   447,   155,   156,   157,   158,   159,   160,    63,
     162,   163,   164,   165,   166,   446,   413,     3,   447,   447,
     198,   446,    20,   447,   164,   177,   447,   179,   448,   181,
     164,   448,     5,    20,     5,     5,   448,     4,   190,     4,
     192,   193,   194,   195,   196,   197,   198,   448,    43,   201,
     202,     3,    18,   446,   446,   207,   164,   209,   210,   211,
       3,   213,     3,   215,   447,   217,   218,   219,   220,   447,
     447,   447,    60,     3,   118,    78,   446,   136,     3,     3,
     446,    63,    63,     3,     3,     3,    63,   239,   240,   241,
     446,   446,   446,     5,   350,   350,   447,   249,   447,   251,
     252,   253,   447,   350,   350,   447,   258,   447,   260,   261,
     262,     5,     5,     5,   266,     3,   447,    20,   270,   271,
     448,    20,   274,   275,   276,   277,     4,     4,     4,   281,
     448,     4,   448,   269,   207,     3,     3,    60,   277,     5,
       5,   447,    77,   156,   166,   276,   131,   217,     5,   446,
     446,   207,     3,     4,     5,     6,     7,     8,     3,    10,
      20,    12,   416,   423,   204,    16,    17,    18,   448,    20,
     322,   323,   324,   325,   326,    26,    27,    28,    29,    30,
       3,   447,   447,     3,   101,   447,   447,   214,   447,    40,
     140,     4,     4,     4,   447,     4,   446,   448,   447,    50,
      51,   446,   446,    54,     3,   447,   446,   448,    59,    60,
      61,    62,    63,    60,   447,    66,     5,    68,    69,    70,
       3,   447,    73,    74,   448,    76,    77,    78,     3,   448,
     447,    82,   447,     3,    20,   447,   447,   446,     3,     3,
     447,   446,   446,     4,   446,    96,     4,   448,   159,   448,
     101,     4,     4,   447,     3,   106,   107,   108,   207,     3,
       3,   446,   113,   114,     4,   116,   117,   118,   119,     3,
      20,   122,   447,   124,   125,   126,   127,     3,   129,     3,
     131,   132,     4,   134,   447,   136,   137,   447,   139,   140,
     141,   142,   444,   445,   446,   447,   448,   148,   450,   150,
     447,   152,   153,   447,   155,   156,   157,   158,   159,   160,
     231,   162,   163,   164,   165,   166,   231,     3,   448,    20,
       3,   447,   447,   447,     3,   180,   177,   240,   179,   245,
     181,   447,   447,     5,   447,   447,   180,   448,   448,   190,
     447,   192,   193,   194,   195,   196,   197,   198,   446,   229,
     201,   202,   446,   448,   446,     3,   207,     3,   209,   210,
     211,     5,   213,   447,   215,   447,   217,   218,   219,   220,
     447,   447,   228,     5,   448,     3,   447,   151,   446,    97,
     271,   448,   448,   174,   447,   447,   250,   197,   239,   240,
     241,   197,     5,   191,   191,     5,   183,  1566,   249,  1376,
     251,   252,   253,   565,  1935,  2285,  2213,   258,   716,   260,
     261,   262,   706,  1668,  1268,   266,   221,   878,   886,   270,
     271,  2521,  2806,   274,   275,   276,   277,  2717,  1201,  1204,
     281,  1511,  1212,  1517,  1117,   755,  1427,  2179,  1502,  1779,
    2167,  2533,  2366,  2817,   148,  2870,  2416,   902,   554,  2383,
    1825,  1802,  1249,     3,     4,     5,     6,     7,     8,  2185,
      10,  1814,    12,   267,  2001,  1168,    16,    17,    18,   501,
      20,   322,   323,   324,   325,   326,    26,    27,    28,    29,
      30,   790,    -1,    -1,    -1,    -1,    -1,  1185,    -1,    -1,
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
     140,   141,   142,   444,   445,   446,   447,   448,   148,   450,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,   322,   323,   324,   325,   326,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     139,   140,   141,   142,   444,   445,   446,   447,   448,   148,
     450,   150,    -1,   152,   153,    -1,   155,   156,   157,   158,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,   322,   323,   324,   325,   326,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   139,   140,   141,   142,   444,   445,   446,   447,   448,
     148,   450,   150,    -1,   152,   153,    -1,   155,   156,   157,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,   322,   323,   324,   325,   326,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
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
     137,    -1,   139,   140,   141,   142,   444,   445,   446,   447,
     448,   148,   450,   150,    -1,   152,   153,    -1,   155,   156,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,   322,   323,   324,   325,   326,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
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
     136,   137,    -1,   139,   140,   141,   142,   444,   445,   446,
     447,   448,   148,   450,   150,    -1,   152,   153,    -1,   155,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,   322,   323,   324,   325,
     326,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,   444,   445,
     446,   447,   448,   148,   450,   150,    -1,   152,   153,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,   322,   323,   324,
     325,   326,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
     114,    -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,
     124,   125,   126,   127,    -1,   129,    -1,   131,   132,    -1,
     134,    -1,   136,   137,    -1,   139,   140,   141,   142,   444,
     445,   446,   447,   448,   148,   450,   150,    -1,   152,   153,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,   322,   323,
     324,   325,   326,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
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
     444,   445,   446,   447,   448,   148,   450,   150,    -1,   152,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,   322,
     323,   324,   325,   326,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
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
     142,   444,   445,   446,   447,   448,   148,   450,   150,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
     322,   323,   324,   325,   326,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
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
     141,   142,   444,   445,   446,   447,   448,   148,   450,   150,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,   322,   323,   324,   325,   326,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     140,   141,   142,   444,   445,   446,   447,   448,   148,   450,
     150,    -1,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,    -1,   162,   163,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,   179,
      -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,    -1,
      -1,   201,   202,    -1,    -1,    -1,    -1,   207,    -1,   209,
     210,   211,    -1,   213,    -1,   215,    -1,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,   239,
     240,   241,    -1,    -1,    17,    18,    -1,    -1,    -1,   249,
      -1,   251,   252,   253,    27,    28,    -1,    -1,   258,    -1,
     260,   261,   262,    -1,    -1,    -1,   266,    40,    -1,    -1,
     270,   271,    -1,    -1,   274,   275,   276,   277,    -1,    -1,
      -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,   110,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    10,    11,    12,    13,
      14,    15,    16,   146,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     193,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,   444,   445,   446,   447,   448,    -1,
     450,    -1,   225,   226,    -1,    -1,    -1,    -1,    -1,    -1,
     233,   234,    -1,    -1,    -1,   238,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
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
      -1,   414,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,   424,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    10,    11,    12,    13,    14,    15,    16,    89,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   448,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,   178,    -1,    -1,
      -1,    -1,   183,    -1,   448,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    13,    14,    15,
      16,   448,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    10,    11,    12,    13,    14,    15,    16,
      89,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   448,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   448,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    -1,    -1,   448,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    -1,   232,    10,    11,    12,    13,    14,    15,
      16,   448,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
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
      17,    18,    -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   446,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    72,    36,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    10,    11,    12,    13,    14,
      15,    16,    89,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   448,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,   448,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   448,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,
      -1,    -1,   448,    -1,   281,   282,   283,   284,   285,   286,
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
      -1,    -1,    27,    28,    -1,    -1,    -1,   424,   425,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   446,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    72,    36,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    89,    -1,    -1,    -1,   448,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   448,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   193,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   448,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,   263,    -1,
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
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   446,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    72,
      36,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
     448,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,   448,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   448,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     193,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   448,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,   281,   282,
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
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   446,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    72,    36,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   113,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   448,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    -1,    -1,   448,    -1,    -1,
      -1,    -1,   193,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
      -1,   448,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   446,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    72,    36,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   113,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   448,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     448,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   448,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     448,    -1,   281,   282,   283,   284,   285,   286,   287,   288,
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
      10,    11,    12,    13,    14,    15,    16,   446,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    72,    36,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,   448,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   113,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   448,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,   193,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,    -1,   448,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   448,    -1,   281,   282,   283,   284,   285,   286,
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
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   446,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    72,    36,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,   448,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   113,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   448,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,   193,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   448,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,   281,   282,   283,   284,
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
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   446,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    72,
      36,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
     448,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   448,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,
     193,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   448,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,   281,   282,
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
     393,   394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   424,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   446,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   321,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   448,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   448,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   448,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   140,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,   447,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
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
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   447,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   447,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   447,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   447,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   447,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   447,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   447,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   447,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   447,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   447,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   447,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    95,    36,    10,    11,    12,
      13,    14,    15,    16,   447,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,   155,    -1,    -1,   447,    37,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   447,   138,   139,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,   202,   155,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,   219,
      -1,   221,    -1,    -1,    -1,    -1,    -1,   227,    -1,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,   221,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   157,
      -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,
     168,   169,   170,    -1,   246,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,   206,    -1,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,   255,   447,    -1,
     258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   404,    -1,   447,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,   371,
      -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,   429,
      -1,    -1,    -1,    -1,   434,   447,    -1,   437,    -1,    -1,
      -1,    -1,   442,   395,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,   447,    -1,
      -1,    -1,    -1,    -1,   426,    -1,    -1,   429,    -1,    -1,
      -1,    -1,   434,    -1,    -1,   437,    -1,    -1,    -1,    -1,
     442,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,
      -1,   419,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   429,    -1,    -1,    -1,    -1,   434,    -1,    -1,   437,
      -1,    -1,    -1,    -1,   442,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    61,
      62,    -1,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
     182,    -1,    -1,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   205,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,    -1,
      -1,   243,   244,    -1,    -1,    -1,    -1,   249,    -1,   251,
      -1,    -1,    -1,    -1,   256,   257,    -1,    -1,    -1,    -1,
     262,    -1,   264,    -1,    -1,    -1,    -1,    -1,   270,    -1,
     272,   273,    -1,   278,   279,   253,   278,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   136,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    49,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   124,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
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
     395,   404,   419,   420,   429,   434,   437,   442,   452,   491,
     492,   532,   536,   538,   545,   546,   549,   551,   552,   554,
     555,   556,   561,   562,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   597,   600,   607,   608,   610,   626,   627,   636,
     639,   641,   642,   643,   666,   669,   676,   677,   680,   683,
     684,   687,   219,   252,   371,   404,   426,   252,     3,    10,
      95,   102,   138,   139,   155,   202,   219,   221,   227,   246,
     247,   261,   371,   395,   404,   417,   426,   429,   434,   437,
     442,   648,     3,   533,    95,   139,   155,   202,   219,   221,
     227,   252,   371,   395,   404,   417,   426,   429,   434,   437,
     442,   618,     3,     3,     3,    28,   252,   252,   618,     8,
     227,   667,   668,   511,   252,   618,   637,     3,    95,   398,
     399,   400,   107,   398,   399,   400,   407,   417,   417,   255,
     322,   430,   431,   107,   407,   435,   436,   438,   441,   398,
     399,   443,     0,   444,   548,     3,     3,     3,     3,   396,
       3,   446,   216,   156,   640,     3,   155,     3,     3,    85,
     156,     3,     3,     3,   640,   246,   155,   640,   396,   396,
       3,   156,     3,   156,     3,   396,   396,   396,   252,   628,
       3,   136,   154,   176,   203,   534,     3,   156,     3,   156,
       3,     3,   156,     3,   156,     3,     3,   156,     3,   156,
       3,   156,   396,   396,     3,   156,     3,   156,     3,   396,
     396,   396,   103,   146,   154,   159,   176,   619,   171,   448,
       3,     3,   619,     9,    20,     3,   113,   448,     3,     4,
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
     424,   425,   446,   453,   512,   513,     3,   154,   176,     3,
     167,   173,   381,   446,   515,   516,   517,   518,   521,   531,
       3,   159,   401,   136,   136,   136,   159,   136,   409,     3,
       3,     3,   136,   446,   159,   136,   136,     3,   159,   136,
      94,   191,   439,   159,   136,   136,   452,    54,    55,    74,
     210,   277,   445,   596,   100,   120,    38,    75,   100,   108,
     120,   187,   208,   240,   269,    55,   208,   685,     3,   100,
     120,     3,     4,     5,     6,     7,     8,   193,   447,   678,
     679,   139,   202,   281,     3,    51,     3,   446,   197,     3,
     156,   281,   446,    39,    59,   681,   197,     3,     3,    85,
     156,     3,     3,   156,     3,   156,   140,   281,   197,   281,
       3,     3,   156,     3,   156,     3,   156,   640,   446,   629,
     445,   535,     3,   534,   136,   448,   281,   281,   281,   281,
     197,   281,    74,   210,   537,   281,   281,     3,   156,     3,
     156,   281,   281,     3,   156,     3,   156,     3,   156,     3,
     156,     3,     4,   245,     3,   453,   453,   668,   445,   446,
       9,   453,   453,   453,   275,   453,   490,   445,   446,    36,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   453,     3,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    36,    51,   514,   136,   159,   448,   448,   445,   514,
     446,     3,   446,   492,   515,   240,   448,    76,   153,   177,
     190,   215,   238,   522,   524,    51,   520,   520,     3,   159,
       3,     3,     3,     3,     3,    16,   266,   421,     3,    28,
       3,     3,     3,   266,     3,     3,     4,   159,   159,     3,
       3,     3,    53,    53,    44,     3,   108,   258,   598,    71,
      84,     3,    84,    71,   217,     3,    71,    84,   422,    71,
     217,     3,    84,     3,    71,    84,   423,    71,   277,   245,
      18,   184,   376,   377,   378,   379,   686,   100,   120,   447,
     448,     3,     3,    61,    62,    64,    66,    67,    82,   114,
     115,   116,   117,   123,   132,   152,   160,   175,   182,   185,
     188,   189,   205,   239,   240,   243,   244,   249,   251,   256,
     257,   262,   264,   270,   272,   273,   278,   662,   197,     3,
      16,   150,   195,   670,   671,   672,     3,   197,   281,     3,
     670,   107,   157,   258,   398,   682,     3,   404,   197,     3,
     156,   281,   685,   277,   550,   281,   557,   281,   418,     3,
     428,     3,   277,   582,   281,   281,   281,     3,     3,   630,
     136,   245,   631,    28,   274,   493,   266,   515,     3,     3,
       3,     3,     3,     3,   404,     3,     3,     3,    74,   281,
      74,   281,     3,     3,   281,   281,   281,   281,   240,   446,
     620,     3,   240,   620,     3,   453,   458,   462,   453,   453,
     490,   124,   125,   275,     3,     3,   449,   460,   467,   453,
      65,   178,   254,   453,   488,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   447,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     447,   453,   453,   453,   447,   453,   453,   453,   453,   453,
     453,    28,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   447,   447,   447,   447,   447,   453,   453,
     447,   447,   447,   453,   453,     5,   447,   447,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     447,   453,   453,   453,   447,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   447,   453,   453,   447,   453,
     453,   453,   453,   453,     6,    18,   193,   319,   446,    13,
      14,    16,    19,   453,    40,    47,   232,   446,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,     3,   515,     3,   513,     3,   547,
       3,   133,   154,   267,   528,   519,   514,   453,   447,   447,
       3,   638,   516,   177,   215,   525,   517,   163,   196,   523,
       3,     3,   271,     3,   402,   402,   274,   271,   274,     3,
     273,     5,   274,   447,   271,   274,   274,   273,   271,   274,
      16,     3,     3,   271,   274,   179,     5,   596,    42,    42,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     662,     3,   245,     3,     3,    20,     3,     5,     3,   379,
       5,     5,   277,     5,    63,     5,   217,   217,   679,   446,
     446,   446,   658,   658,   658,   658,   658,   658,   446,   658,
     658,   658,    64,   659,   659,   658,   658,   658,   446,   659,
     658,   659,   446,   446,   446,    18,    36,    78,   113,     3,
     662,     3,     3,     3,   447,   448,   266,   446,     3,     3,
     197,   447,   197,    51,   601,   396,     3,   197,   281,     3,
     446,     3,   277,   558,     3,     3,   140,     4,   197,   446,
     277,   583,     3,     3,     3,   154,   216,   351,   445,   446,
     664,   665,   447,   448,     4,   236,   237,   632,   453,   198,
     503,   515,   493,   535,   396,   537,     3,     3,     3,     3,
       3,     3,     3,   625,     3,   621,   271,   492,   625,   271,
     492,   448,   447,   253,   124,   125,   453,   453,   447,   453,
     459,   492,   136,   448,   447,   136,   453,   448,   448,   448,
     447,   447,   447,   447,   447,   447,   448,   448,   448,   448,
     447,   448,   448,   448,   447,   447,   447,   447,   448,   448,
     447,   448,   447,   447,   447,    51,   448,   448,   448,   448,
     321,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   448,   448,   448,   447,   448,   350,   350,   350,   447,
     448,   447,   448,   447,   350,   350,   448,   447,   447,   447,
     447,   447,   447,   447,   447,   448,   448,   448,   448,   448,
     448,   448,   448,   447,   448,   447,   447,   447,   448,   447,
     448,   447,   448,   448,   448,   448,   448,   447,   447,   447,
     448,   448,   448,   447,   448,     6,   193,   463,   465,   453,
     453,   446,   453,    50,   446,   446,   446,   454,   449,   140,
     507,   136,   448,   514,   164,   164,   164,   492,   528,   447,
      20,   445,   448,   493,   523,   523,   163,   197,   517,   163,
     446,   271,     4,     4,   411,   446,   411,   410,     4,   433,
     136,   446,   433,     4,     4,   446,     4,     3,   271,   271,
     446,   164,     5,    45,    46,   598,   197,   197,    78,   134,
     201,   261,   662,   662,     3,   222,   222,   657,   662,     3,
     245,   245,     4,     5,     5,     3,     3,   670,   670,     5,
     660,   661,   660,   660,     4,   663,   660,   660,   660,   661,
     661,   660,   660,   660,   663,   661,   660,   661,     5,     5,
       5,   193,   449,   446,   453,   446,   662,   662,   662,   213,
     672,   268,   391,     3,   327,   328,   329,   330,   543,   544,
     266,   446,   197,     3,    51,    60,     3,   404,   223,   224,
     140,   602,     3,   266,   446,     3,     3,   197,   397,   550,
     446,   557,   418,   101,   428,   422,   446,   582,    94,     3,
      71,    78,   134,   138,   155,   164,   201,   261,   649,   650,
     656,   520,     3,    87,    99,   135,   143,   193,   242,   277,
     446,   633,   634,   635,    63,   179,   506,   493,     3,    20,
     199,   448,   611,   447,   448,   446,   622,   611,   622,   611,
     458,   453,   453,   124,   253,    91,   448,   449,   447,   453,
     453,   453,   136,   161,   489,   489,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   662,   662,   453,
     453,   453,     4,   350,   350,   350,   350,   350,   350,   453,
     453,   453,   453,   446,   446,   446,   350,     5,   350,     5,
     350,   446,   446,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   458,   492,   464,   466,    50,   453,
     457,   453,   455,   461,   456,   461,   492,   412,   493,   515,
       3,   528,   140,   529,   529,   529,   447,   520,   453,     3,
       3,   503,   517,   453,   197,   266,   526,   527,   517,     4,
     193,   553,   446,   403,   179,    20,     4,   193,   563,    20,
       4,   179,    20,     3,     4,    20,   179,   274,     4,   179,
      51,   440,   446,   446,     4,    20,     3,   599,   599,   446,
     164,   164,   446,   657,   657,   662,    18,    39,    48,    51,
      53,    56,    71,    78,    79,   113,   130,   164,   193,   201,
     261,   609,   657,     3,     3,   222,   222,   447,   447,   447,
     448,   259,   280,    82,    83,   447,   448,   447,   447,   447,
     447,    78,   453,   543,    62,    66,   114,   117,   132,   152,
     160,   249,   251,   270,   673,   446,   446,   446,   446,   446,
     446,   447,   448,   268,   543,     3,   266,   446,    60,   674,
     140,   396,    40,   107,   157,   241,   258,   245,   603,   601,
     268,   543,   266,   446,   197,     3,    20,   405,   406,   559,
     560,   558,     3,     4,     4,    20,   405,   406,   584,   585,
     583,     3,   446,   664,     3,   446,   164,   155,   164,   446,
     446,   164,   446,   447,   448,     3,   492,     4,    87,   249,
       6,     4,     4,   446,   634,   448,     3,     5,   504,   505,
     453,   212,   688,   113,   453,   164,     3,     3,   113,   453,
     624,   448,   611,   611,   124,   453,   446,   459,   140,   447,
     447,   448,   447,   453,   453,   447,   447,   447,   447,   447,
     448,   448,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   448,   447,   446,   446,   446,   446,   446,   446,
     447,   448,   448,   447,   447,   468,   469,   470,   446,   447,
     448,   446,   447,   448,   446,   486,   487,   447,   448,   448,
     448,   447,   447,   448,   448,   447,   448,   447,   448,   447,
     448,   447,   447,   447,   447,   447,   447,   448,   448,   448,
     447,   447,   447,   458,   492,   453,   492,   492,   447,   492,
     447,   447,    51,   141,   494,   493,   163,   446,   446,   446,
       3,    20,    20,   445,   506,   453,   446,   527,   448,   553,
       4,     5,     4,   448,     4,     5,     4,   274,   448,     4,
       5,     4,   448,     5,    94,     5,     4,     4,   448,     4,
     448,   277,   453,   446,   446,     3,   655,   609,   609,   657,
     193,     3,   446,   446,   446,    52,     3,   446,     4,     4,
       5,     6,     7,    72,   333,   334,   335,   446,   164,   164,
     609,   213,    51,    60,     5,   240,     4,   661,     4,   661,
     661,   446,   447,   447,    51,    60,   543,     3,     3,     3,
       3,     3,     3,   446,   447,   446,   268,   391,   543,   674,
       3,     4,     5,     6,     7,     8,    10,    12,    16,    17,
      18,    20,    26,    27,    28,    29,    30,    40,    50,    51,
      54,    59,    60,    61,    62,    63,    66,    68,    69,    70,
      73,    74,    76,    77,    78,    82,    96,   101,   106,   107,
     108,   113,   114,   116,   117,   118,   119,   122,   124,   125,
     126,   127,   129,   131,   132,   134,   136,   137,   139,   140,
     141,   142,   148,   150,   152,   153,   155,   156,   157,   158,
     159,   160,   162,   163,   164,   165,   166,   177,   179,   181,
     190,   192,   193,   194,   195,   196,   197,   198,   201,   202,
     207,   209,   210,   211,   213,   215,   217,   218,   219,   220,
     239,   240,   241,   249,   251,   252,   253,   258,   260,   261,
     262,   266,   270,   271,   274,   275,   276,   277,   281,   322,
     323,   324,   325,   326,   444,   445,   446,   447,   448,   450,
     675,   118,     3,     3,   604,   266,   605,   602,   446,   447,
     268,   543,     3,   266,   446,     4,    20,    20,   447,   448,
     101,     4,    20,    20,   447,   448,   140,   649,    78,   134,
     201,   261,   453,   446,   446,   446,     3,   510,   510,   446,
     655,   645,   664,   650,   662,   634,   447,   635,    49,   112,
     445,   496,   496,   448,   181,   448,     3,    28,   689,   258,
      20,   447,   448,   623,   197,   613,     4,   453,   453,   447,
     104,   105,   109,   111,   144,   145,   147,   278,   279,   453,
     453,   453,   472,   473,   471,   474,   475,   476,   453,   453,
     351,   499,   499,   499,   477,   350,     4,     5,   481,   350,
       4,     5,   485,   499,   499,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   447,   447,   447,   447,
     447,    94,    63,   148,   498,   494,     3,   530,   530,   530,
     446,   453,   453,     3,   688,   510,   553,   448,    12,   563,
      12,    59,   433,     4,   432,   179,     4,     4,   448,   448,
       4,     3,     5,   447,     3,   652,     3,   651,   447,   448,
     609,     5,   453,     5,    51,    78,   201,   261,   453,   446,
     446,   446,   453,   673,    60,   674,   447,     4,   453,    60,
     674,   447,     3,   539,   447,   447,   447,   448,   543,   543,
     446,   446,   447,   124,   674,   674,   674,   674,   674,   674,
     217,   140,   448,   446,   277,   606,   603,   543,   446,   447,
     446,   268,   543,   447,     5,     4,   560,     4,   447,     5,
       4,   585,   271,   447,   446,   164,   164,   446,   447,   652,
     510,   510,   447,   448,   447,   651,   447,    48,   172,   197,
     228,   277,   351,   644,   657,   447,     3,   505,   453,   453,
     448,   612,   113,   453,   113,   453,   446,    88,   688,   447,
     447,   447,   447,   447,   447,   499,   499,   499,   499,   499,
     499,   447,   448,   447,    63,   198,   501,   501,   501,   499,
     446,   447,   447,   499,   446,   447,   447,   499,   501,   501,
     447,   447,   447,   447,   447,   448,   447,   447,   448,   448,
     448,   413,   453,   495,   453,   503,   498,   447,   448,   447,
     447,     3,    20,   447,   448,   553,   164,   448,   164,     5,
      20,   448,     5,     5,   448,     4,     4,   447,   448,    43,
      18,   447,   448,   447,   448,     3,   447,   448,   447,   447,
     448,   446,   446,   164,   447,   447,   447,   447,   447,    51,
      60,   674,   124,   447,   674,   124,   447,     3,   447,   447,
     543,     3,   124,   124,   124,   124,   124,   124,    60,   118,
       3,   453,    78,   605,   447,   543,   543,   446,   447,   136,
     645,   664,   453,   446,   446,   655,   447,   447,   447,     3,
     447,     5,    20,   446,     3,    63,   415,   446,    63,   496,
       3,     3,   617,   624,   446,   614,   501,   501,   501,   501,
     501,   501,   453,     3,   500,    63,   447,   447,   447,   501,
     478,   350,   350,   501,   482,   350,   350,   501,   447,   447,
     453,     5,     5,     5,     5,   496,   277,   448,   497,   506,
     503,     3,   447,   453,   553,   448,    20,   563,    20,     4,
       4,     4,   448,   448,     4,   269,   207,     3,     3,     5,
      57,    58,     5,   453,   453,    60,   674,   124,   124,   277,
     540,   447,   447,   539,    77,   131,   156,   166,   276,   674,
     217,   447,   446,   606,   447,   447,   543,   446,   447,   652,
     651,   447,   207,     5,     3,   107,   248,   204,   268,   416,
     423,   204,    20,   448,   447,     3,   101,   615,   447,   447,
     447,   447,   447,   447,   447,   448,     3,   502,   447,   499,
     446,   446,   447,   499,   446,   446,   447,   447,   447,   448,
     448,   214,   453,   140,   508,   506,   448,   553,     4,   447,
     448,     4,   447,   448,   447,   448,     4,     4,   447,     3,
     447,   447,   447,   447,   674,   124,   446,   447,   124,    60,
     453,   447,     5,   447,   447,     3,   447,     3,     3,   446,
     446,    20,   446,   453,     3,   447,   448,    90,   258,     3,
     496,   448,   501,   479,   480,   501,   483,   484,     4,     4,
     496,   230,   258,   159,   509,   553,   448,   563,     4,     4,
     447,   447,   448,   446,    57,    58,   124,     3,   541,   542,
     540,   674,   447,   447,   207,   445,   446,     3,     3,     4,
       3,    20,     3,   616,     3,   447,   499,   499,   447,   499,
     499,   447,   447,   231,   231,   510,   448,   553,   447,   447,
     447,     4,     3,   653,    20,   447,   448,   124,   245,     3,
       3,   653,   447,   447,   447,   447,   453,   240,   496,   501,
     501,   501,   501,   180,   180,   553,   448,   447,   447,   448,
       5,   542,   446,   445,   446,   446,   447,   446,   229,   617,
     447,   447,   447,   447,   448,   553,   654,     3,     5,     3,
     653,   653,   654,   228,   646,   647,     5,   553,   448,    18,
      97,   183,   197,   447,   446,   447,   447,    18,     3,   447,
     448,   448,   553,    97,   269,   151,   137,   200,   235,   107,
     258,   653,   654,   654,   271,   647,   553,   448,    98,   149,
      74,   192,   210,   240,    74,   192,   210,   240,   447,   174,
     447,   553,   113,   193,   113,   193,   654,   250,   447,     4,
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
#line 539 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 545 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 546 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 548 "parser/evoparser.y"
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
#line 561 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 563 "parser/evoparser.y"
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
#line 591 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 599 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 607 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 613 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 620 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 621 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 622 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 623 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 624 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 625 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 626 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 627 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 628 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 629 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 630 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 631 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 632 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 633 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 634 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 635 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 636 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 637 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 638 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 640 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 645 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 646 "parser/evoparser.y"
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
#line 654 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 655 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 656 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 657 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 658 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 659 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 664 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 666 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 669 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 670 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 671 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 672 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 673 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 676 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 677 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 681 "parser/evoparser.y"
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
#line 690 "parser/evoparser.y"
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
#line 708 "parser/evoparser.y"
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
#line 717 "parser/evoparser.y"
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
#line 736 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 737 "parser/evoparser.y"
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
#line 797 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 806 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 812 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 817 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 819 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 821 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 826 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 831 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 836 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 844 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 846 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 848 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 850 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 852 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 854 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 856 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 858 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 860 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 862 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 869 "parser/evoparser.y"
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
#line 880 "parser/evoparser.y"
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
#line 890 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 894 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 894 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 895 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 895 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 896 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 897 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 904 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 905 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 912 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 913 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 923 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 927 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 928 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 929 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 930 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 931 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 932 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 933 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 934 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 938 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 939 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 940 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 941 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 942 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 943 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 945 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 946 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 947 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 948 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 949 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 950 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 951 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 952 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 953 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 954 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 955 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 956 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 958 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 959 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 960 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 961 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 962 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 963 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 964 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 965 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 966 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 967 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 968 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 969 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 970 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 971 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 972 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 973 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 975 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 976 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 977 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 978 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 979 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 980 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 983 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 984 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 985 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 986 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 987 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 988 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 989 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 990 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 991 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 992 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 993 "parser/evoparser.y"
    { emit("CALL 1 TOKEN_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_TOKEN_LENGTH, (yyvsp[(3) - (4)].exprval), "token_length"); ;}
    break;

  case 150:
#line 994 "parser/evoparser.y"
    { emit("CALL 2 EVO_CALL_EXTERNAL"); (yyval.exprval) = expr_make_func2(EXPR_PG_CALL_EXTERNAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "evo_call_external"); ;}
    break;

  case 151:
#line 995 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 996 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 153:
#line 997 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 154:
#line 998 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 155:
#line 999 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 156:
#line 1000 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 157:
#line 1001 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 158:
#line 1002 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 159:
#line 1003 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 160:
#line 1004 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 161:
#line 1005 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 162:
#line 1006 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 163:
#line 1007 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 164:
#line 1008 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 165:
#line 1009 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 166:
#line 1010 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 167:
#line 1011 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 168:
#line 1012 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 169:
#line 1013 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 170:
#line 1014 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 171:
#line 1015 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 172:
#line 1016 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 173:
#line 1017 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 174:
#line 1018 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 175:
#line 1020 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 176:
#line 1021 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 177:
#line 1022 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 178:
#line 1023 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 179:
#line 1024 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 180:
#line 1025 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 181:
#line 1026 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 182:
#line 1027 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 183:
#line 1029 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 184:
#line 1030 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 185:
#line 1031 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 186:
#line 1032 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 187:
#line 1033 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 188:
#line 1034 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 189:
#line 1035 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 190:
#line 1036 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 191:
#line 1037 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 192:
#line 1038 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 193:
#line 1039 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 194:
#line 1040 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 195:
#line 1041 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 196:
#line 1042 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 197:
#line 1043 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 198:
#line 1044 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 199:
#line 1045 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 200:
#line 1046 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 201:
#line 1047 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1048 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 203:
#line 1049 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 204:
#line 1050 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 205:
#line 1052 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 206:
#line 1053 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 207:
#line 1054 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 208:
#line 1055 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 209:
#line 1056 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 210:
#line 1058 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 211:
#line 1059 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 212:
#line 1061 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 213:
#line 1062 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 214:
#line 1063 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 215:
#line 1065 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 216:
#line 1066 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 217:
#line 1067 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 218:
#line 1068 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 219:
#line 1075 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 220:
#line 1082 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 221:
#line 1089 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1093 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1097 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 224:
#line 1101 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 225:
#line 1105 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 226:
#line 1109 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 227:
#line 1115 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 228:
#line 1116 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 229:
#line 1117 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 230:
#line 1121 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 231:
#line 1127 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 232:
#line 1133 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 233:
#line 1134 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1135 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1136 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 236:
#line 1137 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 237:
#line 1138 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 238:
#line 1139 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1140 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 240:
#line 1141 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 241:
#line 1145 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1147 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 243:
#line 1149 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 244:
#line 1151 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 245:
#line 1155 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 246:
#line 1163 "parser/evoparser.y"
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
#line 1173 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 248:
#line 1174 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 249:
#line 1177 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 250:
#line 1178 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 251:
#line 1182 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1190 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 253:
#line 1198 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 254:
#line 1206 "parser/evoparser.y"
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
#line 1220 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 256:
#line 1229 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 257:
#line 1235 "parser/evoparser.y"
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
#line 1248 "parser/evoparser.y"
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
#line 1261 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 262:
#line 1263 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 263:
#line 1266 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 264:
#line 1273 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 265:
#line 1281 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1282 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1283 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1286 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1287 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 271:
#line 1291 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1300 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 275:
#line 1302 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 278:
#line 1310 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 279:
#line 1312 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 284:
#line 1324 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 285:
#line 1330 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 286:
#line 1337 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 287:
#line 1345 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 288:
#line 1346 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 289:
#line 1347 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1348 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 292:
#line 1360 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 293:
#line 1363 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 294:
#line 1364 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 295:
#line 1365 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 296:
#line 1366 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1367 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 299:
#line 1371 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 300:
#line 1374 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1375 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 302:
#line 1378 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1379 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 304:
#line 1380 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 305:
#line 1381 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 306:
#line 1382 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 307:
#line 1383 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 308:
#line 1384 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 309:
#line 1385 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 310:
#line 1386 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 311:
#line 1389 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 312:
#line 1390 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 313:
#line 1392 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 314:
#line 1400 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 315:
#line 1405 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 316:
#line 1406 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 317:
#line 1407 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 318:
#line 1410 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 319:
#line 1411 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1420 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 323:
#line 1428 "parser/evoparser.y"
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
#line 1437 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 325:
#line 1438 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 326:
#line 1440 "parser/evoparser.y"
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
#line 1449 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 328:
#line 1454 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 329:
#line 1460 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 330:
#line 1467 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 331:
#line 1471 "parser/evoparser.y"
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
#line 1491 "parser/evoparser.y"
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
#line 1517 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 336:
#line 1519 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 337:
#line 1521 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 338:
#line 1523 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1525 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 340:
#line 1528 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 341:
#line 1529 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1530 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 343:
#line 1533 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 344:
#line 1534 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 345:
#line 1537 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 346:
#line 1538 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 347:
#line 1541 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 348:
#line 1542 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 349:
#line 1543 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1550 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 353:
#line 1551 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 354:
#line 1556 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 355:
#line 1558 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1560 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 358:
#line 1564 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1565 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 360:
#line 1568 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 361:
#line 1569 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 362:
#line 1572 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 363:
#line 1577 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 364:
#line 1587 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 365:
#line 1594 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 366:
#line 1595 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 367:
#line 1596 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 368:
#line 1597 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 369:
#line 1602 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1606 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 371:
#line 1608 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 374:
#line 1614 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 375:
#line 1619 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 376:
#line 1626 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 377:
#line 1633 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 379:
#line 1645 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 380:
#line 1646 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 381:
#line 1651 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 382:
#line 1658 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 383:
#line 1665 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1673 "parser/evoparser.y"
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
#line 1683 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 386:
#line 1691 "parser/evoparser.y"
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
#line 1701 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 388:
#line 1709 "parser/evoparser.y"
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
#line 1718 "parser/evoparser.y"
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
#line 1727 "parser/evoparser.y"
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
#line 1737 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 392:
#line 1745 "parser/evoparser.y"
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
#line 1754 "parser/evoparser.y"
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
#line 1763 "parser/evoparser.y"
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
#line 1773 "parser/evoparser.y"
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
#line 1782 "parser/evoparser.y"
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
#line 1799 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 398:
#line 1807 "parser/evoparser.y"
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
#line 1818 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 400:
#line 1820 "parser/evoparser.y"
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
#line 1833 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 402:
#line 1834 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 403:
#line 1837 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 404:
#line 1839 "parser/evoparser.y"
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
#line 1851 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 406:
#line 1861 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 407:
#line 1866 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 408:
#line 1871 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 409:
#line 1877 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1884 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 411:
#line 1891 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 412:
#line 1898 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 413:
#line 1908 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 414:
#line 1915 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1924 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 416:
#line 1931 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 417:
#line 1937 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 418:
#line 1945 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 419:
#line 1951 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 421:
#line 1959 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 422:
#line 1960 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 423:
#line 1961 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 424:
#line 1962 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 425:
#line 1978 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1979 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1980 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1989 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 429:
#line 1990 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 430:
#line 1995 "parser/evoparser.y"
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
#line 2005 "parser/evoparser.y"
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
#line 2020 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 433:
#line 2021 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 434:
#line 2026 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 435:
#line 2034 "parser/evoparser.y"
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
#line 2043 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 437:
#line 2065 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2066 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 439:
#line 2067 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 440:
#line 2072 "parser/evoparser.y"
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
#line 2089 "parser/evoparser.y"
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
#line 2110 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 443:
#line 2111 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 444:
#line 2117 "parser/evoparser.y"
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
#line 2126 "parser/evoparser.y"
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
#line 2140 "parser/evoparser.y"
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
#line 2149 "parser/evoparser.y"
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
#line 2174 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2175 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2176 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2177 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2178 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2179 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 454:
#line 2180 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 455:
#line 2185 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 456:
#line 2192 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 457:
#line 2203 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 462:
#line 2217 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 463:
#line 2219 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 464:
#line 2224 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 465:
#line 2232 "parser/evoparser.y"
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
#line 2241 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 467:
#line 2253 "parser/evoparser.y"
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
#line 2265 "parser/evoparser.y"
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
#line 2279 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 470:
#line 2280 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 471:
#line 2286 "parser/evoparser.y"
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
#line 2300 "parser/evoparser.y"
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
#line 2310 "parser/evoparser.y"
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
#line 2324 "parser/evoparser.y"
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
#line 2338 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 476:
#line 2346 "parser/evoparser.y"
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
#line 2357 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2363 "parser/evoparser.y"
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
#line 2374 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2380 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 481:
#line 2387 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 482:
#line 2393 "parser/evoparser.y"
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
#line 2414 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 484:
#line 2415 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 485:
#line 2416 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 486:
#line 2417 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 487:
#line 2422 "parser/evoparser.y"
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
#line 2431 "parser/evoparser.y"
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
#line 2448 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        DropSubscriptionProcess(0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 490:
#line 2456 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (5)].strval));
        DropSubscriptionProcess(1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 491:
#line 2467 "parser/evoparser.y"
    {
        emit("RESUME SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        ResumeSubscriptionProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 492:
#line 2478 "parser/evoparser.y"
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
#line 2497 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 494:
#line 2498 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 495:
#line 2499 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 496:
#line 2504 "parser/evoparser.y"
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
#line 2514 "parser/evoparser.y"
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
#line 2527 "parser/evoparser.y"
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
#line 2536 "parser/evoparser.y"
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
#line 2548 "parser/evoparser.y"
    {
        emit("ALTER JOB %s ENABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(1);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 501:
#line 2556 "parser/evoparser.y"
    {
        emit("ALTER JOB %s DISABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(0);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 502:
#line 2576 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 503:
#line 2577 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 504:
#line 2578 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 505:
#line 2583 "parser/evoparser.y"
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
#line 2595 "parser/evoparser.y"
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
#line 2620 "parser/evoparser.y"
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
#line 2632 "parser/evoparser.y"
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
#line 2647 "parser/evoparser.y"
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
#line 2659 "parser/evoparser.y"
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
#line 2671 "parser/evoparser.y"
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
#line 2680 "parser/evoparser.y"
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
#line 2690 "parser/evoparser.y"
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
#line 2699 "parser/evoparser.y"
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
#line 2709 "parser/evoparser.y"
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
#line 2732 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 517:
#line 2733 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 518:
#line 2734 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 519:
#line 2739 "parser/evoparser.y"
    {
        emit("CREATE DOCUMENT STORE %s", (yyvsp[(4) - (6)].strval));
        SetDocumentStoreName((yyvsp[(4) - (6)].strval));
        CreateDocumentStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 520:
#line 2746 "parser/evoparser.y"
    {
        emit("CREATE DOCUMENT STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetDocumentStoreName((yyvsp[(6) - (8)].strval));
        CreateDocumentStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 521:
#line 2755 "parser/evoparser.y"
    { ResetDocumentOpts(); ;}
    break;

  case 526:
#line 2769 "parser/evoparser.y"
    { SetDocumentEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 527:
#line 2771 "parser/evoparser.y"
    { SetDocumentDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 528:
#line 2776 "parser/evoparser.y"
    {
        emit("DROP DOCUMENT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (4)].strval));
        DropDocumentStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 529:
#line 2784 "parser/evoparser.y"
    {
        emit("DROP DOCUMENT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(6) - (6)].strval));
        DropDocumentStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 530:
#line 2795 "parser/evoparser.y"
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
#line 2806 "parser/evoparser.y"
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
#line 2818 "parser/evoparser.y"
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
#line 2827 "parser/evoparser.y"
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
#line 2837 "parser/evoparser.y"
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
#line 2847 "parser/evoparser.y"
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
#line 2858 "parser/evoparser.y"
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
#line 2875 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 538:
#line 2876 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 539:
#line 2877 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 540:
#line 2882 "parser/evoparser.y"
    {
        emit("CREATE GRAPH STORE %s", (yyvsp[(4) - (4)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(4) - (4)].strval));
        CreateGraphStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 541:
#line 2890 "parser/evoparser.y"
    {
        emit("CREATE GRAPH STORE IF NOT EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (6)].strval));
        CreateGraphStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 542:
#line 2901 "parser/evoparser.y"
    {
        emit("DROP GRAPH STORE %s", (yyvsp[(4) - (4)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(4) - (4)].strval));
        DropGraphStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 543:
#line 2909 "parser/evoparser.y"
    {
        emit("DROP GRAPH STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (6)].strval));
        DropGraphStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 544:
#line 2920 "parser/evoparser.y"
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
#line 2931 "parser/evoparser.y"
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
#line 2943 "parser/evoparser.y"
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
#line 2955 "parser/evoparser.y"
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
#line 2964 "parser/evoparser.y"
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
#line 2974 "parser/evoparser.y"
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
#line 2992 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 551:
#line 2993 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 552:
#line 2994 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 553:
#line 2999 "parser/evoparser.y"
    {
        emit("CREATE ENTITY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (4)].strval));
        CreateEntityStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 554:
#line 3007 "parser/evoparser.y"
    {
        emit("CREATE ENTITY STORE IF NOT EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(6) - (6)].strval));
        CreateEntityStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 555:
#line 3018 "parser/evoparser.y"
    {
        emit("DROP ENTITY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (4)].strval));
        DropEntityStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 556:
#line 3026 "parser/evoparser.y"
    {
        emit("DROP ENTITY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(6) - (6)].strval));
        DropEntityStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 557:
#line 3037 "parser/evoparser.y"
    {
        emit("ENTITY PUT INTO %s", (yyvsp[(4) - (10)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (10)].strval));
        SetEntityKey((yyvsp[(7) - (10)].strval));
        SetEntitySummary((yyvsp[(9) - (10)].strval));
        SetEntityFacts(NULL);
        EntityPutProcess();
        free((yyvsp[(4) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); free((yyvsp[(9) - (10)].strval));
    ;}
    break;

  case 558:
#line 3048 "parser/evoparser.y"
    {
        emit("ENTITY PUT INTO %s WITH facts", (yyvsp[(4) - (12)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (12)].strval));
        SetEntityKey((yyvsp[(7) - (12)].strval));
        SetEntitySummary((yyvsp[(9) - (12)].strval));
        SetEntityFacts((yyvsp[(11) - (12)].strval));
        EntityPutProcess();
        free((yyvsp[(4) - (12)].strval)); free((yyvsp[(7) - (12)].strval)); free((yyvsp[(9) - (12)].strval)); free((yyvsp[(11) - (12)].strval));
    ;}
    break;

  case 559:
#line 3059 "parser/evoparser.y"
    {
        emit("ENTITY GET FROM %s KEY=%s", (yyvsp[(4) - (8)].strval), (yyvsp[(8) - (8)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (8)].strval));
        SetEntityKey((yyvsp[(8) - (8)].strval));
        EntityGetProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 560:
#line 3068 "parser/evoparser.y"
    {
        emit("ENTITY RANK FROM %s", (yyvsp[(4) - (4)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (4)].strval));
        EntityRankProcess();
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 561:
#line 3076 "parser/evoparser.y"
    {
        emit("ENTITY RANK FROM %s LIMIT %d", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].intval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (6)].strval));
        SetEntityLimit((yyvsp[(6) - (6)].intval));
        EntityRankProcess();
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 562:
#line 3088 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 563:
#line 3095 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 564:
#line 3104 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 565:
#line 3112 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 566:
#line 3118 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 568:
#line 3135 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 569:
#line 3139 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 570:
#line 3148 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 572:
#line 3163 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 573:
#line 3167 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 574:
#line 3172 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 575:
#line 3179 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 576:
#line 3184 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 577:
#line 3191 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 578:
#line 3195 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 579:
#line 3196 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 580:
#line 3202 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 581:
#line 3214 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 582:
#line 3223 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 583:
#line 3224 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 584:
#line 3225 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 585:
#line 3229 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 586:
#line 3230 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 587:
#line 3231 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 588:
#line 3232 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 589:
#line 3233 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 590:
#line 3234 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 593:
#line 3243 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 594:
#line 3244 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 596:
#line 3249 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 598:
#line 3254 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 599:
#line 3259 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 600:
#line 3266 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 601:
#line 3275 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 602:
#line 3281 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 603:
#line 3287 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 604:
#line 3294 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 605:
#line 3300 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 606:
#line 3307 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 607:
#line 3313 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 608:
#line 3319 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 609:
#line 3325 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 610:
#line 3331 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 611:
#line 3337 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 612:
#line 3343 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 613:
#line 3349 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 614:
#line 3355 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 615:
#line 3361 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 616:
#line 3367 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 617:
#line 3373 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 618:
#line 3379 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 619:
#line 3385 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 620:
#line 3391 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 621:
#line 3397 "parser/evoparser.y"
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

  case 622:
#line 3410 "parser/evoparser.y"
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

  case 623:
#line 3420 "parser/evoparser.y"
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

  case 624:
#line 3430 "parser/evoparser.y"
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

  case 625:
#line 3440 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s SET TTL %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableSetTtl((yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 626:
#line 3446 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s DROP TTL", (yyvsp[(3) - (5)].strval));
        AlterTableSetTtl((yyvsp[(3) - (5)].strval), NULL);
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 627:
#line 3453 "parser/evoparser.y"
    { ;}
    break;

  case 628:
#line 3454 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 629:
#line 3455 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 630:
#line 3459 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 631:
#line 3467 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 632:
#line 3473 "parser/evoparser.y"
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

  case 634:
#line 3486 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 635:
#line 3486 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 638:
#line 3494 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 639:
#line 3495 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 640:
#line 3496 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 641:
#line 3500 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 642:
#line 3501 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 643:
#line 3502 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 644:
#line 3506 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 645:
#line 3514 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 646:
#line 3523 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 647:
#line 3524 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 648:
#line 3525 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 649:
#line 3526 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 650:
#line 3527 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 654:
#line 3534 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 655:
#line 3538 "parser/evoparser.y"
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

  case 656:
#line 3548 "parser/evoparser.y"
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

  case 657:
#line 3560 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 658:
#line 3561 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 659:
#line 3561 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 660:
#line 3564 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 661:
#line 3565 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 662:
#line 3566 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 663:
#line 3567 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 664:
#line 3571 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 665:
#line 3574 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 666:
#line 3575 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 667:
#line 3576 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 668:
#line 3577 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 669:
#line 3583 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 670:
#line 3589 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 671:
#line 3594 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 672:
#line 3599 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 673:
#line 3603 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 674:
#line 3607 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 675:
#line 3609 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 678:
#line 3615 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 679:
#line 3616 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 680:
#line 3620 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 681:
#line 3621 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 682:
#line 3625 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 683:
#line 3626 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 684:
#line 3627 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 691:
#line 3642 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 692:
#line 3643 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 693:
#line 3644 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 694:
#line 3645 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 695:
#line 3646 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 696:
#line 3647 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 697:
#line 3648 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 698:
#line 3649 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 699:
#line 3654 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 700:
#line 3663 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 701:
#line 3670 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 702:
#line 3671 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 703:
#line 3672 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 704:
#line 3677 "parser/evoparser.y"
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

  case 705:
#line 3688 "parser/evoparser.y"
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

  case 706:
#line 3700 "parser/evoparser.y"
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

  case 707:
#line 3711 "parser/evoparser.y"
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

  case 708:
#line 3726 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 709:
#line 3730 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 710:
#line 3734 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 711:
#line 3735 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 712:
#line 3740 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 713:
#line 3742 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 714:
#line 3744 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 715:
#line 3746 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 716:
#line 3749 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 717:
#line 3750 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 718:
#line 3756 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 719:
#line 3761 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 720:
#line 3763 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 721:
#line 3765 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 722:
#line 3767 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 723:
#line 3769 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 724:
#line 3773 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 725:
#line 3777 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 726:
#line 3778 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 727:
#line 3783 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 728:
#line 3793 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 730:
#line 3806 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 731:
#line 3814 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 732:
#line 3822 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 734:
#line 3830 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 735:
#line 3831 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 736:
#line 3832 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 737:
#line 3833 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 738:
#line 3835 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 739:
#line 3837 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 740:
#line 3839 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 741:
#line 3844 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 742:
#line 3849 "parser/evoparser.y"
    { emit("TABLE OPT TTL_COLUMN %s", (yyvsp[(6) - (7)].strval)); SetTableTtlColumn((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 745:
#line 3857 "parser/evoparser.y"
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

  case 746:
#line 3872 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 747:
#line 3880 "parser/evoparser.y"
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

  case 748:
#line 3894 "parser/evoparser.y"
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

  case 749:
#line 3908 "parser/evoparser.y"
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

  case 750:
#line 3922 "parser/evoparser.y"
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

  case 751:
#line 3934 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 752:
#line 3935 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 753:
#line 3936 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 754:
#line 3939 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 755:
#line 3940 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 756:
#line 3943 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 757:
#line 3944 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 758:
#line 3945 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 759:
#line 3946 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 760:
#line 3947 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 761:
#line 3948 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 762:
#line 3949 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 763:
#line 3950 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 764:
#line 3952 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 765:
#line 3954 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 766:
#line 3956 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 767:
#line 3958 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 768:
#line 3960 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 769:
#line 3962 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 770:
#line 3965 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 771:
#line 3966 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 772:
#line 3969 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 773:
#line 3970 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 774:
#line 3973 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 775:
#line 3974 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 777:
#line 3978 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 778:
#line 3979 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 779:
#line 3980 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 780:
#line 3981 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 781:
#line 3982 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 782:
#line 3983 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 783:
#line 3984 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 784:
#line 3985 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 785:
#line 3986 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 786:
#line 3987 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 787:
#line 3988 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 788:
#line 3989 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 789:
#line 3990 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 790:
#line 3991 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 791:
#line 3992 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 792:
#line 3993 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 793:
#line 3994 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 794:
#line 3997 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 795:
#line 3998 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 796:
#line 4001 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 797:
#line 4003 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 798:
#line 4011 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 799:
#line 4012 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 801:
#line 4014 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 802:
#line 4015 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 803:
#line 4016 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 804:
#line 4017 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 805:
#line 4018 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 806:
#line 4019 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 807:
#line 4020 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 808:
#line 4021 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 809:
#line 4022 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 810:
#line 4029 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 811:
#line 4030 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 812:
#line 4031 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 813:
#line 4032 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 814:
#line 4033 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 815:
#line 4034 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 816:
#line 4035 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 817:
#line 4036 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 818:
#line 4037 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 819:
#line 4038 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 820:
#line 4039 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 821:
#line 4040 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 822:
#line 4041 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 823:
#line 4042 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 824:
#line 4043 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 825:
#line 4044 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 826:
#line 4045 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 827:
#line 4046 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 828:
#line 4047 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 829:
#line 4048 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 830:
#line 4049 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 831:
#line 4052 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 832:
#line 4053 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 833:
#line 4054 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 834:
#line 4057 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 835:
#line 4058 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 836:
#line 4061 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 837:
#line 4062 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 838:
#line 4063 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 840:
#line 4067 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 841:
#line 4068 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 842:
#line 4072 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 843:
#line 4073 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 844:
#line 4074 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 845:
#line 4075 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 846:
#line 4076 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 847:
#line 4077 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 848:
#line 4078 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 849:
#line 4079 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 850:
#line 4080 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 851:
#line 4081 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 852:
#line 4082 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 853:
#line 4083 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 854:
#line 4084 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 855:
#line 4085 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 856:
#line 4086 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 857:
#line 4087 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 858:
#line 4088 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 859:
#line 4089 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 860:
#line 4090 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 861:
#line 4091 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 862:
#line 4092 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 863:
#line 4093 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 864:
#line 4094 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 865:
#line 4095 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 866:
#line 4096 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 867:
#line 4097 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 868:
#line 4098 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 869:
#line 4099 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 870:
#line 4100 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 871:
#line 4101 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 872:
#line 4102 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 873:
#line 4103 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 874:
#line 4104 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 875:
#line 4105 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 876:
#line 4106 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 877:
#line 4109 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 878:
#line 4110 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 879:
#line 4114 "parser/evoparser.y"
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

  case 880:
#line 4126 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 881:
#line 4127 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 882:
#line 4128 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 883:
#line 4132 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 884:
#line 4135 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 885:
#line 4136 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 889:
#line 4140 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 890:
#line 4141 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 891:
#line 4149 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 892:
#line 4154 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 893:
#line 4160 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 894:
#line 4166 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 895:
#line 4173 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 896:
#line 4180 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 897:
#line 4186 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 898:
#line 4192 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 899:
#line 4199 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 904:
#line 4215 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 905:
#line 4216 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 906:
#line 4217 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 907:
#line 4218 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 908:
#line 4221 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 909:
#line 4222 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 910:
#line 4223 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 911:
#line 4224 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 912:
#line 4225 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 913:
#line 4226 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 914:
#line 4227 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 915:
#line 4228 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 916:
#line 4229 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 917:
#line 4230 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 926:
#line 4247 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 927:
#line 4248 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1048:
#line 4266 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1049:
#line 4273 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 1050:
#line 4278 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1051:
#line 4284 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1052:
#line 4290 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1053:
#line 4296 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1054:
#line 4307 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 1055:
#line 4312 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 1056:
#line 4318 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 1059:
#line 4329 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 1060:
#line 4330 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1061:
#line 4331 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 1062:
#line 4332 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 1063:
#line 4333 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 1064:
#line 4334 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1065:
#line 4335 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1066:
#line 4342 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 1067:
#line 4347 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 1068:
#line 4353 "parser/evoparser.y"
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

  case 1069:
#line 4368 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 1070:
#line 4369 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 1071:
#line 4372 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1072:
#line 4373 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 1073:
#line 4374 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 1074:
#line 4375 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1075:
#line 4378 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 1076:
#line 4383 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1077:
#line 4389 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1078:
#line 4398 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1079:
#line 4406 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1080:
#line 4416 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 1081:
#line 4421 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 1084:
#line 4434 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1085:
#line 4435 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1086:
#line 4436 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1087:
#line 4437 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1088:
#line 4438 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1089:
#line 4439 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1090:
#line 4440 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1091:
#line 4441 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1092:
#line 4444 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1093:
#line 4449 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1094:
#line 4455 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1095:
#line 4465 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1096:
#line 4472 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1097:
#line 4479 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1098:
#line 4487 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1100:
#line 4497 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1102:
#line 4501 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1103:
#line 4502 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 13609 "parser/evoparser.tab.c"
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


#line 4505 "parser/evoparser.y"

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
