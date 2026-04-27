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
     UPTO = 666
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
#line 992 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1005 "parser/evoparser.tab.c"

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
#define YYLAST   14472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  429
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  220
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1029
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2647

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   666

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     424,   425,    28,    26,   426,    27,   423,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   422,
       2,   428,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   427,    32,     2,     2,     2,     2,     2,
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
     415,   416,   417,   418,   419,   420,   421
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
    2780,  2788,  2796,  2805,  2814,  2815,  2817,  2820,  2822,  2833,
    2840,  2841,  2842,  2848,  2849,  2854,  2855,  2859,  2864,  2867,
    2868,  2874,  2878,  2884,  2885,  2888,  2891,  2894,  2897,  2899,
    2900,  2901,  2905,  2907,  2911,  2915,  2916,  2923,  2925,  2927,
    2931,  2935,  2943,  2947,  2951,  2957,  2963,  2965,  2974,  2982,
    2990,  2992,  2993,  3001,  3002,  3006,  3008,  3012,  3014,  3016,
    3018,  3020,  3022,  3023,  3025,  3030,  3034,  3036,  3040,  3043,
    3046,  3049,  3051,  3054,  3057,  3060,  3062,  3064,  3074,  3075,
    3078,  3081,  3085,  3091,  3097,  3105,  3111,  3113,  3118,  3123,
    3127,  3133,  3137,  3143,  3144,  3147,  3149,  3155,  3163,  3171,
    3181,  3193,  3195,  3198,  3202,  3204,  3215,  3216,  3221,  3233,
    3252,  3253,  3258,  3262,  3268,  3274,  3284,  3295,  3303,  3308,
    3310,  3314,  3324,  3334,  3344,  3351,  3363,  3372,  3373,  3375,
    3378,  3380,  3384,  3390,  3398,  3403,  3408,  3414,  3420,  3425,
    3432,  3444,  3458,  3472,  3488,  3493,  3500,  3502,  3506,  3508,
    3512,  3514,  3518,  3519,  3524,  3530,  3535,  3541,  3546,  3552,
    3557,  3563,  3568,  3573,  3577,  3581,  3585,  3588,  3592,  3597,
    3602,  3604,  3608,  3609,  3614,  3615,  3619,  3622,  3626,  3630,
    3634,  3638,  3644,  3650,  3656,  3660,  3666,  3669,  3677,  3683,
    3691,  3697,  3700,  3704,  3707,  3711,  3714,  3718,  3724,  3729,
    3735,  3743,  3752,  3761,  3769,  3776,  3783,  3789,  3790,  3794,
    3800,  3801,  3803,  3804,  3807,  3810,  3811,  3816,  3820,  3823,
    3827,  3831,  3835,  3839,  3843,  3847,  3851,  3855,  3859,  3863,
    3865,  3867,  3869,  3871,  3873,  3877,  3883,  3886,  3891,  3893,
    3895,  3897,  3899,  3903,  3907,  3911,  3915,  3921,  3927,  3929,
    3931,  3933,  3938,  3942,  3944,  3948,  3952,  3953,  3955,  3957,
    3959,  3963,  3967,  3970,  3972,  3976,  3980,  3984,  3986,  3997,
    4007,  4020,  4032,  4045,  4057,  4072,  4086,  4087,  4089,  4091,
    4095,  4098,  4102,  4106,  4110,  4112,  4114,  4116,  4118,  4120,
    4122,  4124,  4126,  4128,  4130,  4131,  4134,  4139,  4145,  4151,
    4157,  4163,  4169,  4171,  4173,  4175,  4177,  4179,  4181,  4183,
    4185,  4187,  4189,  4191,  4193,  4195,  4197,  4199,  4201,  4203,
    4205,  4207,  4209,  4211,  4213,  4215,  4217,  4219,  4221,  4223,
    4225,  4227,  4229,  4231,  4233,  4235,  4237,  4239,  4241,  4243,
    4245,  4247,  4249,  4251,  4253,  4255,  4257,  4259,  4261,  4263,
    4265,  4267,  4269,  4271,  4273,  4275,  4277,  4279,  4281,  4283,
    4285,  4287,  4289,  4291,  4293,  4295,  4297,  4299,  4301,  4303,
    4305,  4307,  4309,  4311,  4313,  4315,  4317,  4319,  4321,  4323,
    4325,  4327,  4329,  4331,  4333,  4335,  4337,  4339,  4341,  4343,
    4345,  4347,  4349,  4351,  4353,  4355,  4357,  4359,  4361,  4363,
    4365,  4367,  4369,  4371,  4373,  4375,  4377,  4379,  4381,  4383,
    4385,  4387,  4389,  4391,  4393,  4395,  4397,  4399,  4401,  4403,
    4405,  4407,  4409,  4411,  4413,  4415,  4417,  4421,  4427,  4431,
    4437,  4439,  4444,  4450,  4452,  4456,  4458,  4460,  4462,  4464,
    4466,  4468,  4470,  4472,  4486,  4502,  4504,  4506,  4508,  4510,
    4512,  4514,  4516,  4520,  4526,  4531,  4536,  4538,  4544,  4545,
    4548,  4552,  4555,  4559,  4562,  4565,  4568,  4570,  4573,  4575,
    4579,  4585,  4590,  4595,  4602,  4609,  4610,  4613,  4616,  4618
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     430,     0,    -1,   469,   422,    -1,   469,   422,   430,    -1,
       3,    -1,     3,   423,     3,    -1,    89,   423,     3,    -1,
     183,   424,     3,   425,    91,   424,     4,   425,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   431,    26,   431,    -1,   431,    27,   431,    -1,   431,
      28,   431,    -1,   431,    29,   431,    -1,   431,    30,   431,
      -1,   431,    31,   431,    -1,    27,   431,    -1,   424,   431,
     425,    -1,   431,    12,   431,    -1,   431,    10,   431,    -1,
     431,    11,   431,    -1,   431,    23,   431,    -1,   431,    24,
     431,    -1,   431,    32,   431,    -1,   431,    25,   431,    -1,
     431,    34,   431,    -1,   431,    33,   431,    -1,    18,   431,
      -1,    17,   431,    -1,   431,    20,   431,    -1,    -1,   431,
      20,   424,   432,   470,   425,    -1,    -1,   431,    20,    47,
     424,   433,   470,   425,    -1,    -1,   431,    20,   232,   424,
     434,   470,   425,    -1,    -1,   431,    20,    40,   424,   435,
     470,   425,    -1,   431,    20,    47,   424,   439,   425,    -1,
     431,    20,   232,   424,   439,   425,    -1,   431,    15,   193,
      -1,   431,    15,    18,   193,    -1,   431,    15,     6,    -1,
     431,    15,    18,     6,    -1,     8,     9,   431,    -1,   431,
      19,   431,    50,   431,    -1,   431,    18,    19,   431,    50,
     431,    -1,   431,    -1,   431,   426,   436,    -1,   431,    -1,
     431,   426,   437,    -1,    -1,   263,    36,   438,   437,   427,
      -1,   263,    36,   427,    -1,   431,    36,   431,   427,    -1,
     431,    -1,   380,   424,   431,   425,    -1,   380,   424,   431,
     426,   431,   425,    -1,   381,   424,   431,   425,    -1,   382,
     424,   431,   426,   431,   425,    -1,   383,   424,   425,    -1,
     414,   424,   425,    -1,   384,   424,   431,   426,   431,   425,
      -1,   385,   424,   431,   426,   431,   425,    -1,   386,   424,
     431,   426,   431,   425,    -1,   387,   424,   431,   426,   431,
     425,    -1,   388,   424,   431,   425,    -1,   389,   424,   431,
     425,    -1,   390,   424,   431,   425,    -1,   431,    22,   431,
      -1,   431,    21,   431,    -1,   392,   424,   431,   426,   431,
     426,   431,   426,     5,   425,    -1,   393,   424,   431,   426,
     431,   426,   431,   426,     5,   426,     4,   425,    -1,   394,
     424,   431,   426,   431,   426,   431,   426,     5,   426,     4,
     425,    -1,    -1,   436,    -1,    -1,   431,    16,   424,   441,
     436,   425,    -1,    -1,   431,    18,    16,   424,   442,   436,
     425,    -1,    -1,   431,    16,   424,   443,   470,   425,    -1,
      -1,   431,    18,    16,   424,   444,   470,   425,    -1,    -1,
     281,   424,   445,   470,   425,    -1,     3,   424,   440,   425,
      -1,   322,   424,    28,   425,    -1,   322,   424,   431,   425,
      -1,   323,   424,   431,   425,    -1,   324,   424,   431,   425,
      -1,   325,   424,   431,   425,    -1,   326,   424,   431,   425,
      -1,   320,   424,   431,   425,    -1,   320,   424,   431,   321,
       4,   425,    -1,    -1,   342,   424,   425,   350,   424,   446,
     477,   479,   425,    -1,    -1,   343,   424,   425,   350,   424,
     447,   477,   479,   425,    -1,    -1,   344,   424,   425,   350,
     424,   448,   477,   479,   425,    -1,    -1,   323,   424,   431,
     425,   350,   424,   449,   477,   479,   425,    -1,    -1,   322,
     424,    28,   425,   350,   424,   450,   477,   479,   425,    -1,
      -1,   322,   424,   431,   425,   350,   424,   451,   477,   479,
     425,    -1,    -1,   324,   424,   431,   425,   350,   424,   452,
     477,   479,   425,    -1,    -1,   325,   424,   431,   425,   350,
     424,   453,   477,   479,   425,    -1,    -1,   326,   424,   431,
     425,   350,   424,   454,   477,   479,   425,    -1,    -1,   345,
     424,   431,   425,   350,   424,   455,   477,   479,   425,    -1,
      -1,   345,   424,   431,   426,     5,   425,   350,   424,   456,
     477,   479,   425,    -1,    -1,   345,   424,   431,   426,     5,
     426,     4,   425,   350,   424,   457,   477,   479,   425,    -1,
      -1,   345,   424,   431,   426,     5,   426,     5,   425,   350,
     424,   458,   477,   479,   425,    -1,    -1,   346,   424,   431,
     425,   350,   424,   459,   477,   479,   425,    -1,    -1,   346,
     424,   431,   426,     5,   425,   350,   424,   460,   477,   479,
     425,    -1,    -1,   346,   424,   431,   426,     5,   426,     4,
     425,   350,   424,   461,   477,   479,   425,    -1,    -1,   346,
     424,   431,   426,     5,   426,     5,   425,   350,   424,   462,
     477,   479,   425,    -1,    -1,   347,   424,     5,   425,   350,
     424,   463,   477,   479,   425,    -1,    -1,   348,   424,   425,
     350,   424,   464,   477,   479,   425,    -1,    -1,   349,   424,
     425,   350,   424,   465,   477,   479,   425,    -1,   282,   424,
     431,   426,   431,   426,   431,   425,    -1,   282,   424,   431,
     426,   431,   425,    -1,   282,   424,   431,   136,   431,   425,
      -1,   282,   424,   431,   136,   431,   140,   431,   425,    -1,
     283,   424,   431,   425,    -1,   283,   424,   466,   431,   136,
     431,   425,    -1,   283,   424,   466,   136,   431,   425,    -1,
     327,   424,   431,   425,    -1,   328,   424,   431,   425,    -1,
     329,   424,   431,   425,    -1,   330,   424,   431,   426,   431,
     425,    -1,   331,   424,   431,   426,   431,   426,   431,   425,
      -1,   332,   424,   431,   426,   431,   425,    -1,   294,   424,
     431,   426,   431,   425,    -1,   295,   424,   431,   426,   431,
     425,    -1,   296,   424,   431,   426,   431,   426,   431,   425,
      -1,   297,   424,   431,   426,   431,   426,   431,   425,    -1,
     298,   424,   431,   425,    -1,   299,   424,   431,   426,   431,
     425,    -1,   300,   424,   431,   426,   431,   425,    -1,   301,
     424,   431,   426,   431,   425,    -1,   302,   424,   431,   425,
      -1,   303,   424,   431,   425,    -1,   304,   424,   431,   425,
      -1,   305,   424,   431,   426,   431,   425,    -1,   305,   424,
     431,   425,    -1,   306,   424,   431,   426,   431,   425,    -1,
     307,   424,   431,   425,    -1,   308,   424,   431,   426,   431,
     425,    -1,   309,   424,   425,    -1,   310,   424,   431,   425,
      -1,   311,   424,   431,   425,    -1,   312,   424,   431,   425,
      -1,   313,   424,   425,    -1,   293,   424,   425,    -1,   286,
     424,   431,   426,   431,   425,    -1,   287,   424,   431,   425,
      -1,   288,   424,   431,   425,    -1,   289,   424,   431,   425,
      -1,   290,   424,   431,   425,    -1,   291,   424,   431,   425,
      -1,   292,   424,   431,   425,    -1,   352,   424,   431,   426,
     431,   425,    -1,   353,   424,   431,   425,    -1,   354,   424,
     431,   425,    -1,   355,   424,   431,   425,    -1,   356,   424,
     431,   425,    -1,   357,   424,   431,   425,    -1,   358,   424,
     431,   425,    -1,   359,   424,   431,   425,    -1,   360,   424,
     431,   425,    -1,   361,   424,   431,   426,   431,   426,   431,
     425,    -1,   362,   424,   431,   426,   431,   426,   431,   425,
      -1,   363,   424,   431,   426,   431,   426,   431,   425,    -1,
     364,   424,   431,   426,   431,   425,    -1,   365,   424,   431,
     426,   431,   425,    -1,   366,   424,   431,   426,   431,   426,
     431,   425,    -1,   367,   424,   431,   426,   431,   426,   431,
     425,    -1,   368,   424,   431,   426,   431,   425,    -1,   368,
     424,   431,   426,   431,   426,   431,   426,   431,   425,    -1,
     369,   424,   431,   425,    -1,   369,   424,   431,   426,   431,
     425,    -1,   369,   424,   431,   426,   431,   426,   431,   425,
      -1,   370,   424,   431,   425,    -1,   372,   424,   431,   425,
      -1,   373,   424,   431,   425,    -1,   374,   424,   431,   426,
     431,   425,    -1,   374,   424,   431,   426,   431,   426,   431,
     425,    -1,   375,   424,   425,    -1,   314,   424,   431,    51,
     621,   425,    -1,   315,   424,   431,   426,   621,   425,    -1,
     316,   424,   431,   426,   431,   425,    -1,   317,   424,   431,
     426,   431,   425,    -1,   318,   424,   431,   426,   431,   426,
     431,   425,    -1,   431,    15,   319,    -1,   330,   424,   431,
     426,   431,   426,   431,   425,    -1,   330,   424,   431,   426,
     431,   426,   431,   426,   431,   425,    -1,   333,   424,   425,
      -1,   334,   424,   425,    -1,   335,   424,   425,    -1,   336,
     424,   425,    -1,   337,   424,   425,    -1,   338,    -1,   339,
      -1,   340,   424,   431,   425,    -1,   341,   424,   431,   426,
     431,   425,    -1,   178,    -1,   254,    -1,    65,    -1,   284,
     424,   431,   426,   467,   425,    -1,   285,   424,   431,   426,
     467,   425,    -1,   161,   431,   278,    -1,   161,   431,   104,
      -1,   161,   431,   105,    -1,   161,   431,   109,    -1,   161,
     431,   111,    -1,   161,   431,   279,    -1,   161,   431,   145,
      -1,   161,   431,   144,    -1,   161,   431,   147,    -1,    77,
     431,   468,   124,    -1,    77,   431,   468,   125,   431,   124,
      -1,    77,   468,   124,    -1,    77,   468,   125,   431,   124,
      -1,   275,   431,   253,   431,    -1,   468,   275,   431,   253,
     431,    -1,   431,    14,   431,    -1,   431,    18,    14,   431,
      -1,   431,    13,   431,    -1,   431,    18,    13,   431,    -1,
      72,    -1,    80,    -1,    81,    -1,   225,    -1,   470,    -1,
     241,   489,   490,    -1,   241,   489,   490,   136,   493,   485,
     471,   472,   476,   481,   484,   486,   487,    -1,   241,   489,
     490,   159,     3,   136,   493,   471,   472,   476,   481,   484,
      -1,    -1,   274,   431,    -1,    -1,   141,    63,   473,   475,
      -1,   431,   474,    -1,   473,   426,   431,   474,    -1,    -1,
      49,    -1,   112,    -1,    -1,   277,   214,    -1,    -1,   148,
     431,    -1,    -1,   351,    63,   478,    -1,     3,    -1,   478,
     426,     3,    -1,    -1,   198,    63,   480,    -1,     3,   474,
      -1,   480,   426,     3,   474,    -1,    -1,   198,    63,   482,
      -1,   483,    -1,   482,   426,   483,    -1,     3,   474,    -1,
       3,   423,     3,   474,    -1,     5,   474,    -1,    -1,   179,
     431,    -1,   179,   431,   426,   431,    -1,   179,   431,   181,
     431,    -1,    -1,   140,   412,    51,    94,   413,     5,    -1,
      -1,   140,   258,    -1,   140,   230,    -1,   140,   258,   231,
     180,    -1,   140,   230,   231,   180,    -1,    -1,   159,   488,
      -1,     3,    -1,   488,   426,     3,    -1,    -1,   489,    40,
      -1,   489,   106,    -1,   489,   110,    -1,   489,   146,    -1,
     489,   238,    -1,   489,   226,    -1,   489,   234,    -1,   489,
     233,    -1,   491,    -1,   490,   426,   491,    -1,    28,    -1,
     431,   492,    -1,    51,     3,    -1,     3,    -1,    -1,   494,
      -1,   493,   426,   494,    -1,   495,    -1,   499,    -1,     3,
     492,   506,    -1,   173,     3,   492,   506,    -1,     3,   423,
       3,   492,   506,    -1,   509,   498,     3,    -1,   496,   498,
       3,    -1,   381,   424,   431,   425,    -1,   381,   424,   431,
     425,   498,     3,    -1,   381,   424,   431,   425,   498,     3,
     424,     3,   425,    -1,   424,   493,   425,    -1,    -1,   167,
     424,   497,   470,   425,    -1,    51,    -1,    -1,   494,   500,
     163,   495,   504,    -1,   494,   238,   495,    -1,   494,   238,
     495,   197,   431,    -1,   494,   502,   501,   163,   495,   505,
      -1,   494,   190,   503,   163,   495,    -1,    -1,   153,    -1,
      76,    -1,    -1,   196,    -1,   177,    -1,   215,    -1,   177,
     501,    -1,   215,   501,    -1,    -1,    -1,   505,    -1,   197,
     431,    -1,   266,   424,   488,   425,    -1,   267,   164,   507,
     424,   508,   425,    -1,   154,   164,   507,   424,   508,   425,
      -1,   133,   164,   507,   424,   508,   425,    -1,    -1,   140,
     163,    -1,    -1,     3,    -1,   508,   426,     3,    -1,   424,
     470,   425,    -1,   510,    -1,   107,   511,   136,     3,   471,
     481,   484,   647,    -1,   511,   176,    -1,   511,   203,    -1,
     511,   154,    -1,    -1,   107,   511,   512,   136,   493,   471,
      -1,     3,   513,    -1,   512,   426,     3,   513,    -1,    -1,
     423,    28,    -1,   107,   511,   136,   512,   266,   493,   471,
      -1,   514,    -1,   108,   252,     3,   515,    -1,   108,   252,
     156,   281,     3,   515,    -1,    -1,    74,    -1,   210,    -1,
     516,    -1,    73,   155,     3,   197,     3,   424,   521,   425,
      -1,    73,   138,   155,     3,   197,     3,   424,   521,   425,
      -1,    73,   155,   156,   281,     3,   197,     3,   424,   521,
     425,    -1,    73,   261,   155,     3,   197,     3,   424,   521,
     425,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     424,   521,   425,    -1,    73,   155,     3,   197,     3,   266,
     268,   424,   521,   425,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   268,   424,   521,   425,    -1,    73,   261,
     155,     3,   197,     3,   266,   268,   424,   521,   425,    -1,
      73,   261,   155,   156,   281,     3,   197,     3,   266,   268,
     424,   521,   425,    -1,    73,   155,    85,     3,   197,     3,
     424,   521,   425,    -1,    73,   155,    85,   156,   281,     3,
     197,     3,   424,   521,   425,    -1,    73,   261,   155,    85,
       3,   197,     3,   424,   521,   425,    -1,    73,   261,   155,
      85,   156,   281,     3,   197,     3,   424,   521,   425,    -1,
      73,   155,    85,     3,   197,     3,   266,   268,   424,   521,
     425,    -1,    73,   261,   155,    85,     3,   197,     3,   266,
     268,   424,   521,   425,    -1,    73,   155,     3,   197,     3,
     266,   391,   424,     3,   517,   425,   518,    -1,    73,   155,
     156,   281,     3,   197,     3,   266,   391,   424,     3,   517,
     425,   518,    -1,    -1,     3,    -1,    -1,   277,   424,   519,
     425,    -1,   520,    -1,   519,   426,   520,    -1,     3,    20,
       5,    -1,     3,    -1,   521,   426,     3,    -1,   522,    -1,
     327,   424,     3,   425,    -1,   328,   424,     3,   425,    -1,
     329,   424,     3,   425,    -1,   330,   424,     3,   426,     3,
     425,    -1,   523,    -1,   108,   155,     3,    -1,   524,   526,
      -1,   255,   252,     3,    -1,   255,   252,     3,   426,   525,
      -1,     3,    -1,   525,   426,     3,    -1,    -1,   526,    74,
      -1,   526,   210,    -1,   526,    55,    53,    -1,   526,    54,
      53,    -1,   546,    -1,   547,    -1,   548,    -1,   527,    -1,
     529,    -1,    73,   395,   396,     3,   528,    -1,    73,   395,
     396,   156,   281,     3,   528,    -1,    -1,   277,   424,   397,
      20,     4,   425,    -1,   108,   395,   396,     3,    -1,   108,
     395,   396,     3,    74,    -1,   108,   395,   396,   156,   281,
       3,    -1,   530,    -1,   532,    -1,   533,    -1,   395,   398,
     159,     3,   271,   424,   531,   426,   531,   426,   531,   426,
     531,   426,   531,   426,   531,   426,   531,   425,    -1,   395,
     398,   401,   159,     3,   271,   424,   531,   426,   531,   426,
     531,   426,   531,   426,   531,   426,   531,   426,   531,   425,
      -1,     4,    -1,   193,    -1,   395,   399,   136,     3,   402,
       4,    -1,   395,   399,   136,     3,   402,     4,   403,     4,
      -1,   395,   400,   136,     3,   402,     4,    -1,   395,   400,
     136,     3,   402,     4,   179,     5,    -1,   534,    -1,   539,
      -1,   540,    -1,   542,    -1,   543,    -1,   544,    -1,   545,
      -1,    73,   404,   396,     3,   535,   536,    -1,    73,   404,
     396,   156,   281,     3,   535,   536,    -1,    -1,    -1,   277,
     424,   537,   425,    -1,   538,    -1,   537,   426,   538,    -1,
     405,    20,     5,    -1,   406,    20,     4,    -1,   108,   404,
     396,     3,    -1,   108,   404,   396,     3,    74,    -1,   108,
     404,   396,   156,   281,     3,    -1,   404,   398,   159,     3,
     271,   424,   541,   426,   541,   426,   541,   425,    -1,   404,
     398,   159,     3,   271,   424,   541,   426,   541,   426,   541,
     426,   541,   425,    -1,     4,    -1,   193,    -1,   404,   399,
     136,     3,   274,   411,    20,     4,    12,   164,    20,     4,
      -1,   404,   407,     3,   266,   273,     4,    -1,   404,   407,
       3,   266,   273,     4,   179,     5,    -1,   404,   107,   136,
       3,   274,   411,    20,     4,    12,   164,    20,     4,    -1,
     404,   400,   409,    16,     3,    -1,   404,   400,   409,    16,
       3,   410,     4,    -1,   168,     3,    -1,   168,     3,   171,
      -1,   170,     3,    -1,   170,    28,    -1,   169,     3,    -1,
     169,     3,   426,     4,    -1,   549,    -1,   550,    -1,   551,
      -1,   552,    -1,    73,   417,     3,   140,   418,     3,    -1,
      73,   417,   156,   281,     3,   140,   418,     3,    -1,   108,
     417,     3,    -1,   108,   417,   156,   281,     3,    -1,   419,
     417,     3,    -1,   420,   417,     3,   421,     5,    -1,   553,
      -1,   206,   252,     3,    -1,   554,    -1,   556,     3,   555,
     557,    -1,   556,     3,   423,     3,   555,   557,    -1,    -1,
     277,    44,     5,    45,    -1,   277,    44,     5,    46,    -1,
      41,   252,    -1,    -1,   258,    42,   197,   558,    -1,   258,
      42,   197,   558,   277,     5,    43,    -1,   108,    42,   197,
     558,    -1,     3,    -1,   558,   426,     3,    -1,   567,    -1,
     559,    -1,   566,    -1,    73,   221,     3,   197,     3,   560,
     561,   562,   564,   565,    -1,    73,   221,     3,   197,   404,
     396,     3,   560,   561,   562,   564,   565,    -1,    -1,    51,
     223,    -1,    51,   224,    -1,    -1,   140,    40,    -1,   140,
     241,    -1,   140,   157,    -1,   140,   258,    -1,   140,   107,
      -1,    -1,   245,   563,    -1,     3,    -1,   563,   426,     3,
      -1,    -1,   266,   424,   431,   425,    -1,    -1,   277,    78,
     424,   431,   425,    -1,   108,   221,     3,   197,     3,    -1,
     108,   221,     3,   197,   404,   396,     3,    -1,    37,   252,
       3,    38,    71,     3,    78,   424,   431,   425,    -1,    37,
     252,     3,    38,    71,     3,   261,   424,   614,   425,    -1,
      37,   252,     3,    38,    71,     3,   134,   164,   424,   611,
     425,   207,     3,   424,   612,   425,   613,    -1,    37,   252,
       3,    38,    71,     3,    78,   424,   431,   425,    18,   269,
      -1,    37,   252,     3,    38,    71,     3,   134,   164,   424,
     611,   425,   207,     3,   424,   612,   425,   613,    18,   269,
      -1,    37,   252,     3,    38,    71,     3,   201,   164,   424,
     610,   425,    -1,    37,   252,     3,   108,    71,     3,    -1,
      37,   252,     3,   208,    71,     3,   245,     3,    -1,    37,
     252,     3,   120,    71,     3,    -1,    37,   252,     3,   100,
      71,     3,    -1,    37,   252,     3,   269,    71,     3,    -1,
      37,   252,     3,    38,    84,     3,   621,   616,   568,    -1,
      37,   252,     3,   108,    84,     3,    -1,    37,   252,     3,
     108,     3,    -1,    37,   252,     3,   208,    84,     3,   245,
       3,    -1,    37,   252,     3,   208,     3,   245,     3,    -1,
      37,   252,     3,   187,    84,     3,   621,   616,   568,    -1,
      37,   252,     3,   187,     3,   621,   616,   568,    -1,    37,
     252,     3,    75,    84,     3,     3,   621,   616,   568,    -1,
      37,   252,     3,    75,     3,     3,   621,   616,   568,    -1,
      37,   252,     3,   120,   217,     3,   222,    -1,    37,   252,
       3,   100,   217,     3,   222,    -1,    37,   404,   396,     3,
     120,   217,     3,   222,    -1,    37,   404,   396,     3,   100,
     217,     3,   222,    -1,    -1,   130,    -1,    39,     3,    -1,
     569,    -1,   157,   577,   578,     3,   579,   271,   581,   570,
     572,   647,    -1,   157,   577,   578,     3,   579,   470,    -1,
      -1,    -1,   199,   164,   258,   571,   576,    -1,    -1,   197,
      88,   573,   574,    -1,    -1,   424,     3,   425,    -1,   424,
       3,   426,     3,    -1,   101,    90,    -1,    -1,   101,   258,
     575,   240,   576,    -1,     3,    20,   431,    -1,   576,   426,
       3,    20,   431,    -1,    -1,   577,   176,    -1,   577,   103,
      -1,   577,   146,    -1,   577,   154,    -1,   159,    -1,    -1,
      -1,   424,   580,   425,    -1,     3,    -1,   580,   426,     3,
      -1,   424,   583,   425,    -1,    -1,   581,   426,   582,   424,
     583,   425,    -1,   431,    -1,   113,    -1,   583,   426,   431,
      -1,   583,   426,   113,    -1,   157,   577,   578,     3,   240,
     584,   570,    -1,     3,    20,   431,    -1,     3,    20,   113,
      -1,   584,   426,     3,    20,   431,    -1,   584,   426,     3,
      20,   113,    -1,   585,    -1,   216,   577,   578,     3,   579,
     271,   581,   570,    -1,   216,   577,   578,     3,   240,   584,
     570,    -1,   216,   577,   578,     3,   579,   470,   570,    -1,
     586,    -1,    -1,    86,     3,   587,   588,   590,   591,   592,
      -1,    -1,   424,   589,   425,    -1,     3,    -1,   589,   426,
       3,    -1,   136,    -1,   245,    -1,     4,    -1,   236,    -1,
     237,    -1,    -1,   593,    -1,   277,   424,   593,   425,    -1,
     424,   593,   425,    -1,   594,    -1,   593,   426,   594,    -1,
     135,    87,    -1,   135,   249,    -1,    99,     4,    -1,   143,
      -1,   143,     6,    -1,   193,     4,    -1,   242,     4,    -1,
      87,    -1,   595,    -1,   258,   596,   493,   240,   597,   471,
     481,   484,   647,    -1,    -1,   577,   176,    -1,   577,   154,
      -1,     3,    20,   431,    -1,     3,   423,     3,    20,   431,
      -1,   597,   426,     3,    20,   431,    -1,   597,   426,     3,
     423,     3,    20,   431,    -1,   208,   252,     3,   245,     3,
      -1,   598,    -1,    73,    95,   599,     3,    -1,    73,   227,
     599,     3,    -1,   108,    95,     3,    -1,   108,    95,   156,
     281,     3,    -1,   108,   227,     3,    -1,   108,   227,   156,
     281,     3,    -1,    -1,   156,   281,    -1,   600,    -1,    73,
     102,     3,    51,   621,    -1,    73,   102,     3,    51,   621,
     113,   431,    -1,    73,   102,     3,    51,   621,    18,   193,
      -1,    73,   102,     3,    51,   621,    78,   424,   431,   425,
      -1,    73,   102,     3,    51,   621,    18,   193,    78,   424,
     431,   425,    -1,   601,    -1,   267,     3,    -1,   267,    95,
       3,    -1,   602,    -1,    73,   607,   252,   599,     3,   424,
     608,   425,   604,   603,    -1,    -1,   172,   424,     3,   425,
      -1,    73,   607,   252,   599,     3,   423,     3,   424,   608,
     425,   604,    -1,    73,   607,   252,   599,     3,   351,    94,
       3,   140,   271,   136,   424,     5,   425,   245,   424,     5,
     425,    -1,    -1,   604,    48,    20,     5,    -1,   604,    48,
       5,    -1,   604,   197,     3,   107,     3,    -1,   604,   197,
       3,   248,     3,    -1,   604,   228,    63,   268,   424,     3,
     425,   229,     5,    -1,   604,   228,    63,   204,   424,     3,
     425,   424,   605,   425,    -1,   604,   351,    63,   204,   424,
       3,   425,    -1,   604,   277,   415,   416,    -1,   606,    -1,
     605,   426,   606,    -1,   228,     3,   271,   174,   250,     4,
     197,   191,     5,    -1,   228,     3,   271,   174,   250,   184,
     197,   191,     5,    -1,    73,   607,   252,   599,     3,   424,
     608,   425,   623,    -1,    73,   607,   252,   599,     3,   623,
      -1,    73,   607,   252,   599,     3,   423,     3,   424,   608,
     425,   623,    -1,    73,   607,   252,   599,     3,   423,     3,
     623,    -1,    -1,   246,    -1,   247,   246,    -1,   609,    -1,
     608,   426,   609,    -1,   201,   164,   424,   610,   425,    -1,
      71,     3,   201,   164,   424,   610,   425,    -1,   164,   424,
     488,   425,    -1,   155,   424,   488,   425,    -1,   138,   155,
     424,   488,   425,    -1,   138,   164,   424,   488,   425,    -1,
      78,   424,   431,   425,    -1,    71,     3,    78,   424,   431,
     425,    -1,   134,   164,   424,   611,   425,   207,     3,   424,
     612,   425,   613,    -1,   134,   164,   424,   611,   425,   207,
       3,   423,     3,   424,   612,   425,   613,    -1,    71,     3,
     134,   164,   424,   611,   425,   207,     3,   424,   612,   425,
     613,    -1,    71,     3,   134,   164,   424,   611,   425,   207,
       3,   423,     3,   424,   612,   425,   613,    -1,   261,   424,
     614,   425,    -1,    71,     3,   261,   424,   614,   425,    -1,
       3,    -1,   610,   426,     3,    -1,     3,    -1,   611,   426,
       3,    -1,     3,    -1,   612,   426,     3,    -1,    -1,   613,
     197,   107,    74,    -1,   613,   197,   107,   240,   193,    -1,
     613,   197,   107,   210,    -1,   613,   197,   107,   240,   113,
      -1,   613,   197,   258,    74,    -1,   613,   197,   258,   240,
     193,    -1,   613,   197,   258,   210,    -1,   613,   197,   258,
     240,   113,    -1,   613,   197,   107,   192,    -1,   613,   197,
     258,   192,    -1,   613,   183,   137,    -1,   613,   183,   235,
      -1,   613,   183,   200,    -1,   613,    97,    -1,   613,    18,
      97,    -1,   613,    97,   151,    98,    -1,   613,    97,   151,
     149,    -1,     3,    -1,   614,   426,     3,    -1,    -1,   615,
       3,   621,   616,    -1,    -1,   616,    18,   193,    -1,   616,
     193,    -1,   616,   113,     4,    -1,   616,   113,     5,    -1,
     616,   113,     7,    -1,   616,   113,     6,    -1,   616,   113,
     333,   424,   425,    -1,   616,   113,   334,   424,   425,    -1,
     616,   113,   335,   424,   425,    -1,   616,   113,    72,    -1,
     616,   113,   424,   431,   425,    -1,   616,    48,    -1,   616,
      48,   424,     5,   426,     5,   425,    -1,   616,    48,   424,
       5,   425,    -1,   616,    53,   424,     5,   426,     5,   425,
      -1,   616,    53,   424,     5,   425,    -1,   616,    53,    -1,
     616,   261,   164,    -1,   616,   261,    -1,   616,   201,   164,
      -1,   616,   164,    -1,   616,    79,     4,    -1,   616,    78,
     424,   431,   425,    -1,   616,    71,     3,   261,    -1,   616,
      71,     3,   201,   164,    -1,   616,    71,     3,    78,   424,
     431,   425,    -1,   616,    56,    52,    51,   424,   431,   425,
      57,    -1,   616,    56,    52,    51,   424,   431,   425,    58,
      -1,   616,    56,    52,    51,   424,   431,   425,    -1,   616,
      51,   424,   431,   425,    57,    -1,   616,    51,   424,   431,
     425,    58,    -1,   616,    51,   424,   431,   425,    -1,    -1,
     424,     5,   425,    -1,   424,     5,   426,     5,   425,    -1,
      -1,    64,    -1,    -1,   619,   259,    -1,   619,   280,    -1,
      -1,   620,    82,   240,     4,    -1,   620,    83,     4,    -1,
      67,   617,    -1,   244,   617,   619,    -1,   239,   617,   619,
      -1,   189,   617,   619,    -1,   160,   617,   619,    -1,   152,
     617,   619,    -1,    66,   617,   619,    -1,   205,   617,   619,
      -1,   114,   617,   619,    -1,   132,   617,   619,    -1,   116,
     617,   619,    -1,   117,    -1,   257,    -1,   251,    -1,   115,
      -1,   278,    -1,    82,   617,   620,    -1,   270,   424,     5,
     425,   620,    -1,    64,   617,    -1,   272,   424,     5,   425,
      -1,   256,    -1,    61,    -1,   188,    -1,   182,    -1,   243,
     618,   620,    -1,   249,   618,   620,    -1,   185,   618,   620,
      -1,   175,   618,   620,    -1,   123,   424,   622,   425,   620,
      -1,   240,   424,   622,   425,   620,    -1,    62,    -1,   262,
      -1,   264,    -1,   273,   424,     5,   425,    -1,   621,    36,
     427,    -1,     4,    -1,   622,   426,     4,    -1,   624,   498,
     470,    -1,    -1,   154,    -1,   216,    -1,   625,    -1,   240,
     227,     3,    -1,   240,   227,   113,    -1,   240,   626,    -1,
     627,    -1,   626,   426,   627,    -1,     8,    20,   431,    -1,
       8,     9,   431,    -1,   628,    -1,    73,   202,     3,   424,
     629,   425,    51,    60,   633,   124,    -1,    73,   202,     3,
     424,   629,   425,    60,   633,   124,    -1,    73,    10,   216,
     202,     3,   424,   629,   425,    51,    60,   633,   124,    -1,
      73,    10,   216,   202,     3,   424,   629,   425,    60,   633,
     124,    -1,    73,   139,     3,   424,   629,   425,   213,   632,
      51,    60,   633,   124,    -1,    73,   139,     3,   424,   629,
     425,   213,   632,    60,   633,   124,    -1,    73,    10,   216,
     139,     3,   424,   629,   425,   213,   632,    51,    60,   633,
     124,    -1,    73,    10,   216,   139,     3,   424,   629,   425,
     213,   632,    60,   633,   124,    -1,    -1,   630,    -1,   631,
      -1,   630,   426,   631,    -1,     3,   621,    -1,    16,     3,
     621,    -1,   195,     3,   621,    -1,   150,     3,   621,    -1,
     152,    -1,   160,    -1,   270,    -1,   249,    -1,    62,    -1,
     132,    -1,   114,    -1,    66,    -1,   117,    -1,   251,    -1,
      -1,   633,   634,    -1,   633,    60,   633,   124,    -1,   633,
     156,   633,   124,   156,    -1,   633,   276,   633,   124,   276,
      -1,   633,   166,   633,   124,   166,    -1,   633,   131,   633,
     124,   131,    -1,   633,    77,   633,   124,    77,    -1,     3,
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
      -1,   277,    -1,   202,    -1,   139,    -1,   213,    -1,   424,
      -1,   425,    -1,   426,    -1,   422,    -1,   423,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    17,
      -1,   428,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,     8,    -1,   635,    -1,   108,   202,     3,
      -1,   108,   202,   156,   281,     3,    -1,   108,   139,     3,
      -1,   108,   139,   156,   281,     3,    -1,   636,    -1,    68,
       3,   424,   425,    -1,    68,     3,   424,   637,   425,    -1,
     638,    -1,   637,   426,   638,    -1,     5,    -1,     4,    -1,
       7,    -1,   193,    -1,     6,    -1,     3,    -1,     8,    -1,
     639,    -1,    73,   219,     3,   640,   641,   197,     3,   140,
     118,   217,    60,   633,   124,    -1,    73,   219,     3,   640,
     641,   197,   404,   396,     3,   140,   118,   217,    60,   633,
     124,    -1,    59,    -1,    39,    -1,   157,    -1,   258,    -1,
     107,    -1,   398,    -1,   642,    -1,   108,   219,     3,    -1,
     108,   219,   156,   281,     3,    -1,    37,   219,     3,   120,
      -1,    37,   219,     3,   100,    -1,   643,    -1,    73,   371,
     599,     3,   644,    -1,    -1,   644,   645,    -1,   376,   277,
       5,    -1,   376,     5,    -1,   377,    63,     5,    -1,   377,
       5,    -1,   378,     5,    -1,   184,     5,    -1,   379,    -1,
      18,   379,    -1,   646,    -1,   108,   371,     3,    -1,   108,
     371,   156,   281,     3,    -1,    37,   371,     3,   644,    -1,
      37,   371,     3,    55,    -1,    37,   371,     3,    55,   277,
       5,    -1,    37,   371,     3,   208,   245,     3,    -1,    -1,
     212,    28,    -1,   212,   648,    -1,     3,    -1,   648,   426,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   505,   505,   506,   511,   518,   519,   520,   534,   535,
     563,   571,   579,   585,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   612,   618,   618,   627,   627,   629,   629,
     631,   631,   636,   638,   642,   643,   644,   645,   646,   649,
     650,   653,   662,   680,   689,   709,   709,   769,   778,   785,
     789,   791,   793,   798,   803,   808,   816,   818,   820,   822,
     824,   826,   828,   830,   832,   834,   841,   852,   863,   864,
     867,   867,   868,   868,   869,   869,   877,   877,   885,   885,
     896,   900,   901,   902,   903,   904,   905,   906,   907,   911,
     911,   913,   913,   915,   915,   918,   918,   920,   920,   922,
     922,   924,   924,   926,   926,   928,   928,   931,   931,   933,
     933,   935,   935,   937,   937,   939,   939,   941,   941,   943,
     943,   945,   945,   948,   948,   950,   950,   952,   952,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   991,   992,   993,   994,   995,   996,   997,
     998,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1023,  1024,  1025,  1026,  1027,  1029,  1030,
    1032,  1033,  1034,  1036,  1037,  1038,  1039,  1046,  1053,  1060,
    1064,  1068,  1072,  1076,  1080,  1086,  1087,  1088,  1091,  1097,
    1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1115,
    1117,  1119,  1121,  1125,  1133,  1144,  1145,  1148,  1149,  1152,
    1160,  1168,  1176,  1190,  1200,  1201,  1215,  1231,  1232,  1233,
    1234,  1237,  1244,  1252,  1253,  1254,  1257,  1258,  1261,  1262,
    1266,  1267,  1270,  1272,  1276,  1277,  1280,  1282,  1286,  1287,
    1290,  1291,  1294,  1300,  1307,  1316,  1317,  1318,  1319,  1329,
    1330,  1334,  1335,  1336,  1337,  1338,  1341,  1342,  1345,  1346,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1360,
    1361,  1362,  1370,  1376,  1377,  1378,  1381,  1382,  1385,  1386,
    1390,  1398,  1408,  1409,  1410,  1419,  1424,  1430,  1438,  1442,
    1442,  1482,  1483,  1487,  1489,  1491,  1493,  1495,  1499,  1500,
    1501,  1504,  1505,  1508,  1509,  1512,  1513,  1514,  1517,  1518,
    1521,  1522,  1526,  1528,  1530,  1532,  1535,  1536,  1539,  1540,
    1543,  1547,  1557,  1565,  1566,  1567,  1568,  1572,  1576,  1578,
    1582,  1582,  1584,  1589,  1596,  1603,  1615,  1616,  1617,  1621,
    1628,  1635,  1643,  1653,  1661,  1671,  1679,  1688,  1697,  1707,
    1715,  1724,  1733,  1743,  1752,  1769,  1777,  1789,  1790,  1804,
    1805,  1808,  1809,  1821,  1831,  1836,  1841,  1847,  1854,  1861,
    1868,  1878,  1885,  1894,  1901,  1907,  1915,  1921,  1929,  1930,
    1931,  1932,  1933,  1949,  1950,  1951,  1960,  1961,  1965,  1975,
    1991,  1992,  1996,  2004,  2013,  2036,  2037,  2038,  2042,  2059,
    2081,  2082,  2087,  2096,  2110,  2119,  2145,  2146,  2147,  2148,
    2149,  2150,  2151,  2155,  2162,  2174,  2177,  2178,  2182,  2183,
    2187,  2189,  2194,  2202,  2211,  2223,  2235,  2250,  2251,  2256,
    2270,  2280,  2294,  2308,  2316,  2327,  2333,  2344,  2350,  2357,
    2363,  2385,  2386,  2387,  2388,  2392,  2401,  2418,  2426,  2437,
    2448,  2460,  2467,  2476,  2484,  2490,  2505,  2507,  2511,  2520,
    2533,  2535,  2539,  2544,  2551,  2556,  2564,  2568,  2569,  2573,
    2585,  2596,  2597,  2598,  2602,  2603,  2604,  2605,  2606,  2607,
    2610,  2612,  2616,  2617,  2620,  2622,  2625,  2627,  2631,  2638,
    2647,  2653,  2659,  2666,  2672,  2679,  2685,  2691,  2697,  2703,
    2709,  2715,  2721,  2727,  2733,  2739,  2745,  2751,  2757,  2763,
    2769,  2782,  2792,  2802,  2814,  2815,  2816,  2819,  2827,  2833,
    2846,  2847,  2847,  2851,  2852,  2855,  2856,  2857,  2861,  2862,
    2862,  2866,  2874,  2884,  2885,  2886,  2887,  2888,  2891,  2891,
    2894,  2895,  2898,  2908,  2921,  2922,  2922,  2925,  2926,  2927,
    2928,  2931,  2935,  2936,  2937,  2938,  2944,  2947,  2953,  2958,
    2964,  2968,  2968,  2973,  2974,  2976,  2977,  2981,  2982,  2986,
    2987,  2988,  2991,  2992,  2993,  2994,  2998,  2999,  3003,  3004,
    3005,  3006,  3007,  3008,  3009,  3010,  3014,  3022,  3031,  3032,
    3033,  3037,  3048,  3060,  3071,  3086,  3091,  3095,  3096,  3100,
    3102,  3104,  3106,  3110,  3111,  3117,  3121,  3123,  3125,  3127,
    3129,  3134,  3138,  3139,  3143,  3152,  3165,  3166,  3174,  3182,
    3190,  3191,  3192,  3193,  3194,  3195,  3197,  3199,  3204,  3208,
    3209,  3212,  3227,  3234,  3249,  3262,  3277,  3290,  3291,  3292,
    3295,  3296,  3299,  3300,  3301,  3302,  3303,  3304,  3305,  3306,
    3307,  3309,  3311,  3313,  3315,  3317,  3321,  3322,  3325,  3326,
    3329,  3330,  3333,  3334,  3335,  3336,  3337,  3338,  3339,  3340,
    3341,  3342,  3343,  3344,  3345,  3346,  3347,  3348,  3349,  3350,
    3353,  3354,  3357,  3357,  3367,  3368,  3369,  3370,  3371,  3372,
    3373,  3374,  3375,  3376,  3377,  3378,  3385,  3386,  3387,  3388,
    3389,  3390,  3391,  3392,  3393,  3394,  3395,  3396,  3397,  3398,
    3399,  3400,  3401,  3402,  3403,  3404,  3405,  3408,  3409,  3410,
    3413,  3414,  3417,  3418,  3419,  3422,  3423,  3424,  3428,  3429,
    3430,  3431,  3432,  3433,  3434,  3435,  3436,  3437,  3438,  3439,
    3440,  3441,  3442,  3443,  3444,  3445,  3446,  3447,  3448,  3449,
    3450,  3451,  3452,  3453,  3454,  3455,  3456,  3457,  3458,  3459,
    3460,  3461,  3462,  3465,  3466,  3469,  3482,  3483,  3484,  3488,
    3491,  3492,  3493,  3494,  3494,  3496,  3497,  3505,  3509,  3515,
    3521,  3528,  3535,  3541,  3547,  3554,  3563,  3564,  3567,  3568,
    3571,  3572,  3573,  3574,  3577,  3578,  3579,  3580,  3581,  3582,
    3583,  3584,  3585,  3586,  3593,  3594,  3595,  3596,  3597,  3598,
    3599,  3600,  3603,  3604,  3605,  3605,  3605,  3606,  3606,  3606,
    3606,  3606,  3606,  3607,  3607,  3607,  3607,  3607,  3607,  3607,
    3607,  3607,  3608,  3608,  3608,  3608,  3608,  3608,  3608,  3609,
    3609,  3609,  3609,  3610,  3610,  3610,  3610,  3610,  3610,  3610,
    3610,  3610,  3610,  3610,  3610,  3611,  3611,  3611,  3611,  3611,
    3611,  3611,  3611,  3612,  3612,  3612,  3612,  3612,  3612,  3612,
    3612,  3613,  3613,  3613,  3613,  3613,  3613,  3613,  3613,  3613,
    3614,  3614,  3614,  3614,  3614,  3614,  3614,  3614,  3615,  3615,
    3615,  3616,  3616,  3616,  3616,  3616,  3616,  3616,  3616,  3617,
    3617,  3617,  3617,  3617,  3617,  3617,  3618,  3618,  3618,  3618,
    3618,  3618,  3618,  3619,  3619,  3619,  3619,  3620,  3620,  3620,
    3620,  3620,  3620,  3620,  3620,  3620,  3620,  3620,  3620,  3621,
    3621,  3621,  3621,  3621,  3622,  3629,  3633,  3639,  3645,  3651,
    3663,  3667,  3673,  3681,  3682,  3685,  3686,  3687,  3688,  3689,
    3690,  3691,  3698,  3702,  3708,  3724,  3725,  3728,  3729,  3730,
    3731,  3734,  3738,  3744,  3753,  3761,  3772,  3776,  3785,  3786,
    3790,  3791,  3792,  3793,  3794,  3795,  3796,  3797,  3800,  3804,
    3810,  3820,  3827,  3834,  3842,  3852,  3853,  3854,  3857,  3858
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
  "SUBSCRIPTION", "CHANNEL", "RESUME", "ACK", "UPTO", "';'", "'.'", "'('",
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
     665,   666,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   429,   430,   430,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   432,   431,   433,   431,   434,   431,
     435,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   436,   436,   437,   437,   438,   431,   431,   431,   439,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   440,   440,
     441,   431,   442,   431,   443,   431,   444,   431,   445,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   446,
     431,   447,   431,   448,   431,   449,   431,   450,   431,   451,
     431,   452,   431,   453,   431,   454,   431,   455,   431,   456,
     431,   457,   431,   458,   431,   459,   431,   460,   431,   461,
     431,   462,   431,   463,   431,   464,   431,   465,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   466,   466,   466,   431,   431,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   431,
     431,   431,   431,   468,   468,   431,   431,   431,   431,   431,
     431,   431,   431,   469,   470,   470,   470,   471,   471,   472,
     472,   473,   473,   474,   474,   474,   475,   475,   476,   476,
     477,   477,   478,   478,   479,   479,   480,   480,   481,   481,
     482,   482,   483,   483,   483,   484,   484,   484,   484,   485,
     485,   486,   486,   486,   486,   486,   487,   487,   488,   488,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   490,
     490,   490,   491,   492,   492,   492,   493,   493,   494,   494,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   497,
     496,   498,   498,   499,   499,   499,   499,   499,   500,   500,
     500,   501,   501,   502,   502,   503,   503,   503,   504,   504,
     505,   505,   506,   506,   506,   506,   507,   507,   508,   508,
     509,   469,   510,   511,   511,   511,   511,   510,   512,   512,
     513,   513,   510,   469,   514,   514,   515,   515,   515,   469,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   517,   517,   518,
     518,   519,   519,   520,   521,   521,   521,   522,   522,   522,
     522,   469,   523,   469,   524,   524,   525,   525,   526,   526,
     526,   526,   526,   469,   469,   469,   469,   469,   527,   527,
     528,   528,   529,   529,   529,   469,   469,   469,   530,   530,
     531,   531,   532,   532,   533,   533,   469,   469,   469,   469,
     469,   469,   469,   534,   534,   535,   536,   536,   537,   537,
     538,   538,   539,   539,   539,   540,   540,   541,   541,   542,
     543,   543,   544,   545,   545,   546,   546,   547,   547,   548,
     548,   469,   469,   469,   469,   549,   549,   550,   550,   551,
     552,   469,   553,   469,   554,   554,   555,   555,   555,   556,
     557,   557,   557,   557,   558,   558,   469,   469,   469,   559,
     559,   560,   560,   560,   561,   561,   561,   561,   561,   561,
     562,   562,   563,   563,   564,   564,   565,   565,   566,   566,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   568,   568,   568,   469,   569,   569,
     570,   571,   570,   572,   572,   573,   573,   573,   574,   575,
     574,   576,   576,   577,   577,   577,   577,   577,   578,   578,
     579,   579,   580,   580,   581,   582,   581,   583,   583,   583,
     583,   569,   584,   584,   584,   584,   469,   585,   585,   585,
     469,   587,   586,   588,   588,   589,   589,   590,   590,   591,
     591,   591,   592,   592,   592,   592,   593,   593,   594,   594,
     594,   594,   594,   594,   594,   594,   469,   595,   596,   596,
     596,   597,   597,   597,   597,   469,   469,   598,   598,   469,
     469,   469,   469,   599,   599,   469,   600,   600,   600,   600,
     600,   469,   601,   601,   469,   602,   603,   603,   602,   602,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   605,
     605,   606,   606,   602,   602,   602,   602,   607,   607,   607,
     608,   608,   609,   609,   609,   609,   609,   609,   609,   609,
     609,   609,   609,   609,   609,   609,   610,   610,   611,   611,
     612,   612,   613,   613,   613,   613,   613,   613,   613,   613,
     613,   613,   613,   613,   613,   613,   613,   613,   613,   613,
     614,   614,   615,   609,   616,   616,   616,   616,   616,   616,
     616,   616,   616,   616,   616,   616,   616,   616,   616,   616,
     616,   616,   616,   616,   616,   616,   616,   616,   616,   616,
     616,   616,   616,   616,   616,   616,   616,   617,   617,   617,
     618,   618,   619,   619,   619,   620,   620,   620,   621,   621,
     621,   621,   621,   621,   621,   621,   621,   621,   621,   621,
     621,   621,   621,   621,   621,   621,   621,   621,   621,   621,
     621,   621,   621,   621,   621,   621,   621,   621,   621,   621,
     621,   621,   621,   622,   622,   623,   624,   624,   624,   469,
     625,   625,   625,   626,   626,   627,   627,   469,   628,   628,
     628,   628,   628,   628,   628,   628,   629,   629,   630,   630,
     631,   631,   631,   631,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   633,   633,   633,   633,   633,   633,
     633,   633,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   469,   635,   635,   635,   635,
     469,   636,   636,   637,   637,   638,   638,   638,   638,   638,
     638,   638,   469,   639,   639,   640,   640,   641,   641,   641,
     641,   469,   642,   642,   469,   469,   469,   643,   644,   644,
     645,   645,   645,   645,   645,   645,   645,   645,   469,   646,
     646,   469,   469,   469,   469,   647,   647,   647,   648,   648
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
       1,     1,     1,    13,    15,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     4,     4,     1,     5,     0,     2,
       3,     2,     3,     2,     2,     2,     1,     2,     1,     3,
       5,     4,     4,     6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   677,     0,   366,     0,   573,     0,
       0,     0,     0,     0,   573,     0,   300,     0,   628,     0,
       0,     0,     0,     0,     0,     0,   253,   361,   373,   379,
     411,   418,   426,   427,   435,   436,   437,   446,   447,   448,
     449,   450,   451,   452,   423,   424,   425,   481,   482,   483,
     484,   491,   493,     0,   507,   508,   506,   557,   596,   600,
     626,   636,   645,   651,   654,   809,   817,   975,   980,   992,
    1001,  1006,  1018,     0,     0,     0,     0,   499,     0,     0,
     643,     0,     0,     0,     0,     0,     0,     0,   643,   678,
       0,     0,   643,     0,     0,     0,     0,   601,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   579,   475,   479,   477,   478,     0,     0,   579,     0,
       0,   812,   813,     0,     0,     0,     0,   652,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,   413,   496,     0,     0,  1008,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   679,     0,     0,     0,     0,     0,     0,   643,   603,
     370,     0,   365,   363,   364,     0,   639,     0,   978,     0,
     412,   976,     0,  1002,     0,     0,   641,     0,   376,     0,
    1019,     0,     0,     0,   487,     0,   575,   576,   577,   578,
     574,     0,   476,     0,   492,     0,     0,     0,     0,   810,
     811,     0,     4,     9,    10,    12,    11,     8,     0,     0,
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
       0,     0,     0,     0,     0,   315,   254,   309,   414,   630,
     629,   315,     0,     0,     0,     0,     0,   316,   318,   332,
     319,   332,   653,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   489,     0,     3,     0,     0,   419,   420,     0,
       0,   500,  1005,  1004,     0,     0,     0,     0,     0,     0,
       0,     0,  1022,     0,  1021,     0,   990,   986,   985,   989,
     987,   991,   988,   981,     0,   983,     0,     0,   644,   637,
       0,     0,   826,     0,     0,     0,     0,   826,   996,   995,
       0,     0,   638,     0,     0,     0,  1008,   430,     0,   455,
       0,     0,     0,     0,     0,     0,     0,   368,   257,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   377,   378,
     374,     0,     0,   432,     0,   462,     0,     0,   580,   480,
       0,   580,   816,   815,   814,     0,    78,     0,    32,    31,
      20,     0,     0,     0,     0,     0,    55,    88,     0,     0,
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
       0,   314,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   312,     0,
       0,     0,     0,     0,   355,   329,   315,     0,     0,     0,
       0,     0,   340,   339,   343,   347,   344,     0,     0,   341,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,   421,     0,   496,     0,     0,   494,
       0,     0,     0,     0,     0,     0,   543,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1016,  1009,     0,     0,   982,     0,
       0,     0,   789,   798,   757,   757,   757,   757,   757,   782,
     757,   779,     0,   757,   757,   757,   760,   791,   760,   790,
     757,   757,   757,     0,   760,   757,   760,   781,   788,   780,
     799,   800,     0,     0,     0,   783,   646,     0,     0,     0,
       0,     0,     0,   827,   828,     0,     0,     0,     0,     0,
     999,   997,   998,  1000,     0,   511,     0,     0,     0,     0,
       0,  1007,     0,   428,     0,   456,     0,     0,     0,   806,
     605,     0,   607,   608,     0,   371,     0,   278,     0,   257,
     370,   640,   979,   977,  1003,   528,     0,   642,   376,  1020,
     433,     0,   463,     0,   488,     0,     0,     0,   635,     0,
       0,     5,    51,    79,     0,    48,     0,     0,   241,     0,
       0,     6,     0,    57,     0,     0,     0,   227,   225,   226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,     0,     0,
       0,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,   217,   218,   219,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
       0,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    21,    23,    24,    22,   247,   245,    46,
       0,    44,   213,    80,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    33,    74,    73,    25,    26,    28,    14,
      15,    16,    17,    18,    19,    27,    30,    29,     0,   313,
     289,     0,   310,   416,   415,   315,     0,     0,     0,   320,
       0,   355,     0,   360,   328,     0,   257,   317,   341,   341,
       0,   334,     0,   342,     0,   324,   323,     0,     0,     0,
       0,     0,     0,     0,   473,     0,   490,     0,   500,     0,
       0,     0,     0,     0,     0,   539,     0,   536,   542,   538,
       0,   724,     0,     0,     0,     0,   540,  1023,  1024,  1017,
    1015,  1011,     0,  1013,     0,  1014,     0,     0,   984,   826,
     826,     0,   786,   762,   768,   765,   762,   762,     0,   762,
     762,   762,   761,   765,   765,   762,   762,   762,     0,   765,
     762,   765,     0,     0,     0,     0,     0,     0,     0,     0,
     830,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   514,     0,     0,     0,     0,     0,
       0,   430,     0,   453,   455,   485,     0,   807,   808,     0,
       0,   722,   674,   332,   604,     0,   609,   610,   611,   612,
     258,     0,   285,   257,   367,   369,     0,   375,   434,   464,
       0,   560,   582,     0,     0,   559,   560,     0,   560,     0,
      90,     0,   239,     0,     0,     0,     0,    53,     0,     0,
       0,     0,   143,     0,     0,     0,     0,     0,   175,   176,
     177,   178,   179,   180,     0,     0,     0,     0,   156,     0,
       0,     0,   160,   161,   162,   164,     0,     0,   166,     0,
     169,   170,   171,     0,     0,     0,     0,     0,     0,    97,
      91,    92,    93,    94,    95,    96,   146,   147,   148,     0,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   182,   183,   184,   185,   186,
     187,   188,   189,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,   202,   203,   204,     0,    60,     0,    62,
       0,     0,     0,     0,     0,    70,    71,    72,     0,     0,
       0,    47,    45,     0,     0,   248,   246,    82,     0,     0,
      40,    36,    38,     0,    58,     0,   257,     0,     0,   355,
     357,   357,   357,     0,   321,   325,     0,     0,     0,   278,
     345,   346,     0,     0,   348,     0,     0,     0,   442,   444,
       0,     0,     0,     0,   470,   497,   498,   495,     0,     0,
       0,     0,     0,     0,   724,   724,     0,   551,   550,   554,
     724,   545,     0,     0,  1010,  1012,     0,     0,     0,     0,
       0,   774,   784,   776,   778,   803,     0,   777,   773,   772,
     795,   794,   771,   775,   770,     0,   792,   769,   793,     0,
       0,     0,   648,   802,     0,   647,     0,   831,   833,   832,
       0,   829,     0,     0,   404,     0,     0,     0,     0,     0,
     406,     0,     0,     0,     0,     0,   844,     0,     0,   512,
     513,     0,   520,   511,     0,     0,     0,     0,     0,     0,
     429,     0,   456,     0,     0,   806,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   680,     0,     0,   606,   625,
       0,     0,   621,     0,     0,     0,     0,   602,   613,   616,
       0,     0,  1025,   372,   529,     0,     0,     0,   591,   581,
       0,     0,   560,   598,   560,   599,    52,   243,     0,   242,
       0,     0,     0,    56,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
     101,   103,     0,     0,     0,     0,     0,   135,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,    59,     0,     0,     0,
       0,     0,     0,   259,   257,   417,   322,     0,     0,     0,
       0,   330,     0,   631,     0,     0,   285,   337,   335,     0,
       0,   333,   349,     0,   440,   441,     0,     0,     0,     0,
       0,   467,   468,     0,     0,   474,     0,   504,   503,   501,
       0,     0,     0,     0,   554,   554,   724,     0,     0,   736,
       0,   741,     0,     0,     0,     0,     0,   555,   745,   726,
       0,   743,   547,   554,   537,   544,   553,   552,     0,     0,
     758,     0,   763,   764,     0,     0,   765,     0,   765,   765,
     787,   801,     0,     0,     0,   838,   841,   840,   842,   839,
     834,   835,   837,   843,   836,     0,     0,     0,     0,     0,
       0,     0,   380,     0,     0,     0,     0,     0,     0,   844,
       0,     0,     0,   515,   519,   517,   516,   518,     0,   524,
     514,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,   454,   486,     0,   722,   676,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   660,   722,     0,   805,
     620,   618,   619,   622,   623,   624,     0,     0,     0,   263,
     263,   279,   280,   286,     0,   362,   593,   592,     0,     0,
     583,   588,   587,     0,   585,   563,   597,   240,   244,     0,
      54,     0,   141,   140,     0,   145,     0,     0,   228,   229,
     174,   152,   153,     0,     0,   157,   158,   159,   163,   165,
     167,   208,   209,   210,   211,     0,    98,   107,   109,   105,
     111,   113,   115,   149,     0,     0,   151,   224,   270,   270,
     270,   117,     0,     0,   125,     0,     0,   133,   270,   270,
     181,     0,     0,     0,   193,   194,     0,     0,   197,     0,
     200,     0,   205,     0,    61,    63,    66,    67,    68,    69,
       0,     0,     0,    81,    85,     0,     0,    50,     0,     0,
      42,     0,    43,    35,     0,     0,   268,   259,   356,     0,
       0,     0,   326,     0,     0,     0,  1025,   350,     0,   336,
       0,     0,   443,   445,     0,     0,     0,   471,     0,     0,
       0,     0,     0,   720,     0,   541,   549,   554,   725,   556,
       0,     0,     0,     0,     0,     0,   746,   727,   728,   730,
     729,   734,     0,     0,     0,     0,   744,   742,   546,     0,
       0,   844,     0,     0,   767,   796,   804,   797,   785,     0,
     649,   381,     0,   844,     0,   397,     0,     0,     0,     0,
     405,     0,   389,     0,     0,     0,     0,     0,   852,   853,
     854,   856,   855,   974,   859,   860,   861,   967,   858,   857,
     962,   963,   964,   965,   966,   949,   862,   903,   894,   899,
     844,   945,   935,   906,   938,   881,   888,   885,   872,   928,
     917,   844,   925,   943,   879,   880,   950,   866,   873,   921,
     937,   942,   939,   900,   878,   947,   819,   877,   897,   890,
     887,   844,   936,   926,   867,   916,   955,   893,   907,   889,
     908,   892,   931,   914,   875,   844,   864,   948,   870,   932,
     884,   911,   923,   883,   844,   912,   909,   910,   918,   930,
     920,   886,   891,   915,   904,   905,   922,   954,   927,   896,
     929,   882,   956,   913,   901,   895,   902,   898,   941,   869,
     863,   934,   940,   874,   876,   865,   946,   924,   944,   919,
     933,   871,   868,   952,   844,   953,   951,   969,   970,   971,
     972,   973,   960,   961,   957,   958,   959,   968,   845,     0,
       0,   522,   521,     0,   526,   520,     0,   383,     0,     0,
       0,     0,     0,     0,     0,     0,   457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   298,     0,
       0,     0,     0,   656,   673,   681,   724,     0,   615,   617,
     264,   265,     0,   282,   284,     0,     0,     0,  1028,  1026,
    1027,   561,     0,   584,     0,     0,     0,  1025,     0,     0,
       0,   144,   231,   232,   233,   234,   237,   236,   238,   230,
     235,     0,     0,     0,   270,   270,   270,   270,   270,   270,
       0,     0,     0,   274,   274,   274,   270,     0,     0,     0,
     270,     0,     0,     0,   270,   274,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    87,
      41,    37,    39,     0,     0,     0,   278,   268,   358,     0,
       0,     0,     0,   632,   633,     0,   627,     0,     0,     0,
       0,     0,     0,   505,     0,   530,   698,     0,   696,     0,
     531,     0,   548,     0,     0,     0,     0,     0,     0,   748,
       0,     0,     0,     0,     0,     0,   844,     0,   759,   766,
       0,   844,     0,   385,   398,     0,   407,   408,   409,     0,
       0,     0,     0,     0,   382,   818,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   509,   524,     0,
       0,   391,     0,     0,     0,   431,   460,   461,   459,     0,
     660,     0,     0,     0,     0,   688,     0,     0,     0,   685,
       0,   684,     0,   694,     0,     0,     0,     0,     0,     0,
     655,   723,   614,   263,   281,   288,   287,     0,     0,   595,
     594,   590,   589,     0,   565,   558,     7,   142,   139,   154,
     155,   212,   274,   274,   274,   274,   274,   274,   214,     0,
     150,     0,     0,     0,     0,     0,   274,   119,     0,     0,
     274,   127,     0,     0,   274,     0,     0,   190,   191,   192,
     195,   196,     0,   201,   206,     0,     0,     0,     0,   263,
     266,   269,   285,   278,   354,     0,   353,   352,     0,     0,
     351,     0,     0,     0,     0,     0,   502,     0,     0,     0,
     535,     0,   721,   738,     0,   756,   740,     0,     0,     0,
     749,   747,   731,   732,   733,   735,     0,   844,     0,   821,
     650,     0,   823,   399,     0,   393,   390,     0,   397,   846,
       0,     0,     0,     0,     0,   844,     0,   523,     0,     0,
     526,   387,     0,     0,     0,   384,     0,   658,   675,     0,
       0,     0,     0,     0,   686,   687,   299,   682,   662,     0,
       0,     0,     0,     0,     0,   283,  1029,     0,   562,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   272,
     271,     0,   100,   102,   104,     0,   270,     0,     0,     0,
     270,     0,     0,     0,   136,   138,     0,     0,     0,     0,
     290,   261,     0,     0,   260,   291,   285,   359,   327,   634,
       0,     0,     0,     0,     0,   533,     0,   699,   697,     0,
     754,   755,     0,     0,     0,   844,     0,   820,   822,     0,
     395,   410,   386,     0,   851,   850,   847,   849,   848,     0,
       0,   525,     0,   510,   394,   392,     0,     0,   689,     0,
       0,   695,     0,   661,     0,     0,     0,     0,     0,   668,
       0,     0,     0,   586,     0,     0,   564,   108,   110,   106,
     112,   114,   116,   215,     0,   263,   275,   118,   274,   121,
     123,   126,   274,   129,   131,   134,   198,    75,     0,     0,
     267,   263,     0,   296,   256,     0,     0,   472,   465,     0,
     469,     0,   737,   739,   753,   750,     0,   825,     0,   399,
     993,   844,     0,   388,     0,     0,   683,     0,   657,   663,
     664,     0,     0,     0,   571,     0,   566,     0,   568,   569,
     273,   276,     0,     0,   270,   270,     0,   270,   270,     0,
       0,   262,   293,   292,     0,   255,     0,     0,     0,     0,
     751,   752,   824,     0,     0,   401,   396,     0,   527,     0,
       0,     0,     0,     0,     0,     0,     0,   567,     0,   263,
     120,   274,   274,   128,   274,   274,    76,    77,     0,     0,
     297,     0,     0,   466,   700,     0,     0,   400,     0,   994,
       0,     0,     0,     0,     0,     0,   667,   572,     0,   277,
       0,     0,     0,     0,   295,   294,     0,     0,   702,     0,
     403,   402,     0,     0,     0,     0,   702,     0,     0,   570,
     122,   124,   130,   132,     0,     0,   532,   701,     0,     0,
       0,     0,   690,     0,     0,   669,   665,     0,     0,     0,
     716,     0,     0,   659,     0,   702,   702,     0,     0,   666,
       0,     0,     0,   717,   534,     0,   713,   715,   714,     0,
       0,     0,   692,   691,     0,   670,     0,     0,   718,   719,
     703,   711,   705,     0,   707,   712,   709,     0,   702,     0,
     438,     0,   706,   704,   710,   708,   693,     0,   439,     0,
       0,     0,     0,     0,     0,   671,   672
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,   782,  1223,  1467,  1469,  1465,   783,  1108,   794,
    1468,   784,  1213,  1461,  1214,  1462,   795,  1688,  1689,  1690,
    2026,  2024,  2025,  2027,  2028,  2029,  2036,  2336,  2484,  2485,
    2040,  2340,  2487,  2488,  2044,  1698,  1699,   801,  1400,   473,
      25,    26,   757,  1736,  2230,  1993,  2354,  2066,  2033,  2330,
    2203,  2426,  1082,  1631,  1632,  1372,  1226,  2443,  2495,  1979,
     123,   346,   347,   608,   356,   357,   358,   359,   950,   631,
     360,   628,   964,   629,   960,  1491,  1492,   949,  1478,  2069,
     361,    27,    98,   175,   437,    28,   450,    29,  2115,  2380,
    2504,  2505,  1319,  1320,    30,    31,   944,   141,    32,   743,
      33,    34,  1496,    35,    36,    37,   745,  1063,  1600,  1601,
      38,    39,  1503,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,   381,    53,   649,  1508,
      54,  1054,  1332,  1589,  1952,  1954,  2137,    55,    56,  1532,
      57,  1378,  2178,  2007,  2321,  2416,  2518,  2318,   111,   201,
     777,  1093,  1382,  2005,  1643,  1091,    58,    59,   169,   435,
     751,   754,  1079,  1367,  1368,  1369,    60,   126,   956,    61,
     150,    62,    63,    64,  2170,  1983,  2584,  2585,    96,  1354,
    1355,  2089,  2087,  2535,  2576,  1764,  1356,  1269,  1012,  1023,
    1281,  1282,   716,  1286,  1072,  1073,    65,   121,   122,    66,
     722,   723,   724,  1565,  1580,  1948,    67,    68,   404,   405,
      69,   420,   734,    70,    71,   394,   675,    72,  1635,  2000
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1956
static const yytype_int16 yypact[] =
{
   13520,  -158,   -89,   167, 13464,   199, -1956,   870, -1956,   233,
     300,   165,   164,   261, -1956,    57, -1956,   280,   639,   116,
     436,   -77,   122,   175,   623,   215, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956,   677, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956,   694,   733,   748,   257, -1956,   266,   479,
     598,   778,   632,   792,   528,   795,   807,   813,   598, -1956,
     585,   667,   598,   442,   444,   104,   590, -1956,    71,   195,
     230,   866,   363,   414,   871,   415,   495,   508,   483,   487,
     531,   480,   741,   488, -1956, -1956,   918,   925,   480,   687,
     105,   534, -1956,  6272,   951,   642,   119, -1956,   965,  -106,
     853,   856,   860,   811,   876,   574,  1002,  1007,  1012, -1956,
   13520,   127,  -150,   207,   461,   485,  1016,    39,   408,   769,
    1036,  1017,  1071,   652,   887,   553,   809,   671,   552,   915,
    1105, -1956,   535,  1118,   562,   563,   999,   898,   598,   768,
     734,  1207, -1956, -1956, -1956,  -101, -1956,   938, -1956,   956,
   -1956, -1956,   970, -1956,   976,  1069, -1956,   987,    25,  1004,
   -1956,  1023,   564,   570, -1956,  1031, -1956, -1956, -1956, -1956,
   -1956,  1285, -1956,  1326, -1956,  1098,  1354, 10192, 10192, -1956,
   -1956,  1376,   396, -1956, -1956, -1956, -1956,  1377, 10192, 10192,
   10192, -1956, -1956, -1956,  7448, -1956, -1956,   972, -1956, -1956,
   -1956,   989, -1956, -1956, -1956, -1956, -1956, -1956,  1388,  1010,
    1028,  1037,  1055,  1087,  1106,  1127,  1151,  1153,  1157,  1158,
    1161,  1163,  1165,  1167,  1168,  1169,  1170,  1171,  1172,  1194,
    1198,  1199,  1200,  1201,  1205,  1206,  1208,  1209,  1210,  1211,
    1212,  1213,  1214,  1215,  1216,  1217,  1218,  1219,  1220,  1221,
    1222,  1223,  1225,  1226,  1227,  1229,  1230,  1231,  1232,  1234,
    1235,  1236,  1237,  1239, -1956, -1956,  1240,  1241,  1242,  1243,
    1244,  1270,  1272,  1273,  1274,  1275,  1276,  1277,  1284,  1286,
    1288,  1289,  1290,  1294,  1298,  1299,  1300,  1306,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1316,  1317,  1318,  1319,
    1320,  1321,  1323,  1324,  1327,  1328,  1330,  1331,  1332,  1333,
    1339,  1340,  1342,  1346, 10192, 14273,  -110, -1956,  1000,   810,
     815,    22,  1347,  1490,  1355,    77,  -169,   496, -1956,  1495,
   -1956,  1495, -1956,  1623,  1472,  1743,  1775,  1777,  1779,  1780,
    1768,  1519, -1956,  1365, -1956,  1734,  1735, -1956, -1956,  1745,
    1787,   -16, -1956, -1956,   128,   214,    91,   576,   507,   216,
     604,  1720,  1515,  1548,   151,   579, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956,   451, -1956,  1791,  1793, -1956, -1956,
   13938,  1600,    60,  1795,  1602,  1520,  1799,    60, -1956, -1956,
     -85,    85, -1956,  1611,   571,  1528, -1956,  1533,  1530, -1956,
    1538,  1396,  1817,  1819,  1824,   -30,  1801, -1956,   -95,  -189,
     119,  1829,  1831,  1834,  1841,  1842,    87,  1843, -1956, -1956,
   -1956,  1845,  1847,  1786,  1572,  1792,  1586,  1865,  -176, -1956,
    1868,  -161, 14436, 14436, -1956,  1869, 10192, 10192,  1583,  1583,
    1839, 10192, 13631,   439,  1874,  1879,  1456, -1956, 10192,  6664,
   10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192,  1459,
   10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192,
   10192, 10192, 10192, 10192, 10192,  1460, 10192, 10192, 10192,  1461,
   10192, 10192, 10192, 10192, 10192, 10192,  7840, 10192, 10192, 10192,
   10192, 10192, 10192, 10192, 10192, 10192, 10192,  1462,  1463,  1465,
    1473,  1474, 10192, 10192,  1478,  1479,  1480, 10192, 10192,  1902,
    1486,  1488, 10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192,
   10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192,
   10192, 10192, 10192, 10192,  1496, 10192, 10192, 10192,  1497, 10192,
   10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192,  1498,
    1349, -1956, 10192, 10192, 10192, 10192, 10192,    30,  1491,   622,
   10192,  7056, 10192, 10192, 10192, 10192, 10192, 10192, 10192, 10192,
   10192, 10192, 10192, 10192, 10192, 10192, 10192,  1917, -1956,   119,
    1921, 10192,  1922,  1923,   455, -1956,   651, 10192,  1502,   456,
    1925,   119, -1956, -1956, -1956,     7, -1956,   119,  1766,  1736,
   -1956,  1927,  1928,  1662,  1931,  1534,  1535,  1661,  1672,  1670,
    1942,  1673,  1944, -1956, -1956,  1948,  1677,  1905,  1913, -1956,
    1953,  1955,  1959,  1960,  1961,  1963, -1956,  1964,  1965,  1968,
    1969, 13938,  1974,  1733,  1976,  1978,  1986,  2002,  2006,  1631,
    2008,    32,   589,  2009, -1956, -1956,  1794,  1798, -1956,   109,
    1592,  1593, -1956, -1956,  1594,  1594,  1594,  1594,  1594, -1956,
    1594, -1956,  1595,  1594,  1594,  1594,  1956, -1956,  1956, -1956,
    1594,  1594,  1594,  1603,  1956,  1594,  1956, -1956, -1956, -1956,
   -1956, -1956,  1605,  1606,  1607, -1956,   568,  2029, 13938,  2037,
    2055,  2058,  1601,  1636, -1956,  -184,  2060,  2062,  1867,  1641,
   -1956, -1956, -1956, -1956,  1870,  2017,  1674,  2066,  1875,  1790,
    2070,   151,  1650, -1956,  2072,  1800,  2075,  2077,  1941,   366,
   -1956,   491, -1956, -1956,    54, -1956, 10192,  1884,   119,  -151,
     734, -1956, -1956, -1956, -1956, -1956,  1687, -1956,    25, -1956,
   -1956,  2083, -1956,  2084, -1956,  2085,  2086,   -74, -1956,  2085,
     -51, -1956,  1972, -1956,  1665, 14436, 13935,   460, -1956, 10192,
   10192, -1956,  1666, -1956, 10192,  1851,   118, -1956, -1956, -1956,
   10861,  8232,  2023,  6373,  6401, 10888, 10915, 10957, 10984, 11017,
   11044, -1956,  6687,  6736,  6764,  6792, 11071,  6840,  6872,  7145,
   11126, 11156, 11183,   834,  7173, 11217,  7201, -1956, 11251, 11278,
   11305, -1956, 14336,  7281,  7471,  7520,  7554, 10801,  1668, 11332,
   11365, 11392, 11425, 11452, 11479, 11506, 11534,  7582,  7624,  7656,
   -1956, -1956, -1956, -1956, -1956, 11564,  7929,  1744,  1746,  1747,
     874,   919,  1676,  1748,  1752,  7963, 11591, 11625, 11659, 11686,
   11713, 11740, 11773, 11800,  8065,  8255,  8304,  8351,  8380,  8408,
    8440,  8728,  1122, 11833, 11860, 11887,  8760, -1956,  1175, 11914,
    8849, -1956,  9039,  9088,  9137,  9192, 11942, 11972, 11999,  9224,
    9512,  9546, -1956, -1956,  6500,  7862,  8639,  9423,  9423, -1956,
      83, -1956, -1956,  1854, 10192, 10192,  1679, 10192, 14370,  1680,
    1681,  1682, 10192,  1138,  1540,  1540,  1322,   775,  1389,   943,
     943,   793,   793,   793,   793,   750,  1839,  1839,   746, -1956,
    -112,  1971, -1956, -1956,  1684,   651,  1947,  1949,  1951, -1956,
    1851,   455, 12033, -1956, -1956,    18,   -97,   496,  1736,  1736,
    1945,  1929,   119, -1956,  1957, -1956, -1956,  1694,  1848,  2124,
    2125,  1719,  1707,  1722,  1724,  2133, -1956,   826,   -16,  1966,
    1967,   424, 13938, 13938,  2135, -1956,  1919, -1956, -1956, -1956,
    1926,  2114, 13938,  2149,  1908,  1909, -1956, -1956, -1956, -1956,
   -1956, -1956,  2153, -1956,  2155, -1956,  2158,  2159, -1956,    60,
      60,  2165, -1956, -1956, -1956, -1956, -1956, -1956,  2167, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,  2167, -1956,
   -1956, -1956,  2168,  2170,  2171,  1979,  1750,  1754, 10192,  1756,
    2114, 13938, 13938, 13938,  1970,    60,  -164,   223,  -168,  1984,
    2179,   246,    88,   696,  2044,  2182,  -100,  2183,  2184,  1991,
    1797,  1533,  1771, -1956, -1956, -1956,  1774, -1956, -1956,  2102,
    2194,   464, -1956,  1495, -1956,  2200, -1956, -1956, -1956,    73,
   14436,  2141,  2027,  -151, -1956, -1956,  2207, -1956, -1956, -1956,
    2191,  -144, -1956,   498,  1796, -1956,  -144,  1796,  2015, 10192,
   -1956, 10192, -1956, 10192, 14134, 13962,  2127,  9633,  1802,  1803,
   10192, 10192, -1956, 10192, 14003,  2063,  2063, 10192, -1956, -1956,
   -1956, -1956, -1956, -1956, 10192, 10192, 10192, 10192, -1956, 10192,
   10192, 10192, -1956, -1956, -1956, -1956, 10192, 10192, -1956, 10192,
   -1956, -1956, -1956, 13938, 13938, 10192, 10192, 10192,  2215, -1956,
    1872,  1873,  1876,  1877,  1881,  1882, -1956, -1956, -1956, 10192,
   10192, 10192, -1956, 10192,  1809,  1810,  1812,  1887,  2233,  1889,
    2236,  1892,  1820,  1825, 10192, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, 10192, 10192, 10192, 10192, 10192, 10192, 10192,
   10192, -1956, 10192, -1956, -1956, -1956, 10192, -1956, 10192, -1956,
   10192, 10192, 10192, 10192, 10192, -1956, -1956, -1956, 10192, 10192,
   10192, -1956, -1956, 10192,  1851,  9423,  9423,  2007, 14403, 10192,
   -1956, 10192, 10192,  1851, -1956,  1838,  1977,   119,  2240,   455,
    2119,  2119,  2119,  1835, -1956,   654, 10192,  2264,  2269,  1884,
   -1956, -1956,   119, 10192,   392,   119,    65,  1850,  1880,  2098,
    2262,    66,  2265,  2280,  2107, -1956, -1956, -1956,  2287,  2287,
    1883,  2129,  2136,  1885,  2114,  2114, 13938, -1956, -1956,  2061,
    2114, -1956,  2303,  2305, -1956, -1956,  2088,  2089,  1888,  1890,
     500,   -76,   875,   -76,   -76, -1956,   537,   -76,   -76,   -76,
     875,   875,   -76,   -76,   -76,   541,   875,   -76,   875,  1894,
    1896,  1898,  2234, -1956, 10192, 14436,   223,  2114,  2114,  2114,
     443, -1956,  1893,  1900, -1956,  1901,  1903,  1904,  1906,   572,
   -1956,  2046,   223,  2323,   -88,  2278, -1956,  2199,  1946, -1956,
   -1956,    46,  2099,  2017,  2079,   223,   -81,  2146,  2342,  2331,
   -1956,   594,  1800,  2350,  2352,   -98,  2357,  1937,  2198,   583,
    1939,  1940,  2201,  1943,   592, -1956,  2363,  1851, -1956, -1956,
    2364,    -4,  2365,  2366,  2368,  1950,   481, -1956,  1958, -1956,
     707, 10192,  2157, -1956, -1956,  8624,  2209,  2372, -1956, -1956,
    2373,  9016,  -132, -1956,  -132, -1956, -1956, 14436, 14207, -1956,
   10192,  1962, 10192, -1956, -1956, 10834,  1202, 12067, 10192, 10192,
    1952,  1981, 12094, 12121, 12148,  9823,  9872, 12181, 12208, 12241,
   12268, 12295, 12322,   -18,   -17, 12350, 12380,  9921,  1982,  1980,
    1987,  1988,  1993,  1994,  1995,  1295,  9976, 12407, 12441, -1956,
   -1956, -1956,  2003,   595,  2005,   601,  2013, -1956, -1956, 12475,
   10008, 10281, 10308, 12502, 12529, 10338, 10417,  1378,  1417,  1444,
   12556, 12589, 12616, 12649, 12676, 12703, 10599, 10626, 10653,  1983,
    2014, 10192,  1851, 10192,  1493,  1851, 14436,  1851,  2016,  1851,
    2018,  2025,  2330,  2241,  -151, -1956, -1956,  2220,  2028,  2030,
    2031, -1956,  2382, 14436,  2367,    42,  2027, -1956, 14436, 10192,
    2032, -1956, -1956,   392, -1956, -1956,  2033,    65,  2385,  2389,
    2391, -1956, -1956,  2034,  2392, -1956,  2397, -1956,  2040,  -196,
   10192,  2043,  2047,  2400,  2061,  2061,  2114,  2238,  2429,  2049,
    2050,  2051,  2381,  2437,  2052,  2438,   152, -1956, -1956, -1956,
    2289,  2293, -1956,  2061, -1956, -1956, -1956, -1956,  2257,   688,
   -1956,  2446, -1956, -1956,  2242,  2479, -1956,  2481, -1956, -1956,
   -1956, -1956,  2065, 12730,   603, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956,   692,   223,  2487,  2490,  2494,
    2495,  2496, -1956,  2498,  2078,   605,  2080,  -163,   223, -1956,
    1699,  2387,  2500, -1956, -1956, -1956, -1956, -1956,  2503,  2243,
    2044,  2087,   607,  2239,   223,  2505,   -78,  2506,  2492,  2493,
     609, -1956, -1956, -1956,  2375,   464, -1956,   428, 10192,  2092,
    2093,  2094,  2517,  2517,  2097,  2400,   467,   464, 13938, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956,   481,   616,   481,   -10,
     538,  2096, -1956,  1476,   177, -1956, -1956, 14436,  2270,  2507,
   -1956, -1956, 14436,   618, -1956,  2326, -1956, -1956, 14436,  2525,
   -1956, 10192, -1956, -1956, 10192, -1956, 12758, 13788, -1956, -1956,
   -1956, -1956, -1956, 10192, 10192, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, 10192, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, 10192, 10192, -1956, -1956,  2187,  2187,
    2187, -1956,  2180,  1042, -1956,  2189,  1044, -1956,  2187,  2187,
   -1956, 10192, 10192, 10192, -1956, -1956, 10192, 10192, -1956, 10192,
   -1956, 10192, -1956, 10192, -1956, -1956, -1956, -1956, -1956, -1956,
   10192, 10192, 10192, -1956, -1956,  2108,  2116,  1493,  2121,  2123,
   -1956,  2126, -1956, -1956,  2459,  2509,  2408,  2241, -1956,  2566,
    2566,  2566,  2161, 10192, 10192,  2576,  2157, 14436,  2517, -1956,
      65,  2160, -1956, -1956,  2575,    66,  2577, -1956,  2585,  2586,
   12788,  2587,  2589, -1956,   627, -1956, -1956,  2061, -1956, -1956,
    2588, 10192,  2591,  2543,   -12, 10192, -1956, -1956, -1956, -1956,
   -1956, -1956,  2174,  2176,  2177, 10192, -1956, -1956, -1956,   443,
    2542, -1956,  2178,  2600, -1956,   875, -1956,   875,   875, 10192,
   -1956, -1956,  2545, -1956,   629,  2603,  2192,  2193,  2196,  2181,
   -1956,   223, -1956,   223,  2185,  2202,   631,  2139, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,  2405,
    2483, -1956,  2204,  2208,  2347,  2099,   223, -1956,  2210,   633,
    2216,  2371,   223,  2217,  2636,  2639, -1956,   594,  2374,   657,
    2222,  2480,  2484,  2223, 12815,  2587,  2517,  2517, -1956,   668,
     681,  2589,   691,     3, -1956, -1956,  2114,   698, -1956, -1956,
   -1956, -1956,  2646, -1956, -1956,   707, 10192, 10192, -1956, -1956,
    2224, -1956,  9408, -1956,  9800,  2227,  2564,  2157,  2228, 12849,
   12883, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, 12910, 12937, 12964,  2187,  2187,  2187,  2187,  2187,  2187,
    1659, 12997,  2592,  2456,  2456,  2456,  2187,  2232,  2235,  2237,
    2187,  2244,  2247,  2248,  2187,  2456,  2456, 13024, 13057, 13084,
   13111, 13138, 10690, 13166, 13196, 10717, 10747, 10774, -1956, -1956,
   -1956, -1956, -1956,  2250, 10192, 10192,  1884,  2408, -1956,   700,
     702,   704,  2658, 14436, 14436,  2644, -1956,   751,  2249,    65,
    2501,  2251,  2502, -1956,  2631,  2663, -1956,   758, -1956,   814,
   -1956,  2679, -1956,   817, 13223,   819,  2259,  2261,  2522, -1956,
   13257,  2266,  2271,  2272, 13291,   693, -1956,  2418, -1956, -1956,
   13318, -1956,  2697, -1956, -1956,  2273, -1956, -1956, -1956,  2684,
     821,   824,   223,  2687, -1956, -1956,  2976,  3255,  3534,  3813,
    4092,  4371,  2648,  2593,  2703, 10192,  2632, -1956,  2243,   828,
     223, -1956,   223,  2288,   830, -1956, -1956, -1956, -1956,  2580,
     467, 10192,  2294,  2295,  2400, -1956,   836,   838,   845, -1956,
    2717, -1956,   847, -1956,   189,  2297,  2719,  2665,  2314,  2667,
   -1956,   650, -1956,   538, -1956, 14436, 14436,  2728,  2729, -1956,
   14436, -1956, 14436,  9016,  2309, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956,  2456,  2456,  2456,  2456,  2456,  2456, -1956, 10192,
   -1956,  2731,  2672,  2311,  2313,  2320,  2456, -1956,  2396,  2399,
    2456, -1956,  2402,  2403,  2456,  2325,  2329, -1956, -1956, -1956,
   -1956, -1956, 10192, -1956, -1956,  2734,  2750,  2756,  2757, 14241,
    -116, 14436,  2027,  1884, -1956,  2761, -1956, -1956,  2343, 10192,
   -1956,    65,  2346,  2749,    66,  2758, -1956,  2508,  2569,  2777,
   -1956,  2778, -1956, -1956,  2779,  1061, -1956,  2780, 10192, 10192,
   -1956, -1956, -1956, -1956, -1956, -1956,  2722, -1956,  4650, -1956,
   -1956,  4929, -1956,  2510,  2358, -1956, -1956,   852,  2603, -1956,
    2709,  2657,  2633,  2624,  2515, -1956,  2578, -1956, 13345,  2370,
    2347, -1956,   854,   867,   223, -1956,  2376,    55, -1956, 13372,
    2587,  2589,   869,  2590, -1956, -1956, -1956, -1956, -1956,  2787,
    2793,    -7,   -39,  2383,  2597, -1956, -1956,  2782,  2380,   877,
    2804,  2707,  2384,  2393,  2395,  2407,  2410,  2423, 13405, -1956,
    2386,  2814, -1956, -1956, -1956,  2426,  2187,  2401,  2406,  2433,
    2187,  2440,  2441,  2442, -1956, -1956, 13432,  2443,  2444,  2445,
   -1956, -1956,  2613, 10192, -1956,  2726,  2027, -1956, -1956, 14436,
    2447,    65,  2865,   907,  2868, -1956,  2872, -1956, -1956,  2452,
   -1956, -1956,  2454, 13465, 13492, -1956,  5208, -1956, -1956,  2457,
   -1956, -1956, -1956,  2455, -1956, -1956, -1956, -1956, -1956,  5487,
    2822, -1956, 10192, -1956, -1956, -1956,   909,  2878, -1956,   911,
     913, -1956,  2881, -1956,  2460,  2883,  2885,  2472,  2473, -1956,
    2476, 10192,  2898, -1956,   916,   -15, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956,  2899,   538,  2477, -1956,  2456, -1956,
   -1956, -1956,  2456, -1956, -1956, -1956, -1956, -1956,  2901,  2905,
   -1956, 14241,   446,  2752, -1956,    65,  2497, -1956, -1956,    66,
   -1956,  2489, -1956, -1956,  1424, -1956,  5766, -1956,  2915,  2510,
   -1956, -1956, 13519, -1956,  2499,  2712, -1956,  1060, -1956, -1956,
   -1956,  2917,  2918,  2919, 14436,  2906, -1956,  2922, -1956, -1956,
   -1956, -1956,  2924,  2504,  2187,  2187,  2514,  2187,  2187,  2516,
    2518, -1956,  2699,  2700,  2517, -1956,  2519,    65,  2526,  2925,
   -1956, -1956, -1956,  2912,  1107, -1956, -1956,  6045, -1956,  2688,
    2931,  2932,  2925,  2527,  2528,  2529, 10192, -1956,  2702,   538,
   -1956,  2456,  2456, -1956,  2456,  2456, -1956, -1956,  2760,  2764,
    2521,    65,  2530, -1956, -1956,  1109,  2955, -1956,  2915, -1956,
    2537,  1113,  2538,  1117,  2540,  2736, -1956, 14436,  2729, -1956,
    2541,  2544,  2550,  2551, -1956, -1956,  2559,    65, -1956,  2967,
   -1956, -1956,  2972,  2984,  2925,  2925, -1956,  2762,  2986,  2380,
   -1956, -1956, -1956, -1956,    65,  2563,   137, -1956,  2570,  2573,
    1119,  1124,   156,  2995,  1128, -1956, -1956,  2574,    65,    27,
    2848,   377,   -20, -1956,  2925, -1956, -1956,  2904,  2737, -1956,
    2762,    65,  2581, -1956, -1956,   533, -1956, -1956, -1956,   422,
     430,  1130,   156,   156,  2835, -1956,  2599,    65, -1956, -1956,
   -1956, -1956, -1956,    -2, -1956, -1956, -1956,    13, -1956,  2763,
   -1956,  2604, -1956, -1956, -1956, -1956,   156,   121, -1956,  2813,
    2815,  2820,  2823,  3010,  3012, -1956, -1956
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1956,  2888,  -123, -1956, -1956, -1956, -1956, -1049,  1626, -1956,
    1811, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956, -1956, -1956,  1915,  2553,
   -1956,  -287,  -742,  1297, -1956, -1628, -1956,   973, -1503, -1956,
   -1925, -1956, -1238, -1956,  1046, -1483, -1956, -1956, -1956, -1572,
   -1956, -1956,  2421,  -337,  -347,  2422,  -615, -1956, -1956,  -357,
   -1956, -1956,   580, -1956, -1956, -1956,  1554,  -918,   326,  -181,
   -1956, -1956, -1956,  2877,  2291, -1956,  2292, -1956,   777,   597,
   -1956,   519, -1301, -1956, -1956, -1956, -1956, -1956, -1956,  1998,
   -1956, -1956, -1486, -1956, -1956, -1956,  1997,  1721, -1956,  1095,
   -1956, -1956, -1749, -1956, -1956, -1956, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1956, -1956,  2419, -1956,  2090,  1805,
   -1956,  1737,  1477,  1111, -1956,   931,   781, -1956, -1956, -1455,
   -1956, -1044, -1956, -1956, -1956, -1956, -1956,   525,   732,  2956,
    2614, -1956,  1989, -1956,   893,  2299, -1956, -1956, -1956, -1956,
   -1956, -1956, -1956, -1956, -1309,  1451, -1956, -1956, -1956, -1956,
     649, -1956, -1956, -1956, -1956,   930, -1956,   497, -1956,  1482,
    1464, -1949, -1955, -1922, -1951, -1599, -1956, -1255,   596,   126,
      84, -1000,  -526,  2057, -1338, -1956, -1956, -1956,  2880, -1956,
    -404, -1956,  2054,  1315, -1552, -1956, -1956, -1956, -1956,  2409,
   -1956, -1956, -1956, -1956, -1956,  2670, -1956, -1956, -1706, -1956
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -807
static const yytype_int16 yytable[] =
{
     345,  1486,  1994,  1746,   632,  1554,  2081,  1606,   619,  1514,
    1515,  1751,   961,   729,   614,  1533,  1982,  1084,  1036,  1036,
    2156,  1575,   730,  1290,  1291,   581,   609,  1817,  1225,  1296,
     132,  1298,  2162,  1234,  1592,   440,   909,  1001,  1236,  1990,
    2076,  1980,   396,   397,   398,   399,   400,   401,   910,   610,
    1386,  2164,  1383,   363,  1385,  1376,  1067,  1627,  1076,  1765,
    1766,    73,  1744,   718,   775,   119,  2097,  1376,   618,  1494,
    1501,   620,   731,   607,   170,  2478,   719,   758,  1788,   779,
     351,  1759,  1046,  1621,   462,   463,  1583,  2609,   735,  1211,
     765,  1327,   647,   759,    74,   468,   469,   470,  1321,   448,
    2405,   472,  1991,  2164,  1312,  1814,   752,   166,   209,  2204,
    2205,  2632,   396,   397,   398,   399,   400,   401,  1068,   127,
    2215,  2216,   351,   756,  2603,  2639,  2634,   379,   582,   583,
     584,   585,   586,   587,   588,   991,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,  1584,   606,  2589,  1777,  1778,  1779,  1780,
    1359,  2352,   654,    77,  1459,  2407,  1334,    16,   114,   669,
      78,  -370,  1360,   732,  2597,  2165,  2077,   756,  1577,   756,
    1998,   375,   376,  1542,   958,  1593,  2034,  2035,  1961,  2098,
      16,  2633,  1040,   115,  2308,  2045,  2046,  1094,   176,   650,
    2166,   377,    97,  1585,  1543,  1999,  2635,   171,  1361,  2309,
     720,   128,   651,    75,  1239,   753,  1362,   652,   210,   661,
    1097,   580,   959,   911,  1781,   172,  1314,  1313,  1815,  2408,
    1758,  2167,   402,   178,  2590,   449,   112,   441,  2610,  2107,
    1047,  2406,   648,  2479,   352,  1622,    76,   173,   776,  2099,
     353,  2112,  2166,  2590,  1110,   721,  1322,   621,  1495,  1502,
     167,  1767,   940,   776,  2078,  1804,  1363,  2322,  2323,  2324,
    2325,  2326,  2327,   380,   174,   621,  1212,  1816,  1984,   951,
    2168,  2335,  1377,  2167,   120,  2339,   352,  1586,  2126,  2343,
    1077,  1078,   353,  1959,  1644,   364,  2604,  1325,   653,  2127,
     662,  2185,   402,   113,  1587,  2640,  1326,   382,   655,  1002,
    2353,  1476,  2092,   733,   621,  1364,   611,  1987,    16,  2128,
    2591,   133,   134,   135,  1335,   441,  1605,   383,   436,  1238,
     136,  -370,  2168,  2129,  2592,   670,  1578,   378,  1645,  2591,
    1646,  1373,  2130,  1594,   785,  2399,  1962,  1244,   786,   912,
    1365,   177,  2400,  2592,  2169,   796,   800,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   181,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,  2131,   828,   829,   830,   179,   832,   833,   834,
     835,   836,   837,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,  2157,  2158,  2169,  1671,  1672,   855,
     856,  1083,  1725,  1992,   860,   861,   116,   183,   186,   865,
     866,   867,   868,   869,   870,   871,   872,   873,   874,   875,
     876,   877,   878,   879,   880,   881,   882,   883,   884,   885,
     886,  1237,   888,   889,   890,   613,   892,   893,   894,   895,
     896,   897,   898,   899,   900,   901,  1264,  1265,   354,   904,
     905,   906,   907,   908,   403,  1745,  1270,   918,   923,   924,
     925,   926,   927,   928,   929,   930,   931,   932,   933,   934,
     935,   936,   937,   938,  1473,  1782,  1783,  1784,   345,   736,
    1095,   766,  1328,  1098,   952,  2363,  2620,  1366,   188,   384,
     354,   355,  1260,  2483,  2624,  1555,  1970,  2486,  1109,  1556,
    2120,   190,  2121,   117,  2606,  1307,  1308,  1309,  -806,   182,
    1067,  2192,  2193,  2194,  2195,  2196,  2197,   671,   672,   673,
     674,   154,   124,  2206,   194,  1346,   385,  2210,   423,   137,
     392,  2214,  1347,   355,  1111,  2315,  1795,   406,  1797,  1798,
    1315,  1316,  1317,  1318,  2268,  2302,   414,  1557,  1261,  2271,
    1558,   386,  1971,   788,   789,   427,   429,   453,  1359,   387,
     184,   187,   622,   455,   738,  1559,  1785,  2607,   659,   656,
    1360,   388,  1068,   196,  1102,  1103,  1035,  1990,   946,  1489,
    2543,   418,   138,  2242,  1003,  1560,  2550,  2551,  1348,  2552,
    2553,  2351,  1349,  1561,  1036,  1278,  1279,   663,  1229,   947,
     407,   419,  2608,   155,  2621,  2582,  1361,  1413,  1414,  1350,
     424,  1067,  2625,   139,  1362,  1262,   197,  1487,  1351,  1972,
    1493,  2618,  2622,  1080,   198,   914,   915,   140,   916,   199,
    2626,   917,  2580,  2581,  2612,  2613,  1037,   657,   389,   623,
    1991,   189,  1004,   146,   581,  2139,   200,  -332,  1490,  -338,
     658,  2144,  2623,  1233,   191,  1352,  1104,  1105,  1517,   390,
    2627,  1107,  2611,   624,  1363,   664,  2492,  2636,  1114,   676,
     142,  1038,  2619,  1068,   156,  1263,   625,   195,   665,  1973,
     147,   425,  1562,   393,  1563,   148,   207,   143,  1519,   677,
    2498,  1520,   607,  1521,  2493,   630,  1522,   208,  -806,   415,
    1629,   626,  1630,  1564,   790,  2376,  1357,  1069,   428,   430,
     454,  1523,   948,  1364,   660,  1353,   456,   739,  1524,  1525,
     391,  2171,  1737,  2389,   627,   790,   144,   160,  1610,  1790,
    1516,   163,  -573,  1802,  2266,   196,   118,  1611,  1791,  2355,
     125,   145,  1803,  2267,   149,  2360,   582,   583,   584,   585,
     586,   587,   588,  1526,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   151,   606,   604,   605,  -573,   606,   152,   197,  1070,
    1071,  1215,  1216,  -573,  1218,   153,   349,  2481,   157,   580,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     158,   606,  2298,  2491,  1528,  -573,   159,   433,   350,   465,
     466,  2277,   162,  2456,  1024,   603,   604,   605,  2232,   606,
    1029,   161,  1031,  2428,   129,   130,   131,  2432,   164,  2292,
     165,  2293,   168,  1529,   582,   583,   584,   585,   586,   587,
     588,  1530,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   180,
     606,  1255,  1256,  2444,   185,  2446,   678,   679,  1482,   192,
    1474,   954,   621,   193,   582,   583,   584,   585,   586,   587,
     588,  2549,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,  2507,
     606,  1531,   202,  -577,   203,  1305,  1074,  1075,  -574,  1329,
    1330,   204,  2530,  1379,  1380,  1540,  1541,  1460,   205,   582,
     583,   584,   585,   586,   587,   588,  1471,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   348,   606,  -577,  1544,  1545,  2496,
     211,  -574,  1546,  1547,  -577,    99,  1548,  1547,   362,  -574,
     368,   599,   600,   601,   602,   603,   604,   605,  1387,   606,
    1388,  2521,  2522,   370,  2524,  2525,  -577,  1395,  1396,   365,
    1397,  -574,   366,  2396,  1402,  2356,   367,  1572,  1573,  1598,
    1599,  1403,  1404,  1405,  1406,   371,  1407,  1408,  1409,   100,
     372,  2532,   369,  1410,  1411,   373,  1412,  1616,  1617,   395,
    1692,  1693,  1415,  1416,  1417,   101,  1695,  1696,  1801,  1573,
    1812,  1573,  1957,  1573,  1966,  1967,  1425,  1426,  1427,   409,
    1428,  1988,  1628,  2003,  2004,  2556,  2038,  2039,  2042,  2043,
     408,  1439,  2090,  2091,  2113,  1573,  2124,  1573,  2141,  1573,
    1440,  1441,  1442,  1443,  1444,  1445,  1446,  1447,   410,  1448,
    1619,  2575,   102,  1449,   411,  1450,   412,  1451,  1452,  1453,
    1454,  1455,  2150,  1617,   413,  1456,  1457,  1458,  2587,   103,
     416,   104,  1986,  2159,  2160,   417,  1464,   105,  1466,  1466,
    1283,  1284,  2602,  1287,  1288,  1289,  2161,  2160,   422,  1292,
    1293,  1294,   421,  1483,  1297,  2616,  2163,  2091,  2370,  2371,
    1488,   426,   106,  2172,  1628,  2234,  2235,  2236,  2235,  2237,
    2235,  2631,   582,   583,   584,   585,   586,   587,   588,   431,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   436,   606,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,  1224,   606,  1726,  2240,  2160,  1728,   432,
    1729,  1553,  1731,  2248,  2249,   582,   583,   584,   585,   586,
     587,   588,   434,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     438,   606,   582,   583,   584,   585,   586,   587,   588,   442,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   443,   606,  2250,
    2251,   107,  2253,  2254,  2256,  2257,  2275,  1573,  1633,  2276,
    1573,   444,  1637,  2291,  1573,  2295,  1573,   445,  1642,  1135,
    1136,  2303,  2249,  2304,  2160,   108,   446,  1648,   447,  1107,
    2305,  2160,  2307,  2251,   109,  1656,  1657,  2382,  1573,  2394,
    1573,  1013,  1014,  1015,  1016,   451,  1017,   110,   458,  1019,
    1020,  1021,  2395,  1573,  2401,  2091,  1025,  1026,  1027,  1167,
    1168,  1030,  2413,  2004,   452,   582,   583,   584,   585,   586,
     587,   588,   457,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     459,   606,  2448,  2449,  2463,  1573,  2465,  2249,  2466,  2251,
    1727,  2476,  2477,   460,  1169,  1170,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   461,   606,   582,
     583,   584,   585,   586,   587,   588,  1747,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   119,   606,   467,  1760,   582,   583,
     584,   585,   586,   587,   588,   474,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   475,   606,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   476,   606,   612,   582,   583,   584,
     585,   586,   587,   588,   477,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   478,   606,   582,   583,   584,   585,   586,   587,
     588,   479,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   480,
     606,  2500,  2501,  2511,  2512,  1974,   582,   583,   584,   585,
     586,   587,   588,   616,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   481,   606,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,  2009,   606,
     482,  2010,  2537,  2538,  2558,  2559,  2563,  2564,  1240,  1241,
    2021,  2022,  2566,  2559,  2595,  2559,   630,  1191,  1192,  2596,
    2559,   483,  2023,  2599,  2600,  2628,  2559,  1479,  1480,  2070,
    2071,  2030,  2031,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   484,   606,   485,  2047,  2048,
    2049,   486,   487,  2050,  2051,   488,  2052,   489,  2053,   490,
    2054,   491,   492,   493,   494,   495,   496,  2055,  2056,  2057,
    1197,  1198,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   497,   606,
    2073,  2074,   498,   499,   500,   501,   633,  1653,  1654,   502,
     503,   634,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,  2094,   520,
     521,   522,  2100,   523,   524,   525,   526,  1996,   527,   528,
     529,   530,  2104,   531,   532,   533,   534,   535,   536,   582,
     583,   584,   585,   586,   587,   588,  2110,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   537,   606,   538,   539,   540,   541,
     542,   543,  1818,  1819,  1820,  1821,  1822,  1823,   544,  1824,
     545,  1825,   546,   547,   548,  1826,  1827,  1828,   549,  1829,
    1683,  1684,   550,   551,   552,  1830,  1831,  1832,  1833,  1834,
     553,   554,   555,   556,   557,   558,   559,   560,   561,  1835,
     562,   563,   564,   565,   566,   567,   635,   568,   569,  1836,
    1837,   570,   571,  1838,   572,   573,   574,   575,  1839,  1840,
    1841,  1842,  1843,   576,   577,  1844,   578,  1845,  1846,  1847,
     579,   615,  1848,  1849,   903,  1850,  1851,  1852,   636,   617,
     637,  1853,   638,   639,   640,   641,   642,   643,   644,   645,
     646,   666,   667,   668,   680,  1854,   681,   717,   725,   726,
    1855,   727,   728,  1708,  1709,  1856,  1857,  1858,   737,   740,
     742,   744,  1859,  1860,   747,  1861,  1862,  1863,  1864,   746,
     748,  1865,   749,  1866,  1867,  1868,  1869,   750,  1870,   755,
    1871,  1872,   760,  1873,   761,  1874,  1875,   762,  1876,  1877,
    1878,  1879,  1710,  1711,   763,   764,   767,  1880,   768,  1881,
     769,  1882,  1883,   771,  1884,  1885,  1886,  1887,  1888,  1889,
     770,  1890,  1891,  1892,  1893,  1894,   772,   773,   774,  1712,
    1713,   778,   781,  2175,  2176,   606,  1895,   791,  1896,  2180,
    1897,  2182,   792,   793,   811,   827,   831,   850,   851,  1898,
     852,  1899,  1900,  1901,  1902,  1903,  1904,  1905,   853,   854,
    1906,  1907,  1997,   857,   858,   859,  1908,   862,  1909,  1910,
    1911,   863,  1912,   864,  1913,   913,  1914,  1915,  1916,  1917,
     939,   887,   891,   902,   941,   943,   945,   953,   955,   962,
     965,   966,   963,   967,   968,   971,   969,   970,  1918,  1919,
    1920,  2229,  2231,   972,   973,   974,   975,   979,  1921,   976,
    1922,  1923,  1924,   977,   379,   980,   981,  1925,   982,  1926,
    1927,  1928,   983,   984,   985,  1929,   986,   987,   988,  1930,
    1931,   989,   990,  1932,  1933,  1934,  1935,   992,   993,   994,
    1936,   995,   582,   583,   584,   585,   586,   587,   588,   996,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   997,   606,   998,
     999,  1006,  2288,  1000,  1005,  1007,  1009,  1010,  1011,  1018,
    1022,  1937,  1938,  1939,  1940,  1941,  1044,  1028,  2299,  1032,
    1033,  1034,  1039,   582,   583,   584,   585,   586,   587,   588,
    1041,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,  1042,   606,
    1642,  1043,  1045,  1048,  1050,  1049,  1051,  1052,  1053,  1056,
    1055,  1058,  1057,  1059,  1060,  1061,  2328,  1062,  1064,  1517,
    1065,  1066,  1081,  1086,  2198,  2199,  1088,  1089,  1090,  1092,
    1100,  1106,    16,  1150,  1164,   -84,  1165,  1166,  1172,  2346,
    1518,  1171,  1173,  1217,  1220,  1221,  1222,  1227,  1242,  1519,
    1228,  1230,  1520,  1231,  1521,  1232,  2359,  1522,  1246,  1247,
    1245,  1942,  1943,  1944,  1945,  1946,  1243,  1947,  1248,  1249,
    1250,  1251,  1523,  1252,  1253,  2373,  2374,  1254,  1266,  1524,
    1525,  1267,  1818,  1819,  1820,  1821,  1822,  1823,  1268,  1824,
    1036,  1825,  1271,  1272,  1273,  1826,  1827,  1828,  1274,  1829,
    1275,  1276,  1277,  1258,  1259,  1830,  1831,  1832,  1833,  1834,
    1280,  1285,  1302,  1299,  1526,  1300,  1301,  1303,  1304,  1835,
    1306,  1323,  1324,  1310,  1331,  1333,  1336,  1337,  1338,  1836,
    1837,  1527,  1343,  1838,  1339,  1341,  1344,  1345,  1839,  1840,
    1841,  1842,  1843,  1358,  1370,  1844,  1371,  1845,  1846,  1847,
    1374,  1375,  1848,  1849,  1376,  1850,  1851,  1852,  1391,  1418,
    1381,  1853,  1419,  1420,  1399,  1528,  1421,  1422,  1394,  1393,
    2441,  1423,  1424,  1429,  1430,  1854,  1431,  1432,  1433,  1434,
    1855,  1435,  1436,  1475,  1437,  1856,  1857,  1858,   -86,  1438,
    1472,   756,  1859,  1860,  1529,  1861,  1862,  1863,  1864,  1477,
    1481,  1865,  1530,  2125,  1867,  1868,  1869,  1484,  1870,  2462,
    1871,  1872,  1485,  1873,  1497,  1874,  1875,  1499,  1876,  1877,
    1878,  1879,  1500,  1498,  1505,  1504,  1506,  1880,  2474,  1881,
    1507,  1882,  1883,  1511,  1884,  1885,  1886,  1887,  1888,  1889,
    1512,  1890,  1891,  1892,  1893,  1894,  1534,  1510,  1535,  1513,
    1536,  1537,  1552,  1538,  1574,  1539,  1895,  1566,  1896,  1549,
    1897,  1550,  1531,  1551,  1567,  1568,  1576,  1569,  1570,  1898,
    1571,  1899,  1900,  1901,  1902,  1903,  1904,  1905,  1579,  1581,
    1906,  1907,  1582,  1595,  1588,  1596,  1908,  1591,  1909,  1910,
    1911,  1597,  1912,  1603,  1913,  1604,  1914,  1915,  1916,  1917,
    1607,  1608,  1609,  1612,  1613,  1614,  1618,  1615,  1620,  1634,
    1624,  1623,  1625,  1638,  1626,  1639,  1640,  1658,  1918,  1919,
    1920,  1734,  1735,  1738,  1628,  1742,  1649,  1743,  1921,  1752,
    1922,  1923,  1924,  2547,  1753,  1754,  1756,  1925,  1099,  1926,
    1927,  1928,  1757,  1763,  1677,  1929,  1659,  1676,  1723,  1930,
    1931,  1678,  1679,  1932,  1933,  1934,  1935,  1680,  1681,  1682,
    1936,  1818,  1819,  1820,  1821,  1822,  1823,  1691,  1824,  1694,
    1825,  1768,  1769,  1773,  1826,  1827,  1828,  1697,  1829,  1724,
    1774,  1730,  1776,  1732,  1830,  1831,  1832,  1833,  1834,  1115,
    1733,  1792,  1739,  1786,  1740,  1741,  1748,  1787,  1835,  1750,
    1755,  1937,  1938,  1939,  1940,  1941,  1758,  1761,  1836,  1837,
    1789,  1762,  1838,  1770,  1771,  1772,  1775,  1839,  1840,  1841,
    1842,  1843,  1793,  1794,  1844,  1796,  1845,  1846,  1847,  1799,
    1805,  1848,  1849,  1806,  1850,  1851,  1852,  1807,  1808,  1809,
    1853,  1810,  1811,  1950,  1813,  1949,  1951,  1958,  1960,  1953,
    1963,  1956,  1964,  1965,  1854,  1968,  1975,  1976,  1977,  1855,
    1978,  1981,  1995,  2006,  1856,  1857,  1858,  2002,  2001,  2008,
    2037,  1859,  1860,  2058,  1861,  1862,  1863,  1864,  2032,  2041,
    1865,  2059,  2269,  1867,  1868,  1869,  2060,  1870,  2061,  1871,
    1872,  2062,  1873,  2063,  1874,  1875,  2065,  1876,  1877,  1878,
    1879,  1942,  1943,  1944,  1945,  1946,  1880,  1947,  1881,  2068,
    1882,  1883,  2064,  1884,  1885,  1886,  1887,  1888,  1889,  2075,
    1890,  1891,  1892,  1893,  1894,  2072,  2079,  2080,  2083,  2082,
    2086,  2084,  2088,  2093,  2096,  1895,  2095,  1896,  2101,  1897,
    2102,  2103,  2106,  2108,  2109,  2111,  2114,  2119,  1898,  2122,
    1899,  1900,  1901,  1902,  1903,  1904,  1905,  2116,  2117,  1906,
    1907,  2118,  2132,  2133,  2136,  1908,  2123,  1909,  1910,  1911,
    2134,  1912,  2135,  1913,  2140,  1914,  1915,  1916,  1917,  2143,
    2142,  2146,  2145,  2147,  2152,  2149,  2151,  2154,  2153,  2173,
    2177,  2183,  2184,  2186,  2202,  2201,  2207,  1918,  1919,  1920,
    2208,  2238,  2209,  2228,  2239,  2243,  2245,  1921,  2211,  1922,
    1923,  1924,  2212,  2213,  2246,  2241,  1925,  2244,  1926,  1927,
    1928,  2247,  2252,  2258,  1929,  2259,  2260,  2274,  1930,  1931,
    2278,  2262,  1932,  1933,  1934,  1935,  2263,  2264,  2273,  1936,
    1818,  1819,  1820,  1821,  1822,  1823,  2287,  1824,  2285,  1825,
    2289,  2286,  2294,  1826,  1827,  1828,  2296,  1829,  2300,  2301,
    2306,  2310,  2311,  1830,  1831,  1832,  1833,  1834,  2312,  2313,
    2314,  2316,  2317,  2320,  2329,  2331,  2332,  1835,  2333,  2347,
    1937,  1938,  1939,  1940,  1941,  2334,  2337,  1836,  1837,  2338,
    2344,  1838,  2341,  2342,  2345,  2348,  1839,  1840,  1841,  1842,
    1843,  2349,  2350,  1844,  2357,  1845,  1846,  1847,  2358,  2362,
    1848,  1849,  2361,  1850,  1851,  1852,  2366,  2365,  2364,  1853,
    2367,  2368,  2375,  2381,  2369,  2372,  2384,  2379,  2385,  2386,
    2387,  2388,  2403,  1854,  2392,  2390,  2404,  2402,  1855,  2409,
    2397,  2410,  2411,  1856,  1857,  1858,  2412,  2414,  2415,  2417,
    1859,  1860,  2424,  1861,  1862,  1863,  1864,  2425,  2418,  1865,
    2419,  2272,  1867,  1868,  1869,  2429,  1870,  2440,  1871,  1872,
    2430,  1873,  2420,  1874,  1875,  2421,  1876,  1877,  1878,  1879,
    1942,  1943,  1944,  1945,  1946,  1880,  1947,  1881,  2422,  1882,
    1883,  2427,  1884,  1885,  1886,  1887,  1888,  1889,  2431,  1890,
    1891,  1892,  1893,  1894,  2433,  2434,  2442,  2435,  2437,  2447,
    2438,  2439,  2450,  2445,  1895,  2451,  1896,  2452,  1897,  2453,
    2459,  2458,  2461,  2464,  2467,  2468,  2469,  1898,  2470,  1899,
    1900,  1901,  1902,  1903,  1904,  1905,  2471,  2472,  1906,  1907,
    2473,  2475,  2480,  2482,  1908,  2489,  1909,  1910,  1911,  2490,
    1912,  2494,  1913,  2499,  1914,  1915,  1916,  1917,  2503,  2510,
    2513,  2514,  2515,  2497,  2509,  2517,  2516,  2519,  2534,  2520,
    2528,  2529,  2536,  2540,  2541,  2542,  1918,  1919,  1920,  2523,
    2554,  2526,  2548,  2527,  2555,  2531,  1921,  2160,  1922,  1923,
    1924,  2533,  2544,  2545,  2546,  1925,  2557,  1926,  1927,  1928,
    2560,  2562,  2565,  1929,  2567,  2568,  2570,  1930,  1931,  2571,
    2577,  1932,  1933,  1934,  1935,  2572,  2573,  2578,  1936,  1818,
    1819,  1820,  1821,  1822,  1823,  2574,  1824,  2579,  1825,  2588,
    2583,  2586,  1826,  1827,  1828,  2593,  1829,  2594,  2598,  2605,
    2601,  2603,  1830,  1831,  1832,  1833,  1834,  2617,  2614,  2629,
    2641,  2643,  2642,  2637,  2644,  2645,  1835,  2646,  1650,  1937,
    1938,  1939,  1940,  1941,  2630,   787,  1836,  1837,   374,  2638,
    1838,  1401,   942,  1470,  2067,  1839,  1840,  1841,  1842,  1843,
    2233,  2174,  1844,   957,  1845,  1846,  1847,  1749,   439,  1848,
    1849,  1085,  1850,  1851,  1852,  2383,  2506,  2561,  1853,  1340,
    1087,  1342,  2148,  1602,  1509,   978,  2138,  1955,  1257,  2290,
    1590,  2393,  1854,  2569,   206,   780,  2319,  1855,  1096,  1989,
    2297,  1985,  1856,  1857,  1858,  1295,  1384,  1969,  1008,  1859,
    1860,   464,  1861,  1862,  1863,  1864,   741,  2615,  1865,  1311,
    2279,  1867,  1868,  1869,  2105,  1870,     0,  1871,  1872,     0,
    1873,     0,  1874,  1875,     0,  1876,  1877,  1878,  1879,  1942,
    1943,  1944,  1945,  1946,  1880,  1947,  1881,     0,  1882,  1883,
       0,  1884,  1885,  1886,  1887,  1888,  1889,     0,  1890,  1891,
    1892,  1893,  1894,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1895,     0,  1896,     0,  1897,     0,     0,
       0,     0,     0,     0,     0,     0,  1898,     0,  1899,  1900,
    1901,  1902,  1903,  1904,  1905,     0,     0,  1906,  1907,     0,
       0,     0,     0,  1908,     0,  1909,  1910,  1911,     0,  1912,
       0,  1913,     0,  1914,  1915,  1916,  1917,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1918,  1919,  1920,     0,     0,
       0,     0,     0,     0,     0,  1921,     0,  1922,  1923,  1924,
       0,     0,     0,     0,  1925,     0,  1926,  1927,  1928,     0,
       0,     0,  1929,     0,     0,     0,  1930,  1931,     0,     0,
    1932,  1933,  1934,  1935,     0,     0,     0,  1936,  1818,  1819,
    1820,  1821,  1822,  1823,     0,  1824,     0,  1825,     0,     0,
       0,  1826,  1827,  1828,     0,  1829,     0,     0,     0,     0,
       0,  1830,  1831,  1832,  1833,  1834,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1835,     0,     0,  1937,  1938,
    1939,  1940,  1941,     0,     0,  1836,  1837,     0,     0,  1838,
       0,     0,     0,     0,  1839,  1840,  1841,  1842,  1843,     0,
       0,  1844,     0,  1845,  1846,  1847,     0,     0,  1848,  1849,
       0,  1850,  1851,  1852,     0,     0,     0,  1853,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1854,     0,     0,     0,     0,  1855,     0,     0,     0,
       0,  1856,  1857,  1858,     0,     0,     0,     0,  1859,  1860,
       0,  1861,  1862,  1863,  1864,     0,     0,  1865,     0,  2280,
    1867,  1868,  1869,     0,  1870,     0,  1871,  1872,     0,  1873,
       0,  1874,  1875,     0,  1876,  1877,  1878,  1879,  1942,  1943,
    1944,  1945,  1946,  1880,  1947,  1881,     0,  1882,  1883,     0,
    1884,  1885,  1886,  1887,  1888,  1889,     0,  1890,  1891,  1892,
    1893,  1894,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1895,     0,  1896,     0,  1897,     0,     0,     0,
       0,     0,     0,     0,     0,  1898,     0,  1899,  1900,  1901,
    1902,  1903,  1904,  1905,     0,     0,  1906,  1907,     0,     0,
       0,     0,  1908,     0,  1909,  1910,  1911,     0,  1912,     0,
    1913,     0,  1914,  1915,  1916,  1917,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1918,  1919,  1920,     0,     0,     0,
       0,     0,     0,     0,  1921,     0,  1922,  1923,  1924,     0,
       0,     0,     0,  1925,     0,  1926,  1927,  1928,     0,     0,
       0,  1929,     0,     0,     0,  1930,  1931,     0,     0,  1932,
    1933,  1934,  1935,     0,     0,     0,  1936,  1818,  1819,  1820,
    1821,  1822,  1823,     0,  1824,     0,  1825,     0,     0,     0,
    1826,  1827,  1828,     0,  1829,     0,     0,     0,     0,     0,
    1830,  1831,  1832,  1833,  1834,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1835,     0,     0,  1937,  1938,  1939,
    1940,  1941,     0,     0,  1836,  1837,     0,     0,  1838,     0,
       0,     0,     0,  1839,  1840,  1841,  1842,  1843,     0,     0,
    1844,     0,  1845,  1846,  1847,     0,     0,  1848,  1849,     0,
    1850,  1851,  1852,     0,     0,     0,  1853,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1854,     0,     0,     0,     0,  1855,     0,     0,     0,     0,
    1856,  1857,  1858,     0,     0,     0,     0,  1859,  1860,     0,
    1861,  1862,  1863,  1864,     0,     0,  1865,     0,  2281,  1867,
    1868,  1869,     0,  1870,     0,  1871,  1872,     0,  1873,     0,
    1874,  1875,     0,  1876,  1877,  1878,  1879,  1942,  1943,  1944,
    1945,  1946,  1880,  1947,  1881,     0,  1882,  1883,     0,  1884,
    1885,  1886,  1887,  1888,  1889,     0,  1890,  1891,  1892,  1893,
    1894,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1895,     0,  1896,     0,  1897,     0,     0,     0,     0,
       0,     0,     0,     0,  1898,     0,  1899,  1900,  1901,  1902,
    1903,  1904,  1905,     0,     0,  1906,  1907,     0,     0,     0,
       0,  1908,     0,  1909,  1910,  1911,     0,  1912,     0,  1913,
       0,  1914,  1915,  1916,  1917,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1918,  1919,  1920,     0,     0,     0,     0,
       0,     0,     0,  1921,     0,  1922,  1923,  1924,     0,     0,
       0,     0,  1925,     0,  1926,  1927,  1928,     0,     0,     0,
    1929,     0,     0,     0,  1930,  1931,     0,     0,  1932,  1933,
    1934,  1935,     0,     0,     0,  1936,  1818,  1819,  1820,  1821,
    1822,  1823,     0,  1824,     0,  1825,     0,     0,     0,  1826,
    1827,  1828,     0,  1829,     0,     0,     0,     0,     0,  1830,
    1831,  1832,  1833,  1834,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1835,     0,     0,  1937,  1938,  1939,  1940,
    1941,     0,     0,  1836,  1837,     0,     0,  1838,     0,     0,
       0,     0,  1839,  1840,  1841,  1842,  1843,     0,     0,  1844,
       0,  1845,  1846,  1847,     0,     0,  1848,  1849,     0,  1850,
    1851,  1852,     0,     0,     0,  1853,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1854,
       0,     0,     0,     0,  1855,     0,     0,     0,     0,  1856,
    1857,  1858,     0,     0,     0,     0,  1859,  1860,     0,  1861,
    1862,  1863,  1864,     0,     0,  1865,     0,  2282,  1867,  1868,
    1869,     0,  1870,     0,  1871,  1872,     0,  1873,     0,  1874,
    1875,     0,  1876,  1877,  1878,  1879,  1942,  1943,  1944,  1945,
    1946,  1880,  1947,  1881,     0,  1882,  1883,     0,  1884,  1885,
    1886,  1887,  1888,  1889,     0,  1890,  1891,  1892,  1893,  1894,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1895,     0,  1896,     0,  1897,     0,     0,     0,     0,     0,
       0,     0,     0,  1898,     0,  1899,  1900,  1901,  1902,  1903,
    1904,  1905,     0,     0,  1906,  1907,     0,     0,     0,     0,
    1908,     0,  1909,  1910,  1911,     0,  1912,     0,  1913,     0,
    1914,  1915,  1916,  1917,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1918,  1919,  1920,     0,     0,     0,     0,     0,
       0,     0,  1921,     0,  1922,  1923,  1924,     0,     0,     0,
       0,  1925,     0,  1926,  1927,  1928,     0,     0,     0,  1929,
       0,     0,     0,  1930,  1931,     0,     0,  1932,  1933,  1934,
    1935,     0,     0,     0,  1936,  1818,  1819,  1820,  1821,  1822,
    1823,     0,  1824,     0,  1825,     0,     0,     0,  1826,  1827,
    1828,     0,  1829,     0,     0,     0,     0,     0,  1830,  1831,
    1832,  1833,  1834,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1835,     0,     0,  1937,  1938,  1939,  1940,  1941,
       0,     0,  1836,  1837,     0,     0,  1838,     0,     0,     0,
       0,  1839,  1840,  1841,  1842,  1843,     0,     0,  1844,     0,
    1845,  1846,  1847,     0,     0,  1848,  1849,     0,  1850,  1851,
    1852,     0,     0,     0,  1853,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1854,     0,
       0,     0,     0,  1855,     0,     0,     0,     0,  1856,  1857,
    1858,     0,     0,     0,     0,  1859,  1860,     0,  1861,  1862,
    1863,  1864,     0,     0,  1865,     0,  2283,  1867,  1868,  1869,
       0,  1870,     0,  1871,  1872,     0,  1873,     0,  1874,  1875,
       0,  1876,  1877,  1878,  1879,  1942,  1943,  1944,  1945,  1946,
    1880,  1947,  1881,     0,  1882,  1883,     0,  1884,  1885,  1886,
    1887,  1888,  1889,     0,  1890,  1891,  1892,  1893,  1894,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1895,
       0,  1896,     0,  1897,     0,     0,     0,     0,     0,     0,
       0,     0,  1898,     0,  1899,  1900,  1901,  1902,  1903,  1904,
    1905,     0,     0,  1906,  1907,     0,     0,     0,     0,  1908,
       0,  1909,  1910,  1911,     0,  1912,     0,  1913,     0,  1914,
    1915,  1916,  1917,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1918,  1919,  1920,     0,     0,     0,     0,     0,     0,
       0,  1921,     0,  1922,  1923,  1924,     0,     0,     0,     0,
    1925,     0,  1926,  1927,  1928,     0,     0,     0,  1929,     0,
       0,     0,  1930,  1931,     0,     0,  1932,  1933,  1934,  1935,
       0,     0,     0,  1936,  1818,  1819,  1820,  1821,  1822,  1823,
       0,  1824,     0,  1825,     0,     0,     0,  1826,  1827,  1828,
       0,  1829,     0,     0,     0,     0,     0,  1830,  1831,  1832,
    1833,  1834,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1835,     0,     0,  1937,  1938,  1939,  1940,  1941,     0,
       0,  1836,  1837,     0,     0,  1838,     0,     0,     0,     0,
    1839,  1840,  1841,  1842,  1843,     0,     0,  1844,     0,  1845,
    1846,  1847,     0,     0,  1848,  1849,     0,  1850,  1851,  1852,
       0,     0,     0,  1853,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1854,     0,     0,
       0,     0,  1855,     0,     0,     0,     0,  1856,  1857,  1858,
       0,     0,     0,     0,  1859,  1860,     0,  1861,  1862,  1863,
    1864,     0,     0,  1865,     0,  2284,  1867,  1868,  1869,     0,
    1870,     0,  1871,  1872,     0,  1873,     0,  1874,  1875,     0,
    1876,  1877,  1878,  1879,  1942,  1943,  1944,  1945,  1946,  1880,
    1947,  1881,     0,  1882,  1883,     0,  1884,  1885,  1886,  1887,
    1888,  1889,     0,  1890,  1891,  1892,  1893,  1894,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1895,     0,
    1896,     0,  1897,     0,     0,     0,     0,     0,     0,     0,
       0,  1898,     0,  1899,  1900,  1901,  1902,  1903,  1904,  1905,
       0,     0,  1906,  1907,     0,     0,     0,     0,  1908,     0,
    1909,  1910,  1911,     0,  1912,     0,  1913,     0,  1914,  1915,
    1916,  1917,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1918,  1919,  1920,     0,     0,     0,     0,     0,     0,     0,
    1921,     0,  1922,  1923,  1924,     0,     0,     0,     0,  1925,
       0,  1926,  1927,  1928,     0,     0,     0,  1929,     0,     0,
       0,  1930,  1931,     0,     0,  1932,  1933,  1934,  1935,     0,
       0,     0,  1936,  1818,  1819,  1820,  1821,  1822,  1823,     0,
    1824,     0,  1825,     0,     0,     0,  1826,  1827,  1828,     0,
    1829,     0,     0,     0,     0,     0,  1830,  1831,  1832,  1833,
    1834,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1835,     0,     0,  1937,  1938,  1939,  1940,  1941,     0,     0,
    1836,  1837,     0,     0,  1838,     0,     0,     0,     0,  1839,
    1840,  1841,  1842,  1843,     0,     0,  1844,     0,  1845,  1846,
    1847,     0,     0,  1848,  1849,     0,  1850,  1851,  1852,     0,
       0,     0,  1853,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1854,     0,     0,     0,
       0,  1855,     0,     0,     0,     0,  1856,  1857,  1858,     0,
       0,     0,     0,  1859,  1860,     0,  1861,  1862,  1863,  1864,
       0,     0,  1865,     0,  2377,  1867,  1868,  1869,     0,  1870,
       0,  1871,  1872,     0,  1873,     0,  1874,  1875,     0,  1876,
    1877,  1878,  1879,  1942,  1943,  1944,  1945,  1946,  1880,  1947,
    1881,     0,  1882,  1883,     0,  1884,  1885,  1886,  1887,  1888,
    1889,     0,  1890,  1891,  1892,  1893,  1894,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1895,     0,  1896,
       0,  1897,     0,     0,     0,     0,     0,     0,     0,     0,
    1898,     0,  1899,  1900,  1901,  1902,  1903,  1904,  1905,     0,
       0,  1906,  1907,     0,     0,     0,     0,  1908,     0,  1909,
    1910,  1911,     0,  1912,     0,  1913,     0,  1914,  1915,  1916,
    1917,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1918,
    1919,  1920,     0,     0,     0,     0,     0,     0,     0,  1921,
       0,  1922,  1923,  1924,     0,     0,     0,     0,  1925,     0,
    1926,  1927,  1928,     0,     0,     0,  1929,     0,     0,     0,
    1930,  1931,     0,     0,  1932,  1933,  1934,  1935,     0,     0,
       0,  1936,  1818,  1819,  1820,  1821,  1822,  1823,     0,  1824,
       0,  1825,     0,     0,     0,  1826,  1827,  1828,     0,  1829,
       0,     0,     0,     0,     0,  1830,  1831,  1832,  1833,  1834,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1835,
       0,     0,  1937,  1938,  1939,  1940,  1941,     0,     0,  1836,
    1837,     0,     0,  1838,     0,     0,     0,     0,  1839,  1840,
    1841,  1842,  1843,     0,     0,  1844,     0,  1845,  1846,  1847,
       0,     0,  1848,  1849,     0,  1850,  1851,  1852,     0,     0,
       0,  1853,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1854,     0,     0,     0,     0,
    1855,     0,     0,     0,     0,  1856,  1857,  1858,     0,     0,
       0,     0,  1859,  1860,     0,  1861,  1862,  1863,  1864,     0,
       0,  1865,     0,  2378,  1867,  1868,  1869,     0,  1870,     0,
    1871,  1872,     0,  1873,     0,  1874,  1875,     0,  1876,  1877,
    1878,  1879,  1942,  1943,  1944,  1945,  1946,  1880,  1947,  1881,
       0,  1882,  1883,     0,  1884,  1885,  1886,  1887,  1888,  1889,
       0,  1890,  1891,  1892,  1893,  1894,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1895,     0,  1896,     0,
    1897,     0,     0,     0,     0,     0,     0,     0,     0,  1898,
       0,  1899,  1900,  1901,  1902,  1903,  1904,  1905,     0,     0,
    1906,  1907,     0,     0,     0,     0,  1908,     0,  1909,  1910,
    1911,     0,  1912,     0,  1913,     0,  1914,  1915,  1916,  1917,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1918,  1919,
    1920,     0,     0,     0,     0,     0,     0,     0,  1921,     0,
    1922,  1923,  1924,     0,     0,     0,     0,  1925,     0,  1926,
    1927,  1928,     0,     0,     0,  1929,     0,     0,     0,  1930,
    1931,     0,     0,  1932,  1933,  1934,  1935,     0,     0,     0,
    1936,  1818,  1819,  1820,  1821,  1822,  1823,     0,  1824,     0,
    1825,     0,     0,     0,  1826,  1827,  1828,     0,  1829,     0,
       0,     0,     0,     0,  1830,  1831,  1832,  1833,  1834,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1835,     0,
       0,  1937,  1938,  1939,  1940,  1941,     0,     0,  1836,  1837,
       0,     0,  1838,     0,     0,     0,     0,  1839,  1840,  1841,
    1842,  1843,     0,     0,  1844,     0,  1845,  1846,  1847,     0,
       0,  1848,  1849,     0,  1850,  1851,  1852,     0,     0,     0,
    1853,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1854,     0,     0,     0,     0,  1855,
       0,     0,     0,     0,  1856,  1857,  1858,     0,     0,     0,
       0,  1859,  1860,     0,  1861,  1862,  1863,  1864,     0,     0,
    1865,     0,  2457,  1867,  1868,  1869,     0,  1870,     0,  1871,
    1872,     0,  1873,     0,  1874,  1875,     0,  1876,  1877,  1878,
    1879,  1942,  1943,  1944,  1945,  1946,  1880,  1947,  1881,     0,
    1882,  1883,     0,  1884,  1885,  1886,  1887,  1888,  1889,     0,
    1890,  1891,  1892,  1893,  1894,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1895,     0,  1896,     0,  1897,
       0,     0,     0,     0,     0,     0,     0,     0,  1898,     0,
    1899,  1900,  1901,  1902,  1903,  1904,  1905,     0,     0,  1906,
    1907,     0,     0,     0,     0,  1908,     0,  1909,  1910,  1911,
       0,  1912,     0,  1913,     0,  1914,  1915,  1916,  1917,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1918,  1919,  1920,
       0,     0,     0,     0,     0,     0,     0,  1921,     0,  1922,
    1923,  1924,     0,     0,     0,     0,  1925,     0,  1926,  1927,
    1928,     0,     0,     0,  1929,     0,     0,     0,  1930,  1931,
       0,     0,  1932,  1933,  1934,  1935,     0,     0,     0,  1936,
    1818,  1819,  1820,  1821,  1822,  1823,     0,  1824,     0,  1825,
       0,     0,     0,  1826,  1827,  1828,     0,  1829,     0,     0,
       0,     0,     0,  1830,  1831,  1832,  1833,  1834,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1835,     0,     0,
    1937,  1938,  1939,  1940,  1941,     0,     0,  1836,  1837,     0,
       0,  1838,     0,     0,     0,     0,  1839,  1840,  1841,  1842,
    1843,     0,     0,  1844,     0,  1845,  1846,  1847,     0,     0,
    1848,  1849,     0,  1850,  1851,  1852,     0,     0,     0,  1853,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1854,     0,     0,     0,     0,  1855,     0,
       0,     0,     0,  1856,  1857,  1858,     0,     0,     0,     0,
    1859,  1860,     0,  1861,  1862,  1863,  1864,     0,     0,  1865,
       0,  2460,  1867,  1868,  1869,     0,  1870,     0,  1871,  1872,
       0,  1873,     0,  1874,  1875,     0,  1876,  1877,  1878,  1879,
    1942,  1943,  1944,  1945,  1946,  1880,  1947,  1881,     0,  1882,
    1883,     0,  1884,  1885,  1886,  1887,  1888,  1889,     0,  1890,
    1891,  1892,  1893,  1894,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1895,     0,  1896,     0,  1897,     0,
       0,     0,     0,     0,     0,     0,     0,  1898,     0,  1899,
    1900,  1901,  1902,  1903,  1904,  1905,     0,     0,  1906,  1907,
       0,     0,     0,     0,  1908,     0,  1909,  1910,  1911,     0,
    1912,     0,  1913,     0,  1914,  1915,  1916,  1917,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1918,  1919,  1920,     0,
       0,     0,     0,     0,     0,     0,  1921,     0,  1922,  1923,
    1924,     0,     0,     0,     0,  1925,     0,  1926,  1927,  1928,
       0,     0,     0,  1929,     0,     0,     0,  1930,  1931,     0,
       0,  1932,  1933,  1934,  1935,     0,     0,     0,  1936,  1818,
    1819,  1820,  1821,  1822,  1823,     0,  1824,     0,  1825,     0,
       0,     0,  1826,  1827,  1828,     0,  1829,     0,     0,     0,
       0,     0,  1830,  1831,  1832,  1833,  1834,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1835,     0,     0,  1937,
    1938,  1939,  1940,  1941,     0,     0,  1836,  1837,     0,     0,
    1838,     0,     0,     0,     0,  1839,  1840,  1841,  1842,  1843,
       0,     0,  1844,     0,  1845,  1846,  1847,     0,     0,  1848,
    1849,     0,  1850,  1851,  1852,     0,     0,     0,  1853,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1854,     0,     0,     0,     0,  1855,     0,     0,
       0,     0,  1856,  1857,  1858,     0,     0,     0,     0,  1859,
    1860,     0,  1861,  1862,  1863,  1864,     0,     0,  1865,     0,
    2502,  1867,  1868,  1869,     0,  1870,     0,  1871,  1872,     0,
    1873,     0,  1874,  1875,     0,  1876,  1877,  1878,  1879,  1942,
    1943,  1944,  1945,  1946,  1880,  1947,  1881,     0,  1882,  1883,
       0,  1884,  1885,  1886,  1887,  1888,  1889,     0,  1890,  1891,
    1892,  1893,  1894,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1895,     0,  1896,     0,  1897,     0,     0,
       0,     0,     0,     0,     0,     0,  1898,     0,  1899,  1900,
    1901,  1902,  1903,  1904,  1905,     0,     0,  1906,  1907,     0,
       0,     0,     0,  1908,     0,  1909,  1910,  1911,     0,  1912,
       0,  1913,     0,  1914,  1915,  1916,  1917,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1918,  1919,  1920,     0,     0,
       0,     0,     0,     0,     0,  1921,     0,  1922,  1923,  1924,
       0,     0,     0,     0,  1925,     0,  1926,  1927,  1928,     0,
       0,     0,  1929,     0,     0,     0,  1930,  1931,     0,     0,
    1932,  1933,  1934,  1935,     0,     0,     0,  1936,  1818,  1819,
    1820,  1821,  1822,  1823,     0,  1824,     0,  1825,     0,     0,
       0,  1826,  1827,  1828,     0,  1829,     0,     0,     0,     0,
       0,  1830,  1831,  1832,  1833,  1834,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1835,     0,     0,  1937,  1938,
    1939,  1940,  1941,     0,     0,  1836,  1837,     0,     0,  1838,
       0,     0,     0,     0,  1839,  1840,  1841,  1842,  1843,     0,
       0,  1844,     0,  1845,  1846,  1847,     0,     0,  1848,  1849,
       0,  1850,  1851,  1852,     0,     0,     0,  1853,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1854,     0,     0,     0,     0,  1855,     0,     0,     0,
       0,  1856,  1857,  1858,     0,     0,     0,     0,  1859,  1860,
       0,  1861,  1862,  1863,  1864,     0,     0,  1865,     0,  2539,
    1867,  1868,  1869,     0,  1870,     0,  1871,  1872,     0,  1873,
       0,  1874,  1875,     0,  1876,  1877,  1878,  1879,  1942,  1943,
    1944,  1945,  1946,  1880,  1947,  1881,     0,  1882,  1883,     0,
    1884,  1885,  1886,  1887,  1888,  1889,     0,  1890,  1891,  1892,
    1893,  1894,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1895,     0,  1896,     0,  1897,     0,     0,     0,
       0,     0,     0,     0,     0,  1898,     0,  1899,  1900,  1901,
    1902,  1903,  1904,  1905,     0,     0,  1906,  1907,     0,     0,
       0,     0,  1908,     0,  1909,  1910,  1911,     0,  1912,     0,
    1913,     0,  1914,  1915,  1916,  1917,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   212,   213,   214,   215,   216,
     217,     0,     0,     0,  1918,  1919,  1920,     0,     0,   218,
     219,     0,     0,     0,  1921,     0,  1922,  1923,  1924,   220,
     221,     0,     0,  1925,     0,  1926,  1927,  1928,     0,     0,
       0,  1929,   222,     0,     0,  1930,  1931,     0,     0,  1932,
    1933,  1934,  1935,     0,     0,     0,  1936,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,     0,     0,     0,     0,   224,
       0,     0,   225,   226,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,     0,     0,  1937,  1938,  1939,
    1940,  1941,     0,     0,     0,     0,     0,     0,   228,     0,
       0,     0,   229,   582,   583,   584,   585,   586,   587,   588,
       0,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,   582,   583,   584,   585,   586,   587,   588,   230,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232,     0,  1942,  1943,  1944,
    1945,  1946,     0,  1947,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,   234,     0,
       0,     0,     0,     0,     0,   235,   236,     0,     0,     0,
     237,   583,   584,   585,   586,   587,   588,     0,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   238,   606,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   277,     0,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,     0,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,   325,   326,   327,   328,     0,     0,
       0,     0,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,     0,   340,   341,   342,   212,   213,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,   218,   219,     0,     0,     0,   343,     0,     0,     0,
       0,   220,     0,     0,     0,     0,   344,   582,   583,   584,
     585,   586,   587,   588,     0,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,     0,     0,     0,     0,     0,   797,
       0,     0,     0,     0,     0,     0,   223,     0,     0,     0,
       0,   224,     0,     0,   225,   226,   582,   583,   584,   585,
     586,   587,   588,   227,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,   582,   583,   584,   585,   586,   587,
     588,     0,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,  1116,
     606,     0,   582,   583,   584,   585,   586,   587,   588,     0,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,  1117,   606,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   798,     0,     0,     0,     0,   231,     0,     0,
     582,   583,   584,   585,   586,   587,   588,   232,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,     0,     0,     0,
       0,     0,   582,   583,   584,   585,   586,   587,   588,   233,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   799,     0,
       0,     0,     0,     0,     0,     0,     0,   238,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,   277,     0,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,     0,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,   325,   326,   327,   328,
       0,     0,     0,     0,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,     0,   340,   341,   342,   212,
     213,   214,   215,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,     0,     0,     0,   343,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,   919,     0,     0,     0,
       0,     0,     0,   920,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,     0,     0,   225,   226,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   582,   583,   584,   585,   586,
     587,   588,  1125,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,     0,   582,   583,   584,   585,   586,   587,   588,
    1126,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,   582,   583,   584,   585,   586,   587,   588,  1127,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,   231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   232,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,   921,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  1130,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,     0,   277,     0,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,   325,   326,
     327,   328,     0,     0,     0,     0,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,     0,   340,   341,
     342,   212,   213,   214,   215,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   219,     0,     0,     0,
     343,     0,     0,     0,     0,   220,     0,     0,     0,     0,
     922,   582,   583,   584,   585,   586,   587,   588,     0,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,   224,     0,     0,   225,   226,
     582,   583,   584,   585,   586,   587,   588,   227,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,     0,     0,     0,
       0,     0,     0,     0,   582,   583,   584,   585,   586,   587,
     588,  1131,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,   582,   583,   584,   585,   586,   587,   588,  1137,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,     0,     0,     0,     0,     0,  1139,     0,     0,
       0,   231,     0,     0,   582,   583,   584,   585,   586,   587,
     588,   232,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,     0,     0,     0,     0,   582,   583,   584,   585,
     586,   587,   588,   233,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1144,     0,     0,
       0,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   471,     0,     0,     0,     0,     0,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,     0,   277,     0,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,     0,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
     325,   326,   327,   328,     0,     0,     0,     0,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,     0,
     340,   341,   342,   212,   213,   214,   215,   216,   217,     0,
       0,     0,     0,     0,     0,     0,     0,   218,   219,     0,
       0,     0,   343,     0,     0,     0,     0,   220,   838,     0,
       0,     0,   344,     0,   584,   585,   586,   587,   588,     0,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,  1145,   606,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,     0,     0,     0,     0,   224,     0,     0,
     225,   226,     0,     0,     0,     0,     0,     0,     0,   227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   582,
     583,   584,   585,   586,   587,   588,  1146,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,     0,     0,     0,     0,
       0,     0,     0,   582,   583,   584,   585,   586,   587,   588,
    1147,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,     0,     0,     0,  1159,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   232,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   582,   583,   584,   585,   586,
     587,   588,  1161,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,     0,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       0,     0,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,   325,   326,   327,   328,     0,     0,     0,     0,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,     0,   340,   341,   342,   212,   213,   214,   215,   216,
     217,     0,     0,     0,     0,     0,     0,     0,     0,   218,
     219,     0,     0,     0,   343,     0,     0,     0,     0,   220,
       0,     0,     0,     0,   344,   582,   583,   584,   585,   586,
     587,   588,     0,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,     0,     0,     0,     0,   224,
       0,     0,   225,   226,   582,   583,   584,   585,   586,   587,
     588,   227,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1163,     0,     0,     0,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  1113,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,  1174,
     582,   583,   584,   585,   586,   587,   588,     0,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   231,   606,     0,   582,   583,
     584,   585,   586,   587,   588,   232,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,     0,     0,     0,     0,
     582,   583,   584,   585,   586,   587,   588,   233,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1183,     0,     0,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   277,     0,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,     0,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,   325,   326,   327,   328,     0,     0,
       0,     0,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,     0,   340,   341,   342,   212,   213,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,   218,   219,     0,     0,     0,   343,     0,     0,     0,
       0,   220,   585,   586,   587,   588,   344,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,     0,     0,     0,     0,
       0,  1184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,     0,     0,     0,
       0,   224,     0,     0,   225,   226,     0,     0,     0,     0,
       0,     0,     0,   227,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1185,     0,     0,     0,     0,     0,     0,  1636,   582,   583,
     584,   585,   586,   587,   588,     0,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,     0,     0,     0,     0,
     582,   583,   584,   585,   586,   587,   588,  1186,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1187,   231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   582,
     583,   584,   585,   586,   587,   588,  1189,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,     0,   238,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,   277,     0,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,     0,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,   325,   326,   327,   328,
       0,     0,     0,     0,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,     0,   340,   341,   342,   212,
     213,   214,   215,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,     0,     0,     0,   343,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   344,   582,
     583,   584,   585,   586,   587,   588,     0,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,     0,     0,   225,   226,   582,   583,
     584,   585,   586,   587,   588,   227,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,     0,     0,     0,  1641,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   582,   583,   584,
     585,   586,   587,   588,  1190,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   231,
       0,     0,   582,   583,   584,   585,   586,   587,   588,   232,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,     0,     0,   582,   583,   584,   585,   586,   587,
     588,   233,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1200,     0,     0,     0,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,     0,   277,     0,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,   325,   326,
     327,   328,     0,     0,     0,     0,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,     0,   340,   341,
     342,   212,   213,   214,   215,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   219,     0,     0,     0,
     343,     0,     0,     0,     0,   220,  -807,  -807,  -807,  -807,
     344,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,  1201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,   224,     0,     0,   225,   226,
       0,     0,     0,     0,     0,     0,     0,   227,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1202,     0,     0,     0,     0,     0,
       0,  2179,   582,   583,   584,   585,   586,   587,   588,     0,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,     0,     0,     0,     0,   582,   583,   584,   585,
     586,   587,   588,  1203,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,     0,     0,     0,     0,     0,     0,
       0,   231,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   232,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   582,   583,   584,   585,   586,   587,   588,
    1208,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,     0,   277,     0,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,     0,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
     325,   326,   327,   328,     0,     0,     0,     0,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,     0,
     340,   341,   342,   212,   213,   214,   215,   216,   217,     0,
       0,     0,     0,     0,     0,     0,     0,   218,   219,     0,
       0,     0,   343,     0,     0,     0,     0,   220,     0,     0,
       0,     0,   344,   582,   583,   584,   585,   586,   587,   588,
       0,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,     0,     0,     0,     0,   224,     0,     0,
     225,   226,   582,   583,   584,   585,   586,   587,   588,   227,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,     0,  2181,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  1209,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,     0,     0,   582,   583,   584,   585,
     586,   587,   588,   232,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,     0,     0,     0,     0,   582,   583,
     584,   585,   586,   587,   588,   233,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1392,
       0,     0,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,     0,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       0,     0,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,   325,   326,   327,   328,     0,     0,     0,     0,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,     0,   340,   341,   342,   212,   213,   214,   215,   216,
     217,     0,     0,     0,     0,     0,     0,     0,     0,   218,
     219,     0,     0,     0,   343,     0,     0,     0,     0,   220,
       0,     0,     0,     0,   344,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1663,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,     0,     0,     0,     0,   224,
       0,     0,   225,   226,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  1664,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,   582,   583,
     584,   585,   586,   587,   588,     0,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,     0,  1675,   582,   583,
     584,   585,   586,   587,   588,     0,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,   231,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1685,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   582,   583,   584,
     585,   586,   587,   588,  1701,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   277,     0,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,     0,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,   325,   326,   327,   328,     0,     0,
       0,     0,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,     0,   340,   341,   342,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,     0,     0,   582,
     583,   584,   585,   586,   587,   588,   344,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,   582,   583,   584,   585,
     586,   587,   588,     0,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,   582,   583,   584,   585,   586,   587,   588,
       0,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     582,   583,   584,   585,   586,   587,   588,  1702,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,   582,   583,   584,
     585,   586,   587,   588,  1703,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,     0,     0,     0,   582,   583,   584,
     585,   586,   587,   588,  1706,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,   582,   583,   584,   585,   586,   587,
     588,     0,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,   582,   583,   584,   585,   586,   587,   588,     0,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,     0,
       0,     0,     0,  1707,   582,   583,   584,   585,   586,   587,
     588,     0,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,   582,   583,   584,   585,   586,   587,   588,     0,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,   582,   583,
     584,   585,   586,   587,   588,     0,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,   582,   583,   584,   585,   586,
     587,   588,     0,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   582,   583,   584,
     585,   586,   587,   588,  1651,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,   582,   583,   584,   585,   586,   587,
     588,     0,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,     0,     0,     0,  1720,     0,   582,   583,   584,
     585,   586,   587,   588,     0,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,  1721,   606,   582,   583,   584,   585,   586,   587,
     588,     0,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,  1722,
     606,   582,   583,   584,   585,   586,   587,   588,     0,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,     0,
       0,     0,     0,     0,     0,     0,  2222,     0,     0,     0,
       0,     0,  1148,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   582,   583,   584,   585,
     586,   587,   588,  2225,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,     0,     0,   582,   583,   584,   585,
     586,   587,   588,  2226,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,   582,   583,   584,   585,   586,   587,   588,
    2227,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,     0,  1149,   582,   583,   584,
     585,   586,   587,   588,     0,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,     0,     0,     0,     0,     0,  1652,
       0,   582,   583,   584,   585,   586,   587,   588,     0,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,  1112,   606,   582,   583,
     584,   585,   586,   587,   588,     0,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,  1118,   606,   582,   583,   584,   585,   586,
     587,   588,     0,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
    1119,   606,   582,   583,   584,   585,   586,   587,   588,     0,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,     0,     0,     0,   582,   583,   584,   585,   586,
     587,   588,  1120,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,   582,   583,   584,   585,   586,   587,   588,  1121,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,     0,     0,     0,   582,   583,   584,   585,   586,
     587,   588,  1122,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,   582,   583,   584,   585,   586,   587,   588,  1123,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,   582,
     583,   584,   585,   586,   587,   588,  1128,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,   582,   583,   584,   585,
     586,   587,   588,     0,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,   582,   583,   584,   585,   586,   587,
     588,  1132,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,     0,     0,   582,   583,   584,   585,   586,   587,
     588,  1133,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,   582,   583,   584,   585,   586,   587,   588,  1134,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,     0,
       0,     0,     0,     0,     0,   582,   583,   584,   585,   586,
     587,   588,  1138,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,     0,     0,     0,     0,     0,     0,     0,   582,
     583,   584,   585,   586,   587,   588,  1140,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,   582,   583,   584,   585,
     586,   587,   588,  1141,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,   582,   583,   584,   585,   586,   587,   588,
    1142,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
     582,   583,   584,   585,   586,   587,   588,  1151,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,     0,     0,     0,
       0,     0,     0,   582,   583,   584,   585,   586,   587,   588,
    1152,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
     582,   583,   584,   585,   586,   587,   588,  1153,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,     0,     0,     0,
       0,     0,     0,   582,   583,   584,   585,   586,   587,   588,
    1154,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
     582,   583,   584,   585,   586,   587,   588,  1155,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,   582,   583,   584,
     585,   586,   587,   588,  1156,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,   582,   583,   584,   585,   586,   587,
     588,  1157,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,   582,   583,   584,   585,   586,   587,   588,  1158,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,   582,   583,   584,   585,   586,   587,   588,  1162,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,   582,
     583,   584,   585,   586,   587,   588,  1175,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,     0,     0,     0,     0,
       0,     0,     0,   582,   583,   584,   585,   586,   587,   588,
    1176,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,     0,     0,   582,   583,   584,
     585,   586,   587,   588,  1177,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,   582,   583,   584,   585,   586,   587,
     588,  1178,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,   582,   583,   584,   585,   586,   587,   588,  1179,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,   582,   583,
     584,   585,   586,   587,   588,  1180,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,     0,     0,     0,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  1181,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,   582,   583,
     584,   585,   586,   587,   588,  1182,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,     0,     0,     0,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  1193,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,   582,   583,
     584,   585,   586,   587,   588,  1194,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,   582,   583,   584,   585,   586,
     587,   588,  1195,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,   582,   583,   584,   585,   586,   587,   588,  1199,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
     582,   583,   584,   585,   586,   587,   588,  1205,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,     0,     0,     0,
     582,   583,   584,   585,   586,   587,   588,  1206,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,   582,   583,   584,
     585,   586,   587,   588,  1207,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,     0,     0,     0,     0,     0,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  1235,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,     0,     0,
       0,     0,     0,     0,     0,   582,   583,   584,   585,   586,
     587,   588,  1655,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,   582,   583,   584,   585,   586,   587,   588,  1660,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,   582,
     583,   584,   585,   586,   587,   588,  1661,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,   582,   583,   584,   585,
     586,   587,   588,  1662,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,     0,     0,     0,     0,     0,   582,
     583,   584,   585,   586,   587,   588,  1665,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,   582,   583,   584,   585,
     586,   587,   588,  1666,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,     0,     0,     0,     0,     0,   582,
     583,   584,   585,   586,   587,   588,  1667,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,   582,   583,   584,   585,
     586,   587,   588,  1668,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,   582,   583,   584,   585,   586,   587,   588,
    1669,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
     582,   583,   584,   585,   586,   587,   588,  1670,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,     0,   582,   583,
     584,   585,   586,   587,   588,  1673,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,     0,     0,   582,   583,
     584,   585,   586,   587,   588,  1674,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,   582,   583,   584,   585,   586,
     587,   588,  1686,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,     0,     0,     0,     0,     0,     0,     0,   582,
     583,   584,   585,   586,   587,   588,  1687,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,     0,     0,     0,     0,
       0,     0,     0,   582,   583,   584,   585,   586,   587,   588,
    1700,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
     582,   583,   584,   585,   586,   587,   588,  1704,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,   582,   583,   584,
     585,   586,   587,   588,  1705,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,   582,   583,   584,   585,   586,   587,
     588,  1714,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,     0,     0,     0,     0,     0,   582,   583,   584,
     585,   586,   587,   588,  1715,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,   582,   583,   584,   585,   586,   587,
     588,  1716,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,     0,     0,     0,     0,     0,   582,   583,   584,
     585,   586,   587,   588,  1717,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,   582,   583,   584,   585,   586,   587,
     588,  1718,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,   582,   583,   584,   585,   586,   587,   588,  1719,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,   582,   583,
     584,   585,   586,   587,   588,  1800,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,   582,   583,   584,   585,
     586,   587,   588,  2011,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,     0,     0,   582,   583,   584,   585,
     586,   587,   588,  2085,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,   582,   583,   584,   585,   586,   587,   588,
    2155,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,     0,     0,   582,   583,   584,
     585,   586,   587,   588,  2187,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,     0,     0,     0,     0,     0,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  2188,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,     0,   606,   582,   583,
     584,   585,   586,   587,   588,  2189,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,   582,   583,   584,   585,   586,
     587,   588,  2190,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,   582,   583,   584,   585,   586,   587,   588,  2191,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,     0,     0,     0,   582,   583,   584,   585,   586,
     587,   588,  2200,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,   582,   583,   584,   585,   586,   587,   588,  2217,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,     0,
       0,     0,     0,     0,    79,   582,   583,   584,   585,   586,
     587,   588,  2218,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,   582,   583,   584,   585,   586,   587,   588,  2219,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,   582,
     583,   584,   585,   586,   587,   588,  2220,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,     0,   606,     0,     1,     0,    80,
       0,     2,     0,  2221,     0,     0,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,  2223,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,    82,    83,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,  2224,     0,     0,     0,     0,     0,     6,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  2255,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,    85,   606,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,  2261,    86,     0,    87,     0,     0,     9,    10,
      11,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,     0,     0,     0,     0,  2265,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    12,     0,    13,     0,
       0,     0,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,     0,  2270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
    2391,     0,     0,     0,     0,    17,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2398,   582,   583,
     584,   585,   586,   587,   588,     0,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,     0,   606,     0,     0,     0,     0,     0,
    2423,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2436,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,     0,     0,     0,     0,     0,     0,     0,
    2454,     0,  2012,  2013,     0,     0,     0,  2014,     0,  2015,
       0,     0,     0,     0,     0,     0,   471,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,  2455,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,  2016,  2017,     0,  2018,     0,     0,     0,    22,
      23,     0,     0,     0,  2508,   582,   583,   584,   585,   586,
     587,   588,     0,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
       0,   606,   582,   583,   584,   585,   586,   587,   588,     0,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,     0,   606,   682,
     683,     0,   684,     0,   685,   686,     0,     0,     0,     0,
       0,     0,     0,   582,   583,   584,   585,   586,   587,   588,
     687,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   688,   689,   690,   691,     0,     0,     0,     0,
       0,   692,     0,     0,     0,     0,  2019,  2020,     0,     0,
     693,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     694,     0,     0,     0,     0,     0,     0,     0,   695,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   696,     0,     0,     0,     0,     0,     0,
     697,     0,     0,   698,     0,     0,   699,   700,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1398,
       0,     0,     0,   701,   582,   583,   584,   585,   586,   587,
     588,     0,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,     0,     0,     0,     0,     0,     0,   702,   703,     0,
       0,   704,   705,     0,     0,     0,     0,   706,  1101,   707,
       0,     0,     0,     0,   708,   709,     0,     0,     0,     0,
     710,     0,   711,     0,     0,     0,     0,     0,   712,     0,
     713,   714,     0,     0,     0,  1390,   715,   582,   583,   584,
     585,   586,   587,   588,     0,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,     0,   606,     0,     0,     0,     0,     0,     0,
       0,   582,   583,   584,   585,   586,   587,   588,  1389,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   581,   606,     0,     0,
       0,     0,     0,   582,   583,   584,   585,   586,   587,   588,
    1990,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   607,     0,     0,     0,     0,     0,
       0,  1647,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   582,   583,   584,   585,
     586,   587,   588,  1991,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606,     0,     0,     0,     0,     0,     0,     0,
     582,   583,   584,   585,   586,   587,   588,  1143,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,     0,   606,     0,     0,     0,
       0,     0,     0,   582,   583,   584,   585,   586,   587,   588,
    1219,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,     0,   606,
       0,     0,     0,     0,     0,     0,   582,   583,   584,   585,
     586,   587,   588,  1463,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,     0,   606
};

static const yytype_int16 yycheck[] =
{
     123,  1239,  1630,  1486,   361,  1306,  1755,  1345,   355,  1264,
    1265,  1497,   627,   417,   351,  1270,  1615,   759,    36,    36,
    1975,  1322,   107,  1023,  1024,     3,   136,  1579,   140,  1029,
     107,  1031,  1981,   951,  1335,   136,     6,     5,    20,    49,
    1746,  1613,     3,     4,     5,     6,     7,     8,    18,   159,
    1099,    48,  1096,   159,  1098,   199,   154,  1366,     4,  1514,
    1515,   219,    20,     3,   240,     8,    78,   199,   355,     4,
       4,   240,   157,    51,     3,    90,    16,   266,  1533,   240,
       3,   277,   266,    87,   207,   208,    40,   107,     3,     6,
       3,     3,   108,   440,   252,   218,   219,   220,   266,    74,
     107,   224,   112,    48,   268,   268,   136,     3,     3,  2034,
    2035,   113,     3,     4,     5,     6,     7,     8,   216,     3,
    2045,  2046,     3,   274,    97,     4,   113,   277,    10,    11,
      12,    13,    14,    15,    16,   661,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   107,    36,    18,     4,     5,     6,     7,
      87,   277,    71,   252,  1213,   204,   266,   241,     3,    18,
       3,   266,    99,   258,    18,   172,  1748,   274,   266,   274,
       3,    54,    55,   259,   177,   266,  1689,  1690,   266,   201,
     241,   193,   718,    28,     5,  1698,  1699,   271,     3,    71,
     197,    74,     3,   157,   280,    28,   193,   136,   135,    20,
     150,    95,    84,   371,   956,   245,   143,     3,   113,     3,
     271,   344,   215,   193,    72,   154,     3,   391,   391,   268,
     426,   228,   193,     3,    97,   210,     3,   426,   258,  1791,
     424,   248,   258,   258,   167,   249,   404,   176,   424,   261,
     173,  1803,   197,    97,   136,   195,   424,   426,   193,   193,
     156,  1516,   609,   424,  1750,  1566,   193,  2192,  2193,  2194,
    2195,  2196,  2197,   423,   203,   426,   193,  1578,  1616,   616,
     277,  2206,   426,   228,   227,  2210,   167,   241,  1840,  2214,
     236,   237,   173,  1594,   426,   401,   269,    51,    84,  1851,
      84,  2007,   193,     3,   258,   184,    60,   100,   217,   277,
     426,  1229,  1767,   398,   426,   242,   426,  1626,   241,  1871,
     183,   398,   399,   400,   424,   426,   424,   120,   423,   426,
     407,   426,   277,  1885,   197,   184,   424,   210,  1382,   183,
    1384,  1083,  1894,   424,   467,  2300,   424,   962,   471,   319,
     277,   156,  2301,   197,   351,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,     3,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,  1934,   506,   507,   508,   156,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,  1976,  1977,   351,   425,   425,   532,
     533,   758,  1461,   423,   537,   538,   252,     3,     3,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   423,   565,   566,   567,   423,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   982,   983,   381,   582,
     583,   584,   585,   586,   425,   423,   992,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,  1226,   333,   334,   335,   611,   404,
     777,   404,   404,   780,   617,  2244,    74,   424,     3,    38,
     381,   424,    78,  2428,    74,    62,    78,  2432,   795,    66,
    1811,     3,  1813,   252,   137,  1041,  1042,  1043,    51,   156,
     154,  2024,  2025,  2026,  2027,  2028,  2029,   376,   377,   378,
     379,     3,   252,  2036,     3,    71,    75,  2040,     3,   417,
      55,  2044,    78,   424,   426,  2173,  1546,   139,  1548,  1549,
     327,   328,   329,   330,  2106,  2154,     3,   114,   134,  2111,
     117,   100,   134,   124,   125,     3,     3,     3,    87,   108,
     156,   156,    76,     3,     3,   132,   424,   200,    71,     3,
      99,   120,   216,   103,   124,   125,    18,    49,   133,   197,
    2512,    39,   417,  2079,     5,   152,  2521,  2522,   134,  2524,
    2525,  2229,   138,   160,    36,  1009,  1010,     3,   945,   154,
     202,    59,   235,    85,   192,  2566,   135,  1143,  1144,   155,
      85,   154,   192,     0,   143,   201,   146,  1242,   164,   201,
    1245,    98,   210,   756,   154,    13,    14,   422,    16,   159,
     210,    19,  2564,  2565,  2595,  2596,    78,    71,   187,   153,
     112,   156,    63,   396,     3,  1956,   176,     3,   266,   163,
      84,  1962,   240,   950,   156,   201,   789,   790,    18,   208,
     240,   794,  2594,   177,   193,    71,   230,  2628,   801,   100,
       3,   113,   149,   216,   156,   261,   190,   156,    84,   261,
     424,   156,   249,   208,   251,   216,     9,     3,    48,   120,
    2449,    51,    51,    53,   258,    51,    56,    20,   241,   156,
       3,   215,     5,   270,   275,  2267,  1073,   351,   156,   156,
     156,    71,   267,   242,   217,   261,   156,   156,    78,    79,
     269,  1986,  1474,  2285,   238,   275,     3,    88,   155,    51,
    1266,    92,   103,    51,    51,   103,    14,   164,    60,  2232,
      18,     3,    60,    60,   156,  2241,    10,    11,    12,    13,
      14,    15,    16,   113,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     3,    36,    33,    34,   146,    36,   155,   146,   423,
     424,   914,   915,   154,   917,     3,   154,  2425,     3,   922,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    36,  2150,  2441,   164,   176,     3,   168,   176,   423,
     424,  2122,   155,  2375,   698,    32,    33,    34,  2066,    36,
     704,   246,   706,  2336,   398,   399,   400,  2340,   396,  2140,
     396,  2142,   252,   193,    10,    11,    12,    13,    14,    15,
      16,   201,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     3,
      36,    45,    46,  2356,     3,  2361,   425,   426,  1235,   396,
    1227,   425,   426,   396,    10,    11,    12,    13,    14,    15,
      16,  2519,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  2461,
      36,   261,   171,   103,   426,  1038,   425,   426,   103,   223,
     224,     3,  2494,   425,   426,   425,   426,  1214,     3,    10,
      11,    12,    13,    14,    15,    16,  1223,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     3,    36,   146,    82,    83,  2445,
     426,   146,   425,   426,   154,    95,   425,   426,     3,   154,
     159,    28,    29,    30,    31,    32,    33,    34,  1101,    36,
    1103,  2484,  2485,   409,  2487,  2488,   176,  1110,  1111,   136,
    1113,   176,   136,  2294,  1117,  2233,   136,   425,   426,   405,
     406,  1124,  1125,  1126,  1127,     3,  1129,  1130,  1131,   139,
       3,  2497,   136,  1136,  1137,     3,  1139,   425,   426,     3,
     425,   426,  1145,  1146,  1147,   155,   425,   426,   425,   426,
     425,   426,   425,   426,   425,   426,  1159,  1160,  1161,     3,
    1163,   425,   426,   425,   426,  2531,     4,     5,     4,     5,
     281,  1174,   425,   426,   425,   426,   425,   426,   425,   426,
    1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,    51,  1192,
    1357,  2557,   202,  1196,     3,  1198,   424,  1200,  1201,  1202,
    1203,  1204,   425,   426,   197,  1208,  1209,  1210,  2574,   219,
     281,   221,  1618,   425,   426,   424,  1219,   227,  1221,  1222,
    1016,  1017,  2588,  1019,  1020,  1021,   425,   426,     3,  1025,
    1026,  1027,   197,  1236,  1030,  2601,   425,   426,    57,    58,
    1243,     3,   252,   425,   426,   425,   426,   425,   426,   425,
     426,  2617,    10,    11,    12,    13,    14,    15,    16,   140,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   423,    36,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   427,    36,  1462,   425,   426,  1465,   281,
    1467,  1304,  1469,   425,   426,    10,    11,    12,    13,    14,
      15,    16,   424,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    36,    10,    11,    12,    13,    14,    15,    16,   281,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   281,    36,   425,
     426,   371,   425,   426,   425,   426,   425,   426,  1371,   425,
     426,   281,  1375,   425,   426,   425,   426,   281,  1381,   425,
     426,   425,   426,   425,   426,   395,   197,  1390,   281,  1392,
     425,   426,   425,   426,   404,  1398,  1399,   425,   426,   425,
     426,   685,   686,   687,   688,   281,   690,   417,     3,   693,
     694,   695,   425,   426,   425,   426,   700,   701,   702,   425,
     426,   705,   425,   426,   281,    10,    11,    12,    13,    14,
      15,    16,   281,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       4,    36,   425,   426,   425,   426,   425,   426,   425,   426,
    1463,   425,   426,   245,   425,   426,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,    10,
      11,    12,    13,    14,    15,    16,  1489,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     8,    36,     9,  1510,    10,    11,
      12,    13,    14,    15,    16,   423,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   424,    36,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    36,    36,   426,    10,    11,    12,
      13,    14,    15,    16,   424,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   424,    36,    10,    11,    12,    13,    14,    15,
      16,   424,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   424,
      36,    57,    58,   423,   424,  1608,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   424,    36,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,  1651,    36,
     424,  1654,   425,   426,   425,   426,   423,   424,   958,   959,
    1663,  1664,   425,   426,   425,   426,    51,   425,   426,   425,
     426,   424,  1675,   425,   426,   425,   426,  1231,  1232,  1740,
    1741,  1684,  1685,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   424,    36,   424,  1701,  1702,
    1703,   424,   424,  1706,  1707,   424,  1709,   424,  1711,   424,
    1713,   424,   424,   424,   424,   424,   424,  1720,  1721,  1722,
     425,   426,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   424,    36,
    1743,  1744,   424,   424,   424,   424,     3,   425,   426,   424,
     424,   159,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,  1771,   424,
     424,   424,  1775,   424,   424,   424,   424,   181,   424,   424,
     424,   424,  1785,   424,   424,   424,   424,   424,   424,    10,
      11,    12,    13,    14,    15,    16,  1799,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   424,    36,   424,   424,   424,   424,
     424,   424,     3,     4,     5,     6,     7,     8,   424,    10,
     424,    12,   424,   424,   424,    16,    17,    18,   424,    20,
     425,   426,   424,   424,   424,    26,    27,    28,    29,    30,
     424,   424,   424,   424,   424,   424,   424,   424,   424,    40,
     424,   424,   424,   424,   424,   424,     3,   424,   424,    50,
      51,   424,   424,    54,   424,   424,   424,   424,    59,    60,
      61,    62,    63,   424,   424,    66,   424,    68,    69,    70,
     424,   424,    73,    74,   425,    76,    77,    78,     3,   424,
       3,    82,     3,     3,    16,   266,   421,    53,    53,    44,
       3,    71,   277,   245,     3,    96,     3,   197,     3,   197,
     101,   281,     3,   425,   426,   106,   107,   108,   197,   281,
     277,   281,   113,   114,   418,   116,   117,   118,   119,   281,
       3,   122,     3,   124,   125,   126,   127,     3,   129,    28,
     131,   132,     3,   134,     3,   136,   137,     3,   139,   140,
     141,   142,   425,   426,     3,     3,     3,   148,     3,   150,
       3,   152,   153,   281,   155,   156,   157,   158,   159,   160,
      74,   162,   163,   164,   165,   166,    74,   281,     3,   425,
     426,     3,     3,  1996,  1997,    36,   177,     3,   179,  2002,
     181,  2004,     3,   427,   425,   425,   425,   425,   425,   190,
     425,   192,   193,   194,   195,   196,   197,   198,   425,   425,
     201,   202,   426,   425,   425,   425,   207,     5,   209,   210,
     211,   425,   213,   425,   215,   424,   217,   218,   219,   220,
       3,   425,   425,   425,     3,     3,     3,   425,     3,   163,
       3,     3,   196,   271,     3,   274,   402,   402,   239,   240,
     241,  2064,  2065,   271,   274,     3,   273,    42,   249,     5,
     251,   252,   253,     5,   277,    42,     3,   258,     3,   260,
     261,   262,     3,     3,     3,   266,     3,     3,     3,   270,
     271,     3,     3,   274,   275,   276,   277,     3,   245,     3,
     281,     3,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     5,    36,     3,
     379,   217,  2135,     5,     5,   217,   424,   424,   424,   424,
      64,   322,   323,   324,   325,   326,   425,   424,  2151,   424,
     424,   424,     3,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     3,    36,
    2183,     3,   426,     3,   197,     3,   425,   197,    51,     3,
     396,   281,   197,     3,   424,     3,  2199,   277,     3,    18,
       3,   140,   198,   396,   425,   426,     3,     3,     3,     3,
     425,   425,   241,   425,   350,   241,   350,   350,   350,  2222,
      39,   425,   350,   424,   424,   424,   424,   136,   163,    48,
     426,   164,    51,   164,    53,   164,  2239,    56,   424,   271,
     163,   422,   423,   424,   425,   426,   197,   428,     4,     4,
     411,   424,    71,   411,   410,  2258,  2259,     4,     3,    78,
      79,   222,     3,     4,     5,     6,     7,     8,   222,    10,
      36,    12,     3,   245,   245,    16,    17,    18,     5,    20,
       5,     3,     3,   197,   197,    26,    27,    28,    29,    30,
       5,     4,   193,     5,   113,     5,     5,   427,   424,    40,
     424,   197,     3,   213,   140,     3,     3,     3,   197,    50,
      51,   130,   418,    54,   397,   424,    94,     3,    59,    60,
      61,    62,    63,     3,    63,    66,   179,    68,    69,    70,
       3,    20,    73,    74,   199,    76,    77,    78,    91,     4,
     424,    82,   350,   350,   161,   164,   350,   350,   425,   427,
    2353,   350,   350,   424,   424,    96,   424,   350,     5,   350,
     101,     5,   350,     3,   424,   106,   107,   108,   241,   424,
     412,   274,   113,   114,   193,   116,   117,   118,   119,   140,
     425,   122,   201,   124,   125,   126,   127,     3,   129,  2392,
     131,   132,     3,   134,   424,   136,   137,   179,   139,   140,
     141,   142,    20,   403,     4,    20,   179,   148,  2411,   150,
       3,   152,   153,   164,   155,   156,   157,   158,   159,   160,
     164,   162,   163,   164,   165,   166,     3,   424,     3,   424,
     222,   222,    78,   425,   268,   425,   177,   424,   179,   425,
     181,   425,   261,   425,   424,   424,     3,   424,   424,   190,
     424,   192,   193,   194,   195,   196,   197,   198,    60,   140,
     201,   202,   396,   197,   245,     3,   207,   268,   209,   210,
     211,    20,   213,     3,   215,     3,   217,   218,   219,   220,
       3,   424,   164,   424,   424,   164,     3,   424,     4,   212,
       4,     6,     4,   164,   424,     3,     3,   425,   239,   240,
     241,    51,   141,   163,   426,     3,   424,    20,   249,     4,
     251,   252,   253,  2516,     5,     4,     4,   258,   426,   260,
     261,   262,     5,     3,   424,   266,   425,   425,   425,   270,
     271,   424,   424,   274,   275,   276,   277,   424,   424,   424,
     281,     3,     4,     5,     6,     7,     8,   424,    10,   424,
      12,   193,     3,    52,    16,    17,    18,   424,    20,   425,
       3,   425,     4,   425,    26,    27,    28,    29,    30,   426,
     425,     5,   424,   164,   424,   424,   424,   164,    40,   426,
     426,   322,   323,   324,   325,   326,   426,   424,    50,    51,
     213,   424,    54,   424,   424,   424,   424,    59,    60,    61,
      62,    63,   240,     4,    66,     4,    68,    69,    70,   424,
       3,    73,    74,     3,    76,    77,    78,     3,     3,     3,
      82,     3,   424,     3,   424,   118,     3,   268,     3,   266,
       4,   424,    20,    20,    96,   140,   424,   424,   424,   101,
       3,   424,   426,   197,   106,   107,   108,    20,   258,     4,
     350,   113,   114,   425,   116,   117,   118,   119,   351,   350,
     122,   425,   124,   125,   126,   127,   425,   129,   425,   131,
     132,   425,   134,    94,   136,   137,   148,   139,   140,   141,
     142,   422,   423,   424,   425,   426,   148,   428,   150,     3,
     152,   153,    63,   155,   156,   157,   158,   159,   160,     3,
     162,   163,   164,   165,   166,   424,   426,    12,     3,    12,
       3,     5,     3,     5,    51,   177,     5,   179,   424,   181,
     424,   424,    60,   425,     4,    60,     3,   426,   190,   424,
     192,   193,   194,   195,   196,   197,   198,   425,   425,   201,
     202,   425,   217,   140,   277,   207,   424,   209,   210,   211,
     426,   213,   424,   215,   424,   217,   218,   219,   220,   268,
     424,     5,   425,     4,   164,   271,   424,   424,   164,     3,
     426,   424,    88,   425,   198,    63,   424,   239,   240,   241,
     425,     3,   425,   413,    20,   164,   164,   249,   424,   251,
     252,   253,   425,   425,    43,   426,   258,   426,   260,   261,
     262,    18,     3,   424,   266,   424,   164,     3,   270,   271,
       3,   425,   274,   275,   276,   277,   425,   425,   425,   281,
       3,     4,     5,     6,     7,     8,     3,    10,    60,    12,
      78,   118,   424,    16,    17,    18,   136,    20,   424,   424,
       3,   424,     3,    26,    27,    28,    29,    30,    63,   415,
      63,     3,     3,   424,     3,    63,   425,    40,   425,     5,
     322,   323,   324,   325,   326,   425,   350,    50,    51,   350,
     425,    54,   350,   350,   425,     5,    59,    60,    61,    62,
      63,     5,     5,    66,     3,    68,    69,    70,   425,    20,
      73,    74,   426,    76,    77,    78,   207,   269,    20,    82,
       3,     3,    60,   425,     5,     5,    77,   277,   131,   156,
     166,   276,     5,    96,   424,   217,     3,   207,   101,   416,
     424,   204,    20,   106,   107,   108,   426,     3,   101,   425,
     113,   114,   426,   116,   117,   118,   119,     3,   425,   122,
     425,   124,   125,   126,   127,   424,   129,   214,   131,   132,
     424,   134,   425,   136,   137,   425,   139,   140,   141,   142,
     422,   423,   424,   425,   426,   148,   428,   150,   425,   152,
     153,   425,   155,   156,   157,   158,   159,   160,   425,   162,
     163,   164,   165,   166,   424,   424,   140,   425,   425,     4,
     426,   426,     4,   426,   177,     3,   179,   425,   181,   425,
     425,   424,    60,     5,     3,   425,     3,   190,     3,   192,
     193,   194,   195,   196,   197,   198,   424,   424,   201,   202,
     424,     3,     3,   426,   207,     4,   209,   210,   211,     4,
     213,   159,   215,   424,   217,   218,   219,   220,     3,   207,
       3,     3,     3,   426,   425,     3,    20,     3,     3,   425,
     231,   231,    20,   245,     3,     3,   239,   240,   241,   425,
     180,   425,   240,   425,   180,   426,   249,   426,   251,   252,
     253,   425,   425,   425,   425,   258,   426,   260,   261,   262,
       5,   424,   424,   266,   424,   229,   425,   270,   271,   425,
       3,   274,   275,   276,   277,   425,   425,     5,   281,     3,
       4,     5,     6,     7,     8,   426,    10,     3,    12,   426,
     228,     5,    16,    17,    18,   425,    20,   424,     3,   151,
     426,    97,    26,    27,    28,    29,    30,   426,   271,   174,
     197,   191,   197,   250,   191,     5,    40,     5,  1392,   322,
     323,   324,   325,   326,   425,   472,    50,    51,   140,   425,
      54,  1116,   611,  1222,  1737,    59,    60,    61,    62,    63,
    2067,  1995,    66,   621,    68,    69,    70,  1493,   171,    73,
      74,   760,    76,    77,    78,  2278,  2459,  2538,    82,  1061,
     768,  1064,  1967,  1342,  1259,   646,  1955,  1590,   978,  2138,
    1333,  2290,    96,  2548,   118,   461,  2183,   101,   779,  1628,
    2150,  1617,   106,   107,   108,  1028,  1097,  1605,   679,   113,
     114,   211,   116,   117,   118,   119,   426,  2600,   122,  1045,
     124,   125,   126,   127,  1789,   129,    -1,   131,   132,    -1,
     134,    -1,   136,   137,    -1,   139,   140,   141,   142,   422,
     423,   424,   425,   426,   148,   428,   150,    -1,   152,   153,
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
     274,   275,   276,   277,    -1,    -1,    -1,   281,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,   422,   423,
     424,   425,   426,   148,   428,   150,    -1,   152,   153,    -1,
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
     275,   276,   277,    -1,    -1,    -1,   281,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,    -1,
     116,   117,   118,   119,    -1,    -1,   122,    -1,   124,   125,
     126,   127,    -1,   129,    -1,   131,   132,    -1,   134,    -1,
     136,   137,    -1,   139,   140,   141,   142,   422,   423,   424,
     425,   426,   148,   428,   150,    -1,   152,   153,    -1,   155,
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
     276,   277,    -1,    -1,    -1,   281,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
     107,   108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,
     117,   118,   119,    -1,    -1,   122,    -1,   124,   125,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,
     137,    -1,   139,   140,   141,   142,   422,   423,   424,   425,
     426,   148,   428,   150,    -1,   152,   153,    -1,   155,   156,
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
     277,    -1,    -1,    -1,   281,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   322,   323,   324,   325,   326,
      -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,
     118,   119,    -1,    -1,   122,    -1,   124,   125,   126,   127,
      -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,   137,
      -1,   139,   140,   141,   142,   422,   423,   424,   425,   426,
     148,   428,   150,    -1,   152,   153,    -1,   155,   156,   157,
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
      -1,    -1,    -1,   281,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,   108,
      -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,   118,
     119,    -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,
     129,    -1,   131,   132,    -1,   134,    -1,   136,   137,    -1,
     139,   140,   141,   142,   422,   423,   424,   425,   426,   148,
     428,   150,    -1,   152,   153,    -1,   155,   156,   157,   158,
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
      -1,    -1,   281,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,   114,    -1,   116,   117,   118,   119,
      -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,   129,
      -1,   131,   132,    -1,   134,    -1,   136,   137,    -1,   139,
     140,   141,   142,   422,   423,   424,   425,   426,   148,   428,
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
      -1,   281,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,   114,    -1,   116,   117,   118,   119,    -1,
      -1,   122,    -1,   124,   125,   126,   127,    -1,   129,    -1,
     131,   132,    -1,   134,    -1,   136,   137,    -1,   139,   140,
     141,   142,   422,   423,   424,   425,   426,   148,   428,   150,
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
     281,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,   114,    -1,   116,   117,   118,   119,    -1,    -1,
     122,    -1,   124,   125,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,    -1,   136,   137,    -1,   139,   140,   141,
     142,   422,   423,   424,   425,   426,   148,   428,   150,    -1,
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
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
     322,   323,   324,   325,   326,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,
     113,   114,    -1,   116,   117,   118,   119,    -1,    -1,   122,
      -1,   124,   125,   126,   127,    -1,   129,    -1,   131,   132,
      -1,   134,    -1,   136,   137,    -1,   139,   140,   141,   142,
     422,   423,   424,   425,   426,   148,   428,   150,    -1,   152,
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
      -1,   274,   275,   276,   277,    -1,    -1,    -1,   281,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   322,
     323,   324,   325,   326,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
     114,    -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,
     124,   125,   126,   127,    -1,   129,    -1,   131,   132,    -1,
     134,    -1,   136,   137,    -1,   139,   140,   141,   142,   422,
     423,   424,   425,   426,   148,   428,   150,    -1,   152,   153,
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
     274,   275,   276,   277,    -1,    -1,    -1,   281,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,   422,   423,
     424,   425,   426,   148,   428,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    17,
      18,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    27,
      28,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    40,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,   110,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    10,    11,    12,    13,    14,    15,    16,   146,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    -1,   422,   423,   424,
     425,   426,    -1,   428,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   234,    -1,    -1,    -1,
     238,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   263,    36,    -1,    -1,    -1,
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
      -1,    27,    -1,    -1,    -1,    -1,   424,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   426,
      36,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   426,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
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
     386,   387,   388,   389,   390,    -1,   392,   393,   394,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,   414,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   426,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     426,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    10,    11,    12,    13,    14,    15,    16,   426,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   426,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   263,
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
     424,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   426,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    10,    11,    12,    13,    14,    15,    16,   426,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,
      -1,   183,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   225,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,   281,
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
      -1,    -1,   414,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,   424,    -1,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   426,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   426,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     426,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     426,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   426,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   424,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   136,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   426,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   183,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   225,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   426,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
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
      -1,    27,    13,    14,    15,    16,   424,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     426,    -1,    -1,    -1,    -1,    -1,    -1,   113,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   426,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   426,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   426,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,   263,    -1,    -1,
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
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   424,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   426,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   225,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,   263,
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
     414,    -1,    -1,    -1,    -1,    27,    13,    14,    15,    16,
     424,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   426,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     426,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
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
      -1,    -1,   424,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   426,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   225,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,
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
      -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   426,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,   426,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   426,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,   263,    -1,    -1,    -1,    -1,
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
     388,   389,   390,    -1,   392,   393,   394,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   414,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   424,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   426,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   426,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   426,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,   426,    10,    11,    12,    13,    14,    15,
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
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   140,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   426,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   426,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   426,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,
      -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   426,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   426,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     426,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,   425,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,   425,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   425,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   425,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     425,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   425,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   425,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   425,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   425,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   425,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,   425,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   425,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   425,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   425,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   425,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   425,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     425,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   425,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     425,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   425,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     425,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   425,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   425,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   425,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    10,    11,    12,    13,    14,    15,    16,   425,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   425,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   425,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     425,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   425,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   425,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   425,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   425,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   425,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   425,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   425,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   425,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   425,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   425,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,   425,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   425,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   425,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   425,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   425,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   425,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   425,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   425,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   425,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   425,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   425,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   425,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     425,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   425,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   425,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   425,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   425,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   425,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     425,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   425,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   425,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   425,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   425,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   425,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   425,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   425,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   425,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   425,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    10,    11,    12,    13,
      14,    15,    16,   425,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   425,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     425,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   425,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   425,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   425,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   425,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   425,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   425,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   425,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    10,    10,    11,    12,    13,    14,
      15,    16,   425,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   425,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   425,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    37,    -1,    95,
      -1,    41,    -1,   425,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,   425,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
      -1,   425,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   425,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   202,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,    -1,   425,   219,    -1,   221,    -1,    -1,   168,   169,
     170,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,   247,    -1,    -1,    -1,    -1,   425,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   261,   206,    -1,   208,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,    -1,   425,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     425,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
     425,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,   395,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     425,    -1,   104,   105,    -1,    -1,    -1,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   395,    -1,   425,    -1,    -1,
      -1,    -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,   147,    -1,    -1,    -1,   419,
     420,    -1,    -1,    -1,   425,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    61,
      62,    -1,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      82,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,   278,   279,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
     182,    -1,    -1,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,   205,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,    -1,
      -1,   243,   244,    -1,    -1,    -1,    -1,   249,   253,   251,
      -1,    -1,    -1,    -1,   256,   257,    -1,    -1,    -1,    -1,
     262,    -1,   264,    -1,    -1,    -1,    -1,    -1,   270,    -1,
     272,   273,    -1,    -1,    -1,   253,   278,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   124,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     3,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      49,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     395,   404,   419,   420,   430,   469,   470,   510,   514,   516,
     523,   524,   527,   529,   530,   532,   533,   534,   539,   540,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   556,   559,   566,   567,   569,   585,   586,
     595,   598,   600,   601,   602,   625,   628,   635,   636,   639,
     642,   643,   646,   219,   252,   371,   404,   252,     3,    10,
      95,   102,   138,   139,   155,   202,   219,   221,   227,   246,
     247,   261,   371,   395,   404,   417,   607,     3,   511,    95,
     139,   155,   202,   219,   221,   227,   252,   371,   395,   404,
     417,   577,     3,     3,     3,    28,   252,   252,   577,     8,
     227,   626,   627,   489,   252,   577,   596,     3,    95,   398,
     399,   400,   107,   398,   399,   400,   407,   417,   417,     0,
     422,   526,     3,     3,     3,     3,   396,   424,   216,   156,
     599,     3,   155,     3,     3,    85,   156,     3,     3,     3,
     599,   246,   155,   599,   396,   396,     3,   156,   252,   587,
       3,   136,   154,   176,   203,   512,     3,   156,     3,   156,
       3,     3,   156,     3,   156,     3,     3,   156,     3,   156,
       3,   156,   396,   396,     3,   156,   103,   146,   154,   159,
     176,   578,   171,   426,     3,     3,   578,     9,    20,     3,
     113,   426,     3,     4,     5,     6,     7,     8,    17,    18,
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
     392,   393,   394,   414,   424,   431,   490,   491,     3,   154,
     176,     3,   167,   173,   381,   424,   493,   494,   495,   496,
     499,   509,     3,   159,   401,   136,   136,   136,   159,   136,
     409,     3,     3,     3,   430,    54,    55,    74,   210,   277,
     423,   555,   100,   120,    38,    75,   100,   108,   120,   187,
     208,   269,    55,   208,   644,     3,     3,     4,     5,     6,
       7,     8,   193,   425,   637,   638,   139,   202,   281,     3,
      51,     3,   424,   197,     3,   156,   281,   424,    39,    59,
     640,   197,     3,     3,    85,   156,     3,     3,   156,     3,
     156,   140,   281,   599,   424,   588,   423,   513,     3,   512,
     136,   426,   281,   281,   281,   281,   197,   281,    74,   210,
     515,   281,   281,     3,   156,     3,   156,   281,     3,     4,
     245,     3,   431,   431,   627,   423,   424,     9,   431,   431,
     431,   275,   431,   468,   423,   424,    36,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     431,     3,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    36,    51,   492,   136,
     159,   426,   426,   423,   492,   424,     3,   424,   470,   493,
     240,   426,    76,   153,   177,   190,   215,   238,   500,   502,
      51,   498,   498,     3,   159,     3,     3,     3,     3,     3,
      16,   266,   421,    53,    53,    44,     3,   108,   258,   557,
      71,    84,     3,    84,    71,   217,     3,    71,    84,    71,
     217,     3,    84,     3,    71,    84,    71,   277,   245,    18,
     184,   376,   377,   378,   379,   645,   100,   120,   425,   426,
       3,     3,    61,    62,    64,    66,    67,    82,   114,   115,
     116,   117,   123,   132,   152,   160,   175,   182,   185,   188,
     189,   205,   239,   240,   243,   244,   249,   251,   256,   257,
     262,   264,   270,   272,   273,   278,   621,   197,     3,    16,
     150,   195,   629,   630,   631,     3,   197,   281,     3,   629,
     107,   157,   258,   398,   641,     3,   404,   197,     3,   156,
     281,   644,   277,   528,   281,   535,   281,   418,     3,     3,
       3,   589,   136,   245,   590,    28,   274,   471,   266,   493,
       3,     3,     3,     3,     3,     3,   404,     3,     3,     3,
      74,   281,    74,   281,     3,   240,   424,   579,     3,   240,
     579,     3,   431,   436,   440,   431,   431,   468,   124,   125,
     275,     3,     3,   427,   438,   445,   431,    65,   178,   254,
     431,   466,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   425,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   425,   431,   431,
     431,   425,   431,   431,   431,   431,   431,   431,    28,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     425,   425,   425,   425,   425,   431,   431,   425,   425,   425,
     431,   431,     5,   425,   425,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   425,   431,   431,
     431,   425,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   425,   425,   431,   431,   431,   431,   431,     6,
      18,   193,   319,   424,    13,    14,    16,    19,   431,    40,
      47,   232,   424,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,     3,
     493,     3,   491,     3,   525,     3,   133,   154,   267,   506,
     497,   492,   431,   425,   425,     3,   597,   494,   177,   215,
     503,   495,   163,   196,   501,     3,     3,   271,     3,   402,
     402,   274,   271,   274,     3,   273,     5,     5,   555,    42,
      42,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,   621,     3,   245,     3,     3,     3,     5,     3,   379,
       5,     5,   277,     5,    63,     5,   217,   217,   638,   424,
     424,   424,   617,   617,   617,   617,   617,   617,   424,   617,
     617,   617,    64,   618,   618,   617,   617,   617,   424,   618,
     617,   618,   424,   424,   424,    18,    36,    78,   113,     3,
     621,     3,     3,     3,   425,   426,   266,   424,     3,     3,
     197,   425,   197,    51,   560,   396,     3,   197,   281,     3,
     424,     3,   277,   536,     3,     3,   140,   154,   216,   351,
     423,   424,   623,   624,   425,   426,     4,   236,   237,   591,
     431,   198,   481,   493,   471,   513,   396,   515,     3,     3,
       3,   584,     3,   580,   271,   470,   584,   271,   470,   426,
     425,   253,   124,   125,   431,   431,   425,   431,   437,   470,
     136,   426,   425,   136,   431,   426,   426,   426,   425,   425,
     425,   425,   425,   425,   426,   426,   426,   426,   425,   426,
     426,   426,   425,   425,   425,   425,   426,   426,   425,   426,
     425,   425,   425,    51,   426,   426,   426,   426,   321,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   426,
     426,   426,   425,   426,   350,   350,   350,   425,   426,   425,
     426,   425,   350,   350,   426,   425,   425,   425,   425,   425,
     425,   425,   425,   426,   426,   426,   426,   426,   426,   426,
     426,   425,   426,   425,   425,   425,   426,   425,   426,   425,
     426,   426,   426,   426,   426,   425,   425,   425,   426,   426,
     426,     6,   193,   441,   443,   431,   431,   424,   431,    50,
     424,   424,   424,   432,   427,   140,   485,   136,   426,   492,
     164,   164,   164,   470,   506,   425,    20,   423,   426,   471,
     501,   501,   163,   197,   495,   163,   424,   271,     4,     4,
     411,   424,   411,   410,     4,    45,    46,   557,   197,   197,
      78,   134,   201,   261,   621,   621,     3,   222,   222,   616,
     621,     3,   245,   245,     5,     5,     3,     3,   629,   629,
       5,   619,   620,   619,   619,     4,   622,   619,   619,   619,
     620,   620,   619,   619,   619,   622,   620,   619,   620,     5,
       5,     5,   193,   427,   424,   431,   424,   621,   621,   621,
     213,   631,   268,   391,     3,   327,   328,   329,   330,   521,
     522,   266,   424,   197,     3,    51,    60,     3,   404,   223,
     224,   140,   561,     3,   266,   424,     3,     3,   197,   397,
     528,   424,   535,   418,    94,     3,    71,    78,   134,   138,
     155,   164,   201,   261,   608,   609,   615,   498,     3,    87,
      99,   135,   143,   193,   242,   277,   424,   592,   593,   594,
      63,   179,   484,   471,     3,    20,   199,   426,   570,   425,
     426,   424,   581,   570,   581,   570,   436,   431,   431,   124,
     253,    91,   426,   427,   425,   431,   431,   431,   136,   161,
     467,   467,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   621,   621,   431,   431,   431,     4,   350,
     350,   350,   350,   350,   350,   431,   431,   431,   431,   424,
     424,   424,   350,     5,   350,     5,   350,   424,   424,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   436,
     470,   442,   444,    50,   431,   435,   431,   433,   439,   434,
     439,   470,   412,   471,   493,     3,   506,   140,   507,   507,
     507,   425,   498,   431,     3,     3,   481,   495,   431,   197,
     266,   504,   505,   495,     4,   193,   531,   424,   403,   179,
      20,     4,   193,   541,    20,     4,   179,     3,   558,   558,
     424,   164,   164,   424,   616,   616,   621,    18,    39,    48,
      51,    53,    56,    71,    78,    79,   113,   130,   164,   193,
     201,   261,   568,   616,     3,     3,   222,   222,   425,   425,
     425,   426,   259,   280,    82,    83,   425,   426,   425,   425,
     425,   425,    78,   431,   521,    62,    66,   114,   117,   132,
     152,   160,   249,   251,   270,   632,   424,   424,   424,   424,
     424,   424,   425,   426,   268,   521,     3,   266,   424,    60,
     633,   140,   396,    40,   107,   157,   241,   258,   245,   562,
     560,   268,   521,   266,   424,   197,     3,    20,   405,   406,
     537,   538,   536,     3,     3,   424,   623,     3,   424,   164,
     155,   164,   424,   424,   164,   424,   425,   426,     3,   470,
       4,    87,   249,     6,     4,     4,   424,   593,   426,     3,
       5,   482,   483,   431,   212,   647,   113,   431,   164,     3,
       3,   113,   431,   583,   426,   570,   570,   124,   431,   424,
     437,   140,   425,   425,   426,   425,   431,   431,   425,   425,
     425,   425,   425,   426,   426,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   426,   425,   424,   424,   424,
     424,   424,   424,   425,   426,   426,   425,   425,   446,   447,
     448,   424,   425,   426,   424,   425,   426,   424,   464,   465,
     425,   426,   426,   426,   425,   425,   426,   426,   425,   426,
     425,   426,   425,   426,   425,   425,   425,   425,   425,   425,
     426,   426,   426,   425,   425,   436,   470,   431,   470,   470,
     425,   470,   425,   425,    51,   141,   472,   471,   163,   424,
     424,   424,     3,    20,    20,   423,   484,   431,   424,   505,
     426,   531,     4,     5,     4,   426,     4,     5,   426,   277,
     431,   424,   424,     3,   614,   568,   568,   616,   193,     3,
     424,   424,   424,    52,     3,   424,     4,     4,     5,     6,
       7,    72,   333,   334,   335,   424,   164,   164,   568,   213,
      51,    60,     5,   240,     4,   620,     4,   620,   620,   424,
     425,   425,    51,    60,   521,     3,     3,     3,     3,     3,
       3,   424,   425,   424,   268,   391,   521,   633,     3,     4,
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
     325,   326,   422,   423,   424,   425,   426,   428,   634,   118,
       3,     3,   563,   266,   564,   561,   424,   425,   268,   521,
       3,   266,   424,     4,    20,    20,   425,   426,   140,   608,
      78,   134,   201,   261,   431,   424,   424,   424,     3,   488,
     488,   424,   614,   604,   623,   609,   621,   593,   425,   594,
      49,   112,   423,   474,   474,   426,   181,   426,     3,    28,
     648,   258,    20,   425,   426,   582,   197,   572,     4,   431,
     431,   425,   104,   105,   109,   111,   144,   145,   147,   278,
     279,   431,   431,   431,   450,   451,   449,   452,   453,   454,
     431,   431,   351,   477,   477,   477,   455,   350,     4,     5,
     459,   350,     4,     5,   463,   477,   477,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   425,   425,
     425,   425,   425,    94,    63,   148,   476,   472,     3,   508,
     508,   508,   424,   431,   431,     3,   647,   488,   531,   426,
      12,   541,    12,     3,     5,   425,     3,   611,     3,   610,
     425,   426,   568,     5,   431,     5,    51,    78,   201,   261,
     431,   424,   424,   424,   431,   632,    60,   633,   425,     4,
     431,    60,   633,   425,     3,   517,   425,   425,   425,   426,
     521,   521,   424,   424,   425,   124,   633,   633,   633,   633,
     633,   633,   217,   140,   426,   424,   277,   565,   562,   521,
     424,   425,   424,   268,   521,   425,     5,     4,   538,   271,
     425,   424,   164,   164,   424,   425,   611,   488,   488,   425,
     426,   425,   610,   425,    48,   172,   197,   228,   277,   351,
     603,   616,   425,     3,   483,   431,   431,   426,   571,   113,
     431,   113,   431,   424,    88,   647,   425,   425,   425,   425,
     425,   425,   477,   477,   477,   477,   477,   477,   425,   426,
     425,    63,   198,   479,   479,   479,   477,   424,   425,   425,
     477,   424,   425,   425,   477,   479,   479,   425,   425,   425,
     425,   425,   426,   425,   425,   426,   426,   426,   413,   431,
     473,   431,   481,   476,   425,   426,   425,   425,     3,    20,
     425,   426,   531,   164,   426,   164,    43,    18,   425,   426,
     425,   426,     3,   425,   426,   425,   425,   426,   424,   424,
     164,   425,   425,   425,   425,   425,    51,    60,   633,   124,
     425,   633,   124,   425,     3,   425,   425,   521,     3,   124,
     124,   124,   124,   124,   124,    60,   118,     3,   431,    78,
     564,   425,   521,   521,   424,   425,   136,   604,   623,   431,
     424,   424,   614,   425,   425,   425,     3,   425,     5,    20,
     424,     3,    63,   415,    63,   474,     3,     3,   576,   583,
     424,   573,   479,   479,   479,   479,   479,   479,   431,     3,
     478,    63,   425,   425,   425,   479,   456,   350,   350,   479,
     460,   350,   350,   479,   425,   425,   431,     5,     5,     5,
       5,   474,   277,   426,   475,   484,   481,     3,   425,   431,
     531,   426,    20,   541,    20,   269,   207,     3,     3,     5,
      57,    58,     5,   431,   431,    60,   633,   124,   124,   277,
     518,   425,   425,   517,    77,   131,   156,   166,   276,   633,
     217,   425,   424,   565,   425,   425,   521,   424,   425,   611,
     610,   425,   207,     5,     3,   107,   248,   204,   268,   416,
     204,    20,   426,   425,     3,   101,   574,   425,   425,   425,
     425,   425,   425,   425,   426,     3,   480,   425,   477,   424,
     424,   425,   477,   424,   424,   425,   425,   425,   426,   426,
     214,   431,   140,   486,   484,   426,   531,     4,   425,   426,
       4,     3,   425,   425,   425,   425,   633,   124,   424,   425,
     124,    60,   431,   425,     5,   425,   425,     3,   425,     3,
       3,   424,   424,   424,   431,     3,   425,   426,    90,   258,
       3,   474,   426,   479,   457,   458,   479,   461,   462,     4,
       4,   474,   230,   258,   159,   487,   531,   426,   541,   424,
      57,    58,   124,     3,   519,   520,   518,   633,   425,   425,
     207,   423,   424,     3,     3,     3,    20,     3,   575,     3,
     425,   477,   477,   425,   477,   477,   425,   425,   231,   231,
     488,   426,   531,   425,     3,   612,    20,   425,   426,   124,
     245,     3,     3,   612,   425,   425,   425,   431,   240,   474,
     479,   479,   479,   479,   180,   180,   531,   426,   425,   426,
       5,   520,   424,   423,   424,   424,   425,   424,   229,   576,
     425,   425,   425,   425,   426,   531,   613,     3,     5,     3,
     612,   612,   613,   228,   605,   606,     5,   531,   426,    18,
      97,   183,   197,   425,   424,   425,   425,    18,     3,   425,
     426,   426,   531,    97,   269,   151,   137,   200,   235,   107,
     258,   612,   613,   613,   271,   606,   531,   426,    98,   149,
      74,   192,   210,   240,    74,   192,   210,   240,   425,   174,
     425,   531,   113,   193,   113,   193,   613,   250,   425,     4,
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
#line 512 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 518 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 519 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 521 "parser/evoparser.y"
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
#line 534 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 536 "parser/evoparser.y"
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
#line 564 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 572 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 580 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 586 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 593 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 594 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 595 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 596 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 597 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 598 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 599 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 600 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 601 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 602 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 603 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 604 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 605 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 606 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 607 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 608 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 609 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 610 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 611 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 613 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 618 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 619 "parser/evoparser.y"
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
#line 627 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 628 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 629 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 630 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 631 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 632 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 637 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 639 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 642 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 643 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 644 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 645 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 646 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 649 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 650 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 654 "parser/evoparser.y"
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
#line 663 "parser/evoparser.y"
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
#line 681 "parser/evoparser.y"
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
#line 690 "parser/evoparser.y"
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
#line 709 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 710 "parser/evoparser.y"
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
#line 770 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 779 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 785 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 790 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 792 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 794 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 799 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 804 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 809 "parser/evoparser.y"
    {
        emit("CALL 0 EVO_CURRENT_XID");
        (yyval.exprval) = expr_make_func0(EXPR_CURRENT_XID, "EVO_CURRENT_XID");
    ;}
    break;

  case 66:
#line 817 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 67:
#line 819 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 68:
#line 821 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 69:
#line 823 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 70:
#line 825 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 71:
#line 827 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 72:
#line 829 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 73:
#line 831 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 74:
#line 833 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 75:
#line 835 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 842 "parser/evoparser.y"
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
#line 853 "parser/evoparser.y"
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
#line 863 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 80:
#line 867 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 81:
#line 867 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 82:
#line 868 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 83:
#line 868 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 84:
#line 869 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 870 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 86:
#line 877 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 87:
#line 878 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 88:
#line 885 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 89:
#line 886 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 90:
#line 896 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 91:
#line 900 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 92:
#line 901 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 902 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 903 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 904 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 905 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 97:
#line 906 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 907 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 99:
#line 911 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 100:
#line 912 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 101:
#line 913 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 102:
#line 914 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 103:
#line 915 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 104:
#line 916 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 105:
#line 918 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 919 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 107:
#line 920 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 108:
#line 921 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 109:
#line 922 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 923 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 111:
#line 924 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 925 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 113:
#line 926 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 927 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 115:
#line 928 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 116:
#line 929 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 117:
#line 931 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 118:
#line 932 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 933 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 120:
#line 934 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 935 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 122:
#line 936 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 123:
#line 937 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 124:
#line 938 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 125:
#line 939 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 126:
#line 940 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 127:
#line 941 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 128:
#line 942 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 129:
#line 943 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 130:
#line 944 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 131:
#line 945 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 132:
#line 946 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 133:
#line 948 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 134:
#line 949 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 135:
#line 950 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 136:
#line 951 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 137:
#line 952 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 138:
#line 953 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 139:
#line 956 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 957 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 958 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 142:
#line 959 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 143:
#line 960 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 961 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 145:
#line 962 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 963 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 964 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 965 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 149:
#line 966 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 150:
#line 967 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 151:
#line 968 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 152:
#line 969 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 153:
#line 970 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 154:
#line 971 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 155:
#line 972 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 156:
#line 973 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 157:
#line 974 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 158:
#line 975 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 159:
#line 976 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 160:
#line 977 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 161:
#line 978 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 162:
#line 979 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 163:
#line 980 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 164:
#line 981 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 165:
#line 982 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 166:
#line 983 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 167:
#line 984 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 168:
#line 985 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 169:
#line 986 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 170:
#line 987 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 171:
#line 988 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 172:
#line 989 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 173:
#line 991 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 174:
#line 992 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 175:
#line 993 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 176:
#line 994 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 177:
#line 995 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 178:
#line 996 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 179:
#line 997 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 180:
#line 998 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 181:
#line 1000 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 182:
#line 1001 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 183:
#line 1002 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 184:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 185:
#line 1004 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 186:
#line 1005 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 187:
#line 1006 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 188:
#line 1007 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 189:
#line 1008 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 190:
#line 1009 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 191:
#line 1010 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 192:
#line 1011 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 193:
#line 1012 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 194:
#line 1013 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 195:
#line 1014 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 196:
#line 1015 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 197:
#line 1016 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 198:
#line 1017 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 199:
#line 1018 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 200:
#line 1019 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 201:
#line 1020 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 202:
#line 1021 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 203:
#line 1023 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 204:
#line 1024 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 205:
#line 1025 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 206:
#line 1026 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 207:
#line 1027 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 208:
#line 1029 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 209:
#line 1030 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 210:
#line 1032 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 211:
#line 1033 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 212:
#line 1034 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 213:
#line 1036 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 214:
#line 1037 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 215:
#line 1038 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 216:
#line 1039 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 217:
#line 1046 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 218:
#line 1053 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 219:
#line 1060 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 220:
#line 1064 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 221:
#line 1068 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1072 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 223:
#line 1076 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 224:
#line 1080 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 225:
#line 1086 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 226:
#line 1087 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 227:
#line 1088 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 228:
#line 1092 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 229:
#line 1098 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 230:
#line 1104 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 231:
#line 1105 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 232:
#line 1106 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 233:
#line 1107 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1108 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 235:
#line 1109 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 236:
#line 1110 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 237:
#line 1111 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 238:
#line 1112 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 239:
#line 1116 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 240:
#line 1118 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 241:
#line 1120 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 242:
#line 1122 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 243:
#line 1126 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 244:
#line 1134 "parser/evoparser.y"
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
#line 1144 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 246:
#line 1145 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 247:
#line 1148 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 248:
#line 1149 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 249:
#line 1153 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 250:
#line 1161 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 251:
#line 1169 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 252:
#line 1177 "parser/evoparser.y"
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
#line 1191 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 254:
#line 1200 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 255:
#line 1206 "parser/evoparser.y"
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
#line 1219 "parser/evoparser.y"
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
#line 1232 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 260:
#line 1234 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 261:
#line 1237 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 262:
#line 1244 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 263:
#line 1252 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1253 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 265:
#line 1254 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 266:
#line 1257 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 1258 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1262 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 272:
#line 1271 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 273:
#line 1273 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 276:
#line 1281 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 277:
#line 1283 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 282:
#line 1295 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 283:
#line 1301 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 284:
#line 1308 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 285:
#line 1316 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 286:
#line 1317 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 287:
#line 1318 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 288:
#line 1319 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 290:
#line 1331 "parser/evoparser.y"
    { emit("FOR SYSTEM_TIME AS OF TRANSACTION %d", (yyvsp[(6) - (6)].intval)); SetAsOfXid((uint32_t)(yyvsp[(6) - (6)].intval)); ;}
    break;

  case 291:
#line 1334 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 292:
#line 1335 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 293:
#line 1336 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 294:
#line 1337 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 295:
#line 1338 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 297:
#line 1342 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 298:
#line 1345 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 299:
#line 1346 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 300:
#line 1349 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 301:
#line 1350 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 302:
#line 1351 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 303:
#line 1352 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 304:
#line 1353 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 305:
#line 1354 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 306:
#line 1355 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 307:
#line 1356 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 308:
#line 1357 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 309:
#line 1360 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 310:
#line 1361 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 311:
#line 1363 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 312:
#line 1371 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 313:
#line 1376 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 314:
#line 1377 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 315:
#line 1378 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 316:
#line 1381 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 317:
#line 1382 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 320:
#line 1391 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 321:
#line 1399 "parser/evoparser.y"
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
#line 1408 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 323:
#line 1409 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 324:
#line 1411 "parser/evoparser.y"
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
#line 1420 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 326:
#line 1425 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 327:
#line 1431 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 328:
#line 1438 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 329:
#line 1442 "parser/evoparser.y"
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
#line 1462 "parser/evoparser.y"
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
#line 1488 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 334:
#line 1490 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 335:
#line 1492 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 336:
#line 1494 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 337:
#line 1496 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 338:
#line 1499 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1500 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 340:
#line 1501 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 341:
#line 1504 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 342:
#line 1505 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 343:
#line 1508 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1509 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 345:
#line 1512 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 346:
#line 1513 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 347:
#line 1514 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 350:
#line 1521 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 351:
#line 1522 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 352:
#line 1527 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 353:
#line 1529 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 354:
#line 1531 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 356:
#line 1535 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 357:
#line 1536 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 358:
#line 1539 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1540 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 360:
#line 1543 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 361:
#line 1548 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 362:
#line 1558 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 363:
#line 1565 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 364:
#line 1566 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 365:
#line 1567 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 366:
#line 1568 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 367:
#line 1573 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 368:
#line 1577 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 369:
#line 1579 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 372:
#line 1585 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 373:
#line 1590 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 374:
#line 1597 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 375:
#line 1604 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 377:
#line 1616 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 378:
#line 1617 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 379:
#line 1622 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 380:
#line 1629 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 381:
#line 1636 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 382:
#line 1644 "parser/evoparser.y"
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
#line 1654 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1662 "parser/evoparser.y"
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
#line 1672 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 386:
#line 1680 "parser/evoparser.y"
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
#line 1689 "parser/evoparser.y"
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
#line 1698 "parser/evoparser.y"
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
#line 1708 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 390:
#line 1716 "parser/evoparser.y"
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
#line 1725 "parser/evoparser.y"
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
#line 1734 "parser/evoparser.y"
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
#line 1744 "parser/evoparser.y"
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
#line 1753 "parser/evoparser.y"
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
#line 1770 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 396:
#line 1778 "parser/evoparser.y"
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
#line 1789 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 398:
#line 1791 "parser/evoparser.y"
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
#line 1804 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 400:
#line 1805 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 401:
#line 1808 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 402:
#line 1810 "parser/evoparser.y"
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
#line 1822 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 404:
#line 1832 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 405:
#line 1837 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 406:
#line 1842 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 407:
#line 1848 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 408:
#line 1855 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 409:
#line 1862 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 410:
#line 1869 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 411:
#line 1879 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 412:
#line 1886 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 413:
#line 1895 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 414:
#line 1902 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 415:
#line 1908 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 416:
#line 1916 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 417:
#line 1922 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 419:
#line 1930 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 420:
#line 1931 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 421:
#line 1932 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 422:
#line 1933 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 423:
#line 1949 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 424:
#line 1950 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1951 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 426:
#line 1960 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 427:
#line 1961 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1966 "parser/evoparser.y"
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
#line 1976 "parser/evoparser.y"
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
#line 1991 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 431:
#line 1992 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 432:
#line 1997 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 433:
#line 2005 "parser/evoparser.y"
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
#line 2014 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 435:
#line 2036 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 436:
#line 2037 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 437:
#line 2038 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 2043 "parser/evoparser.y"
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
#line 2060 "parser/evoparser.y"
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
#line 2081 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 441:
#line 2082 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 442:
#line 2088 "parser/evoparser.y"
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
#line 2097 "parser/evoparser.y"
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
#line 2111 "parser/evoparser.y"
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
#line 2120 "parser/evoparser.y"
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
#line 2145 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 447:
#line 2146 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 448:
#line 2147 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2148 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2149 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 451:
#line 2150 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 2151 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 2156 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 454:
#line 2163 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 455:
#line 2174 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 460:
#line 2188 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 461:
#line 2190 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 462:
#line 2195 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 463:
#line 2203 "parser/evoparser.y"
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
#line 2212 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 465:
#line 2224 "parser/evoparser.y"
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
#line 2236 "parser/evoparser.y"
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
#line 2250 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 468:
#line 2251 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 469:
#line 2257 "parser/evoparser.y"
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
#line 2271 "parser/evoparser.y"
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
#line 2281 "parser/evoparser.y"
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
#line 2295 "parser/evoparser.y"
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
#line 2309 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 474:
#line 2317 "parser/evoparser.y"
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
#line 2328 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 476:
#line 2334 "parser/evoparser.y"
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
#line 2345 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 478:
#line 2351 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 479:
#line 2358 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 480:
#line 2364 "parser/evoparser.y"
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
#line 2385 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 482:
#line 2386 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 483:
#line 2387 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 484:
#line 2388 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 485:
#line 2393 "parser/evoparser.y"
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
#line 2402 "parser/evoparser.y"
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
#line 2419 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        DropSubscriptionProcess(0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 488:
#line 2427 "parser/evoparser.y"
    {
        emit("DROP SUBSCRIPTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(5) - (5)].strval));
        DropSubscriptionProcess(1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 489:
#line 2438 "parser/evoparser.y"
    {
        emit("RESUME SUBSCRIPTION %s", (yyvsp[(3) - (3)].strval));
        ResetSubscriptionOpts();
        SetSubscriptionName((yyvsp[(3) - (3)].strval));
        ResumeSubscriptionProcess();
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 490:
#line 2449 "parser/evoparser.y"
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
#line 2461 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 492:
#line 2468 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 493:
#line 2477 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 494:
#line 2485 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 495:
#line 2491 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 497:
#line 2508 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 498:
#line 2512 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 499:
#line 2521 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 501:
#line 2536 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 502:
#line 2540 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 503:
#line 2545 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 504:
#line 2552 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 505:
#line 2557 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 506:
#line 2564 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 507:
#line 2568 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 508:
#line 2569 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 509:
#line 2575 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 510:
#line 2587 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 511:
#line 2596 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 512:
#line 2597 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 513:
#line 2598 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 514:
#line 2602 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 515:
#line 2603 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 516:
#line 2604 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 517:
#line 2605 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 518:
#line 2606 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 519:
#line 2607 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 522:
#line 2616 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 523:
#line 2617 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 525:
#line 2622 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 527:
#line 2627 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 528:
#line 2632 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 529:
#line 2639 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 530:
#line 2648 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 531:
#line 2654 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 532:
#line 2660 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 533:
#line 2667 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 534:
#line 2673 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 535:
#line 2680 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 536:
#line 2686 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 537:
#line 2692 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 538:
#line 2698 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 539:
#line 2704 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 540:
#line 2710 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 541:
#line 2716 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 542:
#line 2722 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 543:
#line 2728 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 544:
#line 2734 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 545:
#line 2740 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 546:
#line 2746 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 547:
#line 2752 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 548:
#line 2758 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 549:
#line 2764 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 550:
#line 2770 "parser/evoparser.y"
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
#line 2783 "parser/evoparser.y"
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
#line 2793 "parser/evoparser.y"
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
#line 2803 "parser/evoparser.y"
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
#line 2814 "parser/evoparser.y"
    { ;}
    break;

  case 555:
#line 2815 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 556:
#line 2816 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 557:
#line 2820 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 558:
#line 2828 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 559:
#line 2834 "parser/evoparser.y"
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

  case 561:
#line 2847 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 562:
#line 2847 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 565:
#line 2855 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 566:
#line 2856 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 567:
#line 2857 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 568:
#line 2861 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 569:
#line 2862 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 570:
#line 2863 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 571:
#line 2867 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 572:
#line 2875 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 573:
#line 2884 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 574:
#line 2885 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 575:
#line 2886 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 576:
#line 2887 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 577:
#line 2888 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 581:
#line 2895 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 582:
#line 2899 "parser/evoparser.y"
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

  case 583:
#line 2909 "parser/evoparser.y"
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

  case 584:
#line 2921 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 585:
#line 2922 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 586:
#line 2922 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 587:
#line 2925 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 588:
#line 2926 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 589:
#line 2927 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 590:
#line 2928 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 591:
#line 2932 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 592:
#line 2935 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 593:
#line 2936 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 594:
#line 2937 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 595:
#line 2938 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 596:
#line 2944 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 597:
#line 2950 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 598:
#line 2955 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 599:
#line 2960 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 600:
#line 2964 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 601:
#line 2968 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 602:
#line 2970 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 605:
#line 2976 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 606:
#line 2977 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 607:
#line 2981 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 608:
#line 2982 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 609:
#line 2986 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 610:
#line 2987 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 611:
#line 2988 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 618:
#line 3003 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 619:
#line 3004 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 620:
#line 3005 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 621:
#line 3006 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 622:
#line 3007 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 623:
#line 3008 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 624:
#line 3009 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 625:
#line 3010 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 626:
#line 3015 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 627:
#line 3024 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 628:
#line 3031 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 629:
#line 3032 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 630:
#line 3033 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 631:
#line 3038 "parser/evoparser.y"
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

  case 632:
#line 3049 "parser/evoparser.y"
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

  case 633:
#line 3061 "parser/evoparser.y"
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

  case 634:
#line 3072 "parser/evoparser.y"
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

  case 635:
#line 3087 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 636:
#line 3091 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 637:
#line 3095 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 638:
#line 3096 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 639:
#line 3101 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 640:
#line 3103 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 641:
#line 3105 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 642:
#line 3107 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 643:
#line 3110 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 644:
#line 3111 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 645:
#line 3117 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 646:
#line 3122 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 647:
#line 3124 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 648:
#line 3126 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 649:
#line 3128 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 650:
#line 3130 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 651:
#line 3134 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 652:
#line 3138 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 653:
#line 3139 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 654:
#line 3144 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 655:
#line 3154 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 657:
#line 3167 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 658:
#line 3175 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 659:
#line 3183 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 661:
#line 3191 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 662:
#line 3192 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 663:
#line 3193 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 664:
#line 3194 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 665:
#line 3196 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 666:
#line 3198 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 667:
#line 3200 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 668:
#line 3205 "parser/evoparser.y"
    { emit("TABLE OPT WITH SYSTEM VERSIONING"); SetTableSystemVersioned(); ;}
    break;

  case 671:
#line 3213 "parser/evoparser.y"
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

  case 672:
#line 3228 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 673:
#line 3236 "parser/evoparser.y"
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

  case 674:
#line 3250 "parser/evoparser.y"
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

  case 675:
#line 3264 "parser/evoparser.y"
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

  case 676:
#line 3278 "parser/evoparser.y"
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

  case 677:
#line 3290 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 678:
#line 3291 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 679:
#line 3292 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 680:
#line 3295 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 681:
#line 3296 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 682:
#line 3299 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 683:
#line 3300 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 684:
#line 3301 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 685:
#line 3302 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 686:
#line 3303 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 687:
#line 3304 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 688:
#line 3305 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 689:
#line 3306 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 690:
#line 3308 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 691:
#line 3310 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 692:
#line 3312 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 693:
#line 3314 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 694:
#line 3316 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 695:
#line 3318 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 696:
#line 3321 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 697:
#line 3322 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 698:
#line 3325 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 699:
#line 3326 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 700:
#line 3329 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 701:
#line 3330 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 703:
#line 3334 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 704:
#line 3335 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 705:
#line 3336 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 706:
#line 3337 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 707:
#line 3338 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 708:
#line 3339 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 709:
#line 3340 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 710:
#line 3341 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 711:
#line 3342 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 712:
#line 3343 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 713:
#line 3344 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 714:
#line 3345 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 715:
#line 3346 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 716:
#line 3347 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 717:
#line 3348 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 718:
#line 3349 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 719:
#line 3350 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 720:
#line 3353 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 721:
#line 3354 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 722:
#line 3357 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 723:
#line 3359 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 724:
#line 3367 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 725:
#line 3368 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 727:
#line 3370 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 728:
#line 3371 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 729:
#line 3372 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 730:
#line 3373 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 731:
#line 3374 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 732:
#line 3375 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 733:
#line 3376 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 734:
#line 3377 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 735:
#line 3378 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 736:
#line 3385 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 737:
#line 3386 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 738:
#line 3387 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 739:
#line 3388 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 740:
#line 3389 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 741:
#line 3390 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 742:
#line 3391 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 743:
#line 3392 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 744:
#line 3393 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 745:
#line 3394 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 746:
#line 3395 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 747:
#line 3396 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 748:
#line 3397 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 749:
#line 3398 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 750:
#line 3399 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 751:
#line 3400 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 752:
#line 3401 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 753:
#line 3402 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 754:
#line 3403 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 755:
#line 3404 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 756:
#line 3405 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 757:
#line 3408 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 758:
#line 3409 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 759:
#line 3410 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 760:
#line 3413 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 761:
#line 3414 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 762:
#line 3417 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 763:
#line 3418 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 764:
#line 3419 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 766:
#line 3423 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 767:
#line 3424 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 768:
#line 3428 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 769:
#line 3429 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 770:
#line 3430 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 771:
#line 3431 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 772:
#line 3432 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 773:
#line 3433 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 774:
#line 3434 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 775:
#line 3435 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 776:
#line 3436 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 777:
#line 3437 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 778:
#line 3438 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 779:
#line 3439 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 780:
#line 3440 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 781:
#line 3441 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 782:
#line 3442 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 783:
#line 3443 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 784:
#line 3444 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 785:
#line 3445 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 786:
#line 3446 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 787:
#line 3447 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 788:
#line 3448 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 789:
#line 3449 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 790:
#line 3450 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 791:
#line 3451 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 792:
#line 3452 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 793:
#line 3453 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 794:
#line 3454 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 795:
#line 3455 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 796:
#line 3456 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 797:
#line 3457 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 798:
#line 3458 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 799:
#line 3459 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 800:
#line 3460 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 801:
#line 3461 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 802:
#line 3462 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 803:
#line 3465 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 804:
#line 3466 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 805:
#line 3470 "parser/evoparser.y"
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

  case 806:
#line 3482 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 807:
#line 3483 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 808:
#line 3484 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 809:
#line 3488 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 810:
#line 3491 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 811:
#line 3492 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 815:
#line 3496 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 816:
#line 3497 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 817:
#line 3505 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 818:
#line 3510 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 819:
#line 3516 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 820:
#line 3522 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 821:
#line 3529 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 822:
#line 3536 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 823:
#line 3542 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 824:
#line 3548 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 825:
#line 3555 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 830:
#line 3571 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 831:
#line 3572 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 832:
#line 3573 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 833:
#line 3574 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 834:
#line 3577 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 835:
#line 3578 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 836:
#line 3579 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 837:
#line 3580 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 838:
#line 3581 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 839:
#line 3582 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 840:
#line 3583 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 841:
#line 3584 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 842:
#line 3585 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 843:
#line 3586 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 852:
#line 3603 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 853:
#line 3604 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 974:
#line 3622 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 975:
#line 3629 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 976:
#line 3634 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 977:
#line 3640 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 978:
#line 3646 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 979:
#line 3652 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 980:
#line 3663 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 981:
#line 3668 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 982:
#line 3674 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 985:
#line 3685 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 986:
#line 3686 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 987:
#line 3687 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 988:
#line 3688 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 989:
#line 3689 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 990:
#line 3690 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 991:
#line 3691 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 992:
#line 3698 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 993:
#line 3703 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 994:
#line 3709 "parser/evoparser.y"
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

  case 995:
#line 3724 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 996:
#line 3725 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 997:
#line 3728 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 998:
#line 3729 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 999:
#line 3730 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 1000:
#line 3731 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 1001:
#line 3734 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 1002:
#line 3739 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1003:
#line 3745 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1004:
#line 3754 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1005:
#line 3762 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 1006:
#line 3772 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 1007:
#line 3777 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 1010:
#line 3790 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1011:
#line 3791 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1012:
#line 3792 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 1013:
#line 3793 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1014:
#line 3794 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1015:
#line 3795 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1016:
#line 3796 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1017:
#line 3797 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1018:
#line 3800 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1019:
#line 3805 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1020:
#line 3811 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1021:
#line 3821 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1022:
#line 3828 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1023:
#line 3835 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1024:
#line 3843 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1026:
#line 3853 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1028:
#line 3857 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1029:
#line 3858 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12540 "parser/evoparser.tab.c"
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


#line 3861 "parser/evoparser.y"

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
