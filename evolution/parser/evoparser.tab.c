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
     TTL_COLUMN = 668
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
#line 996 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1009 "parser/evoparser.tab.c"

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
#define YYLAST   14459

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  431
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  220
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1032
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2657

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   668

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     426,   427,    28,    26,   428,    27,   425,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   424,
       2,   430,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   429,    32,     2,     2,     2,     2,     2,
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
     415,   416,   417,   418,   419,   420,   421,   422,   423
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
    2380,  2385,  2387,  2389,  2391,  2393,  2400,  2409,  2413,  2419,
    2423,  2429,  2431,  2435,  2437,  2442,  2449,  2450,  2455,  2460,
    2463,  2464,  2469,  2477,  2482,  2484,  2488,  2490,  2492,  2494,
    2505,  2518,  2519,  2522,  2525,  2526,  2529,  2532,  2535,  2538,
    2541,  2542,  2545,  2547,  2551,  2552,  2557,  2558,  2564,  2570,
    2578,  2589,  2600,  2618,  2631,  2651,  2663,  2670,  2679,  2686,
    2693,  2700,  2710,  2717,  2723,  2732,  2740,  2750,  2759,  2770,
    2780,  2788,  2796,  2805,  2814,  2822,  2828,  2829,  2831,  2834,
    2836,  2847,  2854,  2855,  2856,  2862,  2863,  2868,  2869,  2873,
    2878,  2881,  2882,  2888,  2892,  2898,  2899,  2902,  2905,  2908,
    2911,  2913,  2914,  2915,  2919,  2921,  2925,  2929,  2930,  2937,
    2939,  2941,  2945,  2949,  2957,  2961,  2965,  2971,  2977,  2979,
    2988,  2996,  3004,  3006,  3007,  3015,  3016,  3020,  3022,  3026,
    3028,  3030,  3032,  3034,  3036,  3037,  3039,  3044,  3048,  3050,
    3054,  3057,  3060,  3063,  3065,  3068,  3071,  3074,  3076,  3078,
    3088,  3089,  3092,  3095,  3099,  3105,  3111,  3119,  3125,  3127,
    3132,  3137,  3141,  3147,  3151,  3157,  3158,  3161,  3163,  3169,
    3177,  3185,  3195,  3207,  3209,  3212,  3216,  3218,  3229,  3230,
    3235,  3247,  3266,  3267,  3272,  3276,  3282,  3288,  3298,  3309,
    3317,  3322,  3330,  3332,  3336,  3346,  3356,  3366,  3373,  3385,
    3394,  3395,  3397,  3400,  3402,  3406,  3412,  3420,  3425,  3430,
    3436,  3442,  3447,  3454,  3466,  3480,  3494,  3510,  3515,  3522,
    3524,  3528,  3530,  3534,  3536,  3540,  3541,  3546,  3552,  3557,
    3563,  3568,  3574,  3579,  3585,  3590,  3595,  3599,  3603,  3607,
    3610,  3614,  3619,  3624,  3626,  3630,  3631,  3636,  3637,  3641,
    3644,  3648,  3652,  3656,  3660,  3666,  3672,  3678,  3682,  3688,
    3691,  3699,  3705,  3713,  3719,  3722,  3726,  3729,  3733,  3736,
    3740,  3746,  3751,  3757,  3765,  3774,  3783,  3791,  3798,  3805,
    3811,  3812,  3816,  3822,  3823,  3825,  3826,  3829,  3832,  3833,
    3838,  3842,  3845,  3849,  3853,  3857,  3861,  3865,  3869,  3873,
    3877,  3881,  3885,  3887,  3889,  3891,  3893,  3895,  3899,  3905,
    3908,  3913,  3915,  3917,  3919,  3921,  3925,  3929,  3933,  3937,
    3943,  3949,  3951,  3953,  3955,  3960,  3964,  3966,  3970,  3974,
    3975,  3977,  3979,  3981,  3985,  3989,  3992,  3994,  3998,  4002,
    4006,  4008,  4019,  4029,  4042,  4054,  4067,  4079,  4094,  4108,
    4109,  4111,  4113,  4117,  4120,  4124,  4128,  4132,  4134,  4136,
    4138,  4140,  4142,  4144,  4146,  4148,  4150,  4152,  4153,  4156,
    4161,  4167,  4173,  4179,  4185,  4191,  4193,  4195,  4197,  4199,
    4201,  4203,  4205,  4207,  4209,  4211,  4213,  4215,  4217,  4219,
    4221,  4223,  4225,  4227,  4229,  4231,  4233,  4235,  4237,  4239,
    4241,  4243,  4245,  4247,  4249,  4251,  4253,  4255,  4257,  4259,
    4261,  4263,  4265,  4267,  4269,  4271,  4273,  4275,  4277,  4279,
    4281,  4283,  4285,  4287,  4289,  4291,  4293,  4295,  4297,  4299,
    4301,  4303,  4305,  4307,  4309,  4311,  4313,  4315,  4317,  4319,
    4321,  4323,  4325,  4327,  4329,  4331,  4333,  4335,  4337,  4339,
    4341,  4343,  4345,  4347,  4349,  4351,  4353,  4355,  4357,  4359,
    4361,  4363,  4365,  4367,  4369,  4371,  4373,  4375,  4377,  4379,
    4381,  4383,  4385,  4387,  4389,  4391,  4393,  4395,  4397,  4399,
    4401,  4403,  4405,  4407,  4409,  4411,  4413,  4415,  4417,  4419,
    4421,  4423,  4425,  4427,  4429,  4431,  4433,  4435,  4437,  4439,
    4443,  4449,  4453,  4459,  4461,  4466,  4472,  4474,  4478,  4480,
    4482,  4484,  4486,  4488,  4490,  4492,  4494,  4508,  4524,  4526,
    4528,  4530,  4532,  4534,  4536,  4538,  4542,  4548,  4553,  4558,
    4560,  4566,  4567,  4570,  4574,  4577,  4581,  4584,  4587,  4590,
    4592,  4595,  4597,  4601,  4607,  4612,  4617,  4624,  4631,  4632,
    4635,  4638,  4640
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     432,     0,    -1,   471,   424,    -1,   471,   424,   432,    -1,
       3,    -1,     3,   425,     3,    -1,    89,   425,     3,    -1,
     183,   426,     3,   427,    91,   426,     4,   427,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   433,    26,   433,    -1,   433,    27,   433,    -1,   433,
      28,   433,    -1,   433,    29,   433,    -1,   433,    30,   433,
      -1,   433,    31,   433,    -1,    27,   433,    -1,   426,   433,
     427,    -1,   433,    12,   433,    -1,   433,    10,   433,    -1,
     433,    11,   433,    -1,   433,    23,   433,    -1,   433,    24,
     433,    -1,   433,    32,   433,    -1,   433,    25,   433,    -1,
     433,    34,   433,    -1,   433,    33,   433,    -1,    18,   433,
      -1,    17,   433,    -1,   433,    20,   433,    -1,    -1,   433,
      20,   426,   434,   472,   427,    -1,    -1,   433,    20,    47,
     426,   435,   472,   427,    -1,    -1,   433,    20,   232,   426,
     436,   472,   427,    -1,    -1,   433,    20,    40,   426,   437,
     472,   427,    -1,   433,    20,    47,   426,   441,   427,    -1,
     433,    20,   232,   426,   441,   427,    -1,   433,    15,   193,
      -1,   433,    15,    18,   193,    -1,   433,    15,     6,    -1,
     433,    15,    18,     6,    -1,     8,     9,   433,    -1,   433,
      19,   433,    50,   433,    -1,   433,    18,    19,   433,    50,
     433,    -1,   433,    -1,   433,   428,   438,    -1,   433,    -1,
     433,   428,   439,    -1,    -1,   263,    36,   440,   439,   429,
      -1,   263,    36,   429,    -1,   433,    36,   433,   429,    -1,
     433,    -1,   380,   426,   433,   427,    -1,   380,   426,   433,
     428,   433,   427,    -1,   381,   426,   433,   427,    -1,   382,
     426,   433,   428,   433,   427,    -1,   383,   426,   427,    -1,
     414,   426,   427,    -1,   384,   426,   433,   428,   433,   427,
      -1,   385,   426,   433,   428,   433,   427,    -1,   386,   426,
     433,   428,   433,   427,    -1,   387,   426,   433,   428,   433,
     427,    -1,   388,   426,   433,   427,    -1,   389,   426,   433,
     427,    -1,   390,   426,   433,   427,    -1,   433,    22,   433,
      -1,   433,    21,   433,    -1,   392,   426,   433,   428,   433,
     428,   433,   428,     5,   427,    -1,   393,   426,   433,   428,
     433,   428,   433,   428,     5,   428,     4,   427,    -1,   394,
     426,   433,   428,   433,   428,   433,   428,     5,   428,     4,
     427,    -1,    -1,   438,    -1,    -1,   433,    16,   426,   443,
     438,   427,    -1,    -1,   433,    18,    16,   426,   444,   438,
     427,    -1,    -1,   433,    16,   426,   445,   472,   427,    -1,
      -1,   433,    18,    16,   426,   446,   472,   427,    -1,    -1,
     281,   426,   447,   472,   427,    -1,     3,   426,   442,   427,
      -1,   322,   426,    28,   427,    -1,   322,   426,   433,   427,
      -1,   323,   426,   433,   427,    -1,   324,   426,   433,   427,
      -1,   325,   426,   433,   427,    -1,   326,   426,   433,   427,
      -1,   320,   426,   433,   427,    -1,   320,   426,   433,   321,
       4,   427,    -1,    -1,   342,   426,   427,   350,   426,   448,
     479,   481,   427,    -1,    -1,   343,   426,   427,   350,   426,
     449,   479,   481,   427,    -1,    -1,   344,   426,   427,   350,
     426,   450,   479,   481,   427,    -1,    -1,   323,   426,   433,
     427,   350,   426,   451,   479,   481,   427,    -1,    -1,   322,
     426,    28,   427,   350,   426,   452,   479,   481,   427,    -1,
      -1,   322,   426,   433,   427,   350,   426,   453,   479,   481,
     427,    -1,    -1,   324,   426,   433,   427,   350,   426,   454,
     479,   481,   427,    -1,    -1,   325,   426,   433,   427,   350,
     426,   455,   479,   481,   427,    -1,    -1,   326,   426,   433,
     427,   350,   426,   456,   479,   481,   427,    -1,    -1,   345,
     426,   433,   427,   350,   426,   457,   479,   481,   427,    -1,
      -1,   345,   426,   433,   428,     5,   427,   350,   426,   458,
     479,   481,   427,    -1,    -1,   345,   426,   433,   428,     5,
     428,     4,   427,   350,   426,   459,   479,   481,   427,    -1,
      -1,   345,   426,   433,   428,     5,   428,     5,   427,   350,
     426,   460,   479,   481,   427,    -1,    -1,   346,   426,   433,
     427,   350,   426,   461,   479,   481,   427,    -1,    -1,   346,
     426,   433,   428,     5,   427,   350,   426,   462,   479,   481,
     427,    -1,    -1,   346,   426,   433,   428,     5,   428,     4,
     427,   350,   426,   463,   479,   481,   427,    -1,    -1,   346,
     426,   433,   428,     5,   428,     5,   427,   350,   426,   464,
     479,   481,   427,    -1,    -1,   347,   426,     5,   427,   350,
     426,   465,   479,   481,   427,    -1,    -1,   348,   426,   427,
     350,   426,   466,   479,   481,   427,    -1,    -1,   349,   426,
     427,   350,   426,   467,   479,   481,   427,    -1,   282,   426,
     433,   428,   433,   428,   433,   427,    -1,   282,   426,   433,
     428,   433,   427,    -1,   282,   426,   433,   136,   433,   427,
      -1,   282,   426,   433,   136,   433,   140,   433,   427,    -1,
     283,   426,   433,   427,    -1,   283,   426,   468,   433,   136,
     433,   427,    -1,   283,   426,   468,   136,   433,   427,    -1,
     327,   426,   433,   427,    -1,   328,   426,   433,   427,    -1,
     329,   426,   433,   427,    -1,   330,   426,   433,   428,   433,
     427,    -1,   331,   426,   433,   428,   433,   428,   433,   427,
      -1,   332,   426,   433,   428,   433,   427,    -1,   294,   426,
     433,   428,   433,   427,    -1,   295,   426,   433,   428,   433,
     427,    -1,   296,   426,   433,   428,   433,   428,   433,   427,
      -1,   297,   426,   433,   428,   433,   428,   433,   427,    -1,
     298,   426,   433,   427,    -1,   299,   426,   433,   428,   433,
     427,    -1,   300,   426,   433,   428,   433,   427,    -1,   301,
     426,   433,   428,   433,   427,    -1,   302,   426,   433,   427,
      -1,   303,   426,   433,   427,    -1,   304,   426,   433,   427,
      -1,   305,   426,   433,   428,   433,   427,    -1,   305,   426,
     433,   427,    -1,   306,   426,   433,   428,   433,   427,    -1,
     307,   426,   433,   427,    -1,   308,   426,   433,   428,   433,
     427,    -1,   309,   426,   427,    -1,   310,   426,   433,   427,
      -1,   311,   426,   433,   427,    -1,   312,   426,   433,   427,
      -1,   313,   426,   427,    -1,   293,   426,   427,    -1,   286,
     426,   433,   428,   433,   427,    -1,   287,   426,   433,   427,
      -1,   288,   426,   433,   427,    -1,   289,   426,   433,   427,
      -1,   290,   426,   433,   427,    -1,   291,   426,   433,   427,
      -1,   292,   426,   433,   427,    -1,   352,   426,   433,   428,
     433,   427,    -1,   353,   426,   433,   427,    -1,   354,   426,
     433,   427,    -1,   355,   426,   433,   427,    -1,   356,   426,
     433,   427,    -1,   357,   426,   433,   427,    -1,   358,   426,
     433,   427,    -1,   359,   426,   433,   427,    -1,   360,   426,
     433,   427,    -1,   361,   426,   433,   428,   433,   428,   433,
     427,    -1,   362,   426,   433,   428,   433,   428,   433,   427,
      -1,   363,   426,   433,   428,   433,   428,   433,   427,    -1,
     364,   426,   433,   428,   433,   427,    -1,   365,   426,   433,
     428,   433,   427,    -1,   366,   426,   433,   428,   433,   428,
     433,   427,    -1,   367,   426,   433,   428,   433,   428,   433,
     427,    -1,   368,   426,   433,   428,   433,   427,    -1,   368,
     426,   433,   428,   433,   428,   433,   428,   433,   427,    -1,
     369,   426,   433,   427,    -1,   369,   426,   433,   428,   433,
     427,    -1,   369,   426,   433,   428,   433,   428,   433,   427,
      -1,   370,   426,   433,   427,    -1,   372,   426,   433,   427,
      -1,   373,   426,   433,   427,    -1,   374,   426,   433,   428,
     433,   427,    -1,   374,   426,   433,   428,   433,   428,   433,
     427,    -1,   375,   426,   427,    -1,   314,   426,   433,    51,
     623,   427,    -1,   315,   426,   433,   428,   623,   427,    -1,
     316,   426,   433,   428,   433,   427,    -1,   317,   426,   433,
     428,   433,   427,    -1,   318,   426,   433,   428,   433,   428,
     433,   427,    -1,   433,    15,   319,    -1,   330,   426,   433,
     428,   433,   428,   433,   427,    -1,   330,   426,   433,   428,
     433,   428,   433,   428,   433,   427,    -1,   333,   426,   427,
      -1,   334,   426,   427,    -1,   335,   426,   427,    -1,   336,
     426,   427,    -1,   337,   426,   427,    -1,   338,    -1,   339,
      -1,   340,   426,   433,   427,    -1,   341,   426,   433,   428,
     433,   427,    -1,   178,    -1,   254,    -1,    65,    -1,   284,
     426,   433,   428,   469,   427,    -1,   285,   426,   433,   428,
     469,   427,    -1,   161,   433,   278,    -1,   161,   433,   104,
      -1,   161,   433,   105,    -1,   161,   433,   109,    -1,   161,
     433,   111,    -1,   161,   433,   279,    -1,   161,   433,   145,
      -1,   161,   433,   144,    -1,   161,   433,   147,    -1,    77,
     433,   470,   124,    -1,    77,   433,   470,   125,   433,   124,
      -1,    77,   470,   124,    -1,    77,   470,   125,   433,   124,
      -1,   275,   433,   253,   433,    -1,   470,   275,   433,   253,
     433,    -1,   433,    14,   433,    -1,   433,    18,    14,   433,
      -1,   433,    13,   433,    -1,   433,    18,    13,   433,    -1,
      72,    -1,    80,    -1,    81,    -1,   225,    -1,   472,    -1,
     241,   491,   492,    -1,   241,   491,   492,   136,   495,   487,
     473,   474,   478,   483,   486,   488,   489,    -1,   241,   491,
     492,   159,     3,   136,   495,   473,   474,   478,   483,   486,
      -1,    -1,   274,   433,    -1,    -1,   141,    63,   475,   477,
      -1,   433,   476,    -1,   475,   428,   433,   476,    -1,    -1,
      49,    -1,   112,    -1,    -1,   277,   214,    -1,    -1,   148,
     433,    -1,    -1,   351,    63,   480,    -1,     3,    -1,   480,
     428,     3,    -1,    -1,   198,    63,   482,    -1,     3,   476,
      -1,   482,   428,     3,   476,    -1,    -1,   198,    63,   484,
      -1,   485,    -1,   484,   428,   485,    -1,     3,   476,    -1,
       3,   425,     3,   476,    -1,     5,   476,    -1,    -1,   179,
     433,    -1,   179,   433,   428,   433,    -1,   179,   433,   181,
     433,    -1,    -1,   140,   412,    51,    94,   413,     5,    -1,
      -1,   140,   258,    -1,   140,   230,    -1,   140,   258,   231,
     180,    -1,   140,   230,   231,   180,    -1,    -1,   159,   490,
      -1,     3,    -1,   490,   428,     3,    -1,    -1,   491,    40,
      -1,   491,   106,    -1,   491,   110,    -1,   491,   146,    -1,
     491,   238,    -1,   491,   226,    -1,   491,   234,    -1,   491,
     233,    -1,   493,    -1,   492,   428,   493,    -1,    28,    -1,
     433,   494,    -1,    51,     3,    -1,     3,    -1,    -1,   496,
      -1,   495,   428,   496,    -1,   497,    -1,   501,    -1,     3,
     494,   508,    -1,   173,     3,   494,   508,    -1,     3,   425,
       3,   494,   508,    -1,   511,   500,     3,    -1,   498,   500,
       3,    -1,   381,   426,   433,   427,    -1,   381,   426,   433,
     427,   500,     3,    -1,   381,   426,   433,   427,   500,     3,
     426,     3,   427,    -1,   426,   495,   427,    -1,    -1,   167,
     426,   499,   472,   427,    -1,    51,    -1,    -1,   496,   502,
     163,   497,   506,    -1,   496,   238,   497,    -1,   496,   238,
     497,   197,   433,    -1,   496,   504,   503,   163,   497,   507,
      -1,   496,   190,   505,   163,   497,    -1,    -1,   153,    -1,
      76,    -1,    -1,   196,    -1,   177,    -1,   215,    -1,   177,
     503,    -1,   215,   503,    -1,    -1,    -1,   507,    -1,   197,
     433,    -1,   266,   426,   490,   427,    -1,   267,   164,   509,
     426,   510,   427,    -1,   154,   164,   509,   426,   510,   427,
      -1,   133,   164,   509,   426,   510,   427,    -1,    -1,   140,
     163,    -1,    -1,     3,    -1,   510,   428,     3,    -1,   426,
     472,   427,    -1,   512,    -1,   107,   513,   136,     3,   473,
     483,   486,   649,    -1,   513,   176,    -1,   513,   203,    -1,
     513,   154,    -1,    -1,   107,   513,   514,   136,   495,   473,
      -1,     3,   515,    -1,   514,   428,     3,   515,    -1,    -1,
     425,    28,    -1,   107,   513,   136,   514,   266,   495,   473,
      -1,   516,    -1,   108,   252,     3,   517,    -1,   108,   252,
     156,   281,     3,   517,    -1,    -1,    74,    -1,   210,    -1,
     518,    -1,    73,   155,     3,   197,     3,   426,   523,   427,
      -1,    73,   138,   155,     3,   197,     3,   426,   523,   427,
      -1,    73,   155,   156,   281,     3,   197,     3,   426,   523,
     427,    -1,    73,   261,   155,     3,   197,     3,   426,   523,
     427,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     426,   523,   427,    -1,    73,   155,     3,   197,     3,   266,
     268,   426,   523,   427,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   268,   426,   523,   427,    -1,    73,   261,
     155,     3,   197,     3,   266,   268,   426,   523,   427,    -1,
      73,   261,   155,   156,   281,     3,   197,     3,   266,   268,
     426,   523,   427,    -1,    73,   155,    85,     3,   197,     3,
     426,   523,   427,    -1,    73,   155,    85,   156,   281,     3,
     197,     3,   426,   523,   427,    -1,    73,   261,   155,    85,
       3,   197,     3,   426,   523,   427,    -1,    73,   261,   155,
      85,   156,   281,     3,   197,     3,   426,   523,   427,    -1,
      73,   155,    85,     3,   197,     3,   266,   268,   426,   523,
     427,    -1,    73,   261,   155,    85,     3,   197,     3,   266,
     268,   426,   523,   427,    -1,    73,   155,     3,   197,     3,
     266,   391,   426,     3,   519,   427,   520,    -1,    73,   155,
     156,   281,     3,   197,     3,   266,   391,   426,     3,   519,
     427,   520,    -1,    -1,     3,    -1,    -1,   277,   426,   521,
     427,    -1,   522,    -1,   521,   428,   522,    -1,     3,    20,
       5,    -1,     3,    -1,   523,   428,     3,    -1,   524,    -1,
     327,   426,     3,   427,    -1,   328,   426,     3,   427,    -1,
     329,   426,     3,   427,    -1,   330,   426,     3,   428,     3,
     427,    -1,   525,    -1,   108,   155,     3,    -1,   526,   528,
      -1,   255,   252,     3,    -1,   255,   252,     3,   428,   527,
      -1,     3,    -1,   527,   428,     3,    -1,    -1,   528,    74,
      -1,   528,   210,    -1,   528,    55,    53,    -1,   528,    54,
      53,    -1,   548,    -1,   549,    -1,   550,    -1,   529,    -1,
     531,    -1,    73,   395,   396,     3,   530,    -1,    73,   395,
     396,   156,   281,     3,   530,    -1,    -1,   277,   426,   397,
      20,     4,   427,    -1,   108,   395,   396,     3,    -1,   108,
     395,   396,     3,    74,    -1,   108,   395,   396,   156,   281,
       3,    -1,   532,    -1,   534,    -1,   535,    -1,   395,   398,
     159,     3,   271,   426,   533,   428,   533,   428,   533,   428,
     533,   428,   533,   428,   533,   428,   533,   427,    -1,   395,
     398,   401,   159,     3,   271,   426,   533,   428,   533,   428,
     533,   428,   533,   428,   533,   428,   533,   428,   533,   427,
      -1,     4,    -1,   193,    -1,   395,   399,   136,     3,   402,
       4,    -1,   395,   399,   136,     3,   402,     4,   403,     4,
      -1,   395,   400,   136,     3,   402,     4,    -1,   395,   400,
     136,     3,   402,     4,   179,     5,    -1,   536,    -1,   541,
      -1,   542,    -1,   544,    -1,   545,    -1,   546,    -1,   547,
      -1,    73,   404,   396,     3,   537,   538,    -1,    73,   404,
     396,   156,   281,     3,   537,   538,    -1,    -1,    -1,   277,
     426,   539,   427,    -1,   540,    -1,   539,   428,   540,    -1,
     405,    20,     5,    -1,   406,    20,     4,    -1,   108,   404,
     396,     3,    -1,   108,   404,   396,     3,    74,    -1,   108,
     404,   396,   156,   281,     3,    -1,   404,   398,   159,     3,
     271,   426,   543,   428,   543,   428,   543,   427,    -1,   404,
     398,   159,     3,   271,   426,   543,   428,   543,   428,   543,
     428,   543,   427,    -1,     4,    -1,   193,    -1,   404,   399,
     136,     3,   274,   411,    20,     4,    12,   164,    20,     4,
      -1,   404,   407,     3,   266,   273,     4,    -1,   404,   407,
       3,   266,   273,     4,   179,     5,    -1,   404,   107,   136,
       3,   274,   411,    20,     4,    12,   164,    20,     4,    -1,
     404,   400,   409,    16,     3,    -1,   404,   400,   409,    16,
       3,   410,     4,    -1,   168,     3,    -1,   168,     3,   171,
      -1,   170,     3,    -1,   170,    28,    -1,   169,     3,    -1,
     169,     3,   428,     4,    -1,   551,    -1,   552,    -1,   553,
      -1,   554,    -1,    73,   417,     3,   140,   418,     3,    -1,
      73,   417,   156,   281,     3,   140,   418,     3,    -1,   108,
     417,     3,    -1,   108,   417,   156,   281,     3,    -1,   419,
     417,     3,    -1,   420,   417,     3,   421,     5,    -1,   555,
      -1,   206,   252,     3,    -1,   556,    -1,   558,     3,   557,
     559,    -1,   558,     3,   425,     3,   557,   559,    -1,    -1,
     277,    44,     5,    45,    -1,   277,    44,     5,    46,    -1,
      41,   252,    -1,    -1,   258,    42,   197,   560,    -1,   258,
      42,   197,   560,   277,     5,    43,    -1,   108,    42,   197,
     560,    -1,     3,    -1,   560,   428,     3,    -1,   569,    -1,
     561,    -1,   568,    -1,    73,   221,     3,   197,     3,   562,
     563,   564,   566,   567,    -1,    73,   221,     3,   197,   404,
     396,     3,   562,   563,   564,   566,   567,    -1,    -1,    51,
     223,    -1,    51,   224,    -1,    -1,   140,    40,    -1,   140,
     241,    -1,   140,   157,    -1,   140,   258,    -1,   140,   107,
      -1,    -1,   245,   565,    -1,     3,    -1,   565,   428,     3,
      -1,    -1,   266,   426,   433,   427,    -1,    -1,   277,    78,
     426,   433,   427,    -1,   108,   221,     3,   197,     3,    -1,
     108,   221,     3,   197,   404,   396,     3,    -1,    37,   252,
       3,    38,    71,     3,    78,   426,   433,   427,    -1,    37,
     252,     3,    38,    71,     3,   261,   426,   616,   427,    -1,
      37,   252,     3,    38,    71,     3,   134,   164,   426,   613,
     427,   207,     3,   426,   614,   427,   615,    -1,    37,   252,
       3,    38,    71,     3,    78,   426,   433,   427,    18,   269,
      -1,    37,   252,     3,    38,    71,     3,   134,   164,   426,
     613,   427,   207,     3,   426,   614,   427,   615,    18,   269,
      -1,    37,   252,     3,    38,    71,     3,   201,   164,   426,
     612,   427,    -1,    37,   252,     3,   108,    71,     3,    -1,
      37,   252,     3,   208,    71,     3,   245,     3,    -1,    37,
     252,     3,   120,    71,     3,    -1,    37,   252,     3,   100,
      71,     3,    -1,    37,   252,     3,   269,    71,     3,    -1,
      37,   252,     3,    38,    84,     3,   623,   618,   570,    -1,
      37,   252,     3,   108,    84,     3,    -1,    37,   252,     3,
     108,     3,    -1,    37,   252,     3,   208,    84,     3,   245,
       3,    -1,    37,   252,     3,   208,     3,   245,     3,    -1,
      37,   252,     3,   187,    84,     3,   623,   618,   570,    -1,
      37,   252,     3,   187,     3,   623,   618,   570,    -1,    37,
     252,     3,    75,    84,     3,     3,   623,   618,   570,    -1,
      37,   252,     3,    75,     3,     3,   623,   618,   570,    -1,
      37,   252,     3,   120,   217,     3,   222,    -1,    37,   252,
       3,   100,   217,     3,   222,    -1,    37,   404,   396,     3,
     120,   217,     3,   222,    -1,    37,   404,   396,     3,   100,
     217,     3,   222,    -1,    37,   252,     3,   240,   423,    20,
       4,    -1,    37,   252,     3,   108,   422,    -1,    -1,   130,
      -1,    39,     3,    -1,   571,    -1,   157,   579,   580,     3,
     581,   271,   583,   572,   574,   649,    -1,   157,   579,   580,
       3,   581,   472,    -1,    -1,    -1,   199,   164,   258,   573,
     578,    -1,    -1,   197,    88,   575,   576,    -1,    -1,   426,
       3,   427,    -1,   426,     3,   428,     3,    -1,   101,    90,
      -1,    -1,   101,   258,   577,   240,   578,    -1,     3,    20,
     433,    -1,   578,   428,     3,    20,   433,    -1,    -1,   579,
     176,    -1,   579,   103,    -1,   579,   146,    -1,   579,   154,
      -1,   159,    -1,    -1,    -1,   426,   582,   427,    -1,     3,
      -1,   582,   428,     3,    -1,   426,   585,   427,    -1,    -1,
     583,   428,   584,   426,   585,   427,    -1,   433,    -1,   113,
      -1,   585,   428,   433,    -1,   585,   428,   113,    -1,   157,
     579,   580,     3,   240,   586,   572,    -1,     3,    20,   433,
      -1,     3,    20,   113,    -1,   586,   428,     3,    20,   433,
      -1,   586,   428,     3,    20,   113,    -1,   587,    -1,   216,
     579,   580,     3,   581,   271,   583,   572,    -1,   216,   579,
     580,     3,   240,   586,   572,    -1,   216,   579,   580,     3,
     581,   472,   572,    -1,   588,    -1,    -1,    86,     3,   589,
     590,   592,   593,   594,    -1,    -1,   426,   591,   427,    -1,
       3,    -1,   591,   428,     3,    -1,   136,    -1,   245,    -1,
       4,    -1,   236,    -1,   237,    -1,    -1,   595,    -1,   277,
     426,   595,   427,    -1,   426,   595,   427,    -1,   596,    -1,
     595,   428,   596,    -1,   135,    87,    -1,   135,   249,    -1,
      99,     4,    -1,   143,    -1,   143,     6,    -1,   193,     4,
      -1,   242,     4,    -1,    87,    -1,   597,    -1,   258,   598,
     495,   240,   599,   473,   483,   486,   649,    -1,    -1,   579,
     176,    -1,   579,   154,    -1,     3,    20,   433,    -1,     3,
     425,     3,    20,   433,    -1,   599,   428,     3,    20,   433,
      -1,   599,   428,     3,   425,     3,    20,   433,    -1,   208,
     252,     3,   245,     3,    -1,   600,    -1,    73,    95,   601,
       3,    -1,    73,   227,   601,     3,    -1,   108,    95,     3,
      -1,   108,    95,   156,   281,     3,    -1,   108,   227,     3,
      -1,   108,   227,   156,   281,     3,    -1,    -1,   156,   281,
      -1,   602,    -1,    73,   102,     3,    51,   623,    -1,    73,
     102,     3,    51,   623,   113,   433,    -1,    73,   102,     3,
      51,   623,    18,   193,    -1,    73,   102,     3,    51,   623,
      78,   426,   433,   427,    -1,    73,   102,     3,    51,   623,
      18,   193,    78,   426,   433,   427,    -1,   603,    -1,   267,
       3,    -1,   267,    95,     3,    -1,   604,    -1,    73,   609,
     252,   601,     3,   426,   610,   427,   606,   605,    -1,    -1,
     172,   426,     3,   427,    -1,    73,   609,   252,   601,     3,
     425,     3,   426,   610,   427,   606,    -1,    73,   609,   252,
     601,     3,   351,    94,     3,   140,   271,   136,   426,     5,
     427,   245,   426,     5,   427,    -1,    -1,   606,    48,    20,
       5,    -1,   606,    48,     5,    -1,   606,   197,     3,   107,
       3,    -1,   606,   197,     3,   248,     3,    -1,   606,   228,
      63,   268,   426,     3,   427,   229,     5,    -1,   606,   228,
      63,   204,   426,     3,   427,   426,   607,   427,    -1,   606,
     351,    63,   204,   426,     3,   427,    -1,   606,   277,   415,
     416,    -1,   606,   277,   426,   423,    20,     4,   427,    -1,
     608,    -1,   607,   428,   608,    -1,   228,     3,   271,   174,
     250,     4,   197,   191,     5,    -1,   228,     3,   271,   174,
     250,   184,   197,   191,     5,    -1,    73,   609,   252,   601,
       3,   426,   610,   427,   625,    -1,    73,   609,   252,   601,
       3,   625,    -1,    73,   609,   252,   601,     3,   425,     3,
     426,   610,   427,   625,    -1,    73,   609,   252,   601,     3,
     425,     3,   625,    -1,    -1,   246,    -1,   247,   246,    -1,
     611,    -1,   610,   428,   611,    -1,   201,   164,   426,   612,
     427,    -1,    71,     3,   201,   164,   426,   612,   427,    -1,
     164,   426,   490,   427,    -1,   155,   426,   490,   427,    -1,
     138,   155,   426,   490,   427,    -1,   138,   164,   426,   490,
     427,    -1,    78,   426,   433,   427,    -1,    71,     3,    78,
     426,   433,   427,    -1,   134,   164,   426,   613,   427,   207,
       3,   426,   614,   427,   615,    -1,   134,   164,   426,   613,
     427,   207,     3,   425,     3,   426,   614,   427,   615,    -1,
      71,     3,   134,   164,   426,   613,   427,   207,     3,   426,
     614,   427,   615,    -1,    71,     3,   134,   164,   426,   613,
     427,   207,     3,   425,     3,   426,   614,   427,   615,    -1,
     261,   426,   616,   427,    -1,    71,     3,   261,   426,   616,
     427,    -1,     3,    -1,   612,   428,     3,    -1,     3,    -1,
     613,   428,     3,    -1,     3,    -1,   614,   428,     3,    -1,
      -1,   615,   197,   107,    74,    -1,   615,   197,   107,   240,
     193,    -1,   615,   197,   107,   210,    -1,   615,   197,   107,
     240,   113,    -1,   615,   197,   258,    74,    -1,   615,   197,
     258,   240,   193,    -1,   615,   197,   258,   210,    -1,   615,
     197,   258,   240,   113,    -1,   615,   197,   107,   192,    -1,
     615,   197,   258,   192,    -1,   615,   183,   137,    -1,   615,
     183,   235,    -1,   615,   183,   200,    -1,   615,    97,    -1,
     615,    18,    97,    -1,   615,    97,   151,    98,    -1,   615,
      97,   151,   149,    -1,     3,    -1,   616,   428,     3,    -1,
      -1,   617,     3,   623,   618,    -1,    -1,   618,    18,   193,
      -1,   618,   193,    -1,   618,   113,     4,    -1,   618,   113,
       5,    -1,   618,   113,     7,    -1,   618,   113,     6,    -1,
     618,   113,   333,   426,   427,    -1,   618,   113,   334,   426,
     427,    -1,   618,   113,   335,   426,   427,    -1,   618,   113,
      72,    -1,   618,   113,   426,   433,   427,    -1,   618,    48,
      -1,   618,    48,   426,     5,   428,     5,   427,    -1,   618,
      48,   426,     5,   427,    -1,   618,    53,   426,     5,   428,
       5,   427,    -1,   618,    53,   426,     5,   427,    -1,   618,
      53,    -1,   618,   261,   164,    -1,   618,   261,    -1,   618,
     201,   164,    -1,   618,   164,    -1,   618,    79,     4,    -1,
     618,    78,   426,   433,   427,    -1,   618,    71,     3,   261,
      -1,   618,    71,     3,   201,   164,    -1,   618,    71,     3,
      78,   426,   433,   427,    -1,   618,    56,    52,    51,   426,
     433,   427,    57,    -1,   618,    56,    52,    51,   426,   433,
     427,    58,    -1,   618,    56,    52,    51,   426,   433,   427,
      -1,   618,    51,   426,   433,   427,    57,    -1,   618,    51,
     426,   433,   427,    58,    -1,   618,    51,   426,   433,   427,
      -1,    -1,   426,     5,   427,    -1,   426,     5,   428,     5,
     427,    -1,    -1,    64,    -1,    -1,   621,   259,    -1,   621,
     280,    -1,    -1,   622,    82,   240,     4,    -1,   622,    83,
       4,    -1,    67,   619,    -1,   244,   619,   621,    -1,   239,
     619,   621,    -1,   189,   619,   621,    -1,   160,   619,   621,
      -1,   152,   619,   621,    -1,    66,   619,   621,    -1,   205,
     619,   621,    -1,   114,   619,   621,    -1,   132,   619,   621,
      -1,   116,   619,   621,    -1,   117,    -1,   257,    -1,   251,
      -1,   115,    -1,   278,    -1,    82,   619,   622,    -1,   270,
     426,     5,   427,   622,    -1,    64,   619,    -1,   272,   426,
       5,   427,    -1,   256,    -1,    61,    -1,   188,    -1,   182,
      -1,   243,   620,   622,    -1,   249,   620,   622,    -1,   185,
     620,   622,    -1,   175,   620,   622,    -1,   123,   426,   624,
     427,   622,    -1,   240,   426,   624,   427,   622,    -1,    62,
      -1,   262,    -1,   264,    -1,   273,   426,     5,   427,    -1,
     623,    36,   429,    -1,     4,    -1,   624,   428,     4,    -1,
     626,   500,   472,    -1,    -1,   154,    -1,   216,    -1,   627,
      -1,   240,   227,     3,    -1,   240,   227,   113,    -1,   240,
     628,    -1,   629,    -1,   628,   428,   629,    -1,     8,    20,
     433,    -1,     8,     9,   433,    -1,   630,    -1,    73,   202,
       3,   426,   631,   427,    51,    60,   635,   124,    -1,    73,
     202,     3,   426,   631,   427,    60,   635,   124,    -1,    73,
      10,   216,   202,     3,   426,   631,   427,    51,    60,   635,
     124,    -1,    73,    10,   216,   202,     3,   426,   631,   427,
      60,   635,   124,    -1,    73,   139,     3,   426,   631,   427,
     213,   634,    51,    60,   635,   124,    -1,    73,   139,     3,
     426,   631,   427,   213,   634,    60,   635,   124,    -1,    73,
      10,   216,   139,     3,   426,   631,   427,   213,   634,    51,
      60,   635,   124,    -1,    73,    10,   216,   139,     3,   426,
     631,   427,   213,   634,    60,   635,   124,    -1,    -1,   632,
      -1,   633,    -1,   632,   428,   633,    -1,     3,   623,    -1,
      16,     3,   623,    -1,   195,     3,   623,    -1,   150,     3,
     623,    -1,   152,    -1,   160,    -1,   270,    -1,   249,    -1,
      62,    -1,   132,    -1,   114,    -1,    66,    -1,   117,    -1,
     251,    -1,    -1,   635,   636,    -1,   635,    60,   635,   124,
      -1,   635,   156,   635,   124,   156,    -1,   635,   276,   635,
     124,   276,    -1,   635,   166,   635,   124,   166,    -1,   635,
     131,   635,   124,   131,    -1,   635,    77,   635,   124,    77,
      -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,
      -1,    20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,
      -1,    50,    -1,   241,    -1,   157,    -1,   258,    -1,   107,
      -1,   136,    -1,   274,    -1,   240,    -1,   159,    -1,   271,
      -1,    73,    -1,   108,    -1,   252,    -1,   155,    -1,   253,
      -1,   125,    -1,   119,    -1,    96,    -1,   101,    -1,    68,
      -1,   211,    -1,   165,    -1,   162,    -1,    70,    -1,   194,
      -1,   129,    -1,    69,    -1,   142,    -1,   127,    -1,   195,
      -1,   150,    -1,   140,    -1,    54,    -1,   218,    -1,   209,
      -1,   126,    -1,   220,    -1,    59,    -1,   118,    -1,   217,
      -1,   219,    -1,    51,    -1,   197,    -1,   198,    -1,    63,
      -1,   141,    -1,   148,    -1,   179,    -1,   181,    -1,   163,
      -1,   177,    -1,   215,    -1,   153,    -1,   196,    -1,   137,
      -1,    76,    -1,   190,    -1,   266,    -1,   193,    -1,   113,
      -1,   201,    -1,   164,    -1,   261,    -1,    78,    -1,   134,
      -1,   207,    -1,    74,    -1,   210,    -1,   192,    -1,   152,
      -1,   160,    -1,   270,    -1,   249,    -1,    62,    -1,   132,
      -1,   114,    -1,    66,    -1,   117,    -1,   251,    -1,   239,
      -1,   116,    -1,    82,    -1,   262,    -1,    61,    -1,   260,
      -1,   122,    -1,   158,    -1,    40,    -1,   106,    -1,   281,
      -1,   275,    -1,   277,    -1,   202,    -1,   139,    -1,   213,
      -1,   426,    -1,   427,    -1,   428,    -1,   424,    -1,   425,
      -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,
      -1,    17,    -1,   430,    -1,   322,    -1,   323,    -1,   324,
      -1,   325,    -1,   326,    -1,     8,    -1,   637,    -1,   108,
     202,     3,    -1,   108,   202,   156,   281,     3,    -1,   108,
     139,     3,    -1,   108,   139,   156,   281,     3,    -1,   638,
      -1,    68,     3,   426,   427,    -1,    68,     3,   426,   639,
     427,    -1,   640,    -1,   639,   428,   640,    -1,     5,    -1,
       4,    -1,     7,    -1,   193,    -1,     6,    -1,     3,    -1,
       8,    -1,   641,    -1,    73,   219,     3,   642,   643,   197,
       3,   140,   118,   217,    60,   635,   124,    -1,    73,   219,
       3,   642,   643,   197,   404,   396,     3,   140,   118,   217,
      60,   635,   124,    -1,    59,    -1,    39,    -1,   157,    -1,
     258,    -1,   107,    -1,   398,    -1,   644,    -1,   108,   219,
       3,    -1,   108,   219,   156,   281,     3,    -1,    37,   219,
       3,   120,    -1,    37,   219,     3,   100,    -1,   645,    -1,
      73,   371,   601,     3,   646,    -1,    -1,   646,   647,    -1,
     376,   277,     5,    -1,   376,     5,    -1,   377,    63,     5,
      -1,   377,     5,    -1,   378,     5,    -1,   184,     5,    -1,
     379,    -1,    18,   379,    -1,   648,    -1,   108,   371,     3,
      -1,   108,   371,   156,   281,     3,    -1,    37,   371,     3,
     646,    -1,    37,   371,     3,    55,    -1,    37,   371,     3,
      55,   277,     5,    -1,    37,   371,     3,   208,   245,     3,
      -1,    -1,   212,    28,    -1,   212,   650,    -1,     3,    -1,
     650,   428,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   508,   508,   509,   514,   521,   522,   523,   537,   538,
     566,   574,   582,   588,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   621,   621,   630,   630,   632,   632,
     634,   634,   639,   641,   645,   646,   647,   648,   649,   652,
     653,   656,   665,   683,   692,   712,   712,   772,   781,   788,
     792,   794,   796,   801,   806,   811,   819,   821,   823,   825,
     827,   829,   831,   833,   835,   837,   844,   855,   866,   867,
     870,   870,   871,   871,   872,   872,   880,   880,   888,   888,
     899,   903,   904,   905,   906,   907,   908,   909,   910,   914,
     914,   916,   916,   918,   918,   921,   921,   923,   923,   925,
     925,   927,   927,   929,   929,   931,   931,   934,   934,   936,
     936,   938,   938,   940,   940,   942,   942,   944,   944,   946,
     946,   948,   948,   951,   951,   953,   953,   955,   955,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1026,  1027,  1028,  1029,  1030,  1032,  1033,
    1035,  1036,  1037,  1039,  1040,  1041,  1042,  1049,  1056,  1063,
    1067,  1071,  1075,  1079,  1083,  1089,  1090,  1091,  1094,  1100,
    1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1118,
    1120,  1122,  1124,  1128,  1136,  1147,  1148,  1151,  1152,  1155,
    1163,  1171,  1179,  1193,  1203,  1204,  1218,  1234,  1235,  1236,
    1237,  1240,  1247,  1255,  1256,  1257,  1260,  1261,  1264,  1265,
    1269,  1270,  1273,  1275,  1279,  1280,  1283,  1285,  1289,  1290,
    1293,  1294,  1297,  1303,  1310,  1319,  1320,  1321,  1322,  1332,
    1333,  1337,  1338,  1339,  1340,  1341,  1344,  1345,  1348,  1349,
    1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,  1363,
    1364,  1365,  1373,  1379,  1380,  1381,  1384,  1385,  1388,  1389,
    1393,  1401,  1411,  1412,  1413,  1422,  1427,  1433,  1441,  1445,
    1445,  1485,  1486,  1490,  1492,  1494,  1496,  1498,  1502,  1503,
    1504,  1507,  1508,  1511,  1512,  1515,  1516,  1517,  1520,  1521,
    1524,  1525,  1529,  1531,  1533,  1535,  1538,  1539,  1542,  1543,
    1546,  1550,  1560,  1568,  1569,  1570,  1571,  1575,  1579,  1581,
    1585,  1585,  1587,  1592,  1599,  1606,  1618,  1619,  1620,  1624,
    1631,  1638,  1646,  1656,  1664,  1674,  1682,  1691,  1700,  1710,
    1718,  1727,  1736,  1746,  1755,  1772,  1780,  1792,  1793,  1807,
    1808,  1811,  1812,  1824,  1834,  1839,  1844,  1850,  1857,  1864,
    1871,  1881,  1888,  1897,  1904,  1910,  1918,  1924,  1932,  1933,
    1934,  1935,  1936,  1952,  1953,  1954,  1963,  1964,  1968,  1978,
    1994,  1995,  1999,  2007,  2016,  2039,  2040,  2041,  2045,  2062,
    2084,  2085,  2090,  2099,  2113,  2122,  2148,  2149,  2150,  2151,
    2152,  2153,  2154,  2158,  2165,  2177,  2180,  2181,  2185,  2186,
    2190,  2192,  2197,  2205,  2214,  2226,  2238,  2253,  2254,  2259,
    2273,  2283,  2297,  2311,  2319,  2330,  2336,  2347,  2353,  2360,
    2366,  2388,  2389,  2390,  2391,  2395,  2404,  2421,  2429,  2440,
    2451,  2463,  2470,  2479,  2487,  2493,  2508,  2510,  2514,  2523,
    2536,  2538,  2542,  2547,  2554,  2559,  2567,  2571,  2572,  2576,
    2588,  2599,  2600,  2601,  2605,  2606,  2607,  2608,  2609,  2610,
    2613,  2615,  2619,  2620,  2623,  2625,  2628,  2630,  2634,  2641,
    2650,  2656,  2662,  2669,  2675,  2682,  2688,  2694,  2700,  2706,
    2712,  2718,  2724,  2730,  2736,  2742,  2748,  2754,  2760,  2766,
    2772,  2785,  2795,  2805,  2815,  2821,  2829,  2830,  2831,  2834,
    2842,  2848,  2861,  2862,  2862,  2866,  2867,  2870,  2871,  2872,
    2876,  2877,  2877,  2881,  2889,  2899,  2900,  2901,  2902,  2903,
    2906,  2906,  2909,  2910,  2913,  2923,  2936,  2937,  2937,  2940,
    2941,  2942,  2943,  2946,  2950,  2951,  2952,  2953,  2959,  2962,
    2968,  2973,  2979,  2983,  2983,  2988,  2989,  2991,  2992,  2996,
    2997,  3001,  3002,  3003,  3006,  3007,  3008,  3009,  3013,  3014,
    3018,  3019,  3020,  3021,  3022,  3023,  3024,  3025,  3029,  3037,
    3046,  3047,  3048,  3052,  3063,  3075,  3086,  3101,  3106,  3110,
    3111,  3115,  3117,  3119,  3121,  3125,  3126,  3132,  3136,  3138,
    3140,  3142,  3144,  3149,  3153,  3154,  3158,  3167,  3180,  3181,
    3189,  3197,  3205,  3206,  3207,  3208,  3209,  3210,  3212,  3214,
    3219,  3224,  3228,  3229,  3232,  3247,  3254,  3269,  3282,  3297,
    3310,  3311,  3312,  3315,  3316,  3319,  3320,  3321,  3322,  3323,
    3324,  3325,  3326,  3327,  3329,  3331,  3333,  3335,  3337,  3341,
    3342,  3345,  3346,  3349,  3350,  3353,  3354,  3355,  3356,  3357,
    3358,  3359,  3360,  3361,  3362,  3363,  3364,  3365,  3366,  3367,
    3368,  3369,  3370,  3373,  3374,  3377,  3377,  3387,  3388,  3389,
    3390,  3391,  3392,  3393,  3394,  3395,  3396,  3397,  3398,  3405,
    3406,  3407,  3408,  3409,  3410,  3411,  3412,  3413,  3414,  3415,
    3416,  3417,  3418,  3419,  3420,  3421,  3422,  3423,  3424,  3425,
    3428,  3429,  3430,  3433,  3434,  3437,  3438,  3439,  3442,  3443,
    3444,  3448,  3449,  3450,  3451,  3452,  3453,  3454,  3455,  3456,
    3457,  3458,  3459,  3460,  3461,  3462,  3463,  3464,  3465,  3466,
    3467,  3468,  3469,  3470,  3471,  3472,  3473,  3474,  3475,  3476,
    3477,  3478,  3479,  3480,  3481,  3482,  3485,  3486,  3489,  3502,
    3503,  3504,  3508,  3511,  3512,  3513,  3514,  3514,  3516,  3517,
    3525,  3529,  3535,  3541,  3548,  3555,  3561,  3567,  3574,  3583,
    3584,  3587,  3588,  3591,  3592,  3593,  3594,  3597,  3598,  3599,
    3600,  3601,  3602,  3603,  3604,  3605,  3606,  3613,  3614,  3615,
    3616,  3617,  3618,  3619,  3620,  3623,  3624,  3625,  3625,  3625,
    3626,  3626,  3626,  3626,  3626,  3626,  3627,  3627,  3627,  3627,
    3627,  3627,  3627,  3627,  3627,  3628,  3628,  3628,  3628,  3628,
    3628,  3628,  3629,  3629,  3629,  3629,  3630,  3630,  3630,  3630,
    3630,  3630,  3630,  3630,  3630,  3630,  3630,  3630,  3631,  3631,
    3631,  3631,  3631,  3631,  3631,  3631,  3632,  3632,  3632,  3632,
    3632,  3632,  3632,  3632,  3633,  3633,  3633,  3633,  3633,  3633,
    3633,  3633,  3633,  3634,  3634,  3634,  3634,  3634,  3634,  3634,
    3634,  3635,  3635,  3635,  3636,  3636,  3636,  3636,  3636,  3636,
    3636,  3636,  3637,  3637,  3637,  3637,  3637,  3637,  3637,  3638,
    3638,  3638,  3638,  3638,  3638,  3638,  3639,  3639,  3639,  3639,
    3640,  3640,  3640,  3640,  3640,  3640,  3640,  3640,  3640,  3640,
    3640,  3640,  3641,  3641,  3641,  3641,  3641,  3642,  3649,  3653,
    3659,  3665,  3671,  3683,  3687,  3693,  3701,  3702,  3705,  3706,
    3707,  3708,  3709,  3710,  3711,  3718,  3722,  3728,  3744,  3745,
    3748,  3749,  3750,  3751,  3754,  3758,  3764,  3773,  3781,  3792,
    3796,  3805,  3806,  3810,  3811,  3812,  3813,  3814,  3815,  3816,
    3817,  3820,  3824,  3830,  3840,  3847,  3854,  3862,  3872,  3873,
    3874,  3877,  3878
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
  "';'", "'.'", "'('", "')'", "','", "']'", "'='", "$accept", "stmt_list",
  "expr", "@1", "@2", "@3", "@4", "val_list", "array_val_list", "@5",
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
     665,   666,   667,   668,    59,    46,    40,    41,    44,    93,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   431,   432,   432,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   434,   433,   435,   433,   436,   433,
     437,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   438,   438,   439,   439,   440,   433,   433,   433,   441,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   442,   442,
     443,   433,   444,   433,   445,   433,   446,   433,   447,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   448,
     433,   449,   433,   450,   433,   451,   433,   452,   433,   453,
     433,   454,   433,   455,   433,   456,   433,   457,   433,   458,
     433,   459,   433,   460,   433,   461,   433,   462,   433,   463,
     433,   464,   433,   465,   433,   466,   433,   467,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   468,   468,   468,   433,   433,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   433,
     433,   433,   433,   470,   470,   433,   433,   433,   433,   433,
     433,   433,   433,   471,   472,   472,   472,   473,   473,   474,
     474,   475,   475,   476,   476,   476,   477,   477,   478,   478,
     479,   479,   480,   480,   481,   481,   482,   482,   483,   483,
     484,   484,   485,   485,   485,   486,   486,   486,   486,   487,
     487,   488,   488,   488,   488,   488,   489,   489,   490,   490,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   492,
     492,   492,   493,   494,   494,   494,   495,   495,   496,   496,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   499,
     498,   500,   500,   501,   501,   501,   501,   501,   502,   502,
     502,   503,   503,   504,   504,   505,   505,   505,   506,   506,
     507,   507,   508,   508,   508,   508,   509,   509,   510,   510,
     511,   471,   512,   513,   513,   513,   513,   512,   514,   514,
     515,   515,   512,   471,   516,   516,   517,   517,   517,   471,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   519,   519,   520,
     520,   521,   521,   522,   523,   523,   523,   524,   524,   524,
     524,   471,   525,   471,   526,   526,   527,   527,   528,   528,
     528,   528,   528,   471,   471,   471,   471,   471,   529,   529,
     530,   530,   531,   531,   531,   471,   471,   471,   532,   532,
     533,   533,   534,   534,   535,   535,   471,   471,   471,   471,
     471,   471,   471,   536,   536,   537,   538,   538,   539,   539,
     540,   540,   541,   541,   541,   542,   542,   543,   543,   544,
     545,   545,   546,   547,   547,   548,   548,   549,   549,   550,
     550,   471,   471,   471,   471,   551,   551,   552,   552,   553,
     554,   471,   555,   471,   556,   556,   557,   557,   557,   558,
     559,   559,   559,   559,   560,   560,   471,   471,   471,   561,
     561,   562,   562,   562,   563,   563,   563,   563,   563,   563,
     564,   564,   565,   565,   566,   566,   567,   567,   568,   568,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   570,   570,   570,   471,
     571,   571,   572,   573,   572,   574,   574,   575,   575,   575,
     576,   577,   576,   578,   578,   579,   579,   579,   579,   579,
     580,   580,   581,   581,   582,   582,   583,   584,   583,   585,
     585,   585,   585,   571,   586,   586,   586,   586,   471,   587,
     587,   587,   471,   589,   588,   590,   590,   591,   591,   592,
     592,   593,   593,   593,   594,   594,   594,   594,   595,   595,
     596,   596,   596,   596,   596,   596,   596,   596,   471,   597,
     598,   598,   598,   599,   599,   599,   599,   471,   471,   600,
     600,   471,   471,   471,   471,   601,   601,   471,   602,   602,
     602,   602,   602,   471,   603,   603,   471,   604,   605,   605,
     604,   604,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   607,   607,   608,   608,   604,   604,   604,   604,
     609,   609,   609,   610,   610,   611,   611,   611,   611,   611,
     611,   611,   611,   611,   611,   611,   611,   611,   611,   612,
     612,   613,   613,   614,   614,   615,   615,   615,   615,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     615,   615,   615,   616,   616,   617,   611,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     619,   619,   619,   620,   620,   621,   621,   621,   622,   622,
     622,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   624,   624,   625,   626,
     626,   626,   471,   627,   627,   627,   628,   628,   629,   629,
     471,   630,   630,   630,   630,   630,   630,   630,   630,   631,
     631,   632,   632,   633,   633,   633,   633,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   635,   635,   635,
     635,   635,   635,   635,   635,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   471,   637,
     637,   637,   637,   471,   638,   638,   639,   639,   640,   640,
     640,   640,   640,   640,   640,   471,   641,   641,   642,   642,
     643,   643,   643,   643,   471,   644,   644,   471,   471,   471,
     645,   646,   646,   647,   647,   647,   647,   647,   647,   647,
     647,   471,   648,   648,   471,   471,   471,   471,   649,   649,
     649,   650,   650
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
       4,     1,     1,     1,     1,     6,     8,     3,     5,     3,
       5,     1,     3,     1,     4,     6,     0,     4,     4,     2,
       0,     4,     7,     4,     1,     3,     1,     1,     1,    10,
      12,     0,     2,     2,     0,     2,     2,     2,     2,     2,
       0,     2,     1,     3,     0,     4,     0,     5,     5,     7,
      10,    10,    17,    12,    19,    11,     6,     8,     6,     6,
       6,     9,     6,     5,     8,     7,     9,     8,    10,     9,
       7,     7,     8,     8,     7,     5,     0,     1,     2,     1,
      10,     6,     0,     0,     5,     0,     4,     0,     3,     4,
       2,     0,     5,     3,     5,     0,     2,     2,     2,     2,
       1,     0,     0,     3,     1,     3,     3,     0,     6,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     1,     8,
       7,     7,     1,     0,     7,     0,     3,     1,     3,     1,
       1,     1,     1,     1,     0,     1,     4,     3,     1,     3,
       2,     2,     2,     1,     2,     2,     2,     1,     1,     9,
       0,     2,     2,     3,     5,     5,     7,     5,     1,     4,
       4,     3,     5,     3,     5,     0,     2,     1,     5,     7,
       7,     9,    11,     1,     2,     3,     1,    10,     0,     4,
      11,    18,     0,     4,     3,     5,     5,     9,    10,     7,
       4,     7,     1,     3,     9,     9,     9,     6,    11,     8,
       0,     1,     2,     1,     3,     5,     7,     4,     4,     5,
       5,     4,     6,    11,    13,    13,    15,     4,     6,     1,
       3,     1,     3,     1,     3,     0,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     4,     3,     3,     3,     2,
       3,     4,     4,     1,     3,     0,     4,     0,     3,     2,
       3,     3,     3,     3,     5,     5,     5,     3,     5,     2,
       7,     5,     7,     5,     2,     3,     2,     3,     2,     3,
       5,     4,     5,     7,     8,     8,     7,     6,     6,     5,
       0,     3,     5,     0,     1,     0,     2,     2,     0,     4,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     3,     5,     2,
       4,     1,     1,     1,     1,     3,     3,     3,     3,     5,
       5,     1,     1,     1,     4,     3,     1,     3,     3,     0,
       1,     1,     1,     3,     3,     2,     1,     3,     3,     3,
       1,    10,     9,    12,    11,    12,    11,    14,    13,     0,
       1,     1,     3,     2,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     4,
       5,     5,     5,     5,     5,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     3,     5,     1,     4,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,    13,    15,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     4,     4,     1,
       5,     0,     2,     3,     2,     3,     2,     2,     2,     1,
       2,     1,     3,     5,     4,     4,     6,     6,     0,     2,
       2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   680,     0,   366,     0,   575,     0,
       0,     0,     0,     0,   575,     0,   300,     0,   630,     0,
       0,     0,     0,     0,     0,     0,   253,   361,   373,   379,
     411,   418,   426,   427,   435,   436,   437,   446,   447,   448,
     449,   450,   451,   452,   423,   424,   425,   481,   482,   483,
     484,   491,   493,     0,   507,   508,   506,   559,   598,   602,
     628,   638,   647,   653,   656,   812,   820,   978,   983,   995,
    1004,  1009,  1021,     0,     0,     0,     0,   499,     0,     0,
     645,     0,     0,     0,     0,     0,     0,     0,   645,   681,
       0,     0,   645,     0,     0,     0,     0,   603,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   581,   475,   479,   477,   478,     0,     0,   581,     0,
       0,   815,   816,     0,     0,     0,     0,   654,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,   413,   496,     0,     0,  1011,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   682,     0,     0,     0,     0,     0,     0,   645,   605,
     370,     0,   365,   363,   364,     0,   641,     0,   981,     0,
     412,   979,     0,  1005,     0,     0,   643,     0,   376,     0,
    1022,     0,     0,     0,   487,     0,   577,   578,   579,   580,
     576,     0,   476,     0,   492,     0,     0,     0,     0,   813,
     814,     0,     4,     9,    10,    12,    11,     8,     0,     0,
       0,   311,   301,   249,     0,   250,   251,     0,   302,   303,
     304,     0,    13,   252,   306,   308,   307,   305,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   221,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   315,   254,   309,   414,   632,
     631,   315,     0,     0,     0,     0,     0,   316,   318,   332,
     319,   332,   655,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   489,     0,     3,     0,     0,   419,   420,     0,
       0,   500,  1008,  1007,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1025,     0,  1024,     0,   993,   989,   988,
     992,   990,   994,   991,   984,     0,   986,     0,     0,   646,
     639,     0,     0,   829,     0,     0,     0,     0,   829,   999,
     998,     0,     0,   640,     0,     0,     0,  1011,   430,     0,
     455,     0,     0,     0,     0,     0,     0,     0,   368,   257,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   377,
     378,   374,     0,     0,   432,     0,   462,     0,     0,   582,
     480,     0,   582,   819,   818,   817,     0,    78,     0,    32,
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
       0,     0,     0,     0,   422,   421,     0,   496,     0,     0,
     494,     0,     0,     0,     0,     0,     0,   543,     0,     0,
     555,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1019,  1012,     0,
       0,   985,     0,     0,     0,   792,   801,   760,   760,   760,
     760,   760,   785,   760,   782,     0,   760,   760,   760,   763,
     794,   763,   793,   760,   760,   760,     0,   763,   760,   763,
     784,   791,   783,   802,   803,     0,     0,     0,   786,   648,
       0,     0,     0,     0,     0,     0,   830,   831,     0,     0,
       0,     0,     0,  1002,  1000,  1001,  1003,     0,   511,     0,
       0,     0,     0,     0,  1010,     0,   428,     0,   456,     0,
       0,     0,   809,   607,     0,   609,   610,     0,   371,     0,
     278,     0,   257,   370,   642,   982,   980,  1006,   528,     0,
     644,   376,  1023,   433,     0,   463,     0,   488,     0,     0,
       0,   637,     0,     0,     5,    51,    79,     0,    48,     0,
       0,   241,     0,     0,     6,     0,    57,     0,     0,     0,
     227,   225,   226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,     0,     0,     0,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   217,   218,   219,   220,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     207,     0,     0,     0,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    21,    23,    24,    22,
     247,   245,    46,     0,    44,   213,    80,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    33,    74,    73,    25,
      26,    28,    14,    15,    16,    17,    18,    19,    27,    30,
      29,     0,   313,   289,     0,   310,   416,   415,   315,     0,
       0,     0,   320,     0,   355,     0,   360,   328,     0,   257,
     317,   341,   341,     0,   334,     0,   342,     0,   324,   323,
       0,     0,     0,     0,     0,     0,     0,   473,     0,   490,
       0,   500,     0,     0,     0,     0,     0,     0,   539,     0,
     536,   542,   538,     0,   727,     0,     0,     0,     0,     0,
     540,  1026,  1027,  1020,  1018,  1014,     0,  1016,     0,  1017,
       0,     0,   987,   829,   829,     0,   789,   765,   771,   768,
     765,   765,     0,   765,   765,   765,   764,   768,   768,   765,
     765,   765,     0,   768,   765,   768,     0,     0,     0,     0,
       0,     0,     0,     0,   833,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   514,     0,
       0,     0,     0,     0,     0,   430,     0,   453,   455,   485,
       0,   810,   811,     0,     0,   725,   677,   332,   606,     0,
     611,   612,   613,   614,   258,     0,   285,   257,   367,   369,
       0,   375,   434,   464,     0,   562,   584,     0,     0,   561,
     562,     0,   562,     0,    90,     0,   239,     0,     0,     0,
       0,    53,     0,     0,     0,     0,   143,     0,     0,     0,
       0,     0,   175,   176,   177,   178,   179,   180,     0,     0,
       0,     0,   156,     0,     0,     0,   160,   161,   162,   164,
       0,     0,   166,     0,   169,   170,   171,     0,     0,     0,
       0,     0,     0,    97,    91,    92,    93,    94,    95,    96,
     146,   147,   148,     0,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
     183,   184,   185,   186,   187,   188,   189,     0,     0,     0,
       0,     0,     0,     0,     0,   199,     0,   202,   203,   204,
       0,    60,     0,    62,     0,     0,     0,     0,     0,    70,
      71,    72,     0,     0,     0,    47,    45,     0,     0,   248,
     246,    82,     0,     0,    40,    36,    38,     0,    58,     0,
     257,     0,     0,   355,   357,   357,   357,     0,   321,   325,
       0,     0,     0,   278,   345,   346,     0,     0,   348,     0,
       0,     0,   442,   444,     0,     0,     0,     0,   470,   497,
     498,   495,     0,     0,     0,     0,     0,     0,   727,   727,
       0,   551,   550,   556,   727,   545,     0,     0,   554,  1013,
    1015,     0,     0,     0,     0,     0,   777,   787,   779,   781,
     806,     0,   780,   776,   775,   798,   797,   774,   778,   773,
       0,   795,   772,   796,     0,     0,     0,   650,   805,     0,
     649,     0,   834,   836,   835,     0,   832,     0,     0,   404,
       0,     0,     0,     0,     0,   406,     0,     0,     0,     0,
       0,   847,     0,     0,   512,   513,     0,   520,   511,     0,
       0,     0,     0,     0,     0,   429,     0,   456,     0,     0,
     809,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     683,     0,     0,   608,   627,     0,     0,   623,     0,     0,
       0,     0,   604,   615,   618,     0,     0,  1028,   372,   529,
       0,     0,     0,   593,   583,     0,     0,   562,   600,   562,
     601,    52,   243,     0,   242,     0,     0,     0,    56,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,   101,   103,     0,     0,     0,
       0,     0,   135,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    59,     0,     0,     0,     0,     0,     0,   259,   257,
     417,   322,     0,     0,     0,     0,   330,     0,   633,     0,
       0,   285,   337,   335,     0,     0,   333,   349,     0,   440,
     441,     0,     0,     0,     0,     0,   467,   468,     0,     0,
     474,     0,   504,   503,   501,     0,     0,     0,     0,   556,
     556,   727,     0,     0,   739,     0,   744,     0,     0,     0,
       0,     0,   557,   748,   729,     0,   746,   547,   556,   537,
     544,   553,   552,     0,     0,   761,     0,   766,   767,     0,
       0,   768,     0,   768,   768,   790,   804,     0,     0,     0,
     841,   844,   843,   845,   842,   837,   838,   840,   846,   839,
       0,     0,     0,     0,     0,     0,     0,   380,     0,     0,
       0,     0,     0,     0,   847,     0,     0,     0,   515,   519,
     517,   516,   518,     0,   524,   514,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,   454,   486,     0,
     725,   679,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   662,   725,     0,   808,   622,   620,   621,   624,   625,
     626,     0,     0,     0,   263,   263,   279,   280,   286,     0,
     362,   595,   594,     0,     0,   585,   590,   589,     0,   587,
     565,   599,   240,   244,     0,    54,     0,   141,   140,     0,
     145,     0,     0,   228,   229,   174,   152,   153,     0,     0,
     157,   158,   159,   163,   165,   167,   208,   209,   210,   211,
       0,    98,   107,   109,   105,   111,   113,   115,   149,     0,
       0,   151,   224,   270,   270,   270,   117,     0,     0,   125,
       0,     0,   133,   270,   270,   181,     0,     0,     0,   193,
     194,     0,     0,   197,     0,   200,     0,   205,     0,    61,
      63,    66,    67,    68,    69,     0,     0,     0,    81,    85,
       0,     0,    50,     0,     0,    42,     0,    43,    35,     0,
       0,   268,   259,   356,     0,     0,     0,   326,     0,     0,
       0,  1028,   350,     0,   336,     0,     0,   443,   445,     0,
       0,     0,   471,     0,     0,     0,     0,     0,   723,     0,
     541,   549,   556,   728,   558,     0,     0,     0,     0,     0,
       0,   749,   730,   731,   733,   732,   737,     0,     0,     0,
       0,   747,   745,   546,     0,     0,   847,     0,     0,   770,
     799,   807,   800,   788,     0,   651,   381,     0,   847,     0,
     397,     0,     0,     0,     0,   405,     0,   389,     0,     0,
       0,     0,     0,   855,   856,   857,   859,   858,   977,   862,
     863,   864,   970,   861,   860,   965,   966,   967,   968,   969,
     952,   865,   906,   897,   902,   847,   948,   938,   909,   941,
     884,   891,   888,   875,   931,   920,   847,   928,   946,   882,
     883,   953,   869,   876,   924,   940,   945,   942,   903,   881,
     950,   822,   880,   900,   893,   890,   847,   939,   929,   870,
     919,   958,   896,   910,   892,   911,   895,   934,   917,   878,
     847,   867,   951,   873,   935,   887,   914,   926,   886,   847,
     915,   912,   913,   921,   933,   923,   889,   894,   918,   907,
     908,   925,   957,   930,   899,   932,   885,   959,   916,   904,
     898,   905,   901,   944,   872,   866,   937,   943,   877,   879,
     868,   949,   927,   947,   922,   936,   874,   871,   955,   847,
     956,   954,   972,   973,   974,   975,   976,   963,   964,   960,
     961,   962,   971,   848,     0,     0,   522,   521,     0,   526,
     520,     0,   383,     0,     0,     0,     0,     0,     0,     0,
       0,   457,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   298,     0,     0,     0,     0,   658,   676,
     684,   727,     0,   617,   619,   264,   265,     0,   282,   284,
       0,     0,     0,  1031,  1029,  1030,   563,     0,   586,     0,
       0,     0,  1028,     0,     0,     0,   144,   231,   232,   233,
     234,   237,   236,   238,   230,   235,     0,     0,     0,   270,
     270,   270,   270,   270,   270,     0,     0,     0,   274,   274,
     274,   270,     0,     0,     0,   270,     0,     0,     0,   270,
     274,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,    87,    41,    37,    39,     0,     0,
       0,   278,   268,   358,     0,     0,     0,     0,   634,   635,
       0,   629,     0,     0,     0,     0,     0,     0,   505,     0,
     530,   701,     0,   699,     0,   531,     0,   548,     0,     0,
       0,     0,     0,     0,   751,     0,     0,     0,     0,     0,
       0,   847,     0,   762,   769,     0,   847,     0,   385,   398,
       0,   407,   408,   409,     0,     0,     0,     0,     0,   382,
     821,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   509,   524,     0,     0,   391,     0,     0,     0,
     431,   460,   461,   459,     0,   662,     0,     0,     0,     0,
     691,     0,     0,     0,   688,     0,   687,     0,   697,     0,
       0,     0,     0,     0,     0,   657,   726,   616,   263,   281,
     288,   287,     0,     0,   597,   596,   592,   591,     0,   567,
     560,     7,   142,   139,   154,   155,   212,   274,   274,   274,
     274,   274,   274,   214,     0,   150,     0,     0,     0,     0,
       0,   274,   119,     0,     0,   274,   127,     0,     0,   274,
       0,     0,   190,   191,   192,   195,   196,     0,   201,   206,
       0,     0,     0,     0,   263,   266,   269,   285,   278,   354,
       0,   353,   352,     0,     0,   351,     0,     0,     0,     0,
       0,   502,     0,     0,     0,   535,     0,   724,   741,     0,
     759,   743,     0,     0,     0,   752,   750,   734,   735,   736,
     738,     0,   847,     0,   824,   652,     0,   826,   399,     0,
     393,   390,     0,   397,   849,     0,     0,     0,     0,     0,
     847,     0,   523,     0,     0,   526,   387,     0,     0,     0,
     384,     0,   660,   678,     0,     0,     0,     0,     0,   689,
     690,   299,   685,   664,     0,     0,     0,     0,     0,     0,
       0,   283,  1032,     0,   564,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   272,   271,     0,   100,   102,
     104,     0,   270,     0,     0,     0,   270,     0,     0,     0,
     136,   138,     0,     0,     0,     0,   290,   261,     0,     0,
     260,   291,   285,   359,   327,   636,     0,     0,     0,     0,
       0,   533,     0,   702,   700,     0,   757,   758,     0,     0,
       0,   847,     0,   823,   825,     0,   395,   410,   386,     0,
     854,   853,   850,   852,   851,     0,     0,   525,     0,   510,
     394,   392,     0,     0,   692,     0,     0,   698,     0,   663,
       0,     0,     0,     0,     0,   670,     0,     0,     0,     0,
     588,     0,     0,   566,   108,   110,   106,   112,   114,   116,
     215,     0,   263,   275,   118,   274,   121,   123,   126,   274,
     129,   131,   134,   198,    75,     0,     0,   267,   263,     0,
     296,   256,     0,     0,   472,   465,     0,   469,     0,   740,
     742,   756,   753,     0,   828,     0,   399,   996,   847,     0,
     388,     0,     0,   686,     0,   659,   665,   666,     0,     0,
       0,     0,   573,     0,   568,     0,   570,   571,   273,   276,
       0,     0,   270,   270,     0,   270,   270,     0,     0,   262,
     293,   292,     0,   255,     0,     0,     0,     0,   754,   755,
     827,     0,     0,   401,   396,     0,   527,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   569,     0,   263,   120,
     274,   274,   128,   274,   274,    76,    77,     0,     0,   297,
       0,     0,   466,   703,     0,     0,   400,     0,   997,     0,
       0,     0,     0,     0,     0,   671,   669,   574,     0,   277,
       0,     0,     0,     0,   295,   294,     0,     0,   705,     0,
     403,   402,     0,     0,     0,     0,   705,     0,     0,   572,
     122,   124,   130,   132,     0,     0,   532,   704,     0,     0,
       0,     0,   693,     0,     0,   672,   667,     0,     0,     0,
     719,     0,     0,   661,     0,   705,   705,     0,     0,   668,
       0,     0,     0,   720,   534,     0,   716,   718,   717,     0,
       0,     0,   695,   694,     0,   673,     0,     0,   721,   722,
     706,   714,   708,     0,   710,   715,   712,     0,   705,     0,
     438,     0,   709,   707,   713,   711,   696,     0,   439,     0,
       0,     0,     0,     0,     0,   674,   675
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,   785,  1227,  1472,  1474,  1470,   786,  1112,   797,
    1473,   787,  1217,  1466,  1218,  1467,   798,  1693,  1694,  1695,
    2031,  2029,  2030,  2032,  2033,  2034,  2041,  2342,  2492,  2493,
    2045,  2346,  2495,  2496,  2049,  1703,  1704,   804,  1405,   474,
      25,    26,   760,  1741,  2235,  1998,  2360,  2071,  2038,  2336,
    2208,  2433,  1086,  1636,  1637,  1377,  1230,  2450,  2503,  1984,
     123,   346,   347,   609,   356,   357,   358,   359,   953,   632,
     360,   629,   967,   630,   963,  1496,  1497,   952,  1483,  2074,
     361,    27,    98,   175,   438,    28,   451,    29,  2120,  2386,
    2512,  2513,  1324,  1325,    30,    31,   947,   141,    32,   746,
      33,    34,  1501,    35,    36,    37,   748,  1067,  1605,  1606,
      38,    39,  1508,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,   381,    53,   650,  1513,
      54,  1058,  1337,  1594,  1957,  1959,  2142,    55,    56,  1537,
      57,  1383,  2183,  2012,  2327,  2423,  2527,  2324,   111,   201,
     780,  1097,  1387,  2010,  1648,  1095,    58,    59,   169,   436,
     754,   757,  1083,  1372,  1373,  1374,    60,   126,   959,    61,
     150,    62,    63,    64,  2175,  1988,  2594,  2595,    96,  1359,
    1360,  2094,  2092,  2544,  2586,  1769,  1361,  1273,  1016,  1027,
    1286,  1287,   719,  1291,  1076,  1077,    65,   121,   122,    66,
     725,   726,   727,  1570,  1585,  1953,    67,    68,   405,   406,
      69,   421,   737,    70,    71,   395,   678,    72,  1640,  2005
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1994
static const yytype_int16 yypact[] =
{
   13496,   337,   -91,   170, 13494,   188, -1994,   498, -1994,   211,
     221,   777,   -69,   276, -1994,    48, -1994,   336,   727,   565,
     601,   135,   222,   227,   683,   264, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994,   692, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994,   696,   750,   806,   419, -1994,   394,   610,
     681,   845,   685,   865,    83,   871,   881,   892,   681, -1994,
     665,   753,   681,   517,   524,   136,   673, -1994,    79,   191,
     512,   914,   533,   541,   952,   546,   547,   548,   575,   580,
     554,   724,   752,   553, -1994, -1994,   980,   990,   724,   595,
     168,   569, -1994,  6267,   992,   731,   105, -1994,  1006,   -71,
     880,   883,   889,   879,   907,   636,  1055,  1060,  1071, -1994,
   13496,   552,   358,   528,  1501,   441,  1073,    32,   475,   797,
    1077,  1037,  1130,   675,   916,   556,   842,   717,   668,   921,
    1158, -1994,   102,  1166,   583,   588,  1036,   900,   681,   757,
     760,  1184, -1994, -1994, -1994,  -102, -1994,   932, -1994,   959,
   -1994, -1994,   981, -1994,   998,  1025, -1994,  1008,    28,  1026,
   -1994,  1035,   593,   631, -1994,  1053, -1994, -1994, -1994, -1994,
   -1994,  1192, -1994,  1269, -1994,  1099,  1343, 10187, 10187, -1994,
   -1994,  1353,   359, -1994, -1994, -1994, -1994,  1380, 10187, 10187,
   10187, -1994, -1994, -1994,  7443, -1994, -1994,   938, -1994, -1994,
   -1994,   965, -1994, -1994, -1994, -1994, -1994, -1994,  1364,   996,
    1022,  1031,  1049,  1082,  1089,  1109,  1118,  1149,  1164,  1174,
    1190,  1196,  1197,  1198,  1201,  1202,  1204,  1208,  1210,  1211,
    1212,  1213,  1214,  1215,  1225,  1229,  1230,  1235,  1237,  1238,
    1239,  1240,  1247,  1248,  1249,  1250,  1252,  1253,  1254,  1257,
    1258,  1259,  1260,  1261,  1263,  1264,  1265,  1268,  1271,  1280,
    1281,  1287,  1288,  1291, -1994, -1994,  1295,  1296,  1297,  1303,
    1304,  1305,  1306,  1307,  1308,  1309,  1310,  1311,  1313,  1314,
    1316,  1318,  1319,  1320,  1321,  1325,  1327,  1328,  1336,  1337,
    1346,  1349,  1351,  1359,  1360,  1361,  1362,  1363,  1365,  1367,
    1370,  1377,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1394,
    1396,  1398,  1400,  1401, 10187, 14260,   -87, -1994,  1002,   811,
     826,    41,  1402,  1415,  1403,    84,  -180,   477, -1994,  1519,
   -1994,  1519, -1994,  1576,  1433,  1628,  1641,  1692,  1695,  1722,
    1736,  1514, -1994,  1409, -1994,  1756,  1778, -1994, -1994,  1789,
    1839,   129, -1994, -1994,   662,   189,    29,    66,   481,   207,
     630,  1422,  1775,  1570,  1603,   145,   623, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994,   444, -1994,  1847,  1851, -1994,
   -1994, 13905,  1659,    61,  1855,  1666,  1583,  1862,    61, -1994,
   -1994,   -74,    13, -1994,  1669,   635,  1588, -1994,  1593,  1590,
   -1994,  1591,  1455,  1871,  1872,  1873,    21,  1849, -1994,  -196,
    -159,   105,  1877,  1882,  1884,  1885,  1886,    87,  1887, -1994,
   -1994, -1994,  1889,  1893,  1823,  1617,  1825,  1624,  1903,  -167,
   -1994,  1904,  -147, 14423, 14423, -1994,  1906, 10187, 10187,  1905,
    1905,  1874, 10187,  1354,   521,  1908,  1911,  1486, -1994, 10187,
    6659, 10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187,
    1493, 10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187,
   10187, 10187, 10187, 10187, 10187, 10187,  1494, 10187, 10187, 10187,
    1495, 10187, 10187, 10187, 10187, 10187, 10187,  7835, 10187, 10187,
   10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187,  1513,  1515,
    1516,  1517,  1518, 10187, 10187,  1535,  1542,  1550, 10187, 10187,
    1990,  1585,  1587, 10187, 10187, 10187, 10187, 10187, 10187, 10187,
   10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187,
   10187, 10187, 10187, 10187, 10187,  1589, 10187, 10187, 10187,  1592,
   10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187,
    1594, 10830, -1994, 10187, 10187, 10187, 10187, 10187,    35,  1596,
     908, 10187,  7051, 10187, 10187, 10187, 10187, 10187, 10187, 10187,
   10187, 10187, 10187, 10187, 10187, 10187, 10187, 10187,  2012, -1994,
     105,  2015, 10187,  2017,  2020,    16, -1994,   606, 10187,  1597,
     452,  2022,   105, -1994, -1994, -1994,   426, -1994,   105,  1888,
    1867, -1994,  2068,  2070,  1828,  2098,  1700,  1701,  1831,  1835,
    1833,  2105,  1842,  2112, -1994, -1994,  2114,  1843,  2083,  2085,
   -1994,  2125,  2126,  2127,  2128,  2134,  2135, -1994,  2136,  2139,
   -1994,  2140,  2141, 13905,  2142,  1902,  2145,  2146,  2130,  2148,
    2147,  2150,  1776,  2149,    46,   167,  2153, -1994, -1994,  1942,
    1944, -1994,   139,  1737,  1738, -1994, -1994,  1744,  1744,  1744,
    1744,  1744, -1994,  1744, -1994,  1745,  1744,  1744,  1744,  2109,
   -1994,  2109, -1994,  1744,  1744,  1744,  1751,  2109,  1744,  2109,
   -1994, -1994, -1994, -1994, -1994,  1752,  1755,  1759, -1994,   788,
    2159, 13905,  2183,  2184,  2186,  1763,  1764, -1994,  -192,  2188,
    2190,  1997,  1768, -1994, -1994, -1994, -1994,  1999,  2152,  1801,
    2195,  2002,  1919,  2198,   145,  1779, -1994,  2201,  1929,  2205,
    2206,  2071,   378, -1994,   459, -1994, -1994,    50, -1994, 10187,
    2018,   105,  -110,   760, -1994, -1994, -1994, -1994, -1994,  1814,
   -1994,    28, -1994, -1994,  2212, -1994,  2214, -1994,  2215,  2218,
     -81, -1994,  2215,   453, -1994,  1473, -1994,  1799, 14423, 13805,
     526, -1994, 10187, 10187, -1994,  1800, -1994, 10187,  1988,   283,
   -1994, -1994, -1994, 10857,  8227,  1960,  2016,  2064, 10884, 10926,
   10953, 10980, 11007, 11035, -1994,  6368,  6396,  6684,  6731, 11062,
    6758,  6787,  6835, 11100, 11133, 11160,   551,  6867, 11195,  7142,
   -1994, 11222, 11249, 11276, -1994, 14323,  7169,  7468,  7515,  7553,
   10776,  1807, 11303, 11336, 11363, 11390, 11417, 11445, 11472, 11510,
    7580,  7619,  7651, -1994, -1994, -1994, -1994, -1994, 11543,  7861,
    1891,  1894,  1899,   745,   831,  1812,  1900,  1901,  7926, 11570,
   11605, 11632, 11659, 11686, 11713, 11746, 11773,  7964,  8252,  8299,
    8346,  8375,  8403,  8435,  8645,   920, 11800, 11827, 11855,  8723,
   -1994,  1126, 11882,  8757, -1994,  9036,  9083,  9116,  9143, 11920,
   11953, 11980,  9187,  9219,  9429, -1994, -1994,  6495,  1498, 13527,
   13593, 13593, -1994,    57, -1994, -1994,  2011, 10187, 10187,  1827,
   10187, 14357,  1829,  1834,  1841, 10187,  1927,  1326,  1326,  1218,
    2028,  1003,  1098,  1098,   941,   941,   941,   941,   799,  1874,
    1874,   100, -1994,   -97,  2121, -1994, -1994,  1845,   606,  2110,
    2113,  2115, -1994,  1988,    16, 12015, -1994, -1994,    60,   -61,
     477,  1867,  1867,  2117,  2079,   105, -1994,  2118, -1994, -1994,
    1852,  2013,  2278,  2282,  1878,  1864,  1880,  1883,  2284, -1994,
     571,   129,  2095,  2097,   461, 13905, 13905,  2294, -1994,  2084,
   -1994, -1994, -1994,  2087,  2269, 13905,  2307,  2066,  2067,  2310,
   -1994, -1994, -1994, -1994, -1994, -1994,  2313, -1994,  2315, -1994,
    2319,  2324, -1994,    61,    61,  2323, -1994, -1994, -1994, -1994,
   -1994, -1994,  2325, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994,  2325, -1994, -1994, -1994,  2326,  2327,  2328,  2137,
    1907,  1909, 10187,  1912,  2269, 13905, 13905, 13905,  2124,    61,
    -115,    23,  -104,  2143,  2331,   128,    88,   735,  2199,  2338,
     -90,  2339,  2340,  2151,  1947,  1593,  1923, -1994, -1994, -1994,
    1932, -1994, -1994,  2257,  2349,   527, -1994,  1519, -1994,  2350,
   -1994, -1994, -1994,   544, 14423,  2291,  2177,  -110, -1994, -1994,
    2357, -1994, -1994, -1994,  2341,  -174, -1994,   534,  1936, -1994,
    -174,  1936,  2164, 10187, -1994, 10187, -1994, 10187, 14174, 13913,
    2274,  9507,  1940,  1943, 10187, 10187, -1994, 10187, 13982,  2210,
    2210, 10187, -1994, -1994, -1994, -1994, -1994, -1994, 10187, 10187,
   10187, 10187, -1994, 10187, 10187, 10187, -1994, -1994, -1994, -1994,
   10187, 10187, -1994, 10187, -1994, -1994, -1994, 13905, 13905, 10187,
   10187, 10187,  2369, -1994,  2024,  2025,  2029,  2034,  2035,  2036,
   -1994, -1994, -1994, 10187, 10187, 10187, -1994, 10187,  1952,  1963,
    1970,  2048,  2395,  2051,  2401,  2058,  1983,  1984, 10187, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, 10187, 10187, 10187,
   10187, 10187, 10187, 10187, 10187, -1994, 10187, -1994, -1994, -1994,
   10187, -1994, 10187, -1994, 10187, 10187, 10187, 10187, 10187, -1994,
   -1994, -1994, 10187, 10187, 10187, -1994, -1994, 10187,  1988, 13593,
   13593,  2170, 14390, 10187, -1994, 10187, 10187,  1988, -1994,  2000,
    2144,   105,  2416,    16,  2280,  2280,  2280,  1994, -1994,   622,
   10187,  2419,  2420,  2018, -1994, -1994,   105, 10187,   -43,   105,
      75,  1998,  2023,  2246,  2413,    77,  2414,  2431,  2260, -1994,
   -1994, -1994,  2433,  2433,  2014,  2279,  2281,  2026,  2269,  2269,
   13905, -1994, -1994, 13912,  2269, -1994,  2439,  2448, -1994, -1994,
   -1994,  2232,  2236,  2032,  2039,   558,  -111,   886,  -111,  -111,
   -1994,   576,  -111,  -111,  -111,   886,   886,  -111,  -111,  -111,
     587,   886,  -111,   886,  2040,  2041,  2043,  2384, -1994, 10187,
   14423,    23,  2269,  2269,  2269,   561, -1994,  2045,  2046, -1994,
    2047,  2049,  2050,  2052,   594, -1994,  2209,    23,  2471,   -88,
    2421, -1994,  2342,  2088, -1994, -1994,   490,  2234,  2152,  2217,
      23,   -84,  2283,  2483,  2467, -1994,   618,  1929,  2486,  2487,
     -14,  2488,  2072,  2332,   634,  2073,  2076,  2333,  2081,   619,
   -1994,  2505,  1988, -1994, -1994,  2506,    22,  2509,  2513,  2516,
    2096,   597, -1994,  2120, -1994,   742, 10187,  2329, -1994, -1994,
    8619,  2361,  2535, -1994, -1994,  2551,  9011,  -140, -1994,  -140,
   -1994, -1994, 14423, 14201, -1994, 10187,  2129, 10187, -1994, -1994,
   10803,  1178, 12042, 10187, 10187,  2131,  2132, 12069, 12096, 12123,
    9536,  9820, 12156, 12183, 12210, 12237, 12265, 12292,   -13,    70,
   12330, 12363,  9867,  2133,  2160,  2161,  2165,  2166,  2167,  2169,
    1205,  9900, 12390, 12425, -1994, -1994, -1994,  2173,   624,  2175,
     626,  2182, -1994, -1994, 12452,  9927,  9971, 10003, 12479, 12506,
   10213, 10278,  1272,  1299,  1383, 12533, 12566, 12593, 12620, 12647,
   12675, 10311, 10596, 10624,  2138,  2163, 10187,  1988, 10187,  1977,
    1988, 14423,  1988,  2176,  1988,  2185,  2187,  2510,  2415,  -110,
   -1994, -1994,  2394,  2189,  2191,  2192, -1994,  2559, 14423,  2543,
      69,  2177, -1994, 14423, 10187,  2193, -1994, -1994,   -43, -1994,
   -1994,  2181,    75,  2563,  2564,  2566, -1994, -1994,  2194,  2567,
   -1994,  2568, -1994,  2196,   236, 10187,  2197,  2203,  2569, 13912,
   13912,  2269,  2381,  2572,  2204,  2207,  2208,  2524,  2575,  2211,
    2606,   192, -1994, -1994, -1994,  2447,  2449, -1994, 13912, -1994,
   -1994, -1994, -1994,  2403,   748, -1994,  2615, -1994, -1994,  2385,
    2617, -1994,  2627, -1994, -1994, -1994, -1994,  2216, 12702,   629,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
     763,    23,  2629,  2632,  2638,  2640,  2641, -1994,  2643,  2224,
     632,  2225,   231,    23, -1994,  1642,  2534,  2651, -1994, -1994,
   -1994, -1994, -1994,  2652,  2390,  2199,  2233,   659,  2392,    23,
    2662,   -80,  2663,  2646,  2649,   666, -1994, -1994, -1994,  2530,
     527, -1994,   465, 10187,  2251,  2253,  2255,  2679,  2679,  2261,
    2569,     4,   527, 13905, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994,   597,   669,   597,    89,    68,  2262, -1994,  1413,   779,
   -1994, -1994, 14423,  2425,  2669, -1994, -1994, 14423,   671, -1994,
    2494, -1994, -1994, 14423,  2688, -1994, 10187, -1994, -1994, 10187,
   -1994, 12740, 13773, -1994, -1994, -1994, -1994, -1994, 10187, 10187,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   10187, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, 10187,
   10187, -1994, -1994,  2348,  2348,  2348, -1994,  2343,   984, -1994,
    2351,  1045, -1994,  2348,  2348, -1994, 10187, 10187, 10187, -1994,
   -1994, 10187, 10187, -1994, 10187, -1994, 10187, -1994, 10187, -1994,
   -1994, -1994, -1994, -1994, -1994, 10187, 10187, 10187, -1994, -1994,
    2273,  2275,  1977,  2276,  2277, -1994,  2287, -1994, -1994,  2611,
    2644,  2558,  2415, -1994,  2712,  2712,  2712,  2290, 10187, 10187,
    2714,  2329, 14423,  2679, -1994,    75,  2292, -1994, -1994,  2709,
      77,  2711, -1994,  2721,  2720, 12773,  2723,  2729, -1994,   677,
   -1994, -1994, 13912, -1994, -1994,  2728, 10187,  2730,  2689,   -12,
   10187, -1994, -1994, -1994, -1994, -1994, -1994,  2317,  2321,  2322,
   10187, -1994, -1994, -1994,   561,  2691, -1994,  2312,  2745, -1994,
     886, -1994,   886,   886, 10187, -1994, -1994,  2692, -1994,   680,
    2750,  2330,  2334,  2335,  2337, -1994,    23, -1994,    23,  2344,
    2345,   682,  2106, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994,  2537,  2616, -1994,  2352,  2346,  2478,
    2234,    23, -1994,  2347,   736,  2353,  2490,    23,  2336,  2754,
    2756, -1994,   618,  2495,   738,  2362,  2603,  2604,  2363, 12800,
    2723,  2679,  2679, -1994,   740,   743,  2729,   747,   -16, -1994,
   -1994,  2269,   751, -1994, -1994, -1994, -1994,  2774, -1994, -1994,
     742, 10187, 10187, -1994, -1994,  2355, -1994,  9403, -1994,  9795,
    2365,  2690,  2329,  2371, 12835, 12862, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, 12889, 12916, 12943,  2348,
    2348,  2348,  2348,  2348,  2348,  1440, 12976,  2733,  2605,  2605,
    2605,  2348,  2375,  2379,  2402,  2348,  2393,  2408,  2409,  2348,
    2605,  2605, 13003, 13030, 13057, 13085, 13112, 10651, 13150, 13183,
   10689, 10722, 10749, -1994, -1994, -1994, -1994, -1994,  2424, 10187,
   10187,  2018,  2558, -1994,   828,   833,   837,  2819, 14423, 14423,
    2818, -1994,   839,  2411,    75,  2676,  2418,  2677, -1994,  2799,
    2825, -1994,   841, -1994,   843, -1994,  2841, -1994,   848, 13210,
     850,  2422,  2426,  2686, -1994, 13245,  2427,  2428,  2429, 13272,
     768, -1994,  2387, -1994, -1994, 13299, -1994,  2668, -1994, -1994,
    2430, -1994, -1994, -1994,  2848,   909,   911,    23,  2850, -1994,
   -1994,  2949,  3230,  3511,  3792,  4073,  4354,  2807,  2741,  2865,
   10187,  2793, -1994,  2390,   913,    23, -1994,    23,  2446,   915,
   -1994, -1994, -1994, -1994,  2737,     4, 10187,  2450,  2454,  2569,
   -1994,   993,  1050,  1052, -1994,  2871, -1994,  1054, -1994,   180,
    2456,  2881,  2826,   195,  2827, -1994,  1564, -1994,    68, -1994,
   14423, 14423,  2888,  2889, -1994, 14423, -1994, 14423,  9011,  2468,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994,  2605,  2605,  2605,
    2605,  2605,  2605, -1994, 10187, -1994,  2890,  2832,  2469,  2470,
    2472,  2605, -1994,  2548,  2550,  2605, -1994,  2552,  2553,  2605,
    2474,  2477, -1994, -1994, -1994, -1994, -1994, 10187, -1994, -1994,
    2900,  2901,  2905,  2906, 14228,   281, 14423,  2177,  2018, -1994,
    2909, -1994, -1994,  2489, 10187, -1994,    75,  2485,  2894,    77,
    2895, -1994,  2653,  2716,  2915, -1994,  2921, -1994, -1994,  2920,
    1004, -1994,  2922, 10187, 10187, -1994, -1994, -1994, -1994, -1994,
   -1994,  2872, -1994,  4635, -1994, -1994,  4916, -1994,  2654,  2508,
   -1994, -1994,  1110,  2750, -1994,  2856,  2805,  2781,  2775,  2664,
   -1994,  2731, -1994, 13326,  2520,  2478, -1994,  1113,  1115,    23,
   -1994,  2521,    56, -1994, 13353,  2723,  2729,  1120,  2743, -1994,
   -1994, -1994, -1994, -1994,  2946,  2955,    -4,   -49,  2544,  2539,
    2759, -1994, -1994,  2944,  2540,  1122,  2967,  2870,  2545,  2546,
    2547,  2554,  2555,  2556, 13386, -1994,  2557,  2977, -1994, -1994,
   -1994,  2560,  2348,  2562,  2570,  2571,  2348,  2576,  2578,  2574,
   -1994, -1994, 13413,  2579,  2577,  2585, -1994, -1994,  2770, 10187,
   -1994,  2846,  2177, -1994, -1994, 14423,  2586,    75,  2991,  1124,
    2993, -1994,  3004, -1994, -1994,  2589, -1994, -1994,  2593, 13440,
   13467, -1994,  5197, -1994, -1994,  2595, -1994, -1994, -1994,  2597,
   -1994, -1994, -1994, -1994, -1994,  5478,  2968, -1994, 10187, -1994,
   -1994, -1994,  1128,  3024, -1994,  1131,  1133, -1994,  3027, -1994,
    2607,  3029,  3030,  2609,  2610, -1994,  3017,  2612, 10187,  3036,
   -1994,  1135,   -22, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994,  3037,    68,  2613, -1994,  2605, -1994, -1994, -1994,  2605,
   -1994, -1994, -1994, -1994, -1994,  3038,  3039, -1994, 14228,   -63,
    2885, -1994,    75,  2618, -1994, -1994,    77, -1994,  2621, -1994,
   -1994,  1507, -1994,  5759, -1994,  3045,  2654, -1994, -1994, 13495,
   -1994,  2622,  2844, -1994,  1143, -1994, -1994, -1994,  3049,  3050,
    3054,  3051, 14423,  3040, -1994,  3056, -1994, -1994, -1994, -1994,
    3058,  2637,  2348,  2348,  2642,  2348,  2348,  2645,  2650, -1994,
    2839,  2851,  2679, -1994,  2656,    75,  2660,  3076, -1994, -1994,
   -1994,  3080,  1144, -1994, -1994,  6040, -1994,  2858,  3107,  3113,
    3076,  2693,  2694,  2695,  2696, 10187, -1994,  2877,    68, -1994,
    2605,  2605, -1994,  2605,  2605, -1994, -1994,  2938,  2939,  2697,
      75,  2699, -1994, -1994,  1146,  3119, -1994,  3045, -1994,  2703,
    1152,  2705,  1153,  2706,  2904, -1994, -1994, 14423,  2889, -1994,
    2707,  2708,  2710,  2713, -1994, -1994,  2724,    75, -1994,  3133,
   -1994, -1994,  3143,  3135,  3076,  3076, -1994,  2925,  3144,  2540,
   -1994, -1994, -1994, -1994,    75,  2726,    44, -1994,  2734,  2739,
    1159,  1169,   493,  3152,  1171, -1994, -1994,  2735,    75,   -26,
    3006,   471,   494, -1994,  3076, -1994, -1994,  3073,  2902, -1994,
    2925,    75,  2744, -1994, -1994,    54, -1994, -1994, -1994,    25,
     432,  1180,   493,   493,  2997, -1994,  2747,    75, -1994, -1994,
   -1994, -1994, -1994,    38, -1994, -1994, -1994,   487, -1994,  2926,
   -1994,  2748, -1994, -1994, -1994, -1994,   493,    63, -1994,  2980,
    2981,  2988,  2989,  3176,  3177, -1994, -1994
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1994,  3043,  -123, -1994, -1994, -1994, -1994, -1058,  1787, -1994,
    1959, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994, -1994, -1994,  2074,  2718,
   -1994,  -290,  -743,  1444, -1994, -1632, -1994,  1121, -1529, -1994,
   -1993, -1994, -1242, -1994,  1187, -1486, -1994, -1994, -1994, -1576,
   -1994, -1994,  2580,  -337,  -343,  2573,  -617, -1994, -1994,  -357,
   -1994, -1994,   649, -1994, -1994, -1994,  1698,  -906,   383,  -132,
   -1994, -1994, -1994,  3026,  2436, -1994,  2432, -1994,   922,   746,
   -1994,   657, -1309, -1994, -1994, -1994, -1994, -1994, -1994,  2156,
   -1994, -1994, -1492, -1994, -1994, -1994,  2154,  1859, -1994,  1236,
   -1994, -1994, -1751, -1994, -1994, -1994, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1994, -1994,  2581, -1994,  2235,  1950,
   -1994,  1876,  1622,  1267, -1994,  1075,   934, -1994, -1994, -1444,
   -1994, -1050, -1994, -1994, -1994, -1994, -1994,   674,   395,  3121,
    2769, -1994,  2162, -1994,  1056,  2459, -1994, -1994, -1994, -1994,
   -1994, -1994, -1994, -1994, -1310,  1610, -1994, -1994, -1994, -1994,
     567, -1994, -1994, -1994, -1994,  1090, -1994,   639, -1994,  1643,
    1629, -1966, -1950, -1782, -1920, -1605, -1994, -1261,   201,   209,
      91, -1006,  -528,  2220, -1344, -1994, -1994, -1994,  3044, -1994,
    -401, -1994,  2213,  1460, -1556, -1994, -1994, -1994, -1994,  2582,
   -1994, -1994, -1994, -1994, -1994,  2834, -1994, -1994, -1727, -1994
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -810
static const yytype_int16 yytable[] =
{
     345,  1491,  1559,  1999,   633,  1751,  1611,  1519,  1520,  2086,
    1756,   964,   620,  1538,   615,  1987,   738,   732,  1580,  1088,
    2167,  1295,  1296,  1040,  2081,  1381,  1319,  1301,  1822,  1303,
    2161,  1597,  2169,   733,   441,   397,   398,   399,   400,   401,
     402,   912,  1985,  1229,   582,  1391,  2209,  2210,  1238,   610,
    1388,  1005,  1390,   913,  1080,  -809,   119,  2220,  2221,  1381,
     621,  1632,  2599,  1215,   721,   619,  2102,  2649,  2486,   657,
    -370,  2613,   611,   778,  1050,  1770,  1771,   722,   759,  1499,
    1240,  1506,   170,   734,   463,   464,   154,   351,   363,  1749,
     768,  1332,   608,   782,  1793,   469,   470,   471,   762,  2630,
     655,   473,   449,  2411,  2169,   424,  1040,   761,   351,  1626,
     583,   584,   585,   586,   587,   588,   589,  1995,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   994,   607,   658,  1995,   166,
    1071,  2600,   397,   398,   399,   400,   401,   402,  1547,   949,
     659,  2642,  2628,  1317,  1494,  2413,  2170,   755,  1071,  1464,
      16,    77,  1326,   672,   759,  2039,  2040,  2500,   155,  1548,
     950,   209,  1007,    78,  2050,  2051,  1339,  2082,  1582,  1330,
    1996,  2171,  1598,   116,   735,  2313,  1966,   425,  1331,  2103,
    1098,    97,   653,  1044,   176,  2501,  1782,  1783,  1784,  1785,
    2314,  1996,  1072,  2629,  2328,  2329,  2330,  2331,  2332,  2333,
     663,   723,  2172,   759,   112,   171,  1243,  2631,  2341,  2414,
    1072,   581,  2345,  1495,   113,   403,  2349,  2601,   914,   437,
    1008,  2643,  -370,   172,  1051,  2632,  2487,   648,   450,   156,
    2112,  2602,   132,  2614,  2412,  -809,   656,  2650,   622,  2104,
    1216,   352,  2117,  2171,  1382,   173,   724,   353,   426,   779,
    1772,  2173,  1809,  2083,  1786,  2633,   756,   943,  1500,   442,
    1507,  1627,   352,   654,  1821,   120,  1318,  1989,   353,   779,
     954,   210,   174,   951,  2172,  2190,  1081,  1082,  1649,  2131,
    1964,   664,   167,   583,   584,   585,   586,   587,   588,   589,
    2132,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   622,   607,
    2133,  1992,  1327,  1006,   736,    16,   442,  1481,  2097,   673,
     364,   622,   403,  2173,  2134,  2174,  1340,  1650,  1583,  1651,
    2406,   612,  1599,  2135,  1378,   788,  1967,   177,  1248,   789,
    1320,  1321,  1322,  1323,   915,  2405,   799,   803,   805,   806,
     807,   808,   809,   810,   811,   812,   813,  1242,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,  2136,   831,   832,   833,   649,   835,   836,
     837,   838,   839,   840,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   852,  2162,  2163,  2174,  1730,   118,
     858,   859,  1610,   125,  1676,   863,   864,   739,  1087,  1114,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   885,   886,   887,
     888,   889,  2491,   891,   892,   893,  2494,   895,   896,   897,
     898,   899,   900,   901,   902,   903,   904,  1268,  1269,   404,
     907,   908,   909,   910,   911,   354,   614,  1274,   921,   926,
     927,   928,   929,   930,   931,   932,   933,   934,   935,   936,
     937,   938,   939,   940,   941,  1241,   354,  1478,   660,   345,
    1099,   769,  1333,  1102,  1750,   955,   393,  1677,  2369,  1819,
    2197,  2198,  2199,  2200,  2201,  2202,  2634,  2125,  1113,  2126,
     355,  2607,  2211,  1764,  1997,   178,  2215,  1312,  1313,  1314,
    2219,   674,   675,   676,   677,  1787,  1788,  1789,   117,  1228,
    1588,   355,  1071,   133,   134,   135,   181,  2560,  2561,  1264,
    2562,  2563,   136,  1975,   183,  1800,  2321,  1802,  1803,   186,
     188,   190,   661,   623,  2307,  2273,    73,   194,  2358,   415,
    2276,   583,   584,   585,   586,   587,   588,   589,   127,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   428,   607,   124,    74,
    2600,   430,  2247,    99,  1072,  1265,   454,  1589,  1351,  1976,
    2644,  2619,  2357,   961,   207,  1352,   375,   376,  2616,   582,
    2318,  1233,  1283,  1284,   407,   208,  1259,  1260,  1790,  1418,
    1419,  2319,  1820,  1560,  2635,  -332,   377,  1561,   382,  1492,
     624,  1364,  1498,   665,   456,   379,  1084,   100,   741,   137,
    -338,   962,  2636,  1365,   138,   791,   792,  1590,   383,   394,
    1106,  1107,  2144,   101,   625,   160,  2592,   608,  2149,   163,
     128,  1353,  1266,  1237,  1763,  1354,  1977,   626,   179,  1108,
    1109,  2617,  2637,   631,  1111,  1562,  2601,   408,  1563,  1366,
    2645,  1118,  1355,   139,  1364,  2622,  2623,  1367,   140,   182,
    2602,  1356,   627,  1564,    16,   142,  1365,   184,   662,   143,
     102,   666,   187,   189,   191,  2506,  2618,   419,    75,  2359,
     195,  1115,   416,  1565,   667,   628,  2382,   103,  2646,   104,
    1362,  1566,  1267,   679,  1101,   105,  1978,   420,  1357,  1073,
    2176,  1591,  1366,   651,  2395,   434,  1742,  1368,  2552,   429,
    1367,    76,  1521,   680,   431,  1634,   652,  1635,  1592,   455,
     106,  2361,  2620,   144,  2366,   583,   584,   585,   586,   587,
     588,   589,   378,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     114,   607,  2003,   380,   466,   467,  1369,   457,  1358,  1615,
    1368,   742,  2590,  2591,  1219,  1220,   793,  1222,  1616,  1795,
    2489,   793,   581,  1074,  1075,   115,  1039,  2004,  1796,   145,
    1567,  2303,  1568,  2435,  1807,   146,  2499,  2439,  2282,  2271,
     147,  1370,  2621,  1808,  1040,  2463,   148,   196,  2272,  2237,
    -575,  1569,   605,   606,   196,   607,  2297,   149,  2298,  1369,
     152,   583,   584,   585,   586,   587,   588,   589,   151,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,  1041,   607,   153,   107,
     197,   681,   682,  -575,   157,  2453,  2451,   197,   198,   957,
     622,  -575,  1487,   199,   158,   349,  1078,  1079,  1479,  1017,
    1018,  1019,  1020,   108,  1021,   159,  2559,  1023,  1024,  1025,
     200,  1042,   109,  -575,  1029,  1030,  1031,   350,   162,  1034,
    1028,   161,  2515,   164,  -579,   110,  1033,   180,  1035,  1310,
     165,   917,   918,   202,   919,   168,  2539,   920,  1465,  -576,
     583,   584,   585,   586,   587,   588,   589,  1476,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   185,   607,  -579,  1334,  1335,
    2504,  1384,  1385,  2530,  2531,  -579,  2533,  2534,  1549,  1550,
    1371,   192,  -576,   604,   605,   606,   193,   607,  1139,  1140,
    -576,   203,  1392,   204,  1393,  1545,  1546,  -579,  2043,  2044,
    2402,  1400,  1401,   205,  1402,   348,  2362,   211,  1407,   129,
     130,   131,  -576,  1551,  1552,  1408,  1409,  1410,  1411,   362,
    1412,  1413,  1414,  2541,  1553,  1552,   365,  1415,  1416,   366,
    1417,  1577,  1578,  1603,  1604,   367,  1420,  1421,  1422,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   368,   607,
    1430,  1431,  1432,   369,  1433,   370,  1621,  1622,  2566,  2047,
    2048,  1697,  1698,  1700,  1701,  1444,  1806,  1578,   371,  1817,
    1578,  2376,  2377,   372,  1445,  1446,  1447,  1448,  1449,  1450,
    1451,  1452,  1624,  1453,   373,  2585,   396,  1454,   409,  1455,
     410,  1456,  1457,  1458,  1459,  1460,  1962,  1578,   411,  1461,
    1462,  1463,  2597,  1971,  1972,  1991,  1993,  1633,  2008,  2009,
    1469,   413,  1471,  1471,  2095,  2096,  2612,  2118,  1578,  2129,
    1578,  1288,  1289,   414,  1292,  1293,  1294,  1488,   422,  2626,
    1297,  1298,  1299,   417,  1493,  1302,   600,   601,   602,   603,
     604,   605,   606,   412,   607,  2641,   583,   584,   585,   586,
     587,   588,   589,   418,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   423,   607,  2146,  1578,  2155,  1622,  2164,  2165,   427,
    2166,  2165,  1171,  1172,  2168,  2096,   432,  1731,  2177,  1633,
    1733,   433,  1734,   435,  1736,   437,  1558,   439,   583,   584,
     585,   586,   587,   588,   589,   459,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   443,   607,   583,   584,   585,   586,   587,
     588,   589,   447,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     444,   607,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,  1638,   607,  2239,  2240,  1642,  1173,  1174,
    2241,  2240,   445,  1647,  2242,  2240,  2245,  2165,  2253,  2254,
    2255,  2256,  1653,   460,  1111,  2258,  2259,  2261,  2262,   446,
    1661,  1662,   583,   584,   585,   586,   587,   588,   589,   448,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   452,   607,   583,
     584,   585,   586,   587,   588,   589,   453,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   458,   607,  2280,  1578,  2281,  1578,
    2296,  1578,  2300,  1578,   461,  1732,   462,  1195,  1196,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   119,   607,   475,   583,   584,   585,   586,   587,   588,
     589,  1752,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   468,
     607,   476,  1765,   583,   584,   585,   586,   587,   588,   589,
     477,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   617,   607,
    2308,  2254,   478,   583,   584,   585,   586,   587,   588,   589,
     613,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   479,   607,
     583,   584,   585,   586,   587,   588,   589,   480,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   481,   607,  2309,  2165,  2310,
    2165,  2312,  2256,   583,   584,   585,   586,   587,   588,   589,
    1979,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   482,   607,
     585,   586,   587,   588,   589,   483,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,  2014,   607,   484,  2015,  2388,  1578,   384,
    2400,  1578,  2401,  1578,   485,  2026,  2027,  2407,  2096,  2420,
    2009,  2455,  2456,  1201,  1202,  2470,  1578,  2028,  2472,  2254,
    2473,  2256,  2484,  2485,  2508,  2509,  2035,  2036,  2519,  2520,
     631,  2546,  2547,  2568,  2569,   486,   385,  2573,  2574,   634,
    2576,  2569,  1522,  2052,  2053,  2054,  2605,  2569,  2055,  2056,
     487,  2057,   635,  2058,  2001,  2059,  2606,  2569,  2609,  2610,
     488,   386,  2060,  2061,  2062,  1658,  1659,  2638,  2569,   387,
    1244,  1245,  1524,  2075,  2076,  1525,   489,  1526,  1484,  1485,
    1527,   388,   490,   491,   492,  2078,  2079,   493,   494,   472,
     495,   636,  1688,  1689,   496,  1528,   497,   498,   499,   500,
     501,   502,  1529,  1530,   637,  1823,  1824,  1825,  1826,  1827,
    1828,   503,  1829,  2099,  1830,   504,   505,  2105,  1831,  1832,
    1833,   506,  1834,   507,   508,   509,   510,  2109,  1835,  1836,
    1837,  1838,  1839,   511,   512,   513,   514,  1531,   515,   516,
     517,  2115,  1840,   518,   519,   520,   521,   522,   389,   523,
     524,   525,  1841,  1842,   526,   638,  1843,   527,   639,  1713,
    1714,  1844,  1845,  1846,  1847,  1848,   528,   529,  1849,   390,
    1850,  1851,  1852,   530,   531,  1853,  1854,   532,  1855,  1856,
    1857,   533,   534,   535,  1858,   640,  1715,  1716,  1533,   536,
     537,   538,   539,   540,   541,   542,   543,   544,  1859,   545,
     546,   391,   547,  1860,   548,   549,   550,   551,  1861,  1862,
    1863,   552,   641,   553,   554,  1864,  1865,  1534,  1866,  1867,
    1868,  1869,   555,   556,  1870,  1535,  1871,  1872,  1873,  1874,
     392,  1875,   557,  1876,  1877,   558,  1878,   559,  1879,  1880,
     642,  1881,  1882,  1883,  1884,   560,   561,   562,   563,   564,
    1885,   565,  1886,   566,  1887,  1888,   567,  1889,  1890,  1891,
    1892,  1893,  1894,   568,  1895,  1896,  1897,  1898,  1899,   644,
    1717,  1718,   569,   570,   571,   572,   573,   574,   575,  1900,
     576,  1901,   577,  1902,   578,  1536,   579,   580,   616,   618,
     643,   645,  1903,   646,  1904,  1905,  1906,  1907,  1908,  1909,
    1910,  2002,   647,  1911,  1912,   668,   669,   670,   671,  1913,
     683,  1914,  1915,  1916,   684,  1917,   720,  1918,   728,  1919,
    1920,  1921,  1922,   729,   730,   731,   740,  2203,  2204,   743,
     745,   747,   749,   750,   751,   752,   753,   758,  2180,  2181,
     763,  1923,  1924,  1925,  2185,   764,  2187,   765,   766,   767,
     770,  1926,   771,  1927,  1928,  1929,   772,   773,   774,   775,
    1930,  1103,  1931,  1932,  1933,   776,   777,   781,  1934,   784,
     607,   794,  1935,  1936,   795,   796,  1937,  1938,  1939,  1940,
     814,   830,   834,  1941,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     853,   607,   854,   855,   856,   857,  2234,  2236,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   860,   607,  1942,  1943,  1944,  1945,  1946,   861,
     583,   584,   585,   586,   587,   588,   589,   862,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   865,   607,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   866,   607,   867,   942,   890,  2293,   944,   894,
     946,   905,   916,   948,   956,   958,   583,   584,   585,   586,
     587,   588,   589,  2304,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   965,   607,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   966,   607,  1647,  1947,  1948,  1949,  1950,
    1951,   968,  1952,   969,   583,   584,   585,   586,   587,   588,
     589,  2334,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   970,
     607,   971,   972,   973,  2352,   974,   975,   976,   977,  1823,
    1824,  1825,  1826,  1827,  1828,   978,  1829,   979,  1830,   980,
     379,  2365,  1831,  1832,  1833,   982,  1834,   983,   984,   985,
     986,   987,  1835,  1836,  1837,  1838,  1839,   988,   989,   990,
    2379,  2380,   991,   992,   993,   995,  1840,   996,   997,   998,
     999,  1000,  1001,  1002,  1004,  1003,  1841,  1842,  1009,  1010,
    1843,  1011,  1043,  1013,  1014,  1844,  1845,  1846,  1847,  1848,
    1015,  1022,  1849,  1026,  1850,  1851,  1852,  1032,  1036,  1853,
    1854,  1037,  1855,  1856,  1857,  1038,  1045,  1046,  1858,  1047,
    1048,  1052,  1049,  1053,  1054,  1055,  1056,  1059,  1060,  1061,
    1062,  1063,  1859,  1057,  1065,  1064,  1066,  1860,  1068,  1069,
    1090,  1070,  1861,  1862,  1863,  1092,  1085,  1093,  1094,  1864,
    1865,  1096,  1866,  1867,  1868,  1869,  1104,  1110,  1870,    16,
    2130,  1872,  1873,  1874,  1154,  1875,  2448,  1876,  1877,  1175,
    1878,  1168,  1879,  1880,  1169,  1881,  1882,  1883,  1884,  1170,
    1176,  1177,   -84,  1221,  1885,  1224,  1886,  1231,  1887,  1888,
    1225,  1889,  1890,  1891,  1892,  1893,  1894,  1226,  1895,  1896,
    1897,  1898,  1899,  1232,  1234,  2469,  1247,  1235,  1250,  1236,
    1246,  1249,  1252,  1900,  1251,  1901,  1253,  1902,  1258,  1254,
    1255,  1256,  1262,  1257,  1263,  2482,  1903,  1270,  1904,  1905,
    1906,  1907,  1908,  1909,  1910,  1040,  1271,  1911,  1912,  1272,
    1275,  1276,  1277,  1913,  1278,  1914,  1915,  1916,  1279,  1917,
    1280,  1918,  1281,  1919,  1920,  1921,  1922,  1282,  1285,  1290,
    1307,  1304,  1305,  1306,  1329,  1309,  1308,  1315,  1311,  1336,
    1328,  1338,  1341,  1342,  1344,  1923,  1924,  1925,  1343,  1346,
    1348,  1349,  1350,  1363,  1375,  1926,  1376,  1927,  1928,  1929,
    1379,  1380,  1386,  1381,  1930,  1396,  1931,  1932,  1933,  1398,
    1399,  1404,  1934,  1423,  1424,  1425,  1935,  1936,  1434,  1426,
    1937,  1938,  1939,  1940,  1427,  1428,  1429,  1941,  1119,  1435,
    1823,  1824,  1825,  1826,  1827,  1828,  1436,  1829,  1437,  1830,
    1438,  1439,  2557,  1831,  1832,  1833,  1440,  1834,  1441,  1442,
    1443,   -86,  1477,  1835,  1836,  1837,  1838,  1839,   759,  1480,
    1482,  1486,  1489,  1490,  1502,  1504,  1503,  1840,  1942,  1943,
    1944,  1945,  1946,  1505,  1509,  1510,  1512,  1841,  1842,  1511,
    1515,  1843,  1539,  1516,  1120,  1517,  1844,  1845,  1846,  1847,
    1848,  1540,  1518,  1849,  1541,  1850,  1851,  1852,  1542,  1543,
    1853,  1854,  1557,  1855,  1856,  1857,  1544,  1554,  1555,  1858,
    1556,  1571,  1572,  1573,  1581,  1574,  1575,  1579,  1576,  1593,
    1600,  1584,  1586,  1859,  1587,  1596,  1601,  1602,  1860,  1608,
    1609,  1612,  1121,  1861,  1862,  1863,  1614,  1619,  1613,  1617,
    1864,  1865,  1618,  1866,  1867,  1868,  1869,  1620,  1623,  1870,
    1625,  2274,  1872,  1873,  1874,  1628,  1875,  1629,  1876,  1877,
    1630,  1878,  1631,  1879,  1880,  1643,  1881,  1882,  1883,  1884,
    1947,  1948,  1949,  1950,  1951,  1885,  1952,  1886,  1644,  1887,
    1888,  1639,  1889,  1890,  1891,  1892,  1893,  1894,  1633,  1895,
    1896,  1897,  1898,  1899,  1645,  1654,  1740,  1743,  1663,  1664,
    1681,  1739,  1747,  1748,  1900,  1728,  1901,  1757,  1902,  1758,
    1759,  1761,  1768,  1762,  1773,  1774,  1778,  1903,  1779,  1904,
    1905,  1906,  1907,  1908,  1909,  1910,  1682,  1683,  1911,  1912,
    1729,  1684,  1685,  1686,  1913,  1687,  1914,  1915,  1916,  1696,
    1917,  1699,  1918,  1735,  1919,  1920,  1921,  1922,  1702,  1755,
    1781,  1791,  1737,  1792,  1738,  1744,  1794,  1745,  1746,  1753,
    1797,  1799,  1760,  1766,  1763,  1798,  1923,  1924,  1925,  1767,
    1775,  1801,  1810,  1776,  1777,  1811,  1926,  1780,  1927,  1928,
    1929,  1812,  1804,  1813,  1814,  1930,  1815,  1931,  1932,  1933,
    1816,  1818,  1954,  1934,  1955,  1956,  1958,  1935,  1936,  1961,
    1963,  1937,  1938,  1939,  1940,  1965,  1969,  1968,  1941,  1970,
    1973,  1823,  1824,  1825,  1826,  1827,  1828,  1980,  1829,  1981,
    1830,  1982,  1983,  2006,  1831,  1832,  1833,  1986,  1834,  2007,
    2000,  2011,  2013,  2042,  1835,  1836,  1837,  1838,  1839,  2037,
    2063,  2046,  2064,  2065,  2066,  2068,  2070,  2069,  1840,  1942,
    1943,  1944,  1945,  1946,  2067,  2073,  2077,  2080,  1841,  1842,
    2084,  2085,  1843,  2087,  2088,  2089,  2091,  1844,  1845,  1846,
    1847,  1848,  2093,  2098,  1849,  2100,  1850,  1851,  1852,  2113,
    2101,  1853,  1854,  2106,  1855,  1856,  1857,  2107,  2108,  2114,
    1858,  2111,  2116,  2119,  2137,  2141,  2138,  2121,  2148,  2151,
    2152,  2122,  2123,  2150,  1859,  2124,  2154,  2157,  2158,  1860,
    2127,  2128,  2140,  2145,  1861,  1862,  1863,  2178,  2189,  2147,
    2139,  1864,  1865,  2182,  1866,  1867,  1868,  1869,  2156,  2159,
    1870,  2188,  2277,  1872,  1873,  1874,  2206,  1875,  2191,  1876,
    1877,  2212,  1878,  2207,  1879,  1880,  2213,  1881,  1882,  1883,
    1884,  1947,  1948,  1949,  1950,  1951,  1885,  1952,  1886,  2216,
    1887,  1888,  2243,  1889,  1890,  1891,  1892,  1893,  1894,  2214,
    1895,  1896,  1897,  1898,  1899,  2217,  2218,  2233,  2244,  2246,
    2248,  2250,  2251,  2252,  2257,  1900,  2249,  1901,  2263,  1902,
    2265,  2279,  2264,  2283,  2267,  2268,  2269,  2278,  1903,  2291,
    1904,  1905,  1906,  1907,  1908,  1909,  1910,  2290,  2292,  1911,
    1912,  2294,  2299,  2301,  2311,  1913,  2305,  1914,  1915,  1916,
    2306,  1917,  2315,  1918,  2316,  1919,  1920,  1921,  1922,  2317,
    2320,  2322,  2323,  2335,  2326,  2337,  2338,  2339,  2343,  2340,
    2344,  2350,  2347,  2348,  2351,  2353,  2354,  1923,  1924,  1925,
    2355,  2356,  2363,  2367,  2368,  2370,  2364,  1926,  2373,  1927,
    1928,  1929,  2371,  2372,  2374,  2375,  1930,  2378,  1931,  1932,
    1933,  2385,  2381,  2390,  1934,  2387,  2391,  2392,  1935,  1936,
    2394,  2393,  1937,  1938,  1939,  1940,  2398,  2403,  2396,  1941,
    2408,  2409,  1823,  1824,  1825,  1826,  1827,  1828,  2410,  1829,
    2415,  1830,  2416,  2417,  2418,  1831,  1832,  1833,  2419,  1834,
    2421,  2422,  2424,  2425,  2426,  1835,  1836,  1837,  1838,  1839,
    2432,  2427,  2428,  2429,  2447,  2431,  2449,  2434,  2436,  1840,
    1942,  1943,  1944,  1945,  1946,  2454,  2437,  2457,  2438,  1841,
    1842,  2442,  2440,  1843,  2441,  2445,  2444,  2458,  1844,  1845,
    1846,  1847,  1848,  2446,  2452,  1849,  2459,  1850,  1851,  1852,
    2460,  2465,  1853,  1854,  2466,  1855,  1856,  1857,  2468,  2471,
    2474,  1858,  2476,  2477,  2475,  2478,  2479,  2480,  2481,  2483,
    2488,  2490,  2497,  2498,  2502,  1859,  2505,  2507,  2511,  2517,
    1860,  2518,  2521,  2522,  2524,  1861,  1862,  1863,  2523,  2526,
    2525,  2528,  1864,  1865,  2529,  1866,  1867,  1868,  1869,  2532,
    2537,  1870,  2535,  2284,  1872,  1873,  1874,  2536,  1875,  2543,
    1876,  1877,  2538,  1878,  2540,  1879,  1880,  2542,  1881,  1882,
    1883,  1884,  1947,  1948,  1949,  1950,  1951,  1885,  1952,  1886,
    2545,  1887,  1888,  2549,  1889,  1890,  1891,  1892,  1893,  1894,
    2550,  1895,  1896,  1897,  1898,  1899,  2551,  2558,  2564,  2565,
    2553,  2554,  2555,  2556,  2570,  2165,  1900,  2567,  1901,  2572,
    1902,  2575,  2577,  2578,  2580,  2581,  2587,  2582,  2589,  1903,
    2583,  1904,  1905,  1906,  1907,  1908,  1909,  1910,  2588,  2596,
    1911,  1912,  2584,  2593,  2598,  2608,  1913,  2615,  1914,  1915,
    1916,  2603,  1917,  2611,  1918,  2604,  1919,  1920,  1921,  1922,
    2613,  2639,  2627,  2624,  2640,  2648,  2647,  2651,  2652,  2653,
    2654,  2655,  2656,   374,  1655,  1475,  2072,  2179,  1923,  1924,
    1925,   790,   945,  2238,  1406,   960,  1754,   440,  1926,  1089,
    1927,  1928,  1929,  1091,  2571,  2389,  1607,  1930,  2153,  1931,
    1932,  1933,  2514,  1514,  1595,  1934,  1261,  1960,  2295,  1935,
    1936,  1345,  1347,  1937,  1938,  1939,  1940,  2143,   981,  2399,
    1941,   783,  2579,  1823,  1824,  1825,  1826,  1827,  1828,   206,
    1829,  1100,  1830,  1994,  2325,  2302,  1831,  1832,  1833,  2625,
    1834,  1990,  1300,  1974,  2110,   465,  1835,  1836,  1837,  1838,
    1839,   744,  1316,  1389,  1012,     0,     0,     0,     0,     0,
    1840,  1942,  1943,  1944,  1945,  1946,     0,     0,     0,     0,
    1841,  1842,     0,     0,  1843,     0,     0,     0,     0,  1844,
    1845,  1846,  1847,  1848,     0,     0,  1849,     0,  1850,  1851,
    1852,     0,     0,  1853,  1854,     0,  1855,  1856,  1857,     0,
       0,     0,  1858,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1859,     0,     0,     0,
       0,  1860,     0,     0,     0,     0,  1861,  1862,  1863,     0,
       0,     0,     0,  1864,  1865,     0,  1866,  1867,  1868,  1869,
       0,     0,  1870,     0,  2285,  1872,  1873,  1874,     0,  1875,
       0,  1876,  1877,     0,  1878,     0,  1879,  1880,     0,  1881,
    1882,  1883,  1884,  1947,  1948,  1949,  1950,  1951,  1885,  1952,
    1886,     0,  1887,  1888,     0,  1889,  1890,  1891,  1892,  1893,
    1894,     0,  1895,  1896,  1897,  1898,  1899,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1900,     0,  1901,
       0,  1902,     0,     0,     0,     0,     0,     0,     0,     0,
    1903,     0,  1904,  1905,  1906,  1907,  1908,  1909,  1910,     0,
       0,  1911,  1912,     0,     0,     0,     0,  1913,     0,  1914,
    1915,  1916,     0,  1917,     0,  1918,     0,  1919,  1920,  1921,
    1922,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1923,
    1924,  1925,     0,     0,     0,     0,     0,     0,     0,  1926,
       0,  1927,  1928,  1929,     0,     0,     0,     0,  1930,     0,
    1931,  1932,  1933,     0,     0,     0,  1934,     0,     0,     0,
    1935,  1936,     0,     0,  1937,  1938,  1939,  1940,     0,     0,
       0,  1941,     0,     0,  1823,  1824,  1825,  1826,  1827,  1828,
       0,  1829,     0,  1830,     0,     0,     0,  1831,  1832,  1833,
       0,  1834,     0,     0,     0,     0,     0,  1835,  1836,  1837,
    1838,  1839,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1840,  1942,  1943,  1944,  1945,  1946,     0,     0,     0,
       0,  1841,  1842,     0,     0,  1843,     0,     0,     0,     0,
    1844,  1845,  1846,  1847,  1848,     0,     0,  1849,     0,  1850,
    1851,  1852,     0,     0,  1853,  1854,     0,  1855,  1856,  1857,
       0,     0,     0,  1858,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1859,     0,     0,
       0,     0,  1860,     0,     0,     0,     0,  1861,  1862,  1863,
       0,     0,     0,     0,  1864,  1865,     0,  1866,  1867,  1868,
    1869,     0,     0,  1870,     0,  2286,  1872,  1873,  1874,     0,
    1875,     0,  1876,  1877,     0,  1878,     0,  1879,  1880,     0,
    1881,  1882,  1883,  1884,  1947,  1948,  1949,  1950,  1951,  1885,
    1952,  1886,     0,  1887,  1888,     0,  1889,  1890,  1891,  1892,
    1893,  1894,     0,  1895,  1896,  1897,  1898,  1899,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1900,     0,
    1901,     0,  1902,     0,     0,     0,     0,     0,     0,     0,
       0,  1903,     0,  1904,  1905,  1906,  1907,  1908,  1909,  1910,
       0,     0,  1911,  1912,     0,     0,     0,     0,  1913,     0,
    1914,  1915,  1916,     0,  1917,     0,  1918,     0,  1919,  1920,
    1921,  1922,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1923,  1924,  1925,     0,     0,     0,     0,     0,     0,     0,
    1926,     0,  1927,  1928,  1929,     0,     0,     0,     0,  1930,
       0,  1931,  1932,  1933,     0,     0,     0,  1934,     0,     0,
       0,  1935,  1936,     0,     0,  1937,  1938,  1939,  1940,     0,
       0,     0,  1941,     0,     0,  1823,  1824,  1825,  1826,  1827,
    1828,     0,  1829,     0,  1830,     0,     0,     0,  1831,  1832,
    1833,     0,  1834,     0,     0,     0,     0,     0,  1835,  1836,
    1837,  1838,  1839,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1840,  1942,  1943,  1944,  1945,  1946,     0,     0,
       0,     0,  1841,  1842,     0,     0,  1843,     0,     0,     0,
       0,  1844,  1845,  1846,  1847,  1848,     0,     0,  1849,     0,
    1850,  1851,  1852,     0,     0,  1853,  1854,     0,  1855,  1856,
    1857,     0,     0,     0,  1858,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1859,     0,
       0,     0,     0,  1860,     0,     0,     0,     0,  1861,  1862,
    1863,     0,     0,     0,     0,  1864,  1865,     0,  1866,  1867,
    1868,  1869,     0,     0,  1870,     0,  2287,  1872,  1873,  1874,
       0,  1875,     0,  1876,  1877,     0,  1878,     0,  1879,  1880,
       0,  1881,  1882,  1883,  1884,  1947,  1948,  1949,  1950,  1951,
    1885,  1952,  1886,     0,  1887,  1888,     0,  1889,  1890,  1891,
    1892,  1893,  1894,     0,  1895,  1896,  1897,  1898,  1899,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1900,
       0,  1901,     0,  1902,     0,     0,     0,     0,     0,     0,
       0,     0,  1903,     0,  1904,  1905,  1906,  1907,  1908,  1909,
    1910,     0,     0,  1911,  1912,     0,     0,     0,     0,  1913,
       0,  1914,  1915,  1916,     0,  1917,     0,  1918,     0,  1919,
    1920,  1921,  1922,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1923,  1924,  1925,     0,     0,     0,     0,     0,     0,
       0,  1926,     0,  1927,  1928,  1929,     0,     0,     0,     0,
    1930,     0,  1931,  1932,  1933,     0,     0,     0,  1934,     0,
       0,     0,  1935,  1936,     0,     0,  1937,  1938,  1939,  1940,
       0,     0,     0,  1941,     0,     0,  1823,  1824,  1825,  1826,
    1827,  1828,     0,  1829,     0,  1830,     0,     0,     0,  1831,
    1832,  1833,     0,  1834,     0,     0,     0,     0,     0,  1835,
    1836,  1837,  1838,  1839,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1840,  1942,  1943,  1944,  1945,  1946,     0,
       0,     0,     0,  1841,  1842,     0,     0,  1843,     0,     0,
       0,     0,  1844,  1845,  1846,  1847,  1848,     0,     0,  1849,
       0,  1850,  1851,  1852,     0,     0,  1853,  1854,     0,  1855,
    1856,  1857,     0,     0,     0,  1858,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1859,
       0,     0,     0,     0,  1860,     0,     0,     0,     0,  1861,
    1862,  1863,     0,     0,     0,     0,  1864,  1865,     0,  1866,
    1867,  1868,  1869,     0,     0,  1870,     0,  2288,  1872,  1873,
    1874,     0,  1875,     0,  1876,  1877,     0,  1878,     0,  1879,
    1880,     0,  1881,  1882,  1883,  1884,  1947,  1948,  1949,  1950,
    1951,  1885,  1952,  1886,     0,  1887,  1888,     0,  1889,  1890,
    1891,  1892,  1893,  1894,     0,  1895,  1896,  1897,  1898,  1899,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1900,     0,  1901,     0,  1902,     0,     0,     0,     0,     0,
       0,     0,     0,  1903,     0,  1904,  1905,  1906,  1907,  1908,
    1909,  1910,     0,     0,  1911,  1912,     0,     0,     0,     0,
    1913,     0,  1914,  1915,  1916,     0,  1917,     0,  1918,     0,
    1919,  1920,  1921,  1922,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1923,  1924,  1925,     0,     0,     0,     0,     0,
       0,     0,  1926,     0,  1927,  1928,  1929,     0,     0,     0,
       0,  1930,     0,  1931,  1932,  1933,     0,     0,     0,  1934,
       0,     0,     0,  1935,  1936,     0,     0,  1937,  1938,  1939,
    1940,     0,     0,     0,  1941,     0,     0,  1823,  1824,  1825,
    1826,  1827,  1828,     0,  1829,     0,  1830,     0,     0,     0,
    1831,  1832,  1833,     0,  1834,     0,     0,     0,     0,     0,
    1835,  1836,  1837,  1838,  1839,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1840,  1942,  1943,  1944,  1945,  1946,
       0,     0,     0,     0,  1841,  1842,     0,     0,  1843,     0,
       0,     0,     0,  1844,  1845,  1846,  1847,  1848,     0,     0,
    1849,     0,  1850,  1851,  1852,     0,     0,  1853,  1854,     0,
    1855,  1856,  1857,     0,     0,     0,  1858,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1859,     0,     0,     0,     0,  1860,     0,     0,     0,     0,
    1861,  1862,  1863,     0,     0,     0,     0,  1864,  1865,     0,
    1866,  1867,  1868,  1869,     0,     0,  1870,     0,  2289,  1872,
    1873,  1874,     0,  1875,     0,  1876,  1877,     0,  1878,     0,
    1879,  1880,     0,  1881,  1882,  1883,  1884,  1947,  1948,  1949,
    1950,  1951,  1885,  1952,  1886,     0,  1887,  1888,     0,  1889,
    1890,  1891,  1892,  1893,  1894,     0,  1895,  1896,  1897,  1898,
    1899,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1900,     0,  1901,     0,  1902,     0,     0,     0,     0,
       0,     0,     0,     0,  1903,     0,  1904,  1905,  1906,  1907,
    1908,  1909,  1910,     0,     0,  1911,  1912,     0,     0,     0,
       0,  1913,     0,  1914,  1915,  1916,     0,  1917,     0,  1918,
       0,  1919,  1920,  1921,  1922,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1923,  1924,  1925,     0,     0,     0,     0,
       0,     0,     0,  1926,     0,  1927,  1928,  1929,     0,     0,
       0,     0,  1930,     0,  1931,  1932,  1933,     0,     0,     0,
    1934,     0,     0,     0,  1935,  1936,     0,     0,  1937,  1938,
    1939,  1940,     0,     0,     0,  1941,     0,     0,  1823,  1824,
    1825,  1826,  1827,  1828,     0,  1829,     0,  1830,     0,     0,
       0,  1831,  1832,  1833,     0,  1834,     0,     0,     0,     0,
       0,  1835,  1836,  1837,  1838,  1839,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1840,  1942,  1943,  1944,  1945,
    1946,     0,     0,     0,     0,  1841,  1842,     0,     0,  1843,
       0,     0,     0,     0,  1844,  1845,  1846,  1847,  1848,     0,
       0,  1849,     0,  1850,  1851,  1852,     0,     0,  1853,  1854,
       0,  1855,  1856,  1857,     0,     0,     0,  1858,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1859,     0,     0,     0,     0,  1860,     0,     0,     0,
       0,  1861,  1862,  1863,     0,     0,     0,     0,  1864,  1865,
       0,  1866,  1867,  1868,  1869,     0,     0,  1870,     0,  2383,
    1872,  1873,  1874,     0,  1875,     0,  1876,  1877,     0,  1878,
       0,  1879,  1880,     0,  1881,  1882,  1883,  1884,  1947,  1948,
    1949,  1950,  1951,  1885,  1952,  1886,     0,  1887,  1888,     0,
    1889,  1890,  1891,  1892,  1893,  1894,     0,  1895,  1896,  1897,
    1898,  1899,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1900,     0,  1901,     0,  1902,     0,     0,     0,
       0,     0,     0,     0,     0,  1903,     0,  1904,  1905,  1906,
    1907,  1908,  1909,  1910,     0,     0,  1911,  1912,     0,     0,
       0,     0,  1913,     0,  1914,  1915,  1916,     0,  1917,     0,
    1918,     0,  1919,  1920,  1921,  1922,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1923,  1924,  1925,     0,     0,     0,
       0,     0,     0,     0,  1926,     0,  1927,  1928,  1929,     0,
       0,     0,     0,  1930,     0,  1931,  1932,  1933,     0,     0,
       0,  1934,     0,     0,     0,  1935,  1936,     0,     0,  1937,
    1938,  1939,  1940,     0,     0,     0,  1941,     0,     0,  1823,
    1824,  1825,  1826,  1827,  1828,     0,  1829,     0,  1830,     0,
       0,     0,  1831,  1832,  1833,     0,  1834,     0,     0,     0,
       0,     0,  1835,  1836,  1837,  1838,  1839,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1840,  1942,  1943,  1944,
    1945,  1946,     0,     0,     0,     0,  1841,  1842,     0,     0,
    1843,     0,     0,     0,     0,  1844,  1845,  1846,  1847,  1848,
       0,     0,  1849,     0,  1850,  1851,  1852,     0,     0,  1853,
    1854,     0,  1855,  1856,  1857,     0,     0,     0,  1858,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1859,     0,     0,     0,     0,  1860,     0,     0,
       0,     0,  1861,  1862,  1863,     0,     0,     0,     0,  1864,
    1865,     0,  1866,  1867,  1868,  1869,     0,     0,  1870,     0,
    2384,  1872,  1873,  1874,     0,  1875,     0,  1876,  1877,     0,
    1878,     0,  1879,  1880,     0,  1881,  1882,  1883,  1884,  1947,
    1948,  1949,  1950,  1951,  1885,  1952,  1886,     0,  1887,  1888,
       0,  1889,  1890,  1891,  1892,  1893,  1894,     0,  1895,  1896,
    1897,  1898,  1899,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1900,     0,  1901,     0,  1902,     0,     0,
       0,     0,     0,     0,     0,     0,  1903,     0,  1904,  1905,
    1906,  1907,  1908,  1909,  1910,     0,     0,  1911,  1912,     0,
       0,     0,     0,  1913,     0,  1914,  1915,  1916,     0,  1917,
       0,  1918,     0,  1919,  1920,  1921,  1922,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1923,  1924,  1925,     0,     0,
       0,     0,     0,     0,     0,  1926,     0,  1927,  1928,  1929,
       0,     0,     0,     0,  1930,     0,  1931,  1932,  1933,     0,
       0,     0,  1934,     0,     0,     0,  1935,  1936,     0,     0,
    1937,  1938,  1939,  1940,     0,     0,     0,  1941,     0,     0,
    1823,  1824,  1825,  1826,  1827,  1828,     0,  1829,     0,  1830,
       0,     0,     0,  1831,  1832,  1833,     0,  1834,     0,     0,
       0,     0,     0,  1835,  1836,  1837,  1838,  1839,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1840,  1942,  1943,
    1944,  1945,  1946,     0,     0,     0,     0,  1841,  1842,     0,
       0,  1843,     0,     0,     0,     0,  1844,  1845,  1846,  1847,
    1848,     0,     0,  1849,     0,  1850,  1851,  1852,     0,     0,
    1853,  1854,     0,  1855,  1856,  1857,     0,     0,     0,  1858,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1859,     0,     0,     0,     0,  1860,     0,
       0,     0,     0,  1861,  1862,  1863,     0,     0,     0,     0,
    1864,  1865,     0,  1866,  1867,  1868,  1869,     0,     0,  1870,
       0,  2464,  1872,  1873,  1874,     0,  1875,     0,  1876,  1877,
       0,  1878,     0,  1879,  1880,     0,  1881,  1882,  1883,  1884,
    1947,  1948,  1949,  1950,  1951,  1885,  1952,  1886,     0,  1887,
    1888,     0,  1889,  1890,  1891,  1892,  1893,  1894,     0,  1895,
    1896,  1897,  1898,  1899,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1900,     0,  1901,     0,  1902,     0,
       0,     0,     0,     0,     0,     0,     0,  1903,     0,  1904,
    1905,  1906,  1907,  1908,  1909,  1910,     0,     0,  1911,  1912,
       0,     0,     0,     0,  1913,     0,  1914,  1915,  1916,     0,
    1917,     0,  1918,     0,  1919,  1920,  1921,  1922,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1923,  1924,  1925,     0,
       0,     0,     0,     0,     0,     0,  1926,     0,  1927,  1928,
    1929,     0,     0,     0,     0,  1930,     0,  1931,  1932,  1933,
       0,     0,     0,  1934,     0,     0,     0,  1935,  1936,     0,
       0,  1937,  1938,  1939,  1940,     0,     0,     0,  1941,     0,
       0,  1823,  1824,  1825,  1826,  1827,  1828,     0,  1829,     0,
    1830,     0,     0,     0,  1831,  1832,  1833,     0,  1834,     0,
       0,     0,     0,     0,  1835,  1836,  1837,  1838,  1839,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1840,  1942,
    1943,  1944,  1945,  1946,     0,     0,     0,     0,  1841,  1842,
       0,     0,  1843,     0,     0,     0,     0,  1844,  1845,  1846,
    1847,  1848,     0,     0,  1849,     0,  1850,  1851,  1852,     0,
       0,  1853,  1854,     0,  1855,  1856,  1857,     0,     0,     0,
    1858,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1859,     0,     0,     0,     0,  1860,
       0,     0,     0,     0,  1861,  1862,  1863,     0,     0,     0,
       0,  1864,  1865,     0,  1866,  1867,  1868,  1869,     0,     0,
    1870,     0,  2467,  1872,  1873,  1874,     0,  1875,     0,  1876,
    1877,     0,  1878,     0,  1879,  1880,     0,  1881,  1882,  1883,
    1884,  1947,  1948,  1949,  1950,  1951,  1885,  1952,  1886,     0,
    1887,  1888,     0,  1889,  1890,  1891,  1892,  1893,  1894,     0,
    1895,  1896,  1897,  1898,  1899,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1900,     0,  1901,     0,  1902,
       0,     0,     0,     0,     0,     0,     0,     0,  1903,     0,
    1904,  1905,  1906,  1907,  1908,  1909,  1910,     0,     0,  1911,
    1912,     0,     0,     0,     0,  1913,     0,  1914,  1915,  1916,
       0,  1917,     0,  1918,     0,  1919,  1920,  1921,  1922,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1923,  1924,  1925,
       0,     0,     0,     0,     0,     0,     0,  1926,     0,  1927,
    1928,  1929,     0,     0,     0,     0,  1930,     0,  1931,  1932,
    1933,     0,     0,     0,  1934,     0,     0,     0,  1935,  1936,
       0,     0,  1937,  1938,  1939,  1940,     0,     0,     0,  1941,
       0,     0,  1823,  1824,  1825,  1826,  1827,  1828,     0,  1829,
       0,  1830,     0,     0,     0,  1831,  1832,  1833,     0,  1834,
       0,     0,     0,     0,     0,  1835,  1836,  1837,  1838,  1839,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1840,
    1942,  1943,  1944,  1945,  1946,     0,     0,     0,     0,  1841,
    1842,     0,     0,  1843,     0,     0,     0,     0,  1844,  1845,
    1846,  1847,  1848,     0,     0,  1849,     0,  1850,  1851,  1852,
       0,     0,  1853,  1854,     0,  1855,  1856,  1857,     0,     0,
       0,  1858,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1859,     0,     0,     0,     0,
    1860,     0,     0,     0,     0,  1861,  1862,  1863,     0,     0,
       0,     0,  1864,  1865,     0,  1866,  1867,  1868,  1869,     0,
       0,  1870,     0,  2510,  1872,  1873,  1874,     0,  1875,     0,
    1876,  1877,     0,  1878,     0,  1879,  1880,     0,  1881,  1882,
    1883,  1884,  1947,  1948,  1949,  1950,  1951,  1885,  1952,  1886,
       0,  1887,  1888,     0,  1889,  1890,  1891,  1892,  1893,  1894,
       0,  1895,  1896,  1897,  1898,  1899,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1900,     0,  1901,     0,
    1902,     0,     0,     0,     0,     0,     0,     0,     0,  1903,
       0,  1904,  1905,  1906,  1907,  1908,  1909,  1910,     0,     0,
    1911,  1912,     0,     0,     0,     0,  1913,     0,  1914,  1915,
    1916,     0,  1917,     0,  1918,     0,  1919,  1920,  1921,  1922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1923,  1924,
    1925,     0,     0,     0,     0,     0,     0,     0,  1926,     0,
    1927,  1928,  1929,     0,     0,     0,     0,  1930,     0,  1931,
    1932,  1933,     0,     0,     0,  1934,     0,     0,     0,  1935,
    1936,     0,     0,  1937,  1938,  1939,  1940,     0,     0,     0,
    1941,     0,     0,  1823,  1824,  1825,  1826,  1827,  1828,     0,
    1829,     0,  1830,     0,     0,     0,  1831,  1832,  1833,     0,
    1834,     0,     0,     0,     0,     0,  1835,  1836,  1837,  1838,
    1839,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1840,  1942,  1943,  1944,  1945,  1946,     0,     0,     0,     0,
    1841,  1842,     0,     0,  1843,     0,     0,     0,     0,  1844,
    1845,  1846,  1847,  1848,     0,     0,  1849,     0,  1850,  1851,
    1852,     0,     0,  1853,  1854,     0,  1855,  1856,  1857,     0,
       0,     0,  1858,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1859,     0,     0,     0,
       0,  1860,     0,     0,     0,     0,  1861,  1862,  1863,     0,
       0,     0,     0,  1864,  1865,     0,  1866,  1867,  1868,  1869,
       0,     0,  1870,     0,  2548,  1872,  1873,  1874,     0,  1875,
       0,  1876,  1877,     0,  1878,     0,  1879,  1880,     0,  1881,
    1882,  1883,  1884,  1947,  1948,  1949,  1950,  1951,  1885,  1952,
    1886,     0,  1887,  1888,     0,  1889,  1890,  1891,  1892,  1893,
    1894,     0,  1895,  1896,  1897,  1898,  1899,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1900,     0,  1901,
       0,  1902,     0,     0,     0,     0,     0,     0,     0,     0,
    1903,     0,  1904,  1905,  1906,  1907,  1908,  1909,  1910,     0,
       0,  1911,  1912,     0,     0,     0,     0,  1913,     0,  1914,
    1915,  1916,     0,  1917,     0,  1918,     0,  1919,  1920,  1921,
    1922,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     212,   213,   214,   215,   216,   217,     0,     0,     0,  1923,
    1924,  1925,     0,     0,   218,   219,     0,     0,     0,  1926,
       0,  1927,  1928,  1929,   220,   221,     0,     0,  1930,     0,
    1931,  1932,  1933,     0,     0,     0,  1934,   222,     0,     0,
    1935,  1936,     0,     0,  1937,  1938,  1939,  1940,     0,     0,
       0,  1941,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
       0,     0,     0,     0,   224,     0,     0,   225,   226,     0,
       0,     0,     0,     0,     0,     0,   227,     0,     0,     0,
       0,     0,  1942,  1943,  1944,  1945,  1946,     0,     0,     0,
       0,     0,     0,   228,     0,     0,     0,   229,   583,   584,
     585,   586,   587,   588,   589,     0,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,     0,   607,     0,   583,   584,   585,   586,
     587,   588,   589,   230,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     232,     0,     0,     0,  1947,  1948,  1949,  1950,  1951,     0,
    1952,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   233,   234,     0,     0,     0,     0,     0,     0,
     235,   236,     0,     0,     0,   237,   584,   585,   586,   587,
     588,   589,     0,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     238,   607,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   344,   583,   584,   585,   586,   587,   588,
     589,     0,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,     0,
     607,     0,     0,     0,   800,     0,     0,     0,     0,     0,
       0,   223,     0,     0,     0,     0,   224,     0,     0,   225,
     226,   583,   584,   585,   586,   587,   588,   589,   227,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,     0,   607,   583,   584,
     585,   586,   587,   588,   589,     0,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,     0,   607,     0,  1128,   583,   584,   585,
     586,   587,   588,   589,     0,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,  1129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   801,     0,     0,
       0,     0,   231,     0,     0,   583,   584,   585,   586,   587,
     588,   589,   232,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,   233,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   802,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   344,     0,     0,     0,     0,
       0,   922,     0,     0,     0,     0,     0,     0,   923,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,   225,   226,     0,     0,     0,     0,     0,     0,     0,
     227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   583,   584,   585,   586,   587,   588,   589,  1131,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,   583,
     584,   585,   586,   587,   588,   589,  1133,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   232,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1135,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,   924,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1141,     0,     0,     0,     0,
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
     220,     0,     0,     0,     0,     0,     0,   925,   583,   584,
     585,   586,   587,   588,   589,     0,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,     0,   607,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,     0,     0,     0,     0,
     224,     0,     0,   225,   226,   583,   584,   585,   586,   587,
     588,   589,   227,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
    1143,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1148,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,   583,
     584,   585,   586,   587,   588,   589,   232,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,     0,     0,     0,     0,
       0,   583,   584,   585,   586,   587,   588,   589,   233,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,     0,   607,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   472,     0,
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
       0,     0,   220,   841,     0,     0,     0,     0,     0,   344,
       0,   583,   584,   585,   586,   587,   588,   589,     0,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,  1149,   607,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,   224,     0,     0,   225,   226,     0,     0,     0,
       0,     0,     0,     0,   227,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,  1150,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   583,   584,   585,   586,   587,   588,
     589,  1151,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,     0,
     607,     0,     0,     0,     0,     0,     0,     0,  1163,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   232,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1164,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1165,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   220,     0,     0,     0,     0,     0,
       0,   344,   583,   584,   585,   586,   587,   588,   589,     0,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,  1167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
       0,     0,     0,     0,   224,     0,     0,   225,   226,   583,
     584,   585,   586,   587,   588,   589,   227,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1178,     0,   583,   584,   585,   586,
     587,   588,   589,  1117,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,     0,     0,   583,   584,   585,   586,   587,
     588,   589,  1187,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     231,   607,     0,   583,   584,   585,   586,   587,   588,   589,
     232,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,   583,   584,   585,   586,   587,
     588,   589,   233,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   344,     0,   583,   584,   585,   586,   587,
     588,   589,     0,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
    1188,   607,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   223,     0,     0,     0,     0,   224,     0,     0,   225,
     226,     0,     0,     0,     0,     0,     0,     0,   227,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1189,     0,     0,
       0,     0,  1641,   583,   584,   585,   586,   587,   588,   589,
       0,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,  1190,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,     0,     0,     0,     0,     0,
       0,     0,   231,  1191,     0,     0,     0,     0,     0,     0,
       0,     0,   232,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1193,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   344,   583,   584,   585,   586,
     587,   588,   589,     0,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,  1194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,   225,   226,   583,   584,   585,   586,   587,   588,   589,
     227,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,  1646,     0,   583,   584,   585,   586,
     587,   588,   589,     0,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,  1200,   607,   583,   584,   585,   586,   587,   588,   589,
       0,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,  1204,     0,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,   583,   584,   585,
     586,   587,   588,   589,   232,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,     0,     0,     0,     0,   583,
     584,   585,   586,   587,   588,   589,   233,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,     0,     0,     0,     0,
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
     220,     0,     0,     0,     0,     0,     0,   344,     0,   583,
     584,   585,   586,   587,   588,   589,     0,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,  1205,   607,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,     0,     0,     0,     0,
     224,     0,     0,   225,   226,     0,     0,     0,     0,     0,
       0,     0,   227,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1206,     0,     0,     0,     0,  2184,   583,   584,   585,
     586,   587,   588,   589,     0,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,  1207,     0,   583,   584,   585,   586,
     587,   588,   589,     0,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,  1208,   607,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1213,     0,     0,
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
       0,     0,   220,     0,     0,     0,     0,     0,     0,   344,
     583,   584,   585,   586,   587,   588,   589,     0,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,  1214,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,   224,     0,     0,   225,   226,   583,   584,   585,
     586,   587,   588,   589,   227,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,     0,     0,     0,  2186,     0,
     583,   584,   585,   586,   587,   588,   589,     0,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,  1397,   607,   583,   584,   585,
     586,   587,   588,   589,     0,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,  1668,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,   583,   584,   585,   586,   587,   588,   589,   232,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,     0,   607,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
     233,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   220,     0,     0,     0,     0,     0,
       0,   344,     0,   583,   584,   585,   586,   587,   588,   589,
       0,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,  1669,   607,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
       0,     0,     0,     0,   224,     0,     0,   225,   226,     0,
       0,     0,     0,     0,     0,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   583,   584,
     585,   586,   587,   588,   589,  1680,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,     0,   607,     0,     0,     0,     0,     0,
       0,   583,   584,   585,   586,   587,   588,   589,  1690,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,     0,   607,     0,     0,
       0,     0,     0,     0,     0,  1706,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1707,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
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
     341,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,   344,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,     0,   583,   584,   585,   586,   587,   588,
     589,  1711,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,     0,
     607,   583,   584,   585,   586,   587,   588,   589,     0,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,     0,   607,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   583,
     584,   585,   586,   587,   588,   589,  1712,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,     0,     0,     0,     0,
       0,     0,   583,   584,   585,   586,   587,   588,   589,  1725,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,   583,
     584,   585,   586,   587,   588,   589,     0,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,   583,   584,   585,   586,
     587,   588,   589,     0,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
       0,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,     0,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,   583,   584,   585,
     586,   587,   588,   589,     0,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,   583,   584,   585,   586,   587,   588,
     589,     0,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,     0,
     607,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,  1656,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
       0,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,     0,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,   583,   584,   585,
     586,   587,   588,   589,  1726,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,   583,   584,   585,   586,   587,
     588,   589,  1727,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  2227,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,  1152,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,  2230,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
    2231,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  2232,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,  1153,     0,   583,   584,   585,   586,   587,
     588,   589,     0,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
    1657,   607,   583,   584,   585,   586,   587,   588,   589,     0,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   906,   607,   583,
     584,   585,   586,   587,   588,   589,     0,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,  1116,   607,   583,   584,   585,   586,
     587,   588,   589,     0,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,  1122,   607,   583,   584,   585,   586,   587,   588,   589,
       0,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,  1123,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    1124,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1125,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,   583,   584,   585,
     586,   587,   588,   589,  1126,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,   583,   584,   585,   586,   587,
     588,   589,  1127,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  1132,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,  1136,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
    1137,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1138,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,     0,     0,   583,   584,   585,   586,   587,
     588,   589,  1142,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  1144,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,   583,
     584,   585,   586,   587,   588,   589,  1145,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,   583,   584,   585,   586,
     587,   588,   589,  1146,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    1155,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,  1156,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    1157,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1158,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,   583,   584,   585,
     586,   587,   588,   589,  1159,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,   583,   584,   585,   586,   587,
     588,   589,  1160,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  1161,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,  1162,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
    1166,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1179,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,     0,     0,   583,   584,   585,   586,   587,
     588,   589,  1180,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  1181,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,   583,
     584,   585,   586,   587,   588,   589,  1182,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,   583,   584,   585,   586,
     587,   588,   589,  1183,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    1184,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,  1185,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    1186,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1197,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,   583,   584,   585,
     586,   587,   588,   589,  1198,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,   583,   584,   585,   586,   587,
     588,   589,  1199,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  1203,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,  1209,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
    1210,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1211,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,     0,     0,   583,   584,   585,   586,   587,
     588,   589,  1239,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  1660,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,   583,
     584,   585,   586,   587,   588,   589,  1665,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,   583,   584,   585,   586,
     587,   588,   589,  1666,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    1667,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,  1670,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    1671,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1672,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,   583,   584,   585,
     586,   587,   588,   589,  1673,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,   583,   584,   585,   586,   587,
     588,   589,  1674,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  1675,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,  1678,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
    1679,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1691,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,     0,     0,   583,   584,   585,   586,   587,
     588,   589,  1692,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  1705,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,   583,
     584,   585,   586,   587,   588,   589,  1709,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,   583,   584,   585,   586,
     587,   588,   589,  1710,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    1719,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,  1720,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    1721,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  1722,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,   583,   584,   585,
     586,   587,   588,   589,  1723,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,   583,   584,   585,   586,   587,
     588,   589,  1724,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  1805,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,  2016,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
    2090,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  2160,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,     0,     0,   583,   584,   585,   586,   587,
     588,   589,  2192,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,   583,   584,   585,   586,   587,   588,   589,  2193,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,   583,
     584,   585,   586,   587,   588,   589,  2194,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,     0,   607,   583,   584,   585,   586,
     587,   588,   589,  2195,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    2196,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,  2205,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,     0,   607,   583,   584,   585,   586,   587,   588,   589,
    2222,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
     583,   584,   585,   586,   587,   588,   589,  2223,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,   583,   584,   585,
     586,   587,   588,   589,  2224,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,    79,   583,   584,   585,   586,   587,
     588,   589,  2225,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
       0,   607,     0,     1,     0,     0,     0,     2,     0,  2226,
     586,   587,   588,   589,     0,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     3,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,  2228,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,    80,
       0,     0,     0,     0,     0,     0,    81,     0,     0,     0,
       0,     0,     0,     6,     7,     0,  -810,  -810,  -810,  -810,
    2229,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,    82,    83,     0,     0,     0,  2260,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,  2266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,  2270,
       0,     0,    12,     0,    13,     0,     0,     0,     0,     0,
       0,     0,    14,    86,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,  2275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,  2397,    18,    91,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2404,     0,     0,   583,   584,   585,   586,   587,   588,   589,
       0,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,  2430,     0,   583,   584,   585,   586,   587,
     588,   589,     0,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
    2443,   607,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,  2461,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2017,  2018,     0,
       0,     0,  2019,     0,  2020,     0,     0,     0,     0,    93,
       0,    20,     0,     0,  2462,     0,     0,     0,    94,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,     0,     0,    22,    23,  2021,  2022,     0,
    2023,     0,  2516,   583,   584,   585,   586,   587,   588,   589,
    1522,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,  1523,     0,     0,     0,     0,     0,     0,     0,     0,
    1524,     0,     0,  1525,     0,  1526,   685,   686,  1527,   687,
       0,   688,   689,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1528,     0,     0,     0,   690,     0,     0,
    1529,  1530,   583,   584,   585,   586,   587,   588,   589,     0,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,     0,   607,   691,
     692,   693,   694,     0,     0,  1531,     0,     0,   695,     0,
       0,     0,     0,     0,     0,     0,     0,   696,     0,     0,
       0,     0,  1532,     0,     0,     0,     0,     0,     0,     0,
       0,  2024,  2025,     0,     0,     0,     0,   697,  1105,     0,
       0,     0,     0,     0,     0,   698,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1533,     0,     0,     0,
     699,     0,     0,     0,     0,     0,     0,   700,     0,     0,
     701,     0,     0,   702,   703,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1534,     0,     0,     0,     0,
     704,     0,     0,  1535,     0,     0,     0,     0,  1403,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   705,   706,     0,     0,   707,   708,
       0,     0,     0,     0,   709,     0,   710,     0,     0,     0,
       0,   711,   712,     0,     0,     0,  1395,   713,     0,   714,
       0,     0,     0,  1536,     0,   715,     0,   716,   717,     0,
       0,     0,     0,   718,   583,   584,   585,   586,   587,   588,
     589,     0,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,     0,
     607,   583,   584,   585,   586,   587,   588,   589,     0,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,     0,   607,   583,   584,
     585,   586,   587,   588,   589,     0,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   582,   607,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,  1995,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,  1394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   608,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1652,     0,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
    1996,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607,
       0,     0,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,  1147,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,     0,   607,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,  1223,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,     0,   607,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
    1468,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,     0,   607
};

static const yytype_int16 yycheck[] =
{
     123,  1243,  1311,  1635,   361,  1491,  1350,  1268,  1269,  1760,
    1502,   628,   355,  1274,   351,  1620,     3,   418,  1327,   762,
    1986,  1027,  1028,    36,  1751,   199,     3,  1033,  1584,  1035,
    1980,  1340,    48,   107,   136,     3,     4,     5,     6,     7,
       8,     6,  1618,   140,     3,  1103,  2039,  2040,   954,   136,
    1100,     5,  1102,    18,     4,    51,     8,  2050,  2051,   199,
     240,  1371,    18,     6,     3,   355,    78,     4,    90,     3,
     266,    97,   159,   240,   266,  1519,  1520,    16,   274,     4,
      20,     4,     3,   157,   207,   208,     3,     3,   159,    20,
       3,     3,    51,   240,  1538,   218,   219,   220,   441,    74,
      71,   224,    74,   107,    48,     3,    36,   266,     3,    87,
      10,    11,    12,    13,    14,    15,    16,    49,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   663,    36,    71,    49,     3,
     154,    97,     3,     4,     5,     6,     7,     8,   259,   133,
      84,   113,    98,   268,   197,   204,   172,   136,   154,  1217,
     241,   252,   266,    18,   274,  1694,  1695,   230,    85,   280,
     154,     3,     5,     3,  1703,  1704,   266,  1753,   266,    51,
     112,   197,   266,   252,   258,     5,   266,    85,    60,   201,
     271,     3,     3,   721,     3,   258,     4,     5,     6,     7,
      20,   112,   216,   149,  2197,  2198,  2199,  2200,  2201,  2202,
       3,   150,   228,   274,     3,   136,   959,   192,  2211,   268,
     216,   344,  2215,   266,     3,   193,  2219,   183,   193,   425,
      63,   193,   428,   154,   426,   210,   258,   108,   210,   156,
    1796,   197,   107,   269,   248,   241,   217,   184,   428,   261,
     193,   167,  1808,   197,   428,   176,   195,   173,   156,   426,
    1521,   277,  1571,  1755,    72,   240,   245,   610,   193,   428,
     193,   249,   167,    84,  1583,   227,   391,  1621,   173,   426,
     617,   113,   203,   267,   228,  2012,   236,   237,   428,  1845,
    1599,    84,   156,    10,    11,    12,    13,    14,    15,    16,
    1856,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   428,    36,
    1876,  1631,   426,   277,   398,   241,   428,  1233,  1772,   184,
     401,   428,   193,   277,  1890,   351,   426,  1387,   426,  1389,
    2306,   428,   426,  1899,  1087,   468,   426,   156,   965,   472,
     327,   328,   329,   330,   319,  2305,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   428,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,  1939,   507,   508,   509,   258,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,  1981,  1982,   351,  1466,    14,
     533,   534,   426,    18,   427,   538,   539,   404,   761,   136,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,  2435,   566,   567,   568,  2439,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   985,   986,   427,
     583,   584,   585,   586,   587,   381,   425,   995,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   425,   381,  1230,   422,   612,
     780,   404,   404,   783,   425,   618,    55,   427,  2249,   268,
    2029,  2030,  2031,  2032,  2033,  2034,    74,  1816,   798,  1818,
     426,    18,  2041,   277,   425,     3,  2045,  1045,  1046,  1047,
    2049,   376,   377,   378,   379,   333,   334,   335,   252,   429,
      40,   426,   154,   398,   399,   400,     3,  2530,  2531,    78,
    2533,  2534,   407,    78,     3,  1551,  2178,  1553,  1554,     3,
       3,     3,    71,    76,  2159,  2111,   219,     3,   277,     3,
    2116,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     3,    36,   252,   252,
      97,     3,  2084,    95,   216,   134,     3,   107,    71,   134,
     113,   107,  2234,   177,     9,    78,    54,    55,   137,     3,
     415,   948,  1013,  1014,   139,    20,    45,    46,   426,  1147,
    1148,   426,   391,    62,   192,     3,    74,    66,   100,  1246,
     153,    87,  1249,     3,     3,   277,   759,   139,     3,   417,
     163,   215,   210,    99,   417,   124,   125,   157,   120,   208,
     124,   125,  1961,   155,   177,    88,  2576,    51,  1967,    92,
      95,   134,   201,   953,   428,   138,   201,   190,   156,   792,
     793,   200,   240,    51,   797,   114,   183,   202,   117,   135,
     193,   804,   155,     0,    87,  2605,  2606,   143,   424,   156,
     197,   164,   215,   132,   241,     3,    99,   156,   217,     3,
     202,    71,   156,   156,   156,  2456,   235,    39,   371,   428,
     156,   428,   156,   152,    84,   238,  2272,   219,  2638,   221,
    1077,   160,   261,   100,   271,   227,   261,    59,   201,   351,
    1991,   241,   135,    71,  2290,   168,  1479,   193,  2520,   156,
     143,   404,  1270,   120,   156,     3,    84,     5,   258,   156,
     252,  2237,   258,     3,  2246,    10,    11,    12,    13,    14,
      15,    16,   210,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    36,     3,   425,   425,   426,   242,   156,   261,   155,
     193,   156,  2574,  2575,   917,   918,   275,   920,   164,    51,
    2432,   275,   925,   425,   426,    28,    18,    28,    60,     3,
     249,  2155,   251,  2342,    51,   396,  2448,  2346,  2127,    51,
     426,   277,  2604,    60,    36,  2381,   216,   103,    60,  2071,
     103,   270,    33,    34,   103,    36,  2145,   156,  2147,   242,
     155,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    78,    36,     3,   371,
     146,   427,   428,   146,     3,  2367,  2362,   146,   154,   427,
     428,   154,  1239,   159,     3,   154,   427,   428,  1231,   688,
     689,   690,   691,   395,   693,     3,  2528,   696,   697,   698,
     176,   113,   404,   176,   703,   704,   705,   176,   155,   708,
     701,   246,  2468,   396,   103,   417,   707,     3,   709,  1042,
     396,    13,    14,   171,    16,   252,  2502,    19,  1218,   103,
      10,    11,    12,    13,    14,    15,    16,  1227,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     3,    36,   146,   223,   224,
    2452,   427,   428,  2492,  2493,   154,  2495,  2496,    82,    83,
     426,   396,   146,    32,    33,    34,   396,    36,   427,   428,
     154,   428,  1105,     3,  1107,   427,   428,   176,     4,     5,
    2299,  1114,  1115,     3,  1117,     3,  2238,   428,  1121,   398,
     399,   400,   176,   427,   428,  1128,  1129,  1130,  1131,     3,
    1133,  1134,  1135,  2505,   427,   428,   136,  1140,  1141,   136,
    1143,   427,   428,   405,   406,   136,  1149,  1150,  1151,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   159,    36,
    1163,  1164,  1165,   136,  1167,   409,   427,   428,  2540,     4,
       5,   427,   428,   427,   428,  1178,   427,   428,     3,   427,
     428,    57,    58,     3,  1187,  1188,  1189,  1190,  1191,  1192,
    1193,  1194,  1362,  1196,     3,  2567,     3,  1200,   281,  1202,
       3,  1204,  1205,  1206,  1207,  1208,   427,   428,    51,  1212,
    1213,  1214,  2584,   427,   428,  1623,   427,   428,   427,   428,
    1223,   426,  1225,  1226,   427,   428,  2598,   427,   428,   427,
     428,  1020,  1021,   197,  1023,  1024,  1025,  1240,   197,  2611,
    1029,  1030,  1031,   281,  1247,  1034,    28,    29,    30,    31,
      32,    33,    34,     3,    36,  2627,    10,    11,    12,    13,
      14,    15,    16,   426,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     3,    36,   427,   428,   427,   428,   427,   428,     3,
     427,   428,   427,   428,   427,   428,   140,  1467,   427,   428,
    1470,   281,  1472,   426,  1474,   425,  1309,     3,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   281,    36,    10,    11,    12,    13,    14,
      15,    16,   197,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     281,    36,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,  1376,    36,   427,   428,  1380,   427,   428,
     427,   428,   281,  1386,   427,   428,   427,   428,   427,   428,
     427,   428,  1395,     4,  1397,   427,   428,   427,   428,   281,
    1403,  1404,    10,    11,    12,    13,    14,    15,    16,   281,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   281,    36,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   281,    36,   427,   428,   427,   428,
     427,   428,   427,   428,   245,  1468,     3,   427,   428,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     8,    36,   425,    10,    11,    12,    13,    14,    15,
      16,  1494,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     9,
      36,   426,  1515,    10,    11,    12,    13,    14,    15,    16,
      36,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     3,    36,
     427,   428,   426,    10,    11,    12,    13,    14,    15,    16,
     428,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   426,    36,
      10,    11,    12,    13,    14,    15,    16,   426,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   426,    36,   427,   428,   427,
     428,   427,   428,    10,    11,    12,    13,    14,    15,    16,
    1613,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   426,    36,
      12,    13,    14,    15,    16,   426,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,  1656,    36,   426,  1659,   427,   428,    38,
     427,   428,   427,   428,   426,  1668,  1669,   427,   428,   427,
     428,   427,   428,   427,   428,   427,   428,  1680,   427,   428,
     427,   428,   427,   428,    57,    58,  1689,  1690,   425,   426,
      51,   427,   428,   427,   428,   426,    75,   425,   426,     3,
     427,   428,    18,  1706,  1707,  1708,   427,   428,  1711,  1712,
     426,  1714,   159,  1716,   181,  1718,   427,   428,   427,   428,
     426,   100,  1725,  1726,  1727,   427,   428,   427,   428,   108,
     961,   962,    48,  1745,  1746,    51,   426,    53,  1235,  1236,
      56,   120,   426,   426,   426,  1748,  1749,   426,   426,   275,
     426,     3,   427,   428,   426,    71,   426,   426,   426,   426,
     426,   426,    78,    79,     3,     3,     4,     5,     6,     7,
       8,   426,    10,  1776,    12,   426,   426,  1780,    16,    17,
      18,   426,    20,   426,   426,   426,   426,  1790,    26,    27,
      28,    29,    30,   426,   426,   426,   426,   113,   426,   426,
     426,  1804,    40,   426,   426,   426,   426,   426,   187,   426,
     426,   426,    50,    51,   426,     3,    54,   426,     3,   427,
     428,    59,    60,    61,    62,    63,   426,   426,    66,   208,
      68,    69,    70,   426,   426,    73,    74,   426,    76,    77,
      78,   426,   426,   426,    82,     3,   427,   428,   164,   426,
     426,   426,   426,   426,   426,   426,   426,   426,    96,   426,
     426,   240,   426,   101,   426,   426,   426,   426,   106,   107,
     108,   426,    16,   426,   426,   113,   114,   193,   116,   117,
     118,   119,   426,   426,   122,   201,   124,   125,   126,   127,
     269,   129,   426,   131,   132,   426,   134,   426,   136,   137,
     266,   139,   140,   141,   142,   426,   426,   426,   426,   426,
     148,   426,   150,   426,   152,   153,   426,   155,   156,   157,
     158,   159,   160,   426,   162,   163,   164,   165,   166,    53,
     427,   428,   426,   426,   426,   426,   426,   426,   426,   177,
     426,   179,   426,   181,   426,   261,   426,   426,   426,   426,
     421,    53,   190,    44,   192,   193,   194,   195,   196,   197,
     198,   428,     3,   201,   202,   423,    71,   277,   245,   207,
       3,   209,   210,   211,     3,   213,   197,   215,     3,   217,
     218,   219,   220,   197,   281,     3,   197,   427,   428,   281,
     277,   281,   281,   418,     3,     3,     3,    28,  2001,  2002,
       3,   239,   240,   241,  2007,     3,  2009,     3,     3,     3,
       3,   249,     3,   251,   252,   253,     3,    74,   281,    74,
     258,   428,   260,   261,   262,   281,     3,     3,   266,     3,
      36,     3,   270,   271,     3,   429,   274,   275,   276,   277,
     427,   427,   427,   281,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     427,    36,   427,   427,   427,   427,  2069,  2070,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   427,    36,   322,   323,   324,   325,   326,   427,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     5,    36,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   427,    36,   427,     3,   427,  2140,     3,   427,
       3,   427,   426,     3,   427,     3,    10,    11,    12,    13,
      14,    15,    16,  2156,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   163,    36,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   196,    36,  2188,   424,   425,   426,   427,
     428,     3,   430,     3,    10,    11,    12,    13,    14,    15,
      16,  2204,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   271,
      36,     3,   402,   402,  2227,   274,   271,   274,     3,     3,
       4,     5,     6,     7,     8,   273,    10,     5,    12,     5,
     277,  2244,    16,    17,    18,    42,    20,    42,     3,     3,
       3,     3,    26,    27,    28,    29,    30,     3,     3,     3,
    2263,  2264,     3,     3,     3,     3,    40,   245,     3,     3,
      20,     3,     5,     3,     5,   379,    50,    51,     5,   217,
      54,   217,     3,   426,   426,    59,    60,    61,    62,    63,
     426,   426,    66,    64,    68,    69,    70,   426,   426,    73,
      74,   426,    76,    77,    78,   426,     3,     3,    82,     3,
     427,     3,   428,     3,   197,   427,   197,   396,     3,   197,
     281,     3,    96,    51,     3,   426,   277,   101,     3,     3,
     396,   140,   106,   107,   108,     3,   198,     3,     3,   113,
     114,     3,   116,   117,   118,   119,   427,   427,   122,   241,
     124,   125,   126,   127,   427,   129,  2359,   131,   132,   427,
     134,   350,   136,   137,   350,   139,   140,   141,   142,   350,
     350,   350,   241,   426,   148,   426,   150,   136,   152,   153,
     426,   155,   156,   157,   158,   159,   160,   426,   162,   163,
     164,   165,   166,   428,   164,  2398,   197,   164,   426,   164,
     163,   163,     4,   177,   271,   179,     4,   181,     4,   411,
     426,   411,   197,   410,   197,  2418,   190,     3,   192,   193,
     194,   195,   196,   197,   198,    36,   222,   201,   202,   222,
       3,   245,   245,   207,     4,   209,   210,   211,     5,   213,
       5,   215,     3,   217,   218,   219,   220,     3,     5,     4,
     193,     5,     5,     5,     3,   426,   429,   213,   426,   140,
     197,     3,     3,     3,   397,   239,   240,   241,   197,   426,
     418,    94,     3,     3,    63,   249,   179,   251,   252,   253,
       3,    20,   426,   199,   258,    91,   260,   261,   262,   429,
     427,   161,   266,     4,   350,   350,   270,   271,   426,   350,
     274,   275,   276,   277,   350,   350,   350,   281,   428,   426,
       3,     4,     5,     6,     7,     8,   426,    10,   350,    12,
       5,   350,  2525,    16,    17,    18,     5,    20,   350,   426,
     426,   241,   412,    26,    27,    28,    29,    30,   274,     3,
     140,   427,     3,     3,   426,   179,   403,    40,   322,   323,
     324,   325,   326,    20,    20,     4,     3,    50,    51,   179,
     426,    54,     3,   164,   428,   164,    59,    60,    61,    62,
      63,     3,   426,    66,   222,    68,    69,    70,   222,   427,
      73,    74,    78,    76,    77,    78,   427,   427,   427,    82,
     427,   426,   426,   426,     3,   426,   426,   268,   426,   245,
     197,    60,   140,    96,   396,   268,     3,    20,   101,     3,
       3,     3,   428,   106,   107,   108,   164,   164,   426,   426,
     113,   114,   426,   116,   117,   118,   119,   426,     3,   122,
       4,   124,   125,   126,   127,     6,   129,     4,   131,   132,
       4,   134,   426,   136,   137,   164,   139,   140,   141,   142,
     424,   425,   426,   427,   428,   148,   430,   150,     3,   152,
     153,   212,   155,   156,   157,   158,   159,   160,   428,   162,
     163,   164,   165,   166,     3,   426,   141,   163,   427,   427,
     427,    51,     3,    20,   177,   427,   179,     4,   181,     5,
       4,     4,     3,     5,   193,     3,    52,   190,     3,   192,
     193,   194,   195,   196,   197,   198,   426,   426,   201,   202,
     427,   426,   426,   426,   207,   426,   209,   210,   211,   426,
     213,   426,   215,   427,   217,   218,   219,   220,   426,   428,
       4,   164,   427,   164,   427,   426,   213,   426,   426,   426,
       5,     4,   428,   426,   428,   240,   239,   240,   241,   426,
     426,     4,     3,   426,   426,     3,   249,   426,   251,   252,
     253,     3,   426,     3,     3,   258,     3,   260,   261,   262,
     426,   426,   118,   266,     3,     3,   266,   270,   271,   426,
     268,   274,   275,   276,   277,     3,    20,     4,   281,    20,
     140,     3,     4,     5,     6,     7,     8,   426,    10,   426,
      12,   426,     3,   258,    16,    17,    18,   426,    20,    20,
     428,   197,     4,   350,    26,    27,    28,    29,    30,   351,
     427,   350,   427,   427,   427,    94,   148,    63,    40,   322,
     323,   324,   325,   326,   427,     3,   426,     3,    50,    51,
     428,    12,    54,    12,     3,     5,     3,    59,    60,    61,
      62,    63,     3,     5,    66,     5,    68,    69,    70,   427,
      51,    73,    74,   426,    76,    77,    78,   426,   426,     4,
      82,    60,    60,     3,   217,   277,   140,   427,   268,     5,
       4,   427,   427,   427,    96,   428,   271,   164,   164,   101,
     426,   426,   426,   426,   106,   107,   108,     3,    88,   426,
     428,   113,   114,   428,   116,   117,   118,   119,   426,   426,
     122,   426,   124,   125,   126,   127,    63,   129,   427,   131,
     132,   426,   134,   198,   136,   137,   427,   139,   140,   141,
     142,   424,   425,   426,   427,   428,   148,   430,   150,   426,
     152,   153,     3,   155,   156,   157,   158,   159,   160,   427,
     162,   163,   164,   165,   166,   427,   427,   413,    20,   428,
     164,   164,    43,    18,     3,   177,   428,   179,   426,   181,
     164,     3,   426,     3,   427,   427,   427,   427,   190,   118,
     192,   193,   194,   195,   196,   197,   198,    60,     3,   201,
     202,    78,   426,   136,     3,   207,   426,   209,   210,   211,
     426,   213,   426,   215,     3,   217,   218,   219,   220,    63,
      63,     3,     3,     3,   426,    63,   427,   427,   350,   427,
     350,   427,   350,   350,   427,     5,     5,   239,   240,   241,
       5,     5,     3,   428,    20,    20,   427,   249,     3,   251,
     252,   253,   269,   207,     3,     5,   258,     5,   260,   261,
     262,   277,    60,    77,   266,   427,   131,   156,   270,   271,
     276,   166,   274,   275,   276,   277,   426,   426,   217,   281,
     207,     5,     3,     4,     5,     6,     7,     8,     3,    10,
     416,    12,   423,   204,    20,    16,    17,    18,   428,    20,
       3,   101,   427,   427,   427,    26,    27,    28,    29,    30,
       3,   427,   427,   427,   214,   428,   140,   427,   426,    40,
     322,   323,   324,   325,   326,     4,   426,     4,   427,    50,
      51,   427,   426,    54,   426,   428,   427,     3,    59,    60,
      61,    62,    63,   428,   428,    66,   427,    68,    69,    70,
     427,   426,    73,    74,   427,    76,    77,    78,    60,     5,
       3,    82,     3,     3,   427,   426,   426,    20,   426,     3,
       3,   428,     4,     4,   159,    96,   428,   426,     3,   427,
     101,   207,     3,     3,     3,   106,   107,   108,     4,     3,
      20,     3,   113,   114,   427,   116,   117,   118,   119,   427,
     231,   122,   427,   124,   125,   126,   127,   427,   129,     3,
     131,   132,   231,   134,   428,   136,   137,   427,   139,   140,
     141,   142,   424,   425,   426,   427,   428,   148,   430,   150,
      20,   152,   153,   245,   155,   156,   157,   158,   159,   160,
       3,   162,   163,   164,   165,   166,     3,   240,   180,   180,
     427,   427,   427,   427,     5,   428,   177,   428,   179,   426,
     181,   426,   426,   229,   427,   427,     3,   427,     3,   190,
     427,   192,   193,   194,   195,   196,   197,   198,     5,     5,
     201,   202,   428,   228,   428,     3,   207,   151,   209,   210,
     211,   427,   213,   428,   215,   426,   217,   218,   219,   220,
      97,   174,   428,   271,   427,   427,   250,   197,   197,   191,
     191,     5,     5,   140,  1397,  1226,  1742,  2000,   239,   240,
     241,   473,   612,  2072,  1120,   622,  1498,   171,   249,   763,
     251,   252,   253,   771,  2547,  2283,  1347,   258,  1972,   260,
     261,   262,  2466,  1263,  1338,   266,   981,  1595,  2143,   270,
     271,  1065,  1068,   274,   275,   276,   277,  1960,   647,  2295,
     281,   462,  2558,     3,     4,     5,     6,     7,     8,   118,
      10,   782,    12,  1633,  2188,  2155,    16,    17,    18,  2610,
      20,  1622,  1032,  1610,  1794,   211,    26,    27,    28,    29,
      30,   427,  1049,  1101,   682,    -1,    -1,    -1,    -1,    -1,
      40,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,   114,    -1,   116,   117,   118,   119,
      -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,   129,
      -1,   131,   132,    -1,   134,    -1,   136,   137,    -1,   139,
     140,   141,   142,   424,   425,   426,   427,   428,   148,   430,
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
      -1,   281,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,   108,
      -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,   118,
     119,    -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,
     129,    -1,   131,   132,    -1,   134,    -1,   136,   137,    -1,
     139,   140,   141,   142,   424,   425,   426,   427,   428,   148,
     430,   150,    -1,   152,   153,    -1,   155,   156,   157,   158,
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
      -1,    -1,   281,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,
     118,   119,    -1,    -1,   122,    -1,   124,   125,   126,   127,
      -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,   137,
      -1,   139,   140,   141,   142,   424,   425,   426,   427,   428,
     148,   430,   150,    -1,   152,   153,    -1,   155,   156,   157,
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
      -1,    -1,    -1,   281,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
     107,   108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,
     117,   118,   119,    -1,    -1,   122,    -1,   124,   125,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,
     137,    -1,   139,   140,   141,   142,   424,   425,   426,   427,
     428,   148,   430,   150,    -1,   152,   153,    -1,   155,   156,
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
     277,    -1,    -1,    -1,   281,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,   322,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,    -1,
     116,   117,   118,   119,    -1,    -1,   122,    -1,   124,   125,
     126,   127,    -1,   129,    -1,   131,   132,    -1,   134,    -1,
     136,   137,    -1,   139,   140,   141,   142,   424,   425,   426,
     427,   428,   148,   430,   150,    -1,   152,   153,    -1,   155,
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
     276,   277,    -1,    -1,    -1,   281,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,   424,   425,
     426,   427,   428,   148,   430,   150,    -1,   152,   153,    -1,
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
     275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
     114,    -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,
     124,   125,   126,   127,    -1,   129,    -1,   131,   132,    -1,
     134,    -1,   136,   137,    -1,   139,   140,   141,   142,   424,
     425,   426,   427,   428,   148,   430,   150,    -1,   152,   153,
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
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,
     113,   114,    -1,   116,   117,   118,   119,    -1,    -1,   122,
      -1,   124,   125,   126,   127,    -1,   129,    -1,   131,   132,
      -1,   134,    -1,   136,   137,    -1,   139,   140,   141,   142,
     424,   425,   426,   427,   428,   148,   430,   150,    -1,   152,
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
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,   322,
     323,   324,   325,   326,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,   114,    -1,   116,   117,   118,   119,    -1,    -1,
     122,    -1,   124,   125,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,    -1,   136,   137,    -1,   139,   140,   141,
     142,   424,   425,   426,   427,   428,   148,   430,   150,    -1,
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
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,   114,    -1,   116,   117,   118,   119,    -1,
      -1,   122,    -1,   124,   125,   126,   127,    -1,   129,    -1,
     131,   132,    -1,   134,    -1,   136,   137,    -1,   139,   140,
     141,   142,   424,   425,   426,   427,   428,   148,   430,   150,
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
     281,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,   114,    -1,   116,   117,   118,   119,
      -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,   129,
      -1,   131,   132,    -1,   134,    -1,   136,   137,    -1,   139,
     140,   141,   142,   424,   425,   426,   427,   428,   148,   430,
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
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,    -1,   424,   425,   426,   427,   428,    -1,
     430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,   226,    -1,    -1,    -1,    -1,    -1,    -1,
     233,   234,    -1,    -1,    -1,   238,    11,    12,    13,    14,
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
     393,   394,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,   414,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,   426,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    10,    11,    12,    13,    14,    15,    16,    89,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,   428,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   428,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   193,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   225,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   428,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   428,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,
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
      27,    -1,    -1,    -1,    -1,    -1,    -1,   426,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    10,    11,    12,    13,    14,
      15,    16,    89,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     428,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   428,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   193,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   225,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,
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
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,   426,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   428,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   428,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   428,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,   426,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   428,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,
      11,    12,    13,    14,    15,    16,    89,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   428,    -1,    10,    11,    12,    13,
      14,    15,    16,   136,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   428,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     183,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     193,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   225,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   426,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     428,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,
      -1,    -1,   113,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   428,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   428,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   426,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,   428,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    10,    11,    12,    13,    14,    15,    16,
      89,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,   113,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   428,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   225,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
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
      27,    -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   428,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   428,    -1,    -1,    -1,    -1,   113,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   428,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   428,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,
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
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,   426,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,   428,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,    12,
      13,    14,    15,    16,    89,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,   113,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   428,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,   428,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   193,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     225,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,   426,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   428,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   428,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   428,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     393,   394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   414,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   426,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,   428,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   428,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   428,
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
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   140,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   428,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,   428,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   428,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   321,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   428,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     428,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   428,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,   427,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     427,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   427,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   427,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   427,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   427,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   427,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   427,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   427,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   427,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   427,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   427,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   427,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   427,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   427,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   427,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   427,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   427,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   427,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    10,    11,    12,    13,    14,
      15,    16,   427,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    37,    -1,    -1,    -1,    41,    -1,   427,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    68,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    13,    14,    15,    16,
     427,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,   138,   139,    -1,    -1,    -1,   427,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,   427,
      -1,    -1,   206,    -1,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,   219,    -1,   221,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,   241,    -1,    -1,
     246,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,   427,   258,   261,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     427,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,   427,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     427,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   371,    -1,   427,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,
      -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,   395,
      -1,   395,    -1,    -1,   427,    -1,    -1,    -1,   404,    -1,
     404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   417,    -1,    -1,    -1,   419,   420,   144,   145,    -1,
     147,    -1,   427,    10,    11,    12,    13,    14,    15,    16,
      18,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    53,    61,    62,    56,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    82,    -1,    -1,
      78,    79,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   114,
     115,   116,   117,    -1,    -1,   113,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,   152,   253,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,
     185,    -1,    -1,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
     205,    -1,    -1,   201,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,    -1,    -1,   243,   244,
      -1,    -1,    -1,    -1,   249,    -1,   251,    -1,    -1,    -1,
      -1,   256,   257,    -1,    -1,    -1,   253,   262,    -1,   264,
      -1,    -1,    -1,   261,    -1,   270,    -1,   272,   273,    -1,
      -1,    -1,    -1,   278,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     3,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    49,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     112,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    51,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    50,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      50,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     395,   404,   419,   420,   432,   471,   472,   512,   516,   518,
     525,   526,   529,   531,   532,   534,   535,   536,   541,   542,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   558,   561,   568,   569,   571,   587,   588,
     597,   600,   602,   603,   604,   627,   630,   637,   638,   641,
     644,   645,   648,   219,   252,   371,   404,   252,     3,    10,
      95,   102,   138,   139,   155,   202,   219,   221,   227,   246,
     247,   261,   371,   395,   404,   417,   609,     3,   513,    95,
     139,   155,   202,   219,   221,   227,   252,   371,   395,   404,
     417,   579,     3,     3,     3,    28,   252,   252,   579,     8,
     227,   628,   629,   491,   252,   579,   598,     3,    95,   398,
     399,   400,   107,   398,   399,   400,   407,   417,   417,     0,
     424,   528,     3,     3,     3,     3,   396,   426,   216,   156,
     601,     3,   155,     3,     3,    85,   156,     3,     3,     3,
     601,   246,   155,   601,   396,   396,     3,   156,   252,   589,
       3,   136,   154,   176,   203,   514,     3,   156,     3,   156,
       3,     3,   156,     3,   156,     3,     3,   156,     3,   156,
       3,   156,   396,   396,     3,   156,   103,   146,   154,   159,
     176,   580,   171,   428,     3,     3,   580,     9,    20,     3,
     113,   428,     3,     4,     5,     6,     7,     8,    17,    18,
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
     392,   393,   394,   414,   426,   433,   492,   493,     3,   154,
     176,     3,   167,   173,   381,   426,   495,   496,   497,   498,
     501,   511,     3,   159,   401,   136,   136,   136,   159,   136,
     409,     3,     3,     3,   432,    54,    55,    74,   210,   277,
     425,   557,   100,   120,    38,    75,   100,   108,   120,   187,
     208,   240,   269,    55,   208,   646,     3,     3,     4,     5,
       6,     7,     8,   193,   427,   639,   640,   139,   202,   281,
       3,    51,     3,   426,   197,     3,   156,   281,   426,    39,
      59,   642,   197,     3,     3,    85,   156,     3,     3,   156,
       3,   156,   140,   281,   601,   426,   590,   425,   515,     3,
     514,   136,   428,   281,   281,   281,   281,   197,   281,    74,
     210,   517,   281,   281,     3,   156,     3,   156,   281,     3,
       4,   245,     3,   433,   433,   629,   425,   426,     9,   433,
     433,   433,   275,   433,   470,   425,   426,    36,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   433,     3,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    36,    51,   494,
     136,   159,   428,   428,   425,   494,   426,     3,   426,   472,
     495,   240,   428,    76,   153,   177,   190,   215,   238,   502,
     504,    51,   500,   500,     3,   159,     3,     3,     3,     3,
       3,    16,   266,   421,    53,    53,    44,     3,   108,   258,
     559,    71,    84,     3,    84,    71,   217,     3,    71,    84,
     422,    71,   217,     3,    84,     3,    71,    84,   423,    71,
     277,   245,    18,   184,   376,   377,   378,   379,   647,   100,
     120,   427,   428,     3,     3,    61,    62,    64,    66,    67,
      82,   114,   115,   116,   117,   123,   132,   152,   160,   175,
     182,   185,   188,   189,   205,   239,   240,   243,   244,   249,
     251,   256,   257,   262,   264,   270,   272,   273,   278,   623,
     197,     3,    16,   150,   195,   631,   632,   633,     3,   197,
     281,     3,   631,   107,   157,   258,   398,   643,     3,   404,
     197,     3,   156,   281,   646,   277,   530,   281,   537,   281,
     418,     3,     3,     3,   591,   136,   245,   592,    28,   274,
     473,   266,   495,     3,     3,     3,     3,     3,     3,   404,
       3,     3,     3,    74,   281,    74,   281,     3,   240,   426,
     581,     3,   240,   581,     3,   433,   438,   442,   433,   433,
     470,   124,   125,   275,     3,     3,   429,   440,   447,   433,
      65,   178,   254,   433,   468,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   427,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     427,   433,   433,   433,   427,   433,   433,   433,   433,   433,
     433,    28,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   427,   427,   427,   427,   427,   433,   433,
     427,   427,   427,   433,   433,     5,   427,   427,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     427,   433,   433,   433,   427,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   427,   427,   433,   433,   433,
     433,   433,     6,    18,   193,   319,   426,    13,    14,    16,
      19,   433,    40,    47,   232,   426,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,     3,   495,     3,   493,     3,   527,     3,   133,
     154,   267,   508,   499,   494,   433,   427,   427,     3,   599,
     496,   177,   215,   505,   497,   163,   196,   503,     3,     3,
     271,     3,   402,   402,   274,   271,   274,     3,   273,     5,
       5,   557,    42,    42,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,   623,     3,   245,     3,     3,    20,
       3,     5,     3,   379,     5,     5,   277,     5,    63,     5,
     217,   217,   640,   426,   426,   426,   619,   619,   619,   619,
     619,   619,   426,   619,   619,   619,    64,   620,   620,   619,
     619,   619,   426,   620,   619,   620,   426,   426,   426,    18,
      36,    78,   113,     3,   623,     3,     3,     3,   427,   428,
     266,   426,     3,     3,   197,   427,   197,    51,   562,   396,
       3,   197,   281,     3,   426,     3,   277,   538,     3,     3,
     140,   154,   216,   351,   425,   426,   625,   626,   427,   428,
       4,   236,   237,   593,   433,   198,   483,   495,   473,   515,
     396,   517,     3,     3,     3,   586,     3,   582,   271,   472,
     586,   271,   472,   428,   427,   253,   124,   125,   433,   433,
     427,   433,   439,   472,   136,   428,   427,   136,   433,   428,
     428,   428,   427,   427,   427,   427,   427,   427,   428,   428,
     428,   428,   427,   428,   428,   428,   427,   427,   427,   427,
     428,   428,   427,   428,   427,   427,   427,    51,   428,   428,
     428,   428,   321,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   428,   428,   428,   427,   428,   350,   350,
     350,   427,   428,   427,   428,   427,   350,   350,   428,   427,
     427,   427,   427,   427,   427,   427,   427,   428,   428,   428,
     428,   428,   428,   428,   428,   427,   428,   427,   427,   427,
     428,   427,   428,   427,   428,   428,   428,   428,   428,   427,
     427,   427,   428,   428,   428,     6,   193,   443,   445,   433,
     433,   426,   433,    50,   426,   426,   426,   434,   429,   140,
     487,   136,   428,   494,   164,   164,   164,   472,   508,   427,
      20,   425,   428,   473,   503,   503,   163,   197,   497,   163,
     426,   271,     4,     4,   411,   426,   411,   410,     4,    45,
      46,   559,   197,   197,    78,   134,   201,   261,   623,   623,
       3,   222,   222,   618,   623,     3,   245,   245,     4,     5,
       5,     3,     3,   631,   631,     5,   621,   622,   621,   621,
       4,   624,   621,   621,   621,   622,   622,   621,   621,   621,
     624,   622,   621,   622,     5,     5,     5,   193,   429,   426,
     433,   426,   623,   623,   623,   213,   633,   268,   391,     3,
     327,   328,   329,   330,   523,   524,   266,   426,   197,     3,
      51,    60,     3,   404,   223,   224,   140,   563,     3,   266,
     426,     3,     3,   197,   397,   530,   426,   537,   418,    94,
       3,    71,    78,   134,   138,   155,   164,   201,   261,   610,
     611,   617,   500,     3,    87,    99,   135,   143,   193,   242,
     277,   426,   594,   595,   596,    63,   179,   486,   473,     3,
      20,   199,   428,   572,   427,   428,   426,   583,   572,   583,
     572,   438,   433,   433,   124,   253,    91,   428,   429,   427,
     433,   433,   433,   136,   161,   469,   469,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   623,   623,
     433,   433,   433,     4,   350,   350,   350,   350,   350,   350,
     433,   433,   433,   433,   426,   426,   426,   350,     5,   350,
       5,   350,   426,   426,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   438,   472,   444,   446,    50,   433,
     437,   433,   435,   441,   436,   441,   472,   412,   473,   495,
       3,   508,   140,   509,   509,   509,   427,   500,   433,     3,
       3,   483,   497,   433,   197,   266,   506,   507,   497,     4,
     193,   533,   426,   403,   179,    20,     4,   193,   543,    20,
       4,   179,     3,   560,   560,   426,   164,   164,   426,   618,
     618,   623,    18,    39,    48,    51,    53,    56,    71,    78,
      79,   113,   130,   164,   193,   201,   261,   570,   618,     3,
       3,   222,   222,   427,   427,   427,   428,   259,   280,    82,
      83,   427,   428,   427,   427,   427,   427,    78,   433,   523,
      62,    66,   114,   117,   132,   152,   160,   249,   251,   270,
     634,   426,   426,   426,   426,   426,   426,   427,   428,   268,
     523,     3,   266,   426,    60,   635,   140,   396,    40,   107,
     157,   241,   258,   245,   564,   562,   268,   523,   266,   426,
     197,     3,    20,   405,   406,   539,   540,   538,     3,     3,
     426,   625,     3,   426,   164,   155,   164,   426,   426,   164,
     426,   427,   428,     3,   472,     4,    87,   249,     6,     4,
       4,   426,   595,   428,     3,     5,   484,   485,   433,   212,
     649,   113,   433,   164,     3,     3,   113,   433,   585,   428,
     572,   572,   124,   433,   426,   439,   140,   427,   427,   428,
     427,   433,   433,   427,   427,   427,   427,   427,   428,   428,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     428,   427,   426,   426,   426,   426,   426,   426,   427,   428,
     428,   427,   427,   448,   449,   450,   426,   427,   428,   426,
     427,   428,   426,   466,   467,   427,   428,   428,   428,   427,
     427,   428,   428,   427,   428,   427,   428,   427,   428,   427,
     427,   427,   427,   427,   427,   428,   428,   428,   427,   427,
     438,   472,   433,   472,   472,   427,   472,   427,   427,    51,
     141,   474,   473,   163,   426,   426,   426,     3,    20,    20,
     425,   486,   433,   426,   507,   428,   533,     4,     5,     4,
     428,     4,     5,   428,   277,   433,   426,   426,     3,   616,
     570,   570,   618,   193,     3,   426,   426,   426,    52,     3,
     426,     4,     4,     5,     6,     7,    72,   333,   334,   335,
     426,   164,   164,   570,   213,    51,    60,     5,   240,     4,
     622,     4,   622,   622,   426,   427,   427,    51,    60,   523,
       3,     3,     3,     3,     3,     3,   426,   427,   426,   268,
     391,   523,   635,     3,     4,     5,     6,     7,     8,    10,
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
     277,   281,   322,   323,   324,   325,   326,   424,   425,   426,
     427,   428,   430,   636,   118,     3,     3,   565,   266,   566,
     563,   426,   427,   268,   523,     3,   266,   426,     4,    20,
      20,   427,   428,   140,   610,    78,   134,   201,   261,   433,
     426,   426,   426,     3,   490,   490,   426,   616,   606,   625,
     611,   623,   595,   427,   596,    49,   112,   425,   476,   476,
     428,   181,   428,     3,    28,   650,   258,    20,   427,   428,
     584,   197,   574,     4,   433,   433,   427,   104,   105,   109,
     111,   144,   145,   147,   278,   279,   433,   433,   433,   452,
     453,   451,   454,   455,   456,   433,   433,   351,   479,   479,
     479,   457,   350,     4,     5,   461,   350,     4,     5,   465,
     479,   479,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   427,   427,   427,   427,   427,    94,    63,
     148,   478,   474,     3,   510,   510,   510,   426,   433,   433,
       3,   649,   490,   533,   428,    12,   543,    12,     3,     5,
     427,     3,   613,     3,   612,   427,   428,   570,     5,   433,
       5,    51,    78,   201,   261,   433,   426,   426,   426,   433,
     634,    60,   635,   427,     4,   433,    60,   635,   427,     3,
     519,   427,   427,   427,   428,   523,   523,   426,   426,   427,
     124,   635,   635,   635,   635,   635,   635,   217,   140,   428,
     426,   277,   567,   564,   523,   426,   427,   426,   268,   523,
     427,     5,     4,   540,   271,   427,   426,   164,   164,   426,
     427,   613,   490,   490,   427,   428,   427,   612,   427,    48,
     172,   197,   228,   277,   351,   605,   618,   427,     3,   485,
     433,   433,   428,   573,   113,   433,   113,   433,   426,    88,
     649,   427,   427,   427,   427,   427,   427,   479,   479,   479,
     479,   479,   479,   427,   428,   427,    63,   198,   481,   481,
     481,   479,   426,   427,   427,   479,   426,   427,   427,   479,
     481,   481,   427,   427,   427,   427,   427,   428,   427,   427,
     428,   428,   428,   413,   433,   475,   433,   483,   478,   427,
     428,   427,   427,     3,    20,   427,   428,   533,   164,   428,
     164,    43,    18,   427,   428,   427,   428,     3,   427,   428,
     427,   427,   428,   426,   426,   164,   427,   427,   427,   427,
     427,    51,    60,   635,   124,   427,   635,   124,   427,     3,
     427,   427,   523,     3,   124,   124,   124,   124,   124,   124,
      60,   118,     3,   433,    78,   566,   427,   523,   523,   426,
     427,   136,   606,   625,   433,   426,   426,   616,   427,   427,
     427,     3,   427,     5,    20,   426,     3,    63,   415,   426,
      63,   476,     3,     3,   578,   585,   426,   575,   481,   481,
     481,   481,   481,   481,   433,     3,   480,    63,   427,   427,
     427,   481,   458,   350,   350,   481,   462,   350,   350,   481,
     427,   427,   433,     5,     5,     5,     5,   476,   277,   428,
     477,   486,   483,     3,   427,   433,   533,   428,    20,   543,
      20,   269,   207,     3,     3,     5,    57,    58,     5,   433,
     433,    60,   635,   124,   124,   277,   520,   427,   427,   519,
      77,   131,   156,   166,   276,   635,   217,   427,   426,   567,
     427,   427,   523,   426,   427,   613,   612,   427,   207,     5,
       3,   107,   248,   204,   268,   416,   423,   204,    20,   428,
     427,     3,   101,   576,   427,   427,   427,   427,   427,   427,
     427,   428,     3,   482,   427,   479,   426,   426,   427,   479,
     426,   426,   427,   427,   427,   428,   428,   214,   433,   140,
     488,   486,   428,   533,     4,   427,   428,     4,     3,   427,
     427,   427,   427,   635,   124,   426,   427,   124,    60,   433,
     427,     5,   427,   427,     3,   427,     3,     3,   426,   426,
      20,   426,   433,     3,   427,   428,    90,   258,     3,   476,
     428,   481,   459,   460,   481,   463,   464,     4,     4,   476,
     230,   258,   159,   489,   533,   428,   543,   426,    57,    58,
     124,     3,   521,   522,   520,   635,   427,   427,   207,   425,
     426,     3,     3,     4,     3,    20,     3,   577,     3,   427,
     479,   479,   427,   479,   479,   427,   427,   231,   231,   490,
     428,   533,   427,     3,   614,    20,   427,   428,   124,   245,
       3,     3,   614,   427,   427,   427,   427,   433,   240,   476,
     481,   481,   481,   481,   180,   180,   533,   428,   427,   428,
       5,   522,   426,   425,   426,   426,   427,   426,   229,   578,
     427,   427,   427,   427,   428,   533,   615,     3,     5,     3,
     614,   614,   615,   228,   607,   608,     5,   533,   428,    18,
      97,   183,   197,   427,   426,   427,   427,    18,     3,   427,
     428,   428,   533,    97,   269,   151,   137,   200,   235,   107,
     258,   614,   615,   615,   271,   608,   533,   428,    98,   149,
      74,   192,   210,   240,    74,   192,   210,   240,   427,   174,
     427,   533,   113,   193,   113,   193,   615,   250,   427,     4,
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
#line 515 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 521 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 522 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 524 "parser/evoparser.y"
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
#line 537 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 539 "parser/evoparser.y"
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
#line 567 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 575 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 583 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 589 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 596 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 597 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 598 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 599 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 600 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 601 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 602 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 603 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 604 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 605 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 606 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 607 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 608 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 609 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 610 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 611 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 612 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 613 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 614 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 616 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 621 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 622 "parser/evoparser.y"
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
#line 630 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 631 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 632 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 633 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 634 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 635 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 640 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 642 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 645 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 646 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 647 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 648 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 649 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 652 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 653 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 657 "parser/evoparser.y"
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
#line 666 "parser/evoparser.y"
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
#line 684 "parser/evoparser.y"
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
#line 693 "parser/evoparser.y"
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
#line 712 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 713 "parser/evoparser.y"
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
#line 773 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 782 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 788 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 793 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 795 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 797 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 802 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 807 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 812 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 820 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 822 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 824 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 826 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 828 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 830 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 832 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 834 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 836 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 838 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 845 "parser/evoparser.y"
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
#line 856 "parser/evoparser.y"
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
#line 866 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 870 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 870 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 871 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 871 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 872 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 873 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 880 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 881 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 888 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 889 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 899 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 903 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 904 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 905 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 906 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 907 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 908 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 909 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 910 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 914 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 915 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 916 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 917 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 918 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 919 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 921 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 922 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 923 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 924 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 925 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 926 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 927 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 928 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 929 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 930 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 931 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 932 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 934 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 935 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 936 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 937 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 938 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 939 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 940 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 941 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 942 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 943 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 944 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 945 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 946 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 947 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 948 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 949 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 951 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 952 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 953 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 954 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 955 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 956 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 959 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 960 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 961 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 962 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 963 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 964 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 965 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 966 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 967 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 968 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 969 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 150:
#line 970 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 151:
#line 971 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 972 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 153:
#line 973 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 154:
#line 974 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 155:
#line 975 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 156:
#line 976 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 157:
#line 977 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 158:
#line 978 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 159:
#line 979 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 160:
#line 980 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 161:
#line 981 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 162:
#line 982 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 163:
#line 983 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 164:
#line 984 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 165:
#line 985 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 166:
#line 986 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 167:
#line 987 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 168:
#line 988 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 169:
#line 989 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 170:
#line 990 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 171:
#line 991 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 172:
#line 992 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 173:
#line 994 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 174:
#line 995 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 175:
#line 996 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 176:
#line 997 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 177:
#line 998 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 178:
#line 999 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 179:
#line 1000 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 180:
#line 1001 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 181:
#line 1003 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 182:
#line 1004 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 183:
#line 1005 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 184:
#line 1006 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 185:
#line 1007 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 186:
#line 1008 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 187:
#line 1009 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 188:
#line 1010 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 189:
#line 1011 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 190:
#line 1012 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 191:
#line 1013 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 192:
#line 1014 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 193:
#line 1015 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 194:
#line 1016 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 195:
#line 1017 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 196:
#line 1018 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 197:
#line 1019 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 198:
#line 1020 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 199:
#line 1021 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 200:
#line 1022 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 201:
#line 1023 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1024 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 203:
#line 1026 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 204:
#line 1027 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 205:
#line 1028 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 206:
#line 1029 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 207:
#line 1030 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 208:
#line 1032 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 209:
#line 1033 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 210:
#line 1035 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 211:
#line 1036 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 212:
#line 1037 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 213:
#line 1039 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 214:
#line 1040 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 215:
#line 1041 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 216:
#line 1042 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 217:
#line 1049 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 218:
#line 1056 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 219:
#line 1063 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 220:
#line 1067 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 221:
#line 1071 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1075 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1079 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 224:
#line 1083 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 225:
#line 1089 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 226:
#line 1090 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 227:
#line 1091 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 228:
#line 1095 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 229:
#line 1101 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 230:
#line 1107 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 231:
#line 1108 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 232:
#line 1109 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 233:
#line 1110 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1111 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1112 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 236:
#line 1113 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 237:
#line 1114 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 238:
#line 1115 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1119 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 240:
#line 1121 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 241:
#line 1123 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1125 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 243:
#line 1129 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 244:
#line 1137 "parser/evoparser.y"
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
#line 1147 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 246:
#line 1148 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 247:
#line 1151 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 248:
#line 1152 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 249:
#line 1156 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 250:
#line 1164 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 251:
#line 1172 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1180 "parser/evoparser.y"
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
#line 1194 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 254:
#line 1203 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 255:
#line 1209 "parser/evoparser.y"
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
#line 1222 "parser/evoparser.y"
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
#line 1235 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 260:
#line 1237 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 261:
#line 1240 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 262:
#line 1247 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 263:
#line 1255 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1256 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 265:
#line 1257 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 266:
#line 1260 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1261 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1265 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 272:
#line 1274 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 273:
#line 1276 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 276:
#line 1284 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 277:
#line 1286 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 282:
#line 1298 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 283:
#line 1304 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 284:
#line 1311 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 285:
#line 1319 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 286:
#line 1320 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 287:
#line 1321 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 288:
#line 1322 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1334 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 291:
#line 1337 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 292:
#line 1338 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 293:
#line 1339 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 294:
#line 1340 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 295:
#line 1341 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1345 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 298:
#line 1348 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 299:
#line 1349 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 300:
#line 1352 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 301:
#line 1353 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 302:
#line 1354 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 303:
#line 1355 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 304:
#line 1356 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 305:
#line 1357 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 306:
#line 1358 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 307:
#line 1359 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 308:
#line 1360 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 309:
#line 1363 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 310:
#line 1364 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 311:
#line 1366 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 312:
#line 1374 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 313:
#line 1379 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 314:
#line 1380 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 315:
#line 1381 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 316:
#line 1384 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 317:
#line 1385 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 320:
#line 1394 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 321:
#line 1402 "parser/evoparser.y"
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
#line 1411 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 323:
#line 1412 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 324:
#line 1414 "parser/evoparser.y"
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
#line 1423 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 326:
#line 1428 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 327:
#line 1434 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 328:
#line 1441 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 329:
#line 1445 "parser/evoparser.y"
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
#line 1465 "parser/evoparser.y"
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
#line 1491 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 334:
#line 1493 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 335:
#line 1495 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 336:
#line 1497 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 337:
#line 1499 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 338:
#line 1502 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1503 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 340:
#line 1504 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 341:
#line 1507 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 342:
#line 1508 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 343:
#line 1511 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1512 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 345:
#line 1515 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 346:
#line 1516 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 347:
#line 1517 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 350:
#line 1524 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 351:
#line 1525 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 352:
#line 1530 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 353:
#line 1532 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 354:
#line 1534 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1538 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 357:
#line 1539 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 358:
#line 1542 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1543 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 360:
#line 1546 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 361:
#line 1551 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 362:
#line 1561 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 363:
#line 1568 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 364:
#line 1569 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 365:
#line 1570 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 366:
#line 1571 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 367:
#line 1576 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 368:
#line 1580 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 369:
#line 1582 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 372:
#line 1588 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 373:
#line 1593 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 374:
#line 1600 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 375:
#line 1607 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 377:
#line 1619 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 378:
#line 1620 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 379:
#line 1625 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 380:
#line 1632 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 381:
#line 1639 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 382:
#line 1647 "parser/evoparser.y"
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
#line 1657 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1665 "parser/evoparser.y"
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
#line 1675 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 386:
#line 1683 "parser/evoparser.y"
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
#line 1692 "parser/evoparser.y"
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
#line 1701 "parser/evoparser.y"
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
#line 1711 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 390:
#line 1719 "parser/evoparser.y"
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
#line 1728 "parser/evoparser.y"
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
#line 1737 "parser/evoparser.y"
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
#line 1747 "parser/evoparser.y"
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
#line 1756 "parser/evoparser.y"
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
#line 1773 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 396:
#line 1781 "parser/evoparser.y"
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
#line 1792 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 398:
#line 1794 "parser/evoparser.y"
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
#line 1807 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 400:
#line 1808 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 401:
#line 1811 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 402:
#line 1813 "parser/evoparser.y"
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
#line 1825 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 404:
#line 1835 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 405:
#line 1840 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 406:
#line 1845 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 407:
#line 1851 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 408:
#line 1858 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 409:
#line 1865 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1872 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 411:
#line 1882 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 412:
#line 1889 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 413:
#line 1898 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 414:
#line 1905 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1911 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 416:
#line 1919 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 417:
#line 1925 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 419:
#line 1933 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 420:
#line 1934 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 421:
#line 1935 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 422:
#line 1936 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 423:
#line 1952 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 424:
#line 1953 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1954 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1963 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1964 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1969 "parser/evoparser.y"
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
#line 1979 "parser/evoparser.y"
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
#line 1994 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 431:
#line 1995 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 432:
#line 2000 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 433:
#line 2008 "parser/evoparser.y"
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
#line 2017 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 435:
#line 2039 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 436:
#line 2040 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 437:
#line 2041 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2046 "parser/evoparser.y"
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
#line 2063 "parser/evoparser.y"
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
#line 2084 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 441:
#line 2085 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 442:
#line 2091 "parser/evoparser.y"
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
#line 2100 "parser/evoparser.y"
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
#line 2114 "parser/evoparser.y"
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
#line 2123 "parser/evoparser.y"
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
#line 2148 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 447:
#line 2149 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 448:
#line 2150 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2151 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2152 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2153 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2154 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2159 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 454:
#line 2166 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 455:
#line 2177 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 460:
#line 2191 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 461:
#line 2193 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 462:
#line 2198 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 463:
#line 2206 "parser/evoparser.y"
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
#line 2215 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 465:
#line 2227 "parser/evoparser.y"
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
#line 2239 "parser/evoparser.y"
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
#line 2253 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 468:
#line 2254 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 469:
#line 2260 "parser/evoparser.y"
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
#line 2274 "parser/evoparser.y"
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
#line 2284 "parser/evoparser.y"
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
#line 2298 "parser/evoparser.y"
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
#line 2312 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 474:
#line 2320 "parser/evoparser.y"
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
#line 2331 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 476:
#line 2337 "parser/evoparser.y"
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
#line 2348 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2354 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 479:
#line 2361 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2367 "parser/evoparser.y"
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
#line 2388 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 482:
#line 2389 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 483:
#line 2390 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 484:
#line 2391 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 485:
#line 2396 "parser/evoparser.y"
    {
        emit("CREATE SUBSCRIPTION %s FOR %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (6)].strval));
        SetSubscriptionChannel((yyvsp[(6) - (6)].strval));
        CreateSubscriptionProcess(0);
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 486:
#line 2405 "parser/evoparser.y"
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

  case 487:
#line 2422 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        DropSubscriptionProcess(0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 488:
#line 2430 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (5)].strval));
        DropSubscriptionProcess(1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 489:
#line 2441 "parser/evoparser.y"
    {
        emit("RESUME SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        ResumeSubscriptionProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 490:
#line 2452 "parser/evoparser.y"
    {
        emit("ACK SUBSCRIPTION %s UPTO %d", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (5)].strval));
        SetSubscriptionAckSeq((long long)(yyvsp[(5) - (5)].intval));
        AckSubscriptionProcess();
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 491:
#line 2464 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 492:
#line 2471 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 493:
#line 2480 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 494:
#line 2488 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 495:
#line 2494 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 497:
#line 2511 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 498:
#line 2515 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 499:
#line 2524 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 501:
#line 2539 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 502:
#line 2543 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 503:
#line 2548 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 504:
#line 2555 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 505:
#line 2560 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 506:
#line 2567 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 507:
#line 2571 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 508:
#line 2572 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 509:
#line 2578 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 510:
#line 2590 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 511:
#line 2599 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 512:
#line 2600 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 513:
#line 2601 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 514:
#line 2605 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 515:
#line 2606 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 516:
#line 2607 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 517:
#line 2608 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 518:
#line 2609 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 519:
#line 2610 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 522:
#line 2619 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 523:
#line 2620 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 525:
#line 2625 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 527:
#line 2630 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 528:
#line 2635 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 529:
#line 2642 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 530:
#line 2651 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 531:
#line 2657 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 532:
#line 2663 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 533:
#line 2670 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 534:
#line 2676 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 535:
#line 2683 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 536:
#line 2689 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 537:
#line 2695 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 538:
#line 2701 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 539:
#line 2707 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 540:
#line 2713 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 541:
#line 2719 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 542:
#line 2725 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 543:
#line 2731 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 544:
#line 2737 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 545:
#line 2743 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 546:
#line 2749 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 547:
#line 2755 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 548:
#line 2761 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 549:
#line 2767 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 550:
#line 2773 "parser/evoparser.y"
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

  case 551:
#line 2786 "parser/evoparser.y"
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

  case 552:
#line 2796 "parser/evoparser.y"
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

  case 553:
#line 2806 "parser/evoparser.y"
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

  case 554:
#line 2816 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s SET TTL %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableSetTtl((yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 555:
#line 2822 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s DROP TTL", (yyvsp[(3) - (5)].strval));
        AlterTableSetTtl((yyvsp[(3) - (5)].strval), NULL);
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 556:
#line 2829 "parser/evoparser.y"
    { ;}
    break;

  case 557:
#line 2830 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 558:
#line 2831 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 559:
#line 2835 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 560:
#line 2843 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 561:
#line 2849 "parser/evoparser.y"
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

  case 563:
#line 2862 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 564:
#line 2862 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 567:
#line 2870 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 568:
#line 2871 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 569:
#line 2872 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 570:
#line 2876 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 571:
#line 2877 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 572:
#line 2878 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 573:
#line 2882 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 574:
#line 2890 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 575:
#line 2899 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 576:
#line 2900 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 577:
#line 2901 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 578:
#line 2902 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 579:
#line 2903 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 583:
#line 2910 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 584:
#line 2914 "parser/evoparser.y"
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

  case 585:
#line 2924 "parser/evoparser.y"
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

  case 586:
#line 2936 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 587:
#line 2937 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 588:
#line 2937 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 589:
#line 2940 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 590:
#line 2941 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 591:
#line 2942 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 592:
#line 2943 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 593:
#line 2947 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 594:
#line 2950 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 595:
#line 2951 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 596:
#line 2952 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 597:
#line 2953 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 598:
#line 2959 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 599:
#line 2965 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 600:
#line 2970 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 601:
#line 2975 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 602:
#line 2979 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 603:
#line 2983 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 604:
#line 2985 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 607:
#line 2991 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 608:
#line 2992 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 609:
#line 2996 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 610:
#line 2997 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 611:
#line 3001 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 612:
#line 3002 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 613:
#line 3003 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 620:
#line 3018 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 621:
#line 3019 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 622:
#line 3020 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 623:
#line 3021 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 624:
#line 3022 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 625:
#line 3023 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 626:
#line 3024 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 627:
#line 3025 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 628:
#line 3030 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 629:
#line 3039 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 630:
#line 3046 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 631:
#line 3047 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 632:
#line 3048 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 633:
#line 3053 "parser/evoparser.y"
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

  case 634:
#line 3064 "parser/evoparser.y"
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

  case 635:
#line 3076 "parser/evoparser.y"
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

  case 636:
#line 3087 "parser/evoparser.y"
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

  case 637:
#line 3102 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 638:
#line 3106 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 639:
#line 3110 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 640:
#line 3111 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 641:
#line 3116 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 642:
#line 3118 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 643:
#line 3120 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 644:
#line 3122 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 645:
#line 3125 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 646:
#line 3126 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 647:
#line 3132 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 648:
#line 3137 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 649:
#line 3139 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 650:
#line 3141 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 651:
#line 3143 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 652:
#line 3145 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 653:
#line 3149 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 654:
#line 3153 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 655:
#line 3154 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 656:
#line 3159 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 657:
#line 3169 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 659:
#line 3182 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 660:
#line 3190 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 661:
#line 3198 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 663:
#line 3206 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 664:
#line 3207 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 665:
#line 3208 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 666:
#line 3209 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 667:
#line 3211 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 668:
#line 3213 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 669:
#line 3215 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 670:
#line 3220 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 671:
#line 3225 "parser/evoparser.y"
    { emit("TABLE OPT TTL_COLUMN %s", (yyvsp[(6) - (7)].strval)); SetTableTtlColumn((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 674:
#line 3233 "parser/evoparser.y"
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

  case 675:
#line 3248 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 676:
#line 3256 "parser/evoparser.y"
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

  case 677:
#line 3270 "parser/evoparser.y"
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

  case 678:
#line 3284 "parser/evoparser.y"
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

  case 679:
#line 3298 "parser/evoparser.y"
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

  case 680:
#line 3310 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 681:
#line 3311 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 682:
#line 3312 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 683:
#line 3315 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 684:
#line 3316 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 685:
#line 3319 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 686:
#line 3320 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 687:
#line 3321 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 688:
#line 3322 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 689:
#line 3323 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 690:
#line 3324 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 691:
#line 3325 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 692:
#line 3326 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 693:
#line 3328 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 694:
#line 3330 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 695:
#line 3332 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 696:
#line 3334 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 697:
#line 3336 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 698:
#line 3338 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 699:
#line 3341 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 700:
#line 3342 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 701:
#line 3345 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 702:
#line 3346 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 703:
#line 3349 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 704:
#line 3350 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 706:
#line 3354 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 707:
#line 3355 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 708:
#line 3356 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 709:
#line 3357 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 710:
#line 3358 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 711:
#line 3359 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 712:
#line 3360 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 713:
#line 3361 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 714:
#line 3362 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 715:
#line 3363 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 716:
#line 3364 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 717:
#line 3365 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 718:
#line 3366 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 719:
#line 3367 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 720:
#line 3368 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 721:
#line 3369 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 722:
#line 3370 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 723:
#line 3373 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 724:
#line 3374 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 725:
#line 3377 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 726:
#line 3379 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 727:
#line 3387 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 728:
#line 3388 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 730:
#line 3390 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 731:
#line 3391 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 732:
#line 3392 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 733:
#line 3393 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 734:
#line 3394 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 735:
#line 3395 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 736:
#line 3396 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 737:
#line 3397 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 738:
#line 3398 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 739:
#line 3405 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 740:
#line 3406 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 741:
#line 3407 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 742:
#line 3408 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 743:
#line 3409 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 744:
#line 3410 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 745:
#line 3411 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 746:
#line 3412 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 747:
#line 3413 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 748:
#line 3414 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 749:
#line 3415 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 750:
#line 3416 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 751:
#line 3417 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 752:
#line 3418 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 753:
#line 3419 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 754:
#line 3420 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 755:
#line 3421 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 756:
#line 3422 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 757:
#line 3423 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 758:
#line 3424 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 759:
#line 3425 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 760:
#line 3428 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 761:
#line 3429 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 762:
#line 3430 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 763:
#line 3433 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 764:
#line 3434 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 765:
#line 3437 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 766:
#line 3438 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 767:
#line 3439 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 769:
#line 3443 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 770:
#line 3444 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 771:
#line 3448 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 772:
#line 3449 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 773:
#line 3450 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 774:
#line 3451 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 775:
#line 3452 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 776:
#line 3453 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 777:
#line 3454 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 778:
#line 3455 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 779:
#line 3456 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 780:
#line 3457 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 781:
#line 3458 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 782:
#line 3459 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 783:
#line 3460 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 784:
#line 3461 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 785:
#line 3462 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 786:
#line 3463 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 787:
#line 3464 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 788:
#line 3465 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 789:
#line 3466 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 790:
#line 3467 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 791:
#line 3468 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 792:
#line 3469 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 793:
#line 3470 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 794:
#line 3471 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 795:
#line 3472 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 796:
#line 3473 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 797:
#line 3474 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 798:
#line 3475 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 799:
#line 3476 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 800:
#line 3477 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 801:
#line 3478 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 802:
#line 3479 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 803:
#line 3480 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 804:
#line 3481 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 805:
#line 3482 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 806:
#line 3485 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 807:
#line 3486 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 808:
#line 3490 "parser/evoparser.y"
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

  case 809:
#line 3502 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 810:
#line 3503 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 811:
#line 3504 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 812:
#line 3508 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 813:
#line 3511 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 814:
#line 3512 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 818:
#line 3516 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 819:
#line 3517 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 820:
#line 3525 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 821:
#line 3530 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 822:
#line 3536 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 823:
#line 3542 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 824:
#line 3549 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 825:
#line 3556 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 826:
#line 3562 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 827:
#line 3568 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 828:
#line 3575 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 833:
#line 3591 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 834:
#line 3592 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 835:
#line 3593 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 836:
#line 3594 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 837:
#line 3597 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 838:
#line 3598 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 839:
#line 3599 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 840:
#line 3600 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 841:
#line 3601 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 842:
#line 3602 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 843:
#line 3603 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 844:
#line 3604 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 845:
#line 3605 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 846:
#line 3606 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 855:
#line 3623 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 856:
#line 3624 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 977:
#line 3642 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 978:
#line 3649 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 979:
#line 3654 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 980:
#line 3660 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 981:
#line 3666 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 982:
#line 3672 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 983:
#line 3683 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 984:
#line 3688 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 985:
#line 3694 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 988:
#line 3705 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 989:
#line 3706 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 990:
#line 3707 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 991:
#line 3708 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 992:
#line 3709 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 993:
#line 3710 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 994:
#line 3711 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 995:
#line 3718 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 996:
#line 3723 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 997:
#line 3729 "parser/evoparser.y"
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

  case 998:
#line 3744 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 999:
#line 3745 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 1000:
#line 3748 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1001:
#line 3749 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 1002:
#line 3750 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 1003:
#line 3751 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1004:
#line 3754 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 1005:
#line 3759 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1006:
#line 3765 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1007:
#line 3774 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1008:
#line 3782 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1009:
#line 3792 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 1010:
#line 3797 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 1013:
#line 3810 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1014:
#line 3811 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1015:
#line 3812 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1016:
#line 3813 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1017:
#line 3814 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1018:
#line 3815 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1019:
#line 3816 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1020:
#line 3817 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1021:
#line 3820 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1022:
#line 3825 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1023:
#line 3831 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1024:
#line 3841 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1025:
#line 3848 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1026:
#line 3855 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1027:
#line 3863 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1029:
#line 3873 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1031:
#line 3877 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1032:
#line 3878 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12573 "parser/evoparser.tab.c"
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


#line 3881 "parser/evoparser.y"

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
