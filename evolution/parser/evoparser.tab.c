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
#define YYLAST   14812

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  451
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  239
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2920

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
    1448,  1449,  1453,  1455,  1459,  1462,  1467,  1470,  1475,  1476,
    1479,  1484,  1489,  1490,  1497,  1498,  1501,  1504,  1509,  1514,
    1515,  1518,  1520,  1524,  1525,  1528,  1531,  1534,  1537,  1540,
    1543,  1546,  1549,  1551,  1555,  1557,  1560,  1563,  1565,  1566,
    1568,  1572,  1574,  1576,  1580,  1585,  1591,  1595,  1599,  1604,
    1611,  1621,  1625,  1626,  1632,  1634,  1635,  1641,  1645,  1651,
    1658,  1664,  1665,  1667,  1669,  1670,  1672,  1674,  1676,  1679,
    1682,  1683,  1684,  1686,  1689,  1694,  1701,  1708,  1715,  1716,
    1719,  1720,  1722,  1726,  1730,  1732,  1741,  1744,  1747,  1750,
    1751,  1758,  1761,  1766,  1767,  1770,  1778,  1780,  1785,  1792,
    1793,  1795,  1797,  1799,  1808,  1818,  1829,  1839,  1851,  1862,
    1875,  1887,  1901,  1911,  1923,  1934,  1947,  1959,  1972,  1985,
    2000,  2001,  2003,  2004,  2009,  2011,  2015,  2019,  2021,  2025,
    2027,  2032,  2037,  2042,  2049,  2051,  2055,  2058,  2062,  2068,
    2070,  2074,  2075,  2078,  2081,  2085,  2089,  2091,  2093,  2095,
    2097,  2099,  2105,  2113,  2114,  2121,  2126,  2132,  2139,  2141,
    2143,  2145,  2166,  2188,  2190,  2192,  2199,  2208,  2215,  2224,
    2226,  2228,  2230,  2232,  2234,  2236,  2238,  2245,  2254,  2255,
    2256,  2261,  2263,  2267,  2271,  2275,  2280,  2286,  2293,  2306,
    2321,  2323,  2325,  2338,  2345,  2354,  2367,  2373,  2381,  2384,
    2388,  2391,  2394,  2397,  2402,  2404,  2406,  2408,  2410,  2417,
    2426,  2430,  2436,  2440,  2446,  2448,  2450,  2452,  2461,  2472,
    2476,  2482,  2487,  2492,  2494,  2496,  2498,  2503,  2514,  2519,
    2526,  2539,  2554,  2563,  2574,  2583,  2594,  2606,  2608,  2610,
    2612,  2619,  2628,  2629,  2630,  2635,  2637,  2641,  2645,  2649,
    2654,  2661,  2674,  2689,  2696,  2705,  2714,  2725,  2732,  2734,
    2736,  2738,  2743,  2750,  2755,  2762,  2776,  2790,  2806,  2813,
    2822,  2832,  2834,  2836,  2838,  2843,  2850,  2855,  2862,  2873,
    2886,  2895,  2900,  2907,  2909,  2913,  2915,  2920,  2927,  2928,
    2933,  2938,  2941,  2942,  2947,  2955,  2960,  2962,  2966,  2968,
    2970,  2972,  2983,  2996,  2997,  3000,  3003,  3004,  3007,  3010,
    3013,  3016,  3019,  3020,  3023,  3025,  3029,  3030,  3035,  3036,
    3042,  3048,  3056,  3067,  3078,  3096,  3109,  3129,  3141,  3148,
    3157,  3164,  3171,  3178,  3188,  3195,  3201,  3210,  3218,  3228,
    3237,  3248,  3258,  3266,  3274,  3283,  3292,  3300,  3306,  3307,
    3309,  3312,  3314,  3325,  3332,  3333,  3334,  3340,  3341,  3346,
    3347,  3351,  3356,  3359,  3360,  3366,  3370,  3376,  3377,  3380,
    3383,  3386,  3389,  3391,  3392,  3393,  3397,  3399,  3403,  3407,
    3408,  3415,  3417,  3419,  3423,  3427,  3435,  3439,  3443,  3449,
    3455,  3457,  3466,  3474,  3482,  3484,  3485,  3493,  3494,  3498,
    3500,  3504,  3506,  3508,  3510,  3512,  3514,  3515,  3517,  3522,
    3526,  3528,  3532,  3535,  3538,  3541,  3543,  3546,  3549,  3552,
    3554,  3556,  3566,  3567,  3570,  3573,  3577,  3583,  3589,  3597,
    3603,  3605,  3610,  3615,  3619,  3625,  3629,  3635,  3636,  3639,
    3641,  3647,  3655,  3663,  3673,  3685,  3687,  3690,  3694,  3696,
    3707,  3708,  3713,  3725,  3744,  3745,  3750,  3754,  3760,  3766,
    3776,  3787,  3795,  3800,  3808,  3810,  3814,  3824,  3834,  3844,
    3851,  3863,  3872,  3873,  3875,  3878,  3880,  3884,  3890,  3898,
    3903,  3908,  3914,  3920,  3925,  3932,  3944,  3958,  3972,  3988,
    3993,  4000,  4002,  4006,  4008,  4012,  4014,  4018,  4019,  4024,
    4030,  4035,  4041,  4046,  4052,  4057,  4063,  4068,  4073,  4077,
    4081,  4085,  4088,  4092,  4097,  4102,  4104,  4108,  4109,  4114,
    4115,  4119,  4122,  4126,  4130,  4134,  4138,  4144,  4150,  4156,
    4160,  4166,  4169,  4177,  4183,  4191,  4197,  4200,  4204,  4207,
    4211,  4214,  4218,  4224,  4229,  4235,  4243,  4252,  4261,  4269,
    4276,  4283,  4289,  4290,  4294,  4300,  4301,  4303,  4304,  4307,
    4310,  4311,  4316,  4320,  4323,  4327,  4331,  4335,  4339,  4343,
    4347,  4351,  4355,  4359,  4363,  4365,  4367,  4369,  4371,  4373,
    4377,  4383,  4386,  4391,  4393,  4395,  4397,  4399,  4403,  4407,
    4411,  4415,  4421,  4427,  4429,  4431,  4433,  4438,  4442,  4444,
    4448,  4452,  4453,  4455,  4457,  4459,  4463,  4467,  4470,  4472,
    4476,  4480,  4484,  4486,  4497,  4507,  4520,  4532,  4545,  4557,
    4572,  4586,  4587,  4589,  4591,  4595,  4598,  4602,  4606,  4610,
    4612,  4614,  4616,  4618,  4620,  4622,  4624,  4626,  4628,  4630,
    4631,  4634,  4639,  4645,  4651,  4657,  4663,  4669,  4671,  4673,
    4675,  4677,  4679,  4681,  4683,  4685,  4687,  4689,  4691,  4693,
    4695,  4697,  4699,  4701,  4703,  4705,  4707,  4709,  4711,  4713,
    4715,  4717,  4719,  4721,  4723,  4725,  4727,  4729,  4731,  4733,
    4735,  4737,  4739,  4741,  4743,  4745,  4747,  4749,  4751,  4753,
    4755,  4757,  4759,  4761,  4763,  4765,  4767,  4769,  4771,  4773,
    4775,  4777,  4779,  4781,  4783,  4785,  4787,  4789,  4791,  4793,
    4795,  4797,  4799,  4801,  4803,  4805,  4807,  4809,  4811,  4813,
    4815,  4817,  4819,  4821,  4823,  4825,  4827,  4829,  4831,  4833,
    4835,  4837,  4839,  4841,  4843,  4845,  4847,  4849,  4851,  4853,
    4855,  4857,  4859,  4861,  4863,  4865,  4867,  4869,  4871,  4873,
    4875,  4877,  4879,  4881,  4883,  4885,  4887,  4889,  4891,  4893,
    4895,  4897,  4899,  4901,  4903,  4905,  4907,  4909,  4911,  4913,
    4915,  4917,  4921,  4927,  4931,  4937,  4939,  4944,  4950,  4952,
    4956,  4958,  4960,  4962,  4964,  4966,  4968,  4970,  4972,  4986,
    5002,  5004,  5006,  5008,  5010,  5012,  5014,  5016,  5020,  5026,
    5031,  5036,  5038,  5044,  5045,  5048,  5052,  5055,  5059,  5062,
    5065,  5068,  5070,  5073,  5075,  5079,  5085,  5090,  5095,  5102,
    5109,  5110,  5113,  5116,  5118
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
       3,    20,     4,   496,    -1,    -1,   179,   453,    -1,   179,
     453,   448,   453,    -1,   179,   453,   181,   453,    -1,    -1,
     140,   412,    51,    94,   413,     5,    -1,    -1,   140,   258,
      -1,   140,   230,    -1,   140,   258,   231,   180,    -1,   140,
     230,   231,   180,    -1,    -1,   159,   510,    -1,     3,    -1,
     510,   448,     3,    -1,    -1,   511,    40,    -1,   511,   106,
      -1,   511,   110,    -1,   511,   146,    -1,   511,   238,    -1,
     511,   226,    -1,   511,   234,    -1,   511,   233,    -1,   513,
      -1,   512,   448,   513,    -1,    28,    -1,   453,   514,    -1,
      51,     3,    -1,     3,    -1,    -1,   516,    -1,   515,   448,
     516,    -1,   517,    -1,   521,    -1,     3,   514,   528,    -1,
     173,     3,   514,   528,    -1,     3,   445,     3,   514,   528,
      -1,   531,   520,     3,    -1,   518,   520,     3,    -1,   381,
     446,   453,   447,    -1,   381,   446,   453,   447,   520,     3,
      -1,   381,   446,   453,   447,   520,     3,   446,     3,   447,
      -1,   446,   515,   447,    -1,    -1,   167,   446,   519,   492,
     447,    -1,    51,    -1,    -1,   516,   522,   163,   517,   526,
      -1,   516,   238,   517,    -1,   516,   238,   517,   197,   453,
      -1,   516,   524,   523,   163,   517,   527,    -1,   516,   190,
     525,   163,   517,    -1,    -1,   153,    -1,    76,    -1,    -1,
     196,    -1,   177,    -1,   215,    -1,   177,   523,    -1,   215,
     523,    -1,    -1,    -1,   527,    -1,   197,   453,    -1,   266,
     446,   510,   447,    -1,   267,   164,   529,   446,   530,   447,
      -1,   154,   164,   529,   446,   530,   447,    -1,   133,   164,
     529,   446,   530,   447,    -1,    -1,   140,   163,    -1,    -1,
       3,    -1,   530,   448,     3,    -1,   446,   492,   447,    -1,
     532,    -1,   107,   533,   136,     3,   493,   503,   506,   688,
      -1,   533,   176,    -1,   533,   203,    -1,   533,   154,    -1,
      -1,   107,   533,   534,   136,   515,   493,    -1,     3,   535,
      -1,   534,   448,     3,   535,    -1,    -1,   445,    28,    -1,
     107,   533,   136,   534,   266,   515,   493,    -1,   536,    -1,
     108,   252,     3,   537,    -1,   108,   252,   156,   281,     3,
     537,    -1,    -1,    74,    -1,   210,    -1,   538,    -1,    73,
     155,     3,   197,     3,   446,   543,   447,    -1,    73,   138,
     155,     3,   197,     3,   446,   543,   447,    -1,    73,   155,
     156,   281,     3,   197,     3,   446,   543,   447,    -1,    73,
     261,   155,     3,   197,     3,   446,   543,   447,    -1,    73,
     261,   155,   156,   281,     3,   197,     3,   446,   543,   447,
      -1,    73,   155,     3,   197,     3,   266,   268,   446,   543,
     447,    -1,    73,   155,   156,   281,     3,   197,     3,   266,
     268,   446,   543,   447,    -1,    73,   261,   155,     3,   197,
       3,   266,   268,   446,   543,   447,    -1,    73,   261,   155,
     156,   281,     3,   197,     3,   266,   268,   446,   543,   447,
      -1,    73,   155,    85,     3,   197,     3,   446,   543,   447,
      -1,    73,   155,    85,   156,   281,     3,   197,     3,   446,
     543,   447,    -1,    73,   261,   155,    85,     3,   197,     3,
     446,   543,   447,    -1,    73,   261,   155,    85,   156,   281,
       3,   197,     3,   446,   543,   447,    -1,    73,   155,    85,
       3,   197,     3,   266,   268,   446,   543,   447,    -1,    73,
     261,   155,    85,     3,   197,     3,   266,   268,   446,   543,
     447,    -1,    73,   155,     3,   197,     3,   266,   391,   446,
       3,   539,   447,   540,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   391,   446,     3,   539,   447,   540,    -1,
      -1,     3,    -1,    -1,   277,   446,   541,   447,    -1,   542,
      -1,   541,   448,   542,    -1,     3,    20,     5,    -1,     3,
      -1,   543,   448,     3,    -1,   544,    -1,   327,   446,     3,
     447,    -1,   328,   446,     3,   447,    -1,   329,   446,     3,
     447,    -1,   330,   446,     3,   448,     3,   447,    -1,   545,
      -1,   108,   155,     3,    -1,   546,   548,    -1,   255,   252,
       3,    -1,   255,   252,     3,   448,   547,    -1,     3,    -1,
     547,   448,     3,    -1,    -1,   548,    74,    -1,   548,   210,
      -1,   548,    55,    53,    -1,   548,    54,    53,    -1,   568,
      -1,   569,    -1,   570,    -1,   549,    -1,   551,    -1,    73,
     395,   396,     3,   550,    -1,    73,   395,   396,   156,   281,
       3,   550,    -1,    -1,   277,   446,   397,    20,     4,   447,
      -1,   108,   395,   396,     3,    -1,   108,   395,   396,     3,
      74,    -1,   108,   395,   396,   156,   281,     3,    -1,   552,
      -1,   554,    -1,   555,    -1,   395,   398,   159,     3,   271,
     446,   553,   448,   553,   448,   553,   448,   553,   448,   553,
     448,   553,   448,   553,   447,    -1,   395,   398,   401,   159,
       3,   271,   446,   553,   448,   553,   448,   553,   448,   553,
     448,   553,   448,   553,   448,   553,   447,    -1,     4,    -1,
     193,    -1,   395,   399,   136,     3,   402,     4,    -1,   395,
     399,   136,     3,   402,     4,   403,     4,    -1,   395,   400,
     136,     3,   402,     4,    -1,   395,   400,   136,     3,   402,
       4,   179,     5,    -1,   556,    -1,   561,    -1,   562,    -1,
     564,    -1,   565,    -1,   566,    -1,   567,    -1,    73,   404,
     396,     3,   557,   558,    -1,    73,   404,   396,   156,   281,
       3,   557,   558,    -1,    -1,    -1,   277,   446,   559,   447,
      -1,   560,    -1,   559,   448,   560,    -1,   405,    20,     5,
      -1,   406,    20,     4,    -1,   108,   404,   396,     3,    -1,
     108,   404,   396,     3,    74,    -1,   108,   404,   396,   156,
     281,     3,    -1,   404,   398,   159,     3,   271,   446,   563,
     448,   563,   448,   563,   447,    -1,   404,   398,   159,     3,
     271,   446,   563,   448,   563,   448,   563,   448,   563,   447,
      -1,     4,    -1,   193,    -1,   404,   399,   136,     3,   274,
     411,    20,     4,    12,   164,    20,     4,    -1,   404,   407,
       3,   266,   273,     4,    -1,   404,   407,     3,   266,   273,
       4,   179,     5,    -1,   404,   107,   136,     3,   274,   411,
      20,     4,    12,   164,    20,     4,    -1,   404,   400,   409,
      16,     3,    -1,   404,   400,   409,    16,     3,   410,     4,
      -1,   168,     3,    -1,   168,     3,   171,    -1,   170,     3,
      -1,   170,    28,    -1,   169,     3,    -1,   169,     3,   448,
       4,    -1,   571,    -1,   572,    -1,   573,    -1,   574,    -1,
      73,   417,     3,   140,   418,     3,    -1,    73,   417,   156,
     281,     3,   140,   418,     3,    -1,   108,   417,     3,    -1,
     108,   417,   156,   281,     3,    -1,   419,   417,     3,    -1,
     420,   417,     3,   421,     5,    -1,   575,    -1,   576,    -1,
     577,    -1,    73,   426,     3,   197,   428,     4,   101,     4,
      -1,    73,   426,   156,   281,     3,   197,   428,     4,   101,
       4,    -1,   108,   426,     3,    -1,   108,   426,   156,   281,
       3,    -1,    37,   426,     3,   120,    -1,    37,   426,     3,
     100,    -1,   578,    -1,   579,    -1,   580,    -1,    73,   429,
       3,     3,    -1,    73,   429,     3,     3,   277,   446,   422,
      20,     4,   447,    -1,   108,   429,     3,     3,    -1,   108,
     429,     3,   156,   281,     3,    -1,   429,   430,   159,     3,
     271,   446,     4,   448,     4,   448,     4,   447,    -1,   429,
     430,   159,     3,   271,   446,     4,   448,     4,   448,     4,
     448,     4,   447,    -1,   429,   431,   136,     3,   274,   433,
      20,     4,    -1,   429,   431,   136,     3,   274,   433,    20,
       4,   432,     5,    -1,   429,   255,   136,     3,   274,   433,
      20,     4,    -1,   429,   255,   136,     3,   274,   433,    20,
       4,    59,     5,    -1,   429,   322,   446,    28,   447,   136,
       3,   274,   433,    20,     4,    -1,   581,    -1,   586,    -1,
     587,    -1,    73,   434,   396,     3,   582,   583,    -1,    73,
     434,   396,   156,   281,     3,   582,   583,    -1,    -1,    -1,
     277,   446,   584,   447,    -1,   585,    -1,   584,   448,   585,
      -1,   405,    20,     5,    -1,   406,    20,     4,    -1,   108,
     434,   396,     3,    -1,   108,   434,   396,   156,   281,     3,
      -1,   434,   435,   159,     3,   271,   446,     4,   448,     4,
     448,     4,   447,    -1,   434,   435,   159,     3,   271,   446,
       4,   448,     4,   448,     4,   448,     4,   447,    -1,   434,
     436,   136,     3,   274,     4,    -1,   434,   436,   136,     3,
     274,     4,   179,     5,    -1,   434,   407,     3,   266,   273,
       4,   179,     5,    -1,   434,   407,     3,   266,   273,     4,
     274,     4,   179,     5,    -1,   434,   107,   136,     3,   274,
       4,    -1,   588,    -1,   589,    -1,   590,    -1,    73,   437,
     396,     3,    -1,    73,   437,   396,   156,   281,     3,    -1,
     108,   437,   396,     3,    -1,   108,   437,   396,   156,   281,
       3,    -1,   437,   441,   191,   159,     3,   271,   446,     4,
     448,     4,   448,     4,   447,    -1,   437,   441,   439,   159,
       3,   271,   446,     4,   448,     4,   448,     4,   447,    -1,
     437,   441,   439,   159,     3,   271,   446,     4,   448,     4,
     448,     4,   448,     4,   447,    -1,   437,   438,    94,     4,
      16,     3,    -1,   437,   438,    94,     4,    16,     3,   440,
       5,    -1,   437,   438,    94,     4,    16,     3,    51,    94,
       4,    -1,   591,    -1,   592,    -1,   593,    -1,    73,   442,
     396,     3,    -1,    73,   442,   396,   156,   281,     3,    -1,
     108,   442,   396,     3,    -1,   108,   442,   396,   156,   281,
       3,    -1,   442,   398,   159,     3,   271,   446,     4,   448,
       4,   447,    -1,   442,   398,   159,     3,   271,   446,     4,
     448,     4,   448,     4,   447,    -1,   442,   399,   136,     3,
     274,   164,    20,     4,    -1,   442,   443,   136,     3,    -1,
     442,   443,   136,     3,   179,     5,    -1,   594,    -1,   206,
     252,     3,    -1,   595,    -1,   597,     3,   596,   598,    -1,
     597,     3,   445,     3,   596,   598,    -1,    -1,   277,    44,
       5,    45,    -1,   277,    44,     5,    46,    -1,    41,   252,
      -1,    -1,   258,    42,   197,   599,    -1,   258,    42,   197,
     599,   277,     5,    43,    -1,   108,    42,   197,   599,    -1,
       3,    -1,   599,   448,     3,    -1,   608,    -1,   600,    -1,
     607,    -1,    73,   221,     3,   197,     3,   601,   602,   603,
     605,   606,    -1,    73,   221,     3,   197,   404,   396,     3,
     601,   602,   603,   605,   606,    -1,    -1,    51,   223,    -1,
      51,   224,    -1,    -1,   140,    40,    -1,   140,   241,    -1,
     140,   157,    -1,   140,   258,    -1,   140,   107,    -1,    -1,
     245,   604,    -1,     3,    -1,   604,   448,     3,    -1,    -1,
     266,   446,   453,   447,    -1,    -1,   277,    78,   446,   453,
     447,    -1,   108,   221,     3,   197,     3,    -1,   108,   221,
       3,   197,   404,   396,     3,    -1,    37,   252,     3,    38,
      71,     3,    78,   446,   453,   447,    -1,    37,   252,     3,
      38,    71,     3,   261,   446,   655,   447,    -1,    37,   252,
       3,    38,    71,     3,   134,   164,   446,   652,   447,   207,
       3,   446,   653,   447,   654,    -1,    37,   252,     3,    38,
      71,     3,    78,   446,   453,   447,    18,   269,    -1,    37,
     252,     3,    38,    71,     3,   134,   164,   446,   652,   447,
     207,     3,   446,   653,   447,   654,    18,   269,    -1,    37,
     252,     3,    38,    71,     3,   201,   164,   446,   651,   447,
      -1,    37,   252,     3,   108,    71,     3,    -1,    37,   252,
       3,   208,    71,     3,   245,     3,    -1,    37,   252,     3,
     120,    71,     3,    -1,    37,   252,     3,   100,    71,     3,
      -1,    37,   252,     3,   269,    71,     3,    -1,    37,   252,
       3,    38,    84,     3,   662,   657,   609,    -1,    37,   252,
       3,   108,    84,     3,    -1,    37,   252,     3,   108,     3,
      -1,    37,   252,     3,   208,    84,     3,   245,     3,    -1,
      37,   252,     3,   208,     3,   245,     3,    -1,    37,   252,
       3,   187,    84,     3,   662,   657,   609,    -1,    37,   252,
       3,   187,     3,   662,   657,   609,    -1,    37,   252,     3,
      75,    84,     3,     3,   662,   657,   609,    -1,    37,   252,
       3,    75,     3,     3,   662,   657,   609,    -1,    37,   252,
       3,   120,   217,     3,   222,    -1,    37,   252,     3,   100,
     217,     3,   222,    -1,    37,   404,   396,     3,   120,   217,
       3,   222,    -1,    37,   404,   396,     3,   100,   217,     3,
     222,    -1,    37,   252,     3,   240,   423,    20,     4,    -1,
      37,   252,     3,   108,   422,    -1,    -1,   130,    -1,    39,
       3,    -1,   610,    -1,   157,   618,   619,     3,   620,   271,
     622,   611,   613,   688,    -1,   157,   618,   619,     3,   620,
     492,    -1,    -1,    -1,   199,   164,   258,   612,   617,    -1,
      -1,   197,    88,   614,   615,    -1,    -1,   446,     3,   447,
      -1,   446,     3,   448,     3,    -1,   101,    90,    -1,    -1,
     101,   258,   616,   240,   617,    -1,     3,    20,   453,    -1,
     617,   448,     3,    20,   453,    -1,    -1,   618,   176,    -1,
     618,   103,    -1,   618,   146,    -1,   618,   154,    -1,   159,
      -1,    -1,    -1,   446,   621,   447,    -1,     3,    -1,   621,
     448,     3,    -1,   446,   624,   447,    -1,    -1,   622,   448,
     623,   446,   624,   447,    -1,   453,    -1,   113,    -1,   624,
     448,   453,    -1,   624,   448,   113,    -1,   157,   618,   619,
       3,   240,   625,   611,    -1,     3,    20,   453,    -1,     3,
      20,   113,    -1,   625,   448,     3,    20,   453,    -1,   625,
     448,     3,    20,   113,    -1,   626,    -1,   216,   618,   619,
       3,   620,   271,   622,   611,    -1,   216,   618,   619,     3,
     240,   625,   611,    -1,   216,   618,   619,     3,   620,   492,
     611,    -1,   627,    -1,    -1,    86,     3,   628,   629,   631,
     632,   633,    -1,    -1,   446,   630,   447,    -1,     3,    -1,
     630,   448,     3,    -1,   136,    -1,   245,    -1,     4,    -1,
     236,    -1,   237,    -1,    -1,   634,    -1,   277,   446,   634,
     447,    -1,   446,   634,   447,    -1,   635,    -1,   634,   448,
     635,    -1,   135,    87,    -1,   135,   249,    -1,    99,     4,
      -1,   143,    -1,   143,     6,    -1,   193,     4,    -1,   242,
       4,    -1,    87,    -1,   636,    -1,   258,   637,   515,   240,
     638,   493,   503,   506,   688,    -1,    -1,   618,   176,    -1,
     618,   154,    -1,     3,    20,   453,    -1,     3,   445,     3,
      20,   453,    -1,   638,   448,     3,    20,   453,    -1,   638,
     448,     3,   445,     3,    20,   453,    -1,   208,   252,     3,
     245,     3,    -1,   639,    -1,    73,    95,   640,     3,    -1,
      73,   227,   640,     3,    -1,   108,    95,     3,    -1,   108,
      95,   156,   281,     3,    -1,   108,   227,     3,    -1,   108,
     227,   156,   281,     3,    -1,    -1,   156,   281,    -1,   641,
      -1,    73,   102,     3,    51,   662,    -1,    73,   102,     3,
      51,   662,   113,   453,    -1,    73,   102,     3,    51,   662,
      18,   193,    -1,    73,   102,     3,    51,   662,    78,   446,
     453,   447,    -1,    73,   102,     3,    51,   662,    18,   193,
      78,   446,   453,   447,    -1,   642,    -1,   267,     3,    -1,
     267,    95,     3,    -1,   643,    -1,    73,   648,   252,   640,
       3,   446,   649,   447,   645,   644,    -1,    -1,   172,   446,
       3,   447,    -1,    73,   648,   252,   640,     3,   445,     3,
     446,   649,   447,   645,    -1,    73,   648,   252,   640,     3,
     351,    94,     3,   140,   271,   136,   446,     5,   447,   245,
     446,     5,   447,    -1,    -1,   645,    48,    20,     5,    -1,
     645,    48,     5,    -1,   645,   197,     3,   107,     3,    -1,
     645,   197,     3,   248,     3,    -1,   645,   228,    63,   268,
     446,     3,   447,   229,     5,    -1,   645,   228,    63,   204,
     446,     3,   447,   446,   646,   447,    -1,   645,   351,    63,
     204,   446,     3,   447,    -1,   645,   277,   415,   416,    -1,
     645,   277,   446,   423,    20,     4,   447,    -1,   647,    -1,
     646,   448,   647,    -1,   228,     3,   271,   174,   250,     4,
     197,   191,     5,    -1,   228,     3,   271,   174,   250,   184,
     197,   191,     5,    -1,    73,   648,   252,   640,     3,   446,
     649,   447,   664,    -1,    73,   648,   252,   640,     3,   664,
      -1,    73,   648,   252,   640,     3,   445,     3,   446,   649,
     447,   664,    -1,    73,   648,   252,   640,     3,   445,     3,
     664,    -1,    -1,   246,    -1,   247,   246,    -1,   650,    -1,
     649,   448,   650,    -1,   201,   164,   446,   651,   447,    -1,
      71,     3,   201,   164,   446,   651,   447,    -1,   164,   446,
     510,   447,    -1,   155,   446,   510,   447,    -1,   138,   155,
     446,   510,   447,    -1,   138,   164,   446,   510,   447,    -1,
      78,   446,   453,   447,    -1,    71,     3,    78,   446,   453,
     447,    -1,   134,   164,   446,   652,   447,   207,     3,   446,
     653,   447,   654,    -1,   134,   164,   446,   652,   447,   207,
       3,   445,     3,   446,   653,   447,   654,    -1,    71,     3,
     134,   164,   446,   652,   447,   207,     3,   446,   653,   447,
     654,    -1,    71,     3,   134,   164,   446,   652,   447,   207,
       3,   445,     3,   446,   653,   447,   654,    -1,   261,   446,
     655,   447,    -1,    71,     3,   261,   446,   655,   447,    -1,
       3,    -1,   651,   448,     3,    -1,     3,    -1,   652,   448,
       3,    -1,     3,    -1,   653,   448,     3,    -1,    -1,   654,
     197,   107,    74,    -1,   654,   197,   107,   240,   193,    -1,
     654,   197,   107,   210,    -1,   654,   197,   107,   240,   113,
      -1,   654,   197,   258,    74,    -1,   654,   197,   258,   240,
     193,    -1,   654,   197,   258,   210,    -1,   654,   197,   258,
     240,   113,    -1,   654,   197,   107,   192,    -1,   654,   197,
     258,   192,    -1,   654,   183,   137,    -1,   654,   183,   235,
      -1,   654,   183,   200,    -1,   654,    97,    -1,   654,    18,
      97,    -1,   654,    97,   151,    98,    -1,   654,    97,   151,
     149,    -1,     3,    -1,   655,   448,     3,    -1,    -1,   656,
       3,   662,   657,    -1,    -1,   657,    18,   193,    -1,   657,
     193,    -1,   657,   113,     4,    -1,   657,   113,     5,    -1,
     657,   113,     7,    -1,   657,   113,     6,    -1,   657,   113,
     333,   446,   447,    -1,   657,   113,   334,   446,   447,    -1,
     657,   113,   335,   446,   447,    -1,   657,   113,    72,    -1,
     657,   113,   446,   453,   447,    -1,   657,    48,    -1,   657,
      48,   446,     5,   448,     5,   447,    -1,   657,    48,   446,
       5,   447,    -1,   657,    53,   446,     5,   448,     5,   447,
      -1,   657,    53,   446,     5,   447,    -1,   657,    53,    -1,
     657,   261,   164,    -1,   657,   261,    -1,   657,   201,   164,
      -1,   657,   164,    -1,   657,    79,     4,    -1,   657,    78,
     446,   453,   447,    -1,   657,    71,     3,   261,    -1,   657,
      71,     3,   201,   164,    -1,   657,    71,     3,    78,   446,
     453,   447,    -1,   657,    56,    52,    51,   446,   453,   447,
      57,    -1,   657,    56,    52,    51,   446,   453,   447,    58,
      -1,   657,    56,    52,    51,   446,   453,   447,    -1,   657,
      51,   446,   453,   447,    57,    -1,   657,    51,   446,   453,
     447,    58,    -1,   657,    51,   446,   453,   447,    -1,    -1,
     446,     5,   447,    -1,   446,     5,   448,     5,   447,    -1,
      -1,    64,    -1,    -1,   660,   259,    -1,   660,   280,    -1,
      -1,   661,    82,   240,     4,    -1,   661,    83,     4,    -1,
      67,   658,    -1,   244,   658,   660,    -1,   239,   658,   660,
      -1,   189,   658,   660,    -1,   160,   658,   660,    -1,   152,
     658,   660,    -1,    66,   658,   660,    -1,   205,   658,   660,
      -1,   114,   658,   660,    -1,   132,   658,   660,    -1,   116,
     658,   660,    -1,   117,    -1,   257,    -1,   251,    -1,   115,
      -1,   278,    -1,    82,   658,   661,    -1,   270,   446,     5,
     447,   661,    -1,    64,   658,    -1,   272,   446,     5,   447,
      -1,   256,    -1,    61,    -1,   188,    -1,   182,    -1,   243,
     659,   661,    -1,   249,   659,   661,    -1,   185,   659,   661,
      -1,   175,   659,   661,    -1,   123,   446,   663,   447,   661,
      -1,   240,   446,   663,   447,   661,    -1,    62,    -1,   262,
      -1,   264,    -1,   273,   446,     5,   447,    -1,   662,    36,
     449,    -1,     4,    -1,   663,   448,     4,    -1,   665,   520,
     492,    -1,    -1,   154,    -1,   216,    -1,   666,    -1,   240,
     227,     3,    -1,   240,   227,   113,    -1,   240,   667,    -1,
     668,    -1,   667,   448,   668,    -1,     8,    20,   453,    -1,
       8,     9,   453,    -1,   669,    -1,    73,   202,     3,   446,
     670,   447,    51,    60,   674,   124,    -1,    73,   202,     3,
     446,   670,   447,    60,   674,   124,    -1,    73,    10,   216,
     202,     3,   446,   670,   447,    51,    60,   674,   124,    -1,
      73,    10,   216,   202,     3,   446,   670,   447,    60,   674,
     124,    -1,    73,   139,     3,   446,   670,   447,   213,   673,
      51,    60,   674,   124,    -1,    73,   139,     3,   446,   670,
     447,   213,   673,    60,   674,   124,    -1,    73,    10,   216,
     139,     3,   446,   670,   447,   213,   673,    51,    60,   674,
     124,    -1,    73,    10,   216,   139,     3,   446,   670,   447,
     213,   673,    60,   674,   124,    -1,    -1,   671,    -1,   672,
      -1,   671,   448,   672,    -1,     3,   662,    -1,    16,     3,
     662,    -1,   195,     3,   662,    -1,   150,     3,   662,    -1,
     152,    -1,   160,    -1,   270,    -1,   249,    -1,    62,    -1,
     132,    -1,   114,    -1,    66,    -1,   117,    -1,   251,    -1,
      -1,   674,   675,    -1,   674,    60,   674,   124,    -1,   674,
     156,   674,   124,   156,    -1,   674,   276,   674,   124,   276,
      -1,   674,   166,   674,   124,   166,    -1,   674,   131,   674,
     124,   131,    -1,   674,    77,   674,   124,    77,    -1,     3,
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
      -1,   277,    -1,   202,    -1,   139,    -1,   213,    -1,   446,
      -1,   447,    -1,   448,    -1,   444,    -1,   445,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    17,
      -1,   450,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,     8,    -1,   676,    -1,   108,   202,     3,
      -1,   108,   202,   156,   281,     3,    -1,   108,   139,     3,
      -1,   108,   139,   156,   281,     3,    -1,   677,    -1,    68,
       3,   446,   447,    -1,    68,     3,   446,   678,   447,    -1,
     679,    -1,   678,   448,   679,    -1,     5,    -1,     4,    -1,
       7,    -1,   193,    -1,     6,    -1,     3,    -1,     8,    -1,
     680,    -1,    73,   219,     3,   681,   682,   197,     3,   140,
     118,   217,    60,   674,   124,    -1,    73,   219,     3,   681,
     682,   197,   404,   396,     3,   140,   118,   217,    60,   674,
     124,    -1,    59,    -1,    39,    -1,   157,    -1,   258,    -1,
     107,    -1,   398,    -1,   683,    -1,   108,   219,     3,    -1,
     108,   219,   156,   281,     3,    -1,    37,   219,     3,   120,
      -1,    37,   219,     3,   100,    -1,   684,    -1,    73,   371,
     640,     3,   685,    -1,    -1,   685,   686,    -1,   376,   277,
       5,    -1,   376,     5,    -1,   377,    63,     5,    -1,   377,
       5,    -1,   378,     5,    -1,   184,     5,    -1,   379,    -1,
      18,   379,    -1,   687,    -1,   108,   371,     3,    -1,   108,
     371,   156,   281,     3,    -1,    37,   371,     3,   685,    -1,
      37,   371,     3,    55,    -1,    37,   371,     3,    55,   277,
       5,    -1,    37,   371,     3,   208,   245,     3,    -1,    -1,
     212,    28,    -1,   212,   689,    -1,     3,    -1,   689,   448,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   532,   532,   533,   538,   545,   546,   547,   561,   562,
     600,   608,   616,   622,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   655,   655,   664,   664,   666,   666,
     668,   668,   673,   675,   679,   680,   681,   682,   683,   686,
     687,   690,   699,   717,   726,   746,   746,   806,   815,   822,
     826,   828,   830,   835,   840,   845,   853,   855,   857,   859,
     861,   863,   865,   867,   869,   871,   878,   889,   900,   901,
     904,   904,   905,   905,   906,   906,   914,   914,   922,   922,
     933,   937,   938,   939,   940,   941,   942,   943,   944,   948,
     948,   950,   950,   952,   952,   955,   955,   957,   957,   959,
     959,   961,   961,   963,   963,   965,   965,   968,   968,   970,
     970,   972,   972,   974,   974,   976,   976,   978,   978,   980,
     980,   982,   982,   985,   985,   987,   987,   989,   989,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,
    1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,  1025,  1026,  1027,  1028,  1030,  1031,  1032,  1033,  1034,
    1035,  1036,  1037,  1039,  1040,  1041,  1042,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,
    1056,  1057,  1058,  1059,  1060,  1062,  1063,  1064,  1065,  1066,
    1068,  1069,  1071,  1072,  1073,  1075,  1076,  1077,  1078,  1085,
    1092,  1099,  1103,  1107,  1111,  1115,  1119,  1125,  1126,  1127,
    1130,  1136,  1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,
    1151,  1154,  1156,  1158,  1160,  1164,  1172,  1183,  1184,  1187,
    1188,  1191,  1199,  1207,  1215,  1229,  1239,  1240,  1254,  1270,
    1271,  1272,  1273,  1276,  1283,  1291,  1292,  1293,  1296,  1297,
    1300,  1301,  1305,  1306,  1309,  1311,  1315,  1316,  1319,  1321,
    1325,  1326,  1329,  1330,  1333,  1339,  1346,  1359,  1372,  1373,
    1374,  1375,  1385,  1386,  1390,  1391,  1392,  1393,  1394,  1397,
    1398,  1401,  1402,  1405,  1406,  1407,  1408,  1409,  1410,  1411,
    1412,  1413,  1416,  1417,  1418,  1426,  1432,  1433,  1434,  1437,
    1438,  1441,  1442,  1446,  1454,  1464,  1465,  1466,  1475,  1480,
    1486,  1494,  1498,  1498,  1538,  1539,  1543,  1545,  1547,  1549,
    1551,  1555,  1556,  1557,  1560,  1561,  1564,  1565,  1568,  1569,
    1570,  1573,  1574,  1577,  1578,  1582,  1584,  1586,  1588,  1591,
    1592,  1595,  1596,  1599,  1603,  1613,  1621,  1622,  1623,  1624,
    1628,  1632,  1634,  1638,  1638,  1640,  1645,  1652,  1659,  1671,
    1672,  1673,  1677,  1684,  1691,  1699,  1709,  1717,  1727,  1735,
    1744,  1753,  1763,  1771,  1780,  1789,  1799,  1808,  1825,  1833,
    1845,  1846,  1860,  1861,  1864,  1865,  1877,  1887,  1892,  1897,
    1903,  1910,  1917,  1924,  1934,  1941,  1950,  1957,  1963,  1971,
    1977,  1985,  1986,  1987,  1988,  1989,  2005,  2006,  2007,  2016,
    2017,  2021,  2031,  2047,  2048,  2052,  2060,  2069,  2092,  2093,
    2094,  2098,  2115,  2137,  2138,  2143,  2152,  2166,  2175,  2201,
    2202,  2203,  2204,  2205,  2206,  2207,  2211,  2218,  2230,  2233,
    2234,  2238,  2239,  2243,  2245,  2250,  2258,  2267,  2279,  2291,
    2306,  2307,  2312,  2326,  2336,  2350,  2364,  2372,  2383,  2389,
    2400,  2406,  2413,  2419,  2441,  2442,  2443,  2444,  2448,  2457,
    2474,  2482,  2493,  2504,  2524,  2525,  2526,  2530,  2540,  2553,
    2562,  2574,  2582,  2603,  2604,  2605,  2609,  2621,  2646,  2658,
    2673,  2685,  2697,  2706,  2716,  2725,  2735,  2759,  2760,  2761,
    2765,  2772,  2782,  2785,  2786,  2790,  2791,  2795,  2797,  2802,
    2810,  2821,  2832,  2844,  2853,  2863,  2873,  2884,  2902,  2903,
    2904,  2908,  2916,  2927,  2935,  2946,  2957,  2969,  2981,  2990,
    3000,  3019,  3020,  3021,  3025,  3033,  3044,  3052,  3063,  3074,
    3085,  3094,  3102,  3114,  3121,  3130,  3138,  3144,  3159,  3161,
    3165,  3174,  3187,  3189,  3193,  3198,  3205,  3210,  3218,  3222,
    3223,  3227,  3239,  3250,  3251,  3252,  3256,  3257,  3258,  3259,
    3260,  3261,  3264,  3266,  3270,  3271,  3274,  3276,  3279,  3281,
    3285,  3292,  3301,  3307,  3313,  3320,  3326,  3333,  3339,  3345,
    3351,  3357,  3363,  3369,  3375,  3381,  3387,  3393,  3399,  3405,
    3411,  3417,  3423,  3436,  3446,  3456,  3466,  3472,  3480,  3481,
    3482,  3485,  3493,  3499,  3512,  3513,  3513,  3517,  3518,  3521,
    3522,  3523,  3527,  3528,  3528,  3532,  3540,  3550,  3551,  3552,
    3553,  3554,  3557,  3557,  3560,  3561,  3564,  3574,  3587,  3588,
    3588,  3591,  3592,  3593,  3594,  3597,  3601,  3602,  3603,  3604,
    3610,  3613,  3619,  3624,  3630,  3634,  3634,  3639,  3640,  3642,
    3643,  3647,  3648,  3652,  3653,  3654,  3657,  3658,  3659,  3660,
    3664,  3665,  3669,  3670,  3671,  3672,  3673,  3674,  3675,  3676,
    3680,  3688,  3697,  3698,  3699,  3703,  3714,  3726,  3737,  3752,
    3757,  3761,  3762,  3766,  3768,  3770,  3772,  3776,  3777,  3783,
    3787,  3789,  3791,  3793,  3795,  3800,  3804,  3805,  3809,  3818,
    3831,  3832,  3840,  3848,  3856,  3857,  3858,  3859,  3860,  3861,
    3863,  3865,  3870,  3875,  3879,  3880,  3883,  3898,  3905,  3920,
    3933,  3948,  3961,  3962,  3963,  3966,  3967,  3970,  3971,  3972,
    3973,  3974,  3975,  3976,  3977,  3978,  3980,  3982,  3984,  3986,
    3988,  3992,  3993,  3996,  3997,  4000,  4001,  4004,  4005,  4006,
    4007,  4008,  4009,  4010,  4011,  4012,  4013,  4014,  4015,  4016,
    4017,  4018,  4019,  4020,  4021,  4024,  4025,  4028,  4028,  4038,
    4039,  4040,  4041,  4042,  4043,  4044,  4045,  4046,  4047,  4048,
    4049,  4056,  4057,  4058,  4059,  4060,  4061,  4062,  4063,  4064,
    4065,  4066,  4067,  4068,  4069,  4070,  4071,  4072,  4073,  4074,
    4075,  4076,  4079,  4080,  4081,  4084,  4085,  4088,  4089,  4090,
    4093,  4094,  4095,  4099,  4100,  4101,  4102,  4103,  4104,  4105,
    4106,  4107,  4108,  4109,  4110,  4111,  4112,  4113,  4114,  4115,
    4116,  4117,  4118,  4119,  4120,  4121,  4122,  4123,  4124,  4125,
    4126,  4127,  4128,  4129,  4130,  4131,  4132,  4133,  4136,  4137,
    4140,  4153,  4154,  4155,  4159,  4162,  4163,  4164,  4165,  4165,
    4167,  4168,  4176,  4180,  4186,  4192,  4199,  4206,  4212,  4218,
    4225,  4234,  4235,  4238,  4239,  4242,  4243,  4244,  4245,  4248,
    4249,  4250,  4251,  4252,  4253,  4254,  4255,  4256,  4257,  4264,
    4265,  4266,  4267,  4268,  4269,  4270,  4271,  4274,  4275,  4276,
    4276,  4276,  4277,  4277,  4277,  4277,  4277,  4277,  4278,  4278,
    4278,  4278,  4278,  4278,  4278,  4278,  4278,  4279,  4279,  4279,
    4279,  4279,  4279,  4279,  4280,  4280,  4280,  4280,  4281,  4281,
    4281,  4281,  4281,  4281,  4281,  4281,  4281,  4281,  4281,  4281,
    4282,  4282,  4282,  4282,  4282,  4282,  4282,  4282,  4283,  4283,
    4283,  4283,  4283,  4283,  4283,  4283,  4284,  4284,  4284,  4284,
    4284,  4284,  4284,  4284,  4284,  4285,  4285,  4285,  4285,  4285,
    4285,  4285,  4285,  4286,  4286,  4286,  4287,  4287,  4287,  4287,
    4287,  4287,  4287,  4287,  4288,  4288,  4288,  4288,  4288,  4288,
    4288,  4289,  4289,  4289,  4289,  4289,  4289,  4289,  4290,  4290,
    4290,  4290,  4291,  4291,  4291,  4291,  4291,  4291,  4291,  4291,
    4291,  4291,  4291,  4291,  4292,  4292,  4292,  4292,  4292,  4293,
    4300,  4304,  4310,  4316,  4322,  4334,  4338,  4344,  4352,  4353,
    4356,  4357,  4358,  4359,  4360,  4361,  4362,  4369,  4373,  4379,
    4395,  4396,  4399,  4400,  4401,  4402,  4405,  4409,  4415,  4424,
    4432,  4443,  4447,  4456,  4457,  4461,  4462,  4463,  4464,  4465,
    4466,  4467,  4468,  4471,  4475,  4481,  4491,  4498,  4505,  4513,
    4523,  4524,  4525,  4528,  4529
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
     503,   503,   504,   504,   505,   505,   505,   505,   506,   506,
     506,   506,   507,   507,   508,   508,   508,   508,   508,   509,
     509,   510,   510,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   512,   512,   512,   513,   514,   514,   514,   515,
     515,   516,   516,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   519,   518,   520,   520,   521,   521,   521,   521,
     521,   522,   522,   522,   523,   523,   524,   524,   525,   525,
     525,   526,   526,   527,   527,   528,   528,   528,   528,   529,
     529,   530,   530,   531,   491,   532,   533,   533,   533,   533,
     532,   534,   534,   535,   535,   532,   491,   536,   536,   537,
     537,   537,   491,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     539,   539,   540,   540,   541,   541,   542,   543,   543,   543,
     544,   544,   544,   544,   491,   545,   491,   546,   546,   547,
     547,   548,   548,   548,   548,   548,   491,   491,   491,   491,
     491,   549,   549,   550,   550,   551,   551,   551,   491,   491,
     491,   552,   552,   553,   553,   554,   554,   555,   555,   491,
     491,   491,   491,   491,   491,   491,   556,   556,   557,   558,
     558,   559,   559,   560,   560,   561,   561,   561,   562,   562,
     563,   563,   564,   565,   565,   566,   567,   567,   568,   568,
     569,   569,   570,   570,   491,   491,   491,   491,   571,   571,
     572,   572,   573,   574,   491,   491,   491,   575,   575,   576,
     576,   577,   577,   491,   491,   491,   578,   578,   579,   579,
     580,   580,   580,   580,   580,   580,   580,   491,   491,   491,
     581,   581,   582,   583,   583,   584,   584,   585,   585,   586,
     586,   587,   587,   587,   587,   587,   587,   587,   491,   491,
     491,   588,   588,   589,   589,   590,   590,   590,   590,   590,
     590,   491,   491,   491,   591,   591,   592,   592,   593,   593,
     593,   593,   593,   491,   594,   491,   595,   595,   596,   596,
     596,   597,   598,   598,   598,   598,   599,   599,   491,   491,
     491,   600,   600,   601,   601,   601,   602,   602,   602,   602,
     602,   602,   603,   603,   604,   604,   605,   605,   606,   606,
     607,   607,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   609,   609,
     609,   491,   610,   610,   611,   612,   611,   613,   613,   614,
     614,   614,   615,   616,   615,   617,   617,   618,   618,   618,
     618,   618,   619,   619,   620,   620,   621,   621,   622,   623,
     622,   624,   624,   624,   624,   610,   625,   625,   625,   625,
     491,   626,   626,   626,   491,   628,   627,   629,   629,   630,
     630,   631,   631,   632,   632,   632,   633,   633,   633,   633,
     634,   634,   635,   635,   635,   635,   635,   635,   635,   635,
     491,   636,   637,   637,   637,   638,   638,   638,   638,   491,
     491,   639,   639,   491,   491,   491,   491,   640,   640,   491,
     641,   641,   641,   641,   641,   491,   642,   642,   491,   643,
     644,   644,   643,   643,   645,   645,   645,   645,   645,   645,
     645,   645,   645,   645,   646,   646,   647,   647,   643,   643,
     643,   643,   648,   648,   648,   649,   649,   650,   650,   650,
     650,   650,   650,   650,   650,   650,   650,   650,   650,   650,
     650,   651,   651,   652,   652,   653,   653,   654,   654,   654,
     654,   654,   654,   654,   654,   654,   654,   654,   654,   654,
     654,   654,   654,   654,   654,   655,   655,   656,   650,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   658,   658,   658,   659,   659,   660,   660,   660,
     661,   661,   661,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   663,   663,
     664,   665,   665,   665,   491,   666,   666,   666,   667,   667,
     668,   668,   491,   669,   669,   669,   669,   669,   669,   669,
     669,   670,   670,   671,   671,   672,   672,   672,   672,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   674,
     674,   674,   674,   674,   674,   674,   674,   675,   675,   675,
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
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     491,   676,   676,   676,   676,   491,   677,   677,   678,   678,
     679,   679,   679,   679,   679,   679,   679,   491,   680,   680,
     681,   681,   682,   682,   682,   682,   491,   683,   683,   491,
     491,   491,   684,   685,   685,   686,   686,   686,   686,   686,
     686,   686,   686,   491,   687,   687,   491,   491,   491,   491,
     688,   688,   688,   689,   689
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
       0,     3,     1,     3,     2,     4,     2,     4,     0,     2,
       4,     4,     0,     6,     0,     2,     2,     4,     4,     0,
       2,     1,     3,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     2,     2,     1,     0,     1,
       3,     1,     1,     3,     4,     5,     3,     3,     4,     6,
       9,     3,     0,     5,     1,     0,     5,     3,     5,     6,
       5,     0,     1,     1,     0,     1,     1,     1,     2,     2,
       0,     0,     1,     2,     4,     6,     6,     6,     0,     2,
       0,     1,     3,     3,     1,     8,     2,     2,     2,     0,
       6,     2,     4,     0,     2,     7,     1,     4,     6,     0,
       1,     1,     1,     8,     9,    10,     9,    11,    10,    12,
      11,    13,     9,    11,    10,    12,    11,    12,    12,    14,
       0,     1,     0,     4,     1,     3,     3,     1,     3,     1,
       4,     4,     4,     6,     1,     3,     2,     3,     5,     1,
       3,     0,     2,     2,     3,     3,     1,     1,     1,     1,
       1,     5,     7,     0,     6,     4,     5,     6,     1,     1,
       1,    20,    21,     1,     1,     6,     8,     6,     8,     1,
       1,     1,     1,     1,     1,     1,     6,     8,     0,     0,
       4,     1,     3,     3,     3,     4,     5,     6,    12,    14,
       1,     1,    12,     6,     8,    12,     5,     7,     2,     3,
       2,     2,     2,     4,     1,     1,     1,     1,     6,     8,
       3,     5,     3,     5,     1,     1,     1,     8,    10,     3,
       5,     4,     4,     1,     1,     1,     4,    10,     4,     6,
      12,    14,     8,    10,     8,    10,    11,     1,     1,     1,
       6,     8,     0,     0,     4,     1,     3,     3,     3,     4,
       6,    12,    14,     6,     8,     8,    10,     6,     1,     1,
       1,     4,     6,     4,     6,    13,    13,    15,     6,     8,
       9,     1,     1,     1,     4,     6,     4,     6,    10,    12,
       8,     4,     6,     1,     3,     1,     4,     6,     0,     4,
       4,     2,     0,     4,     7,     4,     1,     3,     1,     1,
       1,    10,    12,     0,     2,     2,     0,     2,     2,     2,
       2,     2,     0,     2,     1,     3,     0,     4,     0,     5,
       5,     7,    10,    10,    17,    12,    19,    11,     6,     8,
       6,     6,     6,     9,     6,     5,     8,     7,     9,     8,
      10,     9,     7,     7,     8,     8,     7,     5,     0,     1,
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
      10,     7,     4,     7,     1,     3,     9,     9,     9,     6,
      11,     8,     0,     1,     2,     1,     3,     5,     7,     4,
       4,     5,     5,     4,     6,    11,    13,    13,    15,     4,
       6,     1,     3,     1,     3,     1,     3,     0,     4,     5,
       4,     5,     4,     5,     4,     5,     4,     4,     3,     3,
       3,     2,     3,     4,     4,     1,     3,     0,     4,     0,
       3,     2,     3,     3,     3,     3,     5,     5,     5,     3,
       5,     2,     7,     5,     7,     5,     2,     3,     2,     3,
       2,     3,     5,     4,     5,     7,     8,     8,     7,     6,
       6,     5,     0,     3,     5,     0,     1,     0,     2,     2,
       0,     4,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     3,
       5,     2,     4,     1,     1,     1,     1,     3,     3,     3,
       3,     5,     5,     1,     1,     1,     4,     3,     1,     3,
       3,     0,     1,     1,     1,     3,     3,     2,     1,     3,
       3,     3,     1,    10,     9,    12,    11,    12,    11,    14,
      13,     0,     1,     1,     3,     2,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     4,     5,     5,     5,     5,     5,     1,     1,     1,
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
       1,     3,     5,     3,     5,     1,     4,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,    13,    15,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     4,
       4,     1,     5,     0,     2,     3,     2,     3,     2,     2,
       2,     1,     2,     1,     3,     5,     4,     4,     6,     6,
       0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   752,     0,   369,     0,   647,     0,
       0,     0,     0,     0,   647,     0,   303,     0,   702,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,   364,   376,   382,   414,   421,   429,   430,   438,   439,
     440,   449,   450,   451,   452,   453,   454,   455,   426,   427,
     428,   484,   485,   486,   487,   494,   495,   496,   503,   504,
     505,   517,   518,   519,   538,   539,   540,   551,   552,   553,
     563,   565,     0,   579,   580,   578,   631,   670,   674,   700,
     710,   719,   725,   728,   884,   892,  1050,  1055,  1067,  1076,
    1081,  1093,     0,     0,     0,     0,     0,   571,     0,     0,
     717,     0,     0,     0,     0,     0,     0,     0,   717,   753,
       0,     0,   717,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   653,   478,   482,   480,   481,     0,     0,   653,     0,
       0,   887,   888,     0,     0,     0,     0,   726,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,   416,   568,     0,     0,  1083,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   754,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   717,   677,
     373,     0,   368,   366,   367,     0,   713,     0,  1053,     0,
     415,  1051,     0,  1077,     0,     0,   715,     0,   379,     0,
    1094,     0,     0,     0,   490,     0,   499,     0,     0,     0,
       0,     0,   649,   650,   651,   652,   648,     0,   479,     0,
     564,     0,     0,     0,     0,   885,   886,     0,     4,     9,
      10,    12,    11,     8,     0,     0,     0,   314,   304,   251,
       0,   252,   253,     0,   305,   306,   307,     0,    13,   254,
     309,   311,   310,   308,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   318,   256,   312,   417,   704,   703,   318,
       0,     0,     0,     0,     0,   319,   321,   335,   322,   335,
     727,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     492,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,   422,
     423,     0,     0,   572,  1080,  1079,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1097,     0,  1096,     0,   502,
     501,  1065,  1061,  1060,  1064,  1062,  1066,  1063,  1056,     0,
    1058,     0,     0,   718,   711,     0,     0,   901,     0,     0,
       0,     0,   901,  1071,  1070,     0,     0,   712,     0,     0,
       0,  1083,   433,     0,   458,     0,     0,     0,     0,     0,
     506,   522,     0,   541,     0,   554,     0,     0,     0,     0,
       0,   371,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   380,   381,   377,     0,     0,   435,     0,   465,
       0,     0,     0,   508,     0,   529,     0,   543,     0,   556,
       0,   654,   483,     0,   654,   891,   890,   889,     0,    78,
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
       0,     0,     0,     0,     0,     0,   317,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   315,     0,     0,     0,     0,     0,   358,
     332,   318,     0,     0,     0,     0,     0,   343,   342,   346,
     350,   347,     0,     0,   344,   334,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   561,   425,   424,     0,   568,     0,     0,   566,     0,
       0,     0,     0,     0,     0,   615,     0,     0,   627,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1091,  1084,     0,     0,  1057,
       0,     0,     0,   864,   873,   832,   832,   832,   832,   832,
     857,   832,   854,     0,   832,   832,   832,   835,   866,   835,
     865,   832,   832,   832,     0,   835,   832,   835,   856,   863,
     855,   874,   875,     0,     0,     0,   858,   720,     0,     0,
       0,     0,     0,     0,   902,   903,     0,     0,     0,     0,
       0,  1074,  1072,  1073,  1075,     0,   583,     0,     0,     0,
       0,     0,  1082,     0,   431,     0,   459,     0,     0,     0,
       0,     0,     0,   523,     0,     0,     0,   881,   679,     0,
     681,   682,     0,   374,     0,   280,     0,   259,   373,   714,
    1054,  1052,  1078,   600,     0,   716,   379,  1095,   436,     0,
     466,     0,   491,   500,     0,     0,     0,     0,     0,     0,
       0,   709,     0,     0,     5,    51,    79,     0,    48,     0,
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
      27,    30,    29,     0,   316,   292,     0,   313,   419,   418,
     318,     0,     0,     0,   323,     0,   358,     0,   363,   331,
       0,   259,   320,   344,   344,     0,   337,     0,   345,     0,
     327,   326,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   572,     0,     0,
       0,     0,     0,     0,   611,     0,   608,   614,   610,     0,
     799,     0,     0,     0,     0,     0,   612,  1098,  1099,  1092,
    1090,  1086,     0,  1088,     0,  1089,     0,     0,  1059,   901,
     901,     0,   861,   837,   843,   840,   837,   837,     0,   837,
     837,   837,   836,   840,   840,   837,   837,   837,     0,   840,
     837,   840,     0,     0,     0,     0,     0,     0,     0,     0,
     905,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   586,     0,     0,     0,     0,     0,
       0,   433,     0,   456,   458,   488,     0,     0,     0,     0,
       0,   520,   522,   542,   555,   882,   883,     0,     0,   797,
     749,   335,   678,     0,   683,   684,   685,   686,   260,     0,
     288,   259,   370,   372,     0,   378,   437,   467,   509,   530,
     544,   557,     0,   634,   656,     0,     0,   633,   634,     0,
     634,     0,    90,     0,   241,     0,     0,     0,     0,    53,
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
     259,     0,     0,   358,   360,   360,   360,     0,   324,   328,
       0,     0,     0,   280,   348,   349,     0,     0,   351,     0,
       0,     0,   445,   447,     0,     0,     0,     0,   473,     0,
       0,     0,     0,   537,     0,     0,   533,   548,     0,     0,
       0,     0,   562,   569,   570,   567,     0,     0,     0,     0,
       0,     0,   799,   799,     0,   623,   622,   628,   799,   617,
       0,     0,   626,  1085,  1087,     0,     0,     0,     0,     0,
     849,   859,   851,   853,   878,     0,   852,   848,   847,   870,
     869,   846,   850,   845,     0,   867,   844,   868,     0,     0,
       0,   722,   877,     0,   721,     0,   906,   908,   907,     0,
     904,     0,     0,   407,     0,     0,     0,     0,     0,   409,
       0,     0,     0,     0,     0,   919,     0,     0,   584,   585,
       0,   592,   583,     0,     0,     0,     0,     0,     0,   432,
       0,   459,     0,     0,     0,     0,     0,   523,     0,   881,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   755,
       0,     0,   680,   699,     0,     0,   695,     0,     0,     0,
       0,   676,   687,   690,     0,     0,  1100,   375,   601,     0,
       0,     0,   665,   655,     0,     0,   634,   672,   634,   673,
      52,   245,     0,   244,     0,     0,     0,    56,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,   101,   103,     0,     0,     0,     0,
       0,   135,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    59,     0,     0,     0,     0,     0,     0,   261,   259,
     420,   325,     0,     0,     0,     0,   333,     0,   705,     0,
       0,   288,   340,   338,     0,     0,   336,   352,     0,   443,
     444,     0,     0,     0,     0,     0,   470,   471,     0,     0,
     477,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   576,   575,   573,     0,
       0,     0,     0,   628,   628,   799,     0,     0,   811,     0,
     816,     0,     0,     0,     0,     0,   629,   820,   801,     0,
     818,   619,   628,   609,   616,   625,   624,     0,     0,   833,
       0,   838,   839,     0,     0,   840,     0,   840,   840,   862,
     876,     0,     0,     0,   913,   916,   915,   917,   914,   909,
     910,   912,   918,   911,     0,     0,     0,     0,     0,     0,
       0,   383,     0,     0,     0,     0,     0,     0,   919,     0,
       0,     0,   587,   591,   589,   588,   590,     0,   596,   586,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     461,   457,   489,   497,     0,     0,     0,     0,     0,   525,
     521,     0,   797,   751,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   734,   797,     0,   880,   694,   692,   693,
     696,   697,   698,     0,     0,     0,   265,   265,   281,   282,
     289,     0,   365,   667,   666,     0,     0,   657,   662,   661,
       0,   659,   637,   671,   242,   246,     0,    54,     0,   141,
     140,     0,   145,     0,     0,   230,   231,   176,   154,   155,
       0,     0,   159,   160,   161,   165,   167,   169,   210,   211,
     212,   213,     0,    98,   107,   109,   105,   111,   113,   115,
     151,     0,     0,   153,   226,   272,   272,   272,   117,     0,
       0,   125,     0,     0,   133,   272,   272,   183,     0,     0,
       0,   195,   196,     0,     0,   199,     0,   202,     0,   207,
       0,    61,    63,    66,    67,    68,    69,     0,     0,     0,
     150,    81,    85,     0,     0,    50,     0,     0,    42,     0,
      43,    35,     0,     0,   270,   261,   359,     0,     0,     0,
     329,     0,     0,     0,  1100,   353,     0,   339,     0,     0,
     446,   448,     0,     0,     0,   474,   514,     0,     0,   512,
     535,     0,     0,   534,     0,   549,     0,     0,     0,   560,
       0,     0,     0,     0,     0,   795,     0,   613,   621,   628,
     800,   630,     0,     0,     0,     0,     0,     0,   821,   802,
     803,   805,   804,   809,     0,     0,     0,     0,   819,   817,
     618,     0,     0,   919,     0,     0,   842,   871,   879,   872,
     860,     0,   723,   384,     0,   919,     0,   400,     0,     0,
       0,     0,   408,     0,   392,     0,     0,     0,     0,     0,
     927,   928,   929,   931,   930,  1049,   934,   935,   936,  1042,
     933,   932,  1037,  1038,  1039,  1040,  1041,  1024,   937,   978,
     969,   974,   919,  1020,  1010,   981,  1013,   956,   963,   960,
     947,  1003,   992,   919,  1000,  1018,   954,   955,  1025,   941,
     948,   996,  1012,  1017,  1014,   975,   953,  1022,   894,   952,
     972,   965,   962,   919,  1011,  1001,   942,   991,  1030,   968,
     982,   964,   983,   967,  1006,   989,   950,   919,   939,  1023,
     945,  1007,   959,   986,   998,   958,   919,   987,   984,   985,
     993,  1005,   995,   961,   966,   990,   979,   980,   997,  1029,
    1002,   971,  1004,   957,  1031,   988,   976,   970,   977,   973,
    1016,   944,   938,  1009,  1015,   949,   951,   940,  1021,   999,
    1019,   994,  1008,   946,   943,  1027,   919,  1028,  1026,  1044,
    1045,  1046,  1047,  1048,  1035,  1036,  1032,  1033,  1034,  1043,
     920,     0,     0,   594,   593,     0,   598,   592,     0,   386,
       0,     0,     0,     0,     0,     0,     0,     0,   460,     0,
       0,     0,     0,     0,   524,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   301,     0,     0,     0,
       0,   730,   748,   756,   799,     0,   689,   691,     0,   266,
     267,     0,   284,   286,     0,     0,     0,  1103,  1101,  1102,
     635,     0,   658,     0,     0,     0,  1100,     0,     0,     0,
     144,   233,   234,   235,   236,   239,   238,   240,   232,   237,
       0,     0,     0,   272,   272,   272,   272,   272,   272,     0,
       0,     0,   276,   276,   276,   272,     0,     0,     0,   272,
       0,     0,     0,   272,   276,   276,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    87,    41,
      37,    39,     0,     0,     0,   280,   270,   361,     0,     0,
       0,     0,   706,   707,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   550,     0,
       0,     0,   577,     0,   602,   773,     0,   771,     0,   603,
       0,   620,     0,     0,     0,     0,     0,     0,   823,     0,
       0,     0,     0,     0,     0,   919,     0,   834,   841,     0,
     919,     0,   388,   401,     0,   410,   411,   412,     0,     0,
       0,     0,     0,   385,   893,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   581,   596,     0,     0,
     394,     0,     0,     0,   434,   463,   464,   462,   498,   507,
     527,   528,   526,     0,   734,     0,     0,     0,     0,   763,
       0,     0,     0,   760,     0,   759,     0,   769,     0,     0,
       0,     0,     0,     0,   729,   798,   688,   265,   265,   283,
     291,   290,     0,     0,   669,   668,   664,   663,     0,   639,
     632,     7,   142,   139,   156,   157,   214,   276,   276,   276,
     276,   276,   276,   216,     0,   152,     0,     0,     0,     0,
       0,   276,   119,     0,     0,   276,   127,     0,     0,   276,
       0,     0,   192,   193,   194,   197,   198,     0,   203,   208,
       0,     0,     0,     0,   265,   268,   271,   288,   280,   357,
       0,   356,   355,     0,     0,   354,     0,     0,     0,     0,
       0,   515,     0,     0,   513,   536,     0,     0,     0,   558,
       0,   574,     0,     0,     0,   607,     0,   796,   813,     0,
     831,   815,     0,     0,     0,   824,   822,   806,   807,   808,
     810,     0,   919,     0,   896,   724,     0,   898,   402,     0,
     396,   393,     0,   400,   921,     0,     0,     0,     0,     0,
     919,     0,   595,     0,     0,   598,   390,     0,     0,     0,
     387,     0,   732,   750,     0,     0,     0,     0,     0,   761,
     762,   302,   757,   736,     0,     0,     0,     0,     0,     0,
       0,   287,   285,  1104,     0,   636,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   274,   273,     0,   100,
     102,   104,     0,   272,     0,     0,     0,   272,     0,     0,
       0,   136,   138,     0,     0,     0,     0,   293,   263,     0,
       0,   262,   294,   288,   362,   330,   708,     0,     0,     0,
       0,     0,   516,     0,     0,     0,     0,     0,   605,     0,
     774,   772,     0,   829,   830,     0,     0,     0,   919,     0,
     895,   897,     0,   398,   413,   389,     0,   926,   925,   922,
     924,   923,     0,     0,   597,     0,   582,   397,   395,     0,
       0,   764,     0,     0,   770,     0,   735,     0,     0,     0,
       0,     0,   742,     0,     0,     0,     0,   660,     0,     0,
     638,   108,   110,   106,   112,   114,   116,   217,     0,   265,
     277,   118,   276,   121,   123,   126,   276,   129,   131,   134,
     200,    75,     0,     0,   269,   265,     0,   299,   258,     0,
       0,   475,   468,     0,   472,   510,     0,   531,     0,     0,
       0,   559,     0,   812,   814,   828,   825,     0,   900,     0,
     402,  1068,   919,     0,   391,     0,     0,   758,     0,   731,
     737,   738,     0,     0,     0,     0,   645,     0,   640,     0,
     642,   643,   275,   278,     0,     0,   272,   272,     0,   272,
     272,     0,     0,   264,   296,   295,     0,   257,     0,     0,
       0,     0,     0,   545,   546,     0,     0,   826,   827,   899,
       0,     0,   404,   399,     0,   599,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   641,     0,   265,   120,   276,
     276,   128,   276,   276,    76,    77,     0,     0,   300,     0,
       0,   469,   511,   532,     0,   775,     0,     0,   403,     0,
    1069,     0,     0,     0,     0,     0,     0,   743,   741,   646,
       0,   279,     0,     0,     0,     0,   298,   297,     0,     0,
     547,   777,     0,   406,   405,     0,     0,     0,     0,   777,
       0,     0,   644,   122,   124,   130,   132,     0,     0,   604,
     776,     0,     0,     0,     0,   765,     0,     0,   744,   739,
       0,     0,     0,   791,     0,     0,   733,     0,   777,   777,
       0,     0,   740,     0,     0,     0,   792,   606,     0,   788,
     790,   789,     0,     0,     0,   767,   766,     0,   745,     0,
       0,   793,   794,   778,   786,   780,     0,   782,   787,   784,
       0,   777,     0,   441,     0,   781,   779,   785,   783,   768,
       0,   442,     0,     0,     0,     0,     0,     0,   746,   747
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,   905,  1377,  1642,  1644,  1640,   906,  1260,   917,
    1643,   907,  1367,  1636,  1368,  1637,   918,  1885,  1886,  1887,
    2245,  2243,  2244,  2246,  2247,  2248,  2255,  2583,  2746,  2747,
    2259,  2587,  2749,  2750,  2263,  1895,  1896,   924,  1574,   566,
      29,    30,   875,  1934,  2465,  2212,  2601,  2285,  2252,  2577,
    2438,  2680,  1230,  1828,  1829,  1546,  1380,  2697,  2757,  2197,
     153,   404,   405,   703,   414,   415,   416,   417,  1075,   726,
     418,   723,  1089,   724,  1085,  1666,  1667,  1074,  1653,  2288,
     419,    31,   123,   225,   521,    32,   534,    33,  2344,  2633,
    2771,  2772,  1488,  1489,    34,    35,  1069,   184,    36,   854,
      37,    38,  1671,    39,    40,    41,   856,  1203,  1789,  1790,
      42,    43,  1678,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,   863,  1211,  1798,  1799,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   453,    72,   758,  1697,    73,
    1194,  1501,  1778,  2164,  2166,  2366,    74,    75,  1721,    76,
    1552,  2413,  2226,  2568,  2670,  2786,  2565,   141,   257,   900,
    1245,  1556,  2224,  1840,  1243,    77,    78,   219,   519,   869,
     872,  1227,  1541,  1542,  1543,    79,   156,  1081,    80,   194,
      81,    82,    83,  2404,  2201,  2857,  2858,   121,  1528,  1529,
    2318,  2316,  2806,  2849,  1976,  1530,  1437,  1152,  1163,  1450,
    1451,   827,  1455,  1220,  1221,    84,   151,   152,    85,   833,
     834,   835,  1754,  1769,  2160,    86,    87,   479,   480,    88,
     495,   845,    89,    90,   467,   786,    91,  1832,  2219
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2631
static const yytype_int16 yypact[] =
{
   13800,   349,  -112,   183, 13757,   245, -2631, 13712, -2631,   298,
     397,   759,   162,   252, -2631,    68, -2631,   336,   792,   129,
     621,   264,   242,   380,   376,   -84,   320,   492,   449,   221,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631,   849, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631,   859,   871,   895,   505,   941, -2631,   355,   712,
     797,   957,   801,   963,   681,   971,  1006,  1024,   797, -2631,
     794,   906,   797,   662,   677,   184,   188,  1061,   705,   707,
     715,   826, -2631,   579,   235,   236,  1080,   289,   409,  1085,
     520,   552,   554,   725,   741,   557,   567,  1096,   761,   785,
     802,   793,   937,   679, -2631, -2631,  1139,  1158,   793,   125,
     110,   724, -2631,  6830,  1171,   831,    29, -2631,  1193,   -69,
    1074,  1082,  1105,  1084,  1113,   812,  1251,  1265,  1280,  1121,
     842,  1131,  1156,  1166,  1291,  1179,  1213,  1273,  -114,  1215,
    1367,  1383, -2631, 13800,   151,  -149,   309,   935,   176,  1409,
     837,    34,   634,  1133,  1418,  1378,  1444,  1010,  1277,   569,
    1292,  1091,   903,  1394,  1561, -2631,   685,  1590,   682,   686,
    1461,  1342,  1422,  1350,  1648,   687,   688,   689,   797,  1216,
    1282,  1677, -2631, -2631, -2631,   -90, -2631,  1406, -2631,  1463,
   -2631, -2631,  1471, -2631,  1475,  1576, -2631,  1500,   509,  1504,
   -2631,  1516,   692,   694, -2631,  1534, -2631,  1547,   699,   703,
     708,   709, -2631, -2631, -2631, -2631, -2631,  1830, -2631,  1833,
   -2631,  1610,  1853, 10750, 10750, -2631, -2631,  1849,   423, -2631,
   -2631, -2631, -2631,  1852, 10750, 10750, 10750, -2631, -2631, -2631,
    8006, -2631, -2631,  1417, -2631, -2631, -2631,  1419, -2631, -2631,
   -2631, -2631, -2631, -2631,  1827,  1420,  1421,  1423,  1424,  1426,
    1428,  1429,  1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,
    1438,  1442,  1443,  1445,  1447,  1448,  1449,  1450,  1457,  1459,
    1462,  1467,  1469,  1472,  1473,  1479,  1480,  1481,  1482,  1483,
    1484,  1485,  1486,  1487,  1490,  1491,  1492,  1493,  1494,  1495,
    1496,  1497,  1501,  1505,  1506,  1512,  1513,  1515,  1519,  1520,
   -2631, -2631,  1523,  1527,  1528,  1532,  1533,  1535,  1536,  1537,
    1538,  1539,  1540,  1541,  1542,  1543,  1545,  1546,  1548,  1550,
    1551,  1552,  1553,  1557,  1559,  1560,  1563,  1568,  1569,  1571,
    1578,  1581,  1583,  1591,  1592,  1593,  1594,  1595,  1597,  1599,
    1602,  1609,  1618,  1619,  1620,  1621,  1623,  1626,  1628,  1630,
    1631,  1632, 10750, 14628,   -89, -2631,  1416,   905,   908,    63,
    1633,  1865,  1634,    22,  -160,   860, -2631,  1834, -2631,  1834,
   -2631,  1887,  1748,  1906,  1914,  1943,  1972,  1977,  2006,  1727,
   -2631,  1660,  2079,  2055,  2082,  2091,  2094,  1832,  2096,  2097,
    2098,  1947,  1949,  2107,  2112,  2113, -2631,  2064,  2065, -2631,
   -2631,  2075,  2117,    90, -2631, -2631,   808,   144,   540,    45,
     561,   596,   789,  1698,  2051,  1846,  1879,   218,   855, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,   591,
   -2631,  2122,  2123, -2631, -2631, 14239,  1930,   187,  2125,  1932,
    1851,  2133,   187, -2631, -2631,   -49,   127, -2631,  1940,   776,
    1857, -2631,  1862,  1859, -2631,  1860,  1724,  2141,  1721,  2145,
    1873, -2631,  1870, -2631,  1872, -2631,  1876,  2155,  2156,   442,
    2134, -2631,  -133,  -195,    29,  2158,  2160,  2163,  2164,  2169,
     147,  2170, -2631, -2631, -2631,  2171,  2180,  2127,  1922,  2130,
    1924,  2203,  2204, -2631,  1927, -2631,  1928, -2631,  1929, -2631,
    1931,  -162, -2631,  2210,  -161, 14776, 14776, -2631,  2211, 10750,
   10750,  1303,  1303,  2179, 10750, 14263,   576,  2218,  2219,  1774,
   -2631, 10750,  7222, 10750, 10750, 10750, 10750, 10750, 10750, 10750,
   10750, 10750,  1777, 10750, 10750, 10750, 10750, 10750, 10750, 10750,
   10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750,  1778, 10750,
   10750, 10750,  1779, 10750, 10750, 10750, 10750, 10750, 10750,  8398,
   10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750,
    1782,  1783,  1784,  1811,  1813, 10750, 10750,  1814,  1815,  1816,
   10750, 10750,  2222,  1817,  1819, 10750, 10750, 10750, 10750, 10750,
   10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750,
   10750, 10750, 10750, 10750, 10750, 10750, 10750,  1820, 10750, 10750,
   10750,  1821, 10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750,
   10750, 10750,  1822, 10750, 10750, 10893, -2631, 10750, 10750, 10750,
   10750, 10750,    47,  1794,  1073, 10750,  7614, 10750, 10750, 10750,
   10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750, 10750,
   10750, 10750,  2267, -2631,    29,  2268, 10750,  2269,  2270,   436,
   -2631,   243, 10750,  1854,   598,  2296,    29, -2631, -2631, -2631,
     669, -2631,    29,  2139,  2109, -2631,  2300,  2320,  2053,  2322,
    1925,  1926,  2052,  2058,  2056,  2328,  2059,  2329,  2061,  1886,
    2066,  2062,  2069,  2072,  2076,  2074,  2330,  2346,  2356,  2106,
    2105,  2201, -2631, -2631,  2376,  2108,  2340,  2341, -2631,  2381,
    2383,  2384,  2385,  2386,  2387, -2631,  2388,  2395, -2631,  2397,
    2399, 14239,  2400,  2159,  2405,  2407,  2391,  2409,  2408,  2411,
    2041,  2416,    52,   795,  2417, -2631, -2631,  2206,  2207, -2631,
     211,  1979,  1980, -2631, -2631,  1981,  1981,  1981,  1981,  1981,
   -2631,  1981, -2631,  1982,  1981,  1981,  1981,  2366, -2631,  2366,
   -2631,  1981,  1981,  1981,  1985,  2366,  1981,  2366, -2631, -2631,
   -2631, -2631, -2631,  1986,  1987,  1988, -2631,   852,  2432, 14239,
    2433,  2434,  2435,  1994,  1996, -2631,  -118,  2439,  2442,  2249,
    2007, -2631, -2631, -2631, -2631,  2256,  2410,  2060,  2457,  2271,
    2183,  2466,   218,  2024, -2631,  2469,  2196,  2471,  2472,  2336,
    2473,  2281,  2033,  2205,  2477,  2478,  2480,   -99, -2631,   605,
   -2631, -2631,    70, -2631, 10750,  2288,    29,  -159,  1282, -2631,
   -2631, -2631, -2631, -2631,  2088, -2631,   509, -2631, -2631,  2484,
   -2631,  2485, -2631, -2631,  2486,  2488,  2490,  2491,  2495,  2496,
     524, -2631,  2495,   527, -2631,   246, -2631,  2054, 14776,  2264,
     666, -2631, 10750, 10750, -2631,  2057, -2631, 10750,  2259,   145,
   -2631, -2631, -2631, 10934,  8790,  1529,  1556,  1584, 11179, 11218,
   11245, 11273, 11300, 11331, -2631,  1645,  1780,  2166,  2223, 11364,
    2342,  6931,  6959, 11391, 11418, 11445,   594,  7006, 11472,  7294,
   -2631, 11499, 11526, 11553, -2631, 14676,  7321,  7362,  7406,  7686,
    1614,  2063, 11580, 11609, 11648, 11675, 11703, 11730, 11761, 11794,
    7725,  7752,  7801, -2631, -2631, -2631, -2631, -2631, 11821,  7837,
    2172,  2174,  2177,   624,   716,  2085,  2184,  2185,  8043, 11848,
   11875, 11902, 11929, 11956, 11983, 12010, 12039,  8078,  8117,  8191,
    8435,  8482,  8509,  8574,  8622,   798, 12078, 12105, 12133,  8827,
   -2631,   893, 12160,  8874, -2631,  8922,  8966,  9013,  9219, 12191,
   12224, 12251,  9278,  9305,  9366, -2631, 12278,  9405, -2631,  7058,
    1357,  7437,  7651,  7651, -2631,   118, -2631, -2631,  2278, 10750,
   10750,  2087, 10750, 14710,  2090,  2092,  2104, 10750,  2651,  1248,
    1248,  1793,  1684,  1202,  1000,  1000,  1081,  1081,  1081,  1081,
    1033,  2179,  2179,    73, -2631,   -91,  2373, -2631, -2631,  2095,
     243,  2392,  2393,  2394, -2631,  2259,   436, 12305, -2631, -2631,
      25,  -122,   860,  2109,  2109,  2377,  2362,    29, -2631,  2398,
   -2631, -2631,  2114,  2291,  2559,  2560,  2154,  2121,  2161,  2165,
    2565, -2631,  2138,  2437,  2128,  2143,  2573,  2574,  2142,  2576,
    2586,  2321,  2323,  2147,  2431,  2592,  1045,    90,  2404,  2406,
     495, 14239, 14239,  2602, -2631,  2390, -2631, -2631, -2631,  2396,
    2575, 14239,  2607,  2368,  2370,  2612, -2631, -2631, -2631, -2631,
   -2631, -2631,  2614, -2631,  2615, -2631,  2618,  2619, -2631,   187,
     187,  2620, -2631, -2631, -2631, -2631, -2631, -2631,  2613, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,  2613, -2631,
   -2631, -2631,  2621,  2622,  2627,  2430,  2175,  2187, 10750,  2188,
    2575, 14239, 14239, 14239,  2422,   187,  -187,    69,  -115,  2440,
    2633,   825,   177,   872,  2499,  2640,   -83,  2641,  2642,  2449,
    2251,  1862,  2208, -2631, -2631, -2631,  2234,  2552,  2228,  2235,
    2212, -2631, -2631, -2631, -2631, -2631, -2631,  2567,  2659,   638,
   -2631,  1834, -2631,  2664, -2631, -2631, -2631,   112, 14776,  2605,
    2507,  -159, -2631, -2631,  2666, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631,  2668,  -139, -2631,   659,  2243, -2631,  -139,  2243,
    2492, 10750, -2631, 10750, -2631, 10750, 14521,  8232,  2599,  9611,
    2250,  2245, 10750, 10750, -2631, 10750, 14427,  2540,  2540, 10750,
   -2631, -2631, -2631, -2631, -2631, -2631, 10750, 10750, 10750, 10750,
   -2631, 10750, 10750, 10750, -2631, -2631, -2631, -2631, 10750, 10750,
   -2631, 10750, -2631, -2631, -2631, 14239, 14239, 10750, 10750, 10750,
    2699, -2631,  2354,  2355,  2359,  2371,  2372,  2374, -2631, -2631,
   -2631, 10750, 10750, 10750, -2631, 10750,  2277,  2279,  2280,  2378,
    2722,  2379,  2726,  2382,  2287,  2289, 10750, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, 10750, 10750, 10750, 10750, 10750,
   10750, 10750, 10750, -2631, 10750, -2631, -2631, -2631, 10750, -2631,
   10750, -2631, 10750, 10750, 10750, 10750, 10750, -2631, -2631, -2631,
   10750, 10750, 10750, -2631, 10750, -2631, -2631, 10750,  2259,  7651,
    7651,  2493, 14743, 10750, -2631, 10750, 10750,  2259, -2631,  2324,
    2463,    29,  2735,   436,  2603,  2603,  2603,  2292, -2631,   796,
   10750,  2739,  2742,  2288, -2631, -2631,    29, 10750,   395,    29,
     134,  2301,  2343,  2569,  2734,   142,  2737,  2751,  2582,  2745,
    2759,  2765,  2750, -2631,   131,  2767,  2594,   -32,  2331,  2332,
    2770,  2755, -2631, -2631, -2631, -2631,  2773,  2773,  2333,  2616,
    2617,  2337,  2575,  2575, 14239, -2631, -2631,   892,  2575, -2631,
    2779,  2781, -2631, -2631, -2631,  2563,  2566,  2345,  2347,   672,
     674,  1049,   674,   674, -2631,   693,   674,   674,   674,  1049,
    1049,   674,   674,   674,   700,  1049,   674,  1049,  2348,  2352,
    2353,  2709, -2631, 10750, 14776,    69,  2575,  2575,  2575,  1622,
   -2631,  2364,  2365, -2631,  2367,  2412,  2413,  2414,   702, -2631,
    2521,    69,  2790,   -78,  2741, -2631,  2662,  2424, -2631, -2631,
     526,  2578,  2410,  2537,    69,   -74,  2628,  2815,  2808, -2631,
     728,  2196,  2838,  2840,  2847,  2837,   746,  2205,  2858,  -104,
    2859,  2418,  2701,   422,  2420,  2426,  2704,  2427,   718, -2631,
    2860,  2259, -2631, -2631,  2866,    48,  2868,  2871,  2872,  2443,
     925, -2631,  2429, -2631,  1011, 10750,  2667, -2631, -2631,  9182,
    2714,  2878, -2631, -2631,  2887,  9574,  -124, -2631,  -124, -2631,
   -2631, 14776, 14554, -2631, 10750,  2447, 10750, -2631, -2631, 10861,
     968, 12332, 10750, 10750,  2448,  2451, 12359, 12386, 12413,  9670,
    9709, 12440, 12469, 12508, 12535, 12563, 12590,    32,    33, 12621,
   12654,  9750,  2455,  2450,  2458,  2460,  2465,  2467,  2468,  1285,
    9797, 12681, 12708, -2631, -2631, -2631,  2470,   721,  2474,   723,
    2475, -2631, -2631, 12735, 10003, 10062, 10101, 12762, 12789, 10150,
   10189,  1332,  1412,  1439, 12816, 12843, 12870, 12899, 12938, 12965,
   10395, 10454, 10493, 12993,  2476,  2479, 10750,  2259, 10750,  2286,
    2259, 14776,  2259,  2481,  2259,  2487,  2489,  2843,  2771,  -159,
   -2631, -2631,  2752,  2494,  2498,  2500, -2631,  2914, 14776,  2898,
      31,  2507, -2631, 14776, 10750,  2501, -2631, -2631,   395, -2631,
   -2631,  2497,   134,  2915,  2917,  2920, -2631, -2631,  2505,  2921,
   -2631,  2922,  2928,  2661,  2506,  2929,  2932,  2934,  2509,  2944,
    2861,  2953,  2955,  2958,  2515,  2964, -2631,  2522,   -95, 10750,
    2523,  2526,  2970,   892,   892,  2575,  2782,  2971,  2530,  2531,
    2532,  2927,  2977,  2535,  2978,   228, -2631, -2631, -2631,  2819,
    2820, -2631,   892, -2631, -2631, -2631, -2631,  2772,   899, -2631,
    2981, -2631, -2631,  2747,  2984, -2631,  2985, -2631, -2631, -2631,
   -2631,  2544, 13020,   729, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631,   907,    69,  2988,  2989,  2990,  2997,
    2999, -2631,  3001,  2564,   731,  2577,   405,    69, -2631,  1894,
    2888,  3002, -2631, -2631, -2631, -2631, -2631,  3019,  2758,  2499,
    2579,   758,  2760,    69,  3023,   -73,  3025,  3007,  3010,   765,
   -2631, -2631, -2631, -2631,  2931,  3029,  3014,  3015,   767, -2631,
   -2631,  2896,   638, -2631,   588, 10750,  2591,  2593,  2597,  3035,
    3035,  2598,  2970,    67,   638, 14239, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631,   925,   769,   925,    24,   745,  2600, -2631,
    1468,   777, -2631, -2631, 14776,  2788,  3020, -2631, -2631, 14776,
     778, -2631,  2850, -2631, -2631, 14776,  3045, -2631, 10750, -2631,
   -2631, 10750, -2631, 13051, 14236, -2631, -2631, -2631, -2631, -2631,
   10750, 10750, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, 10750, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, 10750, 10750, -2631, -2631,  2705,  2705,  2705, -2631,  2708,
    1151, -2631,  2712,  1188, -2631,  2705,  2705, -2631, 10750, 10750,
   10750, -2631, -2631, 10750, 10750, -2631, 10750, -2631, 10750, -2631,
   10750, -2631, -2631, -2631, -2631, -2631, -2631, 10750, 10750, 10750,
   -2631, -2631, -2631,  2608,  2623,  2286,  2624,  2625, -2631,  2629,
   -2631, -2631,  2969,  3003,  2926,  2771, -2631,  3072,  3072,  3072,
    2631, 10750, 10750,  3075,  2667, 14776,  3035, -2631,   134,  2632,
   -2631, -2631,  3067,   142,  3069, -2631,  3024,  2649,  3080,  2653,
   -2631,  2907,  3084, -2631,  3085, -2631,  2643,  2645,  3086, -2631,
    3091,  3090, 13084,  3093,  3097, -2631,   800, -2631, -2631,   892,
   -2631, -2631,  3096, 10750,  3098,  3051,    42, 10750, -2631, -2631,
   -2631, -2631, -2631, -2631,  2660,  2665,  2673, 10750, -2631, -2631,
   -2631,  1622,  3052, -2631,  2674,  3110, -2631,  1049, -2631,  1049,
    1049, 10750, -2631, -2631,  3064, -2631,   814,  3123,  2682,  2695,
    2698,  2710, -2631,    69, -2631,    69,  2706,  2713,   816,  2389,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631,  2943,  3021, -2631,  2715,  2716,  2889,  2578,    69, -2631,
    2718,   953,  2719,  2899,    69,  2724,  3164,  3169, -2631,   728,
    3170,  2728,  3171,  3173, -2631,   746,  2908,   959,  2732,  3016,
    3018,  2744, 13111,  3093,  3035,  3035, -2631,   962,   970,  3097,
    1029,    13, -2631, -2631,  2575,  1058, -2631, -2631,  3187, -2631,
   -2631,  3191, -2631, -2631,  1011, 10750, 10750, -2631, -2631,  2748,
   -2631,  9966, -2631, 10358,  2749,  3109,  2667,  2756, 13138, 13165,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   13192, 13219, 13246,  2705,  2705,  2705,  2705,  2705,  2705,  1502,
   13273,  3136,  3009,  3009,  3009,  2705,  2766,  2768,  2769,  2705,
    2774,  2775,  2776,  2705,  3009,  3009, 13300, 13329, 13368, 13395,
   13423, 10542, 13450, 13481, 10581, 10787, 10834, -2631, -2631, -2631,
   -2631, -2631,  2792, 10750, 10750,  2288,  2926, -2631,  1060,  1062,
    1174,  3210, 14776, 14776,  3194, -2631,  1206,  2777,   134,  3053,
    2778,  3054,  3214,  3201,  2780,  3219,  3222,  2785, -2631,  3225,
    3230,  1235, -2631,  3192,  3218, -2631,  1238, -2631,  1242, -2631,
    3234, -2631,  1244, 13514,  1246,  2793,  2795,  3074, -2631, 13541,
    2798,  2799,  2800, 13568,   955, -2631,  2690, -2631, -2631, 13595,
   -2631,  2991, -2631, -2631,  2801, -2631, -2631, -2631,  3247,  1249,
    1252,    69,  3251, -2631, -2631,  3292,  3593,  3894,  4195,  4496,
    4797,  3195,  3138,  3255, 10750,  3181, -2631,  2758,  1254,    69,
   -2631,    69,  2814,  1256, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631,  3127,    67, 10750,  2818,  2823,  2970, -2631,
    1258,  1274,  1276, -2631,  3267, -2631,  1278, -2631,   225,  2825,
    3270,  3211,   451,  3212, -2631,  1026, -2631,   745,   745, -2631,
   14776, 14776,  3273,  3274, -2631, 14776, -2631, 14776,  9574,  2832,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631,  3009,  3009,  3009,
    3009,  3009,  3009, -2631, 10750, -2631,  3276,  3217,  2834,  2835,
    2836,  3009, -2631,  2935,  2936,  3009, -2631,  2937,  2938,  3009,
    2842,  2844, -2631, -2631, -2631, -2631, -2631, 10750, -2631, -2631,
    3279,  3285,  3287,  3288, 14581,   -55, 14776,  2507,  2288, -2631,
    3291, -2631, -2631,  2854, 10750, -2631,   134,  2855,  3286,   142,
    3303, -2631,  3301,  3307, -2631, -2631,  3320,  2877,  2879, -2631,
    3322, -2631,  3038,  3121,  3326, -2631,  3327, -2631, -2631,  3328,
    1182, -2631,  3329, 10750, 10750, -2631, -2631, -2631, -2631, -2631,
   -2631,  3271, -2631,  5098, -2631, -2631,  5399, -2631,  3058,  2890,
   -2631, -2631,  1283,  3123, -2631,  3259,  3207,  3183,  3174,  3065,
   -2631,  3128, -2631, 13622,  2901,  2889, -2631,  1287,  1290,    69,
   -2631,  2902,    16, -2631, 13649,  3093,  3097,  1293,  3137, -2631,
   -2631, -2631, -2631, -2631,  3344,  3347,   226,   -42,  2940,  2941,
    3153, -2631, -2631, -2631,  3339,  2919,  1295,  3360,  3272,  2924,
    2925,  2930,  2933,  2939,  2942, 13676, -2631,  2946,  3372, -2631,
   -2631, -2631,  2945,  2705,  2949,  2950,  2954,  2705,  2951,  2956,
    2957, -2631, -2631, 13703,  2960,  2965,  2967, -2631, -2631,  3162,
   10750, -2631,  3238,  2507, -2631, -2631, 14776,  2972,   134,  3375,
    1301,  3377, -2631,  1311,  1313,  3378,  3379,  2975, -2631,  3381,
   -2631, -2631,  2980, -2631, -2631,  2983, 13730, 13759, -2631,  5700,
   -2631, -2631,  2966, -2631, -2631, -2631,  2996, -2631, -2631, -2631,
   -2631, -2631,  6001,  3325, -2631, 10750, -2631, -2631, -2631,  1315,
    3382, -2631,  1320,  1322, -2631,  3387, -2631,  3006,  3388,  3400,
    2979,  3000, -2631,  3439,  3017, 10750,  3457, -2631,  1324,    -8,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,  3458,   745,
    3022, -2631,  3009, -2631, -2631, -2631,  3009, -2631, -2631, -2631,
   -2631, -2631,  3460,  3461, -2631, 14581,   -46,  3308, -2631,   134,
    3026, -2631, -2631,   142, -2631, -2631,  3462, -2631,  3464,  3028,
    1328, -2631,  3030, -2631, -2631,  1720, -2631,  6302, -2631,  3459,
    3058, -2631, -2631, 13798, -2631,  3031,  3265, -2631,  1338, -2631,
   -2631, -2631,  3474,  3476,  3477,  3480, 14776,  3471, -2631,  3489,
   -2631, -2631, -2631, -2631,  3492,  3033,  2705,  2705,  3049,  2705,
    2705,  3050,  3057, -2631,  3269,  3275,  3035, -2631,  3060,   134,
    3066,  3068,  3070, -2631, -2631,  3494,  3511, -2631, -2631, -2631,
    3496,  1339, -2631, -2631,  6603, -2631,  3277,  3515,  3516,  3511,
    3073,  3076,  3077,  3078, 10750, -2631,  3281,   745, -2631,  3009,
    3009, -2631,  3009,  3009, -2631, -2631,  3346,  3348,  3079,   134,
    3081, -2631, -2631, -2631,  3083, -2631,  1384,  3529, -2631,  3459,
   -2631,  3089,  1390,  3092,  1391,  3094,  3310, -2631, -2631, 14776,
    3274, -2631,  3095,  3099,  3100,  3101, -2631, -2631,  3088,   134,
   -2631, -2631,  3534, -2631, -2631,  3544,  3548,  3511,  3511, -2631,
    3331,  3550,  2919, -2631, -2631, -2631, -2631,   134,  3108,   580,
   -2631,  3113,  3111,  1393,  1395,   657,  3558,  1398, -2631, -2631,
    3116,   134,   100,  3414,    -6,   306, -2631,  3511, -2631, -2631,
    3473,  3300, -2631,  3331,   134,  3124, -2631, -2631,   102, -2631,
   -2631, -2631,   593,   643,  1400,   657,   657,  3401, -2631,  3129,
     134, -2631, -2631, -2631, -2631, -2631,   668, -2631, -2631, -2631,
     670, -2631,  3324, -2631,  3130, -2631, -2631, -2631, -2631,   657,
     197, -2631,  3383,  3384,  3391,  3392,  3573,  3574, -2631, -2631
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2631,  3402,  -153, -2631, -2631, -2631, -2631, -1230,  2018, -2631,
    2213, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,  2318,  3027,
   -2631,  -351,  -861,  1652, -2631, -1823, -2631,  1302, -1869, -2631,
   -2111, -2631, -1392, -2631,  1376, -1652, -2631, -2631, -2631, -1807,
   -2631, -2631,  2885,  -398,  -405,  2886,  -692, -2631, -2631,  -417,
   -2631, -2631,   766, -2631, -2631, -2631,  1936, -1033,   466,   -85,
   -2631, -2631, -2631,  3373,  2717, -2631,  2707, -2631,  1083,   887,
   -2631,   799, -1469, -2631, -2631, -2631, -2631, -2631, -2631,  2423,
   -2631, -2631, -1605, -2631, -2631, -2631,  2421,  2101, -2631,  1451,
   -2631, -2631, -1929, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631, -2631,
   -2631,  2415,  2111, -2631,  1441, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -2631, -2631,  2874, -2631,  2514,  2209, -2631,
    2132,  1856,  1465, -2631,  1270,  1103, -2631, -2631, -1578, -2631,
   -1196, -2631, -2631, -2631, -2631, -2631,   819,   573,  3493,  3103,
   -2631,  2401, -2631,  1222,  2740, -2631, -2631, -2631, -2631, -2631,
   -2631, -2631, -2631, -1484,  1823, -2631, -2631, -2631, -2631,   468,
   -2631, -2631, -2631, -2631,  1261, -2631,   773, -2631,  1847,  1837,
   -2166, -2162, -2630, -1821, -1799, -2631, -1418,   454,   248,   238,
   -1135,  -766,  2504, -1509, -2631, -2631, -2631,  3393, -2631,  -480,
   -2631,  2483,  1657, -1761, -2631, -2631, -2631, -2631,  2875, -2631,
   -2631, -2631, -2631, -2631,  3163, -2631, -2631, -1885, -2631
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -882
static const yytype_int16 yytable[] =
{
     403,  1661,   727,  2198,  2213,  1130,  1743,  2029,   714,  1944,
    1803,   709,   840,  2200,  1703,  1704,  1232,  2253,  2254,  1690,
    1722,  1560,  1764,   173,  2300,   409,  2264,  2265,  1459,  1460,
    1086,  2390,   409,  2396,  1465,  1781,  1467,   471,   472,   473,
     474,   475,   476,  1388,  2208,  1390,   524,   704,   765,  1379,
    1215,  1942,  1557,  1034,  1559,  1215,  1824,  1141,   841,  2295,
    1550,  2398,   713,  1180,  2398,  1035,   676,  1949,  1176,  1176,
     705,   876,  1483,  2209,  1224,  1550,   149,   441,   898,   902,
     715,  1481,  2740,   677,   678,   679,   680,   681,   682,   683,
     421,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   842,   701,
     555,   556,  1216,   265,   702,   874,   766,  1216,  -881,   877,
    2326,   561,   562,   563,  1365,  1977,  1978,   565,   451,   767,
     846,  2879,   157,  -373,   263,  1818,  2210,  1634,  1669,  2296,
      97,   874,  2439,  2440,  2000,   264,  1676,   761,  1186,  2814,
     883,  1490,   874,  2450,  2451,   677,   678,   679,   680,   681,
     682,   683,  2660,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
    1496,   701,  1971,  1503,  2754,  2399,    98,   210,  1766,   410,
     829,   212,  1782,  2173,  2880,   411,   410,  2876,   756,  1533,
    2891,  2912,   411,   830,  1482,   447,   448,  2853,  2854,   843,
    2400,  1534,  2755,  2400,   471,   472,   473,   474,   475,   476,
    1393,  1215,  2599,   266,   158,   449,  2661,   477,   762,  2881,
    2553,   465,  1989,  1990,  1991,  1992,   780,  2884,   226,   228,
    1036,  2401,  2336,  2327,  2401,  2554,   676,  1535,   122,   675,
    2741,  2892,  1217,   525,  2341,  1536,   677,   678,   679,   680,
     681,   682,   683,    16,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,  1262,   701,  1216,   899,   899,  2016,  1979,   716,   716,
    2402,  2355,   231,  2402,   702,   150,   452,  1819,  2028,  1065,
    1993,   142,  2356,  2328,  2202,  1537,  1225,  1226,  -881,  1551,
    1686,  1366,   520,  1076,  2171,  -373,  2569,  2570,  2571,  2572,
    2573,  2574,  2357,   174,  1841,   442,  1392,  1670,  1187,  1142,
    2582,  1491,   422,  2658,  2586,  1677,  2358,   831,  2590,  2205,
     211,  2420,  1802,  2297,   213,  2359,  1218,  1219,   757,   844,
    1651,   175,   176,  1970,  1538,  1432,  1433,   716,   525,   706,
    1842,   450,  1843,  1504,  2403,  1438,  1037,  2403,  1767,  2877,
    1547,   162,  1783,  2174,  2427,  2428,  2429,  2430,  2431,  2432,
    2653,  2913,   832,  2652,   466,  2360,  2441,  2391,  2392,  1539,
    2445,   227,   229,  2600,  2449,  1398,  1484,  1485,  1486,  1487,
     143,  2321,   781,   412,   477,  1687,  1923,   908,  1691,   454,
     412,   909,   233,  2882,   146,  1476,  1477,  1478,   919,   923,
     925,   926,   927,   928,   929,   930,   931,   932,   933,   455,
     935,   936,   937,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   232,   951,   952,   953,   182,
     955,   956,   957,   958,   959,   960,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   768,   413,  2211,
    1391,  1231,   978,   979,  2659,   413,  1943,   983,   984,  1868,
    1869,   478,   988,   989,   990,   991,   992,   993,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,   147,  1011,  1012,  1013,   708,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1648,
    1026,  1027,  1378,   236,  1029,  1030,  1031,  1032,  1033,  1587,
    1588,   847,  1043,  1048,  1049,  1050,  1051,  1052,  1053,  1054,
    1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1247,
    2610,   884,  1250,   403,  2349,   238,  2350,   240,  1540,  1077,
     244,  1994,  1995,  1996,  2883,   234,  1772,  1261,    92,  1071,
     246,  2745,   489,  1428,  2513,  2748,   204,  1807,   870,  2516,
     207,  1497,   220,   532,  2561,  2562,  1808,   148,   154,  2547,
    1072,   155,  1664,  1263,   782,   783,   784,   785,  2862,   771,
    2007,    93,  2009,  2010,   677,   678,   679,   680,   681,   682,
     683,   763,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,  1429,
     701,   169,   769,  1773,   677,   678,   679,   680,   681,   682,
     683,  2598,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   167,
     701,  1665,   163,   164,   165,   183,  2188,  2893,  1705,  1447,
    1448,   166,  1383,  2026,  1997,  2870,   237,  2863,  2822,  2823,
     772,  2824,  2825,  1774,   198,   502,   517,   871,   498,   504,
     511,   513,   515,  2477,  1251,   537,  1430,   539,   170,  2368,
     911,   912,   543,  1073,  1662,  2373,   545,  1668,   239,  1520,
     241,   547,   549,   245,  2682,   221,  1521,  2897,  2686,   533,
      94,  1228,  2189,   247,  1387,   490,   677,   678,   679,   680,
     681,   682,   683,   222,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,  2629,   701,    95,  2863,   223,  1431,   764,   177,  1256,
    1257,   178,   144,  2864,  1259,    16,   199,  1775,    16,  2642,
     499,  1266,  1522,   481,  2760,    96,  1523,  2865,   770,   849,
    2217,  2905,   224,  2907,  1776,  2894,  2405,   145,  1935,  2190,
    1254,  1255,   773,  1524,  2209,  1246,  2027,   168,  1249,  -335,
    1143,   191,  1525,  2895,  1531,  2218,   171,   172,   677,   678,
     679,   680,   681,   682,   683,  2602,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,  2896,   701,  2898,   482,   200,   503,  1526,
    2864,   500,   505,   512,   514,   516,  1083,   725,   538,  2191,
     540,   913,   185,  2899,  2865,   544,  2743,  2210,  1144,   546,
     774,  2906,   186,  2908,   548,   550,  2558,  2717,   558,   559,
    1175,  2607,  2753,   775,   187,  2543,  1494,  2789,  2790,   759,
    2792,  2793,  2522,  2900,  1084,  1495,  1369,  1370,  1176,  1372,
     179,   180,   760,  2467,   675,  -647,   252,  2559,   188,  1527,
    2537,   189,  2538,   677,   678,   679,   680,   681,   682,   683,
    1706,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   192,   701,
    1177,  1707,   850,  1731,   252,   181,   717,   469,  -647,   253,
    1708,   913,   493,  1709,   190,  1710,  -647,   254,  1711,  2798,
    2002,  2698,   255,   193,  1732,   787,   196,   470,  2014,  2003,
     195,  2774,   494,  1712,  2821,  1178,   197,  2015,  -647,   256,
    1713,  1714,  1657,   456,   201,   788,  1649,   253,   677,   678,
     679,   680,   681,   682,   683,   407,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,  2700,   701,  1715,  2511,   408,  -651,   202,
     457,  -648,  1533,   718,  1826,  2512,  1827,  1635,  2855,   159,
     160,   161,  1716,  -341,  1534,  1474,  1646,   203,   694,   695,
     696,   697,   698,   699,   700,   458,   701,   719,   789,   790,
     205,  1287,  1288,   459,  1706,  1079,   716,  2885,  2886,  2204,
     720,  -651,  1222,  1223,  -648,   460,  1717,  1164,   208,  -651,
    1535,   206,  -648,  1169,   214,  1171,   699,   700,  1536,   701,
    2649,  1319,  1320,   209,  1708,   721,  2603,  1709,   218,  1710,
    2909,  -651,  1711,   230,  -648,  1718,  1039,  1040,   235,  1041,
    1423,  1424,  1042,  1719,  2758,  1498,  1499,  1712,   722,   248,
    1561,   215,  1562,   216,  1713,  1714,  1553,  1554,   258,  1569,
    1570,   217,  1571,   698,   699,   700,  1576,   701,  1537,  1729,
    1730,   242,   461,  1577,  1578,  1579,  1580,   259,  1581,  1582,
    1583,  1733,  1734,  1787,  1788,  1584,  1585,   243,  1586,  1715,
    1735,  1736,   260,   462,  1589,  1590,  1591,  1737,  1736,  1761,
    1762,  1796,  1797,  1720,  2800,  2257,  2258,   249,  1599,  1600,
    1601,   261,  1602,  1321,  1322,  1813,  1814,  1538,  1889,  1890,
    1892,  1893,   267,  1613,   406,   463,  2013,  1762,  2024,  1762,
    1816,   250,  1614,  1615,  1616,  1617,  1618,  1619,  1620,  1621,
    1717,  1622,  2261,  2262,  2828,  1623,   420,  1624,   251,  1625,
    1626,  1627,  1628,  1629,   464,  2169,  1762,  1630,  1631,  1632,
     423,  1633,  2178,  2179,  2184,  2185,  2206,  1825,   424,  1718,
    1639,   428,  1641,  1641,  2848,  2222,  2223,  1719,   692,   693,
     694,   695,   696,   697,   698,   699,   700,  1658,   701,  2623,
    2624,   425,  2860,   426,  1663,  1343,  1344,  2319,  2320,   427,
    1153,  1154,  1155,  1156,   429,  1157,  2875,   432,  1159,  1160,
    1161,  2342,  1762,  2353,  1762,  1165,  1166,  1167,   430,  2889,
    1170,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   431,   701,  2904,  1924,  1720,   433,  1926,
     434,  1927,   435,  1929,   437,   677,   678,   679,   680,   681,
     682,   683,   436,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
    1742,   701,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   438,   701,
    1349,  1350,   677,   678,   679,   680,   681,   682,   683,   439,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   440,   701,   679,
     680,   681,   682,   683,   443,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,  1830,   701,  1452,  1453,  1834,  1456,  1457,  1458,
    2370,  1762,  1839,  1461,  1462,  1463,  2384,  1814,  1466,  2393,
    2394,  1845,   468,  1259,   483,  1850,  1851,  2395,  2394,  1853,
    1854,   484,   677,   678,   679,   680,   681,   682,   683,   485,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   486,   701,   677,
     678,   679,   680,   681,   682,   683,   487,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   488,   701,  2397,  2320,   677,   678,
     679,   680,   681,   682,   683,  1925,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   444,   701,  2406,  1825,  2469,  2470,  2471,
    2470,  1945,   677,   678,   679,   680,   681,   682,   683,   445,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   492,   701,   677,
     678,   679,   680,   681,   682,   683,  1972,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   497,   701,   677,   678,   679,   680,
     681,   682,   683,   491,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   496,   701,   501,   677,   678,   679,   680,   681,   682,
     683,   506,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   508,
     701,  2472,  2470,   507,   677,   678,   679,   680,   681,   682,
     683,   509,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,  2215,
     701,   510,  2192,  2475,  2394,   677,   678,   679,   680,   681,
     682,   683,   518,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     522,   701,  2489,  2490,  1744,  2493,  2494,   526,  1745,  2495,
    2496,  2498,  2499,  2501,  2502,  2228,  2520,  1762,  2229,  2521,
    1762,  2536,  1762,  2540,  1762,  2548,  2494,  2240,  2241,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,  2242,
     701,  2549,  2394,  2550,  2394,  2552,  2496,   520,  2249,  2250,
    2635,  1762,  1880,  1881,  2647,  1762,  1746,  2648,  1762,  1747,
    2654,  2320,  2667,  2223,   527,  2266,  2267,  2268,  2702,  2703,
    2269,  2270,   528,  2271,  1748,  2272,   529,  2273,  2705,  2706,
    2707,  2708,  2724,  1762,  2274,  2275,  2276,  2726,  2494,  2727,
    2496,  2738,  2739,   530,  1749,  2764,  2765,  2767,  2768,  1905,
    1906,   531,  1750,  2778,  2779,   535,  2808,  2809,  2292,  2293,
     677,   678,   679,   680,   681,   682,   683,   536,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   541,   701,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   542,   701,
    2323,  2831,  2832,   551,  2329,  2836,  2837,   552,  2839,  2832,
    2868,  2832,  2869,  2832,  2333,  2872,  2873,  2901,  2832,  1394,
    1395,  1654,  1655,  2289,  2290,   553,   554,   149,  2339,  1907,
    1908,   560,   567,   569,   707,   568,   570,   571,   711,   572,
     573,  1751,   574,  1752,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   725,  1909,  1910,   586,   587,
     728,   588,  1753,   589,   590,   591,   592,  2030,  2031,  2032,
    2033,  2034,  2035,   593,  2036,   594,  2037,   729,   595,   730,
    2038,  2039,  2040,   596,  2041,   597,  2216,   731,   598,   599,
    2042,  2043,  2044,  2045,  2046,   600,   601,   602,   603,   604,
     605,   606,   607,   608,  2047,  1300,   609,   610,   611,   612,
     613,   614,   615,   616,  2048,  2049,   732,   617,  2050,  2433,
    2434,   618,   619,  2051,  2052,  2053,  2054,  2055,   620,   621,
    2056,   622,  2057,  2058,  2059,   623,   624,  2060,  2061,   625,
    2062,  2063,  2064,   626,   627,   733,  2065,  1267,   628,   629,
     734,   630,   631,   632,   633,   634,   635,   636,   637,   638,
    2066,   639,   640,   736,   641,  2067,   642,   643,   644,   645,
    2068,  2069,  2070,   646,  1268,   647,   648,  2071,  2072,   649,
    2073,  2074,  2075,  2076,   650,   651,  2077,   652,  2078,  2079,
    2080,  2081,   735,  2082,   653,  2083,  2084,   654,  2085,   655,
    2086,  2087,  1269,  2088,  2089,  2090,  2091,   656,   657,   658,
     659,   660,  2092,   661,  2093,   662,  2094,  2095,   663,  2096,
    2097,  2098,  2099,  2100,  2101,   664,  2102,  2103,  2104,  2105,
    2106,  1301,  2410,  2411,   665,   666,   667,   668,  2415,   669,
    2417,  2107,   670,  2108,   671,  2109,   672,   673,   674,   710,
     712,   737,   738,   739,  2110,   740,  2111,  2112,  2113,  2114,
    2115,  2116,  2117,  1276,   741,  2118,  2119,   742,   743,   744,
     745,  2120,   746,  2121,  2122,  2123,   747,  2124,   748,  2125,
     749,  2126,  2127,  2128,  2129,   750,   751,   752,   753,   754,
     755,   776,   777,   778,   779,   791,   792,   828,   836,   837,
    2464,  2466,   838,  2130,  2131,  2132,   839,   848,   851,   853,
     855,   857,   858,  2133,   859,  2134,  2135,  2136,   861,   860,
     862,   864,  2137,   865,  2138,  2139,  2140,   866,   867,   868,
    2141,   878,   873,   879,  2142,  2143,   880,   881,  2144,  2145,
    2146,  2147,   882,   885,   886,  2148,   677,   678,   679,   680,
     681,   682,   683,   887,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   888,   701,   889,   890,   891,   892,   893,   894,   895,
     896,  2533,   897,   901,   904,   701,  2149,  2150,  2151,  2152,
    2153,   914,   915,   916,   934,   950,   954,   985,  1277,   973,
     974,   975,  2544,   677,   678,   679,   680,   681,   682,   683,
    1038,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   976,   701,
     977,   980,   981,   982,   986,  1839,   987,  1010,  1014,  1025,
    1064,  1066,  1068,  1070,   677,   678,   679,   680,   681,   682,
     683,  2575,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,  1080,
     701,  1078,  1087,  1090,  2593,  1088,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,  2606,   701,  1091,  1092,  1093,  1096,  1094,  1095,  1097,
    1098,  1099,  1100,  1103,  1101,  1102,  1105,  1104,  2154,  2155,
    2156,  2157,  2158,  1106,  2159,  1107,  1110,  1108,  1109,  1111,
    2626,  2627,   677,   678,   679,   680,   681,   682,   683,  1112,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,  1113,   701,  1114,
    1115,  1116,  1118,  1119,  1120,   451,  1121,  1122,  1123,  1124,
    1125,  1126,  2030,  2031,  2032,  2033,  2034,  2035,  1127,  2036,
    1128,  2037,  1129,  1131,  1132,  2038,  2039,  2040,  1133,  2041,
    1134,  1135,  1136,  1137,  1138,  2042,  2043,  2044,  2045,  2046,
    1139,  1140,  1145,  1146,  1147,  1149,  1150,  1151,  1158,  2047,
    1162,  1168,  1172,  1173,  1174,  1179,  1181,  1182,  1183,  2048,
    2049,  1184,  1188,  2050,  1185,  1189,  1190,  2695,  2051,  2052,
    2053,  2054,  2055,  1192,  1191,  2056,  1195,  2057,  2058,  2059,
    1196,  1193,  2060,  2061,  1198,  2062,  2063,  2064,  1197,  1199,
    1200,  2065,  1201,  1202,  1204,  1205,  1206,  1207,  1208,  1209,
    1212,  1213,  1210,  1214,  1234,  2066,  1229,  1236,  1237,  1238,
    2067,  1239,  2723,  1240,  1241,  2068,  2069,  2070,  1242,  1244,
      16,  1252,  2071,  2072,  1258,  2073,  2074,  2075,  2076,  1381,
    1302,  2077,  2736,  2354,  2079,  2080,  2081,  1253,  2082,   -84,
    2083,  2084,  1316,  2085,  1317,  2086,  2087,  1318,  2088,  2089,
    2090,  2091,  1323,  1371,  1324,  1325,  1374,  2092,  1375,  2093,
    1396,  2094,  2095,  1382,  2096,  2097,  2098,  2099,  2100,  2101,
    1376,  2102,  2103,  2104,  2105,  2106,  1384,  1385,  1386,  1397,
    1400,  1399,  1401,  1402,  1403,  1404,  2107,  1405,  2108,  1408,
    2109,  1409,  1406,  1410,  1411,  1407,  1412,  1413,  1414,  2110,
    1416,  2111,  2112,  2113,  2114,  2115,  2116,  2117,  1415,  1417,
    2118,  2119,  1418,  1420,  1419,  1421,  2120,  1422,  2121,  2122,
    2123,  1426,  2124,  1427,  2125,  1434,  2126,  2127,  2128,  2129,
    1439,  1176,  1435,  1440,  1278,  1441,  1442,  1454,  1436,  1443,
    1444,  1445,  1446,  1471,  1472,  1449,  1468,  1469,  2130,  2131,
    2132,  2819,  1470,  1473,  1475,  1479,  1493,  1492,  2133,  1500,
    2134,  2135,  2136,  1502,  1505,  1506,  1507,  2137,  1508,  2138,
    2139,  2140,  1512,  1513,  1510,  2141,  1514,  1515,  1516,  2142,
    2143,  1518,  1519,  2144,  2145,  2146,  2147,  1532,  1544,  1548,
    2148,  1279,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,  1545,   701,  1549,  1555,
    1565,  1550,  1568,  2030,  2031,  2032,  2033,  2034,  2035,  1567,
    2036,  1573,  2037,  1592,  1593,  1594,  2038,  2039,  2040,  1595,
    2041,  2149,  2150,  2151,  2152,  2153,  2042,  2043,  2044,  2045,
    2046,  1596,  1597,  1603,  1598,  1604,  1605,  1607,  1606,  1608,
    2047,  1609,  1610,  1611,   -86,  1612,  1647,   874,  1650,  1656,
    2048,  2049,  1659,  1652,  2050,  1660,  1673,  1672,  1674,  2051,
    2052,  2053,  2054,  2055,  1675,  1680,  2056,  1679,  2057,  2058,
    2059,  1681,  1683,  2060,  2061,  1682,  2062,  2063,  2064,  1684,
    1685,  1688,  2065,  1689,  1694,  1695,  1696,  1692,  1693,  1699,
    1700,  1701,  1723,  1702,  1724,  1725,  2066,  1741,  1726,  1763,
    1281,  2067,  1727,  1765,  1728,  1738,  2068,  2069,  2070,  1739,
    1740,  1768,  1770,  2071,  2072,  1780,  2073,  2074,  2075,  2076,
    1755,  1756,  2077,  1757,  2514,  2079,  2080,  2081,  1785,  2082,
    1771,  2083,  2084,  1777,  2085,  1784,  2086,  2087,  1786,  2088,
    2089,  2090,  2091,  2154,  2155,  2156,  2157,  2158,  2092,  2159,
    2093,  1792,  2094,  2095,  1793,  2096,  2097,  2098,  2099,  2100,
    2101,  1794,  2102,  2103,  2104,  2105,  2106,  1795,  1758,  1759,
    1760,  1801,  1804,  1815,  1805,  1806,  1809,  2107,  1811,  2108,
    1817,  2109,  1810,  1812,  1820,  1821,  1822,  1825,  1835,  1831,
    2110,  1836,  2111,  2112,  2113,  2114,  2115,  2116,  2117,  1823,
    1837,  2118,  2119,  1846,  1932,  1855,  1874,  2120,  1856,  2121,
    2122,  2123,  1873,  2124,  1875,  2125,  1876,  2126,  2127,  2128,
    2129,  1877,  1933,  1878,  1879,  1936,  1888,  1940,  1941,  1950,
    1891,  1894,  1951,  1921,  1952,  1954,  1922,  1955,  1928,  2130,
    2131,  2132,  1956,  1959,  1930,  1957,  1931,  1960,  1961,  2133,
    1937,  2134,  2135,  2136,  1938,  1948,  1939,  1946,  2137,  1963,
    2138,  2139,  2140,  1953,  1958,  1964,  2141,  1962,  1965,  1966,
    2142,  2143,  1967,  1968,  2144,  2145,  2146,  2147,  1969,  1973,
    1970,  2148,  1974,  1975,  1981,  1980,  1982,  1983,  1984,  1985,
    1986,  1987,  1988,  1998,  1999,  2001,  2004,  2005,  2006,  2008,
    2011,  2017,  2018,  2019,  2030,  2031,  2032,  2033,  2034,  2035,
    2020,  2036,  2021,  2037,  2022,  2162,  2161,  2038,  2039,  2040,
    2023,  2041,  2149,  2150,  2151,  2152,  2153,  2042,  2043,  2044,
    2045,  2046,  2163,  2025,  2165,  2168,  2172,  2176,  2170,  2175,
    2177,  2047,  2180,  2181,  2182,  2183,  2186,  2193,  2196,  2194,
    2221,  2048,  2049,  2195,  2199,  2050,  2220,  2225,  2214,  2227,
    2051,  2052,  2053,  2054,  2055,  2277,  2251,  2056,  2256,  2057,
    2058,  2059,  2260,  2282,  2060,  2061,  2283,  2062,  2063,  2064,
    2278,  2279,  2280,  2065,  2284,  2287,  2281,  2291,  2294,  2299,
    2298,  2301,  2303,  2302,  2304,  2305,  2306,  2066,  2307,  2308,
    2311,  2309,  2067,  2310,  2312,  2313,  2315,  2068,  2069,  2070,
    2317,  2322,  2325,  2324,  2071,  2072,  2330,  2073,  2074,  2075,
    2076,  2331,  2335,  2077,  2338,  2517,  2079,  2080,  2081,  2332,
    2082,  2337,  2083,  2084,  2340,  2085,  2343,  2086,  2087,  2345,
    2088,  2089,  2090,  2091,  2154,  2155,  2156,  2157,  2158,  2092,
    2159,  2093,  2346,  2094,  2095,  2347,  2096,  2097,  2098,  2099,
    2100,  2101,  2351,  2102,  2103,  2104,  2105,  2106,  2348,  2352,
    2361,  2362,  2364,  2363,  2369,  2371,  2365,  2372,  2107,  2375,
    2108,  2374,  2109,  2376,  2378,  2379,  2380,  2381,  2385,  2383,
    2386,  2110,  2387,  2111,  2112,  2113,  2114,  2115,  2116,  2117,
    2388,  2407,  2118,  2119,  2408,  2418,  2412,  2419,  2120,  2436,
    2121,  2122,  2123,  2421,  2124,  2463,  2125,  2437,  2126,  2127,
    2128,  2129,  2442,  2473,  2474,  2443,  2444,  2478,  2480,  2481,
    2446,  2482,  2447,  2448,  2484,  2476,  2479,  2485,  2483,  2487,
    2130,  2131,  2132,  2486,  2488,  2491,  2492,  2497,  2505,  2503,
    2133,  2504,  2134,  2135,  2136,  2507,  2508,  2509,  2518,  2137,
    2519,  2138,  2139,  2140,  2523,  2530,  2531,  2141,  2532,  2534,
    2539,  2142,  2143,  2541,  2545,  2144,  2145,  2146,  2147,  2546,
    2551,  2555,  2148,  2556,  2557,  2560,  2563,  2564,  2567,  2576,
    2578,  2579,  2580,  2581,  2594,  2584,  2585,  2588,  2589,  2591,
    2595,  2592,  2596,  2597,  2604,  2030,  2031,  2032,  2033,  2034,
    2035,  2605,  2036,  2608,  2037,  2612,  2609,  2618,  2038,  2039,
    2040,  2613,  2041,  2149,  2150,  2151,  2152,  2153,  2042,  2043,
    2044,  2045,  2046,  2611,  2614,  2615,  2617,  2616,  2619,  2620,
    2621,  2628,  2047,  2622,  2625,  2632,  2637,  2634,  2638,  2639,
    2640,  2641,  2048,  2049,  2655,  2643,  2050,  2645,  2650,  2656,
    2657,  2051,  2052,  2053,  2054,  2055,  2662,  2664,  2056,  2665,
    2057,  2058,  2059,  2668,  2663,  2060,  2061,  2666,  2062,  2063,
    2064,  2671,  2672,  2669,  2065,  2679,  2694,  2673,  2696,  2701,
    2674,  2704,  2709,  2710,  2712,  2722,  2675,  2725,  2066,  2676,
    2728,  2730,  2681,  2067,  2678,  2683,  2684,  2687,  2068,  2069,
    2070,  2685,  2688,  2731,  2689,  2071,  2072,  2691,  2073,  2074,
    2075,  2076,  2719,  2692,  2077,  2693,  2524,  2079,  2080,  2081,
    2699,  2082,  2711,  2083,  2084,  2732,  2085,  2713,  2086,  2087,
    2714,  2088,  2089,  2090,  2091,  2154,  2155,  2156,  2157,  2158,
    2092,  2159,  2093,  2720,  2094,  2095,  2733,  2096,  2097,  2098,
    2099,  2100,  2101,  2729,  2102,  2103,  2104,  2105,  2106,  2734,
    2737,  2742,  2770,  2735,  2751,  2752,  2761,  2756,  2762,  2107,
    2744,  2108,  2777,  2109,  2759,  2763,  2766,  2780,  2776,  2781,
    2788,  2782,  2110,  2783,  2111,  2112,  2113,  2114,  2115,  2116,
    2117,  2784,  2785,  2118,  2119,  2787,  2791,  2794,  2804,  2120,
    2796,  2121,  2122,  2123,  2795,  2124,  2797,  2125,  2799,  2126,
    2127,  2128,  2129,  2801,  2805,  2802,  2807,  2803,  2812,  2813,
    2815,  2820,  2811,  2816,  2817,  2818,  2826,  2394,  2827,  2829,
    2830,  2130,  2131,  2132,  2833,  2835,  2847,  2850,  2838,  2841,
    2840,  2133,  2843,  2134,  2135,  2136,  2844,  2845,  2846,  2851,
    2137,  2852,  2138,  2139,  2140,  2859,  2861,  2867,  2141,  2856,
    2866,  2871,  2142,  2143,  2874,  2878,  2144,  2145,  2146,  2147,
    2876,  2887,  2890,  2148,  2910,  2902,  2903,  2911,  2918,  2919,
    2914,  2915,  2916,  2917,  1847,   446,  1575,  2286,  2468,  1645,
    2409,  1067,   910,  1235,   523,  1233,  2030,  2031,  2032,  2033,
    2034,  2035,  1082,  2036,  1947,  2037,  2636,  2773,  2834,  2038,
    2039,  2040,  1791,  2041,  2149,  2150,  2151,  2152,  2153,  2042,
    2043,  2044,  2045,  2046,  1509,  1511,  2382,  1517,  1800,  1117,
    2377,  1425,  2367,  2047,  1779,  2167,  1698,  2535,  2646,  2842,
    2566,   262,  1248,  2048,  2049,  2542,  2888,  2050,  2207,  2187,
    1558,  2203,  2051,  2052,  2053,  2054,  2055,   903,  2334,  2056,
     557,  2057,  2058,  2059,   852,  1148,  2060,  2061,  1480,  2062,
    2063,  2064,  1464,     0,     0,  2065,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2066,
       0,     0,     0,     0,  2067,     0,     0,     0,     0,  2068,
    2069,  2070,     0,     0,     0,     0,  2071,  2072,     0,  2073,
    2074,  2075,  2076,     0,     0,  2077,     0,  2525,  2079,  2080,
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
    2073,  2074,  2075,  2076,     0,     0,  2077,     0,  2526,  2079,
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
       0,  2073,  2074,  2075,  2076,     0,     0,  2077,     0,  2527,
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
    2528,  2079,  2080,  2081,     0,  2082,     0,  2083,  2084,     0,
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
       0,  2529,  2079,  2080,  2081,     0,  2082,     0,  2083,  2084,
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
    2077,     0,  2630,  2079,  2080,  2081,     0,  2082,     0,  2083,
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
       0,  2077,     0,  2631,  2079,  2080,  2081,     0,  2082,     0,
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
       0,     0,  2077,     0,  2718,  2079,  2080,  2081,     0,  2082,
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
    2076,     0,     0,  2077,     0,  2721,  2079,  2080,  2081,     0,
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
    2075,  2076,     0,     0,  2077,     0,  2769,  2079,  2080,  2081,
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
    2074,  2075,  2076,     0,     0,  2077,     0,  2810,  2079,  2080,
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
       0,     0,     0,   268,   269,   270,   271,   272,   273,     0,
       0,     0,  2130,  2131,  2132,     0,     0,   274,   275,     0,
       0,     0,  2133,     0,  2134,  2135,  2136,   276,   277,     0,
       0,  2137,     0,  2138,  2139,  2140,     0,     0,     0,  2141,
     278,     0,     0,  2142,  2143,     0,     0,  2144,  2145,  2146,
    2147,     0,     0,     0,  2148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   279,     0,     0,     0,     0,   280,     0,     0,
     281,   282,     0,     0,     0,     0,     0,     0,     0,   283,
       0,     0,     0,     0,     0,  2149,  2150,  2151,  2152,  2153,
       0,     0,     0,     0,     0,     0,   284,     0,     0,     0,
     285,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,   677,
     678,   679,   680,   681,   682,   683,   286,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   287,     0,     0,   677,   678,   679,   680,
     681,   682,   683,   288,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,  2154,  2155,  2156,
    2157,  2158,     0,  2159,     0,   289,   290,     0,     0,     0,
       0,     0,     0,   291,   292,     0,     0,     0,   293,   678,
     679,   680,   681,   682,   683,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   294,   701,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,     0,
     333,     0,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
       0,     0,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,     0,   381,   382,   383,   384,     0,     0,     0,     0,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,   398,   268,   269,   270,   271,   272,
     273,     0,     0,     0,     0,     0,     0,     0,     0,   274,
     275,     0,     0,     0,   399,     0,     0,     0,     0,   276,
       0,     0,     0,     0,   400,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   402,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   920,     0,     0,
       0,     0,     0,     0,   279,     0,     0,     0,     0,   280,
       0,     0,   281,   282,   677,   678,   679,   680,   681,   682,
     683,   283,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   677,   678,   679,   680,   681,   682,   683,  1282,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
     921,     0,     0,     0,     0,   287,     0,  1283,     0,     0,
       0,     0,     0,     0,     0,   288,   677,   678,   679,   680,
     681,   682,   683,     0,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,   289,     0,     0,
     680,   681,   682,   683,  1289,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,   922,     0,     0,     0,
       0,     0,     0,     0,     0,   294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,     0,   333,     0,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,     0,     0,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,     0,   381,   382,   383,   384,     0,     0,
       0,     0,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   396,   397,   398,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
       0,   274,   275,     0,     0,     0,   399,     0,     0,     0,
       0,   276,     0,     0,     0,     0,   400,   401,     0,     0,
       0,     0,     0,     0,  1044,     0,     0,     0,     0,     0,
       0,  1045,     0,     0,  -882,  -882,  -882,  -882,   402,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   279,   701,     0,     0,
       0,   280,     0,     0,   281,   282,   677,   678,   679,   680,
     681,   682,   683,   283,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,  1291,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1296,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   288,     0,     0,
    1297,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,   289,
       0,     0,     0,     0,     0,     0,  1046,   677,   678,   679,
     680,   681,   682,   683,  1298,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,   294,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,     0,   333,     0,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,     0,     0,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,     0,   381,   382,   383,   384,
       0,     0,     0,     0,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,   396,   397,   398,   268,
     269,   270,   271,   272,   273,     0,     0,     0,     0,     0,
       0,     0,     0,   274,   275,     0,     0,     0,   399,     0,
       0,     0,     0,   276,     0,     0,     0,     0,   400,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   677,   678,   679,   680,   681,   682,   683,
    1047,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   279,   701,
       0,     0,     0,   280,     0,     0,   281,   282,   677,   678,
     679,   680,   681,   682,   683,   283,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   677,   678,   679,
     680,   681,   682,   683,  1299,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
    1312,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,   289,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   677,   678,   679,   680,   681,   682,   683,  1313,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,   294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   564,     0,     0,     0,  1315,     0,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,     0,   333,     0,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,     0,     0,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,     0,   381,   382,
     383,   384,     0,     0,     0,     0,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   396,   397,
     398,   268,   269,   270,   271,   272,   273,     0,     0,     0,
       0,     0,     0,     0,     0,   274,   275,     0,     0,     0,
     399,     0,     0,     0,     0,   276,   961,     0,     0,     0,
     400,   401,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,   402,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     279,   701,     0,     0,     0,   280,     0,     0,   281,   282,
       0,     0,     0,     0,     0,  1564,     0,   283,     0,     0,
       0,  1326,   677,   678,   679,   680,   681,   682,   683,     0,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,   677,
     678,   679,   680,   681,   682,   683,  1335,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1336,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   287,     0,     0,   677,   678,   679,   680,   681,   682,
     683,   288,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   289,     0,     0,     0,     0,     0,     0,
       0,     0,   677,   678,   679,   680,   681,   682,   683,  1337,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,   294,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,     0,   333,     0,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,     0,     0,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,     0,
     381,   382,   383,   384,     0,     0,     0,     0,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     396,   397,   398,   268,   269,   270,   271,   272,   273,     0,
       0,     0,     0,     0,     0,     0,     0,   274,   275,     0,
       0,     0,   399,     0,     0,     0,     0,   276,     0,     0,
       0,     0,   400,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   677,   678,   679,
     680,   681,   682,   683,   402,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,   279,   701,     0,     0,     0,   280,     0,     0,
     281,   282,     0,     0,     0,     0,     0,     0,     0,   283,
       0,     0,     0,  1338,   677,   678,   679,   680,   681,   682,
     683,     0,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1265,     0,     0,     0,
    1339,     0,   677,   678,   679,   680,   681,   682,   683,     0,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,  1340,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   287,     0,     0,   677,   678,   679,   680,
     681,   682,   683,   288,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   289,     0,     0,     0,     0,
       0,     0,  1341,   677,   678,   679,   680,   681,   682,   683,
       0,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
       0,     0,     0,   294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1342,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,     0,
     333,     0,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
       0,     0,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,     0,   381,   382,   383,   384,     0,     0,     0,     0,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,   398,   268,   269,   270,   271,   272,
     273,     0,     0,     0,     0,     0,     0,     0,     0,   274,
     275,     0,     0,     0,   399,     0,     0,     0,     0,   276,
       0,     0,     0,     0,   400,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   677,
     678,   679,   680,   681,   682,   683,   402,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   279,   701,     0,     0,     0,   280,
       0,     0,   281,   282,     0,     0,     0,     0,     0,     0,
       0,   283,     0,     0,     0,  1348,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1833,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1352,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   287,     0,     0,     0,     0,
    1353,     0,     0,     0,     0,   288,   677,   678,   679,   680,
     681,   682,   683,     0,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,   289,     0,     0,
       0,     0,     0,     0,  1354,   677,   678,   679,   680,   681,
     682,   683,     0,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,     0,     0,     0,   294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1355,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,     0,   333,     0,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,     0,     0,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,     0,   381,   382,   383,   384,     0,     0,
       0,     0,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   396,   397,   398,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
       0,   274,   275,     0,     0,     0,   399,     0,     0,     0,
       0,   276,     0,     0,     0,     0,   400,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,   402,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   279,   701,     0,     0,
       0,   280,     0,     0,   281,   282,     0,     0,     0,     0,
       0,     0,     0,   283,     0,     0,     0,  1356,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1838,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  1360,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,  1361,     0,     0,     0,   287,     0,     0,
     677,   678,   679,   680,   681,   682,   683,   288,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   289,
       0,     0,     0,     0,     0,     0,     0,   677,   678,   679,
     680,   681,   682,   683,  1362,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,   294,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1364,     0,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,     0,   333,     0,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,     0,     0,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,     0,   381,   382,   383,   384,
       0,     0,     0,     0,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,   396,   397,   398,   268,
     269,   270,   271,   272,   273,     0,     0,     0,     0,     0,
       0,     0,     0,   274,   275,     0,     0,     0,   399,     0,
       0,     0,     0,   276,     0,     0,     0,     0,   400,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   677,   678,   679,   680,   681,   682,   683,
     402,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   279,   701,
       0,     0,     0,   280,     0,     0,   281,   282,     0,     0,
       0,     0,     0,     0,     0,   283,     0,     0,     0,  1566,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   677,   678,   679,   680,   681,   682,   683,  2414,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1860,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   287,
       0,     0,     0,     0,     0,     0,     0,  1861,     0,   288,
     677,   678,   679,   680,   681,   682,   683,     0,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,   289,     0,     0,     0,     0,     0,     0,  1872,   677,
     678,   679,   680,   681,   682,   683,     0,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,   294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1882,     0,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,     0,   333,     0,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,     0,     0,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,     0,   381,   382,
     383,   384,     0,     0,     0,     0,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   396,   397,
     398,   268,   269,   270,   271,   272,   273,     0,     0,     0,
       0,     0,     0,     0,     0,   274,   275,     0,     0,     0,
     399,     0,     0,     0,     0,   276,     0,     0,     0,     0,
     400,   401,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   678,   679,   680,   681,
     682,   683,   402,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     279,   701,     0,     0,     0,   280,     0,     0,   281,   282,
       0,     0,     0,     0,     0,     0,     0,   283,     0,     0,
       0,  1898,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  2416,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   677,   678,   679,   680,   681,   682,   683,
    1899,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   287,     0,     0,     0,     0,     0,     0,     0,  1900,
       0,   288,   677,   678,   679,   680,   681,   682,   683,     0,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,     0,
       0,     0,     0,   289,     0,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1903,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,   294,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1904,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,     0,   333,     0,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,     0,     0,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,     0,
     381,   382,   383,   384,     0,     0,     0,     0,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     396,   397,   398,   268,   269,   270,   271,   272,   273,     0,
       0,     0,     0,     0,     0,     0,     0,   274,   275,     0,
       0,     0,   399,     0,     0,     0,     0,   276,     0,     0,
       0,     0,   400,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   677,   678,   679,
     680,   681,   682,   683,   402,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,   279,   701,     0,     0,     0,   280,     0,     0,
     281,   282,     0,     0,     0,     0,     0,     0,     0,   283,
       0,     0,     0,  1917,   677,   678,   679,   680,   681,   682,
     683,     0,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,  1918,   677,   678,   679,   680,   681,   682,   683,
       0,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
       0,     0,     0,   287,     0,     0,     0,     0,     0,     0,
       0,  1919,     0,   288,   677,   678,   679,   680,   681,   682,
     683,     0,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,     0,     0,     0,     0,   289,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2457,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1848,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2460,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,     0,
     333,     0,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
       0,     0,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,     0,   381,   382,   383,   384,     0,     0,     0,     0,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   400,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   677,
     678,   679,   680,   681,   682,   683,   402,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  2461,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,     0,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,  2462,   677,   678,   679,   680,   681,   682,   683,
       0,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,  1849,   701,
     677,   678,   679,   680,   681,   682,   683,     0,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
    1028,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  1264,   684,   685,   686,   687,   688,   689,   690,   691,
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
     694,   695,   696,   697,   698,   699,   700,     0,   701,   677,
     678,   679,   680,   681,   682,   683,     0,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,   677,   678,   679,   680,
     681,   682,   683,     0,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,   677,   678,   679,   680,   681,   682,   683,
       0,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,     0,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  1270,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1271,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1272,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,     0,   677,   678,   679,   680,   681,   682,   683,
    1273,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  1274,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1275,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  1280,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,  1284,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,  1285,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1286,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1290,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,   677,
     678,   679,   680,   681,   682,   683,  1292,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,   677,   678,   679,   680,
     681,   682,   683,  1293,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,   677,   678,   679,   680,   681,   682,   683,
    1294,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  1303,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  1304,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1305,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1306,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,     0,   677,   678,   679,   680,   681,   682,   683,
    1307,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  1308,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1309,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  1310,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,  1314,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,  1327,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1328,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1329,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,   677,
     678,   679,   680,   681,   682,   683,  1330,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,   677,   678,   679,   680,
     681,   682,   683,  1331,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,   677,   678,   679,   680,   681,   682,   683,
    1332,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  1333,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  1334,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1345,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1346,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,     0,   677,   678,   679,   680,   681,   682,   683,
    1347,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  1351,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1357,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
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
     694,   695,   696,   697,   698,   699,   700,     0,   701,   677,
     678,   679,   680,   681,   682,   683,  1857,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,   677,   678,   679,   680,
     681,   682,   683,  1858,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,   677,   678,   679,   680,   681,   682,   683,
    1859,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  1862,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  1863,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1864,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1865,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,     0,   677,   678,   679,   680,   681,   682,   683,
    1866,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  1867,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  1870,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  1871,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,  1883,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,  1884,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1897,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  1901,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,   677,
     678,   679,   680,   681,   682,   683,  1902,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,   677,   678,   679,   680,
     681,   682,   683,  1911,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,   677,   678,   679,   680,   681,   682,   683,
    1912,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  1913,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,   677,
     678,   679,   680,   681,   682,   683,  1914,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1915,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  1916,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,     0,   677,   678,   679,   680,   681,   682,   683,
    1920,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  2012,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,  2230,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,   677,   678,   679,   680,   681,   682,
     683,  2314,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,  2389,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,   677,   678,
     679,   680,   681,   682,   683,  2422,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,   677,   678,   679,   680,   681,
     682,   683,  2423,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
       0,   701,   677,   678,   679,   680,   681,   682,   683,  2424,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,     0,   701,   677,
     678,   679,   680,   681,   682,   683,  2425,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,   677,   678,   679,   680,
     681,   682,   683,  2426,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,   677,   678,   679,   680,   681,   682,   683,
    2435,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     677,   678,   679,   680,   681,   682,   683,  2452,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,    99,     0,   677,
     678,   679,   680,   681,   682,   683,  2453,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,     0,   701,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,   677,   678,
     679,   680,   681,   682,   683,  2454,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     1,     0,     0,
       0,     2,  2455,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   100,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,   126,     3,     0,
    2456,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   103,  2458,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     7,     0,
       0,     0,   104,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2459,     0,
       0,   128,     0,   129,     0,     0,     0,     0,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,   105,
       0,  2500,     0,     0,   131,     0,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,   106,     0,   107,     0,
       0,     0,     0,     0,   108,     0,     0,     0,  2506,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,     0,    12,     0,    13,     0,
       0,     0,     0,     0,     0,  2510,    14,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,  2515,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,  2644,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2651,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
       0,     0,     0,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,  2677,     0,     0,     0,     0,   112,   135,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
       0,   137,     0,     0,     0,     0,   138,     0,     0,   139,
    2690,     0,   113,     0,   140,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,  2715,     0,     0,
       0,     0,     0,   116,     0,     0,   117,     0,     0,     0,
       0,   118,     0,     0,   119,    20,     0,     0,     0,   120,
       0,     0,     0,     0,    21,     0,  2716,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,    25,     0,     0,    26,     0,     0,
       0,     0,    27,     0,     0,  2775,   677,   678,   679,   680,
     681,   682,   683,     0,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,   677,   678,   679,   680,   681,   682,   683,
       0,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
     793,   794,     0,   795,     0,   796,   797,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   798,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2231,  2232,     0,     0,     0,  2233,     0,  2234,     0,     0,
       0,     0,     0,   799,   800,   801,   802,     0,     0,     0,
       0,     0,   803,     0,     0,     0,     0,     0,     0,     0,
       0,   804,     0,     0,     0,     0,     0,     0,     0,     0,
    2235,  2236,     0,  2237,     0,     0,     0,     0,     0,     0,
       0,   805,     0,     0,     0,     0,     0,     0,     0,   806,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   807,     0,     0,     0,     0,     0,
       0,   808,     0,     0,   809,     0,     0,   810,   811,     0,
       0,     0,     0,     0,     0,     0,     0,   677,   678,   679,
     680,   681,   682,   683,   812,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,     0,   701,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   813,   814,
       0,     0,   815,   816,     0,     0,     0,     0,   817,     0,
     818,     0,     0,     0,     0,   819,   820,     0,     0,     0,
       0,   821,     0,   822,     0,     0,     0,     0,     0,   823,
       0,   824,   825,     0,  2238,  2239,     0,   826,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   677,   678,   679,   680,   681,   682,   683,   564,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,  1572,   677,   678,   679,   680,   681,   682,
     683,     0,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     701,   677,   678,   679,   680,   681,   682,   683,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,     0,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2209,   676,     0,     0,     0,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,  1563,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,     0,   701,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1844,   702,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,  2210,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701,     0,     0,     0,     0,     0,     0,     0,
     677,   678,   679,   680,   681,   682,   683,  1295,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,     0,   701,     0,     0,     0,
       0,     0,     0,   677,   678,   679,   680,   681,   682,   683,
    1373,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,     0,   701,
       0,     0,     0,     0,     0,     0,   677,   678,   679,   680,
     681,   682,   683,  1638,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,     0,   701
};

static const yytype_int16 yycheck[] =
{
     153,  1393,   419,  1810,  1827,   771,  1475,  1768,   413,  1661,
    1519,   409,   492,  1812,  1432,  1433,   877,  1886,  1887,    51,
    1438,  1251,  1491,   107,  1953,     3,  1895,  1896,  1163,  1164,
     722,  2193,     3,  2199,  1169,  1504,  1171,     3,     4,     5,
       6,     7,     8,  1076,    20,    20,   136,   136,     3,   140,
     154,    20,  1248,     6,  1250,   154,  1540,     5,   107,  1944,
     199,    48,   413,   829,    48,    18,     3,  1672,    36,    36,
     159,   266,     3,    49,     4,   199,     8,   191,   240,   240,
     240,   268,    90,    10,    11,    12,    13,    14,    15,    16,
     159,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   157,    36,
     263,   264,   216,     3,    51,   274,    71,   216,    51,   524,
      78,   274,   275,   276,     6,  1703,  1704,   280,   277,    84,
       3,   137,     3,   266,     9,    87,   112,  1367,     4,  1946,
     252,   274,  2253,  2254,  1722,    20,     4,     3,   266,  2779,
       3,   266,   274,  2264,  2265,    10,    11,    12,    13,    14,
      15,    16,   204,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    36,   277,   266,   230,   172,     3,     3,   266,   167,
       3,     3,   266,   266,   200,   173,   167,    97,   108,    87,
      98,     4,   173,    16,   391,    54,    55,  2837,  2838,   258,
     197,    99,   258,   197,     3,     4,     5,     6,     7,     8,
    1081,   154,   277,   113,    95,    74,   268,   193,    84,   235,
       5,    55,     4,     5,     6,     7,    18,  2867,     3,     3,
     193,   228,  2003,   201,   228,    20,     3,   135,     3,   402,
     258,   149,   351,   448,  2015,   143,    10,    11,    12,    13,
      14,    15,    16,   241,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   136,    36,   216,   446,   446,  1755,  1705,   448,   448,
     277,  2052,     3,   277,    51,   227,   445,   249,  1767,   704,
      72,     3,  2063,   261,  1813,   193,   236,   237,   241,   448,
     179,   193,   445,   711,  1783,   448,  2427,  2428,  2429,  2430,
    2431,  2432,  2083,   407,   448,   439,   448,   193,   446,   277,
    2441,   446,   401,   107,  2445,   193,  2097,   150,  2449,  1823,
     156,  2226,   446,  1948,   156,  2106,   445,   446,   258,   398,
    1383,   435,   436,   448,   242,  1121,  1122,   448,   448,   448,
    1556,   210,  1558,   446,   351,  1131,   319,   351,   446,   269,
    1231,   107,   446,   446,  2243,  2244,  2245,  2246,  2247,  2248,
    2546,   184,   195,  2545,   208,  2146,  2255,  2194,  2195,   277,
    2259,   156,   156,   448,  2263,  1087,   327,   328,   329,   330,
       3,  1979,   184,   381,   193,   274,  1636,   560,   440,   100,
     381,   564,     3,   107,   252,  1181,  1182,  1183,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   120,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   156,   599,   600,   601,     0,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   422,   446,   445,
     445,   876,   625,   626,   248,   446,   445,   630,   631,   447,
     447,   447,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,   649,   650,   651,   652,
     653,   654,   655,   656,   252,   658,   659,   660,   445,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,  1380,
     673,   674,   449,     3,   677,   678,   679,   680,   681,  1295,
    1296,   404,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   900,
    2479,   404,   903,   706,  2023,     3,  2025,     3,   446,   712,
       3,   333,   334,   335,   258,   156,    40,   918,   219,   133,
       3,  2682,     3,    78,  2335,  2686,   108,   155,   136,  2340,
     112,   404,     3,    74,  2407,  2408,   164,    14,   252,  2388,
     154,    18,   197,   448,   376,   377,   378,   379,    18,     3,
    1735,   252,  1737,  1738,    10,    11,    12,    13,    14,    15,
      16,    71,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   134,
      36,   255,    71,   107,    10,    11,    12,    13,    14,    15,
      16,  2464,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   417,
      36,   266,   398,   399,   400,   444,    78,    74,  1434,  1149,
    1150,   407,  1070,   268,   446,    18,   156,    97,  2789,  2790,
      84,  2792,  2793,   157,     3,     3,   218,   245,     3,     3,
       3,     3,     3,  2298,   448,     3,   201,     3,   322,  2168,
     124,   125,     3,   267,  1396,  2174,     3,  1399,   156,    71,
     156,     3,     3,   156,  2583,   136,    78,    74,  2587,   210,
     371,   874,   134,   156,  1075,   156,    10,    11,    12,    13,
      14,    15,    16,   154,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  2512,    36,   404,    97,   176,   261,   217,   438,   912,
     913,   441,     3,   183,   917,   241,    85,   241,   241,  2530,
      85,   924,   134,   139,  2703,   426,   138,   197,   217,     3,
       3,   113,   203,   113,   258,   192,  2204,    28,  1649,   201,
     124,   125,     3,   155,    49,   271,   391,   417,   271,     3,
       5,   446,   164,   210,  1221,    28,   430,   431,    10,    11,
      12,    13,    14,    15,    16,  2467,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   240,    36,   192,   202,   156,   156,   201,
     183,   156,   156,   156,   156,   156,   177,    51,   156,   261,
     156,   275,     3,   210,   197,   156,  2679,   112,    63,   156,
      71,   193,     3,   193,   156,   156,   415,  2628,   445,   446,
      18,  2476,  2695,    84,     3,  2384,    51,  2746,  2747,    71,
    2749,  2750,  2351,   240,   215,    60,  1039,  1040,    36,  1042,
     398,   399,    84,  2285,  1047,   103,   103,   446,     3,   261,
    2369,   396,  2371,    10,    11,    12,    13,    14,    15,    16,
      18,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   216,    36,
      78,    39,   156,   259,   103,   443,    76,   100,   146,   146,
      48,   275,    39,    51,     3,    53,   154,   154,    56,  2756,
      51,  2603,   159,   156,   280,   100,   155,   120,    51,    60,
       3,  2722,    59,    71,  2787,   113,     3,    60,   176,   176,
      78,    79,  1389,    38,     3,   120,  1381,   146,    10,    11,
      12,    13,    14,    15,    16,   154,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,  2608,    36,   113,    51,   176,   103,     3,
      75,   103,    87,   153,     3,    60,     5,  1368,  2839,   398,
     399,   400,   130,   163,    99,  1178,  1377,     3,    28,    29,
      30,    31,    32,    33,    34,   100,    36,   177,   447,   448,
     246,   447,   448,   108,    18,   447,   448,  2868,  2869,  1815,
     190,   146,   447,   448,   146,   120,   164,   809,   396,   154,
     135,   155,   154,   815,     3,   817,    33,    34,   143,    36,
    2539,   447,   448,   396,    48,   215,  2468,    51,   252,    53,
    2901,   176,    56,     3,   176,   193,    13,    14,     3,    16,
      45,    46,    19,   201,  2699,   223,   224,    71,   238,     3,
    1253,   396,  1255,   396,    78,    79,   447,   448,   171,  1262,
    1263,   396,  1265,    32,    33,    34,  1269,    36,   193,   447,
     448,   396,   187,  1276,  1277,  1278,  1279,   448,  1281,  1282,
    1283,    82,    83,   405,   406,  1288,  1289,   396,  1291,   113,
     447,   448,     3,   208,  1297,  1298,  1299,   447,   448,   447,
     448,   405,   406,   261,  2759,     4,     5,   396,  1311,  1312,
    1313,     3,  1315,   447,   448,   447,   448,   242,   447,   448,
     447,   448,   448,  1326,     3,   240,   447,   448,   447,   448,
    1531,   396,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
     164,  1344,     4,     5,  2799,  1348,     3,  1350,   396,  1352,
    1353,  1354,  1355,  1356,   269,   447,   448,  1360,  1361,  1362,
     136,  1364,   447,   448,   447,   448,   447,   448,   136,   193,
    1373,   409,  1375,  1376,  2829,   447,   448,   201,    26,    27,
      28,    29,    30,    31,    32,    33,    34,  1390,    36,    57,
      58,   136,  2847,   159,  1397,   447,   448,   447,   448,   136,
     796,   797,   798,   799,     3,   801,  2861,   136,   804,   805,
     806,   447,   448,   447,   448,   811,   812,   813,     3,  2874,
     816,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     3,    36,  2890,  1637,   261,   446,  1640,
     159,  1642,   136,  1644,     3,    10,    11,    12,    13,    14,
      15,    16,   136,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    1473,    36,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   159,    36,
     447,   448,    10,    11,    12,    13,    14,    15,    16,   136,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    94,    36,    12,
      13,    14,    15,    16,   159,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,  1545,    36,  1156,  1157,  1549,  1159,  1160,  1161,
     447,   448,  1555,  1165,  1166,  1167,   447,   448,  1170,   447,
     448,  1564,     3,  1566,   281,   447,   448,   447,   448,  1572,
    1573,     3,    10,    11,    12,    13,    14,    15,    16,    51,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,    10,
      11,    12,    13,    14,    15,    16,   446,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   197,    36,   447,   448,    10,    11,
      12,    13,    14,    15,    16,  1638,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   136,    36,   447,   448,   447,   448,   447,
     448,  1664,    10,    11,    12,    13,    14,    15,    16,   136,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   446,    36,    10,
      11,    12,    13,    14,    15,    16,  1699,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     3,    36,    10,    11,    12,    13,
      14,    15,    16,   281,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   197,    36,     3,    10,    11,    12,    13,    14,    15,
      16,   140,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   197,
      36,   447,   448,   281,    10,    11,    12,    13,    14,    15,
      16,   281,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   181,
      36,     3,  1805,   447,   448,    10,    11,    12,    13,    14,
      15,    16,   446,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    36,   447,   448,    62,   447,   448,   281,    66,   447,
     448,   447,   448,   447,   448,  1848,   447,   448,  1851,   447,
     448,   447,   448,   447,   448,   447,   448,  1860,  1861,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  1872,
      36,   447,   448,   447,   448,   447,   448,   445,  1881,  1882,
     447,   448,   447,   448,   447,   448,   114,   447,   448,   117,
     447,   448,   447,   448,   281,  1898,  1899,  1900,   447,   448,
    1903,  1904,   281,  1906,   132,  1908,   281,  1910,   447,   448,
     447,   448,   447,   448,  1917,  1918,  1919,   447,   448,   447,
     448,   447,   448,   197,   152,   447,   448,    57,    58,   447,
     448,   281,   160,   445,   446,   281,   447,   448,  1941,  1942,
      10,    11,    12,    13,    14,    15,    16,   281,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   281,    36,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   281,    36,
    1983,   447,   448,     3,  1987,   445,   446,     4,   447,   448,
     447,   448,   447,   448,  1997,   447,   448,   447,   448,  1083,
    1084,  1385,  1386,  1938,  1939,   245,     3,     8,  2011,   447,
     448,     9,   445,    36,   448,   446,   446,   446,     3,   446,
     446,   249,   446,   251,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,    51,   447,   448,   446,   446,
       3,   446,   270,   446,   446,   446,   446,     3,     4,     5,
       6,     7,     8,   446,    10,   446,    12,   159,   446,     3,
      16,    17,    18,   446,    20,   446,   448,     3,   446,   446,
      26,    27,    28,    29,    30,   446,   446,   446,   446,   446,
     446,   446,   446,   446,    40,   321,   446,   446,   446,   446,
     446,   446,   446,   446,    50,    51,     3,   446,    54,   447,
     448,   446,   446,    59,    60,    61,    62,    63,   446,   446,
      66,   446,    68,    69,    70,   446,   446,    73,    74,   446,
      76,    77,    78,   446,   446,     3,    82,   448,   446,   446,
       3,   446,   446,   446,   446,   446,   446,   446,   446,   446,
      96,   446,   446,   266,   446,   101,   446,   446,   446,   446,
     106,   107,   108,   446,   448,   446,   446,   113,   114,   446,
     116,   117,   118,   119,   446,   446,   122,   446,   124,   125,
     126,   127,    16,   129,   446,   131,   132,   446,   134,   446,
     136,   137,   448,   139,   140,   141,   142,   446,   446,   446,
     446,   446,   148,   446,   150,   446,   152,   153,   446,   155,
     156,   157,   158,   159,   160,   446,   162,   163,   164,   165,
     166,   447,  2215,  2216,   446,   446,   446,   446,  2221,   446,
    2223,   177,   446,   179,   446,   181,   446,   446,   446,   446,
     446,   421,     3,    28,   190,     3,   192,   193,   194,   195,
     196,   197,   198,   448,     3,   201,   202,     3,   266,     3,
       3,   207,     4,   209,   210,   211,   159,   213,   159,   215,
       3,   217,   218,   219,   220,     3,     3,    53,    53,    44,
       3,   423,    71,   277,   245,     3,     3,   197,     3,   197,
    2283,  2284,   281,   239,   240,   241,     3,   197,   281,   277,
     281,   281,   418,   249,     3,   251,   252,   253,     3,   428,
     277,   281,   258,   281,   260,   261,   262,   281,     3,     3,
     266,     3,    28,     3,   270,   271,     3,     3,   274,   275,
     276,   277,     3,     3,     3,   281,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    74,    36,   281,    74,   281,     3,     3,   281,   281,
     281,  2364,   281,     3,     3,    36,   322,   323,   324,   325,
     326,     3,     3,   449,   447,   447,   447,     5,   448,   447,
     447,   447,  2385,    10,    11,    12,    13,    14,    15,    16,
     446,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   447,    36,
     447,   447,   447,   447,   447,  2418,   447,   447,   447,   447,
       3,     3,     3,     3,    10,    11,    12,    13,    14,    15,
      16,  2434,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     3,
      36,   447,   163,     3,  2457,   196,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  2474,    36,     3,   271,     3,   274,   402,   402,   271,
     274,     3,   273,   447,     5,   274,   274,   271,   444,   445,
     446,   447,   448,   274,   450,   273,    16,   271,   274,     3,
    2503,  2504,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   271,    36,   274,
     179,     5,    42,    42,     3,   277,     3,     3,     3,     3,
       3,     3,     3,     4,     5,     6,     7,     8,     3,    10,
       3,    12,     3,     3,   245,    16,    17,    18,     3,    20,
       3,    20,     3,     5,     3,    26,    27,    28,    29,    30,
     379,     5,     5,   217,   217,   446,   446,   446,   446,    40,
      64,   446,   446,   446,   446,     3,     3,     3,     3,    50,
      51,   447,     3,    54,   448,     3,   197,  2600,    59,    60,
      61,    62,    63,   197,   447,    66,   396,    68,    69,    70,
       3,    51,    73,    74,   281,    76,    77,    78,   197,     3,
     446,    82,     3,   277,     3,     3,   140,     4,   197,   446,
       3,     3,   277,     3,   396,    96,   198,     3,     3,     3,
     101,     3,  2645,     3,     3,   106,   107,   108,     3,     3,
     241,   447,   113,   114,   447,   116,   117,   118,   119,   136,
     447,   122,  2665,   124,   125,   126,   127,   253,   129,   241,
     131,   132,   350,   134,   350,   136,   137,   350,   139,   140,
     141,   142,   447,   446,   350,   350,   446,   148,   446,   150,
     163,   152,   153,   448,   155,   156,   157,   158,   159,   160,
     446,   162,   163,   164,   165,   166,   164,   164,   164,   197,
     446,   163,   271,     4,     4,   411,   177,   446,   179,     4,
     181,   433,   411,   136,   446,   410,   433,     4,     4,   190,
       4,   192,   193,   194,   195,   196,   197,   198,   446,     3,
     201,   202,   271,   446,   271,   164,   207,     5,   209,   210,
     211,   197,   213,   197,   215,     3,   217,   218,   219,   220,
       3,    36,   222,   245,   448,   245,     4,     4,   222,     5,
       5,     3,     3,   193,   449,     5,     5,     5,   239,   240,
     241,  2784,     5,   446,   446,   213,     3,   197,   249,   140,
     251,   252,   253,     3,     3,     3,   197,   258,   397,   260,
     261,   262,   418,   101,   446,   266,   428,   422,   446,   270,
     271,    94,     3,   274,   275,   276,   277,     3,    63,     3,
     281,   448,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   179,    36,    20,   446,
      91,   199,   447,     3,     4,     5,     6,     7,     8,   449,
      10,   161,    12,     4,   350,   350,    16,    17,    18,   350,
      20,   322,   323,   324,   325,   326,    26,    27,    28,    29,
      30,   350,   350,   446,   350,   446,   446,     5,   350,   350,
      40,     5,   350,   446,   241,   446,   412,   274,     3,   447,
      50,    51,     3,   140,    54,     3,   403,   446,   179,    59,
      60,    61,    62,    63,    20,     4,    66,    20,    68,    69,
      70,   179,     3,    73,    74,    20,    76,    77,    78,     4,
      20,     4,    82,   179,     4,    20,     3,   446,   446,   446,
     164,   164,     3,   446,     3,   222,    96,    78,   222,   268,
     448,   101,   447,     3,   447,   447,   106,   107,   108,   447,
     447,    60,   140,   113,   114,   268,   116,   117,   118,   119,
     446,   446,   122,   446,   124,   125,   126,   127,     3,   129,
     396,   131,   132,   245,   134,   197,   136,   137,    20,   139,
     140,   141,   142,   444,   445,   446,   447,   448,   148,   450,
     150,     3,   152,   153,     4,   155,   156,   157,   158,   159,
     160,     4,   162,   163,   164,   165,   166,    20,   446,   446,
     446,     3,     3,     3,   446,   164,   446,   177,   164,   179,
       4,   181,   446,   446,     6,     4,     4,   448,   164,   212,
     190,     3,   192,   193,   194,   195,   196,   197,   198,   446,
       3,   201,   202,   446,    51,   447,   446,   207,   447,   209,
     210,   211,   447,   213,   446,   215,   446,   217,   218,   219,
     220,   446,   141,   446,   446,   163,   446,     3,    20,     4,
     446,   446,     5,   447,     4,     4,   447,     5,   447,   239,
     240,   241,     4,     4,   447,   274,   447,     5,     4,   249,
     446,   251,   252,   253,   446,   448,   446,   446,   258,     5,
     260,   261,   262,   448,   448,    94,   266,   448,     5,     4,
     270,   271,     4,   448,   274,   275,   276,   277,     4,   446,
     448,   281,   446,     3,     3,   193,   446,   446,   446,    52,
       3,   446,     4,   164,   164,   213,     5,   240,     4,     4,
     446,     3,     3,     3,     3,     4,     5,     6,     7,     8,
       3,    10,     3,    12,     3,     3,   118,    16,    17,    18,
     446,    20,   322,   323,   324,   325,   326,    26,    27,    28,
      29,    30,     3,   446,   266,   446,     3,    20,   268,     4,
      20,    40,   101,     4,    20,    20,   140,   446,     3,   446,
      20,    50,    51,   446,   446,    54,   258,   197,   448,     4,
      59,    60,    61,    62,    63,   447,   351,    66,   350,    68,
      69,    70,   350,    94,    73,    74,    63,    76,    77,    78,
     447,   447,   447,    82,   148,     3,   447,   446,     3,    12,
     448,    12,   433,    59,     4,   432,   179,    96,     4,     4,
       4,   448,   101,   448,     3,     5,     3,   106,   107,   108,
       3,     5,    51,     5,   113,   114,   446,   116,   117,   118,
     119,   446,    60,   122,     4,   124,   125,   126,   127,   446,
     129,   447,   131,   132,    60,   134,     3,   136,   137,   447,
     139,   140,   141,   142,   444,   445,   446,   447,   448,   148,
     450,   150,   447,   152,   153,   447,   155,   156,   157,   158,
     159,   160,   446,   162,   163,   164,   165,   166,   448,   446,
     217,   140,   446,   448,   446,   446,   277,   268,   177,     5,
     179,   447,   181,     4,     4,   447,     5,     4,   446,   271,
     164,   190,   164,   192,   193,   194,   195,   196,   197,   198,
     446,     4,   201,   202,     3,   446,   448,    88,   207,    63,
     209,   210,   211,   447,   213,   413,   215,   198,   217,   218,
     219,   220,   446,     3,    20,   447,   447,   164,   164,     5,
     446,    20,   447,   447,     5,   448,   448,     5,   448,     4,
     239,   240,   241,   448,     4,    43,    18,     3,   164,   446,
     249,   446,   251,   252,   253,   447,   447,   447,   447,   258,
       3,   260,   261,   262,     3,    60,   118,   266,     3,    78,
     446,   270,   271,   136,   446,   274,   275,   276,   277,   446,
       3,   446,   281,     3,    63,    63,     3,     3,   446,     3,
      63,   447,   447,   447,     5,   350,   350,   350,   350,   447,
       5,   447,     5,     5,     3,     3,     4,     5,     6,     7,
       8,   447,    10,   448,    12,     4,    20,   269,    16,    17,
      18,     4,    20,   322,   323,   324,   325,   326,    26,    27,
      28,    29,    30,    20,     4,   448,     4,   448,   207,     3,
       3,    60,    40,     5,     5,   277,    77,   447,   131,   156,
     166,   276,    50,    51,   207,   217,    54,   446,   446,     5,
       3,    59,    60,    61,    62,    63,   416,   204,    66,    20,
      68,    69,    70,     3,   423,    73,    74,   448,    76,    77,
      78,   447,   447,   101,    82,     3,   214,   447,   140,     4,
     447,     4,     4,     4,     3,    60,   447,     5,    96,   447,
       3,     3,   447,   101,   448,   446,   446,   446,   106,   107,
     108,   447,   446,     3,   447,   113,   114,   447,   116,   117,
     118,   119,   446,   448,   122,   448,   124,   125,   126,   127,
     448,   129,   447,   131,   132,   446,   134,   447,   136,   137,
     447,   139,   140,   141,   142,   444,   445,   446,   447,   448,
     148,   450,   150,   447,   152,   153,   446,   155,   156,   157,
     158,   159,   160,   447,   162,   163,   164,   165,   166,    20,
       3,     3,     3,   446,     4,     4,     4,   159,     4,   177,
     448,   179,   207,   181,   448,   447,   446,     3,   447,     3,
     447,     4,   190,     3,   192,   193,   194,   195,   196,   197,
     198,    20,     3,   201,   202,     3,   447,   447,     4,   207,
     231,   209,   210,   211,   447,   213,   231,   215,   448,   217,
     218,   219,   220,   447,     3,   447,    20,   447,     3,     3,
     447,   240,   245,   447,   447,   447,   180,   448,   180,   448,
     447,   239,   240,   241,     5,   446,   448,     3,   446,   229,
     446,   249,   447,   251,   252,   253,   447,   447,   447,     5,
     258,     3,   260,   261,   262,     5,   448,   446,   266,   228,
     447,     3,   270,   271,   448,   151,   274,   275,   276,   277,
      97,   271,   448,   281,   250,   174,   447,   447,     5,     5,
     197,   197,   191,   191,  1566,   183,  1268,  1935,  2286,  1376,
    2214,   706,   565,   886,   221,   878,     3,     4,     5,     6,
       7,     8,   716,    10,  1668,    12,  2523,  2720,  2809,    16,
      17,    18,  1511,    20,   322,   323,   324,   325,   326,    26,
      27,    28,    29,    30,  1201,  1204,  2185,  1212,  1517,   755,
    2179,  1117,  2167,    40,  1502,  1779,  1427,  2367,  2535,  2820,
    2418,   148,   902,    50,    51,  2384,  2873,    54,  1825,  1802,
    1249,  1814,    59,    60,    61,    62,    63,   554,  2001,    66,
     267,    68,    69,    70,   501,   790,    73,    74,  1185,    76,
      77,    78,  1168,    -1,    -1,    82,    -1,    -1,    -1,    -1,
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
     110,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   146,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   444,   445,   446,
     447,   448,    -1,   450,    -1,   225,   226,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   448,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
     178,    -1,    -1,    -1,    -1,   183,    -1,   448,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      13,    14,    15,    16,   448,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,   254,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    13,    14,    15,    16,   446,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    72,    36,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   448,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   448,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
     448,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,   232,    10,    11,    12,
      13,    14,    15,    16,   448,    18,    19,    20,    21,    22,
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
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   424,   425,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     446,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    72,    36,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   448,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
     448,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   448,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   263,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   275,    -1,    -1,    -1,   448,    -1,   281,   282,   283,
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
     424,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   446,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      72,    36,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    89,    -1,    -1,
      -1,   448,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   448,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   448,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
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
      -1,    -1,   424,   425,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   446,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    72,    36,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,   448,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,
     448,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   448,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,   448,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     448,   281,   282,   283,   284,   285,   286,   287,   288,   289,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   446,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    72,    36,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   113,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   448,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
     448,    -1,    -1,    -1,    -1,   193,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   448,    -1,   281,   282,   283,   284,   285,   286,   287,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   446,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    72,    36,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,   448,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   113,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   448,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,    -1,    -1,    -1,   183,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   448,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,    -1,   281,   282,   283,   284,   285,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     446,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    72,    36,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,   448,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   113,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   448,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,   193,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   448,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   448,    -1,   281,   282,   283,
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
     424,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   446,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      72,    36,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   113,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     448,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
      -1,   193,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   448,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,   281,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   446,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    72,    36,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,   448,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,   448,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   448,    -1,   193,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   446,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   448,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   448,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   447,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
     447,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   447,    18,    19,    20,    21,    22,    23,    24,    25,
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
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
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
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
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
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
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
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
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
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   447,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   447,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
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
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   447,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     447,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   447,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    -1,    10,
      11,    12,    13,    14,    15,    16,   447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    10,    11,
      12,    13,    14,    15,    16,   447,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    37,    -1,    -1,
      -1,    41,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    95,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    68,    -1,
     447,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   447,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,
      -1,    -1,   155,    -1,   202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,
      -1,   219,    -1,   221,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,   202,
      -1,   447,    -1,    -1,   252,    -1,    -1,    -1,   168,   169,
     170,    -1,    -1,    -1,    -1,    -1,   219,    -1,   221,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   447,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,   247,    -1,   206,    -1,   208,    -1,
      -1,    -1,    -1,    -1,    -1,   447,   216,    -1,   261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,   241,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,   447,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,    -1,
      -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,   371,   417,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,
      -1,   429,    -1,    -1,    -1,    -1,   434,    -1,    -1,   437,
     447,    -1,   395,    -1,   442,    -1,    -1,    -1,    -1,    -1,
      -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   417,    -1,    -1,   447,    -1,    -1,
      -1,    -1,    -1,   426,    -1,    -1,   429,    -1,    -1,    -1,
      -1,   434,    -1,    -1,   437,   395,    -1,    -1,    -1,   442,
      -1,    -1,    -1,    -1,   404,    -1,   447,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,
     420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,
      -1,    -1,    -1,    -1,   434,    -1,    -1,   437,    -1,    -1,
      -1,    -1,   442,    -1,    -1,   447,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      61,    62,    -1,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,   182,    -1,    -1,   185,    -1,    -1,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   205,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,
      -1,    -1,   243,   244,    -1,    -1,    -1,    -1,   249,    -1,
     251,    -1,    -1,    -1,    -1,   256,   257,    -1,    -1,    -1,
      -1,   262,    -1,   264,    -1,    -1,    -1,    -1,    -1,   270,
      -1,   272,   273,    -1,   278,   279,    -1,   278,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   275,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,   136,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   124,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    51,
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
     655,   645,   664,   650,   662,   634,   447,   635,    20,    49,
     112,   445,   496,   496,   448,   181,   448,     3,    28,   689,
     258,    20,   447,   448,   623,   197,   613,     4,   453,   453,
     447,   104,   105,   109,   111,   144,   145,   147,   278,   279,
     453,   453,   453,   472,   473,   471,   474,   475,   476,   453,
     453,   351,   499,   499,   499,   477,   350,     4,     5,   481,
     350,     4,     5,   485,   499,   499,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   447,   447,   447,
     447,   447,    94,    63,   148,   498,   494,     3,   530,   530,
     530,   446,   453,   453,     3,   688,   510,   553,   448,    12,
     563,    12,    59,   433,     4,   432,   179,     4,     4,   448,
     448,     4,     3,     5,   447,     3,   652,     3,   651,   447,
     448,   609,     5,   453,     5,    51,    78,   201,   261,   453,
     446,   446,   446,   453,   673,    60,   674,   447,     4,   453,
      60,   674,   447,     3,   539,   447,   447,   447,   448,   543,
     543,   446,   446,   447,   124,   674,   674,   674,   674,   674,
     674,   217,   140,   448,   446,   277,   606,   603,   543,   446,
     447,   446,   268,   543,   447,     5,     4,   560,     4,   447,
       5,     4,   585,   271,   447,   446,   164,   164,   446,   447,
     652,   510,   510,   447,   448,   447,   651,   447,    48,   172,
     197,   228,   277,   351,   644,   657,   447,     4,     3,   505,
     453,   453,   448,   612,   113,   453,   113,   453,   446,    88,
     688,   447,   447,   447,   447,   447,   447,   499,   499,   499,
     499,   499,   499,   447,   448,   447,    63,   198,   501,   501,
     501,   499,   446,   447,   447,   499,   446,   447,   447,   499,
     501,   501,   447,   447,   447,   447,   447,   448,   447,   447,
     448,   448,   448,   413,   453,   495,   453,   503,   498,   447,
     448,   447,   447,     3,    20,   447,   448,   553,   164,   448,
     164,     5,    20,   448,     5,     5,   448,     4,     4,   447,
     448,    43,    18,   447,   448,   447,   448,     3,   447,   448,
     447,   447,   448,   446,   446,   164,   447,   447,   447,   447,
     447,    51,    60,   674,   124,   447,   674,   124,   447,     3,
     447,   447,   543,     3,   124,   124,   124,   124,   124,   124,
      60,   118,     3,   453,    78,   605,   447,   543,   543,   446,
     447,   136,   645,   664,   453,   446,   446,   655,   447,   447,
     447,     3,   447,     5,    20,   446,     3,    63,   415,   446,
      63,   496,   496,     3,     3,   617,   624,   446,   614,   501,
     501,   501,   501,   501,   501,   453,     3,   500,    63,   447,
     447,   447,   501,   478,   350,   350,   501,   482,   350,   350,
     501,   447,   447,   453,     5,     5,     5,     5,   496,   277,
     448,   497,   506,   503,     3,   447,   453,   553,   448,    20,
     563,    20,     4,     4,     4,   448,   448,     4,   269,   207,
       3,     3,     5,    57,    58,     5,   453,   453,    60,   674,
     124,   124,   277,   540,   447,   447,   539,    77,   131,   156,
     166,   276,   674,   217,   447,   446,   606,   447,   447,   543,
     446,   447,   652,   651,   447,   207,     5,     3,   107,   248,
     204,   268,   416,   423,   204,    20,   448,   447,     3,   101,
     615,   447,   447,   447,   447,   447,   447,   447,   448,     3,
     502,   447,   499,   446,   446,   447,   499,   446,   446,   447,
     447,   447,   448,   448,   214,   453,   140,   508,   506,   448,
     553,     4,   447,   448,     4,   447,   448,   447,   448,     4,
       4,   447,     3,   447,   447,   447,   447,   674,   124,   446,
     447,   124,    60,   453,   447,     5,   447,   447,     3,   447,
       3,     3,   446,   446,    20,   446,   453,     3,   447,   448,
      90,   258,     3,   496,   448,   501,   479,   480,   501,   483,
     484,     4,     4,   496,   230,   258,   159,   509,   553,   448,
     563,     4,     4,   447,   447,   448,   446,    57,    58,   124,
       3,   541,   542,   540,   674,   447,   447,   207,   445,   446,
       3,     3,     4,     3,    20,     3,   616,     3,   447,   499,
     499,   447,   499,   499,   447,   447,   231,   231,   510,   448,
     553,   447,   447,   447,     4,     3,   653,    20,   447,   448,
     124,   245,     3,     3,   653,   447,   447,   447,   447,   453,
     240,   496,   501,   501,   501,   501,   180,   180,   553,   448,
     447,   447,   448,     5,   542,   446,   445,   446,   446,   447,
     446,   229,   617,   447,   447,   447,   447,   448,   553,   654,
       3,     5,     3,   653,   653,   654,   228,   646,   647,     5,
     553,   448,    18,    97,   183,   197,   447,   446,   447,   447,
      18,     3,   447,   448,   448,   553,    97,   269,   151,   137,
     200,   235,   107,   258,   653,   654,   654,   271,   647,   553,
     448,    98,   149,    74,   192,   210,   240,    74,   192,   210,
     240,   447,   174,   447,   553,   113,   193,   113,   193,   654,
     250,   447,     4,   184,   197,   197,   191,   191,     5,     5
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
            /* Heap-size the buffer to the literal so long values (e.g. a
             * 1024-d vector as a "b64i8:" / "[...]" literal, ~1.4-10 KB)
             * aren't truncated; the old fixed 1024 buffer silently cut
             * them, which surfaced downstream as a bogus duplicate-key. */
            char *stripped = (char *)malloc((size_t)slen + 1);
            if (!stripped) {
                GetInsertions(sv);
                (yyval.exprval) = expr_make_string(sv);
            } else {
                int j = 0;
                for (int i = 1; i < slen - 1; i++) {
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
                free(stripped);
            }
        } else {
            GetInsertions(sv);
            (yyval.exprval) = expr_make_string(sv);
        }
        free(sv);
    ;}
    break;

  case 10:
#line 601 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 609 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 617 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 623 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 630 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 631 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 632 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 633 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 634 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 635 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 636 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 637 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 638 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 639 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 640 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 641 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 642 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 643 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 644 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 645 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 646 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 647 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 648 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 650 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 655 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 656 "parser/evoparser.y"
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
#line 664 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 665 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 666 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 667 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 668 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 669 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 674 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 676 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 679 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 680 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 681 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 682 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 683 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 686 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 687 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 691 "parser/evoparser.y"
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
#line 700 "parser/evoparser.y"
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
#line 718 "parser/evoparser.y"
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
#line 727 "parser/evoparser.y"
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
#line 746 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 747 "parser/evoparser.y"
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
#line 807 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 816 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 822 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 827 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 829 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 831 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 836 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 841 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 846 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 854 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 856 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 858 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 860 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 862 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 864 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 866 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 868 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 870 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 872 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 879 "parser/evoparser.y"
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
#line 890 "parser/evoparser.y"
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
#line 900 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 904 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 904 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 905 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 905 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 906 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 907 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 914 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 915 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 922 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 923 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 933 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 937 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 938 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 939 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 940 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 941 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 942 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 943 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 944 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 948 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 949 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 950 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 951 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 952 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 953 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 955 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 956 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 957 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 958 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 959 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 960 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 961 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 962 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 963 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 964 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 965 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 966 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 968 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 969 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 970 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 971 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 972 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 973 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 974 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 975 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 976 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 977 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 978 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 979 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 980 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 981 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 982 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 983 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 985 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 986 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 987 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 988 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 989 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 990 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 993 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 994 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 995 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 996 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 997 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 998 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 999 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 1000 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 1001 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 1002 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 TOKEN_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_TOKEN_LENGTH, (yyvsp[(3) - (4)].exprval), "token_length"); ;}
    break;

  case 150:
#line 1004 "parser/evoparser.y"
    { emit("CALL 2 EVO_CALL_EXTERNAL"); (yyval.exprval) = expr_make_func2(EXPR_PG_CALL_EXTERNAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "evo_call_external"); ;}
    break;

  case 151:
#line 1005 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 1006 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 153:
#line 1007 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 154:
#line 1008 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 155:
#line 1009 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 156:
#line 1010 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 157:
#line 1011 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 158:
#line 1012 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 159:
#line 1013 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 160:
#line 1014 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 161:
#line 1015 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 162:
#line 1016 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 163:
#line 1017 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 164:
#line 1018 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 165:
#line 1019 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 166:
#line 1020 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 167:
#line 1021 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 168:
#line 1022 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 169:
#line 1023 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 170:
#line 1024 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 171:
#line 1025 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 172:
#line 1026 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 173:
#line 1027 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 174:
#line 1028 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 175:
#line 1030 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 176:
#line 1031 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 177:
#line 1032 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 178:
#line 1033 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 179:
#line 1034 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 180:
#line 1035 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 181:
#line 1036 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 182:
#line 1037 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 183:
#line 1039 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 184:
#line 1040 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 185:
#line 1041 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 186:
#line 1042 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 187:
#line 1043 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 188:
#line 1044 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 189:
#line 1045 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 190:
#line 1046 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 191:
#line 1047 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 192:
#line 1048 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 193:
#line 1049 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 194:
#line 1050 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 195:
#line 1051 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 196:
#line 1052 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 197:
#line 1053 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 198:
#line 1054 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 199:
#line 1055 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 200:
#line 1056 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 201:
#line 1057 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1058 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 203:
#line 1059 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 204:
#line 1060 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 205:
#line 1062 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 206:
#line 1063 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 207:
#line 1064 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 208:
#line 1065 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 209:
#line 1066 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 210:
#line 1068 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 211:
#line 1069 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 212:
#line 1071 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 213:
#line 1072 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 214:
#line 1073 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 215:
#line 1075 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 216:
#line 1076 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 217:
#line 1077 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 218:
#line 1078 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 219:
#line 1085 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 220:
#line 1092 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 221:
#line 1099 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1103 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1107 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 224:
#line 1111 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 225:
#line 1115 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 226:
#line 1119 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 227:
#line 1125 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 228:
#line 1126 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 229:
#line 1127 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 230:
#line 1131 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 231:
#line 1137 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 232:
#line 1143 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 233:
#line 1144 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1145 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1146 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 236:
#line 1147 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 237:
#line 1148 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 238:
#line 1149 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1150 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 240:
#line 1151 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 241:
#line 1155 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1157 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 243:
#line 1159 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 244:
#line 1161 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 245:
#line 1165 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 246:
#line 1173 "parser/evoparser.y"
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
#line 1183 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 248:
#line 1184 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 249:
#line 1187 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 250:
#line 1188 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 251:
#line 1192 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1200 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 253:
#line 1208 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 254:
#line 1216 "parser/evoparser.y"
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
#line 1230 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 256:
#line 1239 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 257:
#line 1245 "parser/evoparser.y"
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
#line 1258 "parser/evoparser.y"
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
#line 1271 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 262:
#line 1273 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 263:
#line 1276 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 264:
#line 1283 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 265:
#line 1291 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1292 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1293 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1296 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1297 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 271:
#line 1301 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1310 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 275:
#line 1312 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 278:
#line 1320 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 279:
#line 1322 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 284:
#line 1334 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 285:
#line 1340 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 286:
#line 1347 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 287:
#line 1360 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (4)].subtok) != 12) {
            yyerror(scanner, "ORDER BY supports only the cosine-"
                    "distance operator <=> in expression position");
            YYERROR;
        }
        emit("ORDERBY_VEC %s %s %d", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval));
        AddOrderByVecExpr((yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 288:
#line 1372 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 289:
#line 1373 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 290:
#line 1374 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 291:
#line 1375 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 293:
#line 1387 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 294:
#line 1390 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 295:
#line 1391 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 296:
#line 1392 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 297:
#line 1393 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 298:
#line 1394 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 300:
#line 1398 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 301:
#line 1401 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1402 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 303:
#line 1405 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 304:
#line 1406 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 305:
#line 1407 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 306:
#line 1408 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 307:
#line 1409 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 308:
#line 1410 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 309:
#line 1411 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 310:
#line 1412 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 311:
#line 1413 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 312:
#line 1416 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 313:
#line 1417 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 314:
#line 1419 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 315:
#line 1427 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 316:
#line 1432 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 317:
#line 1433 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 318:
#line 1434 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 319:
#line 1437 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 320:
#line 1438 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 323:
#line 1447 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 324:
#line 1455 "parser/evoparser.y"
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

  case 325:
#line 1464 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 326:
#line 1465 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 327:
#line 1467 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 328:
#line 1476 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 329:
#line 1481 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 330:
#line 1487 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 331:
#line 1494 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 332:
#line 1498 "parser/evoparser.y"
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

  case 333:
#line 1518 "parser/evoparser.y"
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

  case 336:
#line 1544 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 337:
#line 1546 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 338:
#line 1548 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 339:
#line 1550 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 340:
#line 1552 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 341:
#line 1555 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 342:
#line 1556 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 343:
#line 1557 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 344:
#line 1560 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 345:
#line 1561 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 346:
#line 1564 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 347:
#line 1565 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 348:
#line 1568 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 349:
#line 1569 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 350:
#line 1570 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 353:
#line 1577 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 354:
#line 1578 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 355:
#line 1583 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1585 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 357:
#line 1587 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 359:
#line 1591 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 360:
#line 1592 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 361:
#line 1595 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 362:
#line 1596 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 363:
#line 1599 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 364:
#line 1604 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 365:
#line 1614 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 366:
#line 1621 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 367:
#line 1622 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 368:
#line 1623 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 369:
#line 1624 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 370:
#line 1629 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 371:
#line 1633 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 372:
#line 1635 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 375:
#line 1641 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 376:
#line 1646 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 377:
#line 1653 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 378:
#line 1660 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 380:
#line 1672 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 381:
#line 1673 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 382:
#line 1678 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 383:
#line 1685 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 384:
#line 1692 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 385:
#line 1700 "parser/evoparser.y"
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

  case 386:
#line 1710 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 387:
#line 1718 "parser/evoparser.y"
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

  case 388:
#line 1728 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 389:
#line 1736 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 390:
#line 1745 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 391:
#line 1754 "parser/evoparser.y"
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

  case 392:
#line 1764 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 393:
#line 1772 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 394:
#line 1781 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 395:
#line 1790 "parser/evoparser.y"
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

  case 396:
#line 1800 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 397:
#line 1809 "parser/evoparser.y"
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

  case 398:
#line 1826 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 399:
#line 1834 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX IF NOT EXISTS %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval), (yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval));
        free((yyvsp[(5) - (14)].strval)); free((yyvsp[(7) - (14)].strval)); free((yyvsp[(11) - (14)].strval));
    ;}
    break;

  case 400:
#line 1845 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 401:
#line 1847 "parser/evoparser.y"
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

  case 402:
#line 1860 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 403:
#line 1861 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 404:
#line 1864 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 405:
#line 1866 "parser/evoparser.y"
    {
        int lm = ((yyvsp[(1) - (3)].intval) >> 16) & 0xFFFF, le = (yyvsp[(1) - (3)].intval) & 0xFFFF;
        int rm = ((yyvsp[(3) - (3)].intval) >> 16) & 0xFFFF, re = (yyvsp[(3) - (3)].intval) & 0xFFFF;
        /* Later entries override earlier ones; 0 means "not set in this item". */
        int m  = rm ? rm : lm;
        int ef = re ? re : le;
        (yyval.intval) = (m << 16) | ef;
    ;}
    break;

  case 406:
#line 1878 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 407:
#line 1888 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 408:
#line 1893 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 409:
#line 1898 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 410:
#line 1904 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 411:
#line 1911 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 412:
#line 1918 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 413:
#line 1925 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 414:
#line 1935 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 415:
#line 1942 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 416:
#line 1951 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 417:
#line 1958 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 418:
#line 1964 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 419:
#line 1972 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 420:
#line 1978 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 422:
#line 1986 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 423:
#line 1987 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 424:
#line 1988 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 425:
#line 1989 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 426:
#line 2005 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 2006 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 2007 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 429:
#line 2016 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 430:
#line 2017 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 431:
#line 2022 "parser/evoparser.y"
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

  case 432:
#line 2032 "parser/evoparser.y"
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

  case 433:
#line 2047 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 434:
#line 2048 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 435:
#line 2053 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 436:
#line 2061 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s CASCADE", (yyvsp[(4) - (5)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (5)].strval));
        SetCheckpointStoreCascade(1);
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 437:
#line 2070 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 438:
#line 2092 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 439:
#line 2093 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 440:
#line 2094 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 441:
#line 2099 "parser/evoparser.y"
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

  case 442:
#line 2116 "parser/evoparser.y"
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

  case 443:
#line 2137 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 444:
#line 2138 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 445:
#line 2144 "parser/evoparser.y"
    {
        emit("CHECKPOINT GET FROM %s THREAD %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (6)].strval));
        SetCheckpointThread((yyvsp[(6) - (6)].strval));
        CheckpointGetProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 446:
#line 2153 "parser/evoparser.y"
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

  case 447:
#line 2167 "parser/evoparser.y"
    {
        emit("CHECKPOINT LIST FROM %s THREAD %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (6)].strval));
        SetCheckpointThread((yyvsp[(6) - (6)].strval));
        CheckpointListProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 448:
#line 2176 "parser/evoparser.y"
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

  case 449:
#line 2201 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2202 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2203 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2204 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2205 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 454:
#line 2206 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 455:
#line 2207 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 456:
#line 2212 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 457:
#line 2219 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 458:
#line 2230 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 463:
#line 2244 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 464:
#line 2246 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 465:
#line 2251 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 466:
#line 2259 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s CASCADE", (yyvsp[(4) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (5)].strval));
        SetMemoryStoreCascade(1);
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 467:
#line 2268 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 468:
#line 2280 "parser/evoparser.y"
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

  case 469:
#line 2292 "parser/evoparser.y"
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

  case 470:
#line 2306 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 471:
#line 2307 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 472:
#line 2313 "parser/evoparser.y"
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

  case 473:
#line 2327 "parser/evoparser.y"
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

  case 474:
#line 2337 "parser/evoparser.y"
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

  case 475:
#line 2351 "parser/evoparser.y"
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

  case 476:
#line 2365 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 477:
#line 2373 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s PREFIX %s", (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (7)].strval));
        SetMemoryPrefix((yyvsp[(7) - (7)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 478:
#line 2384 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 479:
#line 2390 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 480:
#line 2401 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 481:
#line 2407 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 482:
#line 2414 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 483:
#line 2420 "parser/evoparser.y"
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

  case 484:
#line 2441 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 485:
#line 2442 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 486:
#line 2443 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 487:
#line 2444 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 488:
#line 2449 "parser/evoparser.y"
    {
        emit("CREATE SUBSCRIPTION %s FOR %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (6)].strval));
        SetSubscriptionChannel((yyvsp[(6) - (6)].strval));
        CreateSubscriptionProcess(0);
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 489:
#line 2458 "parser/evoparser.y"
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

  case 490:
#line 2475 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        DropSubscriptionProcess(0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 491:
#line 2483 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (5)].strval));
        DropSubscriptionProcess(1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 492:
#line 2494 "parser/evoparser.y"
    {
        emit("RESUME SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        ResumeSubscriptionProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 493:
#line 2505 "parser/evoparser.y"
    {
        emit("ACK SUBSCRIPTION %s UPTO %d", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (5)].strval));
        SetSubscriptionAckSeq((long long)(yyvsp[(5) - (5)].intval));
        AckSubscriptionProcess();
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 494:
#line 2524 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 495:
#line 2525 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 496:
#line 2526 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 497:
#line 2531 "parser/evoparser.y"
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

  case 498:
#line 2541 "parser/evoparser.y"
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

  case 499:
#line 2554 "parser/evoparser.y"
    {
        emit("DROP JOB %s", (yyvsp[(3) - (3)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (3)].strval));
        SetJobDropIfExists(0);
        DropJobProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 500:
#line 2563 "parser/evoparser.y"
    {
        emit("DROP JOB IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(5) - (5)].strval));
        SetJobDropIfExists(1);
        DropJobProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 501:
#line 2575 "parser/evoparser.y"
    {
        emit("ALTER JOB %s ENABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(1);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 502:
#line 2583 "parser/evoparser.y"
    {
        emit("ALTER JOB %s DISABLE", (yyvsp[(3) - (4)].strval));
        ResetScheduleOpts();
        SetJobDropName((yyvsp[(3) - (4)].strval));
        AlterJobProcess(0);
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 503:
#line 2603 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 504:
#line 2604 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 505:
#line 2605 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 506:
#line 2610 "parser/evoparser.y"
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

  case 507:
#line 2622 "parser/evoparser.y"
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

  case 508:
#line 2647 "parser/evoparser.y"
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

  case 509:
#line 2659 "parser/evoparser.y"
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

  case 510:
#line 2674 "parser/evoparser.y"
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

  case 511:
#line 2686 "parser/evoparser.y"
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

  case 512:
#line 2698 "parser/evoparser.y"
    {
        emit("MESSAGE READ FROM %s SESSION=%s", (yyvsp[(4) - (8)].strval), (yyvsp[(8) - (8)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (8)].strval));
        SetMessageLogSession((yyvsp[(8) - (8)].strval));
        LogReadProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 513:
#line 2707 "parser/evoparser.y"
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

  case 514:
#line 2717 "parser/evoparser.y"
    {
        emit("MESSAGE TRUNCATE FROM %s SESSION=%s", (yyvsp[(4) - (8)].strval), (yyvsp[(8) - (8)].strval));
        ResetMessageLogOpts();
        SetMessageLogName((yyvsp[(4) - (8)].strval));
        SetMessageLogSession((yyvsp[(8) - (8)].strval));
        LogTruncateProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 515:
#line 2726 "parser/evoparser.y"
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

  case 516:
#line 2736 "parser/evoparser.y"
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

  case 517:
#line 2759 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 518:
#line 2760 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 519:
#line 2761 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 520:
#line 2766 "parser/evoparser.y"
    {
        emit("CREATE DOCUMENT STORE %s", (yyvsp[(4) - (6)].strval));
        SetDocumentStoreName((yyvsp[(4) - (6)].strval));
        CreateDocumentStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 521:
#line 2773 "parser/evoparser.y"
    {
        emit("CREATE DOCUMENT STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetDocumentStoreName((yyvsp[(6) - (8)].strval));
        CreateDocumentStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 522:
#line 2782 "parser/evoparser.y"
    { ResetDocumentOpts(); ;}
    break;

  case 527:
#line 2796 "parser/evoparser.y"
    { SetDocumentEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 528:
#line 2798 "parser/evoparser.y"
    { SetDocumentDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 529:
#line 2803 "parser/evoparser.y"
    {
        emit("DROP DOCUMENT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (4)].strval));
        DropDocumentStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 530:
#line 2811 "parser/evoparser.y"
    {
        emit("DROP DOCUMENT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(6) - (6)].strval));
        DropDocumentStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 531:
#line 2822 "parser/evoparser.y"
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

  case 532:
#line 2833 "parser/evoparser.y"
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

  case 533:
#line 2845 "parser/evoparser.y"
    {
        emit("DOCUMENT FILTER FROM %s WHERE json", (yyvsp[(4) - (6)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (6)].strval));
        SetDocumentFilterJson((yyvsp[(6) - (6)].strval));
        DocumentFilterProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 534:
#line 2854 "parser/evoparser.y"
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

  case 535:
#line 2864 "parser/evoparser.y"
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

  case 536:
#line 2874 "parser/evoparser.y"
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

  case 537:
#line 2885 "parser/evoparser.y"
    {
        emit("DOCUMENT DELETE FROM %s WHERE json", (yyvsp[(4) - (6)].strval));
        ResetDocumentOpts();
        SetDocumentStoreName((yyvsp[(4) - (6)].strval));
        SetDocumentFilterJson((yyvsp[(6) - (6)].strval));
        DocumentDeleteProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 538:
#line 2902 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 539:
#line 2903 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 540:
#line 2904 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 541:
#line 2909 "parser/evoparser.y"
    {
        emit("CREATE GRAPH STORE %s", (yyvsp[(4) - (4)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(4) - (4)].strval));
        CreateGraphStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 542:
#line 2917 "parser/evoparser.y"
    {
        emit("CREATE GRAPH STORE IF NOT EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (6)].strval));
        CreateGraphStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 543:
#line 2928 "parser/evoparser.y"
    {
        emit("DROP GRAPH STORE %s", (yyvsp[(4) - (4)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(4) - (4)].strval));
        DropGraphStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 544:
#line 2936 "parser/evoparser.y"
    {
        emit("DROP GRAPH STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (6)].strval));
        DropGraphStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 545:
#line 2947 "parser/evoparser.y"
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

  case 546:
#line 2958 "parser/evoparser.y"
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

  case 547:
#line 2970 "parser/evoparser.y"
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

  case 548:
#line 2982 "parser/evoparser.y"
    {
        emit("GRAPH NEIGHBORS OF %s IN %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetGraphOpts();
        SetGraphStoreName((yyvsp[(6) - (6)].strval));
        SetGraphNeighborsId((yyvsp[(4) - (6)].strval));
        GraphNeighborsProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 549:
#line 2991 "parser/evoparser.y"
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

  case 550:
#line 3001 "parser/evoparser.y"
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

  case 551:
#line 3019 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 552:
#line 3020 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 553:
#line 3021 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 554:
#line 3026 "parser/evoparser.y"
    {
        emit("CREATE ENTITY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (4)].strval));
        CreateEntityStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 555:
#line 3034 "parser/evoparser.y"
    {
        emit("CREATE ENTITY STORE IF NOT EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(6) - (6)].strval));
        CreateEntityStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 556:
#line 3045 "parser/evoparser.y"
    {
        emit("DROP ENTITY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (4)].strval));
        DropEntityStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 557:
#line 3053 "parser/evoparser.y"
    {
        emit("DROP ENTITY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(6) - (6)].strval));
        DropEntityStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 558:
#line 3064 "parser/evoparser.y"
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

  case 559:
#line 3075 "parser/evoparser.y"
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

  case 560:
#line 3086 "parser/evoparser.y"
    {
        emit("ENTITY GET FROM %s KEY=%s", (yyvsp[(4) - (8)].strval), (yyvsp[(8) - (8)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (8)].strval));
        SetEntityKey((yyvsp[(8) - (8)].strval));
        EntityGetProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 561:
#line 3095 "parser/evoparser.y"
    {
        emit("ENTITY RANK FROM %s", (yyvsp[(4) - (4)].strval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (4)].strval));
        EntityRankProcess();
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 562:
#line 3103 "parser/evoparser.y"
    {
        emit("ENTITY RANK FROM %s LIMIT %d", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].intval));
        ResetEntityOpts();
        SetEntityStoreName((yyvsp[(4) - (6)].strval));
        SetEntityLimit((yyvsp[(6) - (6)].intval));
        EntityRankProcess();
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 563:
#line 3115 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 564:
#line 3122 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 565:
#line 3131 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 566:
#line 3139 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 567:
#line 3145 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 569:
#line 3162 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 570:
#line 3166 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 571:
#line 3175 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 573:
#line 3190 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 574:
#line 3194 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 575:
#line 3199 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 576:
#line 3206 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 577:
#line 3211 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 578:
#line 3218 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 579:
#line 3222 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 580:
#line 3223 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 581:
#line 3229 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 582:
#line 3241 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 583:
#line 3250 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 584:
#line 3251 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 585:
#line 3252 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 586:
#line 3256 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 587:
#line 3257 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 588:
#line 3258 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 589:
#line 3259 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 590:
#line 3260 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 591:
#line 3261 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 594:
#line 3270 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 595:
#line 3271 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 597:
#line 3276 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 599:
#line 3281 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 600:
#line 3286 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 601:
#line 3293 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 602:
#line 3302 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 603:
#line 3308 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 604:
#line 3314 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 605:
#line 3321 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 606:
#line 3327 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 607:
#line 3334 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 608:
#line 3340 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 609:
#line 3346 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 610:
#line 3352 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 611:
#line 3358 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 612:
#line 3364 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 613:
#line 3370 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 614:
#line 3376 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 615:
#line 3382 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 616:
#line 3388 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 617:
#line 3394 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 618:
#line 3400 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 619:
#line 3406 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 620:
#line 3412 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 621:
#line 3418 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 622:
#line 3424 "parser/evoparser.y"
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

  case 623:
#line 3437 "parser/evoparser.y"
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

  case 624:
#line 3447 "parser/evoparser.y"
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

  case 625:
#line 3457 "parser/evoparser.y"
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

  case 626:
#line 3467 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s SET TTL %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableSetTtl((yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 627:
#line 3473 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s DROP TTL", (yyvsp[(3) - (5)].strval));
        AlterTableSetTtl((yyvsp[(3) - (5)].strval), NULL);
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 628:
#line 3480 "parser/evoparser.y"
    { ;}
    break;

  case 629:
#line 3481 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 630:
#line 3482 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 631:
#line 3486 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 632:
#line 3494 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 633:
#line 3500 "parser/evoparser.y"
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

  case 635:
#line 3513 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 636:
#line 3513 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 639:
#line 3521 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 640:
#line 3522 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 641:
#line 3523 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 642:
#line 3527 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 643:
#line 3528 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 644:
#line 3529 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 645:
#line 3533 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 646:
#line 3541 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 647:
#line 3550 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 648:
#line 3551 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 649:
#line 3552 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 650:
#line 3553 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 651:
#line 3554 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 655:
#line 3561 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 656:
#line 3565 "parser/evoparser.y"
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

  case 657:
#line 3575 "parser/evoparser.y"
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

  case 658:
#line 3587 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 659:
#line 3588 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 660:
#line 3588 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 661:
#line 3591 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 662:
#line 3592 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 663:
#line 3593 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 664:
#line 3594 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 665:
#line 3598 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 666:
#line 3601 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 667:
#line 3602 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 668:
#line 3603 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 669:
#line 3604 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 670:
#line 3610 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 671:
#line 3616 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 672:
#line 3621 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 673:
#line 3626 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 674:
#line 3630 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 675:
#line 3634 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 676:
#line 3636 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 679:
#line 3642 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 680:
#line 3643 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 681:
#line 3647 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 682:
#line 3648 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 683:
#line 3652 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 684:
#line 3653 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 685:
#line 3654 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 692:
#line 3669 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 693:
#line 3670 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 694:
#line 3671 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 695:
#line 3672 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 696:
#line 3673 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 697:
#line 3674 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 698:
#line 3675 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 699:
#line 3676 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 700:
#line 3681 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 701:
#line 3690 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 702:
#line 3697 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 703:
#line 3698 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 704:
#line 3699 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 705:
#line 3704 "parser/evoparser.y"
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

  case 706:
#line 3715 "parser/evoparser.y"
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

  case 707:
#line 3727 "parser/evoparser.y"
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

  case 708:
#line 3738 "parser/evoparser.y"
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

  case 709:
#line 3753 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 710:
#line 3757 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 711:
#line 3761 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 712:
#line 3762 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 713:
#line 3767 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 714:
#line 3769 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 715:
#line 3771 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 716:
#line 3773 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 717:
#line 3776 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 718:
#line 3777 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 719:
#line 3783 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 720:
#line 3788 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 721:
#line 3790 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 722:
#line 3792 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 723:
#line 3794 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 724:
#line 3796 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 725:
#line 3800 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 726:
#line 3804 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 727:
#line 3805 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 728:
#line 3810 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 729:
#line 3820 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 731:
#line 3833 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 732:
#line 3841 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 733:
#line 3849 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 735:
#line 3857 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 736:
#line 3858 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 737:
#line 3859 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 738:
#line 3860 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 739:
#line 3862 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 740:
#line 3864 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 741:
#line 3866 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 742:
#line 3871 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 743:
#line 3876 "parser/evoparser.y"
    { emit("TABLE OPT TTL_COLUMN %s", (yyvsp[(6) - (7)].strval)); SetTableTtlColumn((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 746:
#line 3884 "parser/evoparser.y"
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

  case 747:
#line 3899 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 748:
#line 3907 "parser/evoparser.y"
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

  case 749:
#line 3921 "parser/evoparser.y"
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

  case 750:
#line 3935 "parser/evoparser.y"
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

  case 751:
#line 3949 "parser/evoparser.y"
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

  case 752:
#line 3961 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 753:
#line 3962 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 754:
#line 3963 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 755:
#line 3966 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 756:
#line 3967 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 757:
#line 3970 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 758:
#line 3971 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 759:
#line 3972 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 760:
#line 3973 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 761:
#line 3974 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 762:
#line 3975 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 763:
#line 3976 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 764:
#line 3977 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 765:
#line 3979 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 766:
#line 3981 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 767:
#line 3983 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 768:
#line 3985 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 769:
#line 3987 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 770:
#line 3989 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 771:
#line 3992 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 772:
#line 3993 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 773:
#line 3996 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 774:
#line 3997 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 775:
#line 4000 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 776:
#line 4001 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 778:
#line 4005 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 779:
#line 4006 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 780:
#line 4007 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 781:
#line 4008 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 782:
#line 4009 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 783:
#line 4010 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 784:
#line 4011 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 785:
#line 4012 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 786:
#line 4013 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 787:
#line 4014 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 788:
#line 4015 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 789:
#line 4016 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 790:
#line 4017 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 791:
#line 4018 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 792:
#line 4019 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 793:
#line 4020 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 794:
#line 4021 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 795:
#line 4024 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 796:
#line 4025 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 797:
#line 4028 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 798:
#line 4030 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 799:
#line 4038 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 800:
#line 4039 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 802:
#line 4041 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 803:
#line 4042 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 804:
#line 4043 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 805:
#line 4044 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 806:
#line 4045 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 807:
#line 4046 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 808:
#line 4047 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 809:
#line 4048 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 810:
#line 4049 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 811:
#line 4056 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 812:
#line 4057 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 813:
#line 4058 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 814:
#line 4059 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 815:
#line 4060 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 816:
#line 4061 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 817:
#line 4062 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 818:
#line 4063 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 819:
#line 4064 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 820:
#line 4065 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 821:
#line 4066 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 822:
#line 4067 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 823:
#line 4068 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 824:
#line 4069 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 825:
#line 4070 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 826:
#line 4071 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 827:
#line 4072 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 828:
#line 4073 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 829:
#line 4074 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 830:
#line 4075 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 831:
#line 4076 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 832:
#line 4079 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 833:
#line 4080 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 834:
#line 4081 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 835:
#line 4084 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 836:
#line 4085 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 837:
#line 4088 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 838:
#line 4089 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 839:
#line 4090 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 841:
#line 4094 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 842:
#line 4095 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 843:
#line 4099 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 844:
#line 4100 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 845:
#line 4101 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 846:
#line 4102 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 847:
#line 4103 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 848:
#line 4104 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 849:
#line 4105 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 850:
#line 4106 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 851:
#line 4107 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 852:
#line 4108 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 853:
#line 4109 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 854:
#line 4110 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 855:
#line 4111 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 856:
#line 4112 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 857:
#line 4113 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 858:
#line 4114 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 859:
#line 4115 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 860:
#line 4116 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 861:
#line 4117 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 862:
#line 4118 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 863:
#line 4119 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 864:
#line 4120 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 865:
#line 4121 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 866:
#line 4122 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 867:
#line 4123 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 868:
#line 4124 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 869:
#line 4125 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 870:
#line 4126 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 871:
#line 4127 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 872:
#line 4128 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 873:
#line 4129 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 874:
#line 4130 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 875:
#line 4131 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 876:
#line 4132 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 877:
#line 4133 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 878:
#line 4136 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 879:
#line 4137 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 880:
#line 4141 "parser/evoparser.y"
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

  case 881:
#line 4153 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 882:
#line 4154 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 883:
#line 4155 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 884:
#line 4159 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 885:
#line 4162 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 886:
#line 4163 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 890:
#line 4167 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 891:
#line 4168 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 892:
#line 4176 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 893:
#line 4181 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 894:
#line 4187 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 895:
#line 4193 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 896:
#line 4200 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 897:
#line 4207 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 898:
#line 4213 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 899:
#line 4219 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 900:
#line 4226 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 905:
#line 4242 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 906:
#line 4243 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 907:
#line 4244 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 908:
#line 4245 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 909:
#line 4248 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 910:
#line 4249 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 911:
#line 4250 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 912:
#line 4251 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 913:
#line 4252 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 914:
#line 4253 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 915:
#line 4254 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 916:
#line 4255 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 917:
#line 4256 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 918:
#line 4257 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 927:
#line 4274 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 928:
#line 4275 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1049:
#line 4293 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1050:
#line 4300 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 1051:
#line 4305 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1052:
#line 4311 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1053:
#line 4317 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1054:
#line 4323 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1055:
#line 4334 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 1056:
#line 4339 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 1057:
#line 4345 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 1060:
#line 4356 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 1061:
#line 4357 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1062:
#line 4358 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 1063:
#line 4359 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 1064:
#line 4360 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 1065:
#line 4361 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1066:
#line 4362 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1067:
#line 4369 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 1068:
#line 4374 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 1069:
#line 4380 "parser/evoparser.y"
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

  case 1070:
#line 4395 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 1071:
#line 4396 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 1072:
#line 4399 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1073:
#line 4400 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 1074:
#line 4401 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 1075:
#line 4402 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1076:
#line 4405 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 1077:
#line 4410 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1078:
#line 4416 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1079:
#line 4425 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1080:
#line 4433 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1081:
#line 4443 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 1082:
#line 4448 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 1085:
#line 4461 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1086:
#line 4462 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1087:
#line 4463 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1088:
#line 4464 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1089:
#line 4465 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1090:
#line 4466 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1091:
#line 4467 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1092:
#line 4468 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1093:
#line 4471 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1094:
#line 4476 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1095:
#line 4482 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1096:
#line 4492 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1097:
#line 4499 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1098:
#line 4506 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1099:
#line 4514 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1101:
#line 4524 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1103:
#line 4528 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1104:
#line 4529 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 13588 "parser/evoparser.tab.c"
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


#line 4532 "parser/evoparser.y"

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
