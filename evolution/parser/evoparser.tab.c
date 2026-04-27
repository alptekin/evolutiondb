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
     FPG_CALL_EXTERNAL = 670
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
#line 73 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 1000 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1013 "parser/evoparser.tab.c"

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
#define YYFINAL  139
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   14688

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  433
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  220
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1034
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2667

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   670

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     428,   429,    28,    26,   430,    27,   427,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   426,
       2,   432,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   431,    32,     2,     2,     2,     2,     2,
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
     425
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
    2425,  2431,  2435,  2441,  2443,  2447,  2449,  2454,  2461,  2462,
    2467,  2472,  2475,  2476,  2481,  2489,  2494,  2496,  2500,  2502,
    2504,  2506,  2517,  2530,  2531,  2534,  2537,  2538,  2541,  2544,
    2547,  2550,  2553,  2554,  2557,  2559,  2563,  2564,  2569,  2570,
    2576,  2582,  2590,  2601,  2612,  2630,  2643,  2663,  2675,  2682,
    2691,  2698,  2705,  2712,  2722,  2729,  2735,  2744,  2752,  2762,
    2771,  2782,  2792,  2800,  2808,  2817,  2826,  2834,  2840,  2841,
    2843,  2846,  2848,  2859,  2866,  2867,  2868,  2874,  2875,  2880,
    2881,  2885,  2890,  2893,  2894,  2900,  2904,  2910,  2911,  2914,
    2917,  2920,  2923,  2925,  2926,  2927,  2931,  2933,  2937,  2941,
    2942,  2949,  2951,  2953,  2957,  2961,  2969,  2973,  2977,  2983,
    2989,  2991,  3000,  3008,  3016,  3018,  3019,  3027,  3028,  3032,
    3034,  3038,  3040,  3042,  3044,  3046,  3048,  3049,  3051,  3056,
    3060,  3062,  3066,  3069,  3072,  3075,  3077,  3080,  3083,  3086,
    3088,  3090,  3100,  3101,  3104,  3107,  3111,  3117,  3123,  3131,
    3137,  3139,  3144,  3149,  3153,  3159,  3163,  3169,  3170,  3173,
    3175,  3181,  3189,  3197,  3207,  3219,  3221,  3224,  3228,  3230,
    3241,  3242,  3247,  3259,  3278,  3279,  3284,  3288,  3294,  3300,
    3310,  3321,  3329,  3334,  3342,  3344,  3348,  3358,  3368,  3378,
    3385,  3397,  3406,  3407,  3409,  3412,  3414,  3418,  3424,  3432,
    3437,  3442,  3448,  3454,  3459,  3466,  3478,  3492,  3506,  3522,
    3527,  3534,  3536,  3540,  3542,  3546,  3548,  3552,  3553,  3558,
    3564,  3569,  3575,  3580,  3586,  3591,  3597,  3602,  3607,  3611,
    3615,  3619,  3622,  3626,  3631,  3636,  3638,  3642,  3643,  3648,
    3649,  3653,  3656,  3660,  3664,  3668,  3672,  3678,  3684,  3690,
    3694,  3700,  3703,  3711,  3717,  3725,  3731,  3734,  3738,  3741,
    3745,  3748,  3752,  3758,  3763,  3769,  3777,  3786,  3795,  3803,
    3810,  3817,  3823,  3824,  3828,  3834,  3835,  3837,  3838,  3841,
    3844,  3845,  3850,  3854,  3857,  3861,  3865,  3869,  3873,  3877,
    3881,  3885,  3889,  3893,  3897,  3899,  3901,  3903,  3905,  3907,
    3911,  3917,  3920,  3925,  3927,  3929,  3931,  3933,  3937,  3941,
    3945,  3949,  3955,  3961,  3963,  3965,  3967,  3972,  3976,  3978,
    3982,  3986,  3987,  3989,  3991,  3993,  3997,  4001,  4004,  4006,
    4010,  4014,  4018,  4020,  4031,  4041,  4054,  4066,  4079,  4091,
    4106,  4120,  4121,  4123,  4125,  4129,  4132,  4136,  4140,  4144,
    4146,  4148,  4150,  4152,  4154,  4156,  4158,  4160,  4162,  4164,
    4165,  4168,  4173,  4179,  4185,  4191,  4197,  4203,  4205,  4207,
    4209,  4211,  4213,  4215,  4217,  4219,  4221,  4223,  4225,  4227,
    4229,  4231,  4233,  4235,  4237,  4239,  4241,  4243,  4245,  4247,
    4249,  4251,  4253,  4255,  4257,  4259,  4261,  4263,  4265,  4267,
    4269,  4271,  4273,  4275,  4277,  4279,  4281,  4283,  4285,  4287,
    4289,  4291,  4293,  4295,  4297,  4299,  4301,  4303,  4305,  4307,
    4309,  4311,  4313,  4315,  4317,  4319,  4321,  4323,  4325,  4327,
    4329,  4331,  4333,  4335,  4337,  4339,  4341,  4343,  4345,  4347,
    4349,  4351,  4353,  4355,  4357,  4359,  4361,  4363,  4365,  4367,
    4369,  4371,  4373,  4375,  4377,  4379,  4381,  4383,  4385,  4387,
    4389,  4391,  4393,  4395,  4397,  4399,  4401,  4403,  4405,  4407,
    4409,  4411,  4413,  4415,  4417,  4419,  4421,  4423,  4425,  4427,
    4429,  4431,  4433,  4435,  4437,  4439,  4441,  4443,  4445,  4447,
    4449,  4451,  4455,  4461,  4465,  4471,  4473,  4478,  4484,  4486,
    4490,  4492,  4494,  4496,  4498,  4500,  4502,  4504,  4506,  4520,
    4536,  4538,  4540,  4542,  4544,  4546,  4548,  4550,  4554,  4560,
    4565,  4570,  4572,  4578,  4579,  4582,  4586,  4589,  4593,  4596,
    4599,  4602,  4604,  4607,  4609,  4613,  4619,  4624,  4629,  4636,
    4643,  4644,  4647,  4650,  4652
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     434,     0,    -1,   473,   426,    -1,   473,   426,   434,    -1,
       3,    -1,     3,   427,     3,    -1,    89,   427,     3,    -1,
     183,   428,     3,   429,    91,   428,     4,   429,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   435,    26,   435,    -1,   435,    27,   435,    -1,   435,
      28,   435,    -1,   435,    29,   435,    -1,   435,    30,   435,
      -1,   435,    31,   435,    -1,    27,   435,    -1,   428,   435,
     429,    -1,   435,    12,   435,    -1,   435,    10,   435,    -1,
     435,    11,   435,    -1,   435,    23,   435,    -1,   435,    24,
     435,    -1,   435,    32,   435,    -1,   435,    25,   435,    -1,
     435,    34,   435,    -1,   435,    33,   435,    -1,    18,   435,
      -1,    17,   435,    -1,   435,    20,   435,    -1,    -1,   435,
      20,   428,   436,   474,   429,    -1,    -1,   435,    20,    47,
     428,   437,   474,   429,    -1,    -1,   435,    20,   232,   428,
     438,   474,   429,    -1,    -1,   435,    20,    40,   428,   439,
     474,   429,    -1,   435,    20,    47,   428,   443,   429,    -1,
     435,    20,   232,   428,   443,   429,    -1,   435,    15,   193,
      -1,   435,    15,    18,   193,    -1,   435,    15,     6,    -1,
     435,    15,    18,     6,    -1,     8,     9,   435,    -1,   435,
      19,   435,    50,   435,    -1,   435,    18,    19,   435,    50,
     435,    -1,   435,    -1,   435,   430,   440,    -1,   435,    -1,
     435,   430,   441,    -1,    -1,   263,    36,   442,   441,   431,
      -1,   263,    36,   431,    -1,   435,    36,   435,   431,    -1,
     435,    -1,   380,   428,   435,   429,    -1,   380,   428,   435,
     430,   435,   429,    -1,   381,   428,   435,   429,    -1,   382,
     428,   435,   430,   435,   429,    -1,   383,   428,   429,    -1,
     414,   428,   429,    -1,   384,   428,   435,   430,   435,   429,
      -1,   385,   428,   435,   430,   435,   429,    -1,   386,   428,
     435,   430,   435,   429,    -1,   387,   428,   435,   430,   435,
     429,    -1,   388,   428,   435,   429,    -1,   389,   428,   435,
     429,    -1,   390,   428,   435,   429,    -1,   435,    22,   435,
      -1,   435,    21,   435,    -1,   392,   428,   435,   430,   435,
     430,   435,   430,     5,   429,    -1,   393,   428,   435,   430,
     435,   430,   435,   430,     5,   430,     4,   429,    -1,   394,
     428,   435,   430,   435,   430,   435,   430,     5,   430,     4,
     429,    -1,    -1,   440,    -1,    -1,   435,    16,   428,   445,
     440,   429,    -1,    -1,   435,    18,    16,   428,   446,   440,
     429,    -1,    -1,   435,    16,   428,   447,   474,   429,    -1,
      -1,   435,    18,    16,   428,   448,   474,   429,    -1,    -1,
     281,   428,   449,   474,   429,    -1,     3,   428,   444,   429,
      -1,   322,   428,    28,   429,    -1,   322,   428,   435,   429,
      -1,   323,   428,   435,   429,    -1,   324,   428,   435,   429,
      -1,   325,   428,   435,   429,    -1,   326,   428,   435,   429,
      -1,   320,   428,   435,   429,    -1,   320,   428,   435,   321,
       4,   429,    -1,    -1,   342,   428,   429,   350,   428,   450,
     481,   483,   429,    -1,    -1,   343,   428,   429,   350,   428,
     451,   481,   483,   429,    -1,    -1,   344,   428,   429,   350,
     428,   452,   481,   483,   429,    -1,    -1,   323,   428,   435,
     429,   350,   428,   453,   481,   483,   429,    -1,    -1,   322,
     428,    28,   429,   350,   428,   454,   481,   483,   429,    -1,
      -1,   322,   428,   435,   429,   350,   428,   455,   481,   483,
     429,    -1,    -1,   324,   428,   435,   429,   350,   428,   456,
     481,   483,   429,    -1,    -1,   325,   428,   435,   429,   350,
     428,   457,   481,   483,   429,    -1,    -1,   326,   428,   435,
     429,   350,   428,   458,   481,   483,   429,    -1,    -1,   345,
     428,   435,   429,   350,   428,   459,   481,   483,   429,    -1,
      -1,   345,   428,   435,   430,     5,   429,   350,   428,   460,
     481,   483,   429,    -1,    -1,   345,   428,   435,   430,     5,
     430,     4,   429,   350,   428,   461,   481,   483,   429,    -1,
      -1,   345,   428,   435,   430,     5,   430,     5,   429,   350,
     428,   462,   481,   483,   429,    -1,    -1,   346,   428,   435,
     429,   350,   428,   463,   481,   483,   429,    -1,    -1,   346,
     428,   435,   430,     5,   429,   350,   428,   464,   481,   483,
     429,    -1,    -1,   346,   428,   435,   430,     5,   430,     4,
     429,   350,   428,   465,   481,   483,   429,    -1,    -1,   346,
     428,   435,   430,     5,   430,     5,   429,   350,   428,   466,
     481,   483,   429,    -1,    -1,   347,   428,     5,   429,   350,
     428,   467,   481,   483,   429,    -1,    -1,   348,   428,   429,
     350,   428,   468,   481,   483,   429,    -1,    -1,   349,   428,
     429,   350,   428,   469,   481,   483,   429,    -1,   282,   428,
     435,   430,   435,   430,   435,   429,    -1,   282,   428,   435,
     430,   435,   429,    -1,   282,   428,   435,   136,   435,   429,
      -1,   282,   428,   435,   136,   435,   140,   435,   429,    -1,
     283,   428,   435,   429,    -1,   283,   428,   470,   435,   136,
     435,   429,    -1,   283,   428,   470,   136,   435,   429,    -1,
     327,   428,   435,   429,    -1,   328,   428,   435,   429,    -1,
     329,   428,   435,   429,    -1,   424,   428,   435,   429,    -1,
     425,   428,   435,   430,   435,   429,    -1,   330,   428,   435,
     430,   435,   429,    -1,   331,   428,   435,   430,   435,   430,
     435,   429,    -1,   332,   428,   435,   430,   435,   429,    -1,
     294,   428,   435,   430,   435,   429,    -1,   295,   428,   435,
     430,   435,   429,    -1,   296,   428,   435,   430,   435,   430,
     435,   429,    -1,   297,   428,   435,   430,   435,   430,   435,
     429,    -1,   298,   428,   435,   429,    -1,   299,   428,   435,
     430,   435,   429,    -1,   300,   428,   435,   430,   435,   429,
      -1,   301,   428,   435,   430,   435,   429,    -1,   302,   428,
     435,   429,    -1,   303,   428,   435,   429,    -1,   304,   428,
     435,   429,    -1,   305,   428,   435,   430,   435,   429,    -1,
     305,   428,   435,   429,    -1,   306,   428,   435,   430,   435,
     429,    -1,   307,   428,   435,   429,    -1,   308,   428,   435,
     430,   435,   429,    -1,   309,   428,   429,    -1,   310,   428,
     435,   429,    -1,   311,   428,   435,   429,    -1,   312,   428,
     435,   429,    -1,   313,   428,   429,    -1,   293,   428,   429,
      -1,   286,   428,   435,   430,   435,   429,    -1,   287,   428,
     435,   429,    -1,   288,   428,   435,   429,    -1,   289,   428,
     435,   429,    -1,   290,   428,   435,   429,    -1,   291,   428,
     435,   429,    -1,   292,   428,   435,   429,    -1,   352,   428,
     435,   430,   435,   429,    -1,   353,   428,   435,   429,    -1,
     354,   428,   435,   429,    -1,   355,   428,   435,   429,    -1,
     356,   428,   435,   429,    -1,   357,   428,   435,   429,    -1,
     358,   428,   435,   429,    -1,   359,   428,   435,   429,    -1,
     360,   428,   435,   429,    -1,   361,   428,   435,   430,   435,
     430,   435,   429,    -1,   362,   428,   435,   430,   435,   430,
     435,   429,    -1,   363,   428,   435,   430,   435,   430,   435,
     429,    -1,   364,   428,   435,   430,   435,   429,    -1,   365,
     428,   435,   430,   435,   429,    -1,   366,   428,   435,   430,
     435,   430,   435,   429,    -1,   367,   428,   435,   430,   435,
     430,   435,   429,    -1,   368,   428,   435,   430,   435,   429,
      -1,   368,   428,   435,   430,   435,   430,   435,   430,   435,
     429,    -1,   369,   428,   435,   429,    -1,   369,   428,   435,
     430,   435,   429,    -1,   369,   428,   435,   430,   435,   430,
     435,   429,    -1,   370,   428,   435,   429,    -1,   372,   428,
     435,   429,    -1,   373,   428,   435,   429,    -1,   374,   428,
     435,   430,   435,   429,    -1,   374,   428,   435,   430,   435,
     430,   435,   429,    -1,   375,   428,   429,    -1,   314,   428,
     435,    51,   625,   429,    -1,   315,   428,   435,   430,   625,
     429,    -1,   316,   428,   435,   430,   435,   429,    -1,   317,
     428,   435,   430,   435,   429,    -1,   318,   428,   435,   430,
     435,   430,   435,   429,    -1,   435,    15,   319,    -1,   330,
     428,   435,   430,   435,   430,   435,   429,    -1,   330,   428,
     435,   430,   435,   430,   435,   430,   435,   429,    -1,   333,
     428,   429,    -1,   334,   428,   429,    -1,   335,   428,   429,
      -1,   336,   428,   429,    -1,   337,   428,   429,    -1,   338,
      -1,   339,    -1,   340,   428,   435,   429,    -1,   341,   428,
     435,   430,   435,   429,    -1,   178,    -1,   254,    -1,    65,
      -1,   284,   428,   435,   430,   471,   429,    -1,   285,   428,
     435,   430,   471,   429,    -1,   161,   435,   278,    -1,   161,
     435,   104,    -1,   161,   435,   105,    -1,   161,   435,   109,
      -1,   161,   435,   111,    -1,   161,   435,   279,    -1,   161,
     435,   145,    -1,   161,   435,   144,    -1,   161,   435,   147,
      -1,    77,   435,   472,   124,    -1,    77,   435,   472,   125,
     435,   124,    -1,    77,   472,   124,    -1,    77,   472,   125,
     435,   124,    -1,   275,   435,   253,   435,    -1,   472,   275,
     435,   253,   435,    -1,   435,    14,   435,    -1,   435,    18,
      14,   435,    -1,   435,    13,   435,    -1,   435,    18,    13,
     435,    -1,    72,    -1,    80,    -1,    81,    -1,   225,    -1,
     474,    -1,   241,   493,   494,    -1,   241,   493,   494,   136,
     497,   489,   475,   476,   480,   485,   488,   490,   491,    -1,
     241,   493,   494,   159,     3,   136,   497,   475,   476,   480,
     485,   488,    -1,    -1,   274,   435,    -1,    -1,   141,    63,
     477,   479,    -1,   435,   478,    -1,   477,   430,   435,   478,
      -1,    -1,    49,    -1,   112,    -1,    -1,   277,   214,    -1,
      -1,   148,   435,    -1,    -1,   351,    63,   482,    -1,     3,
      -1,   482,   430,     3,    -1,    -1,   198,    63,   484,    -1,
       3,   478,    -1,   484,   430,     3,   478,    -1,    -1,   198,
      63,   486,    -1,   487,    -1,   486,   430,   487,    -1,     3,
     478,    -1,     3,   427,     3,   478,    -1,     5,   478,    -1,
      -1,   179,   435,    -1,   179,   435,   430,   435,    -1,   179,
     435,   181,   435,    -1,    -1,   140,   412,    51,    94,   413,
       5,    -1,    -1,   140,   258,    -1,   140,   230,    -1,   140,
     258,   231,   180,    -1,   140,   230,   231,   180,    -1,    -1,
     159,   492,    -1,     3,    -1,   492,   430,     3,    -1,    -1,
     493,    40,    -1,   493,   106,    -1,   493,   110,    -1,   493,
     146,    -1,   493,   238,    -1,   493,   226,    -1,   493,   234,
      -1,   493,   233,    -1,   495,    -1,   494,   430,   495,    -1,
      28,    -1,   435,   496,    -1,    51,     3,    -1,     3,    -1,
      -1,   498,    -1,   497,   430,   498,    -1,   499,    -1,   503,
      -1,     3,   496,   510,    -1,   173,     3,   496,   510,    -1,
       3,   427,     3,   496,   510,    -1,   513,   502,     3,    -1,
     500,   502,     3,    -1,   381,   428,   435,   429,    -1,   381,
     428,   435,   429,   502,     3,    -1,   381,   428,   435,   429,
     502,     3,   428,     3,   429,    -1,   428,   497,   429,    -1,
      -1,   167,   428,   501,   474,   429,    -1,    51,    -1,    -1,
     498,   504,   163,   499,   508,    -1,   498,   238,   499,    -1,
     498,   238,   499,   197,   435,    -1,   498,   506,   505,   163,
     499,   509,    -1,   498,   190,   507,   163,   499,    -1,    -1,
     153,    -1,    76,    -1,    -1,   196,    -1,   177,    -1,   215,
      -1,   177,   505,    -1,   215,   505,    -1,    -1,    -1,   509,
      -1,   197,   435,    -1,   266,   428,   492,   429,    -1,   267,
     164,   511,   428,   512,   429,    -1,   154,   164,   511,   428,
     512,   429,    -1,   133,   164,   511,   428,   512,   429,    -1,
      -1,   140,   163,    -1,    -1,     3,    -1,   512,   430,     3,
      -1,   428,   474,   429,    -1,   514,    -1,   107,   515,   136,
       3,   475,   485,   488,   651,    -1,   515,   176,    -1,   515,
     203,    -1,   515,   154,    -1,    -1,   107,   515,   516,   136,
     497,   475,    -1,     3,   517,    -1,   516,   430,     3,   517,
      -1,    -1,   427,    28,    -1,   107,   515,   136,   516,   266,
     497,   475,    -1,   518,    -1,   108,   252,     3,   519,    -1,
     108,   252,   156,   281,     3,   519,    -1,    -1,    74,    -1,
     210,    -1,   520,    -1,    73,   155,     3,   197,     3,   428,
     525,   429,    -1,    73,   138,   155,     3,   197,     3,   428,
     525,   429,    -1,    73,   155,   156,   281,     3,   197,     3,
     428,   525,   429,    -1,    73,   261,   155,     3,   197,     3,
     428,   525,   429,    -1,    73,   261,   155,   156,   281,     3,
     197,     3,   428,   525,   429,    -1,    73,   155,     3,   197,
       3,   266,   268,   428,   525,   429,    -1,    73,   155,   156,
     281,     3,   197,     3,   266,   268,   428,   525,   429,    -1,
      73,   261,   155,     3,   197,     3,   266,   268,   428,   525,
     429,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     266,   268,   428,   525,   429,    -1,    73,   155,    85,     3,
     197,     3,   428,   525,   429,    -1,    73,   155,    85,   156,
     281,     3,   197,     3,   428,   525,   429,    -1,    73,   261,
     155,    85,     3,   197,     3,   428,   525,   429,    -1,    73,
     261,   155,    85,   156,   281,     3,   197,     3,   428,   525,
     429,    -1,    73,   155,    85,     3,   197,     3,   266,   268,
     428,   525,   429,    -1,    73,   261,   155,    85,     3,   197,
       3,   266,   268,   428,   525,   429,    -1,    73,   155,     3,
     197,     3,   266,   391,   428,     3,   521,   429,   522,    -1,
      73,   155,   156,   281,     3,   197,     3,   266,   391,   428,
       3,   521,   429,   522,    -1,    -1,     3,    -1,    -1,   277,
     428,   523,   429,    -1,   524,    -1,   523,   430,   524,    -1,
       3,    20,     5,    -1,     3,    -1,   525,   430,     3,    -1,
     526,    -1,   327,   428,     3,   429,    -1,   328,   428,     3,
     429,    -1,   329,   428,     3,   429,    -1,   330,   428,     3,
     430,     3,   429,    -1,   527,    -1,   108,   155,     3,    -1,
     528,   530,    -1,   255,   252,     3,    -1,   255,   252,     3,
     430,   529,    -1,     3,    -1,   529,   430,     3,    -1,    -1,
     530,    74,    -1,   530,   210,    -1,   530,    55,    53,    -1,
     530,    54,    53,    -1,   550,    -1,   551,    -1,   552,    -1,
     531,    -1,   533,    -1,    73,   395,   396,     3,   532,    -1,
      73,   395,   396,   156,   281,     3,   532,    -1,    -1,   277,
     428,   397,    20,     4,   429,    -1,   108,   395,   396,     3,
      -1,   108,   395,   396,     3,    74,    -1,   108,   395,   396,
     156,   281,     3,    -1,   534,    -1,   536,    -1,   537,    -1,
     395,   398,   159,     3,   271,   428,   535,   430,   535,   430,
     535,   430,   535,   430,   535,   430,   535,   430,   535,   429,
      -1,   395,   398,   401,   159,     3,   271,   428,   535,   430,
     535,   430,   535,   430,   535,   430,   535,   430,   535,   430,
     535,   429,    -1,     4,    -1,   193,    -1,   395,   399,   136,
       3,   402,     4,    -1,   395,   399,   136,     3,   402,     4,
     403,     4,    -1,   395,   400,   136,     3,   402,     4,    -1,
     395,   400,   136,     3,   402,     4,   179,     5,    -1,   538,
      -1,   543,    -1,   544,    -1,   546,    -1,   547,    -1,   548,
      -1,   549,    -1,    73,   404,   396,     3,   539,   540,    -1,
      73,   404,   396,   156,   281,     3,   539,   540,    -1,    -1,
      -1,   277,   428,   541,   429,    -1,   542,    -1,   541,   430,
     542,    -1,   405,    20,     5,    -1,   406,    20,     4,    -1,
     108,   404,   396,     3,    -1,   108,   404,   396,     3,    74,
      -1,   108,   404,   396,   156,   281,     3,    -1,   404,   398,
     159,     3,   271,   428,   545,   430,   545,   430,   545,   429,
      -1,   404,   398,   159,     3,   271,   428,   545,   430,   545,
     430,   545,   430,   545,   429,    -1,     4,    -1,   193,    -1,
     404,   399,   136,     3,   274,   411,    20,     4,    12,   164,
      20,     4,    -1,   404,   407,     3,   266,   273,     4,    -1,
     404,   407,     3,   266,   273,     4,   179,     5,    -1,   404,
     107,   136,     3,   274,   411,    20,     4,    12,   164,    20,
       4,    -1,   404,   400,   409,    16,     3,    -1,   404,   400,
     409,    16,     3,   410,     4,    -1,   168,     3,    -1,   168,
       3,   171,    -1,   170,     3,    -1,   170,    28,    -1,   169,
       3,    -1,   169,     3,   430,     4,    -1,   553,    -1,   554,
      -1,   555,    -1,   556,    -1,    73,   417,     3,   140,   418,
       3,    -1,    73,   417,   156,   281,     3,   140,   418,     3,
      -1,   108,   417,     3,    -1,   108,   417,   156,   281,     3,
      -1,   419,   417,     3,    -1,   420,   417,     3,   421,     5,
      -1,   557,    -1,   206,   252,     3,    -1,   558,    -1,   560,
       3,   559,   561,    -1,   560,     3,   427,     3,   559,   561,
      -1,    -1,   277,    44,     5,    45,    -1,   277,    44,     5,
      46,    -1,    41,   252,    -1,    -1,   258,    42,   197,   562,
      -1,   258,    42,   197,   562,   277,     5,    43,    -1,   108,
      42,   197,   562,    -1,     3,    -1,   562,   430,     3,    -1,
     571,    -1,   563,    -1,   570,    -1,    73,   221,     3,   197,
       3,   564,   565,   566,   568,   569,    -1,    73,   221,     3,
     197,   404,   396,     3,   564,   565,   566,   568,   569,    -1,
      -1,    51,   223,    -1,    51,   224,    -1,    -1,   140,    40,
      -1,   140,   241,    -1,   140,   157,    -1,   140,   258,    -1,
     140,   107,    -1,    -1,   245,   567,    -1,     3,    -1,   567,
     430,     3,    -1,    -1,   266,   428,   435,   429,    -1,    -1,
     277,    78,   428,   435,   429,    -1,   108,   221,     3,   197,
       3,    -1,   108,   221,     3,   197,   404,   396,     3,    -1,
      37,   252,     3,    38,    71,     3,    78,   428,   435,   429,
      -1,    37,   252,     3,    38,    71,     3,   261,   428,   618,
     429,    -1,    37,   252,     3,    38,    71,     3,   134,   164,
     428,   615,   429,   207,     3,   428,   616,   429,   617,    -1,
      37,   252,     3,    38,    71,     3,    78,   428,   435,   429,
      18,   269,    -1,    37,   252,     3,    38,    71,     3,   134,
     164,   428,   615,   429,   207,     3,   428,   616,   429,   617,
      18,   269,    -1,    37,   252,     3,    38,    71,     3,   201,
     164,   428,   614,   429,    -1,    37,   252,     3,   108,    71,
       3,    -1,    37,   252,     3,   208,    71,     3,   245,     3,
      -1,    37,   252,     3,   120,    71,     3,    -1,    37,   252,
       3,   100,    71,     3,    -1,    37,   252,     3,   269,    71,
       3,    -1,    37,   252,     3,    38,    84,     3,   625,   620,
     572,    -1,    37,   252,     3,   108,    84,     3,    -1,    37,
     252,     3,   108,     3,    -1,    37,   252,     3,   208,    84,
       3,   245,     3,    -1,    37,   252,     3,   208,     3,   245,
       3,    -1,    37,   252,     3,   187,    84,     3,   625,   620,
     572,    -1,    37,   252,     3,   187,     3,   625,   620,   572,
      -1,    37,   252,     3,    75,    84,     3,     3,   625,   620,
     572,    -1,    37,   252,     3,    75,     3,     3,   625,   620,
     572,    -1,    37,   252,     3,   120,   217,     3,   222,    -1,
      37,   252,     3,   100,   217,     3,   222,    -1,    37,   404,
     396,     3,   120,   217,     3,   222,    -1,    37,   404,   396,
       3,   100,   217,     3,   222,    -1,    37,   252,     3,   240,
     423,    20,     4,    -1,    37,   252,     3,   108,   422,    -1,
      -1,   130,    -1,    39,     3,    -1,   573,    -1,   157,   581,
     582,     3,   583,   271,   585,   574,   576,   651,    -1,   157,
     581,   582,     3,   583,   474,    -1,    -1,    -1,   199,   164,
     258,   575,   580,    -1,    -1,   197,    88,   577,   578,    -1,
      -1,   428,     3,   429,    -1,   428,     3,   430,     3,    -1,
     101,    90,    -1,    -1,   101,   258,   579,   240,   580,    -1,
       3,    20,   435,    -1,   580,   430,     3,    20,   435,    -1,
      -1,   581,   176,    -1,   581,   103,    -1,   581,   146,    -1,
     581,   154,    -1,   159,    -1,    -1,    -1,   428,   584,   429,
      -1,     3,    -1,   584,   430,     3,    -1,   428,   587,   429,
      -1,    -1,   585,   430,   586,   428,   587,   429,    -1,   435,
      -1,   113,    -1,   587,   430,   435,    -1,   587,   430,   113,
      -1,   157,   581,   582,     3,   240,   588,   574,    -1,     3,
      20,   435,    -1,     3,    20,   113,    -1,   588,   430,     3,
      20,   435,    -1,   588,   430,     3,    20,   113,    -1,   589,
      -1,   216,   581,   582,     3,   583,   271,   585,   574,    -1,
     216,   581,   582,     3,   240,   588,   574,    -1,   216,   581,
     582,     3,   583,   474,   574,    -1,   590,    -1,    -1,    86,
       3,   591,   592,   594,   595,   596,    -1,    -1,   428,   593,
     429,    -1,     3,    -1,   593,   430,     3,    -1,   136,    -1,
     245,    -1,     4,    -1,   236,    -1,   237,    -1,    -1,   597,
      -1,   277,   428,   597,   429,    -1,   428,   597,   429,    -1,
     598,    -1,   597,   430,   598,    -1,   135,    87,    -1,   135,
     249,    -1,    99,     4,    -1,   143,    -1,   143,     6,    -1,
     193,     4,    -1,   242,     4,    -1,    87,    -1,   599,    -1,
     258,   600,   497,   240,   601,   475,   485,   488,   651,    -1,
      -1,   581,   176,    -1,   581,   154,    -1,     3,    20,   435,
      -1,     3,   427,     3,    20,   435,    -1,   601,   430,     3,
      20,   435,    -1,   601,   430,     3,   427,     3,    20,   435,
      -1,   208,   252,     3,   245,     3,    -1,   602,    -1,    73,
      95,   603,     3,    -1,    73,   227,   603,     3,    -1,   108,
      95,     3,    -1,   108,    95,   156,   281,     3,    -1,   108,
     227,     3,    -1,   108,   227,   156,   281,     3,    -1,    -1,
     156,   281,    -1,   604,    -1,    73,   102,     3,    51,   625,
      -1,    73,   102,     3,    51,   625,   113,   435,    -1,    73,
     102,     3,    51,   625,    18,   193,    -1,    73,   102,     3,
      51,   625,    78,   428,   435,   429,    -1,    73,   102,     3,
      51,   625,    18,   193,    78,   428,   435,   429,    -1,   605,
      -1,   267,     3,    -1,   267,    95,     3,    -1,   606,    -1,
      73,   611,   252,   603,     3,   428,   612,   429,   608,   607,
      -1,    -1,   172,   428,     3,   429,    -1,    73,   611,   252,
     603,     3,   427,     3,   428,   612,   429,   608,    -1,    73,
     611,   252,   603,     3,   351,    94,     3,   140,   271,   136,
     428,     5,   429,   245,   428,     5,   429,    -1,    -1,   608,
      48,    20,     5,    -1,   608,    48,     5,    -1,   608,   197,
       3,   107,     3,    -1,   608,   197,     3,   248,     3,    -1,
     608,   228,    63,   268,   428,     3,   429,   229,     5,    -1,
     608,   228,    63,   204,   428,     3,   429,   428,   609,   429,
      -1,   608,   351,    63,   204,   428,     3,   429,    -1,   608,
     277,   415,   416,    -1,   608,   277,   428,   423,    20,     4,
     429,    -1,   610,    -1,   609,   430,   610,    -1,   228,     3,
     271,   174,   250,     4,   197,   191,     5,    -1,   228,     3,
     271,   174,   250,   184,   197,   191,     5,    -1,    73,   611,
     252,   603,     3,   428,   612,   429,   627,    -1,    73,   611,
     252,   603,     3,   627,    -1,    73,   611,   252,   603,     3,
     427,     3,   428,   612,   429,   627,    -1,    73,   611,   252,
     603,     3,   427,     3,   627,    -1,    -1,   246,    -1,   247,
     246,    -1,   613,    -1,   612,   430,   613,    -1,   201,   164,
     428,   614,   429,    -1,    71,     3,   201,   164,   428,   614,
     429,    -1,   164,   428,   492,   429,    -1,   155,   428,   492,
     429,    -1,   138,   155,   428,   492,   429,    -1,   138,   164,
     428,   492,   429,    -1,    78,   428,   435,   429,    -1,    71,
       3,    78,   428,   435,   429,    -1,   134,   164,   428,   615,
     429,   207,     3,   428,   616,   429,   617,    -1,   134,   164,
     428,   615,   429,   207,     3,   427,     3,   428,   616,   429,
     617,    -1,    71,     3,   134,   164,   428,   615,   429,   207,
       3,   428,   616,   429,   617,    -1,    71,     3,   134,   164,
     428,   615,   429,   207,     3,   427,     3,   428,   616,   429,
     617,    -1,   261,   428,   618,   429,    -1,    71,     3,   261,
     428,   618,   429,    -1,     3,    -1,   614,   430,     3,    -1,
       3,    -1,   615,   430,     3,    -1,     3,    -1,   616,   430,
       3,    -1,    -1,   617,   197,   107,    74,    -1,   617,   197,
     107,   240,   193,    -1,   617,   197,   107,   210,    -1,   617,
     197,   107,   240,   113,    -1,   617,   197,   258,    74,    -1,
     617,   197,   258,   240,   193,    -1,   617,   197,   258,   210,
      -1,   617,   197,   258,   240,   113,    -1,   617,   197,   107,
     192,    -1,   617,   197,   258,   192,    -1,   617,   183,   137,
      -1,   617,   183,   235,    -1,   617,   183,   200,    -1,   617,
      97,    -1,   617,    18,    97,    -1,   617,    97,   151,    98,
      -1,   617,    97,   151,   149,    -1,     3,    -1,   618,   430,
       3,    -1,    -1,   619,     3,   625,   620,    -1,    -1,   620,
      18,   193,    -1,   620,   193,    -1,   620,   113,     4,    -1,
     620,   113,     5,    -1,   620,   113,     7,    -1,   620,   113,
       6,    -1,   620,   113,   333,   428,   429,    -1,   620,   113,
     334,   428,   429,    -1,   620,   113,   335,   428,   429,    -1,
     620,   113,    72,    -1,   620,   113,   428,   435,   429,    -1,
     620,    48,    -1,   620,    48,   428,     5,   430,     5,   429,
      -1,   620,    48,   428,     5,   429,    -1,   620,    53,   428,
       5,   430,     5,   429,    -1,   620,    53,   428,     5,   429,
      -1,   620,    53,    -1,   620,   261,   164,    -1,   620,   261,
      -1,   620,   201,   164,    -1,   620,   164,    -1,   620,    79,
       4,    -1,   620,    78,   428,   435,   429,    -1,   620,    71,
       3,   261,    -1,   620,    71,     3,   201,   164,    -1,   620,
      71,     3,    78,   428,   435,   429,    -1,   620,    56,    52,
      51,   428,   435,   429,    57,    -1,   620,    56,    52,    51,
     428,   435,   429,    58,    -1,   620,    56,    52,    51,   428,
     435,   429,    -1,   620,    51,   428,   435,   429,    57,    -1,
     620,    51,   428,   435,   429,    58,    -1,   620,    51,   428,
     435,   429,    -1,    -1,   428,     5,   429,    -1,   428,     5,
     430,     5,   429,    -1,    -1,    64,    -1,    -1,   623,   259,
      -1,   623,   280,    -1,    -1,   624,    82,   240,     4,    -1,
     624,    83,     4,    -1,    67,   621,    -1,   244,   621,   623,
      -1,   239,   621,   623,    -1,   189,   621,   623,    -1,   160,
     621,   623,    -1,   152,   621,   623,    -1,    66,   621,   623,
      -1,   205,   621,   623,    -1,   114,   621,   623,    -1,   132,
     621,   623,    -1,   116,   621,   623,    -1,   117,    -1,   257,
      -1,   251,    -1,   115,    -1,   278,    -1,    82,   621,   624,
      -1,   270,   428,     5,   429,   624,    -1,    64,   621,    -1,
     272,   428,     5,   429,    -1,   256,    -1,    61,    -1,   188,
      -1,   182,    -1,   243,   622,   624,    -1,   249,   622,   624,
      -1,   185,   622,   624,    -1,   175,   622,   624,    -1,   123,
     428,   626,   429,   624,    -1,   240,   428,   626,   429,   624,
      -1,    62,    -1,   262,    -1,   264,    -1,   273,   428,     5,
     429,    -1,   625,    36,   431,    -1,     4,    -1,   626,   430,
       4,    -1,   628,   502,   474,    -1,    -1,   154,    -1,   216,
      -1,   629,    -1,   240,   227,     3,    -1,   240,   227,   113,
      -1,   240,   630,    -1,   631,    -1,   630,   430,   631,    -1,
       8,    20,   435,    -1,     8,     9,   435,    -1,   632,    -1,
      73,   202,     3,   428,   633,   429,    51,    60,   637,   124,
      -1,    73,   202,     3,   428,   633,   429,    60,   637,   124,
      -1,    73,    10,   216,   202,     3,   428,   633,   429,    51,
      60,   637,   124,    -1,    73,    10,   216,   202,     3,   428,
     633,   429,    60,   637,   124,    -1,    73,   139,     3,   428,
     633,   429,   213,   636,    51,    60,   637,   124,    -1,    73,
     139,     3,   428,   633,   429,   213,   636,    60,   637,   124,
      -1,    73,    10,   216,   139,     3,   428,   633,   429,   213,
     636,    51,    60,   637,   124,    -1,    73,    10,   216,   139,
       3,   428,   633,   429,   213,   636,    60,   637,   124,    -1,
      -1,   634,    -1,   635,    -1,   634,   430,   635,    -1,     3,
     625,    -1,    16,     3,   625,    -1,   195,     3,   625,    -1,
     150,     3,   625,    -1,   152,    -1,   160,    -1,   270,    -1,
     249,    -1,    62,    -1,   132,    -1,   114,    -1,    66,    -1,
     117,    -1,   251,    -1,    -1,   637,   638,    -1,   637,    60,
     637,   124,    -1,   637,   156,   637,   124,   156,    -1,   637,
     276,   637,   124,   276,    -1,   637,   166,   637,   124,   166,
      -1,   637,   131,   637,   124,   131,    -1,   637,    77,   637,
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
      -1,   213,    -1,   428,    -1,   429,    -1,   430,    -1,   426,
      -1,   427,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    17,    -1,   432,    -1,   322,    -1,   323,
      -1,   324,    -1,   325,    -1,   326,    -1,     8,    -1,   639,
      -1,   108,   202,     3,    -1,   108,   202,   156,   281,     3,
      -1,   108,   139,     3,    -1,   108,   139,   156,   281,     3,
      -1,   640,    -1,    68,     3,   428,   429,    -1,    68,     3,
     428,   641,   429,    -1,   642,    -1,   641,   430,   642,    -1,
       5,    -1,     4,    -1,     7,    -1,   193,    -1,     6,    -1,
       3,    -1,     8,    -1,   643,    -1,    73,   219,     3,   644,
     645,   197,     3,   140,   118,   217,    60,   637,   124,    -1,
      73,   219,     3,   644,   645,   197,   404,   396,     3,   140,
     118,   217,    60,   637,   124,    -1,    59,    -1,    39,    -1,
     157,    -1,   258,    -1,   107,    -1,   398,    -1,   646,    -1,
     108,   219,     3,    -1,   108,   219,   156,   281,     3,    -1,
      37,   219,     3,   120,    -1,    37,   219,     3,   100,    -1,
     647,    -1,    73,   371,   603,     3,   648,    -1,    -1,   648,
     649,    -1,   376,   277,     5,    -1,   376,     5,    -1,   377,
      63,     5,    -1,   377,     5,    -1,   378,     5,    -1,   184,
       5,    -1,   379,    -1,    18,   379,    -1,   650,    -1,   108,
     371,     3,    -1,   108,   371,   156,   281,     3,    -1,    37,
     371,     3,   648,    -1,    37,   371,     3,    55,    -1,    37,
     371,     3,    55,   277,     5,    -1,    37,   371,     3,   208,
     245,     3,    -1,    -1,   212,    28,    -1,   212,   652,    -1,
       3,    -1,   652,   430,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   511,   511,   512,   517,   524,   525,   526,   540,   541,
     569,   577,   585,   591,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   624,   624,   633,   633,   635,   635,
     637,   637,   642,   644,   648,   649,   650,   651,   652,   655,
     656,   659,   668,   686,   695,   715,   715,   775,   784,   791,
     795,   797,   799,   804,   809,   814,   822,   824,   826,   828,
     830,   832,   834,   836,   838,   840,   847,   858,   869,   870,
     873,   873,   874,   874,   875,   875,   883,   883,   891,   891,
     902,   906,   907,   908,   909,   910,   911,   912,   913,   917,
     917,   919,   919,   921,   921,   924,   924,   926,   926,   928,
     928,   930,   930,   932,   932,   934,   934,   937,   937,   939,
     939,   941,   941,   943,   943,   945,   945,   947,   947,   949,
     949,   951,   951,   954,   954,   956,   956,   958,   958,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   999,  1000,  1001,  1002,  1003,
    1004,  1005,  1006,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1031,  1032,  1033,  1034,  1035,
    1037,  1038,  1040,  1041,  1042,  1044,  1045,  1046,  1047,  1054,
    1061,  1068,  1072,  1076,  1080,  1084,  1088,  1094,  1095,  1096,
    1099,  1105,  1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,
    1120,  1123,  1125,  1127,  1129,  1133,  1141,  1152,  1153,  1156,
    1157,  1160,  1168,  1176,  1184,  1198,  1208,  1209,  1223,  1239,
    1240,  1241,  1242,  1245,  1252,  1260,  1261,  1262,  1265,  1266,
    1269,  1270,  1274,  1275,  1278,  1280,  1284,  1285,  1288,  1290,
    1294,  1295,  1298,  1299,  1302,  1308,  1315,  1324,  1325,  1326,
    1327,  1337,  1338,  1342,  1343,  1344,  1345,  1346,  1349,  1350,
    1353,  1354,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,
    1365,  1368,  1369,  1370,  1378,  1384,  1385,  1386,  1389,  1390,
    1393,  1394,  1398,  1406,  1416,  1417,  1418,  1427,  1432,  1438,
    1446,  1450,  1450,  1490,  1491,  1495,  1497,  1499,  1501,  1503,
    1507,  1508,  1509,  1512,  1513,  1516,  1517,  1520,  1521,  1522,
    1525,  1526,  1529,  1530,  1534,  1536,  1538,  1540,  1543,  1544,
    1547,  1548,  1551,  1555,  1565,  1573,  1574,  1575,  1576,  1580,
    1584,  1586,  1590,  1590,  1592,  1597,  1604,  1611,  1623,  1624,
    1625,  1629,  1636,  1643,  1651,  1661,  1669,  1679,  1687,  1696,
    1705,  1715,  1723,  1732,  1741,  1751,  1760,  1777,  1785,  1797,
    1798,  1812,  1813,  1816,  1817,  1829,  1839,  1844,  1849,  1855,
    1862,  1869,  1876,  1886,  1893,  1902,  1909,  1915,  1923,  1929,
    1937,  1938,  1939,  1940,  1941,  1957,  1958,  1959,  1968,  1969,
    1973,  1983,  1999,  2000,  2004,  2012,  2021,  2044,  2045,  2046,
    2050,  2067,  2089,  2090,  2095,  2104,  2118,  2127,  2153,  2154,
    2155,  2156,  2157,  2158,  2159,  2163,  2170,  2182,  2185,  2186,
    2190,  2191,  2195,  2197,  2202,  2210,  2219,  2231,  2243,  2258,
    2259,  2264,  2278,  2288,  2302,  2316,  2324,  2335,  2341,  2352,
    2358,  2365,  2371,  2393,  2394,  2395,  2396,  2400,  2409,  2426,
    2434,  2445,  2456,  2468,  2475,  2484,  2492,  2498,  2513,  2515,
    2519,  2528,  2541,  2543,  2547,  2552,  2559,  2564,  2572,  2576,
    2577,  2581,  2593,  2604,  2605,  2606,  2610,  2611,  2612,  2613,
    2614,  2615,  2618,  2620,  2624,  2625,  2628,  2630,  2633,  2635,
    2639,  2646,  2655,  2661,  2667,  2674,  2680,  2687,  2693,  2699,
    2705,  2711,  2717,  2723,  2729,  2735,  2741,  2747,  2753,  2759,
    2765,  2771,  2777,  2790,  2800,  2810,  2820,  2826,  2834,  2835,
    2836,  2839,  2847,  2853,  2866,  2867,  2867,  2871,  2872,  2875,
    2876,  2877,  2881,  2882,  2882,  2886,  2894,  2904,  2905,  2906,
    2907,  2908,  2911,  2911,  2914,  2915,  2918,  2928,  2941,  2942,
    2942,  2945,  2946,  2947,  2948,  2951,  2955,  2956,  2957,  2958,
    2964,  2967,  2973,  2978,  2984,  2988,  2988,  2993,  2994,  2996,
    2997,  3001,  3002,  3006,  3007,  3008,  3011,  3012,  3013,  3014,
    3018,  3019,  3023,  3024,  3025,  3026,  3027,  3028,  3029,  3030,
    3034,  3042,  3051,  3052,  3053,  3057,  3068,  3080,  3091,  3106,
    3111,  3115,  3116,  3120,  3122,  3124,  3126,  3130,  3131,  3137,
    3141,  3143,  3145,  3147,  3149,  3154,  3158,  3159,  3163,  3172,
    3185,  3186,  3194,  3202,  3210,  3211,  3212,  3213,  3214,  3215,
    3217,  3219,  3224,  3229,  3233,  3234,  3237,  3252,  3259,  3274,
    3287,  3302,  3315,  3316,  3317,  3320,  3321,  3324,  3325,  3326,
    3327,  3328,  3329,  3330,  3331,  3332,  3334,  3336,  3338,  3340,
    3342,  3346,  3347,  3350,  3351,  3354,  3355,  3358,  3359,  3360,
    3361,  3362,  3363,  3364,  3365,  3366,  3367,  3368,  3369,  3370,
    3371,  3372,  3373,  3374,  3375,  3378,  3379,  3382,  3382,  3392,
    3393,  3394,  3395,  3396,  3397,  3398,  3399,  3400,  3401,  3402,
    3403,  3410,  3411,  3412,  3413,  3414,  3415,  3416,  3417,  3418,
    3419,  3420,  3421,  3422,  3423,  3424,  3425,  3426,  3427,  3428,
    3429,  3430,  3433,  3434,  3435,  3438,  3439,  3442,  3443,  3444,
    3447,  3448,  3449,  3453,  3454,  3455,  3456,  3457,  3458,  3459,
    3460,  3461,  3462,  3463,  3464,  3465,  3466,  3467,  3468,  3469,
    3470,  3471,  3472,  3473,  3474,  3475,  3476,  3477,  3478,  3479,
    3480,  3481,  3482,  3483,  3484,  3485,  3486,  3487,  3490,  3491,
    3494,  3507,  3508,  3509,  3513,  3516,  3517,  3518,  3519,  3519,
    3521,  3522,  3530,  3534,  3540,  3546,  3553,  3560,  3566,  3572,
    3579,  3588,  3589,  3592,  3593,  3596,  3597,  3598,  3599,  3602,
    3603,  3604,  3605,  3606,  3607,  3608,  3609,  3610,  3611,  3618,
    3619,  3620,  3621,  3622,  3623,  3624,  3625,  3628,  3629,  3630,
    3630,  3630,  3631,  3631,  3631,  3631,  3631,  3631,  3632,  3632,
    3632,  3632,  3632,  3632,  3632,  3632,  3632,  3633,  3633,  3633,
    3633,  3633,  3633,  3633,  3634,  3634,  3634,  3634,  3635,  3635,
    3635,  3635,  3635,  3635,  3635,  3635,  3635,  3635,  3635,  3635,
    3636,  3636,  3636,  3636,  3636,  3636,  3636,  3636,  3637,  3637,
    3637,  3637,  3637,  3637,  3637,  3637,  3638,  3638,  3638,  3638,
    3638,  3638,  3638,  3638,  3638,  3639,  3639,  3639,  3639,  3639,
    3639,  3639,  3639,  3640,  3640,  3640,  3641,  3641,  3641,  3641,
    3641,  3641,  3641,  3641,  3642,  3642,  3642,  3642,  3642,  3642,
    3642,  3643,  3643,  3643,  3643,  3643,  3643,  3643,  3644,  3644,
    3644,  3644,  3645,  3645,  3645,  3645,  3645,  3645,  3645,  3645,
    3645,  3645,  3645,  3645,  3646,  3646,  3646,  3646,  3646,  3647,
    3654,  3658,  3664,  3670,  3676,  3688,  3692,  3698,  3706,  3707,
    3710,  3711,  3712,  3713,  3714,  3715,  3716,  3723,  3727,  3733,
    3749,  3750,  3753,  3754,  3755,  3756,  3759,  3763,  3769,  3778,
    3786,  3797,  3801,  3810,  3811,  3815,  3816,  3817,  3818,  3819,
    3820,  3821,  3822,  3825,  3829,  3835,  3845,  3852,  3859,  3867,
    3877,  3878,  3879,  3882,  3883
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
  "FTOKEN_LENGTH", "FPG_CALL_EXTERNAL", "';'", "'.'", "'('", "')'", "','",
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
  "notify_stmt", "create_subscription_stmt", "drop_subscription_stmt",
  "resume_subscription_stmt", "ack_subscription_stmt",
  "reclaim_table_stmt", "analyze_table_stmt", "sample_clause_opt",
  "analyze_table_prefix", "hist_clause_opt", "hist_col_list",
  "create_policy_stmt", "opt_policy_as", "opt_policy_for", "opt_policy_to",
  "policy_role_list", "opt_policy_using", "opt_policy_check",
  "drop_policy_stmt", "alter_table_stmt", "opt_col_position",
  "insert_stmt", "opt_ondupupdate", "@32", "opt_on_conflict",
  "opt_conflict_target", "conflict_action", "@33", "upsert_asgn_list",
  "insert_opts", "opt_into", "opt_col_names", "insert_col_list",
  "insert_vals_list", "@34", "insert_vals", "insert_asgn_list",
  "replace_stmt", "copy_stmt", "@35", "opt_copy_cols", "copy_col_list",
  "copy_direction", "copy_target", "opt_copy_options", "copy_option_list",
  "copy_option", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_domain_stmt",
  "use_database_stmt", "create_table_stmt", "opt_inherits",
  "opt_table_options", "shard_range_list", "shard_range_def",
  "opt_temporary", "create_col_list", "create_definition",
  "pk_column_list", "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@36", "column_atts", "opt_length", "opt_binary",
  "opt_uz", "opt_csc", "data_type", "enum_list", "create_select_statement",
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
     665,   666,   667,   668,   669,   670,    59,    46,    40,    41,
      44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   433,   434,   434,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   436,   435,   437,   435,   438,   435,
     439,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   440,   440,   441,   441,   442,   435,   435,   435,   443,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   444,   444,
     445,   435,   446,   435,   447,   435,   448,   435,   449,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   450,
     435,   451,   435,   452,   435,   453,   435,   454,   435,   455,
     435,   456,   435,   457,   435,   458,   435,   459,   435,   460,
     435,   461,   435,   462,   435,   463,   435,   464,   435,   465,
     435,   466,   435,   467,   435,   468,   435,   469,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   470,   470,   470,
     435,   435,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   435,   435,   435,   435,   472,   472,   435,   435,   435,
     435,   435,   435,   435,   435,   473,   474,   474,   474,   475,
     475,   476,   476,   477,   477,   478,   478,   478,   479,   479,
     480,   480,   481,   481,   482,   482,   483,   483,   484,   484,
     485,   485,   486,   486,   487,   487,   487,   488,   488,   488,
     488,   489,   489,   490,   490,   490,   490,   490,   491,   491,
     492,   492,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   494,   494,   494,   495,   496,   496,   496,   497,   497,
     498,   498,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   501,   500,   502,   502,   503,   503,   503,   503,   503,
     504,   504,   504,   505,   505,   506,   506,   507,   507,   507,
     508,   508,   509,   509,   510,   510,   510,   510,   511,   511,
     512,   512,   513,   473,   514,   515,   515,   515,   515,   514,
     516,   516,   517,   517,   514,   473,   518,   518,   519,   519,
     519,   473,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   521,
     521,   522,   522,   523,   523,   524,   525,   525,   525,   526,
     526,   526,   526,   473,   527,   473,   528,   528,   529,   529,
     530,   530,   530,   530,   530,   473,   473,   473,   473,   473,
     531,   531,   532,   532,   533,   533,   533,   473,   473,   473,
     534,   534,   535,   535,   536,   536,   537,   537,   473,   473,
     473,   473,   473,   473,   473,   538,   538,   539,   540,   540,
     541,   541,   542,   542,   543,   543,   543,   544,   544,   545,
     545,   546,   547,   547,   548,   549,   549,   550,   550,   551,
     551,   552,   552,   473,   473,   473,   473,   553,   553,   554,
     554,   555,   556,   473,   557,   473,   558,   558,   559,   559,
     559,   560,   561,   561,   561,   561,   562,   562,   473,   473,
     473,   563,   563,   564,   564,   564,   565,   565,   565,   565,
     565,   565,   566,   566,   567,   567,   568,   568,   569,   569,
     570,   570,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   572,   572,
     572,   473,   573,   573,   574,   575,   574,   576,   576,   577,
     577,   577,   578,   579,   578,   580,   580,   581,   581,   581,
     581,   581,   582,   582,   583,   583,   584,   584,   585,   586,
     585,   587,   587,   587,   587,   573,   588,   588,   588,   588,
     473,   589,   589,   589,   473,   591,   590,   592,   592,   593,
     593,   594,   594,   595,   595,   595,   596,   596,   596,   596,
     597,   597,   598,   598,   598,   598,   598,   598,   598,   598,
     473,   599,   600,   600,   600,   601,   601,   601,   601,   473,
     473,   602,   602,   473,   473,   473,   473,   603,   603,   473,
     604,   604,   604,   604,   604,   473,   605,   605,   473,   606,
     607,   607,   606,   606,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   609,   609,   610,   610,   606,   606,
     606,   606,   611,   611,   611,   612,   612,   613,   613,   613,
     613,   613,   613,   613,   613,   613,   613,   613,   613,   613,
     613,   614,   614,   615,   615,   616,   616,   617,   617,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   617,   617,   617,   617,   618,   618,   619,   613,   620,
     620,   620,   620,   620,   620,   620,   620,   620,   620,   620,
     620,   620,   620,   620,   620,   620,   620,   620,   620,   620,
     620,   620,   620,   620,   620,   620,   620,   620,   620,   620,
     620,   620,   621,   621,   621,   622,   622,   623,   623,   623,
     624,   624,   624,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   626,   626,
     627,   628,   628,   628,   473,   629,   629,   629,   630,   630,
     631,   631,   473,   632,   632,   632,   632,   632,   632,   632,
     632,   633,   633,   634,   634,   635,   635,   635,   635,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   637,
     637,   637,   637,   637,   637,   637,   637,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     473,   639,   639,   639,   639,   473,   640,   640,   641,   641,
     642,   642,   642,   642,   642,   642,   642,   473,   643,   643,
     644,   644,   645,   645,   645,   645,   473,   646,   646,   473,
     473,   473,   647,   648,   648,   649,   649,   649,   649,   649,
     649,   649,   649,   473,   650,   650,   473,   473,   473,   473,
     651,   651,   651,   652,   652
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
       5,     3,     5,     1,     3,     1,     4,     6,     0,     4,
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
       0,     0,     0,     0,   682,     0,   368,     0,   577,     0,
       0,     0,     0,     0,   577,     0,   302,     0,   632,     0,
       0,     0,     0,     0,     0,     0,   255,   363,   375,   381,
     413,   420,   428,   429,   437,   438,   439,   448,   449,   450,
     451,   452,   453,   454,   425,   426,   427,   483,   484,   485,
     486,   493,   495,     0,   509,   510,   508,   561,   600,   604,
     630,   640,   649,   655,   658,   814,   822,   980,   985,   997,
    1006,  1011,  1023,     0,     0,     0,     0,   501,     0,     0,
     647,     0,     0,     0,     0,     0,     0,     0,   647,   683,
       0,     0,   647,     0,     0,     0,     0,   605,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   583,   477,   481,   479,   480,     0,     0,   583,     0,
       0,   817,   818,     0,     0,     0,     0,   656,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,   415,   498,     0,     0,  1013,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   684,     0,     0,     0,     0,     0,     0,   647,   607,
     372,     0,   367,   365,   366,     0,   643,     0,   983,     0,
     414,   981,     0,  1007,     0,     0,   645,     0,   378,     0,
    1024,     0,     0,     0,   489,     0,   579,   580,   581,   582,
     578,     0,   478,     0,   494,     0,     0,     0,     0,   815,
     816,     0,     4,     9,    10,    12,    11,     8,     0,     0,
       0,   313,   303,   251,     0,   252,   253,     0,   304,   305,
     306,     0,    13,   254,   308,   310,   309,   307,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   317,   256,   311,
     416,   634,   633,   317,     0,     0,     0,     0,     0,   318,
     320,   334,   321,   334,   657,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   491,     0,     3,     0,     0,   421,
     422,     0,     0,   502,  1010,  1009,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1027,     0,  1026,     0,   995,
     991,   990,   994,   992,   996,   993,   986,     0,   988,     0,
       0,   648,   641,     0,     0,   831,     0,     0,     0,     0,
     831,  1001,  1000,     0,     0,   642,     0,     0,     0,  1013,
     432,     0,   457,     0,     0,     0,     0,     0,     0,     0,
     370,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   379,   380,   376,     0,     0,   434,     0,   464,     0,
       0,   584,   482,     0,   584,   821,   820,   819,     0,    78,
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
       0,     0,     0,     0,     0,     0,     0,     0,   424,   423,
       0,   498,     0,     0,   496,     0,     0,     0,     0,     0,
       0,   545,     0,     0,   557,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1021,  1014,     0,     0,   987,     0,     0,     0,   794,
     803,   762,   762,   762,   762,   762,   787,   762,   784,     0,
     762,   762,   762,   765,   796,   765,   795,   762,   762,   762,
       0,   765,   762,   765,   786,   793,   785,   804,   805,     0,
       0,     0,   788,   650,     0,     0,     0,     0,     0,     0,
     832,   833,     0,     0,     0,     0,     0,  1004,  1002,  1003,
    1005,     0,   513,     0,     0,     0,     0,     0,  1012,     0,
     430,     0,   458,     0,     0,     0,   811,   609,     0,   611,
     612,     0,   373,     0,   280,     0,   259,   372,   644,   984,
     982,  1008,   530,     0,   646,   378,  1025,   435,     0,   465,
       0,   490,     0,     0,     0,   639,     0,     0,     5,    51,
      79,     0,    48,     0,     0,   243,     0,     0,     6,     0,
      57,     0,     0,     0,   229,   227,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,     0,     0,     0,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,   219,   220,
     221,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
       0,     0,    21,    23,    24,    22,   249,   247,    46,     0,
      44,   215,    80,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    33,    74,    73,    25,    26,    28,    14,    15,
      16,    17,    18,    19,    27,    30,    29,     0,   315,   291,
       0,   312,   418,   417,   317,     0,     0,     0,   322,     0,
     357,     0,   362,   330,     0,   259,   319,   343,   343,     0,
     336,     0,   344,     0,   326,   325,     0,     0,     0,     0,
       0,     0,     0,   475,     0,   492,     0,   502,     0,     0,
       0,     0,     0,     0,   541,     0,   538,   544,   540,     0,
     729,     0,     0,     0,     0,     0,   542,  1028,  1029,  1022,
    1020,  1016,     0,  1018,     0,  1019,     0,     0,   989,   831,
     831,     0,   791,   767,   773,   770,   767,   767,     0,   767,
     767,   767,   766,   770,   770,   767,   767,   767,     0,   770,
     767,   770,     0,     0,     0,     0,     0,     0,     0,     0,
     835,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   516,     0,     0,     0,     0,     0,
       0,   432,     0,   455,   457,   487,     0,   812,   813,     0,
       0,   727,   679,   334,   608,     0,   613,   614,   615,   616,
     260,     0,   287,   259,   369,   371,     0,   377,   436,   466,
       0,   564,   586,     0,     0,   563,   564,     0,   564,     0,
      90,     0,   241,     0,     0,     0,     0,    53,     0,     0,
       0,     0,   143,     0,     0,     0,     0,     0,   177,   178,
     179,   180,   181,   182,     0,     0,     0,     0,   158,     0,
       0,     0,   162,   163,   164,   166,     0,     0,   168,     0,
     171,   172,   173,     0,     0,     0,     0,     0,     0,    97,
      91,    92,    93,    94,    95,    96,   146,   147,   148,     0,
       0,     0,   225,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   184,   185,   186,   187,   188,
     189,   190,   191,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,   204,   205,   206,     0,    60,     0,    62,
       0,     0,     0,     0,     0,    70,    71,    72,     0,     0,
       0,   149,     0,    47,    45,     0,     0,   250,   248,    82,
       0,     0,    40,    36,    38,     0,    58,     0,   259,     0,
       0,   357,   359,   359,   359,     0,   323,   327,     0,     0,
       0,   280,   347,   348,     0,     0,   350,     0,     0,     0,
     444,   446,     0,     0,     0,     0,   472,   499,   500,   497,
       0,     0,     0,     0,     0,     0,   729,   729,     0,   553,
     552,   558,   729,   547,     0,     0,   556,  1015,  1017,     0,
       0,     0,     0,     0,   779,   789,   781,   783,   808,     0,
     782,   778,   777,   800,   799,   776,   780,   775,     0,   797,
     774,   798,     0,     0,     0,   652,   807,     0,   651,     0,
     836,   838,   837,     0,   834,     0,     0,   406,     0,     0,
       0,     0,     0,   408,     0,     0,     0,     0,     0,   849,
       0,     0,   514,   515,     0,   522,   513,     0,     0,     0,
       0,     0,     0,   431,     0,   458,     0,     0,   811,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   685,     0,
       0,   610,   629,     0,     0,   625,     0,     0,     0,     0,
     606,   617,   620,     0,     0,  1030,   374,   531,     0,     0,
       0,   595,   585,     0,     0,   564,   602,   564,   603,    52,
     245,     0,   244,     0,     0,     0,    56,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,   101,   103,     0,     0,     0,     0,     0,
     135,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      59,     0,     0,     0,     0,     0,     0,   261,   259,   419,
     324,     0,     0,     0,     0,   332,     0,   635,     0,     0,
     287,   339,   337,     0,     0,   335,   351,     0,   442,   443,
       0,     0,     0,     0,     0,   469,   470,     0,     0,   476,
       0,   506,   505,   503,     0,     0,     0,     0,   558,   558,
     729,     0,     0,   741,     0,   746,     0,     0,     0,     0,
       0,   559,   750,   731,     0,   748,   549,   558,   539,   546,
     555,   554,     0,     0,   763,     0,   768,   769,     0,     0,
     770,     0,   770,   770,   792,   806,     0,     0,     0,   843,
     846,   845,   847,   844,   839,   840,   842,   848,   841,     0,
       0,     0,     0,     0,     0,     0,   382,     0,     0,     0,
       0,     0,     0,   849,     0,     0,     0,   517,   521,   519,
     518,   520,     0,   526,   516,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   460,   456,   488,     0,   727,
     681,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     664,   727,     0,   810,   624,   622,   623,   626,   627,   628,
       0,     0,     0,   265,   265,   281,   282,   288,     0,   364,
     597,   596,     0,     0,   587,   592,   591,     0,   589,   567,
     601,   242,   246,     0,    54,     0,   141,   140,     0,   145,
       0,     0,   230,   231,   176,   154,   155,     0,     0,   159,
     160,   161,   165,   167,   169,   210,   211,   212,   213,     0,
      98,   107,   109,   105,   111,   113,   115,   151,     0,     0,
     153,   226,   272,   272,   272,   117,     0,     0,   125,     0,
       0,   133,   272,   272,   183,     0,     0,     0,   195,   196,
       0,     0,   199,     0,   202,     0,   207,     0,    61,    63,
      66,    67,    68,    69,     0,     0,     0,   150,    81,    85,
       0,     0,    50,     0,     0,    42,     0,    43,    35,     0,
       0,   270,   261,   358,     0,     0,     0,   328,     0,     0,
       0,  1030,   352,     0,   338,     0,     0,   445,   447,     0,
       0,     0,   473,     0,     0,     0,     0,     0,   725,     0,
     543,   551,   558,   730,   560,     0,     0,     0,     0,     0,
       0,   751,   732,   733,   735,   734,   739,     0,     0,     0,
       0,   749,   747,   548,     0,     0,   849,     0,     0,   772,
     801,   809,   802,   790,     0,   653,   383,     0,   849,     0,
     399,     0,     0,     0,     0,   407,     0,   391,     0,     0,
       0,     0,     0,   857,   858,   859,   861,   860,   979,   864,
     865,   866,   972,   863,   862,   967,   968,   969,   970,   971,
     954,   867,   908,   899,   904,   849,   950,   940,   911,   943,
     886,   893,   890,   877,   933,   922,   849,   930,   948,   884,
     885,   955,   871,   878,   926,   942,   947,   944,   905,   883,
     952,   824,   882,   902,   895,   892,   849,   941,   931,   872,
     921,   960,   898,   912,   894,   913,   897,   936,   919,   880,
     849,   869,   953,   875,   937,   889,   916,   928,   888,   849,
     917,   914,   915,   923,   935,   925,   891,   896,   920,   909,
     910,   927,   959,   932,   901,   934,   887,   961,   918,   906,
     900,   907,   903,   946,   874,   868,   939,   945,   879,   881,
     870,   951,   929,   949,   924,   938,   876,   873,   957,   849,
     958,   956,   974,   975,   976,   977,   978,   965,   966,   962,
     963,   964,   973,   850,     0,     0,   524,   523,     0,   528,
     522,     0,   385,     0,     0,     0,     0,     0,     0,     0,
       0,   459,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   300,     0,     0,     0,     0,   660,   678,
     686,   729,     0,   619,   621,   266,   267,     0,   284,   286,
       0,     0,     0,  1033,  1031,  1032,   565,     0,   588,     0,
       0,     0,  1030,     0,     0,     0,   144,   233,   234,   235,
     236,   239,   238,   240,   232,   237,     0,     0,     0,   272,
     272,   272,   272,   272,   272,     0,     0,     0,   276,   276,
     276,   272,     0,     0,     0,   272,     0,     0,     0,   272,
     276,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,    87,    41,    37,    39,     0,     0,
       0,   280,   270,   360,     0,     0,     0,     0,   636,   637,
       0,   631,     0,     0,     0,     0,     0,     0,   507,     0,
     532,   703,     0,   701,     0,   533,     0,   550,     0,     0,
       0,     0,     0,     0,   753,     0,     0,     0,     0,     0,
       0,   849,     0,   764,   771,     0,   849,     0,   387,   400,
       0,   409,   410,   411,     0,     0,     0,     0,     0,   384,
     823,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   511,   526,     0,     0,   393,     0,     0,     0,
     433,   462,   463,   461,     0,   664,     0,     0,     0,     0,
     693,     0,     0,     0,   690,     0,   689,     0,   699,     0,
       0,     0,     0,     0,     0,   659,   728,   618,   265,   283,
     290,   289,     0,     0,   599,   598,   594,   593,     0,   569,
     562,     7,   142,   139,   156,   157,   214,   276,   276,   276,
     276,   276,   276,   216,     0,   152,     0,     0,     0,     0,
       0,   276,   119,     0,     0,   276,   127,     0,     0,   276,
       0,     0,   192,   193,   194,   197,   198,     0,   203,   208,
       0,     0,     0,     0,   265,   268,   271,   287,   280,   356,
       0,   355,   354,     0,     0,   353,     0,     0,     0,     0,
       0,   504,     0,     0,     0,   537,     0,   726,   743,     0,
     761,   745,     0,     0,     0,   754,   752,   736,   737,   738,
     740,     0,   849,     0,   826,   654,     0,   828,   401,     0,
     395,   392,     0,   399,   851,     0,     0,     0,     0,     0,
     849,     0,   525,     0,     0,   528,   389,     0,     0,     0,
     386,     0,   662,   680,     0,     0,     0,     0,     0,   691,
     692,   301,   687,   666,     0,     0,     0,     0,     0,     0,
       0,   285,  1034,     0,   566,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,   273,     0,   100,   102,
     104,     0,   272,     0,     0,     0,   272,     0,     0,     0,
     136,   138,     0,     0,     0,     0,   292,   263,     0,     0,
     262,   293,   287,   361,   329,   638,     0,     0,     0,     0,
       0,   535,     0,   704,   702,     0,   759,   760,     0,     0,
       0,   849,     0,   825,   827,     0,   397,   412,   388,     0,
     856,   855,   852,   854,   853,     0,     0,   527,     0,   512,
     396,   394,     0,     0,   694,     0,     0,   700,     0,   665,
       0,     0,     0,     0,     0,   672,     0,     0,     0,     0,
     590,     0,     0,   568,   108,   110,   106,   112,   114,   116,
     217,     0,   265,   277,   118,   276,   121,   123,   126,   276,
     129,   131,   134,   200,    75,     0,     0,   269,   265,     0,
     298,   258,     0,     0,   474,   467,     0,   471,     0,   742,
     744,   758,   755,     0,   830,     0,   401,   998,   849,     0,
     390,     0,     0,   688,     0,   661,   667,   668,     0,     0,
       0,     0,   575,     0,   570,     0,   572,   573,   275,   278,
       0,     0,   272,   272,     0,   272,   272,     0,     0,   264,
     295,   294,     0,   257,     0,     0,     0,     0,   756,   757,
     829,     0,     0,   403,   398,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   571,     0,   265,   120,
     276,   276,   128,   276,   276,    76,    77,     0,     0,   299,
       0,     0,   468,   705,     0,     0,   402,     0,   999,     0,
       0,     0,     0,     0,     0,   673,   671,   576,     0,   279,
       0,     0,     0,     0,   297,   296,     0,     0,   707,     0,
     405,   404,     0,     0,     0,     0,   707,     0,     0,   574,
     122,   124,   130,   132,     0,     0,   534,   706,     0,     0,
       0,     0,   695,     0,     0,   674,   669,     0,     0,     0,
     721,     0,     0,   663,     0,   707,   707,     0,     0,   670,
       0,     0,     0,   722,   536,     0,   718,   720,   719,     0,
       0,     0,   697,   696,     0,   675,     0,     0,   723,   724,
     708,   716,   710,     0,   712,   717,   714,     0,   707,     0,
     440,     0,   711,   709,   715,   713,   698,     0,   441,     0,
       0,     0,     0,     0,     0,   676,   677
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,   789,  1235,  1481,  1483,  1479,   790,  1118,   801,
    1482,   791,  1225,  1475,  1226,  1476,   802,  1702,  1703,  1704,
    2041,  2039,  2040,  2042,  2043,  2044,  2051,  2352,  2502,  2503,
    2055,  2356,  2505,  2506,  2059,  1712,  1713,   808,  1413,   476,
      25,    26,   764,  1751,  2245,  2008,  2370,  2081,  2048,  2346,
    2218,  2443,  1092,  1645,  1646,  1385,  1238,  2460,  2513,  1994,
     123,   348,   349,   613,   358,   359,   360,   361,   959,   636,
     362,   633,   973,   634,   969,  1505,  1506,   958,  1492,  2084,
     363,    27,    98,   175,   440,    28,   453,    29,  2130,  2396,
    2522,  2523,  1332,  1333,    30,    31,   953,   141,    32,   750,
      33,    34,  1510,    35,    36,    37,   752,  1073,  1614,  1615,
      38,    39,  1517,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,   383,    53,   654,  1522,
      54,  1064,  1345,  1603,  1967,  1969,  2152,    55,    56,  1546,
      57,  1391,  2193,  2022,  2337,  2433,  2537,  2334,   111,   201,
     784,  1103,  1395,  2020,  1657,  1101,    58,    59,   169,   438,
     758,   761,  1089,  1380,  1381,  1382,    60,   126,   965,    61,
     150,    62,    63,    64,  2185,  1998,  2604,  2605,    96,  1367,
    1368,  2104,  2102,  2554,  2596,  1779,  1369,  1281,  1022,  1033,
    1294,  1295,   723,  1299,  1082,  1083,    65,   121,   122,    66,
     729,   730,   731,  1579,  1594,  1963,    67,    68,   407,   408,
      69,   423,   741,    70,    71,   397,   682,    72,  1649,  2015
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1970
static const yytype_int16 yypact[] =
{
   13673,  -121,   -77,   194, 13600,   198, -1970,  1535, -1970,   225,
     281,   191,    82,   159, -1970,    55, -1970,   167,   576,    97,
     437,   -76,   137,   202,   633,   217, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970,   647, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970,   716,   723,   730,   340, -1970,   315,   530,
     605,   750,   614,   794,    91,   802,   804,   815,   605, -1970,
     574,   675,   605,   445,   447,   129,   575, -1970,    64,   151,
     177,   848,   181,   382,   871,   441,   498,   533,   480,   491,
     534,   731,   720,   467, -1970, -1970,   896,   927,   731,   718,
     124,   503, -1970,  7033,   933,   652,   131, -1970,   937,  -102,
     806,   820,   822,   807,   833,   580,   969,   972,   988, -1970,
   13673,   107,  -125,   611,   555,   484,  1012,    34,   492,   722,
    1016,   959,  1019,   603,   828,   541,   768,   623,   606,   885,
    1081, -1970,   532,  1091,   544,   545,   958,   826,   605,   681,
     685,  1137, -1970, -1970, -1970,   -91, -1970,   877, -1970,   905,
   -1970, -1970,   907, -1970,   921,  1023, -1970,   948,    61,   966,
   -1970,   985,   554,   557, -1970,  1006, -1970, -1970, -1970, -1970,
   -1970,  1163, -1970,  1126, -1970,  1036,  1294, 10953, 10953, -1970,
   -1970,  1307,   115, -1970, -1970, -1970, -1970,  1319, 10953, 10953,
   10953, -1970, -1970, -1970,  8209, -1970, -1970,   926, -1970, -1970,
   -1970,   918, -1970, -1970, -1970, -1970, -1970, -1970,  1312,   934,
     970,   981,   999,  1003,  1011,  1029,  1038,  1056,  1070,  1079,
    1097,  1107,  1171,  1173,  1175,  1181,  1182,  1204,  1205,  1206,
    1209,  1210,  1211,  1215,  1216,  1217,  1218,  1219,  1220,  1221,
    1222,  1223,  1224,  1225,  1233,  1237,  1238,  1243,  1245,  1247,
    1248,  1255,  1256,  1257,  1258,  1259,  1260,  1261,  1265,  1266,
    1267,  1268,  1269,  1270, -1970, -1970,  1271,  1272,  1273,  1276,
    1277,  1279,  1288,  1289,  1291,  1295,  1296,  1299,  1303,  1304,
    1305,  1308,  1310,  1314,  1315,  1316,  1317,  1318,  1321,  1322,
    1323,  1324,  1327,  1329,  1333,  1335,  1336,  1339,  1344,  1352,
    1354,  1357,  1362,  1367,  1368,  1369,  1370,  1371,  1373,  1375,
    1378,  1385,  1391,  1395,  1396,  1397, 10953, 14489,  -100, -1970,
    1161,   781,   783,    21,  1398,  1637,  1399,   168,  -182,   519,
   -1970,  1349, -1970,  1349, -1970,  1651,  1549,  1732,  1736,  1744,
    1770,  1817,  1812,  1564, -1970,  1411, -1970,  1781,  1782, -1970,
   -1970,  1792,  1834,    85, -1970, -1970,   645,   141,   431,    72,
     432,   597,   615,  1415,  1768,  1563,  1596,   154,   612, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970,   254, -1970,  1840,
    1852, -1970, -1970, 14154,  1659,    67,  1854,  1661,  1579,  1861,
      67, -1970, -1970,   364,    16, -1970,  1669,   565,  1587, -1970,
    1597,  1592, -1970,  1594,  1458,  1874,  1877,  1878,   -37,  1855,
   -1970,  -127,  -175,   131,  1879,  1881,  1882,  1883,  1884,    65,
    1887, -1970, -1970, -1970,  1892,  1894,  1824,  1618,  1826,  1621,
    1904,  -169, -1970,  1905,  -160, 14652, 14652, -1970,  1906, 10953,
   10953,  1363,  1363,  1875, 10953, 14115,    33,  1912,  1913,  1486,
   -1970, 10953,  7425, 10953, 10953, 10953, 10953, 10953, 10953, 10953,
   10953, 10953,  1492, 10953, 10953, 10953, 10953, 10953, 10953, 10953,
   10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953,  1495, 10953,
   10953, 10953,  1496, 10953, 10953, 10953, 10953, 10953, 10953,  8601,
   10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953,
    1502,  1503,  1505,  1506,  1507, 10953, 10953,  1508,  1509,  1511,
   10953, 10953,  1936,  1513,  1514, 10953, 10953, 10953, 10953, 10953,
   10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953,
   10953, 10953, 10953, 10953, 10953, 10953, 10953,  1515, 10953, 10953,
   10953,  1516, 10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953,
   10953, 10953,  1517, 10953, 10953,  9985, -1970, 10953, 10953, 10953,
   10953, 10953,   196,  1519,   859, 10953,  7817, 10953, 10953, 10953,
   10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953, 10953,
   10953, 10953,  1945, -1970,   131,  1946, 10953,  1947,  1948,   473,
   -1970,   145, 10953,  1524,   396,  1951,   131, -1970, -1970, -1970,
     427, -1970,   131,  1795,  1759, -1970,  1956,  1957,  1690,  1959,
    1561,  1562,  1691,  1695,  1693,  1965,  1696,  1966, -1970, -1970,
    1967,  1709,  1928,  1931, -1970,  2001,  2018,  2020,  2021,  2022,
    2023, -1970,  2025,  2026, -1970,  2027,  2028, 14154,  2029,  1788,
    2031,  2032,  2016,  2035,  2036,  2037,  1658,  2046,    41,   655,
    2064, -1970, -1970,  1822,  1825, -1970,   228,  1643,  1644, -1970,
   -1970,  1645,  1645,  1645,  1645,  1645, -1970,  1645, -1970,  1646,
    1645,  1645,  1645,  2012, -1970,  2012, -1970,  1645,  1645,  1645,
    1649,  2012,  1645,  2012, -1970, -1970, -1970, -1970, -1970,  1655,
    1657,  1681, -1970,   590,  2108, 14154,  2109,  2110,  2112,  1687,
    1688, -1970,  -185,  2114,  2122,  1930,  1700, -1970, -1970, -1970,
   -1970,  1933,  2084,  1741,  2135,  1942,  1859,  2138,   154,  1719,
   -1970,  2145,  1872,  2149,  2150,  2014,   -78, -1970,   451, -1970,
   -1970,    58, -1970, 10953,  1960,   131,  -186,   685, -1970, -1970,
   -1970, -1970, -1970,  1761, -1970,    61, -1970, -1970,  2152, -1970,
    2156, -1970,  2157,  2158,   -56, -1970,  2157,   400, -1970,  1345,
   -1970,  1733, 14652, 14151,   474, -1970, 10953, 10953, -1970,  1734,
   -1970, 10953,  1923,   551, -1970, -1970, -1970, 10273,  8993,  1969,
    2034,  2395, 10345, 10377, 10588, 10633, 10665, 10693, -1970,  2723,
    3058,  3393,  3728, 10737,  4063,  4398,  4733, 10769, 10980, 11025,
     834,  5068, 11053,  5403, -1970, 11085, 11129, 11161, -1970, 14552,
    5738,  6073,  6408,  6743,  9953,  1739, 11372, 11400, 11437, 11465,
   11497, 11541, 11573, 11600,  7134,  7170,  7452, -1970, -1970, -1970,
   -1970, -1970, 11627,  7497,  1815,  1819,  1821,   890,  1123,  1743,
    1823,  1830,  7524, 11654, 11681, 11708, 11735, 11762, 11792, 11820,
   11849,  7555,  7601,  7633,  7889,  7919,  7946,  7993,  8236,  1185,
   11877, 11909, 11953,  8281, -1970,  1212, 11985,  8310, -1970,  8341,
    8385,  8417,  8628, 12012, 12039, 12066,  8673,  8702,  8731, -1970,
   12093,  8777, -1970,  1149,  2074,  7259,  7847,  7847, -1970,    76,
   -1970, -1970,  1940, 10953, 10953,  1746, 10953, 14586,  1755,  1760,
    1763, 10953,  1595,  1226,  1226,  1090,   919,  1026,  1007,  1007,
     860,   860,   860,   860,   732,  1875,  1875,    92, -1970,  -111,
    2051, -1970, -1970,  1765,   145,  2033,  2038,  2039, -1970,  1923,
     473, 12120, -1970, -1970,    32,  -181,   519,  1759,  1759,  2041,
    1999,   131, -1970,  2042, -1970, -1970,  1771,  1929,  2197,  2202,
    1796,  1780,  1798,  1800,  2207, -1970,   837,    85,  2017,  2019,
      11, 14154, 14154,  2210, -1970,  1993, -1970, -1970, -1970,  1996,
    2183, 14154,  2217,  1976,  1980,  2222, -1970, -1970, -1970, -1970,
   -1970, -1970,  2223, -1970,  2226, -1970,  2224,  2233, -1970,    67,
      67,  2232, -1970, -1970, -1970, -1970, -1970, -1970,  2235, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,  2235, -1970,
   -1970, -1970,  2239,  2244,  2246,  2061,  1828,  1832, 10953,  1833,
    2183, 14154, 14154, 14154,  2049,    67,  -131,    27,  -116,  2066,
    2262,   696,    66,   708,  2127,  2267,  -115,  2274,  2280,  2087,
    1889,  1597,  1860, -1970, -1970, -1970,  1869, -1970, -1970,  2195,
    2287,    75, -1970,  1349, -1970,  2288, -1970, -1970, -1970,    68,
   14652,  2229,  2115,  -186, -1970, -1970,  2293, -1970, -1970, -1970,
    2278,  -151, -1970,   509,  1871, -1970,  -151,  1871,  2101, 10953,
   -1970, 10953, -1970, 10953, 14350, 14178,  2211,  8809,  1870,  1886,
   10953, 10953, -1970, 10953, 14219,  2142,  2142, 10953, -1970, -1970,
   -1970, -1970, -1970, -1970, 10953, 10953, 10953, 10953, -1970, 10953,
   10953, 10953, -1970, -1970, -1970, -1970, 10953, 10953, -1970, 10953,
   -1970, -1970, -1970, 14154, 14154, 10953, 10953, 10953,  2300, -1970,
    1970,  1971,  1972,  1974,  1978,  1982, -1970, -1970, -1970, 10953,
   10953, 10953, -1970, 10953,  1888,  1891,  1902,  1987,  2302,  1988,
    2334,  1990,  1914,  1915, 10953, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, 10953, 10953, 10953, 10953, 10953, 10953, 10953,
   10953, -1970, 10953, -1970, -1970, -1970, 10953, -1970, 10953, -1970,
   10953, 10953, 10953, 10953, 10953, -1970, -1970, -1970, 10953, 10953,
   10953, -1970, 10953, -1970, -1970, 10953,  1923,  7847,  7847,  2100,
   14619, 10953, -1970, 10953, 10953,  1923, -1970,  1932,  2071,   131,
    2343,   473,  2208,  2208,  2208,  1918, -1970,   608, 10953,  2346,
    2347,  1960, -1970, -1970,   131, 10953,   -15,   131,    60,  1924,
    1950,  2172,  2338,    73,  2339,  2350,  2181, -1970, -1970, -1970,
    2358,  2358,  1934,  2199,  2200,  1938,  2183,  2183, 14154, -1970,
   -1970, 13694,  2183, -1970,  2367,  2368, -1970, -1970, -1970,  2151,
    2153,  1943,  1952,   531,   -73,   880,   -73,   -73, -1970,   535,
     -73,   -73,   -73,   880,   880,   -73,   -73,   -73,   550,   880,
     -73,   880,  1954,  1955,  1973,  2301, -1970, 10953, 14652,    27,
    2183,  2183,  2183,   563, -1970,  1961,  1968, -1970,  1975,  2002,
    2004,  2005,   556, -1970,  2117,    27,  2377,  -103,  2328, -1970,
    2254,  2008, -1970, -1970,   487,  2155,  2084,  2130,    27,  -101,
    2198,  2398,  2414, -1970,   587,  1872,  2432,  2433,  -107,  2434,
    2015,  2281,   595,  2024,  2044,  2282,  2045,   566, -1970,  2441,
    1923, -1970, -1970,  2443,    77,  2442,  2445,  2446,  2047,   571,
   -1970,  2030, -1970,   799, 10953,  2241, -1970, -1970,  9385,  2298,
    2448, -1970, -1970,  2462,  9777,  -133, -1970,  -133, -1970, -1970,
   14652, 14423, -1970, 10953,  2048, 10953, -1970, -1970, 10196,  1280,
   12147, 10953, 10953,  2053,  2054, 12174, 12204, 12232,  9020,  9065,
   12261, 12289, 12321, 12365, 12397, 12424,   -14,   -13, 12451, 12478,
    9094,  2055,  2057,  2058,  2059,  2060,  2062,  2065,  1311,  9123,
   12505, 12532, -1970, -1970, -1970,  2067,   572,  2068,   579,  2069,
   -1970, -1970, 12559,  9169,  9201,  9412, 12586, 12616,  9457,  9489,
    1392,  1422,  1449, 12644, 12673, 12701, 12733, 12777, 12809,  9516,
    9561,  9593, 12836,  2063,  2070, 10953,  1923, 10953,  1986,  1923,
   14652,  1923,  2075,  1923,  2077,  2078,  2415,  2329,  -186, -1970,
   -1970,  2311,  2072,  2080,  2081, -1970,  2486, 14652,  2474,    35,
    2115, -1970, 14652, 10953,  2088, -1970, -1970,   -15, -1970, -1970,
    2073,    60,  2494,  2510,  2514, -1970, -1970,  2092,  2519, -1970,
    2521, -1970,  2102,   311, 10953,  2103,  2106,  2527, 13694, 13694,
    2183,  2342,  2533,  2111,  2113,  2121,  2485,  2535,  2123,  2536,
     184, -1970, -1970, -1970,  2386,  2389, -1970, 13694, -1970, -1970,
   -1970, -1970,  2341,   700, -1970,  2550, -1970, -1970,  2316,  2556,
   -1970,  2557, -1970, -1970, -1970, -1970,  2134, 12863,   591, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,   707,
      27,  2560,  2563,  2568,  2569,  2571, -1970,  2576,  2161,   598,
    2166,   -95,    27, -1970,  1652,  2463,  2581, -1970, -1970, -1970,
   -1970, -1970,  2583,  2330,  2127,  2167,   600,  2332,    27,  2594,
     -96,  2598,  2578,  2585,   634, -1970, -1970, -1970,  2472,    75,
   -1970,   456, 10953,  2190,  2191,  2192,  2618,  2618,  2194,  2527,
       5,    75, 14154, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
     571,   636,   571,    87,   586,  2193, -1970,   760,   192, -1970,
   -1970, 14652,  2366,  2605, -1970, -1970, 14652,   638, -1970,  2429,
   -1970, -1970, 14652,  2623, -1970, 10953, -1970, -1970, 10953, -1970,
   12890, 14013, -1970, -1970, -1970, -1970, -1970, 10953, 10953, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, 10953,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, 10953, 10953,
   -1970, -1970,  2283,  2283,  2283, -1970,  2279,  1001, -1970,  2285,
    1040, -1970,  2283,  2283, -1970, 10953, 10953, 10953, -1970, -1970,
   10953, 10953, -1970, 10953, -1970, 10953, -1970, 10953, -1970, -1970,
   -1970, -1970, -1970, -1970, 10953, 10953, 10953, -1970, -1970, -1970,
    2204,  2209,  1986,  2213,  2221, -1970,  2225, -1970, -1970,  2537,
    2573,  2489,  2329, -1970,  2636,  2636,  2636,  2212, 10953, 10953,
    2648,  2241, 14652,  2618, -1970,    60,  2227, -1970, -1970,  2643,
      73,  2644, -1970,  2656,  2658, 12917,  2662,  2664, -1970,   651,
   -1970, -1970, 13694, -1970, -1970,  2667, 10953,  2668,  2624,     9,
   10953, -1970, -1970, -1970, -1970, -1970, -1970,  2248,  2249,  2250,
   10953, -1970, -1970, -1970,   563,  2614, -1970,  2251,  2675, -1970,
     880, -1970,   880,   880, 10953, -1970, -1970,  2621, -1970,   663,
    2679,  2255,  2256,  2257,  2253, -1970,    27, -1970,    27,  2259,
    2260,   672,  2116, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970,  2476,  2549, -1970,  2264,  2268,  2418,
    2155,    27, -1970,  2269,   674,  2270,  2431,    27,  2272,  2700,
    2702, -1970,   587,  2436,   676,  2286,  2544,  2546,  2290, 12944,
    2662,  2618,  2618, -1970,   698,   763,  2664,   838,   -23, -1970,
   -1970,  2183,   840, -1970, -1970, -1970, -1970,  2712, -1970, -1970,
     799, 10953, 10953, -1970, -1970,  2289, -1970, 10169, -1970, 10561,
    2292,  2628,  2241,  2294, 12971, 12998, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, 13028, 13056, 13085,  2283,
    2283,  2283,  2283,  2283,  2283,  1490, 13113,  2661,  2531,  2531,
    2531,  2283,  2303,  2331,  2333,  2283,  2312,  2335,  2336,  2283,
    2531,  2531, 13145, 13189, 13221, 13248, 13275,  9804, 13302, 13329,
    9849,  9881,  9911, -1970, -1970, -1970, -1970, -1970,  2317, 10953,
   10953,  1960,  2489, -1970,   843,   845,   847,  2755, 14652, 14652,
    2741, -1970,   849,  2337,    60,  2599,  2340,  2602, -1970,  2725,
    2751, -1970,   854, -1970,   856, -1970,  2768, -1970,   888, 13356,
     920,  2344,  2351,  2616, -1970, 13383,  2349,  2352,  2353, 13410,
     759, -1970,  2451, -1970, -1970, 13440, -1970,  2786, -1970, -1970,
    2354, -1970, -1970, -1970,  2781,   922,  1000,    27,  2782, -1970,
   -1970,  3121,  3456,  3791,  4126,  4461,  4796,  2726,  2669,  2785,
   10953,  2717, -1970,  2330,  1057,    27, -1970,    27,  2369,  1059,
   -1970, -1970, -1970, -1970,  2663,     5, 10953,  2372,  2373,  2527,
   -1970,  1061,  1063,  1065, -1970,  2802, -1970,  1067, -1970,   646,
    2379,  2805,  2746,   309,  2747, -1970, 13700, -1970,   586, -1970,
   14652, 14652,  2808,  2814, -1970, 14652, -1970, 14652,  9777,  2390,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970,  2531,  2531,  2531,
    2531,  2531,  2531, -1970, 10953, -1970,  2816,  2757,  2392,  2393,
    2394,  2531, -1970,  2477,  2478,  2531, -1970,  2479,  2480,  2531,
    2402,  2403, -1970, -1970, -1970, -1970, -1970, 10953, -1970, -1970,
    2819,  2828,  2829,  2830, 14457,   314, 14652,  2115,  1960, -1970,
    2835, -1970, -1970,  2410, 10953, -1970,    60,  2411,  2822,    73,
    2823, -1970,  2575,  2646,  2847, -1970,  2848, -1970, -1970,  2852,
    1470, -1970,  2853, 10953, 10953, -1970, -1970, -1970, -1970, -1970,
   -1970,  2801, -1970,  5131, -1970, -1970,  5466, -1970,  2588,  2437,
   -1970, -1970,  1100,  2679, -1970,  2790,  2738,  2714,  2705,  2596,
   -1970,  2657, -1970, 13468,  2447,  2418, -1970,  1108,  1114,    27,
   -1970,  2456,     1, -1970, 13497,  2662,  2664,  1120,  2666, -1970,
   -1970, -1970, -1970, -1970,  2871,  2882,    26,   -62,  2470,  2465,
    2685, -1970, -1970,  2870,  2461,  1127,  2892,  2795,  2468,  2469,
    2487,  2490,  2492,  2495, 13525, -1970,  2471,  2903, -1970, -1970,
   -1970,  2500,  2283,  2481,  2502,  2503,  2283,  2505,  2507,  2508,
   -1970, -1970, 13557,  2511,  2484,  2501, -1970, -1970,  2693, 10953,
   -1970,  2807,  2115, -1970, -1970, 14652,  2523,    60,  2950,  1129,
    2951, -1970,  2953, -1970, -1970,  2528, -1970, -1970,  2529, 13601,
   13633, -1970,  5801, -1970, -1970,  2532, -1970, -1970, -1970,  2530,
   -1970, -1970, -1970, -1970, -1970,  6136,  2901, -1970, 10953, -1970,
   -1970, -1970,  1131,  2957, -1970,  1133,  1135, -1970,  2961, -1970,
    2539,  2963,  2966,  2542,  2543, -1970,  2952,  2545, 10953,  2971,
   -1970,  1138,   -16, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970,  2972,   586,  2547, -1970,  2531, -1970, -1970, -1970,  2531,
   -1970, -1970, -1970, -1970, -1970,  2981,  2982, -1970, 14457,   379,
    2831, -1970,    60,  2559, -1970, -1970,    73, -1970,  2564, -1970,
   -1970,  1512, -1970,  6471, -1970,  2988,  2588, -1970, -1970, 13660,
   -1970,  2565,  2791, -1970,  1144, -1970, -1970, -1970,  2997,  2999,
    3003,  3005, 14652,  2989, -1970,  3007, -1970, -1970, -1970, -1970,
    3008,  2584,  2283,  2283,  2586,  2283,  2283,  2587,  2589, -1970,
    2783,  2788,  2618, -1970,  2582,    60,  2591,  3014, -1970, -1970,
   -1970,  3001,  1148, -1970, -1970,  6806, -1970,  2777,  3020,  3021,
    3014,  2600,  2601,  2603,  2604, 10953, -1970,  2794,   586, -1970,
    2531,  2531, -1970,  2531,  2531, -1970, -1970,  2851,  2856,  2610,
      60,  2611, -1970, -1970,  1150,  3023, -1970,  2988, -1970,  2615,
    1146,  2617,  1152,  2622,  2813, -1970, -1970, 14652,  2814, -1970,
    2620,  2625,  2626,  2629, -1970, -1970,  2634,    60, -1970,  3048,
   -1970, -1970,  3054,  3050,  3014,  3014, -1970,  2837,  3061,  2461,
   -1970, -1970, -1970, -1970,    60,  2645,   508, -1970,  2670,  2665,
    1154,  1156,   510,  3092,  1158, -1970, -1970,  2671,    60,   -24,
    2945,   403,   -17, -1970,  3014, -1970, -1970,  3000,  2827, -1970,
    2837,    60,  2672, -1970, -1970,   512, -1970, -1970, -1970,    12,
     424,  1160,   510,   510,  2926, -1970,  2674,    60, -1970, -1970,
   -1970, -1970, -1970,   409, -1970, -1970, -1970,   476, -1970,  2854,
   -1970,  2676, -1970, -1970, -1970, -1970,   510,    74, -1970,  2909,
    2910,  2922,  2923,  3110,  3111, -1970, -1970
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1970,  2977,  -123, -1970, -1970, -1970, -1970, -1065,  1713, -1970,
    1885, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970, -1970, -1970,  1994,  2647,
   -1970,  -292,  -749,  1380, -1970, -1643, -1970,  1039, -1535, -1970,
   -1920, -1970, -1249, -1970,  1113, -1493, -1970, -1970, -1970, -1584,
   -1970, -1970,  2518,  -341,  -351,  2504,  -618, -1970, -1970,  -358,
   -1970, -1970,   628, -1970, -1970, -1970,  1628,  -925,   362,  -148,
   -1970, -1970, -1970,  2965,  2375, -1970,  2365, -1970,   850,   668,
   -1970,   588, -1315, -1970, -1970, -1970, -1970, -1970, -1970,  2083,
   -1970, -1970, -1508, -1970, -1970, -1970,  2082,  1791, -1970,  1170,
   -1970, -1970, -1762, -1970, -1970, -1970, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1970, -1970,  2506, -1970,  2168,  1893,
   -1970,  1813,  1554,  1190, -1970,  1009,   858, -1970, -1970, -1468,
   -1970, -1055, -1970, -1970, -1970, -1970, -1970,   599,   169,  3047,
    2704, -1970,  2079, -1970,   968,  2383, -1970, -1970, -1970, -1970,
   -1970, -1970, -1970, -1970, -1329,  1528, -1970, -1970, -1970, -1970,
     540, -1970, -1970, -1970, -1970,  1008, -1970,   558, -1970,  1555,
    1545, -1968, -1969, -1938, -1777, -1611, -1970, -1266,   839,   118,
     -53, -1007,  -501,  2139, -1349, -1970, -1970, -1970,  2968, -1970,
    -405, -1970,  2133,  1381, -1580, -1970, -1970, -1970, -1970,  2515,
   -1970, -1970, -1970, -1970, -1970,  2763, -1970, -1970, -1707, -1970
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -812
static const yytype_int16 yytable[] =
{
     347,  2009,  1500,  1766,  1568,   637,   624,  1761,  2096,  1620,
    1528,  1529,   619,  1832,   970,   736,  1547,  1094,  1997,   742,
    1589,  2171,  1046,  1046,   586,  2179,  1303,  1304,  2177,  1237,
    1327,   132,  1309,  1606,  1311,  1246,   614,   399,   400,   401,
     402,   403,   404,  1995,  1399,   443,  1011,  1077,  1389,  2179,
    1641,  1396,  1248,  1398,  2091,  1759,  -811,   365,   625,   615,
    1780,  1781,  1086,   119,  1508,   623,  1389,   170,   772,  1340,
     725,   782,   612,  2623,  2496,   661,  1077,  1515,  2659,  1803,
     786,  1056,  1223,   726,   465,   466,  2640,  2112,   763,  1272,
    2629,   765,   766,   763,   154,   471,   472,   473,    73,   759,
     127,   475,   587,   588,   589,   590,   591,   592,   593,  1078,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   209,   611,  2219,
    2220,    74,   166,  2421,   353,   451,  2005,  1325,  1078,  -372,
    2230,  2231,  2423,   662,   657,  1273,  1359,   763,   586,  2180,
    1334,  1347,   381,  1360,   176,  1372,   663,   795,   796,  1077,
    1473,   377,   378,  1591,  1635,  1607,  1000,  1373,  2049,  2050,
    1976,   353,   676,  1829,  2181,    77,   155,  2060,  2061,  2092,
     178,   379,  1503,   118,   181,    16,  1556,   125,  1792,  1793,
    1794,  1795,   128,   652,   114,  2013,   612,    78,  2181,  2006,
     171,    97,   918,  1374,  2641,  2182,  2424,  1557,   760,  1361,
    2113,  1375,  1274,  1362,   919,  1104,  1251,   727,   172,   115,
    2014,  1078,  2642,   585,  1050,   658,  2122,   405,   112,  2182,
    1363,   399,   400,   401,   402,   403,   404,   210,  2127,  1364,
     173,  2630,  2497,  1057,   626,  2624,  -811,   156,   626,  1250,
      75,  1504,  2643,  1509,  2183,   444,  1796,  2093,  2660,   783,
    1326,  1376,   728,   949,  1782,  1819,  1516,   174,   783,  1224,
    2114,   452,  1275,  1079,  2422,  2141,  1365,  1831,  2183,  1390,
     960,  1999,   120,    76,   113,   167,  2142,  2338,  2339,  2340,
    2341,  2342,  2343,  1974,  1087,  1088,  1830,  1658,   354,   366,
     439,  2351,   382,  -372,   355,  2355,  2143,   177,   797,  2359,
    1377,  2002,  1335,  1348,  2107,  2200,  1490,   380,  1012,   626,
    2144,  1619,   133,   134,   135,  1592,  1636,  1608,  2184,  2145,
     616,   136,  1977,   179,   116,   354,  1366,   182,   677,   444,
    1659,   355,  1660,   653,  1386,  1378,  2415,   792,  2416,  1080,
    1081,   793,  2184,  1256,  1328,  1329,  1330,  1331,   803,   807,
     809,   810,   811,   812,   813,   814,   815,   816,   817,  2146,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,   833,   183,   835,   836,   837,   920,
     839,   840,   841,   842,   843,   844,   846,   847,   848,   849,
     850,   851,   852,   853,   854,   855,   856,  2172,  2173,    16,
    1740,   117,   862,   863,  1093,  1685,  1686,   867,   868,   124,
     743,   405,   872,   873,   874,   875,   876,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   887,   888,   889,
     890,   891,   892,   893,   186,   895,   896,   897,   618,   899,
     900,   901,   902,   903,   904,   905,   906,   907,   908,  1249,
     910,   911,  1760,   406,   913,   914,   915,   916,   917,   773,
    1341,   737,   927,   932,   933,   934,   935,   936,   937,   938,
     939,   940,   941,   942,   943,   944,   945,   946,   947,  1487,
    1276,  1277,  1105,   347,   664,  1108,  1379,  2379,  2644,   961,
    1282,   188,   659,   665,  2207,  2208,  2209,  2210,  2211,  2212,
    1119,  2135,   356,  2136,  2007,   921,  2221,  1797,  1798,  1799,
    2225,   738,  2652,  1236,  2229,  2501,  2609,  1597,  2617,  2504,
     678,   679,   680,   681,  1985,   426,   190,   194,   184,   395,
    2626,  2283,   468,   469,   417,  2331,  2286,   430,   432,   356,
    1320,  1321,  1322,  1810,   137,  1812,  1813,   456,  2317,   357,
     458,   587,   588,   589,   590,   591,   592,   593,   745,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,  2257,   611,  1774,  2654,
    1986,  2368,  2562,   386,  1598,   627,   357,   187,  1112,  1113,
     667,  2367,  2653,  2627,   967,  2610,   955,  2610,  1045,  2510,
    2638,  -334,  1800,  1241,  1291,  1292,  2645,   427,   669,   138,
    2570,  2571,   739,  2572,  2573,  1569,  1046,   956,   160,  1570,
     387,   409,   163,   139,  2646,  2005,  1501,  2511,  2628,  1507,
    1090,    16,   968,   140,  1599,   421,  2600,  2601,   660,   666,
     142,  2323,  1426,  1427,   189,   388,  2154,  1987,  1372,   635,
    1013,  2639,  2159,   389,  2647,   422,  2324,  1245,  1047,  2655,
    1373,  1107,   628,  1114,  1115,   390,  2631,  1571,  1117,  -577,
    1572,   668,  -340,   685,   686,  1124,   670,  1120,   428,   191,
     195,  2611,   396,  2611,   410,  1573,   629,   418,  2006,   671,
     431,   433,  2392,  1048,  2516,  2612,  1374,  2612,   436,   630,
     457,   384,   683,   459,  1375,  1574,   655,  1988,  1014,   143,
    2405,   746,  -577,  1575,  2328,  1370,   144,   207,  1600,   656,
    -577,   385,   684,   145,   631,  2186,   146,  2329,   208,  1752,
     957,  1773,   391,   147,  2369,  1601,   148,  1338,  2376,   797,
    1624,  1805,  -577,   151,  2371,   196,  1339,   632,  1817,  1625,
    1806,   149,   740,   392,  1376,   609,   610,  1818,   611,   152,
     587,   588,   589,   590,   591,   592,   593,  1530,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   393,   611,   153,   197,  2499,
    1227,  1228,  1643,  1230,  1644,   157,   351,   158,   585,  2602,
    2281,  2473,  1576,  1377,  1577,  2509,  2313,  2445,   159,  2282,
     161,  2449,  2292,  1034,   394,   963,   626,   168,   352,  1039,
     162,  1041,  2247,  1578,   196,   129,   130,   131,  2632,  2633,
    2307,   164,  2308,   165,   587,   588,   589,   590,   591,   592,
     593,   180,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,  2463,
     611,  2656,   923,   924,   185,   925,   192,   197,   926,  2461,
    1084,  1085,  1267,  1268,  -581,   198,  -578,   193,  1488,  1496,
     199,   202,   608,   609,   610,  2569,   611,   203,  2525,   204,
     587,   588,   589,   590,   591,   592,   593,   200,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,  1318,   611,  -581,  2549,  -578,
     205,  1342,  1343,   211,  1474,  -581,   350,  -578,  1392,  1393,
     364,  2011,   367,  1485,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,  2514,   611,   368,  -581,   369,  -578,
    1554,  1555,  1558,  1559,  1560,  1561,   370,  2540,  2541,   371,
    2543,  2544,   373,  1296,  1297,   374,  1300,  1301,  1302,  1562,
    1561,  1121,  1305,  1306,  1307,  1586,  1587,  1310,  1400,   372,
    1401,   375,  1612,  1613,  2412,  1630,  1631,  1408,  1409,  2372,
    1410,  1706,  1707,   411,  1415,  2053,  2054,  2551,  1709,  1710,
     413,  1416,  1417,  1418,  1419,   398,  1420,  1421,  1422,   412,
    1816,  1587,   414,  1423,  1424,   416,  1425,  1827,  1587,  1972,
    1587,   415,  1428,  1429,  1430,   604,   605,   606,   607,   608,
     609,   610,  2576,   611,  2057,  2058,  1438,  1439,  1440,   419,
    1441,   420,   602,   603,   604,   605,   606,   607,   608,   609,
     610,  1452,   611,  1981,  1982,  2003,  1642,  2018,  2019,  2595,
    1453,  1454,  1455,  1456,  1457,  1458,  1459,  1460,  1633,  1461,
    2105,  2106,   424,  1462,   425,  1463,  2607,  1464,  1465,  1466,
    1467,  1468,  2128,  1587,   429,  1469,  1470,  1471,   434,  1472,
    2622,  2139,  1587,  2156,  1587,  2165,  1631,   435,  1478,   437,
    1480,  1480,   439,  2636,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,  1497,   611,  2174,  2175,  2651,
     462,  2001,  1502,   587,   588,   589,   590,   591,   592,   593,
     441,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   445,   611,
     588,   589,   590,   591,   592,   593,   461,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,  1741,   611,   446,  1743,   447,  1744,
    2012,  1746,  2176,  2175,  1567,   587,   588,   589,   590,   591,
     592,   593,   448,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     449,   611,   587,   588,   589,   590,   591,   592,   593,   450,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   454,   611,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,  1647,   611,  1145,  1146,  1651,   455,  2178,  2106,  2187,
    1642,  1656,  2249,  2250,  2251,  2250,  2252,  2250,  2255,  2175,
    1662,   463,  1117,  2263,  2264,  2265,  2266,   460,  1670,  1671,
     587,   588,   589,   590,   591,   592,   593,   464,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   119,   611,  2268,  2269,  1177,
    1178,   587,   588,   589,   590,   591,   592,   593,   470,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   478,   611,   479,  2271,
    2272,  2290,  1587,   477,  1742,   587,   588,   589,   590,   591,
     592,   593,   480,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
    1762,   611,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   481,   611,
     635,  1775,   587,   588,   589,   590,   591,   592,   593,   482,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   483,   611,  2291,
    1587,   484,   587,   588,   589,   590,   591,   592,   593,   485,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   486,   611,   587,
     588,   589,   590,   591,   592,   593,   487,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   488,   611,  2306,  1587,  2310,  1587,
    2318,  2264,  2319,  2175,  2320,  2175,  2322,  2266,   489,  1989,
     587,   588,   589,   590,   591,   592,   593,   490,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   491,   611,  2386,  2387,  2398,
    1587,  1023,  1024,  1025,  1026,   492,  1027,  2410,  1587,  1029,
    1030,  1031,  2024,  2411,  1587,  2025,  1035,  1036,  1037,  2417,
    2106,  1040,  1179,  1180,  2036,  2037,  2430,  2019,  2465,  2466,
    2480,  1587,  2482,  2264,  2483,  2266,  2038,  2494,  2495,  2518,
    2519,  2529,  2530,  2583,  2584,  2045,  2046,  2556,  2557,  2578,
    2579,  2586,  2579,  2615,  2579,  2616,  2579,  2619,  2620,  2648,
    2579,   617,  2062,  2063,  2064,  1252,  1253,  2065,  2066,   493,
    2067,   494,  2068,   495,  2069,  1493,  1494,  2085,  2086,   496,
     497,  2070,  2071,  2072,  1201,  1202,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
      99,   611,   498,   499,   500,  2088,  2089,   501,   502,   503,
     621,  1207,  1208,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   638,  1833,  1834,  1835,  1836,  1837,
    1838,   515,  1839,  2109,  1840,   516,   517,  2115,  1841,  1842,
    1843,   518,  1844,   519,   100,   520,   521,  2119,  1845,  1846,
    1847,  1848,  1849,   522,   523,   524,   525,   526,   527,   528,
     101,  2125,  1850,   529,   530,   531,   532,   533,   534,   535,
     536,   537,  1851,  1852,   538,   539,  1853,   540,   639,  1667,
    1668,  1854,  1855,  1856,  1857,  1858,   541,   542,  1859,   543,
    1860,  1861,  1862,   544,   545,  1863,  1864,   546,  1865,  1866,
    1867,   547,   548,   549,  1868,   640,   550,   102,   551,   641,
    1697,  1698,   552,   553,   554,   555,   556,   642,  1869,   557,
     558,   559,   560,  1870,   103,   561,   104,   562,  1871,  1872,
    1873,   563,   105,   564,   565,  1874,  1875,   566,  1876,  1877,
    1878,  1879,   567,   643,  1880,  1109,  1881,  1882,  1883,  1884,
     568,  1885,   569,  1886,  1887,   570,  1888,   106,  1889,  1890,
     571,  1891,  1892,  1893,  1894,   572,   573,   574,   575,   576,
    1895,   577,  1896,   578,  1897,  1898,   579,  1899,  1900,  1901,
    1902,  1903,  1904,   580,  1905,  1906,  1907,  1908,  1909,   581,
     644,  1722,  1723,   582,   583,   584,   620,   622,   645,  1910,
     646,  1911,   647,  1912,   648,   649,   650,   651,   672,   673,
     674,   675,  1913,   687,  1914,  1915,  1916,  1917,  1918,  1919,
    1920,  1724,  1725,  1921,  1922,   688,   724,   732,   733,  1923,
     734,  1924,  1925,  1926,   735,  1927,   744,  1928,   747,  1929,
    1930,  1931,  1932,   751,   749,   753,   754,   755,  1726,  1727,
     756,   757,   767,   762,   768,   769,   770,   771,  2190,  2191,
     774,  1933,  1934,  1935,  2195,   775,  2197,   776,   777,   778,
     779,  1936,   780,  1937,  1938,  1939,   107,   781,   785,   788,
    1940,   611,  1941,  1942,  1943,   798,   799,   800,  1944,  2213,
    2214,   818,  1945,  1946,   834,   838,  1947,  1948,  1949,  1950,
     108,   857,   858,  1951,   859,   860,   861,   864,   865,   109,
     866,   869,   870,   871,   894,   898,   909,   922,   948,   950,
     952,   954,   110,   962,   964,   972,  2244,  2246,   971,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
     988,   985,   986,   989,  1952,  1953,  1954,  1955,  1956,   587,
     588,   589,   590,   591,   592,   593,   381,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   990,   611,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   991,   611,   992,   993,   994,   995,  2303,   996,   997,
     998,   999,  1001,  1002,  1003,  1004,  1005,  1009,  1006,  1016,
    1008,  1007,  1017,  2314,   587,   588,   589,   590,   591,   592,
     593,  1010,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,  1015,
     611,  1019,  1020,  1021,  1028,  1656,  1032,  1038,  1957,  1958,
    1959,  1960,  1961,  1042,  1962,  1043,   589,   590,   591,   592,
     593,  2344,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,  1044,
     611,  1049,  1051,  1052,  2362,  1053,  1054,  1058,  1055,  1833,
    1834,  1835,  1836,  1837,  1838,  1059,  1839,  1060,  1840,  1061,
    1062,  2375,  1841,  1842,  1843,  1063,  1844,  1065,  1066,  1067,
    1068,  1069,  1845,  1846,  1847,  1848,  1849,  1070,  1071,  1072,
    2389,  2390,  1074,  1075,  1076,  1098,  1850,  1096,  1091,  1099,
    1100,  1102,  1110,  1116,    16,  1174,  1851,  1852,  1160,  1175,
    1853,  1176,  1181,  1182,  1229,  1854,  1855,  1856,  1857,  1858,
    1183,   -84,  1859,  1232,  1860,  1861,  1862,  1239,  1233,  1863,
    1864,  1234,  1865,  1866,  1867,  1240,  1255,  1242,  1868,  1258,
    1259,  1260,  1243,  1244,  1254,  1257,  1261,  1262,  1263,  1264,
    1265,  1266,  1869,  1278,  1270,  1279,  1271,  1870,  1280,  1046,
    1283,  1284,  1871,  1872,  1873,  1285,  1286,  1289,  1287,  1874,
    1875,  1288,  1876,  1877,  1878,  1879,  1290,  1293,  1880,  1298,
    2140,  1882,  1883,  1884,  1312,  1885,  2458,  1886,  1887,  1313,
    1888,  1314,  1889,  1890,  1315,  1891,  1892,  1893,  1894,  1316,
    1317,  1319,  1323,  1336,  1895,  1337,  1896,  1344,  1897,  1898,
    1346,  1899,  1900,  1901,  1902,  1903,  1904,  1349,  1905,  1906,
    1907,  1908,  1909,  1350,  1351,  2479,  1352,  1356,  1354,  1357,
    1358,  1371,  1383,  1910,  1384,  1911,  1387,  1912,  1388,  1394,
    1389,  1406,  1404,  1412,  1431,  2492,  1913,  1446,  1914,  1915,
    1916,  1917,  1918,  1919,  1920,  1407,  1442,  1921,  1922,  1443,
    1432,  1433,  1434,  1923,  1435,  1924,  1925,  1926,  1436,  1927,
    1444,  1928,  1437,  1929,  1930,  1931,  1932,  1445,  1447,  1448,
    1449,   -86,  1450,  1451,  1486,   763,  1489,  1495,  1491,  1498,
    1499,  1513,  1511,  1512,  1519,  1933,  1934,  1935,  1514,  1518,
    1520,  1521,  1524,  1525,  1526,  1936,  1527,  1937,  1938,  1939,
    1548,  1549,  1552,  1550,  1940,  1551,  1941,  1942,  1943,  1566,
    1590,  1553,  1944,  1563,  1564,  1588,  1945,  1946,  1593,  1580,
    1947,  1948,  1949,  1950,  1595,  1609,  1581,  1951,  1605,  1125,
    1602,  1610,  1565,  1582,  1596,   587,   588,   589,   590,   591,
     592,   593,  2567,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
    1583,   611,  1584,  1585,  1611,  1617,  1618,  1621,  1952,  1953,
    1954,  1955,  1956,  1622,  1632,  1623,  1628,  1634,  1637,  1638,
    1639,  1653,  1626,  1648,  1833,  1834,  1835,  1836,  1837,  1838,
    1642,  1839,  1652,  1840,  1126,  1654,  1749,  1841,  1842,  1843,
    1750,  1844,  1627,  1629,  1753,  1640,  1663,  1845,  1846,  1847,
    1848,  1849,  1672,  1673,  1690,  1691,  1692,  1693,  1694,  1757,
    1695,  1850,  1738,  1696,  1758,  1705,  1708,  1711,  1767,  1739,
    1754,  1851,  1852,  1765,  1745,  1853,  1747,  1748,  1755,  1756,
    1854,  1855,  1856,  1857,  1858,  1768,  1763,  1859,  1769,  1860,
    1861,  1862,  1770,  1771,  1863,  1864,  1772,  1865,  1866,  1867,
    1778,  1776,  1773,  1868,  1777,  1783,  1784,  1788,  1789,  1785,
    1791,  1786,  1957,  1958,  1959,  1960,  1961,  1869,  1962,  1787,
    1801,  1790,  1870,  1802,  1804,  1807,  1808,  1871,  1872,  1873,
    1809,  1811,  1814,  1820,  1874,  1875,  1821,  1876,  1877,  1878,
    1879,  1822,  1823,  1880,  1824,  2284,  1882,  1883,  1884,  1825,
    1885,  1964,  1886,  1887,  1965,  1888,  1966,  1889,  1890,  1826,
    1891,  1892,  1893,  1894,  1828,  1971,  1968,  1975,  1979,  1895,
    1973,  1896,  1978,  1897,  1898,  1980,  1899,  1900,  1901,  1902,
    1903,  1904,  1983,  1905,  1906,  1907,  1908,  1909,  1990,  1991,
    1992,  1993,  1996,  2010,  2016,  2017,  2021,  2023,  1910,  2052,
    1911,  2078,  1912,  2073,  2047,  2056,  2079,  2080,  2074,  2083,
    2087,  1913,  2075,  1914,  1915,  1916,  1917,  1918,  1919,  1920,
    2076,  2090,  1921,  1922,  2077,  2095,  2097,  2094,  1923,  2098,
    1924,  1925,  1926,  2099,  1927,  2101,  1928,  2103,  1929,  1930,
    1931,  1932,  2108,  2110,  2121,  2111,  2116,  2117,  2118,  2124,
    2123,  2126,  2129,  2134,  2131,  2132,  2133,  2137,  2138,  2148,
    1933,  1934,  1935,  2147,  2149,  2151,  2150,  2155,  2157,  2158,
    1936,  2160,  1937,  1938,  1939,  2161,  2162,  2164,  2167,  1940,
    2168,  1941,  1942,  1943,  2166,  2188,  2199,  1944,  2169,  2192,
    2198,  1945,  1946,  2201,  2216,  1947,  1948,  1949,  1950,  2217,
    2243,  2222,  1951,   587,   588,   589,   590,   591,   592,   593,
    2226,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,  2253,   611,
    2223,  2254,  2224,  2258,  2227,  2228,  2260,  2256,  2261,  2262,
    2259,  2267,  2273,  1952,  1953,  1954,  1955,  1956,  2277,  2274,
    2275,  2278,  2279,  2288,  2289,  2293,  2300,  2301,  2302,  1833,
    1834,  1835,  1836,  1837,  1838,  2304,  1839,  2309,  1840,  2311,
    2315,  2316,  1841,  1842,  1843,  2321,  1844,  2325,  2326,  2327,
    2330,  2332,  1845,  1846,  1847,  1848,  1849,  2333,  2336,  2345,
    2347,  2348,  2349,  2350,  2363,  1127,  1850,  2353,  2354,  2357,
    2358,  2360,  2361,  2364,  2365,  2366,  1851,  1852,  2373,  2374,
    1853,  2377,  2378,  2380,  2381,  1854,  1855,  1856,  1857,  1858,
    2383,  2384,  1859,  2382,  1860,  1861,  1862,  2385,  2388,  1863,
    1864,  2391,  1865,  1866,  1867,  2395,  2397,  2400,  1868,  2401,
    2402,  2403,  2404,  2418,  2406,  2408,  2419,  1957,  1958,  1959,
    1960,  1961,  1869,  1962,  2413,  2420,  2425,  1870,  2426,  2427,
    2428,  2429,  1871,  1872,  1873,  2431,  2432,  2434,  2435,  1874,
    1875,  2441,  1876,  1877,  1878,  1879,  2442,  2457,  1880,  2446,
    2287,  1882,  1883,  1884,  2455,  1885,  2436,  1886,  1887,  2437,
    1888,  2438,  1889,  1890,  2439,  1891,  1892,  1893,  1894,  2444,
    2447,  2456,  2448,  2450,  1895,  2451,  1896,  2452,  1897,  1898,
    2454,  1899,  1900,  1901,  1902,  1903,  1904,  2459,  1905,  1906,
    1907,  1908,  1909,  2462,  2464,  2467,  2468,  2469,  2470,  2476,
    2475,  2478,  2481,  1910,  2484,  1911,  2486,  1912,  2485,  2487,
    2488,  2489,  2490,  2491,  2493,  2498,  1913,  2500,  1914,  1915,
    1916,  1917,  1918,  1919,  1920,  2507,  2508,  1921,  1922,  2515,
    2512,  2521,  2517,  1923,  2527,  1924,  1925,  1926,  2528,  1927,
    2531,  1928,  2532,  1929,  1930,  1931,  1932,  2533,  2534,  2535,
    2536,  2538,  2550,  2539,  2547,  2542,  2545,  2553,  2546,  2548,
    2552,  2555,  2559,  2560,  2561,  1933,  1934,  1935,  2580,  2563,
    2564,  2574,  2565,  2566,  2568,  1936,  2575,  1937,  1938,  1939,
    2175,  2577,  2588,  2582,  1940,  2585,  1941,  1942,  1943,  2590,
    2587,  2597,  1944,  2599,  2591,  2592,  1945,  1946,  2593,  2598,
    1947,  1948,  1949,  1950,  2594,  2603,  2606,  1951,   587,   588,
     589,   590,   591,   592,   593,  2608,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,  2614,   611,  2618,  2625,  2623,  2634,  2613,
    2649,  2621,  2637,  2650,  2657,  2658,  2661,  2662,  1952,  1953,
    1954,  1955,  1956,  2663,  2664,  2665,  2666,   376,  1664,  1484,
    1414,  2248,   794,  2189,  1833,  1834,  1835,  1836,  1837,  1838,
     966,  1839,  2082,  1840,   951,  1764,   442,  1841,  1842,  1843,
    1097,  1844,  1095,  2399,  2524,  2581,  1616,  1845,  1846,  1847,
    1848,  1849,  2163,  1134,  1353,  1269,  1355,   987,  1970,  1604,
    2153,  1850,  2305,  2409,  1523,   206,  2335,  2589,   787,  1106,
    2004,  1851,  1852,  2312,  1984,  1853,  2000,  1308,  2635,   467,
    1854,  1855,  1856,  1857,  1858,  2120,  1397,  1859,  1324,  1860,
    1861,  1862,   748,     0,  1863,  1864,     0,  1865,  1866,  1867,
       0,  1018,     0,  1868,     0,     0,     0,     0,     0,     0,
       0,     0,  1957,  1958,  1959,  1960,  1961,  1869,  1962,     0,
       0,     0,  1870,     0,     0,     0,     0,  1871,  1872,  1873,
       0,     0,     0,     0,  1874,  1875,     0,  1876,  1877,  1878,
    1879,     0,     0,  1880,     0,  2294,  1882,  1883,  1884,     0,
    1885,     0,  1886,  1887,     0,  1888,     0,  1889,  1890,     0,
    1891,  1892,  1893,  1894,     0,     0,     0,     0,     0,  1895,
       0,  1896,     0,  1897,  1898,     0,  1899,  1900,  1901,  1902,
    1903,  1904,     0,  1905,  1906,  1907,  1908,  1909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1910,     0,
    1911,     0,  1912,     0,     0,     0,     0,     0,     0,     0,
       0,  1913,     0,  1914,  1915,  1916,  1917,  1918,  1919,  1920,
       0,     0,  1921,  1922,     0,     0,     0,     0,  1923,     0,
    1924,  1925,  1926,     0,  1927,     0,  1928,     0,  1929,  1930,
    1931,  1932,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1933,  1934,  1935,     0,     0,     0,     0,     0,     0,     0,
    1936,     0,  1937,  1938,  1939,     0,     0,     0,     0,  1940,
       0,  1941,  1942,  1943,     0,     0,     0,  1944,     0,     0,
       0,  1945,  1946,     0,     0,  1947,  1948,  1949,  1950,     0,
       0,     0,  1951,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1952,  1953,  1954,  1955,  1956,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1833,
    1834,  1835,  1836,  1837,  1838,     0,  1839,     0,  1840,     0,
       0,     0,  1841,  1842,  1843,     0,  1844,     0,     0,     0,
       0,     0,  1845,  1846,  1847,  1848,  1849,     0,  1135,     0,
       0,     0,     0,     0,     0,     0,  1850,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1851,  1852,     0,     0,
    1853,     0,     0,     0,     0,  1854,  1855,  1856,  1857,  1858,
       0,     0,  1859,     0,  1860,  1861,  1862,     0,     0,  1863,
    1864,     0,  1865,  1866,  1867,     0,     0,     0,  1868,     0,
       0,     0,     0,     0,     0,     0,     0,  1957,  1958,  1959,
    1960,  1961,  1869,  1962,     0,     0,     0,  1870,     0,     0,
       0,     0,  1871,  1872,  1873,     0,     0,     0,     0,  1874,
    1875,     0,  1876,  1877,  1878,  1879,     0,     0,  1880,     0,
    2295,  1882,  1883,  1884,     0,  1885,     0,  1886,  1887,     0,
    1888,     0,  1889,  1890,     0,  1891,  1892,  1893,  1894,     0,
       0,     0,     0,     0,  1895,     0,  1896,     0,  1897,  1898,
       0,  1899,  1900,  1901,  1902,  1903,  1904,     0,  1905,  1906,
    1907,  1908,  1909,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1910,     0,  1911,     0,  1912,     0,     0,
       0,     0,     0,     0,     0,     0,  1913,     0,  1914,  1915,
    1916,  1917,  1918,  1919,  1920,     0,     0,  1921,  1922,     0,
       0,     0,     0,  1923,     0,  1924,  1925,  1926,     0,  1927,
       0,  1928,     0,  1929,  1930,  1931,  1932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1933,  1934,  1935,     0,     0,
       0,     0,     0,     0,     0,  1936,     0,  1937,  1938,  1939,
       0,     0,     0,     0,  1940,     0,  1941,  1942,  1943,     0,
       0,     0,  1944,     0,     0,     0,  1945,  1946,     0,     0,
    1947,  1948,  1949,  1950,     0,     0,     0,  1951,   587,   588,
     589,   590,   591,   592,   593,     0,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1952,  1953,
    1954,  1955,  1956,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1833,  1834,  1835,  1836,  1837,  1838,
       0,  1839,     0,  1840,     0,     0,     0,  1841,  1842,  1843,
       0,  1844,     0,     0,     0,     0,     0,  1845,  1846,  1847,
    1848,  1849,     0,  1136,     0,     0,     0,     0,     0,     0,
       0,  1850,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1851,  1852,     0,     0,  1853,     0,     0,     0,     0,
    1854,  1855,  1856,  1857,  1858,     0,     0,  1859,     0,  1860,
    1861,  1862,     0,     0,  1863,  1864,     0,  1865,  1866,  1867,
       0,     0,     0,  1868,     0,     0,     0,     0,     0,     0,
       0,     0,  1957,  1958,  1959,  1960,  1961,  1869,  1962,     0,
       0,     0,  1870,     0,     0,     0,     0,  1871,  1872,  1873,
       0,     0,     0,     0,  1874,  1875,     0,  1876,  1877,  1878,
    1879,     0,     0,  1880,     0,  2296,  1882,  1883,  1884,     0,
    1885,     0,  1886,  1887,     0,  1888,     0,  1889,  1890,     0,
    1891,  1892,  1893,  1894,     0,     0,     0,     0,     0,  1895,
       0,  1896,     0,  1897,  1898,     0,  1899,  1900,  1901,  1902,
    1903,  1904,     0,  1905,  1906,  1907,  1908,  1909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1910,     0,
    1911,     0,  1912,     0,     0,     0,     0,     0,     0,     0,
       0,  1913,     0,  1914,  1915,  1916,  1917,  1918,  1919,  1920,
       0,     0,  1921,  1922,     0,     0,     0,     0,  1923,     0,
    1924,  1925,  1926,     0,  1927,     0,  1928,     0,  1929,  1930,
    1931,  1932,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1933,  1934,  1935,     0,     0,     0,     0,     0,     0,     0,
    1936,     0,  1937,  1938,  1939,     0,     0,     0,     0,  1940,
       0,  1941,  1942,  1943,     0,     0,     0,  1944,     0,     0,
       0,  1945,  1946,     0,     0,  1947,  1948,  1949,  1950,     0,
       0,     0,  1951,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1952,  1953,  1954,  1955,  1956,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1833,
    1834,  1835,  1836,  1837,  1838,     0,  1839,     0,  1840,     0,
       0,     0,  1841,  1842,  1843,     0,  1844,     0,     0,     0,
       0,     0,  1845,  1846,  1847,  1848,  1849,     0,  1137,     0,
       0,     0,     0,     0,     0,     0,  1850,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1851,  1852,     0,     0,
    1853,     0,     0,     0,     0,  1854,  1855,  1856,  1857,  1858,
       0,     0,  1859,     0,  1860,  1861,  1862,     0,     0,  1863,
    1864,     0,  1865,  1866,  1867,     0,     0,     0,  1868,     0,
       0,     0,     0,     0,     0,     0,     0,  1957,  1958,  1959,
    1960,  1961,  1869,  1962,     0,     0,     0,  1870,     0,     0,
       0,     0,  1871,  1872,  1873,     0,     0,     0,     0,  1874,
    1875,     0,  1876,  1877,  1878,  1879,     0,     0,  1880,     0,
    2297,  1882,  1883,  1884,     0,  1885,     0,  1886,  1887,     0,
    1888,     0,  1889,  1890,     0,  1891,  1892,  1893,  1894,     0,
       0,     0,     0,     0,  1895,     0,  1896,     0,  1897,  1898,
       0,  1899,  1900,  1901,  1902,  1903,  1904,     0,  1905,  1906,
    1907,  1908,  1909,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1910,     0,  1911,     0,  1912,     0,     0,
       0,     0,     0,     0,     0,     0,  1913,     0,  1914,  1915,
    1916,  1917,  1918,  1919,  1920,     0,     0,  1921,  1922,     0,
       0,     0,     0,  1923,     0,  1924,  1925,  1926,     0,  1927,
       0,  1928,     0,  1929,  1930,  1931,  1932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1933,  1934,  1935,     0,     0,
       0,     0,     0,     0,     0,  1936,     0,  1937,  1938,  1939,
       0,     0,     0,     0,  1940,     0,  1941,  1942,  1943,     0,
       0,     0,  1944,     0,     0,     0,  1945,  1946,     0,     0,
    1947,  1948,  1949,  1950,     0,     0,     0,  1951,   587,   588,
     589,   590,   591,   592,   593,     0,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1952,  1953,
    1954,  1955,  1956,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1833,  1834,  1835,  1836,  1837,  1838,
       0,  1839,     0,  1840,     0,     0,     0,  1841,  1842,  1843,
       0,  1844,     0,     0,     0,     0,     0,  1845,  1846,  1847,
    1848,  1849,     0,  1139,     0,     0,     0,     0,     0,     0,
       0,  1850,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1851,  1852,     0,     0,  1853,     0,     0,     0,     0,
    1854,  1855,  1856,  1857,  1858,     0,     0,  1859,     0,  1860,
    1861,  1862,     0,     0,  1863,  1864,     0,  1865,  1866,  1867,
       0,     0,     0,  1868,     0,     0,     0,     0,     0,     0,
       0,     0,  1957,  1958,  1959,  1960,  1961,  1869,  1962,     0,
       0,     0,  1870,     0,     0,     0,     0,  1871,  1872,  1873,
       0,     0,     0,     0,  1874,  1875,     0,  1876,  1877,  1878,
    1879,     0,     0,  1880,     0,  2298,  1882,  1883,  1884,     0,
    1885,     0,  1886,  1887,     0,  1888,     0,  1889,  1890,     0,
    1891,  1892,  1893,  1894,     0,     0,     0,     0,     0,  1895,
       0,  1896,     0,  1897,  1898,     0,  1899,  1900,  1901,  1902,
    1903,  1904,     0,  1905,  1906,  1907,  1908,  1909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1910,     0,
    1911,     0,  1912,     0,     0,     0,     0,     0,     0,     0,
       0,  1913,     0,  1914,  1915,  1916,  1917,  1918,  1919,  1920,
       0,     0,  1921,  1922,     0,     0,     0,     0,  1923,     0,
    1924,  1925,  1926,     0,  1927,     0,  1928,     0,  1929,  1930,
    1931,  1932,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1933,  1934,  1935,     0,     0,     0,     0,     0,     0,     0,
    1936,     0,  1937,  1938,  1939,     0,     0,     0,     0,  1940,
       0,  1941,  1942,  1943,     0,     0,     0,  1944,     0,     0,
       0,  1945,  1946,     0,     0,  1947,  1948,  1949,  1950,     0,
       0,     0,  1951,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1952,  1953,  1954,  1955,  1956,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1833,
    1834,  1835,  1836,  1837,  1838,     0,  1839,     0,  1840,     0,
       0,     0,  1841,  1842,  1843,     0,  1844,     0,     0,     0,
       0,     0,  1845,  1846,  1847,  1848,  1849,     0,  1140,     0,
       0,     0,     0,     0,     0,     0,  1850,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1851,  1852,     0,     0,
    1853,     0,     0,     0,     0,  1854,  1855,  1856,  1857,  1858,
       0,     0,  1859,     0,  1860,  1861,  1862,     0,     0,  1863,
    1864,     0,  1865,  1866,  1867,     0,     0,     0,  1868,     0,
       0,     0,     0,     0,     0,     0,     0,  1957,  1958,  1959,
    1960,  1961,  1869,  1962,     0,     0,     0,  1870,     0,     0,
       0,     0,  1871,  1872,  1873,     0,     0,     0,     0,  1874,
    1875,     0,  1876,  1877,  1878,  1879,     0,     0,  1880,     0,
    2299,  1882,  1883,  1884,     0,  1885,     0,  1886,  1887,     0,
    1888,     0,  1889,  1890,     0,  1891,  1892,  1893,  1894,     0,
       0,     0,     0,     0,  1895,     0,  1896,     0,  1897,  1898,
       0,  1899,  1900,  1901,  1902,  1903,  1904,     0,  1905,  1906,
    1907,  1908,  1909,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1910,     0,  1911,     0,  1912,     0,     0,
       0,     0,     0,     0,     0,     0,  1913,     0,  1914,  1915,
    1916,  1917,  1918,  1919,  1920,     0,     0,  1921,  1922,     0,
       0,     0,     0,  1923,     0,  1924,  1925,  1926,     0,  1927,
       0,  1928,     0,  1929,  1930,  1931,  1932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1933,  1934,  1935,     0,     0,
       0,     0,     0,     0,     0,  1936,     0,  1937,  1938,  1939,
       0,     0,     0,     0,  1940,     0,  1941,  1942,  1943,     0,
       0,     0,  1944,     0,     0,     0,  1945,  1946,     0,     0,
    1947,  1948,  1949,  1950,     0,     0,     0,  1951,   587,   588,
     589,   590,   591,   592,   593,     0,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1952,  1953,
    1954,  1955,  1956,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1833,  1834,  1835,  1836,  1837,  1838,
       0,  1839,     0,  1840,     0,     0,     0,  1841,  1842,  1843,
       0,  1844,     0,     0,     0,     0,     0,  1845,  1846,  1847,
    1848,  1849,     0,  1141,     0,     0,     0,     0,     0,     0,
       0,  1850,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1851,  1852,     0,     0,  1853,     0,     0,     0,     0,
    1854,  1855,  1856,  1857,  1858,     0,     0,  1859,     0,  1860,
    1861,  1862,     0,     0,  1863,  1864,     0,  1865,  1866,  1867,
       0,     0,     0,  1868,     0,     0,     0,     0,     0,     0,
       0,     0,  1957,  1958,  1959,  1960,  1961,  1869,  1962,     0,
       0,     0,  1870,     0,     0,     0,     0,  1871,  1872,  1873,
       0,     0,     0,     0,  1874,  1875,     0,  1876,  1877,  1878,
    1879,     0,     0,  1880,     0,  2393,  1882,  1883,  1884,     0,
    1885,     0,  1886,  1887,     0,  1888,     0,  1889,  1890,     0,
    1891,  1892,  1893,  1894,     0,     0,     0,     0,     0,  1895,
       0,  1896,     0,  1897,  1898,     0,  1899,  1900,  1901,  1902,
    1903,  1904,     0,  1905,  1906,  1907,  1908,  1909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1910,     0,
    1911,     0,  1912,     0,     0,     0,     0,     0,     0,     0,
       0,  1913,     0,  1914,  1915,  1916,  1917,  1918,  1919,  1920,
       0,     0,  1921,  1922,     0,     0,     0,     0,  1923,     0,
    1924,  1925,  1926,     0,  1927,     0,  1928,     0,  1929,  1930,
    1931,  1932,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1933,  1934,  1935,     0,     0,     0,     0,     0,     0,     0,
    1936,     0,  1937,  1938,  1939,     0,     0,     0,     0,  1940,
       0,  1941,  1942,  1943,     0,     0,     0,  1944,     0,     0,
       0,  1945,  1946,     0,     0,  1947,  1948,  1949,  1950,     0,
       0,     0,  1951,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1952,  1953,  1954,  1955,  1956,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1833,
    1834,  1835,  1836,  1837,  1838,     0,  1839,     0,  1840,     0,
       0,     0,  1841,  1842,  1843,     0,  1844,     0,     0,     0,
       0,     0,  1845,  1846,  1847,  1848,  1849,     0,  1147,     0,
       0,     0,     0,     0,     0,     0,  1850,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1851,  1852,     0,     0,
    1853,     0,     0,     0,     0,  1854,  1855,  1856,  1857,  1858,
       0,     0,  1859,     0,  1860,  1861,  1862,     0,     0,  1863,
    1864,     0,  1865,  1866,  1867,     0,     0,     0,  1868,     0,
       0,     0,     0,     0,     0,     0,     0,  1957,  1958,  1959,
    1960,  1961,  1869,  1962,     0,     0,     0,  1870,     0,     0,
       0,     0,  1871,  1872,  1873,     0,     0,     0,     0,  1874,
    1875,     0,  1876,  1877,  1878,  1879,     0,     0,  1880,     0,
    2394,  1882,  1883,  1884,     0,  1885,     0,  1886,  1887,     0,
    1888,     0,  1889,  1890,     0,  1891,  1892,  1893,  1894,     0,
       0,     0,     0,     0,  1895,     0,  1896,     0,  1897,  1898,
       0,  1899,  1900,  1901,  1902,  1903,  1904,     0,  1905,  1906,
    1907,  1908,  1909,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1910,     0,  1911,     0,  1912,     0,     0,
       0,     0,     0,     0,     0,     0,  1913,     0,  1914,  1915,
    1916,  1917,  1918,  1919,  1920,     0,     0,  1921,  1922,     0,
       0,     0,     0,  1923,     0,  1924,  1925,  1926,     0,  1927,
       0,  1928,     0,  1929,  1930,  1931,  1932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1933,  1934,  1935,     0,     0,
       0,     0,     0,     0,     0,  1936,     0,  1937,  1938,  1939,
       0,     0,     0,     0,  1940,     0,  1941,  1942,  1943,     0,
       0,     0,  1944,     0,     0,     0,  1945,  1946,     0,     0,
    1947,  1948,  1949,  1950,     0,     0,     0,  1951,   587,   588,
     589,   590,   591,   592,   593,     0,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1952,  1953,
    1954,  1955,  1956,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1833,  1834,  1835,  1836,  1837,  1838,
       0,  1839,     0,  1840,     0,     0,     0,  1841,  1842,  1843,
       0,  1844,     0,     0,     0,     0,     0,  1845,  1846,  1847,
    1848,  1849,     0,  1149,     0,     0,     0,     0,     0,     0,
       0,  1850,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1851,  1852,     0,     0,  1853,     0,     0,     0,     0,
    1854,  1855,  1856,  1857,  1858,     0,     0,  1859,     0,  1860,
    1861,  1862,     0,     0,  1863,  1864,     0,  1865,  1866,  1867,
       0,     0,     0,  1868,     0,     0,     0,     0,     0,     0,
       0,     0,  1957,  1958,  1959,  1960,  1961,  1869,  1962,     0,
       0,     0,  1870,     0,     0,     0,     0,  1871,  1872,  1873,
       0,     0,     0,     0,  1874,  1875,     0,  1876,  1877,  1878,
    1879,     0,     0,  1880,     0,  2474,  1882,  1883,  1884,     0,
    1885,     0,  1886,  1887,     0,  1888,     0,  1889,  1890,     0,
    1891,  1892,  1893,  1894,     0,     0,     0,     0,     0,  1895,
       0,  1896,     0,  1897,  1898,     0,  1899,  1900,  1901,  1902,
    1903,  1904,     0,  1905,  1906,  1907,  1908,  1909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1910,     0,
    1911,     0,  1912,     0,     0,     0,     0,     0,     0,     0,
       0,  1913,     0,  1914,  1915,  1916,  1917,  1918,  1919,  1920,
       0,     0,  1921,  1922,     0,     0,     0,     0,  1923,     0,
    1924,  1925,  1926,     0,  1927,     0,  1928,     0,  1929,  1930,
    1931,  1932,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1933,  1934,  1935,     0,     0,     0,     0,     0,     0,     0,
    1936,     0,  1937,  1938,  1939,     0,     0,     0,     0,  1940,
       0,  1941,  1942,  1943,     0,     0,     0,  1944,     0,     0,
       0,  1945,  1946,     0,     0,  1947,  1948,  1949,  1950,     0,
       0,     0,  1951,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1952,  1953,  1954,  1955,  1956,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1833,
    1834,  1835,  1836,  1837,  1838,     0,  1839,     0,  1840,     0,
       0,     0,  1841,  1842,  1843,     0,  1844,     0,     0,     0,
       0,     0,  1845,  1846,  1847,  1848,  1849,     0,  1154,     0,
       0,     0,     0,     0,     0,     0,  1850,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1851,  1852,     0,     0,
    1853,     0,     0,     0,     0,  1854,  1855,  1856,  1857,  1858,
       0,     0,  1859,     0,  1860,  1861,  1862,     0,     0,  1863,
    1864,     0,  1865,  1866,  1867,     0,     0,     0,  1868,     0,
       0,     0,     0,     0,     0,     0,     0,  1957,  1958,  1959,
    1960,  1961,  1869,  1962,     0,     0,     0,  1870,     0,     0,
       0,     0,  1871,  1872,  1873,     0,     0,     0,     0,  1874,
    1875,     0,  1876,  1877,  1878,  1879,     0,     0,  1880,     0,
    2477,  1882,  1883,  1884,     0,  1885,     0,  1886,  1887,     0,
    1888,     0,  1889,  1890,     0,  1891,  1892,  1893,  1894,     0,
       0,     0,     0,     0,  1895,     0,  1896,     0,  1897,  1898,
       0,  1899,  1900,  1901,  1902,  1903,  1904,     0,  1905,  1906,
    1907,  1908,  1909,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1910,     0,  1911,     0,  1912,     0,     0,
       0,     0,     0,     0,     0,     0,  1913,     0,  1914,  1915,
    1916,  1917,  1918,  1919,  1920,     0,     0,  1921,  1922,     0,
       0,     0,     0,  1923,     0,  1924,  1925,  1926,     0,  1927,
       0,  1928,     0,  1929,  1930,  1931,  1932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1933,  1934,  1935,     0,     0,
       0,     0,     0,     0,     0,  1936,     0,  1937,  1938,  1939,
       0,     0,     0,     0,  1940,     0,  1941,  1942,  1943,     0,
       0,     0,  1944,     0,     0,     0,  1945,  1946,     0,     0,
    1947,  1948,  1949,  1950,     0,     0,     0,  1951,   587,   588,
     589,   590,   591,   592,   593,     0,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1952,  1953,
    1954,  1955,  1956,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1833,  1834,  1835,  1836,  1837,  1838,
       0,  1839,     0,  1840,     0,     0,     0,  1841,  1842,  1843,
       0,  1844,     0,     0,     0,     0,     0,  1845,  1846,  1847,
    1848,  1849,     0,  1155,     0,     0,     0,     0,     0,     0,
       0,  1850,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1851,  1852,     0,     0,  1853,     0,     0,     0,     0,
    1854,  1855,  1856,  1857,  1858,     0,     0,  1859,     0,  1860,
    1861,  1862,     0,     0,  1863,  1864,     0,  1865,  1866,  1867,
       0,     0,     0,  1868,     0,     0,     0,     0,     0,     0,
       0,     0,  1957,  1958,  1959,  1960,  1961,  1869,  1962,     0,
       0,     0,  1870,     0,     0,     0,     0,  1871,  1872,  1873,
       0,     0,     0,     0,  1874,  1875,     0,  1876,  1877,  1878,
    1879,     0,     0,  1880,     0,  2520,  1882,  1883,  1884,     0,
    1885,     0,  1886,  1887,     0,  1888,     0,  1889,  1890,     0,
    1891,  1892,  1893,  1894,     0,     0,     0,     0,     0,  1895,
       0,  1896,     0,  1897,  1898,     0,  1899,  1900,  1901,  1902,
    1903,  1904,     0,  1905,  1906,  1907,  1908,  1909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1910,     0,
    1911,     0,  1912,     0,     0,     0,     0,     0,     0,     0,
       0,  1913,     0,  1914,  1915,  1916,  1917,  1918,  1919,  1920,
       0,     0,  1921,  1922,     0,     0,     0,     0,  1923,     0,
    1924,  1925,  1926,     0,  1927,     0,  1928,     0,  1929,  1930,
    1931,  1932,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1933,  1934,  1935,     0,     0,     0,     0,     0,     0,     0,
    1936,     0,  1937,  1938,  1939,     0,     0,     0,     0,  1940,
       0,  1941,  1942,  1943,     0,     0,     0,  1944,     0,     0,
       0,  1945,  1946,     0,     0,  1947,  1948,  1949,  1950,     0,
       0,     0,  1951,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1952,  1953,  1954,  1955,  1956,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1833,
    1834,  1835,  1836,  1837,  1838,     0,  1839,     0,  1840,     0,
       0,     0,  1841,  1842,  1843,     0,  1844,     0,     0,     0,
       0,     0,  1845,  1846,  1847,  1848,  1849,     0,  1156,     0,
       0,     0,     0,     0,     0,     0,  1850,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1851,  1852,     0,     0,
    1853,     0,     0,     0,     0,  1854,  1855,  1856,  1857,  1858,
       0,     0,  1859,     0,  1860,  1861,  1862,     0,     0,  1863,
    1864,     0,  1865,  1866,  1867,     0,     0,     0,  1868,     0,
       0,     0,     0,     0,     0,     0,     0,  1957,  1958,  1959,
    1960,  1961,  1869,  1962,     0,     0,     0,  1870,     0,     0,
       0,     0,  1871,  1872,  1873,     0,     0,     0,     0,  1874,
    1875,     0,  1876,  1877,  1878,  1879,     0,     0,  1880,     0,
    2558,  1882,  1883,  1884,     0,  1885,     0,  1886,  1887,     0,
    1888,     0,  1889,  1890,     0,  1891,  1892,  1893,  1894,     0,
       0,     0,     0,     0,  1895,     0,  1896,     0,  1897,  1898,
       0,  1899,  1900,  1901,  1902,  1903,  1904,     0,  1905,  1906,
    1907,  1908,  1909,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1910,     0,  1911,     0,  1912,     0,     0,
       0,     0,     0,     0,     0,     0,  1913,     0,  1914,  1915,
    1916,  1917,  1918,  1919,  1920,     0,     0,  1921,  1922,     0,
       0,     0,     0,  1923,     0,  1924,  1925,  1926,     0,  1927,
       0,  1928,     0,  1929,  1930,  1931,  1932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,   215,
     216,   217,     0,     0,     0,  1933,  1934,  1935,     0,     0,
     218,   219,     0,     0,     0,  1936,     0,  1937,  1938,  1939,
     220,   221,     0,     0,  1940,     0,  1941,  1942,  1943,     0,
       0,     0,  1944,   222,     0,     0,  1945,  1946,     0,     0,
    1947,  1948,  1949,  1950,     0,     0,     0,  1951,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,     0,     0,     0,     0,
     224,     0,     0,   225,   226,     0,     0,     0,     0,     0,
       0,     0,   227,     0,     0,     0,     0,     0,  1952,  1953,
    1954,  1955,  1956,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,   229,   587,   588,   589,   590,   591,   592,
     593,     0,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,     0,
     611,     0,     0,  1157,     0,     0,     0,     0,     0,   230,
     587,   588,   589,   590,   591,   592,   593,     0,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   232,     0,     0,     0,
       0,     0,  1957,  1958,  1959,  1960,  1961,     0,  1962,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,   234,
       0,     0,     0,     0,     0,     0,   235,   236,     0,     0,
       0,   237,   590,   591,   592,   593,     0,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,   238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,     0,   277,     0,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,     0,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,   325,   326,   327,   328,     0,
       0,     0,     0,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,     0,   340,   341,   342,   212,   213,
     214,   215,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   219,     0,     0,     0,   343,     0,     0,
       0,     0,   220,     0,     0,     0,     0,   344,   345,     0,
       0,   346,   587,   588,   589,   590,   591,   592,   593,     0,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,     0,
     804,     0,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,   224,     0,     0,   225,   226,   587,   588,   589,
     590,   591,   592,   593,   227,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,   587,   588,   589,   590,   591,   592,
     593,     0,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,     0,
     611,     0,     0,     0,  1169,   587,   588,   589,   590,   591,
     592,   593,     0,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,     0,     0,     0,     0,     0,     0,     0,
    1170,     0,     0,   805,     0,     0,     0,     0,   231,     0,
       0,   587,   588,   589,   590,   591,   592,   593,   232,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,     0,
       0,     0,     0,   587,   588,   589,   590,   591,   592,   593,
     233,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   806,
       0,     0,     0,     0,     0,     0,     0,     0,   238,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,   277,     0,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,     0,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,     0,   325,   326,   327,
     328,     0,     0,     0,     0,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,     0,   340,   341,   342,
     212,   213,   214,   215,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,   218,   219,     0,     0,     0,   343,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   344,
     345,     0,     0,   346,     0,     0,     0,   928,     0,     0,
    -812,  -812,  -812,  -812,   929,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,  1171,   611,     0,     0,     0,     0,     0,   223,
       0,     0,     0,     0,   224,     0,     0,   225,   226,   587,
     588,   589,   590,   591,   592,   593,   227,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,  1173,     0,   587,
     588,   589,   590,   591,   592,   593,     0,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,  1184,   611,   587,   588,   589,   590,
     591,   592,   593,     0,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,     0,     0,  1193,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,   587,   588,   589,   590,   591,   592,   593,
     232,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,  1194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   233,     0,     0,     0,     0,     0,     0,   930,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1195,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     238,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,     0,   277,     0,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,     0,     0,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,     0,   325,
     326,   327,   328,     0,     0,     0,     0,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,     0,   340,
     341,   342,   212,   213,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
       0,   343,     0,     0,     0,     0,   220,     0,     0,     0,
       0,   344,   345,     0,     0,   931,   587,   588,   589,   590,
     591,   592,   593,     0,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,     0,     0,     0,     0,     0,     0,     0,
       0,   223,     0,     0,     0,     0,   224,     0,     0,   225,
     226,   587,   588,   589,   590,   591,   592,   593,   227,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,  1196,
     587,   588,   589,   590,   591,   592,   593,     0,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,     0,     0,  1197,
       0,   587,   588,   589,   590,   591,   592,   593,     0,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,  1198,   611,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,   587,   588,   589,   590,   591,
     592,   593,   232,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,  1199,     0,     0,     0,   587,   588,   589,
     590,   591,   592,   593,   233,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   238,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   474,     0,     0,     0,     0,     0,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,   277,
       0,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
       0,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,   325,   326,   327,   328,     0,     0,     0,     0,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
       0,   340,   341,   342,   212,   213,   214,   215,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
       0,     0,     0,   343,     0,     0,     0,     0,   220,   845,
       0,     0,     0,   344,   345,     0,     0,   346,   587,   588,
     589,   590,   591,   592,   593,     0,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,     0,  1200,     0,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,   225,   226,   587,   588,   589,   590,   591,   592,   593,
     227,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,  1206,   587,   588,   589,   590,   591,   592,   593,     0,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,     0,
    1210,   587,   588,   589,   590,   591,   592,   593,     0,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,     0,
       0,  1211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,   587,   588,   589,
     590,   591,   592,   593,   232,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,     0,  1212,     0,     0,     0,   587,
     588,   589,   590,   591,   592,   593,   233,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,  1213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,   277,     0,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,     0,     0,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,     0,   325,   326,   327,   328,     0,     0,     0,
       0,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,     0,   340,   341,   342,   212,   213,   214,   215,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   219,     0,     0,     0,   343,     0,     0,     0,     0,
     220,     0,     0,     0,     0,   344,   345,     0,     0,   346,
     587,   588,   589,   590,   591,   592,   593,     0,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,     0,  1214,     0,
       0,     0,     0,     0,     0,   223,     0,     0,     0,     0,
     224,     0,     0,   225,   226,   587,   588,   589,   590,   591,
     592,   593,   227,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,  1218,   587,   588,   589,   590,   591,   592,
     593,     0,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,  1123,
     611,     0,  1219,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,  1220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,   587,
     588,   589,   590,   591,   592,   593,   232,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,  1222,     0,     0,
       0,   587,   588,   589,   590,   591,   592,   593,   233,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,  1405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,     0,   277,     0,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,     0,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,   325,   326,   327,   328,     0,
       0,     0,     0,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,     0,   340,   341,   342,   212,   213,
     214,   215,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   219,     0,     0,     0,   343,     0,     0,
       0,     0,   220,     0,     0,     0,     0,   344,   345,     0,
       0,   346,   587,   588,   589,   590,   591,   592,   593,     0,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,     0,
    1677,     0,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,   224,     0,     0,   225,   226,   587,   588,   589,
     590,   591,   592,   593,   227,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,     0,  1678,     0,     0,  1650,   587,
     588,   589,   590,   591,   592,   593,     0,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,  1689,   611,   587,   588,   589,   590,
     591,   592,   593,     0,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,  1699,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,   587,   588,   589,   590,   591,   592,   593,   232,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,  1715,
       0,     0,     0,   587,   588,   589,   590,   591,   592,   593,
     233,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,  1716,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   238,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,   277,     0,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,     0,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,     0,   325,   326,   327,
     328,     0,     0,     0,     0,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,     0,   340,   341,   342,
     212,   213,   214,   215,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,   218,   219,     0,     0,     0,   343,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   344,
     345,     0,     0,   346,   587,   588,   589,   590,   591,   592,
     593,     0,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,     0,
     611,     0,  1717,     0,     0,     0,     0,     0,     0,   223,
       0,     0,     0,     0,   224,     0,     0,   225,   226,   587,
     588,   589,   590,   591,   592,   593,   227,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,  1720,     0,     0,
    1655,   587,   588,   589,   590,   591,   592,   593,     0,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,  1721,
       0,   587,   588,   589,   590,   591,   592,   593,     0,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,  1734,   611,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,   587,   588,   589,   590,   591,   592,   593,
     232,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,  1735,     0,     0,     0,   587,   588,   589,   590,   591,
     592,   593,   233,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,  1736,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     238,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,     0,   277,     0,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,     0,     0,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,     0,   325,
     326,   327,   328,     0,     0,     0,     0,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,     0,   340,
     341,   342,   212,   213,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
       0,   343,     0,     0,     0,     0,   220,     0,     0,     0,
       0,   344,   345,     0,     0,   346,   587,   588,   589,   590,
     591,   592,   593,     0,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,     0,  2237,     0,     0,     0,     0,     0,
       0,   223,     0,     0,     0,     0,   224,     0,     0,   225,
     226,     0,     0,     0,     0,     0,     0,     0,   227,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1158,     0,     0,     0,     0,  2240,
       0,     0,  2194,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,  2241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1665,     0,     0,     0,
       0,  2242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,   587,   588,   589,   590,   591,
     592,   593,   232,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,  1159,     0,     0,     0,     0,   587,   588,   589,
     590,   591,   592,   593,   233,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,   912,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   238,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,   277,
       0,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
       0,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,   325,   326,   327,   328,     0,     0,     0,     0,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
       0,   340,   341,   342,   212,   213,   214,   215,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
       0,     0,     0,   343,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   344,   345,     0,     0,   346,   587,   588,
     589,   590,   591,   592,   593,     0,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,  1666,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,   225,   226,   587,   588,   589,   590,   591,   592,   593,
     227,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,  2196,   587,   588,   589,   590,   591,
     592,   593,     0,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,  1122,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,   587,   588,   589,
     590,   591,   592,   593,   232,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,  1128,     0,     0,     0,     0,   587,
     588,   589,   590,   591,   592,   593,   233,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,  1129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,   277,     0,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,     0,     0,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,     0,   325,   326,   327,   328,     0,     0,     0,
       0,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,     0,   340,   341,   342,   212,   213,   214,   215,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   219,     0,     0,     0,   343,     0,     0,     0,     0,
     220,     0,     0,     0,     0,   344,   345,     0,     0,   346,
     587,   588,   589,   590,   591,   592,   593,     0,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,  1130,     0,     0,
       0,     0,     0,     0,     0,   223,     0,     0,     0,     0,
     224,     0,     0,   225,   226,   587,   588,   589,   590,   591,
     592,   593,   227,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,  1131,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,  1132,   587,   588,   589,   590,   591,
     592,   593,     0,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,  1133,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,   587,
     588,   589,   590,   591,   592,   593,   232,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,  1138,     0,     0,     0,
       0,   587,   588,   589,   590,   591,   592,   593,   233,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,  1142,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,     0,   277,     0,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,     0,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,   325,   326,   327,   328,     0,
       0,     0,     0,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,     0,   340,   341,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   344,   345,     0,
       0,   346,   587,   588,   589,   590,   591,   592,   593,     0,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,  1143,
     587,   588,   589,   590,   591,   592,   593,     0,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   587,   588,   589,
     590,   591,   592,   593,  1144,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,     0,   587,   588,   589,   590,   591,
     592,   593,  1148,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,     0,     0,     0,     0,   587,   588,   589,
     590,   591,   592,   593,  1150,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   587,   588,   589,   590,   591,   592,   593,  1151,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,     0,
       0,     0,     0,   587,   588,   589,   590,   591,   592,   593,
    1152,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
     587,   588,   589,   590,   591,   592,   593,     0,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,   587,   588,   589,
     590,   591,   592,   593,     0,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,   587,   588,   589,   590,   591,   592,
     593,     0,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,     0,
     611,   587,   588,   589,   590,   591,   592,   593,     0,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,   587,   588,
     589,   590,   591,   592,   593,     0,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,   587,   588,   589,   590,   591,
     592,   593,     0,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,   587,   588,   589,   590,   591,   592,   593,     0,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,     0,
       0,  1161,   587,   588,   589,   590,   591,   592,   593,     0,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,  1162,
     587,   588,   589,   590,   591,   592,   593,     0,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,     0,     0,   587,
     588,   589,   590,   591,   592,   593,  1163,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,   587,   588,   589,
     590,   591,   592,   593,  1164,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,     0,     0,     0,     0,     0,   587,
     588,   589,   590,   591,   592,   593,  1165,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   587,   588,   589,   590,   591,   592,   593,
    1166,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,   587,   588,   589,   590,   591,
     592,   593,  1167,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,   587,   588,   589,   590,   591,   592,   593,  1168,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,   587,
     588,   589,   590,   591,   592,   593,  1172,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,   587,   588,   589,   590,
     591,   592,   593,  1185,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,   587,   588,   589,   590,   591,   592,   593,
    1186,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
     587,   588,   589,   590,   591,   592,   593,  1187,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,   587,   588,   589,
     590,   591,   592,   593,  1188,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,   587,   588,   589,   590,   591,   592,
     593,  1189,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,     0,
     611,     0,     0,     0,   587,   588,   589,   590,   591,   592,
     593,  1190,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,     0,
     611,     0,   587,   588,   589,   590,   591,   592,   593,  1191,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,     0,
       0,   587,   588,   589,   590,   591,   592,   593,  1192,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,   587,
     588,   589,   590,   591,   592,   593,  1203,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,     0,     0,     0,
       0,   587,   588,   589,   590,   591,   592,   593,  1204,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   587,   588,   589,   590,   591,
     592,   593,  1205,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,     0,     0,     0,     0,   587,   588,   589,
     590,   591,   592,   593,  1209,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,   587,   588,   589,   590,   591,   592,
     593,  1215,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,     0,
     611,   587,   588,   589,   590,   591,   592,   593,  1216,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,   587,   588,
     589,   590,   591,   592,   593,  1217,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,   587,   588,   589,   590,   591,
     592,   593,  1221,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,   587,   588,   589,   590,   591,   592,   593,  1247,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,   587,
     588,   589,   590,   591,   592,   593,  1669,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,   587,   588,   589,   590,
     591,   592,   593,  1674,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,     0,     0,     0,   587,   588,   589,   590,
     591,   592,   593,  1675,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,     0,   587,   588,   589,   590,   591,   592,
     593,  1676,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,     0,
     611,     0,     0,   587,   588,   589,   590,   591,   592,   593,
    1679,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,   587,   588,   589,   590,   591,   592,   593,  1680,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,     0,
       0,     0,     0,   587,   588,   589,   590,   591,   592,   593,
    1681,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   587,   588,   589,
     590,   591,   592,   593,  1682,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,     0,     0,     0,     0,     0,   587,
     588,   589,   590,   591,   592,   593,  1683,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,   587,   588,   589,   590,
     591,   592,   593,  1684,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,   587,   588,   589,   590,   591,   592,   593,
    1687,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
     587,   588,   589,   590,   591,   592,   593,  1688,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,   587,   588,   589,
     590,   591,   592,   593,  1700,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,   587,   588,   589,   590,   591,   592,
     593,  1701,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,     0,
     611,   587,   588,   589,   590,   591,   592,   593,  1714,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,   587,   588,
     589,   590,   591,   592,   593,  1718,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,     0,     0,     0,   587,   588,
     589,   590,   591,   592,   593,  1719,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,     0,   587,   588,   589,   590,
     591,   592,   593,  1728,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,     0,     0,   587,   588,   589,   590,   591,
     592,   593,  1729,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,   587,   588,   589,   590,   591,   592,   593,
    1730,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,   587,   588,   589,   590,   591,
     592,   593,  1731,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   587,
     588,   589,   590,   591,   592,   593,  1732,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,     0,     0,     0,
       0,   587,   588,   589,   590,   591,   592,   593,  1733,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,   587,   588,
     589,   590,   591,   592,   593,  1737,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,   587,   588,   589,   590,   591,
     592,   593,  1815,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,   587,   588,   589,   590,   591,   592,   593,  2026,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,   587,
     588,   589,   590,   591,   592,   593,  2100,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,   587,   588,   589,   590,
     591,   592,   593,  2170,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,   587,   588,   589,   590,   591,   592,   593,
    2202,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
     587,   588,   589,   590,   591,   592,   593,  2203,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,     0,     0,     0,
     587,   588,   589,   590,   591,   592,   593,  2204,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,     0,   587,   588,
     589,   590,   591,   592,   593,  2205,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,     0,     0,   587,   588,   589,
     590,   591,   592,   593,  2206,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,     0,   587,   588,   589,   590,   591,
     592,   593,  2215,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,     0,     0,     0,     0,   587,   588,   589,
     590,   591,   592,   593,  2232,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,     0,   611,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,   587,   588,   589,   590,   591,   592,   593,  2233,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,     0,     0,
       0,     0,     0,   587,   588,   589,   590,   591,   592,   593,
    2234,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
     587,   588,   589,   590,   591,   592,   593,  2235,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,    80,   611,     0,     0,     0,
       0,     0,    81,     0,  2236,     0,     0,     0,     0,     0,
       1,     0,  1531,     0,     2,     0,     0,     0,  1531,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2238,     0,  1532,     0,     0,     0,     0,    82,    83,
       0,     3,  1533,     0,     0,  1534,     4,  1535,  1533,     0,
    1536,  1534,     0,  1535,     0,    84,  1536,     0,  2239,     5,
       0,     0,     0,     0,     0,  1537,     0,     0,     0,     0,
       0,  1537,  1538,  1539,     0,     0,     0,     0,  1538,  1539,
       6,     7,     0,     0,     0,  2270,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,  1540,     0,     0,
       0,     0,  2276,  1540,     0,     0,     0,     0,     0,    86,
       0,    87,     0,     0,  1541,     0,     0,    88,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,  2280,
       0,     9,    10,    11,     0,     0,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1542,     0,
       0,    91,     0,     0,  1542,     0,     0,     0,     0,  2285,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,    13,     0,     0,     0,     0,     0,  1543,     0,    14,
       0,     0,     0,  1543,     0,  1544,     0,  2407,     0,     0,
       0,  1544,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2414,     0,    17,     0,
       0,    18,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2440,  1545,     0,     0,     0,     0,
       0,  1545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2453,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
       0,     0,     0,   587,   588,   589,   590,   591,   592,   593,
    2471,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2472,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2526,
       0,     0,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2027,  2028,     0,
       0,     0,  2029,     0,  2030,   587,   588,   589,   590,   591,
     592,   593,     0,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
       0,   611,     0,     0,     0,     0,     0,  2031,  2032,     0,
    2033,   587,   588,   589,   590,   591,   592,   593,     0,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,     0,   611,   587,   588,
     589,   590,   591,   592,   593,     0,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,     0,   611,   689,   690,     0,   691,     0,
     692,   693,     0,     0,     0,     0,     0,     0,     0,   587,
     588,   589,   590,   591,   592,   593,   694,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   695,   696,
     697,   698,     0,     0,     0,     0,     0,   699,     0,     0,
       0,     0,     0,     0,     0,     0,   700,     0,     0,     0,
       0,  2034,  2035,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   701,     0,     0,     0,
       0,     0,     0,     0,   702,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   703,
       0,     0,     0,     0,     0,     0,   704,     0,     0,   705,
       0,     0,   706,   707,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1411,     0,     0,     0,   708,
     587,   588,   589,   590,   591,   592,   593,     0,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,     0,   611,     0,     0,     0,
     474,     0,     0,   709,   710,     0,     0,   711,   712,     0,
       0,     0,     0,   713,  1111,   714,     0,     0,     0,     0,
     715,   716,     0,     0,     0,     0,   717,     0,   718,     0,
       0,     0,     0,     0,   719,     0,   720,   721,     0,     0,
       0,  1403,   722,   587,   588,   589,   590,   591,   592,   593,
       0,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,     0,     0,     0,     0,     0,   587,   588,   589,
     590,   591,   592,   593,  1402,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   586,   611,     0,     0,     0,     0,     0,   587,
     588,   589,   590,   591,   592,   593,  2005,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     612,     0,     0,     0,     0,     0,     0,  1661,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   587,   588,   589,   590,   591,   592,   593,  2006,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611,     0,
       0,     0,     0,     0,     0,     0,   587,   588,   589,   590,
     591,   592,   593,  1153,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,     0,   611,     0,     0,     0,     0,     0,     0,   587,
     588,   589,   590,   591,   592,   593,  1231,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,     0,   611,     0,     0,     0,     0,
       0,     0,   587,   588,   589,   590,   591,   592,   593,  1477,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,     0,   611
};

static const yytype_int16 yycheck[] =
{
     123,  1644,  1251,  1511,  1319,   363,   357,  1500,  1770,  1358,
    1276,  1277,   353,  1593,   632,   420,  1282,   766,  1629,     3,
    1335,  1990,    36,    36,     3,    48,  1033,  1034,  1996,   140,
       3,   107,  1039,  1348,  1041,   960,   136,     3,     4,     5,
       6,     7,     8,  1627,  1109,   136,     5,   154,   199,    48,
    1379,  1106,    20,  1108,  1761,    20,    51,   159,   240,   159,
    1528,  1529,     4,     8,     4,   357,   199,     3,     3,     3,
       3,   240,    51,    97,    90,     3,   154,     4,     4,  1547,
     240,   266,     6,    16,   207,   208,    74,    78,   274,    78,
     107,   266,   443,   274,     3,   218,   219,   220,   219,   136,
       3,   224,    10,    11,    12,    13,    14,    15,    16,   216,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,  2049,
    2050,   252,     3,   107,     3,    74,    49,   268,   216,   266,
    2060,  2061,   204,    71,     3,   134,    71,   274,     3,   172,
     266,   266,   277,    78,     3,    87,    84,   124,   125,   154,
    1225,    54,    55,   266,    87,   266,   667,    99,  1703,  1704,
     266,     3,    18,   268,   197,   252,    85,  1712,  1713,  1763,
       3,    74,   197,    14,     3,   241,   259,    18,     4,     5,
       6,     7,    95,   108,     3,     3,    51,     3,   197,   112,
     136,     3,     6,   135,   192,   228,   268,   280,   245,   134,
     201,   143,   201,   138,    18,   271,   965,   150,   154,    28,
      28,   216,   210,   346,   725,    84,  1806,   193,     3,   228,
     155,     3,     4,     5,     6,     7,     8,   113,  1818,   164,
     176,   258,   258,   428,   430,   269,   241,   156,   430,   430,
     371,   266,   240,   193,   277,   430,    72,  1765,   184,   428,
     391,   193,   195,   614,  1530,  1580,   193,   203,   428,   193,
     261,   210,   261,   351,   248,  1855,   201,  1592,   277,   430,
     621,  1630,   227,   404,     3,   156,  1866,  2207,  2208,  2209,
    2210,  2211,  2212,  1608,   236,   237,   391,   430,   167,   401,
     427,  2221,   427,   430,   173,  2225,  1886,   156,   275,  2229,
     242,  1640,   428,   428,  1782,  2022,  1241,   210,   277,   430,
    1900,   428,   398,   399,   400,   428,   249,   428,   351,  1909,
     430,   407,   428,   156,   252,   167,   261,   156,   184,   430,
    1395,   173,  1397,   258,  1093,   277,  2315,   470,  2316,   427,
     428,   474,   351,   971,   327,   328,   329,   330,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,  1949,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,     3,   509,   510,   511,   193,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,  1991,  1992,   241,
    1475,   252,   535,   536,   765,   429,   429,   540,   541,   252,
     404,   193,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,     3,   568,   569,   570,   427,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   427,
     583,   584,   427,   429,   587,   588,   589,   590,   591,   404,
     404,   107,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   611,  1238,
     991,   992,   784,   616,   422,   787,   428,  2259,    74,   622,
    1001,     3,    71,    71,  2039,  2040,  2041,  2042,  2043,  2044,
     802,  1826,   381,  1828,   427,   319,  2051,   333,   334,   335,
    2055,   157,   113,   431,  2059,  2445,    18,    40,    18,  2449,
     376,   377,   378,   379,    78,     3,     3,     3,   156,    55,
     137,  2121,   427,   428,     3,  2188,  2126,     3,     3,   381,
    1051,  1052,  1053,  1560,   417,  1562,  1563,     3,  2169,   428,
       3,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,  2094,    36,   277,   113,
     134,   277,  2530,    38,   107,    76,   428,   156,   124,   125,
       3,  2244,   193,   200,   177,    97,   133,    97,    18,   230,
      98,     3,   428,   954,  1019,  1020,   192,    85,     3,   417,
    2540,  2541,   258,  2543,  2544,    62,    36,   154,    88,    66,
      75,   139,    92,     0,   210,    49,  1254,   258,   235,  1257,
     763,   241,   215,   426,   157,    39,  2584,  2585,   217,   217,
       3,     5,  1153,  1154,   156,   100,  1971,   201,    87,    51,
       5,   149,  1977,   108,   240,    59,    20,   959,    78,   193,
      99,   271,   153,   796,   797,   120,  2614,   114,   801,   103,
     117,    84,   163,   429,   430,   808,    71,   136,   156,   156,
     156,   183,   208,   183,   202,   132,   177,   156,   112,    84,
     156,   156,  2282,   113,  2466,   197,   135,   197,   168,   190,
     156,   100,   100,   156,   143,   152,    71,   261,    63,     3,
    2300,   156,   146,   160,   415,  1083,     3,     9,   241,    84,
     154,   120,   120,     3,   215,  2001,   396,   428,    20,  1488,
     267,   430,   187,   428,   430,   258,   216,    51,  2256,   275,
     155,    51,   176,     3,  2247,   103,    60,   238,    51,   164,
      60,   156,   398,   208,   193,    33,    34,    60,    36,   155,
      10,    11,    12,    13,    14,    15,    16,  1278,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   240,    36,     3,   146,  2442,
     923,   924,     3,   926,     5,     3,   154,     3,   931,  2586,
      51,  2391,   249,   242,   251,  2458,  2165,  2352,     3,    60,
     246,  2356,  2137,   705,   269,   429,   430,   252,   176,   711,
     155,   713,  2081,   270,   103,   398,   399,   400,  2615,  2616,
    2155,   396,  2157,   396,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  2377,
      36,  2648,    13,    14,     3,    16,   396,   146,    19,  2372,
     429,   430,    45,    46,   103,   154,   103,   396,  1239,  1247,
     159,   171,    32,    33,    34,  2538,    36,   430,  2478,     3,
      10,    11,    12,    13,    14,    15,    16,   176,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,  1048,    36,   146,  2512,   146,
       3,   223,   224,   430,  1226,   154,     3,   154,   429,   430,
       3,   181,   136,  1235,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,  2462,    36,   136,   176,   136,   176,
     429,   430,    82,    83,   429,   430,   159,  2502,  2503,   136,
    2505,  2506,     3,  1026,  1027,     3,  1029,  1030,  1031,   429,
     430,   430,  1035,  1036,  1037,   429,   430,  1040,  1111,   409,
    1113,     3,   405,   406,  2309,   429,   430,  1120,  1121,  2248,
    1123,   429,   430,   281,  1127,     4,     5,  2515,   429,   430,
      51,  1134,  1135,  1136,  1137,     3,  1139,  1140,  1141,     3,
     429,   430,     3,  1146,  1147,   197,  1149,   429,   430,   429,
     430,   428,  1155,  1156,  1157,    28,    29,    30,    31,    32,
      33,    34,  2550,    36,     4,     5,  1169,  1170,  1171,   281,
    1173,   428,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  1184,    36,   429,   430,   429,   430,   429,   430,  2577,
    1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,  1370,  1202,
     429,   430,   197,  1206,     3,  1208,  2594,  1210,  1211,  1212,
    1213,  1214,   429,   430,     3,  1218,  1219,  1220,   140,  1222,
    2608,   429,   430,   429,   430,   429,   430,   281,  1231,   428,
    1233,  1234,   427,  2621,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,  1248,    36,   429,   430,  2637,
       4,  1632,  1255,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   281,    36,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,  1476,    36,   281,  1479,   281,  1481,
     430,  1483,   429,   430,  1317,    10,    11,    12,    13,    14,
      15,    16,   281,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     197,    36,    10,    11,    12,    13,    14,    15,    16,   281,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   281,    36,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  1384,    36,   429,   430,  1388,   281,   429,   430,   429,
     430,  1394,   429,   430,   429,   430,   429,   430,   429,   430,
    1403,   245,  1405,   429,   430,   429,   430,   281,  1411,  1412,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     8,    36,   429,   430,   429,
     430,    10,    11,    12,    13,    14,    15,    16,     9,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   428,    36,    36,   429,
     430,   429,   430,   427,  1477,    10,    11,    12,    13,    14,
      15,    16,   428,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    1503,    36,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   428,    36,
      51,  1524,    10,    11,    12,    13,    14,    15,    16,   428,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   428,    36,   429,
     430,   428,    10,    11,    12,    13,    14,    15,    16,   428,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   428,    36,    10,
      11,    12,    13,    14,    15,    16,   428,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   428,    36,   429,   430,   429,   430,
     429,   430,   429,   430,   429,   430,   429,   430,   428,  1622,
      10,    11,    12,    13,    14,    15,    16,   428,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   428,    36,    57,    58,   429,
     430,   692,   693,   694,   695,   428,   697,   429,   430,   700,
     701,   702,  1665,   429,   430,  1668,   707,   708,   709,   429,
     430,   712,   429,   430,  1677,  1678,   429,   430,   429,   430,
     429,   430,   429,   430,   429,   430,  1689,   429,   430,    57,
      58,   427,   428,   427,   428,  1698,  1699,   429,   430,   429,
     430,   429,   430,   429,   430,   429,   430,   429,   430,   429,
     430,   430,  1715,  1716,  1717,   967,   968,  1720,  1721,   428,
    1723,   428,  1725,   428,  1727,  1243,  1244,  1755,  1756,   428,
     428,  1734,  1735,  1736,   429,   430,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      95,    36,   428,   428,   428,  1758,  1759,   428,   428,   428,
       3,   429,   430,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,     3,     3,     4,     5,     6,     7,
       8,   428,    10,  1786,    12,   428,   428,  1790,    16,    17,
      18,   428,    20,   428,   139,   428,   428,  1800,    26,    27,
      28,    29,    30,   428,   428,   428,   428,   428,   428,   428,
     155,  1814,    40,   428,   428,   428,   428,   428,   428,   428,
     428,   428,    50,    51,   428,   428,    54,   428,   159,   429,
     430,    59,    60,    61,    62,    63,   428,   428,    66,   428,
      68,    69,    70,   428,   428,    73,    74,   428,    76,    77,
      78,   428,   428,   428,    82,     3,   428,   202,   428,     3,
     429,   430,   428,   428,   428,   428,   428,     3,    96,   428,
     428,   428,   428,   101,   219,   428,   221,   428,   106,   107,
     108,   428,   227,   428,   428,   113,   114,   428,   116,   117,
     118,   119,   428,     3,   122,   430,   124,   125,   126,   127,
     428,   129,   428,   131,   132,   428,   134,   252,   136,   137,
     428,   139,   140,   141,   142,   428,   428,   428,   428,   428,
     148,   428,   150,   428,   152,   153,   428,   155,   156,   157,
     158,   159,   160,   428,   162,   163,   164,   165,   166,   428,
       3,   429,   430,   428,   428,   428,   428,   428,    16,   177,
     266,   179,   421,   181,    53,    53,    44,     3,   423,    71,
     277,   245,   190,     3,   192,   193,   194,   195,   196,   197,
     198,   429,   430,   201,   202,     3,   197,     3,   197,   207,
     281,   209,   210,   211,     3,   213,   197,   215,   281,   217,
     218,   219,   220,   281,   277,   281,   418,     3,   429,   430,
       3,     3,     3,    28,     3,     3,     3,     3,  2011,  2012,
       3,   239,   240,   241,  2017,     3,  2019,     3,    74,   281,
      74,   249,   281,   251,   252,   253,   371,     3,     3,     3,
     258,    36,   260,   261,   262,     3,     3,   431,   266,   429,
     430,   429,   270,   271,   429,   429,   274,   275,   276,   277,
     395,   429,   429,   281,   429,   429,   429,   429,   429,   404,
     429,     5,   429,   429,   429,   429,   429,   428,     3,     3,
       3,     3,   417,   429,     3,   196,  2079,  2080,   163,     3,
       3,   271,     3,   402,   402,   274,   271,   274,     3,   273,
      42,     5,     5,    42,   322,   323,   324,   325,   326,    10,
      11,    12,    13,    14,    15,    16,   277,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     3,    36,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     3,    36,     3,     3,     3,     3,  2150,     3,     3,
       3,     3,     3,   245,     3,     3,    20,   379,     3,   217,
       3,     5,   217,  2166,    10,    11,    12,    13,    14,    15,
      16,     5,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     5,
      36,   428,   428,   428,   428,  2198,    64,   428,   426,   427,
     428,   429,   430,   428,   432,   428,    12,    13,    14,    15,
      16,  2214,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   428,
      36,     3,     3,     3,  2237,     3,   429,     3,   430,     3,
       4,     5,     6,     7,     8,     3,    10,   197,    12,   429,
     197,  2254,    16,    17,    18,    51,    20,   396,     3,   197,
     281,     3,    26,    27,    28,    29,    30,   428,     3,   277,
    2273,  2274,     3,     3,   140,     3,    40,   396,   198,     3,
       3,     3,   429,   429,   241,   350,    50,    51,   429,   350,
      54,   350,   429,   350,   428,    59,    60,    61,    62,    63,
     350,   241,    66,   428,    68,    69,    70,   136,   428,    73,
      74,   428,    76,    77,    78,   430,   197,   164,    82,   428,
     271,     4,   164,   164,   163,   163,     4,   411,   428,   411,
     410,     4,    96,     3,   197,   222,   197,   101,   222,    36,
       3,   245,   106,   107,   108,   245,     4,     3,     5,   113,
     114,     5,   116,   117,   118,   119,     3,     5,   122,     4,
     124,   125,   126,   127,     5,   129,  2369,   131,   132,     5,
     134,     5,   136,   137,   193,   139,   140,   141,   142,   431,
     428,   428,   213,   197,   148,     3,   150,   140,   152,   153,
       3,   155,   156,   157,   158,   159,   160,     3,   162,   163,
     164,   165,   166,     3,   197,  2408,   397,   418,   428,    94,
       3,     3,    63,   177,   179,   179,     3,   181,    20,   428,
     199,   431,    91,   161,     4,  2428,   190,     5,   192,   193,
     194,   195,   196,   197,   198,   429,   428,   201,   202,   428,
     350,   350,   350,   207,   350,   209,   210,   211,   350,   213,
     428,   215,   350,   217,   218,   219,   220,   350,   350,     5,
     350,   241,   428,   428,   412,   274,     3,   429,   140,     3,
       3,   179,   428,   403,     4,   239,   240,   241,    20,    20,
     179,     3,   428,   164,   164,   249,   428,   251,   252,   253,
       3,     3,   429,   222,   258,   222,   260,   261,   262,    78,
       3,   429,   266,   429,   429,   268,   270,   271,    60,   428,
     274,   275,   276,   277,   140,   197,   428,   281,   268,   430,
     245,     3,   429,   428,   396,    10,    11,    12,    13,    14,
      15,    16,  2535,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     428,    36,   428,   428,    20,     3,     3,     3,   322,   323,
     324,   325,   326,   428,     3,   164,   164,     4,     6,     4,
       4,     3,   428,   212,     3,     4,     5,     6,     7,     8,
     430,    10,   164,    12,   430,     3,    51,    16,    17,    18,
     141,    20,   428,   428,   163,   428,   428,    26,    27,    28,
      29,    30,   429,   429,   429,   428,   428,   428,   428,     3,
     428,    40,   429,   428,    20,   428,   428,   428,     4,   429,
     428,    50,    51,   430,   429,    54,   429,   429,   428,   428,
      59,    60,    61,    62,    63,     5,   428,    66,     4,    68,
      69,    70,   430,     4,    73,    74,     5,    76,    77,    78,
       3,   428,   430,    82,   428,   193,     3,    52,     3,   428,
       4,   428,   426,   427,   428,   429,   430,    96,   432,   428,
     164,   428,   101,   164,   213,     5,   240,   106,   107,   108,
       4,     4,   428,     3,   113,   114,     3,   116,   117,   118,
     119,     3,     3,   122,     3,   124,   125,   126,   127,     3,
     129,   118,   131,   132,     3,   134,     3,   136,   137,   428,
     139,   140,   141,   142,   428,   428,   266,     3,    20,   148,
     268,   150,     4,   152,   153,    20,   155,   156,   157,   158,
     159,   160,   140,   162,   163,   164,   165,   166,   428,   428,
     428,     3,   428,   430,   258,    20,   197,     4,   177,   350,
     179,    94,   181,   429,   351,   350,    63,   148,   429,     3,
     428,   190,   429,   192,   193,   194,   195,   196,   197,   198,
     429,     3,   201,   202,   429,    12,    12,   430,   207,     3,
     209,   210,   211,     5,   213,     3,   215,     3,   217,   218,
     219,   220,     5,     5,    60,    51,   428,   428,   428,     4,
     429,    60,     3,   430,   429,   429,   429,   428,   428,   140,
     239,   240,   241,   217,   430,   277,   428,   428,   428,   268,
     249,   429,   251,   252,   253,     5,     4,   271,   164,   258,
     164,   260,   261,   262,   428,     3,    88,   266,   428,   430,
     428,   270,   271,   429,    63,   274,   275,   276,   277,   198,
     413,   428,   281,    10,    11,    12,    13,    14,    15,    16,
     428,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     3,    36,
     429,    20,   429,   164,   429,   429,   164,   430,    43,    18,
     430,     3,   428,   322,   323,   324,   325,   326,   429,   428,
     164,   429,   429,   429,     3,     3,    60,   118,     3,     3,
       4,     5,     6,     7,     8,    78,    10,   428,    12,   136,
     428,   428,    16,    17,    18,     3,    20,   428,     3,    63,
      63,     3,    26,    27,    28,    29,    30,     3,   428,     3,
      63,   429,   429,   429,     5,   430,    40,   350,   350,   350,
     350,   429,   429,     5,     5,     5,    50,    51,     3,   429,
      54,   430,    20,    20,   269,    59,    60,    61,    62,    63,
       3,     3,    66,   207,    68,    69,    70,     5,     5,    73,
      74,    60,    76,    77,    78,   277,   429,    77,    82,   131,
     156,   166,   276,   207,   217,   428,     5,   426,   427,   428,
     429,   430,    96,   432,   428,     3,   416,   101,   423,   204,
      20,   430,   106,   107,   108,     3,   101,   429,   429,   113,
     114,   430,   116,   117,   118,   119,     3,   214,   122,   428,
     124,   125,   126,   127,   430,   129,   429,   131,   132,   429,
     134,   429,   136,   137,   429,   139,   140,   141,   142,   429,
     428,   430,   429,   428,   148,   428,   150,   429,   152,   153,
     429,   155,   156,   157,   158,   159,   160,   140,   162,   163,
     164,   165,   166,   430,     4,     4,     3,   429,   429,   429,
     428,    60,     5,   177,     3,   179,     3,   181,   429,     3,
     428,   428,    20,   428,     3,     3,   190,   430,   192,   193,
     194,   195,   196,   197,   198,     4,     4,   201,   202,   430,
     159,     3,   428,   207,   429,   209,   210,   211,   207,   213,
       3,   215,     3,   217,   218,   219,   220,     4,     3,    20,
       3,     3,   430,   429,   231,   429,   429,     3,   429,   231,
     429,    20,   245,     3,     3,   239,   240,   241,     5,   429,
     429,   180,   429,   429,   240,   249,   180,   251,   252,   253,
     430,   430,   229,   428,   258,   428,   260,   261,   262,   429,
     428,     3,   266,     3,   429,   429,   270,   271,   429,     5,
     274,   275,   276,   277,   430,   228,     5,   281,    10,    11,
      12,    13,    14,    15,    16,   430,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   428,    36,     3,   151,    97,   271,   429,
     174,   430,   430,   429,   250,   429,   197,   197,   322,   323,
     324,   325,   326,   191,   191,     5,     5,   140,  1405,  1234,
    1126,  2082,   475,  2010,     3,     4,     5,     6,     7,     8,
     626,    10,  1752,    12,   616,  1507,   171,    16,    17,    18,
     775,    20,   767,  2293,  2476,  2557,  1355,    26,    27,    28,
      29,    30,  1982,   430,  1071,   987,  1074,   651,  1604,  1346,
    1970,    40,  2153,  2305,  1271,   118,  2198,  2568,   464,   786,
    1642,    50,    51,  2165,  1619,    54,  1631,  1038,  2620,   211,
      59,    60,    61,    62,    63,  1804,  1107,    66,  1055,    68,
      69,    70,   429,    -1,    73,    74,    -1,    76,    77,    78,
      -1,   686,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,   427,   428,   429,   430,    96,   432,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,   427,   428,
     429,   430,    96,   432,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,   427,   428,   429,   430,    96,   432,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,   427,   428,
     429,   430,    96,   432,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,   427,   428,   429,   430,    96,   432,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,   427,   428,
     429,   430,    96,   432,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,   427,   428,   429,   430,    96,   432,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,   427,   428,
     429,   430,    96,   432,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,   427,   428,   429,   430,    96,   432,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,   427,   428,
     429,   430,    96,   432,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,   427,   428,   429,   430,    96,   432,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,   427,   428,
     429,   430,    96,   432,    -1,    -1,    -1,   101,    -1,    -1,
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
      36,    -1,    -1,   430,    -1,    -1,    -1,    -1,    -1,   146,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
      -1,    -1,   426,   427,   428,   429,   430,    -1,   432,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,   226,
      -1,    -1,    -1,    -1,    -1,    -1,   233,   234,    -1,    -1,
      -1,   238,    13,    14,    15,    16,    -1,    18,    19,    20,
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
      -1,    -1,    27,    -1,    -1,    -1,    -1,   424,   425,    -1,
      -1,   428,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,    12,
      13,    14,    15,    16,    89,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,   430,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     430,    -1,    -1,   178,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   193,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     225,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,
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
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   424,
     425,    -1,    -1,   428,    -1,    -1,    -1,    40,    -1,    -1,
      13,    14,    15,    16,    47,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   430,    36,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,
      11,    12,    13,    14,    15,    16,    89,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,   430,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   430,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,   430,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     193,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   414,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,   424,   425,    -1,    -1,   428,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    10,    11,    12,    13,    14,    15,    16,    89,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   430,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,   430,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   430,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   193,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,   430,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   225,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,   424,   425,    -1,    -1,   428,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,   430,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    10,    11,    12,    13,    14,    15,    16,
      89,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   430,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
     430,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,   430,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   225,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,   430,    -1,    -1,
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
      17,    18,    -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,   424,   425,    -1,    -1,   428,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    10,    11,    12,    13,    14,
      15,    16,    89,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,   430,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   136,
      36,    -1,   430,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   193,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,   430,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   225,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   430,
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
      -1,   428,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
     430,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,    12,
      13,    14,    15,    16,    89,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,   430,    -1,    -1,   113,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   430,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   193,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   430,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     225,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   424,
     425,    -1,    -1,   428,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,
      11,    12,    13,    14,    15,    16,    89,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,   430,    -1,    -1,
     113,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   430,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   430,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     193,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   430,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   225,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   414,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,   424,   425,    -1,    -1,   428,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,   430,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,   430,
      -1,    -1,   113,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,
      -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   193,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   429,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   225,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   429,    -1,    -1,    -1,    -1,    -1,
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
      -1,   392,   393,   394,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,   424,   425,    -1,    -1,   428,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,   429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    10,    11,    12,    13,    14,    15,    16,
      89,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,   113,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   429,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   429,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   225,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   429,    -1,    -1,    -1,
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
      17,    18,    -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,   424,   425,    -1,    -1,   428,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,   429,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    10,    11,    12,    13,    14,
      15,    16,    89,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   429,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,   429,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   193,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   429,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   225,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   429,    -1,
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
     387,   388,   389,   390,    -1,   392,   393,   394,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,   425,    -1,
      -1,   428,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   429,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   429,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,   429,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   429,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   429,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
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
      -1,   429,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   429,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   429,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   429,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   429,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   429,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   429,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   429,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   429,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   429,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   429,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   429,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   429,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    10,    11,    12,    13,    14,    15,    16,   429,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   429,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   429,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   429,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   429,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   429,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   429,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   429,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   429,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   429,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   429,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   429,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   429,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   429,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,   429,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    10,    11,    12,    13,    14,    15,    16,   429,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   429,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   429,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   429,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   429,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   429,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   429,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   429,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   429,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   429,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    10,    11,    12,    13,
      14,    15,    16,   429,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   429,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   429,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   429,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   429,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   429,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   429,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   429,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   429,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   429,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   429,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   429,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   429,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   429,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,   429,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   429,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    10,    11,    12,    13,    14,    15,    16,   429,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   429,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    95,    36,    -1,    -1,    -1,
      -1,    -1,   102,    -1,   429,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    18,    -1,    41,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   429,    -1,    39,    -1,    -1,    -1,    -1,   138,   139,
      -1,    68,    48,    -1,    -1,    51,    73,    53,    48,    -1,
      56,    51,    -1,    53,    -1,   155,    56,    -1,   429,    86,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    71,    78,    79,    -1,    -1,    -1,    -1,    78,    79,
     107,   108,    -1,    -1,    -1,   429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   202,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,   429,   113,    -1,    -1,    -1,    -1,    -1,   219,
      -1,   221,    -1,    -1,   130,    -1,    -1,   227,    -1,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,
      -1,   168,   169,   170,    -1,    -1,   246,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,
      -1,   261,    -1,    -1,   164,    -1,    -1,    -1,    -1,   429,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,   208,    -1,    -1,    -1,    -1,    -1,   193,    -1,   216,
      -1,    -1,    -1,   193,    -1,   201,    -1,   429,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   241,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,   255,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   429,   261,    -1,    -1,    -1,    -1,
      -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     429,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   429,    -1,    -1,    -1,    -1,    -1,   395,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,
      -1,    -1,   419,   420,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,
      -1,    -1,   109,    -1,   111,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
     147,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    61,    62,    -1,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    82,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,   185,
      -1,    -1,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,   205,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
     275,    -1,    -1,   239,   240,    -1,    -1,   243,   244,    -1,
      -1,    -1,    -1,   249,   253,   251,    -1,    -1,    -1,    -1,
     256,   257,    -1,    -1,    -1,    -1,   262,    -1,   264,    -1,
      -1,    -1,    -1,    -1,   270,    -1,   272,   273,    -1,    -1,
      -1,   253,   278,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   124,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     3,    36,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    49,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   112,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    51,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    50,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    50,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     395,   404,   419,   420,   434,   473,   474,   514,   518,   520,
     527,   528,   531,   533,   534,   536,   537,   538,   543,   544,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   560,   563,   570,   571,   573,   589,   590,
     599,   602,   604,   605,   606,   629,   632,   639,   640,   643,
     646,   647,   650,   219,   252,   371,   404,   252,     3,    10,
      95,   102,   138,   139,   155,   202,   219,   221,   227,   246,
     247,   261,   371,   395,   404,   417,   611,     3,   515,    95,
     139,   155,   202,   219,   221,   227,   252,   371,   395,   404,
     417,   581,     3,     3,     3,    28,   252,   252,   581,     8,
     227,   630,   631,   493,   252,   581,   600,     3,    95,   398,
     399,   400,   107,   398,   399,   400,   407,   417,   417,     0,
     426,   530,     3,     3,     3,     3,   396,   428,   216,   156,
     603,     3,   155,     3,     3,    85,   156,     3,     3,     3,
     603,   246,   155,   603,   396,   396,     3,   156,   252,   591,
       3,   136,   154,   176,   203,   516,     3,   156,     3,   156,
       3,     3,   156,     3,   156,     3,     3,   156,     3,   156,
       3,   156,   396,   396,     3,   156,   103,   146,   154,   159,
     176,   582,   171,   430,     3,     3,   582,     9,    20,     3,
     113,   430,     3,     4,     5,     6,     7,     8,    17,    18,
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
     392,   393,   394,   414,   424,   425,   428,   435,   494,   495,
       3,   154,   176,     3,   167,   173,   381,   428,   497,   498,
     499,   500,   503,   513,     3,   159,   401,   136,   136,   136,
     159,   136,   409,     3,     3,     3,   434,    54,    55,    74,
     210,   277,   427,   559,   100,   120,    38,    75,   100,   108,
     120,   187,   208,   240,   269,    55,   208,   648,     3,     3,
       4,     5,     6,     7,     8,   193,   429,   641,   642,   139,
     202,   281,     3,    51,     3,   428,   197,     3,   156,   281,
     428,    39,    59,   644,   197,     3,     3,    85,   156,     3,
       3,   156,     3,   156,   140,   281,   603,   428,   592,   427,
     517,     3,   516,   136,   430,   281,   281,   281,   281,   197,
     281,    74,   210,   519,   281,   281,     3,   156,     3,   156,
     281,     3,     4,   245,     3,   435,   435,   631,   427,   428,
       9,   435,   435,   435,   275,   435,   472,   427,   428,    36,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   435,     3,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    36,    51,   496,   136,   159,   430,   430,   427,   496,
     428,     3,   428,   474,   497,   240,   430,    76,   153,   177,
     190,   215,   238,   504,   506,    51,   502,   502,     3,   159,
       3,     3,     3,     3,     3,    16,   266,   421,    53,    53,
      44,     3,   108,   258,   561,    71,    84,     3,    84,    71,
     217,     3,    71,    84,   422,    71,   217,     3,    84,     3,
      71,    84,   423,    71,   277,   245,    18,   184,   376,   377,
     378,   379,   649,   100,   120,   429,   430,     3,     3,    61,
      62,    64,    66,    67,    82,   114,   115,   116,   117,   123,
     132,   152,   160,   175,   182,   185,   188,   189,   205,   239,
     240,   243,   244,   249,   251,   256,   257,   262,   264,   270,
     272,   273,   278,   625,   197,     3,    16,   150,   195,   633,
     634,   635,     3,   197,   281,     3,   633,   107,   157,   258,
     398,   645,     3,   404,   197,     3,   156,   281,   648,   277,
     532,   281,   539,   281,   418,     3,     3,     3,   593,   136,
     245,   594,    28,   274,   475,   266,   497,     3,     3,     3,
       3,     3,     3,   404,     3,     3,     3,    74,   281,    74,
     281,     3,   240,   428,   583,     3,   240,   583,     3,   435,
     440,   444,   435,   435,   472,   124,   125,   275,     3,     3,
     431,   442,   449,   435,    65,   178,   254,   435,   470,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   429,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   429,   435,   435,   435,   429,   435,
     435,   435,   435,   435,   435,    28,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   429,   429,   429,
     429,   429,   435,   435,   429,   429,   429,   435,   435,     5,
     429,   429,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   429,   435,   435,   435,   429,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   429,
     435,   435,   429,   435,   435,   435,   435,   435,     6,    18,
     193,   319,   428,    13,    14,    16,    19,   435,    40,    47,
     232,   428,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,     3,   497,
       3,   495,     3,   529,     3,   133,   154,   267,   510,   501,
     496,   435,   429,   429,     3,   601,   498,   177,   215,   507,
     499,   163,   196,   505,     3,     3,   271,     3,   402,   402,
     274,   271,   274,     3,   273,     5,     5,   559,    42,    42,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     625,     3,   245,     3,     3,    20,     3,     5,     3,   379,
       5,     5,   277,     5,    63,     5,   217,   217,   642,   428,
     428,   428,   621,   621,   621,   621,   621,   621,   428,   621,
     621,   621,    64,   622,   622,   621,   621,   621,   428,   622,
     621,   622,   428,   428,   428,    18,    36,    78,   113,     3,
     625,     3,     3,     3,   429,   430,   266,   428,     3,     3,
     197,   429,   197,    51,   564,   396,     3,   197,   281,     3,
     428,     3,   277,   540,     3,     3,   140,   154,   216,   351,
     427,   428,   627,   628,   429,   430,     4,   236,   237,   595,
     435,   198,   485,   497,   475,   517,   396,   519,     3,     3,
       3,   588,     3,   584,   271,   474,   588,   271,   474,   430,
     429,   253,   124,   125,   435,   435,   429,   435,   441,   474,
     136,   430,   429,   136,   435,   430,   430,   430,   429,   429,
     429,   429,   429,   429,   430,   430,   430,   430,   429,   430,
     430,   430,   429,   429,   429,   429,   430,   430,   429,   430,
     429,   429,   429,    51,   430,   430,   430,   430,   321,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   430,
     430,   430,   429,   430,   350,   350,   350,   429,   430,   429,
     430,   429,   350,   350,   430,   429,   429,   429,   429,   429,
     429,   429,   429,   430,   430,   430,   430,   430,   430,   430,
     430,   429,   430,   429,   429,   429,   430,   429,   430,   429,
     430,   430,   430,   430,   430,   429,   429,   429,   430,   430,
     430,   429,   430,     6,   193,   445,   447,   435,   435,   428,
     435,    50,   428,   428,   428,   436,   431,   140,   489,   136,
     430,   496,   164,   164,   164,   474,   510,   429,    20,   427,
     430,   475,   505,   505,   163,   197,   499,   163,   428,   271,
       4,     4,   411,   428,   411,   410,     4,    45,    46,   561,
     197,   197,    78,   134,   201,   261,   625,   625,     3,   222,
     222,   620,   625,     3,   245,   245,     4,     5,     5,     3,
       3,   633,   633,     5,   623,   624,   623,   623,     4,   626,
     623,   623,   623,   624,   624,   623,   623,   623,   626,   624,
     623,   624,     5,     5,     5,   193,   431,   428,   435,   428,
     625,   625,   625,   213,   635,   268,   391,     3,   327,   328,
     329,   330,   525,   526,   266,   428,   197,     3,    51,    60,
       3,   404,   223,   224,   140,   565,     3,   266,   428,     3,
       3,   197,   397,   532,   428,   539,   418,    94,     3,    71,
      78,   134,   138,   155,   164,   201,   261,   612,   613,   619,
     502,     3,    87,    99,   135,   143,   193,   242,   277,   428,
     596,   597,   598,    63,   179,   488,   475,     3,    20,   199,
     430,   574,   429,   430,   428,   585,   574,   585,   574,   440,
     435,   435,   124,   253,    91,   430,   431,   429,   435,   435,
     435,   136,   161,   471,   471,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   625,   625,   435,   435,
     435,     4,   350,   350,   350,   350,   350,   350,   435,   435,
     435,   435,   428,   428,   428,   350,     5,   350,     5,   350,
     428,   428,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   440,   474,   446,   448,    50,   435,   439,
     435,   437,   443,   438,   443,   474,   412,   475,   497,     3,
     510,   140,   511,   511,   511,   429,   502,   435,     3,     3,
     485,   499,   435,   197,   266,   508,   509,   499,     4,   193,
     535,   428,   403,   179,    20,     4,   193,   545,    20,     4,
     179,     3,   562,   562,   428,   164,   164,   428,   620,   620,
     625,    18,    39,    48,    51,    53,    56,    71,    78,    79,
     113,   130,   164,   193,   201,   261,   572,   620,     3,     3,
     222,   222,   429,   429,   429,   430,   259,   280,    82,    83,
     429,   430,   429,   429,   429,   429,    78,   435,   525,    62,
      66,   114,   117,   132,   152,   160,   249,   251,   270,   636,
     428,   428,   428,   428,   428,   428,   429,   430,   268,   525,
       3,   266,   428,    60,   637,   140,   396,    40,   107,   157,
     241,   258,   245,   566,   564,   268,   525,   266,   428,   197,
       3,    20,   405,   406,   541,   542,   540,     3,     3,   428,
     627,     3,   428,   164,   155,   164,   428,   428,   164,   428,
     429,   430,     3,   474,     4,    87,   249,     6,     4,     4,
     428,   597,   430,     3,     5,   486,   487,   435,   212,   651,
     113,   435,   164,     3,     3,   113,   435,   587,   430,   574,
     574,   124,   435,   428,   441,   140,   429,   429,   430,   429,
     435,   435,   429,   429,   429,   429,   429,   430,   430,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   430,
     429,   428,   428,   428,   428,   428,   428,   429,   430,   430,
     429,   429,   450,   451,   452,   428,   429,   430,   428,   429,
     430,   428,   468,   469,   429,   430,   430,   430,   429,   429,
     430,   430,   429,   430,   429,   430,   429,   430,   429,   429,
     429,   429,   429,   429,   430,   430,   430,   429,   429,   429,
     440,   474,   435,   474,   474,   429,   474,   429,   429,    51,
     141,   476,   475,   163,   428,   428,   428,     3,    20,    20,
     427,   488,   435,   428,   509,   430,   535,     4,     5,     4,
     430,     4,     5,   430,   277,   435,   428,   428,     3,   618,
     572,   572,   620,   193,     3,   428,   428,   428,    52,     3,
     428,     4,     4,     5,     6,     7,    72,   333,   334,   335,
     428,   164,   164,   572,   213,    51,    60,     5,   240,     4,
     624,     4,   624,   624,   428,   429,   429,    51,    60,   525,
       3,     3,     3,     3,     3,     3,   428,   429,   428,   268,
     391,   525,   637,     3,     4,     5,     6,     7,     8,    10,
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
     277,   281,   322,   323,   324,   325,   326,   426,   427,   428,
     429,   430,   432,   638,   118,     3,     3,   567,   266,   568,
     565,   428,   429,   268,   525,     3,   266,   428,     4,    20,
      20,   429,   430,   140,   612,    78,   134,   201,   261,   435,
     428,   428,   428,     3,   492,   492,   428,   618,   608,   627,
     613,   625,   597,   429,   598,    49,   112,   427,   478,   478,
     430,   181,   430,     3,    28,   652,   258,    20,   429,   430,
     586,   197,   576,     4,   435,   435,   429,   104,   105,   109,
     111,   144,   145,   147,   278,   279,   435,   435,   435,   454,
     455,   453,   456,   457,   458,   435,   435,   351,   481,   481,
     481,   459,   350,     4,     5,   463,   350,     4,     5,   467,
     481,   481,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   429,   429,   429,   429,   429,    94,    63,
     148,   480,   476,     3,   512,   512,   512,   428,   435,   435,
       3,   651,   492,   535,   430,    12,   545,    12,     3,     5,
     429,     3,   615,     3,   614,   429,   430,   572,     5,   435,
       5,    51,    78,   201,   261,   435,   428,   428,   428,   435,
     636,    60,   637,   429,     4,   435,    60,   637,   429,     3,
     521,   429,   429,   429,   430,   525,   525,   428,   428,   429,
     124,   637,   637,   637,   637,   637,   637,   217,   140,   430,
     428,   277,   569,   566,   525,   428,   429,   428,   268,   525,
     429,     5,     4,   542,   271,   429,   428,   164,   164,   428,
     429,   615,   492,   492,   429,   430,   429,   614,   429,    48,
     172,   197,   228,   277,   351,   607,   620,   429,     3,   487,
     435,   435,   430,   575,   113,   435,   113,   435,   428,    88,
     651,   429,   429,   429,   429,   429,   429,   481,   481,   481,
     481,   481,   481,   429,   430,   429,    63,   198,   483,   483,
     483,   481,   428,   429,   429,   481,   428,   429,   429,   481,
     483,   483,   429,   429,   429,   429,   429,   430,   429,   429,
     430,   430,   430,   413,   435,   477,   435,   485,   480,   429,
     430,   429,   429,     3,    20,   429,   430,   535,   164,   430,
     164,    43,    18,   429,   430,   429,   430,     3,   429,   430,
     429,   429,   430,   428,   428,   164,   429,   429,   429,   429,
     429,    51,    60,   637,   124,   429,   637,   124,   429,     3,
     429,   429,   525,     3,   124,   124,   124,   124,   124,   124,
      60,   118,     3,   435,    78,   568,   429,   525,   525,   428,
     429,   136,   608,   627,   435,   428,   428,   618,   429,   429,
     429,     3,   429,     5,    20,   428,     3,    63,   415,   428,
      63,   478,     3,     3,   580,   587,   428,   577,   483,   483,
     483,   483,   483,   483,   435,     3,   482,    63,   429,   429,
     429,   483,   460,   350,   350,   483,   464,   350,   350,   483,
     429,   429,   435,     5,     5,     5,     5,   478,   277,   430,
     479,   488,   485,     3,   429,   435,   535,   430,    20,   545,
      20,   269,   207,     3,     3,     5,    57,    58,     5,   435,
     435,    60,   637,   124,   124,   277,   522,   429,   429,   521,
      77,   131,   156,   166,   276,   637,   217,   429,   428,   569,
     429,   429,   525,   428,   429,   615,   614,   429,   207,     5,
       3,   107,   248,   204,   268,   416,   423,   204,    20,   430,
     429,     3,   101,   578,   429,   429,   429,   429,   429,   429,
     429,   430,     3,   484,   429,   481,   428,   428,   429,   481,
     428,   428,   429,   429,   429,   430,   430,   214,   435,   140,
     490,   488,   430,   535,     4,   429,   430,     4,     3,   429,
     429,   429,   429,   637,   124,   428,   429,   124,    60,   435,
     429,     5,   429,   429,     3,   429,     3,     3,   428,   428,
      20,   428,   435,     3,   429,   430,    90,   258,     3,   478,
     430,   483,   461,   462,   483,   465,   466,     4,     4,   478,
     230,   258,   159,   491,   535,   430,   545,   428,    57,    58,
     124,     3,   523,   524,   522,   637,   429,   429,   207,   427,
     428,     3,     3,     4,     3,    20,     3,   579,     3,   429,
     481,   481,   429,   481,   481,   429,   429,   231,   231,   492,
     430,   535,   429,     3,   616,    20,   429,   430,   124,   245,
       3,     3,   616,   429,   429,   429,   429,   435,   240,   478,
     483,   483,   483,   483,   180,   180,   535,   430,   429,   430,
       5,   524,   428,   427,   428,   428,   429,   428,   229,   580,
     429,   429,   429,   429,   430,   535,   617,     3,     5,     3,
     616,   616,   617,   228,   609,   610,     5,   535,   430,    18,
      97,   183,   197,   429,   428,   429,   429,    18,     3,   429,
     430,   430,   535,    97,   269,   151,   137,   200,   235,   107,
     258,   616,   617,   617,   271,   610,   535,   430,    98,   149,
      74,   192,   210,   240,    74,   192,   210,   240,   429,   174,
     429,   535,   113,   193,   113,   193,   617,   250,   429,     4,
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
#line 518 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 524 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 525 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 527 "parser/evoparser.y"
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
#line 540 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 542 "parser/evoparser.y"
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
#line 570 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 578 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 586 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 592 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 599 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 600 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 601 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 602 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 603 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 604 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 605 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 606 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 607 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 608 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 609 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 610 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 611 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 612 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 613 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 614 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 615 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 616 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 617 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 619 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 624 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 625 "parser/evoparser.y"
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
#line 633 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 634 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 635 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 636 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 637 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 638 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 643 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 645 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 648 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 649 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 650 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 651 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 652 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 655 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 656 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 660 "parser/evoparser.y"
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
#line 669 "parser/evoparser.y"
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
#line 687 "parser/evoparser.y"
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
#line 696 "parser/evoparser.y"
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
#line 715 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 716 "parser/evoparser.y"
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
#line 776 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 785 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 791 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 796 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 798 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 800 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 805 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 810 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 815 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 823 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 825 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 827 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 829 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 831 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 833 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 835 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 837 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 839 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 841 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 848 "parser/evoparser.y"
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
#line 859 "parser/evoparser.y"
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
#line 869 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 873 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 873 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 874 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 874 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 875 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 876 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 883 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 884 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 891 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 892 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 902 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 906 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 907 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 908 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 909 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 910 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 911 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 912 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 913 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 917 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 918 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 919 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 920 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 921 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 922 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 924 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 925 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 926 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 927 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 928 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 929 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 930 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 931 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 932 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 933 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 934 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 935 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 937 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 938 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 939 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 940 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 941 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 942 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 943 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 944 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 945 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 946 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 947 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 948 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 949 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 950 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 951 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 952 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 954 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 955 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 956 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 957 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 958 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 959 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 962 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 963 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 964 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 965 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 966 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 967 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 968 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 969 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 970 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 971 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 972 "parser/evoparser.y"
    { emit("CALL 1 TOKEN_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_TOKEN_LENGTH, (yyvsp[(3) - (4)].exprval), "token_length"); ;}
    break;

  case 150:
#line 973 "parser/evoparser.y"
    { emit("CALL 2 EVO_CALL_EXTERNAL"); (yyval.exprval) = expr_make_func2(EXPR_PG_CALL_EXTERNAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "evo_call_external"); ;}
    break;

  case 151:
#line 974 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 975 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 153:
#line 976 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 154:
#line 977 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 155:
#line 978 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 156:
#line 979 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 157:
#line 980 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 158:
#line 981 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 159:
#line 982 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 160:
#line 983 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 161:
#line 984 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 162:
#line 985 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 163:
#line 986 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 164:
#line 987 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 165:
#line 988 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 166:
#line 989 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 167:
#line 990 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 168:
#line 991 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 169:
#line 992 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 170:
#line 993 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 171:
#line 994 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 172:
#line 995 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 173:
#line 996 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 174:
#line 997 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 175:
#line 999 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 176:
#line 1000 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 177:
#line 1001 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 178:
#line 1002 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 179:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 180:
#line 1004 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 181:
#line 1005 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 182:
#line 1006 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 183:
#line 1008 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 184:
#line 1009 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 185:
#line 1010 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 186:
#line 1011 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 187:
#line 1012 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 188:
#line 1013 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 189:
#line 1014 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 190:
#line 1015 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 191:
#line 1016 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 192:
#line 1017 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 193:
#line 1018 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 194:
#line 1019 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 195:
#line 1020 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 196:
#line 1021 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 197:
#line 1022 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 198:
#line 1023 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 199:
#line 1024 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 200:
#line 1025 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 201:
#line 1026 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1027 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 203:
#line 1028 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 204:
#line 1029 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 205:
#line 1031 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 206:
#line 1032 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 207:
#line 1033 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 208:
#line 1034 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 209:
#line 1035 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 210:
#line 1037 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 211:
#line 1038 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 212:
#line 1040 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 213:
#line 1041 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 214:
#line 1042 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 215:
#line 1044 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 216:
#line 1045 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 217:
#line 1046 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 218:
#line 1047 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 219:
#line 1054 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 220:
#line 1061 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 221:
#line 1068 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1072 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1076 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 224:
#line 1080 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 225:
#line 1084 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 226:
#line 1088 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 227:
#line 1094 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 228:
#line 1095 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 229:
#line 1096 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 230:
#line 1100 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 231:
#line 1106 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 232:
#line 1112 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 233:
#line 1113 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1114 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1115 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 236:
#line 1116 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 237:
#line 1117 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 238:
#line 1118 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1119 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 240:
#line 1120 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 241:
#line 1124 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1126 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 243:
#line 1128 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 244:
#line 1130 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 245:
#line 1134 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 246:
#line 1142 "parser/evoparser.y"
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
#line 1152 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 248:
#line 1153 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 249:
#line 1156 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 250:
#line 1157 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 251:
#line 1161 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1169 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 253:
#line 1177 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 254:
#line 1185 "parser/evoparser.y"
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
#line 1199 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 256:
#line 1208 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 257:
#line 1214 "parser/evoparser.y"
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
#line 1227 "parser/evoparser.y"
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
#line 1240 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 262:
#line 1242 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 263:
#line 1245 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 264:
#line 1252 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 265:
#line 1260 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1261 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1262 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1265 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1266 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 271:
#line 1270 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1279 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 275:
#line 1281 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 278:
#line 1289 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 279:
#line 1291 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 284:
#line 1303 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 285:
#line 1309 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 286:
#line 1316 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 287:
#line 1324 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 288:
#line 1325 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 289:
#line 1326 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1327 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 292:
#line 1339 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 293:
#line 1342 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 294:
#line 1343 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 295:
#line 1344 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 296:
#line 1345 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1346 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 299:
#line 1350 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 300:
#line 1353 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1354 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 302:
#line 1357 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1358 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 304:
#line 1359 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 305:
#line 1360 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 306:
#line 1361 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 307:
#line 1362 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 308:
#line 1363 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 309:
#line 1364 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 310:
#line 1365 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 311:
#line 1368 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 312:
#line 1369 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 313:
#line 1371 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 314:
#line 1379 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 315:
#line 1384 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 316:
#line 1385 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 317:
#line 1386 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 318:
#line 1389 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 319:
#line 1390 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1399 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 323:
#line 1407 "parser/evoparser.y"
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
#line 1416 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 325:
#line 1417 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 326:
#line 1419 "parser/evoparser.y"
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
#line 1428 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 328:
#line 1433 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 329:
#line 1439 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 330:
#line 1446 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 331:
#line 1450 "parser/evoparser.y"
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
#line 1470 "parser/evoparser.y"
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
#line 1496 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 336:
#line 1498 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 337:
#line 1500 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 338:
#line 1502 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1504 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 340:
#line 1507 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 341:
#line 1508 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1509 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 343:
#line 1512 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 344:
#line 1513 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 345:
#line 1516 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 346:
#line 1517 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 347:
#line 1520 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 348:
#line 1521 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 349:
#line 1522 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1529 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 353:
#line 1530 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 354:
#line 1535 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 355:
#line 1537 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1539 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 358:
#line 1543 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1544 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 360:
#line 1547 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 361:
#line 1548 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 362:
#line 1551 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 363:
#line 1556 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 364:
#line 1566 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 365:
#line 1573 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 366:
#line 1574 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 367:
#line 1575 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 368:
#line 1576 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 369:
#line 1581 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1585 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 371:
#line 1587 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 374:
#line 1593 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 375:
#line 1598 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 376:
#line 1605 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 377:
#line 1612 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 379:
#line 1624 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 380:
#line 1625 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 381:
#line 1630 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 382:
#line 1637 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 383:
#line 1644 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1652 "parser/evoparser.y"
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
#line 1662 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 386:
#line 1670 "parser/evoparser.y"
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
#line 1680 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 388:
#line 1688 "parser/evoparser.y"
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
#line 1697 "parser/evoparser.y"
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
#line 1706 "parser/evoparser.y"
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
#line 1716 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 392:
#line 1724 "parser/evoparser.y"
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
#line 1733 "parser/evoparser.y"
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
#line 1742 "parser/evoparser.y"
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
#line 1752 "parser/evoparser.y"
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
#line 1761 "parser/evoparser.y"
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
#line 1778 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 398:
#line 1786 "parser/evoparser.y"
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
#line 1797 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 400:
#line 1799 "parser/evoparser.y"
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
#line 1812 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 402:
#line 1813 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 403:
#line 1816 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 404:
#line 1818 "parser/evoparser.y"
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
#line 1830 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 406:
#line 1840 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 407:
#line 1845 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 408:
#line 1850 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 409:
#line 1856 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1863 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 411:
#line 1870 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 412:
#line 1877 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 413:
#line 1887 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 414:
#line 1894 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1903 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 416:
#line 1910 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 417:
#line 1916 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 418:
#line 1924 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 419:
#line 1930 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 421:
#line 1938 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 422:
#line 1939 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 423:
#line 1940 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 424:
#line 1941 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 425:
#line 1957 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1958 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1959 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1968 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 429:
#line 1969 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 430:
#line 1974 "parser/evoparser.y"
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
#line 1984 "parser/evoparser.y"
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
#line 1999 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 433:
#line 2000 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 434:
#line 2005 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 435:
#line 2013 "parser/evoparser.y"
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
#line 2022 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 437:
#line 2044 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2045 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 439:
#line 2046 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 440:
#line 2051 "parser/evoparser.y"
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
#line 2068 "parser/evoparser.y"
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
#line 2089 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 443:
#line 2090 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 444:
#line 2096 "parser/evoparser.y"
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
#line 2105 "parser/evoparser.y"
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
#line 2119 "parser/evoparser.y"
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
#line 2128 "parser/evoparser.y"
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
#line 2153 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2154 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2155 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2156 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2157 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2158 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 454:
#line 2159 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 455:
#line 2164 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 456:
#line 2171 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 457:
#line 2182 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 462:
#line 2196 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 463:
#line 2198 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 464:
#line 2203 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 465:
#line 2211 "parser/evoparser.y"
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
#line 2220 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 467:
#line 2232 "parser/evoparser.y"
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
#line 2244 "parser/evoparser.y"
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
#line 2258 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 470:
#line 2259 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 471:
#line 2265 "parser/evoparser.y"
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
#line 2279 "parser/evoparser.y"
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
#line 2289 "parser/evoparser.y"
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
#line 2303 "parser/evoparser.y"
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
#line 2317 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 476:
#line 2325 "parser/evoparser.y"
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
#line 2336 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2342 "parser/evoparser.y"
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
#line 2353 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2359 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 481:
#line 2366 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 482:
#line 2372 "parser/evoparser.y"
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
#line 2393 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 484:
#line 2394 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 485:
#line 2395 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 486:
#line 2396 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 487:
#line 2401 "parser/evoparser.y"
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
#line 2410 "parser/evoparser.y"
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
#line 2427 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        DropSubscriptionProcess(0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 490:
#line 2435 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (5)].strval));
        DropSubscriptionProcess(1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 491:
#line 2446 "parser/evoparser.y"
    {
        emit("RESUME SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        ResumeSubscriptionProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 492:
#line 2457 "parser/evoparser.y"
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
#line 2469 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 494:
#line 2476 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 495:
#line 2485 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 496:
#line 2493 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 497:
#line 2499 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 499:
#line 2516 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 500:
#line 2520 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 501:
#line 2529 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 503:
#line 2544 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 504:
#line 2548 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 505:
#line 2553 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 506:
#line 2560 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 507:
#line 2565 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 508:
#line 2572 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 509:
#line 2576 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 510:
#line 2577 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 511:
#line 2583 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 512:
#line 2595 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 513:
#line 2604 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 514:
#line 2605 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 515:
#line 2606 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 516:
#line 2610 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 517:
#line 2611 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 518:
#line 2612 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 519:
#line 2613 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 520:
#line 2614 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 521:
#line 2615 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 524:
#line 2624 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 525:
#line 2625 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 527:
#line 2630 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 529:
#line 2635 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 530:
#line 2640 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 531:
#line 2647 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 532:
#line 2656 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 533:
#line 2662 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 534:
#line 2668 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 535:
#line 2675 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 536:
#line 2681 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 537:
#line 2688 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 538:
#line 2694 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 539:
#line 2700 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 540:
#line 2706 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 541:
#line 2712 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 542:
#line 2718 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 543:
#line 2724 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 544:
#line 2730 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 545:
#line 2736 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 546:
#line 2742 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 547:
#line 2748 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 548:
#line 2754 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 549:
#line 2760 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 550:
#line 2766 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 551:
#line 2772 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 552:
#line 2778 "parser/evoparser.y"
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

  case 553:
#line 2791 "parser/evoparser.y"
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

  case 554:
#line 2801 "parser/evoparser.y"
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

  case 555:
#line 2811 "parser/evoparser.y"
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

  case 556:
#line 2821 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s SET TTL %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableSetTtl((yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 557:
#line 2827 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s DROP TTL", (yyvsp[(3) - (5)].strval));
        AlterTableSetTtl((yyvsp[(3) - (5)].strval), NULL);
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 558:
#line 2834 "parser/evoparser.y"
    { ;}
    break;

  case 559:
#line 2835 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 560:
#line 2836 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 561:
#line 2840 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 562:
#line 2848 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 563:
#line 2854 "parser/evoparser.y"
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

  case 565:
#line 2867 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 566:
#line 2867 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 569:
#line 2875 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 570:
#line 2876 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 571:
#line 2877 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 572:
#line 2881 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 573:
#line 2882 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 574:
#line 2883 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 575:
#line 2887 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 576:
#line 2895 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 577:
#line 2904 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 578:
#line 2905 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 579:
#line 2906 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 580:
#line 2907 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 581:
#line 2908 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 585:
#line 2915 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 586:
#line 2919 "parser/evoparser.y"
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

  case 587:
#line 2929 "parser/evoparser.y"
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

  case 588:
#line 2941 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 589:
#line 2942 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 590:
#line 2942 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 591:
#line 2945 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 592:
#line 2946 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 593:
#line 2947 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 594:
#line 2948 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 595:
#line 2952 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 596:
#line 2955 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 597:
#line 2956 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 598:
#line 2957 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 599:
#line 2958 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 600:
#line 2964 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 601:
#line 2970 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 602:
#line 2975 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 603:
#line 2980 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 604:
#line 2984 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 605:
#line 2988 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 606:
#line 2990 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 609:
#line 2996 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 610:
#line 2997 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 611:
#line 3001 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 612:
#line 3002 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 613:
#line 3006 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 614:
#line 3007 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 615:
#line 3008 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 622:
#line 3023 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 623:
#line 3024 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 624:
#line 3025 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 625:
#line 3026 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 626:
#line 3027 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 627:
#line 3028 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 628:
#line 3029 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 629:
#line 3030 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 630:
#line 3035 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 631:
#line 3044 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 632:
#line 3051 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 633:
#line 3052 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 634:
#line 3053 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 635:
#line 3058 "parser/evoparser.y"
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

  case 636:
#line 3069 "parser/evoparser.y"
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

  case 637:
#line 3081 "parser/evoparser.y"
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

  case 638:
#line 3092 "parser/evoparser.y"
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

  case 639:
#line 3107 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 640:
#line 3111 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 641:
#line 3115 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 642:
#line 3116 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 643:
#line 3121 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 644:
#line 3123 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 645:
#line 3125 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 646:
#line 3127 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 647:
#line 3130 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 648:
#line 3131 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 649:
#line 3137 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 650:
#line 3142 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 651:
#line 3144 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 652:
#line 3146 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 653:
#line 3148 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 654:
#line 3150 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 655:
#line 3154 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 656:
#line 3158 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 657:
#line 3159 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 658:
#line 3164 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 659:
#line 3174 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 661:
#line 3187 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 662:
#line 3195 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 663:
#line 3203 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 665:
#line 3211 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 666:
#line 3212 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 667:
#line 3213 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 668:
#line 3214 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 669:
#line 3216 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 670:
#line 3218 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 671:
#line 3220 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 672:
#line 3225 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 673:
#line 3230 "parser/evoparser.y"
    { emit("TABLE OPT TTL_COLUMN %s", (yyvsp[(6) - (7)].strval)); SetTableTtlColumn((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 676:
#line 3238 "parser/evoparser.y"
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

  case 677:
#line 3253 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 678:
#line 3261 "parser/evoparser.y"
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

  case 679:
#line 3275 "parser/evoparser.y"
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

  case 680:
#line 3289 "parser/evoparser.y"
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

  case 681:
#line 3303 "parser/evoparser.y"
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

  case 682:
#line 3315 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 683:
#line 3316 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 684:
#line 3317 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 685:
#line 3320 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 686:
#line 3321 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 687:
#line 3324 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 688:
#line 3325 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 689:
#line 3326 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 690:
#line 3327 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 691:
#line 3328 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 692:
#line 3329 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 693:
#line 3330 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 694:
#line 3331 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 695:
#line 3333 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 696:
#line 3335 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 697:
#line 3337 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 698:
#line 3339 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 699:
#line 3341 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 700:
#line 3343 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 701:
#line 3346 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 702:
#line 3347 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 703:
#line 3350 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 704:
#line 3351 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 705:
#line 3354 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 706:
#line 3355 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 708:
#line 3359 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 709:
#line 3360 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 710:
#line 3361 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 711:
#line 3362 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 712:
#line 3363 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 713:
#line 3364 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 714:
#line 3365 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 715:
#line 3366 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 716:
#line 3367 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 717:
#line 3368 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 718:
#line 3369 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 719:
#line 3370 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 720:
#line 3371 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 721:
#line 3372 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 722:
#line 3373 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 723:
#line 3374 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 724:
#line 3375 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 725:
#line 3378 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 726:
#line 3379 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 727:
#line 3382 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 728:
#line 3384 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 729:
#line 3392 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 730:
#line 3393 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 732:
#line 3395 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 733:
#line 3396 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 734:
#line 3397 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 735:
#line 3398 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 736:
#line 3399 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 737:
#line 3400 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 738:
#line 3401 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 739:
#line 3402 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 740:
#line 3403 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 741:
#line 3410 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 742:
#line 3411 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 743:
#line 3412 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 744:
#line 3413 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 745:
#line 3414 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 746:
#line 3415 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 747:
#line 3416 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 748:
#line 3417 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 749:
#line 3418 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 750:
#line 3419 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 751:
#line 3420 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 752:
#line 3421 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 753:
#line 3422 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 754:
#line 3423 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 755:
#line 3424 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 756:
#line 3425 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 757:
#line 3426 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 758:
#line 3427 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 759:
#line 3428 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 760:
#line 3429 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 761:
#line 3430 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 762:
#line 3433 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 763:
#line 3434 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 764:
#line 3435 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 765:
#line 3438 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 766:
#line 3439 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 767:
#line 3442 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 768:
#line 3443 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 769:
#line 3444 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 771:
#line 3448 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 772:
#line 3449 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 773:
#line 3453 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 774:
#line 3454 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 775:
#line 3455 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 776:
#line 3456 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 777:
#line 3457 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 778:
#line 3458 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 779:
#line 3459 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 780:
#line 3460 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 781:
#line 3461 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 782:
#line 3462 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 783:
#line 3463 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 784:
#line 3464 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 785:
#line 3465 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 786:
#line 3466 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 787:
#line 3467 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 788:
#line 3468 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 789:
#line 3469 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 790:
#line 3470 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 791:
#line 3471 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 792:
#line 3472 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 793:
#line 3473 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 794:
#line 3474 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 795:
#line 3475 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 796:
#line 3476 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 797:
#line 3477 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 798:
#line 3478 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 799:
#line 3479 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 800:
#line 3480 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 801:
#line 3481 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 802:
#line 3482 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 803:
#line 3483 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 804:
#line 3484 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 805:
#line 3485 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 806:
#line 3486 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 807:
#line 3487 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 808:
#line 3490 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 809:
#line 3491 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 810:
#line 3495 "parser/evoparser.y"
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

  case 811:
#line 3507 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 812:
#line 3508 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 813:
#line 3509 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 814:
#line 3513 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 815:
#line 3516 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 816:
#line 3517 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 820:
#line 3521 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 821:
#line 3522 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 822:
#line 3530 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 823:
#line 3535 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 824:
#line 3541 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 825:
#line 3547 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 826:
#line 3554 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 827:
#line 3561 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 828:
#line 3567 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 829:
#line 3573 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 830:
#line 3580 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 835:
#line 3596 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 836:
#line 3597 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 837:
#line 3598 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 838:
#line 3599 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 839:
#line 3602 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 840:
#line 3603 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 841:
#line 3604 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 842:
#line 3605 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 843:
#line 3606 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 844:
#line 3607 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 845:
#line 3608 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 846:
#line 3609 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 847:
#line 3610 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 848:
#line 3611 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 857:
#line 3628 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 858:
#line 3629 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 979:
#line 3647 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 980:
#line 3654 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 981:
#line 3659 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 982:
#line 3665 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 983:
#line 3671 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 984:
#line 3677 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 985:
#line 3688 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 986:
#line 3693 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 987:
#line 3699 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 990:
#line 3710 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 991:
#line 3711 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 992:
#line 3712 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 993:
#line 3713 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 994:
#line 3714 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 995:
#line 3715 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 996:
#line 3716 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 997:
#line 3723 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 998:
#line 3728 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 999:
#line 3734 "parser/evoparser.y"
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

  case 1000:
#line 3749 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 1001:
#line 3750 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 1002:
#line 3753 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1003:
#line 3754 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 1004:
#line 3755 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 1005:
#line 3756 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1006:
#line 3759 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 1007:
#line 3764 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1008:
#line 3770 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1009:
#line 3779 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1010:
#line 3787 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1011:
#line 3797 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 1012:
#line 3802 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 1015:
#line 3815 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1016:
#line 3816 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1017:
#line 3817 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1018:
#line 3818 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1019:
#line 3819 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1020:
#line 3820 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1021:
#line 3821 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1022:
#line 3822 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1023:
#line 3825 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1024:
#line 3830 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1025:
#line 3836 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1026:
#line 3846 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1027:
#line 3853 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1028:
#line 3860 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1029:
#line 3868 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1031:
#line 3878 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1033:
#line 3882 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1034:
#line 3883 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12638 "parser/evoparser.tab.c"
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


#line 3886 "parser/evoparser.y"

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
