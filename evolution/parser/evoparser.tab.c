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
     FHNSW_HYBRID_EXPLAIN = 639
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




/* Copy the first part of user declarations.  */
#line 4 "parser/evoparser.y"

	#define _CRT_SECURE_NO_WARNINGS
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdio.h>
	#include "../db/database.h"
	#include "../db/expression.h"

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
#line 70 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 935 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 948 "parser/evoparser.tab.c"

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
#define YYFINAL  102
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13801

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  402
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  196
/* YYNRULES -- Number of rules.  */
#define YYNRULES  960
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2404

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   639

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     397,   398,    28,    26,   399,    27,   396,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   395,
       2,   401,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   400,    32,     2,     2,     2,     2,     2,
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394
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
     232,   237,   244,   249,   256,   260,   267,   274,   281,   288,
     293,   298,   303,   307,   311,   322,   335,   348,   349,   351,
     352,   359,   360,   368,   369,   376,   377,   385,   386,   392,
     397,   402,   407,   412,   417,   422,   427,   432,   439,   440,
     450,   451,   461,   462,   472,   473,   484,   485,   496,   497,
     508,   509,   520,   521,   532,   533,   544,   545,   556,   557,
     570,   571,   586,   587,   602,   603,   614,   615,   628,   629,
     644,   645,   660,   661,   672,   673,   683,   684,   694,   703,
     710,   717,   726,   731,   739,   746,   751,   756,   761,   768,
     777,   784,   791,   798,   807,   816,   821,   828,   835,   842,
     847,   852,   857,   864,   869,   876,   881,   888,   892,   897,
     902,   907,   911,   915,   922,   927,   932,   937,   942,   947,
     952,   959,   964,   969,   974,   979,   984,   989,   994,   999,
    1008,  1017,  1026,  1033,  1040,  1049,  1058,  1065,  1076,  1081,
    1088,  1097,  1102,  1107,  1112,  1119,  1128,  1132,  1139,  1146,
    1153,  1160,  1169,  1173,  1182,  1193,  1197,  1201,  1205,  1209,
    1213,  1215,  1217,  1222,  1229,  1231,  1233,  1235,  1242,  1249,
    1253,  1257,  1261,  1265,  1269,  1273,  1277,  1281,  1285,  1290,
    1297,  1301,  1307,  1312,  1318,  1322,  1327,  1331,  1336,  1338,
    1340,  1342,  1344,  1346,  1350,  1363,  1376,  1377,  1380,  1381,
    1386,  1389,  1394,  1395,  1397,  1399,  1400,  1403,  1404,  1407,
    1408,  1412,  1414,  1418,  1419,  1423,  1426,  1431,  1432,  1436,
    1438,  1442,  1445,  1450,  1453,  1454,  1457,  1462,  1467,  1468,
    1471,  1474,  1479,  1484,  1485,  1488,  1490,  1494,  1495,  1498,
    1501,  1504,  1507,  1510,  1513,  1516,  1519,  1521,  1525,  1527,
    1530,  1533,  1535,  1536,  1538,  1542,  1544,  1546,  1550,  1555,
    1561,  1565,  1569,  1574,  1581,  1591,  1595,  1596,  1602,  1604,
    1605,  1611,  1615,  1621,  1628,  1634,  1635,  1637,  1639,  1640,
    1642,  1644,  1646,  1649,  1652,  1653,  1654,  1656,  1659,  1664,
    1671,  1678,  1685,  1686,  1689,  1690,  1692,  1696,  1700,  1702,
    1711,  1714,  1717,  1720,  1721,  1728,  1731,  1736,  1737,  1740,
    1748,  1750,  1755,  1762,  1763,  1765,  1767,  1769,  1778,  1788,
    1799,  1809,  1821,  1832,  1845,  1857,  1871,  1881,  1893,  1904,
    1917,  1929,  1942,  1955,  1970,  1971,  1973,  1974,  1979,  1981,
    1985,  1989,  1991,  1995,  1997,  2002,  2007,  2012,  2019,  2021,
    2025,  2028,  2032,  2038,  2040,  2044,  2045,  2048,  2051,  2055,
    2059,  2061,  2063,  2065,  2068,  2072,  2075,  2078,  2081,  2086,
    2088,  2092,  2094,  2099,  2106,  2107,  2112,  2117,  2120,  2121,
    2126,  2134,  2139,  2141,  2145,  2147,  2149,  2151,  2162,  2163,
    2166,  2169,  2170,  2173,  2176,  2179,  2182,  2185,  2186,  2189,
    2191,  2195,  2196,  2201,  2202,  2208,  2214,  2225,  2236,  2254,
    2267,  2287,  2299,  2306,  2315,  2322,  2329,  2336,  2346,  2353,
    2359,  2368,  2376,  2386,  2395,  2406,  2416,  2424,  2432,  2433,
    2435,  2438,  2440,  2451,  2458,  2459,  2460,  2466,  2467,  2472,
    2473,  2477,  2482,  2485,  2486,  2492,  2496,  2502,  2503,  2506,
    2509,  2512,  2515,  2517,  2518,  2519,  2523,  2525,  2529,  2533,
    2534,  2541,  2543,  2545,  2549,  2553,  2561,  2565,  2569,  2575,
    2581,  2583,  2592,  2600,  2608,  2610,  2611,  2619,  2620,  2624,
    2626,  2630,  2632,  2634,  2636,  2638,  2640,  2641,  2643,  2648,
    2652,  2654,  2658,  2661,  2664,  2667,  2669,  2672,  2675,  2678,
    2680,  2682,  2692,  2693,  2696,  2699,  2703,  2709,  2715,  2723,
    2729,  2731,  2736,  2741,  2745,  2751,  2755,  2761,  2762,  2765,
    2767,  2773,  2781,  2789,  2799,  2811,  2813,  2816,  2820,  2822,
    2833,  2834,  2839,  2851,  2870,  2871,  2876,  2880,  2886,  2892,
    2902,  2913,  2921,  2923,  2927,  2937,  2947,  2957,  2964,  2976,
    2985,  2986,  2988,  2991,  2993,  2997,  3003,  3011,  3016,  3021,
    3027,  3033,  3038,  3045,  3057,  3071,  3085,  3101,  3106,  3113,
    3115,  3119,  3121,  3125,  3127,  3131,  3132,  3137,  3143,  3148,
    3154,  3159,  3165,  3170,  3176,  3181,  3186,  3190,  3194,  3198,
    3201,  3205,  3210,  3215,  3217,  3221,  3222,  3227,  3228,  3232,
    3235,  3239,  3243,  3247,  3251,  3257,  3263,  3269,  3273,  3279,
    3282,  3290,  3296,  3304,  3310,  3313,  3317,  3320,  3324,  3327,
    3331,  3337,  3342,  3348,  3356,  3365,  3374,  3382,  3389,  3396,
    3402,  3403,  3407,  3413,  3414,  3416,  3417,  3420,  3423,  3424,
    3429,  3433,  3436,  3440,  3444,  3448,  3452,  3456,  3460,  3464,
    3468,  3472,  3476,  3478,  3480,  3482,  3484,  3486,  3490,  3496,
    3499,  3504,  3506,  3508,  3510,  3512,  3516,  3520,  3524,  3528,
    3534,  3540,  3542,  3544,  3546,  3551,  3555,  3557,  3561,  3565,
    3566,  3568,  3570,  3572,  3576,  3580,  3583,  3585,  3589,  3593,
    3597,  3599,  3610,  3620,  3633,  3645,  3658,  3670,  3685,  3699,
    3700,  3702,  3704,  3708,  3711,  3715,  3719,  3723,  3725,  3727,
    3729,  3731,  3733,  3735,  3737,  3739,  3741,  3743,  3744,  3747,
    3752,  3758,  3764,  3770,  3776,  3782,  3784,  3786,  3788,  3790,
    3792,  3794,  3796,  3798,  3800,  3802,  3804,  3806,  3808,  3810,
    3812,  3814,  3816,  3818,  3820,  3822,  3824,  3826,  3828,  3830,
    3832,  3834,  3836,  3838,  3840,  3842,  3844,  3846,  3848,  3850,
    3852,  3854,  3856,  3858,  3860,  3862,  3864,  3866,  3868,  3870,
    3872,  3874,  3876,  3878,  3880,  3882,  3884,  3886,  3888,  3890,
    3892,  3894,  3896,  3898,  3900,  3902,  3904,  3906,  3908,  3910,
    3912,  3914,  3916,  3918,  3920,  3922,  3924,  3926,  3928,  3930,
    3932,  3934,  3936,  3938,  3940,  3942,  3944,  3946,  3948,  3950,
    3952,  3954,  3956,  3958,  3960,  3962,  3964,  3966,  3968,  3970,
    3972,  3974,  3976,  3978,  3980,  3982,  3984,  3986,  3988,  3990,
    3992,  3994,  3996,  3998,  4000,  4002,  4004,  4006,  4008,  4010,
    4012,  4014,  4016,  4018,  4020,  4022,  4024,  4026,  4028,  4030,
    4034,  4040,  4044,  4050,  4052,  4057,  4063,  4065,  4069,  4071,
    4073,  4075,  4077,  4079,  4081,  4083,  4085,  4099,  4101,  4103,
    4105,  4107,  4109,  4111,  4115,  4121,  4126,  4131,  4133,  4139,
    4140,  4143,  4147,  4150,  4154,  4157,  4160,  4163,  4165,  4168,
    4170,  4174,  4180,  4185,  4190,  4197,  4204,  4205,  4208,  4211,
    4213
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     403,     0,    -1,   442,   395,    -1,   442,   395,   403,    -1,
       3,    -1,     3,   396,     3,    -1,    89,   396,     3,    -1,
     183,   397,     3,   398,    91,   397,     4,   398,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   404,    26,   404,    -1,   404,    27,   404,    -1,   404,
      28,   404,    -1,   404,    29,   404,    -1,   404,    30,   404,
      -1,   404,    31,   404,    -1,    27,   404,    -1,   397,   404,
     398,    -1,   404,    12,   404,    -1,   404,    10,   404,    -1,
     404,    11,   404,    -1,   404,    23,   404,    -1,   404,    24,
     404,    -1,   404,    32,   404,    -1,   404,    25,   404,    -1,
     404,    34,   404,    -1,   404,    33,   404,    -1,    18,   404,
      -1,    17,   404,    -1,   404,    20,   404,    -1,    -1,   404,
      20,   397,   405,   443,   398,    -1,    -1,   404,    20,    47,
     397,   406,   443,   398,    -1,    -1,   404,    20,   232,   397,
     407,   443,   398,    -1,    -1,   404,    20,    40,   397,   408,
     443,   398,    -1,   404,    20,    47,   397,   412,   398,    -1,
     404,    20,   232,   397,   412,   398,    -1,   404,    15,   193,
      -1,   404,    15,    18,   193,    -1,   404,    15,     6,    -1,
     404,    15,    18,     6,    -1,     8,     9,   404,    -1,   404,
      19,   404,    50,   404,    -1,   404,    18,    19,   404,    50,
     404,    -1,   404,    -1,   404,   399,   409,    -1,   404,    -1,
     404,   399,   410,    -1,    -1,   263,    36,   411,   410,   400,
      -1,   263,    36,   400,    -1,   404,    36,   404,   400,    -1,
     404,    -1,   380,   397,   404,   398,    -1,   380,   397,   404,
     399,   404,   398,    -1,   381,   397,   404,   398,    -1,   382,
     397,   404,   399,   404,   398,    -1,   383,   397,   398,    -1,
     384,   397,   404,   399,   404,   398,    -1,   385,   397,   404,
     399,   404,   398,    -1,   386,   397,   404,   399,   404,   398,
      -1,   387,   397,   404,   399,   404,   398,    -1,   388,   397,
     404,   398,    -1,   389,   397,   404,   398,    -1,   390,   397,
     404,   398,    -1,   404,    22,   404,    -1,   404,    21,   404,
      -1,   392,   397,   404,   399,   404,   399,   404,   399,     5,
     398,    -1,   393,   397,   404,   399,   404,   399,   404,   399,
       5,   399,     4,   398,    -1,   394,   397,   404,   399,   404,
     399,   404,   399,     5,   399,     4,   398,    -1,    -1,   409,
      -1,    -1,   404,    16,   397,   414,   409,   398,    -1,    -1,
     404,    18,    16,   397,   415,   409,   398,    -1,    -1,   404,
      16,   397,   416,   443,   398,    -1,    -1,   404,    18,    16,
     397,   417,   443,   398,    -1,    -1,   281,   397,   418,   443,
     398,    -1,     3,   397,   413,   398,    -1,   322,   397,    28,
     398,    -1,   322,   397,   404,   398,    -1,   323,   397,   404,
     398,    -1,   324,   397,   404,   398,    -1,   325,   397,   404,
     398,    -1,   326,   397,   404,   398,    -1,   320,   397,   404,
     398,    -1,   320,   397,   404,   321,     4,   398,    -1,    -1,
     342,   397,   398,   350,   397,   419,   450,   452,   398,    -1,
      -1,   343,   397,   398,   350,   397,   420,   450,   452,   398,
      -1,    -1,   344,   397,   398,   350,   397,   421,   450,   452,
     398,    -1,    -1,   323,   397,   404,   398,   350,   397,   422,
     450,   452,   398,    -1,    -1,   322,   397,    28,   398,   350,
     397,   423,   450,   452,   398,    -1,    -1,   322,   397,   404,
     398,   350,   397,   424,   450,   452,   398,    -1,    -1,   324,
     397,   404,   398,   350,   397,   425,   450,   452,   398,    -1,
      -1,   325,   397,   404,   398,   350,   397,   426,   450,   452,
     398,    -1,    -1,   326,   397,   404,   398,   350,   397,   427,
     450,   452,   398,    -1,    -1,   345,   397,   404,   398,   350,
     397,   428,   450,   452,   398,    -1,    -1,   345,   397,   404,
     399,     5,   398,   350,   397,   429,   450,   452,   398,    -1,
      -1,   345,   397,   404,   399,     5,   399,     4,   398,   350,
     397,   430,   450,   452,   398,    -1,    -1,   345,   397,   404,
     399,     5,   399,     5,   398,   350,   397,   431,   450,   452,
     398,    -1,    -1,   346,   397,   404,   398,   350,   397,   432,
     450,   452,   398,    -1,    -1,   346,   397,   404,   399,     5,
     398,   350,   397,   433,   450,   452,   398,    -1,    -1,   346,
     397,   404,   399,     5,   399,     4,   398,   350,   397,   434,
     450,   452,   398,    -1,    -1,   346,   397,   404,   399,     5,
     399,     5,   398,   350,   397,   435,   450,   452,   398,    -1,
      -1,   347,   397,     5,   398,   350,   397,   436,   450,   452,
     398,    -1,    -1,   348,   397,   398,   350,   397,   437,   450,
     452,   398,    -1,    -1,   349,   397,   398,   350,   397,   438,
     450,   452,   398,    -1,   282,   397,   404,   399,   404,   399,
     404,   398,    -1,   282,   397,   404,   399,   404,   398,    -1,
     282,   397,   404,   136,   404,   398,    -1,   282,   397,   404,
     136,   404,   140,   404,   398,    -1,   283,   397,   404,   398,
      -1,   283,   397,   439,   404,   136,   404,   398,    -1,   283,
     397,   439,   136,   404,   398,    -1,   327,   397,   404,   398,
      -1,   328,   397,   404,   398,    -1,   329,   397,   404,   398,
      -1,   330,   397,   404,   399,   404,   398,    -1,   331,   397,
     404,   399,   404,   399,   404,   398,    -1,   332,   397,   404,
     399,   404,   398,    -1,   294,   397,   404,   399,   404,   398,
      -1,   295,   397,   404,   399,   404,   398,    -1,   296,   397,
     404,   399,   404,   399,   404,   398,    -1,   297,   397,   404,
     399,   404,   399,   404,   398,    -1,   298,   397,   404,   398,
      -1,   299,   397,   404,   399,   404,   398,    -1,   300,   397,
     404,   399,   404,   398,    -1,   301,   397,   404,   399,   404,
     398,    -1,   302,   397,   404,   398,    -1,   303,   397,   404,
     398,    -1,   304,   397,   404,   398,    -1,   305,   397,   404,
     399,   404,   398,    -1,   305,   397,   404,   398,    -1,   306,
     397,   404,   399,   404,   398,    -1,   307,   397,   404,   398,
      -1,   308,   397,   404,   399,   404,   398,    -1,   309,   397,
     398,    -1,   310,   397,   404,   398,    -1,   311,   397,   404,
     398,    -1,   312,   397,   404,   398,    -1,   313,   397,   398,
      -1,   293,   397,   398,    -1,   286,   397,   404,   399,   404,
     398,    -1,   287,   397,   404,   398,    -1,   288,   397,   404,
     398,    -1,   289,   397,   404,   398,    -1,   290,   397,   404,
     398,    -1,   291,   397,   404,   398,    -1,   292,   397,   404,
     398,    -1,   352,   397,   404,   399,   404,   398,    -1,   353,
     397,   404,   398,    -1,   354,   397,   404,   398,    -1,   355,
     397,   404,   398,    -1,   356,   397,   404,   398,    -1,   357,
     397,   404,   398,    -1,   358,   397,   404,   398,    -1,   359,
     397,   404,   398,    -1,   360,   397,   404,   398,    -1,   361,
     397,   404,   399,   404,   399,   404,   398,    -1,   362,   397,
     404,   399,   404,   399,   404,   398,    -1,   363,   397,   404,
     399,   404,   399,   404,   398,    -1,   364,   397,   404,   399,
     404,   398,    -1,   365,   397,   404,   399,   404,   398,    -1,
     366,   397,   404,   399,   404,   399,   404,   398,    -1,   367,
     397,   404,   399,   404,   399,   404,   398,    -1,   368,   397,
     404,   399,   404,   398,    -1,   368,   397,   404,   399,   404,
     399,   404,   399,   404,   398,    -1,   369,   397,   404,   398,
      -1,   369,   397,   404,   399,   404,   398,    -1,   369,   397,
     404,   399,   404,   399,   404,   398,    -1,   370,   397,   404,
     398,    -1,   372,   397,   404,   398,    -1,   373,   397,   404,
     398,    -1,   374,   397,   404,   399,   404,   398,    -1,   374,
     397,   404,   399,   404,   399,   404,   398,    -1,   375,   397,
     398,    -1,   314,   397,   404,    51,   570,   398,    -1,   315,
     397,   404,   399,   570,   398,    -1,   316,   397,   404,   399,
     404,   398,    -1,   317,   397,   404,   399,   404,   398,    -1,
     318,   397,   404,   399,   404,   399,   404,   398,    -1,   404,
      15,   319,    -1,   330,   397,   404,   399,   404,   399,   404,
     398,    -1,   330,   397,   404,   399,   404,   399,   404,   399,
     404,   398,    -1,   333,   397,   398,    -1,   334,   397,   398,
      -1,   335,   397,   398,    -1,   336,   397,   398,    -1,   337,
     397,   398,    -1,   338,    -1,   339,    -1,   340,   397,   404,
     398,    -1,   341,   397,   404,   399,   404,   398,    -1,   178,
      -1,   254,    -1,    65,    -1,   284,   397,   404,   399,   440,
     398,    -1,   285,   397,   404,   399,   440,   398,    -1,   161,
     404,   278,    -1,   161,   404,   104,    -1,   161,   404,   105,
      -1,   161,   404,   109,    -1,   161,   404,   111,    -1,   161,
     404,   279,    -1,   161,   404,   145,    -1,   161,   404,   144,
      -1,   161,   404,   147,    -1,    77,   404,   441,   124,    -1,
      77,   404,   441,   125,   404,   124,    -1,    77,   441,   124,
      -1,    77,   441,   125,   404,   124,    -1,   275,   404,   253,
     404,    -1,   441,   275,   404,   253,   404,    -1,   404,    14,
     404,    -1,   404,    18,    14,   404,    -1,   404,    13,   404,
      -1,   404,    18,    13,   404,    -1,    72,    -1,    80,    -1,
      81,    -1,   225,    -1,   443,    -1,   241,   461,   462,    -1,
     241,   461,   462,   136,   465,   444,   445,   449,   454,   457,
     458,   459,    -1,   241,   461,   462,   159,     3,   136,   465,
     444,   445,   449,   454,   457,    -1,    -1,   274,   404,    -1,
      -1,   141,    63,   446,   448,    -1,   404,   447,    -1,   446,
     399,   404,   447,    -1,    -1,    49,    -1,   112,    -1,    -1,
     277,   214,    -1,    -1,   148,   404,    -1,    -1,   351,    63,
     451,    -1,     3,    -1,   451,   399,     3,    -1,    -1,   198,
      63,   453,    -1,     3,   447,    -1,   453,   399,     3,   447,
      -1,    -1,   198,    63,   455,    -1,   456,    -1,   455,   399,
     456,    -1,     3,   447,    -1,     3,   396,     3,   447,    -1,
       5,   447,    -1,    -1,   179,   404,    -1,   179,   404,   399,
     404,    -1,   179,   404,   181,   404,    -1,    -1,   140,   258,
      -1,   140,   230,    -1,   140,   258,   231,   180,    -1,   140,
     230,   231,   180,    -1,    -1,   159,   460,    -1,     3,    -1,
     460,   399,     3,    -1,    -1,   461,    40,    -1,   461,   106,
      -1,   461,   110,    -1,   461,   146,    -1,   461,   238,    -1,
     461,   226,    -1,   461,   234,    -1,   461,   233,    -1,   463,
      -1,   462,   399,   463,    -1,    28,    -1,   404,   464,    -1,
      51,     3,    -1,     3,    -1,    -1,   466,    -1,   465,   399,
     466,    -1,   467,    -1,   471,    -1,     3,   464,   478,    -1,
     173,     3,   464,   478,    -1,     3,   396,     3,   464,   478,
      -1,   481,   470,     3,    -1,   468,   470,     3,    -1,   381,
     397,   404,   398,    -1,   381,   397,   404,   398,   470,     3,
      -1,   381,   397,   404,   398,   470,     3,   397,     3,   398,
      -1,   397,   465,   398,    -1,    -1,   167,   397,   469,   443,
     398,    -1,    51,    -1,    -1,   466,   472,   163,   467,   476,
      -1,   466,   238,   467,    -1,   466,   238,   467,   197,   404,
      -1,   466,   474,   473,   163,   467,   477,    -1,   466,   190,
     475,   163,   467,    -1,    -1,   153,    -1,    76,    -1,    -1,
     196,    -1,   177,    -1,   215,    -1,   177,   473,    -1,   215,
     473,    -1,    -1,    -1,   477,    -1,   197,   404,    -1,   266,
     397,   460,   398,    -1,   267,   164,   479,   397,   480,   398,
      -1,   154,   164,   479,   397,   480,   398,    -1,   133,   164,
     479,   397,   480,   398,    -1,    -1,   140,   163,    -1,    -1,
       3,    -1,   480,   399,     3,    -1,   397,   443,   398,    -1,
     482,    -1,   107,   483,   136,     3,   444,   454,   457,   596,
      -1,   483,   176,    -1,   483,   203,    -1,   483,   154,    -1,
      -1,   107,   483,   484,   136,   465,   444,    -1,     3,   485,
      -1,   484,   399,     3,   485,    -1,    -1,   396,    28,    -1,
     107,   483,   136,   484,   266,   465,   444,    -1,   486,    -1,
     108,   252,     3,   487,    -1,   108,   252,   156,   281,     3,
     487,    -1,    -1,    74,    -1,   210,    -1,   488,    -1,    73,
     155,     3,   197,     3,   397,   493,   398,    -1,    73,   138,
     155,     3,   197,     3,   397,   493,   398,    -1,    73,   155,
     156,   281,     3,   197,     3,   397,   493,   398,    -1,    73,
     261,   155,     3,   197,     3,   397,   493,   398,    -1,    73,
     261,   155,   156,   281,     3,   197,     3,   397,   493,   398,
      -1,    73,   155,     3,   197,     3,   266,   268,   397,   493,
     398,    -1,    73,   155,   156,   281,     3,   197,     3,   266,
     268,   397,   493,   398,    -1,    73,   261,   155,     3,   197,
       3,   266,   268,   397,   493,   398,    -1,    73,   261,   155,
     156,   281,     3,   197,     3,   266,   268,   397,   493,   398,
      -1,    73,   155,    85,     3,   197,     3,   397,   493,   398,
      -1,    73,   155,    85,   156,   281,     3,   197,     3,   397,
     493,   398,    -1,    73,   261,   155,    85,     3,   197,     3,
     397,   493,   398,    -1,    73,   261,   155,    85,   156,   281,
       3,   197,     3,   397,   493,   398,    -1,    73,   155,    85,
       3,   197,     3,   266,   268,   397,   493,   398,    -1,    73,
     261,   155,    85,     3,   197,     3,   266,   268,   397,   493,
     398,    -1,    73,   155,     3,   197,     3,   266,   391,   397,
       3,   489,   398,   490,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   391,   397,     3,   489,   398,   490,    -1,
      -1,     3,    -1,    -1,   277,   397,   491,   398,    -1,   492,
      -1,   491,   399,   492,    -1,     3,    20,     5,    -1,     3,
      -1,   493,   399,     3,    -1,   494,    -1,   327,   397,     3,
     398,    -1,   328,   397,     3,   398,    -1,   329,   397,     3,
     398,    -1,   330,   397,     3,   399,     3,   398,    -1,   495,
      -1,   108,   155,     3,    -1,   496,   498,    -1,   255,   252,
       3,    -1,   255,   252,     3,   399,   497,    -1,     3,    -1,
     497,   399,     3,    -1,    -1,   498,    74,    -1,   498,   210,
      -1,   498,    55,    53,    -1,   498,    54,    53,    -1,   499,
      -1,   500,    -1,   501,    -1,   168,     3,    -1,   168,     3,
     171,    -1,   170,     3,    -1,   170,    28,    -1,   169,     3,
      -1,   169,     3,   399,     4,    -1,   502,    -1,   206,   252,
       3,    -1,   503,    -1,   505,     3,   504,   506,    -1,   505,
       3,   396,     3,   504,   506,    -1,    -1,   277,    44,     5,
      45,    -1,   277,    44,     5,    46,    -1,    41,   252,    -1,
      -1,   258,    42,   197,   507,    -1,   258,    42,   197,   507,
     277,     5,    43,    -1,   108,    42,   197,   507,    -1,     3,
      -1,   507,   399,     3,    -1,   516,    -1,   508,    -1,   515,
      -1,    73,   221,     3,   197,     3,   509,   510,   511,   513,
     514,    -1,    -1,    51,   223,    -1,    51,   224,    -1,    -1,
     140,    40,    -1,   140,   241,    -1,   140,   157,    -1,   140,
     258,    -1,   140,   107,    -1,    -1,   245,   512,    -1,     3,
      -1,   512,   399,     3,    -1,    -1,   266,   397,   404,   398,
      -1,    -1,   277,    78,   397,   404,   398,    -1,   108,   221,
       3,   197,     3,    -1,    37,   252,     3,    38,    71,     3,
      78,   397,   404,   398,    -1,    37,   252,     3,    38,    71,
       3,   261,   397,   563,   398,    -1,    37,   252,     3,    38,
      71,     3,   134,   164,   397,   560,   398,   207,     3,   397,
     561,   398,   562,    -1,    37,   252,     3,    38,    71,     3,
      78,   397,   404,   398,    18,   269,    -1,    37,   252,     3,
      38,    71,     3,   134,   164,   397,   560,   398,   207,     3,
     397,   561,   398,   562,    18,   269,    -1,    37,   252,     3,
      38,    71,     3,   201,   164,   397,   559,   398,    -1,    37,
     252,     3,   108,    71,     3,    -1,    37,   252,     3,   208,
      71,     3,   245,     3,    -1,    37,   252,     3,   120,    71,
       3,    -1,    37,   252,     3,   100,    71,     3,    -1,    37,
     252,     3,   269,    71,     3,    -1,    37,   252,     3,    38,
      84,     3,   570,   565,   517,    -1,    37,   252,     3,   108,
      84,     3,    -1,    37,   252,     3,   108,     3,    -1,    37,
     252,     3,   208,    84,     3,   245,     3,    -1,    37,   252,
       3,   208,     3,   245,     3,    -1,    37,   252,     3,   187,
      84,     3,   570,   565,   517,    -1,    37,   252,     3,   187,
       3,   570,   565,   517,    -1,    37,   252,     3,    75,    84,
       3,     3,   570,   565,   517,    -1,    37,   252,     3,    75,
       3,     3,   570,   565,   517,    -1,    37,   252,     3,   120,
     217,     3,   222,    -1,    37,   252,     3,   100,   217,     3,
     222,    -1,    -1,   130,    -1,    39,     3,    -1,   518,    -1,
     157,   526,   527,     3,   528,   271,   530,   519,   521,   596,
      -1,   157,   526,   527,     3,   528,   443,    -1,    -1,    -1,
     199,   164,   258,   520,   525,    -1,    -1,   197,    88,   522,
     523,    -1,    -1,   397,     3,   398,    -1,   397,     3,   399,
       3,    -1,   101,    90,    -1,    -1,   101,   258,   524,   240,
     525,    -1,     3,    20,   404,    -1,   525,   399,     3,    20,
     404,    -1,    -1,   526,   176,    -1,   526,   103,    -1,   526,
     146,    -1,   526,   154,    -1,   159,    -1,    -1,    -1,   397,
     529,   398,    -1,     3,    -1,   529,   399,     3,    -1,   397,
     532,   398,    -1,    -1,   530,   399,   531,   397,   532,   398,
      -1,   404,    -1,   113,    -1,   532,   399,   404,    -1,   532,
     399,   113,    -1,   157,   526,   527,     3,   240,   533,   519,
      -1,     3,    20,   404,    -1,     3,    20,   113,    -1,   533,
     399,     3,    20,   404,    -1,   533,   399,     3,    20,   113,
      -1,   534,    -1,   216,   526,   527,     3,   528,   271,   530,
     519,    -1,   216,   526,   527,     3,   240,   533,   519,    -1,
     216,   526,   527,     3,   528,   443,   519,    -1,   535,    -1,
      -1,    86,     3,   536,   537,   539,   540,   541,    -1,    -1,
     397,   538,   398,    -1,     3,    -1,   538,   399,     3,    -1,
     136,    -1,   245,    -1,     4,    -1,   236,    -1,   237,    -1,
      -1,   542,    -1,   277,   397,   542,   398,    -1,   397,   542,
     398,    -1,   543,    -1,   542,   399,   543,    -1,   135,    87,
      -1,   135,   249,    -1,    99,     4,    -1,   143,    -1,   143,
       6,    -1,   193,     4,    -1,   242,     4,    -1,    87,    -1,
     544,    -1,   258,   545,   465,   240,   546,   444,   454,   457,
     596,    -1,    -1,   526,   176,    -1,   526,   154,    -1,     3,
      20,   404,    -1,     3,   396,     3,    20,   404,    -1,   546,
     399,     3,    20,   404,    -1,   546,   399,     3,   396,     3,
      20,   404,    -1,   208,   252,     3,   245,     3,    -1,   547,
      -1,    73,    95,   548,     3,    -1,    73,   227,   548,     3,
      -1,   108,    95,     3,    -1,   108,    95,   156,   281,     3,
      -1,   108,   227,     3,    -1,   108,   227,   156,   281,     3,
      -1,    -1,   156,   281,    -1,   549,    -1,    73,   102,     3,
      51,   570,    -1,    73,   102,     3,    51,   570,   113,   404,
      -1,    73,   102,     3,    51,   570,    18,   193,    -1,    73,
     102,     3,    51,   570,    78,   397,   404,   398,    -1,    73,
     102,     3,    51,   570,    18,   193,    78,   397,   404,   398,
      -1,   550,    -1,   267,     3,    -1,   267,    95,     3,    -1,
     551,    -1,    73,   556,   252,   548,     3,   397,   557,   398,
     553,   552,    -1,    -1,   172,   397,     3,   398,    -1,    73,
     556,   252,   548,     3,   396,     3,   397,   557,   398,   553,
      -1,    73,   556,   252,   548,     3,   351,    94,     3,   140,
     271,   136,   397,     5,   398,   245,   397,     5,   398,    -1,
      -1,   553,    48,    20,     5,    -1,   553,    48,     5,    -1,
     553,   197,     3,   107,     3,    -1,   553,   197,     3,   248,
       3,    -1,   553,   228,    63,   268,   397,     3,   398,   229,
       5,    -1,   553,   228,    63,   204,   397,     3,   398,   397,
     554,   398,    -1,   553,   351,    63,   204,   397,     3,   398,
      -1,   555,    -1,   554,   399,   555,    -1,   228,     3,   271,
     174,   250,     4,   197,   191,     5,    -1,   228,     3,   271,
     174,   250,   184,   197,   191,     5,    -1,    73,   556,   252,
     548,     3,   397,   557,   398,   572,    -1,    73,   556,   252,
     548,     3,   572,    -1,    73,   556,   252,   548,     3,   396,
       3,   397,   557,   398,   572,    -1,    73,   556,   252,   548,
       3,   396,     3,   572,    -1,    -1,   246,    -1,   247,   246,
      -1,   558,    -1,   557,   399,   558,    -1,   201,   164,   397,
     559,   398,    -1,    71,     3,   201,   164,   397,   559,   398,
      -1,   164,   397,   460,   398,    -1,   155,   397,   460,   398,
      -1,   138,   155,   397,   460,   398,    -1,   138,   164,   397,
     460,   398,    -1,    78,   397,   404,   398,    -1,    71,     3,
      78,   397,   404,   398,    -1,   134,   164,   397,   560,   398,
     207,     3,   397,   561,   398,   562,    -1,   134,   164,   397,
     560,   398,   207,     3,   396,     3,   397,   561,   398,   562,
      -1,    71,     3,   134,   164,   397,   560,   398,   207,     3,
     397,   561,   398,   562,    -1,    71,     3,   134,   164,   397,
     560,   398,   207,     3,   396,     3,   397,   561,   398,   562,
      -1,   261,   397,   563,   398,    -1,    71,     3,   261,   397,
     563,   398,    -1,     3,    -1,   559,   399,     3,    -1,     3,
      -1,   560,   399,     3,    -1,     3,    -1,   561,   399,     3,
      -1,    -1,   562,   197,   107,    74,    -1,   562,   197,   107,
     240,   193,    -1,   562,   197,   107,   210,    -1,   562,   197,
     107,   240,   113,    -1,   562,   197,   258,    74,    -1,   562,
     197,   258,   240,   193,    -1,   562,   197,   258,   210,    -1,
     562,   197,   258,   240,   113,    -1,   562,   197,   107,   192,
      -1,   562,   197,   258,   192,    -1,   562,   183,   137,    -1,
     562,   183,   235,    -1,   562,   183,   200,    -1,   562,    97,
      -1,   562,    18,    97,    -1,   562,    97,   151,    98,    -1,
     562,    97,   151,   149,    -1,     3,    -1,   563,   399,     3,
      -1,    -1,   564,     3,   570,   565,    -1,    -1,   565,    18,
     193,    -1,   565,   193,    -1,   565,   113,     4,    -1,   565,
     113,     5,    -1,   565,   113,     7,    -1,   565,   113,     6,
      -1,   565,   113,   333,   397,   398,    -1,   565,   113,   334,
     397,   398,    -1,   565,   113,   335,   397,   398,    -1,   565,
     113,    72,    -1,   565,   113,   397,   404,   398,    -1,   565,
      48,    -1,   565,    48,   397,     5,   399,     5,   398,    -1,
     565,    48,   397,     5,   398,    -1,   565,    53,   397,     5,
     399,     5,   398,    -1,   565,    53,   397,     5,   398,    -1,
     565,    53,    -1,   565,   261,   164,    -1,   565,   261,    -1,
     565,   201,   164,    -1,   565,   164,    -1,   565,    79,     4,
      -1,   565,    78,   397,   404,   398,    -1,   565,    71,     3,
     261,    -1,   565,    71,     3,   201,   164,    -1,   565,    71,
       3,    78,   397,   404,   398,    -1,   565,    56,    52,    51,
     397,   404,   398,    57,    -1,   565,    56,    52,    51,   397,
     404,   398,    58,    -1,   565,    56,    52,    51,   397,   404,
     398,    -1,   565,    51,   397,   404,   398,    57,    -1,   565,
      51,   397,   404,   398,    58,    -1,   565,    51,   397,   404,
     398,    -1,    -1,   397,     5,   398,    -1,   397,     5,   399,
       5,   398,    -1,    -1,    64,    -1,    -1,   568,   259,    -1,
     568,   280,    -1,    -1,   569,    82,   240,     4,    -1,   569,
      83,     4,    -1,    67,   566,    -1,   244,   566,   568,    -1,
     239,   566,   568,    -1,   189,   566,   568,    -1,   160,   566,
     568,    -1,   152,   566,   568,    -1,    66,   566,   568,    -1,
     205,   566,   568,    -1,   114,   566,   568,    -1,   132,   566,
     568,    -1,   116,   566,   568,    -1,   117,    -1,   257,    -1,
     251,    -1,   115,    -1,   278,    -1,    82,   566,   569,    -1,
     270,   397,     5,   398,   569,    -1,    64,   566,    -1,   272,
     397,     5,   398,    -1,   256,    -1,    61,    -1,   188,    -1,
     182,    -1,   243,   567,   569,    -1,   249,   567,   569,    -1,
     185,   567,   569,    -1,   175,   567,   569,    -1,   123,   397,
     571,   398,   569,    -1,   240,   397,   571,   398,   569,    -1,
      62,    -1,   262,    -1,   264,    -1,   273,   397,     5,   398,
      -1,   570,    36,   400,    -1,     4,    -1,   571,   399,     4,
      -1,   573,   470,   443,    -1,    -1,   154,    -1,   216,    -1,
     574,    -1,   240,   227,     3,    -1,   240,   227,   113,    -1,
     240,   575,    -1,   576,    -1,   575,   399,   576,    -1,     8,
      20,   404,    -1,     8,     9,   404,    -1,   577,    -1,    73,
     202,     3,   397,   578,   398,    51,    60,   582,   124,    -1,
      73,   202,     3,   397,   578,   398,    60,   582,   124,    -1,
      73,    10,   216,   202,     3,   397,   578,   398,    51,    60,
     582,   124,    -1,    73,    10,   216,   202,     3,   397,   578,
     398,    60,   582,   124,    -1,    73,   139,     3,   397,   578,
     398,   213,   581,    51,    60,   582,   124,    -1,    73,   139,
       3,   397,   578,   398,   213,   581,    60,   582,   124,    -1,
      73,    10,   216,   139,     3,   397,   578,   398,   213,   581,
      51,    60,   582,   124,    -1,    73,    10,   216,   139,     3,
     397,   578,   398,   213,   581,    60,   582,   124,    -1,    -1,
     579,    -1,   580,    -1,   579,   399,   580,    -1,     3,   570,
      -1,    16,     3,   570,    -1,   195,     3,   570,    -1,   150,
       3,   570,    -1,   152,    -1,   160,    -1,   270,    -1,   249,
      -1,    62,    -1,   132,    -1,   114,    -1,    66,    -1,   117,
      -1,   251,    -1,    -1,   582,   583,    -1,   582,    60,   582,
     124,    -1,   582,   156,   582,   124,   156,    -1,   582,   276,
     582,   124,   276,    -1,   582,   166,   582,   124,   166,    -1,
     582,   131,   582,   124,   131,    -1,   582,    77,   582,   124,
      77,    -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,
       6,    -1,    20,    -1,    18,    -1,    10,    -1,    12,    -1,
      16,    -1,    50,    -1,   241,    -1,   157,    -1,   258,    -1,
     107,    -1,   136,    -1,   274,    -1,   240,    -1,   159,    -1,
     271,    -1,    73,    -1,   108,    -1,   252,    -1,   155,    -1,
     253,    -1,   125,    -1,   119,    -1,    96,    -1,   101,    -1,
      68,    -1,   211,    -1,   165,    -1,   162,    -1,    70,    -1,
     194,    -1,   129,    -1,    69,    -1,   142,    -1,   127,    -1,
     195,    -1,   150,    -1,   140,    -1,    54,    -1,   218,    -1,
     209,    -1,   126,    -1,   220,    -1,    59,    -1,   118,    -1,
     217,    -1,   219,    -1,    51,    -1,   197,    -1,   198,    -1,
      63,    -1,   141,    -1,   148,    -1,   179,    -1,   181,    -1,
     163,    -1,   177,    -1,   215,    -1,   153,    -1,   196,    -1,
     137,    -1,    76,    -1,   190,    -1,   266,    -1,   193,    -1,
     113,    -1,   201,    -1,   164,    -1,   261,    -1,    78,    -1,
     134,    -1,   207,    -1,    74,    -1,   210,    -1,   192,    -1,
     152,    -1,   160,    -1,   270,    -1,   249,    -1,    62,    -1,
     132,    -1,   114,    -1,    66,    -1,   117,    -1,   251,    -1,
     239,    -1,   116,    -1,    82,    -1,   262,    -1,    61,    -1,
     260,    -1,   122,    -1,   158,    -1,    40,    -1,   106,    -1,
     281,    -1,   275,    -1,   277,    -1,   202,    -1,   139,    -1,
     213,    -1,   397,    -1,   398,    -1,   399,    -1,   395,    -1,
     396,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
      30,    -1,    17,    -1,   401,    -1,   322,    -1,   323,    -1,
     324,    -1,   325,    -1,   326,    -1,     8,    -1,   584,    -1,
     108,   202,     3,    -1,   108,   202,   156,   281,     3,    -1,
     108,   139,     3,    -1,   108,   139,   156,   281,     3,    -1,
     585,    -1,    68,     3,   397,   398,    -1,    68,     3,   397,
     586,   398,    -1,   587,    -1,   586,   399,   587,    -1,     5,
      -1,     4,    -1,     7,    -1,   193,    -1,     6,    -1,     3,
      -1,     8,    -1,   588,    -1,    73,   219,     3,   589,   590,
     197,     3,   140,   118,   217,    60,   582,   124,    -1,    59,
      -1,    39,    -1,   157,    -1,   258,    -1,   107,    -1,   591,
      -1,   108,   219,     3,    -1,   108,   219,   156,   281,     3,
      -1,    37,   219,     3,   120,    -1,    37,   219,     3,   100,
      -1,   592,    -1,    73,   371,   548,     3,   593,    -1,    -1,
     593,   594,    -1,   376,   277,     5,    -1,   376,     5,    -1,
     377,    63,     5,    -1,   377,     5,    -1,   378,     5,    -1,
     184,     5,    -1,   379,    -1,    18,   379,    -1,   595,    -1,
     108,   371,     3,    -1,   108,   371,   156,   281,     3,    -1,
      37,   371,     3,   593,    -1,    37,   371,     3,    55,    -1,
      37,   371,     3,    55,   277,     5,    -1,    37,   371,     3,
     208,   245,     3,    -1,    -1,   212,    28,    -1,   212,   597,
      -1,     3,    -1,   597,   399,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   484,   484,   485,   490,   497,   498,   499,   513,   514,
     542,   550,   558,   564,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   587,
     588,   589,   590,   591,   597,   597,   606,   606,   608,   608,
     610,   610,   615,   617,   621,   622,   623,   624,   625,   628,
     629,   632,   641,   659,   668,   688,   688,   748,   757,   764,
     768,   770,   772,   777,   782,   790,   792,   794,   796,   798,
     800,   802,   804,   806,   808,   815,   826,   837,   838,   841,
     841,   842,   842,   843,   843,   851,   851,   859,   859,   870,
     874,   875,   876,   877,   878,   879,   880,   881,   885,   885,
     887,   887,   889,   889,   892,   892,   894,   894,   896,   896,
     898,   898,   900,   900,   902,   902,   905,   905,   907,   907,
     909,   909,   911,   911,   913,   913,   915,   915,   917,   917,
     919,   919,   922,   922,   924,   924,   926,   926,   930,   931,
     932,   933,   934,   935,   936,   937,   938,   939,   940,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   954,   955,   956,   957,   958,   959,   960,   961,
     962,   963,   965,   966,   967,   968,   969,   970,   971,   972,
     974,   975,   976,   977,   978,   979,   980,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   997,   998,   999,  1000,  1001,  1003,  1004,  1006,
    1007,  1008,  1010,  1011,  1012,  1013,  1020,  1027,  1034,  1038,
    1042,  1046,  1050,  1054,  1060,  1061,  1062,  1065,  1071,  1078,
    1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1089,  1091,
    1093,  1095,  1099,  1107,  1118,  1119,  1122,  1123,  1126,  1134,
    1142,  1150,  1164,  1174,  1175,  1188,  1204,  1205,  1206,  1207,
    1210,  1217,  1225,  1226,  1227,  1230,  1231,  1234,  1235,  1239,
    1240,  1243,  1245,  1249,  1250,  1253,  1255,  1259,  1260,  1263,
    1264,  1267,  1273,  1280,  1289,  1290,  1291,  1292,  1295,  1296,
    1297,  1298,  1299,  1302,  1303,  1306,  1307,  1310,  1311,  1312,
    1313,  1314,  1315,  1316,  1317,  1318,  1321,  1322,  1323,  1331,
    1337,  1338,  1339,  1342,  1343,  1346,  1347,  1351,  1359,  1369,
    1370,  1371,  1380,  1385,  1391,  1399,  1403,  1403,  1443,  1444,
    1448,  1450,  1452,  1454,  1456,  1460,  1461,  1462,  1465,  1466,
    1469,  1470,  1473,  1474,  1475,  1478,  1479,  1482,  1483,  1487,
    1489,  1491,  1493,  1496,  1497,  1500,  1501,  1504,  1508,  1518,
    1526,  1527,  1528,  1529,  1533,  1537,  1539,  1543,  1543,  1545,
    1550,  1557,  1564,  1576,  1577,  1578,  1582,  1589,  1596,  1604,
    1614,  1622,  1632,  1640,  1649,  1658,  1668,  1676,  1685,  1694,
    1704,  1713,  1730,  1738,  1750,  1751,  1765,  1766,  1769,  1770,
    1782,  1792,  1797,  1802,  1808,  1815,  1822,  1829,  1839,  1846,
    1855,  1862,  1868,  1876,  1882,  1890,  1891,  1892,  1893,  1894,
    1910,  1911,  1912,  1915,  1921,  1932,  1938,  1945,  1951,  1967,
    1974,  1983,  1991,  1997,  2012,  2014,  2018,  2027,  2040,  2042,
    2046,  2051,  2058,  2063,  2071,  2075,  2076,  2080,  2091,  2092,
    2093,  2097,  2098,  2099,  2100,  2101,  2102,  2105,  2107,  2111,
    2112,  2115,  2117,  2120,  2122,  2126,  2135,  2141,  2147,  2154,
    2160,  2167,  2173,  2179,  2185,  2191,  2197,  2203,  2209,  2215,
    2221,  2227,  2233,  2239,  2245,  2251,  2257,  2270,  2282,  2283,
    2284,  2287,  2295,  2301,  2314,  2315,  2315,  2319,  2320,  2323,
    2324,  2325,  2329,  2330,  2330,  2334,  2342,  2352,  2353,  2354,
    2355,  2356,  2359,  2359,  2362,  2363,  2366,  2376,  2389,  2390,
    2390,  2393,  2394,  2395,  2396,  2399,  2403,  2404,  2405,  2406,
    2412,  2415,  2421,  2426,  2432,  2436,  2436,  2441,  2442,  2444,
    2445,  2449,  2450,  2454,  2455,  2456,  2459,  2460,  2461,  2462,
    2466,  2467,  2471,  2472,  2473,  2474,  2475,  2476,  2477,  2478,
    2482,  2490,  2499,  2500,  2501,  2505,  2516,  2528,  2539,  2554,
    2559,  2563,  2564,  2568,  2570,  2572,  2574,  2578,  2579,  2585,
    2589,  2591,  2593,  2595,  2597,  2602,  2606,  2607,  2611,  2620,
    2633,  2634,  2642,  2650,  2658,  2659,  2660,  2661,  2662,  2663,
    2665,  2667,  2671,  2672,  2675,  2690,  2697,  2712,  2725,  2740,
    2753,  2754,  2755,  2758,  2759,  2762,  2763,  2764,  2765,  2766,
    2767,  2768,  2769,  2770,  2772,  2774,  2776,  2778,  2780,  2784,
    2785,  2788,  2789,  2792,  2793,  2796,  2797,  2798,  2799,  2800,
    2801,  2802,  2803,  2804,  2805,  2806,  2807,  2808,  2809,  2810,
    2811,  2812,  2813,  2816,  2817,  2820,  2820,  2830,  2831,  2832,
    2833,  2834,  2835,  2836,  2837,  2838,  2839,  2840,  2841,  2848,
    2849,  2850,  2851,  2852,  2853,  2854,  2855,  2856,  2857,  2858,
    2859,  2860,  2861,  2862,  2863,  2864,  2865,  2866,  2867,  2868,
    2871,  2872,  2873,  2876,  2877,  2880,  2881,  2882,  2885,  2886,
    2887,  2891,  2892,  2893,  2894,  2895,  2896,  2897,  2898,  2899,
    2900,  2901,  2902,  2903,  2904,  2905,  2906,  2907,  2908,  2909,
    2910,  2911,  2912,  2913,  2914,  2915,  2916,  2917,  2918,  2919,
    2920,  2921,  2922,  2923,  2924,  2925,  2928,  2929,  2932,  2945,
    2946,  2947,  2951,  2954,  2955,  2956,  2957,  2957,  2959,  2960,
    2968,  2972,  2978,  2984,  2991,  2998,  3004,  3010,  3017,  3026,
    3027,  3030,  3031,  3034,  3035,  3036,  3037,  3040,  3041,  3042,
    3043,  3044,  3045,  3046,  3047,  3048,  3049,  3056,  3057,  3058,
    3059,  3060,  3061,  3062,  3063,  3066,  3067,  3068,  3068,  3068,
    3069,  3069,  3069,  3069,  3069,  3069,  3070,  3070,  3070,  3070,
    3070,  3070,  3070,  3070,  3070,  3071,  3071,  3071,  3071,  3071,
    3071,  3071,  3072,  3072,  3072,  3072,  3073,  3073,  3073,  3073,
    3073,  3073,  3073,  3073,  3073,  3073,  3073,  3073,  3074,  3074,
    3074,  3074,  3074,  3074,  3074,  3074,  3075,  3075,  3075,  3075,
    3075,  3075,  3075,  3075,  3076,  3076,  3076,  3076,  3076,  3076,
    3076,  3076,  3076,  3077,  3077,  3077,  3077,  3077,  3077,  3077,
    3077,  3078,  3078,  3078,  3079,  3079,  3079,  3079,  3079,  3079,
    3079,  3079,  3080,  3080,  3080,  3080,  3080,  3080,  3080,  3081,
    3081,  3081,  3081,  3081,  3081,  3081,  3082,  3082,  3082,  3082,
    3083,  3083,  3083,  3083,  3083,  3083,  3083,  3083,  3083,  3083,
    3083,  3083,  3084,  3084,  3084,  3084,  3084,  3085,  3092,  3096,
    3102,  3108,  3114,  3126,  3130,  3136,  3144,  3145,  3148,  3149,
    3150,  3151,  3152,  3153,  3154,  3161,  3165,  3173,  3174,  3177,
    3178,  3179,  3182,  3186,  3192,  3201,  3209,  3220,  3224,  3233,
    3234,  3238,  3239,  3240,  3241,  3242,  3243,  3244,  3245,  3248,
    3252,  3258,  3268,  3275,  3282,  3290,  3300,  3301,  3302,  3305,
    3306
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
  "FHNSW_HYBRID_EXPLAIN", "';'", "'.'", "'('", "')'", "','", "']'", "'='",
  "$accept", "stmt_list", "expr", "@1", "@2", "@3", "@4", "val_list",
  "array_val_list", "@5", "any_array_arg", "opt_val_list", "@6", "@7",
  "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "@17",
  "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26", "@27",
  "@28", "@29", "@30", "trim_ltb", "interval_exp", "case_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_window_partition",
  "window_partition_list", "opt_window_orderby", "window_orderby_list",
  "opt_orderby", "orderby_list", "orderby_item", "opt_limit",
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
  "truncate_extra_tables", "opt_truncate_options", "listen_stmt",
  "unlisten_stmt", "notify_stmt", "reclaim_table_stmt",
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
     635,   636,   637,   638,   639,    59,    46,    40,    41,    44,
      93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   402,   403,   403,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   405,   404,   406,   404,   407,   404,
     408,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   409,   409,   410,   410,   411,   404,   404,   404,   412,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   413,   413,   414,
     404,   415,   404,   416,   404,   417,   404,   418,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   419,   404,
     420,   404,   421,   404,   422,   404,   423,   404,   424,   404,
     425,   404,   426,   404,   427,   404,   428,   404,   429,   404,
     430,   404,   431,   404,   432,   404,   433,   404,   434,   404,
     435,   404,   436,   404,   437,   404,   438,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   439,   439,   439,   404,   404,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   404,   404,
     404,   404,   441,   441,   404,   404,   404,   404,   404,   404,
     404,   404,   442,   443,   443,   443,   444,   444,   445,   445,
     446,   446,   447,   447,   447,   448,   448,   449,   449,   450,
     450,   451,   451,   452,   452,   453,   453,   454,   454,   455,
     455,   456,   456,   456,   457,   457,   457,   457,   458,   458,
     458,   458,   458,   459,   459,   460,   460,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   462,   462,   462,   463,
     464,   464,   464,   465,   465,   466,   466,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   469,   468,   470,   470,
     471,   471,   471,   471,   471,   472,   472,   472,   473,   473,
     474,   474,   475,   475,   475,   476,   476,   477,   477,   478,
     478,   478,   478,   479,   479,   480,   480,   481,   442,   482,
     483,   483,   483,   483,   482,   484,   484,   485,   485,   482,
     442,   486,   486,   487,   487,   487,   442,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   489,   489,   490,   490,   491,   491,
     492,   493,   493,   493,   494,   494,   494,   494,   442,   495,
     442,   496,   496,   497,   497,   498,   498,   498,   498,   498,
     442,   442,   442,   499,   499,   500,   500,   501,   501,   442,
     502,   442,   503,   503,   504,   504,   504,   505,   506,   506,
     506,   506,   507,   507,   442,   442,   442,   508,   509,   509,
     509,   510,   510,   510,   510,   510,   510,   511,   511,   512,
     512,   513,   513,   514,   514,   515,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   517,   517,
     517,   442,   518,   518,   519,   520,   519,   521,   521,   522,
     522,   522,   523,   524,   523,   525,   525,   526,   526,   526,
     526,   526,   527,   527,   528,   528,   529,   529,   530,   531,
     530,   532,   532,   532,   532,   518,   533,   533,   533,   533,
     442,   534,   534,   534,   442,   536,   535,   537,   537,   538,
     538,   539,   539,   540,   540,   540,   541,   541,   541,   541,
     542,   542,   543,   543,   543,   543,   543,   543,   543,   543,
     442,   544,   545,   545,   545,   546,   546,   546,   546,   442,
     442,   547,   547,   442,   442,   442,   442,   548,   548,   442,
     549,   549,   549,   549,   549,   442,   550,   550,   442,   551,
     552,   552,   551,   551,   553,   553,   553,   553,   553,   553,
     553,   553,   554,   554,   555,   555,   551,   551,   551,   551,
     556,   556,   556,   557,   557,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   559,
     559,   560,   560,   561,   561,   562,   562,   562,   562,   562,
     562,   562,   562,   562,   562,   562,   562,   562,   562,   562,
     562,   562,   562,   563,   563,   564,   558,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     566,   566,   566,   567,   567,   568,   568,   568,   569,   569,
     569,   570,   570,   570,   570,   570,   570,   570,   570,   570,
     570,   570,   570,   570,   570,   570,   570,   570,   570,   570,
     570,   570,   570,   570,   570,   570,   570,   570,   570,   570,
     570,   570,   570,   570,   570,   570,   571,   571,   572,   573,
     573,   573,   442,   574,   574,   574,   575,   575,   576,   576,
     442,   577,   577,   577,   577,   577,   577,   577,   577,   578,
     578,   579,   579,   580,   580,   580,   580,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   582,   582,   582,
     582,   582,   582,   582,   582,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   442,   584,
     584,   584,   584,   442,   585,   585,   586,   586,   587,   587,
     587,   587,   587,   587,   587,   442,   588,   589,   589,   590,
     590,   590,   442,   591,   591,   442,   442,   442,   592,   593,
     593,   594,   594,   594,   594,   594,   594,   594,   594,   442,
     595,   595,   442,   442,   442,   442,   596,   596,   596,   597,
     597
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
       4,     6,     4,     6,     3,     6,     6,     6,     6,     4,
       4,     4,     3,     3,    10,    12,    12,     0,     1,     0,
       6,     0,     7,     0,     6,     0,     7,     0,     5,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     0,     9,
       0,     9,     0,     9,     0,    10,     0,    10,     0,    10,
       0,    10,     0,    10,     0,    10,     0,    10,     0,    12,
       0,    14,     0,    14,     0,    10,     0,    12,     0,    14,
       0,    14,     0,    10,     0,     9,     0,     9,     8,     6,
       6,     8,     4,     7,     6,     4,     4,     4,     6,     8,
       6,     6,     6,     8,     8,     4,     6,     6,     6,     4,
       4,     4,     6,     4,     6,     4,     6,     3,     4,     4,
       4,     3,     3,     6,     4,     4,     4,     4,     4,     4,
       6,     4,     4,     4,     4,     4,     4,     4,     4,     8,
       8,     8,     6,     6,     8,     8,     6,    10,     4,     6,
       8,     4,     4,     4,     6,     8,     3,     6,     6,     6,
       6,     8,     3,     8,    10,     3,     3,     3,     3,     3,
       1,     1,     4,     6,     1,     1,     1,     6,     6,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       3,     5,     4,     5,     3,     4,     3,     4,     1,     1,
       1,     1,     1,     3,    12,    12,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     1,     3,     0,     3,     2,     4,     0,     3,     1,
       3,     2,     4,     2,     0,     2,     4,     4,     0,     2,
       2,     4,     4,     0,     2,     1,     3,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     1,     2,
       2,     1,     0,     1,     3,     1,     1,     3,     4,     5,
       3,     3,     4,     6,     9,     3,     0,     5,     1,     0,
       5,     3,     5,     6,     5,     0,     1,     1,     0,     1,
       1,     1,     2,     2,     0,     0,     1,     2,     4,     6,
       6,     6,     0,     2,     0,     1,     3,     3,     1,     8,
       2,     2,     2,     0,     6,     2,     4,     0,     2,     7,
       1,     4,     6,     0,     1,     1,     1,     8,     9,    10,
       9,    11,    10,    12,    11,    13,     9,    11,    10,    12,
      11,    12,    12,    14,     0,     1,     0,     4,     1,     3,
       3,     1,     3,     1,     4,     4,     4,     6,     1,     3,
       2,     3,     5,     1,     3,     0,     2,     2,     3,     3,
       1,     1,     1,     2,     3,     2,     2,     2,     4,     1,
       3,     1,     4,     6,     0,     4,     4,     2,     0,     4,
       7,     4,     1,     3,     1,     1,     1,    10,     0,     2,
       2,     0,     2,     2,     2,     2,     2,     0,     2,     1,
       3,     0,     4,     0,     5,     5,    10,    10,    17,    12,
      19,    11,     6,     8,     6,     6,     6,     9,     6,     5,
       8,     7,     9,     8,    10,     9,     7,     7,     0,     1,
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
      10,     7,     1,     3,     9,     9,     9,     6,    11,     8,
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
       1,     1,     1,     1,     1,     1,    13,     1,     1,     1,
       1,     1,     1,     3,     5,     4,     4,     1,     5,     0,
       2,     3,     2,     3,     2,     2,     2,     1,     2,     1,
       3,     5,     4,     4,     6,     6,     0,     2,     2,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   610,     0,   363,     0,   507,     0,
       0,     0,     0,     0,   507,     0,   297,     0,   562,     0,
       0,     0,   252,   358,   370,   376,   408,   415,   420,   421,
     422,   429,   431,     0,   445,   446,   444,   491,   530,   534,
     560,   570,   579,   585,   588,   742,   750,   908,   913,   925,
     932,   937,   949,     0,     0,     0,   437,     0,     0,   577,
       0,     0,     0,     0,     0,     0,     0,   577,   611,     0,
       0,   577,     0,   535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   513,   423,   427,   425,   426,     0,
       0,   513,     0,     0,   745,   746,     0,     0,     0,     0,
     586,     0,     1,     2,   410,   434,     0,     0,   939,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   612,     0,     0,   577,   537,   367,     0,
     362,   360,   361,     0,   573,     0,   911,     0,   409,   909,
       0,   933,     0,     0,   575,     0,   373,     0,   950,     0,
     509,   510,   511,   512,   508,     0,   424,     0,   430,     0,
       0,     0,     0,   743,   744,     0,     4,     9,    10,    12,
      11,     8,     0,     0,     0,   308,   298,   248,     0,   249,
     250,     0,   299,   300,   301,     0,    13,   251,   303,   305,
     304,   302,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   312,   253,
     306,   411,   564,   563,   312,     0,     0,     0,     0,     0,
     313,   315,   329,   316,   329,   587,     3,     0,     0,   416,
     417,     0,     0,   438,   936,   935,     0,     0,     0,     0,
       0,     0,     0,     0,   953,     0,   952,   923,   919,   918,
     922,   920,   924,   921,   914,     0,   916,     0,     0,   578,
     571,     0,     0,   759,     0,     0,     0,     0,   759,   928,
     927,     0,     0,   572,     0,     0,     0,   939,     0,     0,
       0,     0,   365,   256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   374,   375,   371,     0,     0,   514,   428,
       0,   514,   749,   748,   747,     0,    77,     0,    32,    31,
      20,     0,     0,     0,     0,     0,    55,    87,     0,     0,
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
     311,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   309,     0,     0,
       0,     0,     0,   352,   326,   312,     0,     0,     0,     0,
       0,   337,   336,   340,   344,   341,     0,     0,   338,   328,
       0,     0,   419,   418,     0,   434,     0,     0,   432,     0,
       0,     0,     0,     0,     0,   479,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   947,   940,   915,     0,     0,     0,   722,
     731,   690,   690,   690,   690,   690,   715,   690,   712,     0,
     690,   690,   690,   693,   724,   693,   723,   690,   690,   690,
       0,   693,   690,   693,   714,   721,   713,   732,   733,     0,
       0,     0,   716,   580,     0,     0,     0,     0,     0,     0,
     760,   761,     0,     0,     0,     0,     0,   931,   929,   930,
       0,   448,     0,     0,     0,     0,   938,   739,   539,     0,
     541,   542,     0,   368,     0,   277,     0,   256,   367,   574,
     912,   910,   934,   465,   576,   373,   951,     0,     0,     0,
     569,     0,     0,     5,    51,    78,     0,    48,     0,     0,
     240,     0,     0,     6,     0,    57,     0,     0,     0,   226,
     224,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,   171,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,   216,   217,   218,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
       0,     0,     0,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    23,    24,    22,   246,   244,
      46,     0,    44,   212,    79,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    33,    73,    72,    25,    26,    28,
      14,    15,    16,    17,    18,    19,    27,    30,    29,     0,
     310,   256,     0,   307,   413,   412,   312,     0,     0,     0,
     317,     0,   352,     0,   357,   325,     0,   256,   314,   338,
     338,     0,   331,     0,   339,     0,   321,   320,     0,   438,
       0,     0,     0,     0,     0,     0,   475,     0,   472,   478,
     474,     0,   657,     0,     0,     0,     0,   476,   954,   955,
     948,   946,   942,     0,   944,     0,   945,   917,   759,   759,
       0,   719,   695,   701,   698,   695,   695,     0,   695,   695,
     695,   694,   698,   698,   695,   695,   695,     0,   698,   695,
     698,     0,     0,     0,     0,     0,     0,     0,     0,   763,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   451,     0,     0,     0,     0,   740,   741,
       0,     0,   655,   607,   329,   538,     0,   543,   544,   545,
     546,   257,     0,   284,   256,   364,   366,   372,     0,   494,
     516,     0,     0,   493,   494,     0,   494,     0,    89,     0,
     238,     0,     0,     0,     0,    53,     0,     0,     0,     0,
     142,     0,     0,     0,     0,     0,   174,   175,   176,   177,
     178,   179,     0,     0,     0,     0,   155,     0,     0,     0,
     159,   160,   161,   163,     0,     0,   165,     0,   168,   169,
     170,     0,     0,     0,     0,     0,     0,    96,    90,    91,
      92,    93,    94,    95,   145,   146,   147,     0,     0,     0,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   182,   183,   184,   185,   186,   187,
     188,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,   201,   202,   203,     0,    60,     0,    62,     0,     0,
       0,     0,     0,    69,    70,    71,     0,     0,     0,    47,
      45,     0,     0,   247,   245,    81,     0,     0,    40,    36,
      38,     0,    58,   258,     0,     0,   352,   354,   354,   354,
       0,   318,   322,     0,     0,     0,   277,   342,   343,     0,
       0,   345,     0,   435,   436,   433,     0,     0,     0,     0,
       0,     0,   657,   657,     0,   487,   486,   488,   657,   481,
       0,     0,   941,   943,     0,     0,     0,   707,   717,   709,
     711,   736,     0,   710,   706,   705,   728,   727,   704,   708,
     703,     0,   725,   702,   726,     0,     0,     0,   582,   735,
       0,   581,     0,   764,   766,   765,     0,   762,     0,     0,
     401,     0,     0,     0,     0,     0,   403,     0,     0,     0,
       0,     0,   777,     0,   449,   450,     0,   457,     0,     0,
       0,     0,     0,     0,   739,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   613,     0,     0,   540,   559,     0,
       0,   555,     0,     0,     0,     0,   536,   547,   550,     0,
       0,   956,   369,     0,     0,     0,   525,   515,     0,     0,
     494,   532,   494,   533,    52,   242,     0,   241,     0,     0,
       0,    56,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   100,   102,
       0,     0,     0,     0,     0,   134,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,    59,     0,     0,     0,     0,     0,
       0,   267,   256,   414,   319,     0,     0,     0,     0,   327,
       0,   565,     0,     0,   284,   334,   332,     0,     0,   330,
     346,     0,   442,   441,   439,     0,     0,     0,     0,   488,
     488,   657,     0,     0,   669,     0,   674,     0,     0,     0,
       0,     0,   489,   678,   659,     0,   676,   483,   488,   473,
     480,     0,     0,   691,     0,   696,   697,     0,     0,   698,
       0,   698,   698,   720,   734,     0,     0,     0,   771,   774,
     773,   775,   772,   767,   768,   770,   776,   769,     0,     0,
       0,     0,     0,     0,     0,   377,     0,     0,     0,     0,
       0,     0,   777,     0,     0,   452,   456,   454,   453,   455,
       0,   461,     0,     0,     0,     0,     0,     0,     0,   655,
     609,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     594,   655,     0,   738,   554,   552,   553,   556,   557,   558,
       0,     0,     0,   262,   262,   278,   279,   285,     0,   359,
     527,   526,     0,     0,   517,   522,   521,     0,   519,   497,
     531,   239,   243,     0,    54,     0,   140,   139,     0,   144,
       0,     0,   227,   228,   173,   151,   152,     0,     0,   156,
     157,   158,   162,   164,   166,   207,   208,   209,   210,     0,
      97,   106,   108,   104,   110,   112,   114,   148,     0,     0,
     150,   223,   269,   269,   269,   116,     0,     0,   124,     0,
       0,   132,   269,   269,   180,     0,     0,     0,   192,   193,
       0,     0,   196,     0,   199,     0,   204,     0,    61,    63,
      65,    66,    67,    68,     0,     0,     0,    80,    84,     0,
       0,    50,     0,     0,    42,     0,    43,    35,     0,     0,
     277,   258,   353,     0,     0,     0,   323,     0,     0,     0,
     956,   347,     0,   333,     0,     0,     0,     0,     0,   653,
       0,   477,   485,   488,   658,   490,     0,     0,     0,     0,
       0,     0,   679,   660,   661,   663,   662,   667,     0,     0,
       0,     0,   677,   675,   482,     0,     0,   777,     0,     0,
     700,   729,   737,   730,   718,     0,   583,   378,     0,   777,
       0,   394,     0,     0,     0,     0,   402,     0,   386,     0,
       0,     0,     0,     0,   785,   786,   787,   789,   788,   907,
     792,   793,   794,   900,   791,   790,   895,   896,   897,   898,
     899,   882,   795,   836,   827,   832,   777,   878,   868,   839,
     871,   814,   821,   818,   805,   861,   850,   777,   858,   876,
     812,   813,   883,   799,   806,   854,   870,   875,   872,   833,
     811,   880,   752,   810,   830,   823,   820,   777,   869,   859,
     800,   849,   888,   826,   840,   822,   841,   825,   864,   847,
     808,   777,   797,   881,   803,   865,   817,   844,   856,   816,
     777,   845,   842,   843,   851,   863,   853,   819,   824,   848,
     837,   838,   855,   887,   860,   829,   862,   815,   889,   846,
     834,   828,   835,   831,   874,   802,   796,   867,   873,   807,
     809,   798,   879,   857,   877,   852,   866,   804,   801,   885,
     777,   886,   884,   902,   903,   904,   905,   906,   893,   894,
     890,   891,   892,   901,   778,     0,   459,   458,     0,   463,
       0,   380,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   295,     0,     0,
       0,     0,   590,   606,   614,   657,     0,   549,   551,   263,
     264,     0,   281,   283,     0,     0,     0,   959,   957,   958,
     495,     0,   518,     0,     0,     0,   956,     0,     0,     0,
     143,   230,   231,   232,   233,   236,   235,   237,   229,   234,
       0,     0,     0,   269,   269,   269,   269,   269,   269,     0,
       0,     0,   273,   273,   273,   269,     0,     0,     0,   269,
       0,     0,     0,   269,   273,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,    86,    41,
      37,    39,   262,   265,   268,   284,   267,   355,     0,     0,
       0,     0,   566,   567,     0,   561,     0,   443,     0,   466,
     631,     0,   629,     0,   467,     0,   484,     0,     0,     0,
       0,     0,     0,   681,     0,     0,     0,     0,     0,     0,
     777,     0,   692,   699,     0,   777,     0,   382,   395,     0,
     404,   405,   406,     0,     0,     0,     0,     0,   379,   751,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,     0,     0,   388,     0,     0,     0,     0,   594,     0,
       0,     0,     0,   621,     0,     0,     0,   618,     0,   617,
       0,   627,     0,     0,     0,     0,     0,   589,   656,   548,
     262,   280,   287,   286,     0,     0,   529,   528,   524,   523,
       0,   499,   492,     7,   141,   138,   153,   154,   211,   273,
     273,   273,   273,   273,   273,   213,     0,   149,     0,     0,
       0,     0,     0,   273,   118,     0,     0,   273,   126,     0,
       0,   273,     0,     0,   189,   190,   191,   194,   195,     0,
     200,   205,     0,     0,     0,   260,     0,     0,   259,   288,
     277,   351,     0,   350,   349,     0,     0,   348,   440,     0,
       0,     0,   471,     0,   654,   671,     0,   689,   673,     0,
       0,     0,   682,   680,   664,   665,   666,   668,     0,   777,
       0,   754,   584,     0,   756,   396,     0,   390,   387,     0,
     394,   779,     0,     0,     0,     0,     0,   777,   460,     0,
       0,   384,     0,     0,     0,   381,     0,   592,   608,     0,
       0,     0,     0,     0,   619,   620,   296,   615,   596,     0,
       0,     0,     0,     0,   282,   960,     0,   496,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   271,   270,
       0,    99,   101,   103,     0,   269,     0,     0,     0,   269,
       0,     0,     0,   135,   137,     0,     0,     0,     0,   266,
     262,     0,   293,   284,   356,   324,   568,   469,     0,   632,
     630,     0,   687,   688,     0,     0,     0,   777,     0,   753,
     755,     0,   392,   407,   383,     0,   784,   783,   780,   782,
     781,     0,   462,     0,   391,   389,     0,     0,   622,     0,
       0,   628,     0,   595,     0,     0,     0,     0,     0,     0,
       0,     0,   520,     0,     0,   498,   107,   109,   105,   111,
     113,   115,   214,     0,   262,   274,   117,   273,   120,   122,
     125,   273,   128,   130,   133,   197,    74,     0,     0,   261,
     290,   289,     0,   254,   255,     0,   670,   672,   686,   683,
       0,   758,     0,   396,   926,     0,   385,     0,     0,   616,
       0,   591,   597,   598,     0,     0,     0,   505,     0,   500,
       0,   502,   503,   272,   275,     0,     0,   269,   269,     0,
     269,   269,     0,     0,     0,     0,   294,     0,   684,   685,
     757,     0,     0,   398,   393,   464,     0,     0,     0,     0,
       0,     0,     0,     0,   501,     0,   262,   119,   273,   273,
     127,   273,   273,    75,    76,   292,   291,   633,     0,     0,
     397,     0,     0,     0,     0,     0,     0,     0,   601,   506,
       0,   276,     0,     0,     0,     0,   635,     0,   400,   399,
       0,     0,     0,     0,   635,     0,     0,   504,   121,   123,
     129,   131,   468,   634,     0,     0,     0,     0,   623,     0,
       0,   602,   599,     0,   649,     0,     0,   593,     0,   635,
     635,     0,     0,   600,     0,   650,   470,     0,   646,   648,
     647,     0,     0,     0,   625,   624,     0,   603,   651,   652,
     636,   644,   638,     0,   640,   645,   642,     0,   635,     0,
     639,   637,   643,   641,   626,     0,     0,     0,     0,     0,
       0,     0,   604,   605
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   684,  1101,  1325,  1327,  1323,   685,   986,   696,
    1326,   686,  1091,  1319,  1092,  1320,   697,  1522,  1523,  1524,
    1845,  1843,  1844,  1846,  1847,  1848,  1855,  2135,  2267,  2268,
    1859,  2139,  2270,  2271,  1863,  1532,  1533,   703,  1258,   403,
      21,    22,   665,  1331,  1883,  1812,  2038,  1570,  1852,  2129,
    2010,  2215,   963,  1465,  1466,  1231,  2152,  2233,  1798,    96,
     299,   300,   537,   309,   310,   311,   312,   851,   560,   313,
     557,   865,   558,   861,  1349,  1350,   850,  1336,  1888,   314,
      23,    74,   133,   372,    24,   385,    25,  1929,  2172,  2282,
    2283,  1185,  1186,    26,    27,   845,   104,    28,    29,    30,
      31,    32,   323,    33,   568,  1353,    34,   943,  1197,  1431,
    1777,  1779,  1950,    35,    36,  1377,    37,  1236,  1985,  1826,
    2120,  2205,  2295,  2117,    84,   155,   679,   971,  1240,  1824,
    1477,   969,    38,    39,   127,   370,   659,   662,   960,  1226,
    1227,  1228,    40,    99,   857,    41,   112,    42,    43,    44,
    1977,  1802,  2350,  2351,    72,  1213,  1214,  1903,  1901,  2308,
    2342,  1590,  1215,  1137,   901,   912,  1147,  1148,   633,  1152,
     953,   954,    45,    94,    95,    46,   639,   640,   641,  1408,
    1423,  1774,    47,    48,   345,   346,    49,   361,   650,    50,
      51,   336,   594,    52,  1469,  1819
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2153
static const yytype_int16 yypact[] =
{
   13190,  -125,   286,   540, 12825,   543, -2153,   469, -2153,   557,
     575,   155,   332,   341, -2153,    14, -2153,   390,   610,   554,
     646,   281, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153,   676, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153,   692,   711,   721, -2153,   284,   541,   611,
     767,   608,   770,   119,   776,   780,   782,   611, -2153,   552,
     649,   611,   587, -2153,   532,   147,   491,   838,   494,   499,
     877,   502,   504,   506,   785,   679,   455, -2153, -2153,   879,
     881,   785,   533,   485,   511, -2153,  6721,   899,   786,    89,
   -2153,   911, -2153, 13190,    97,  -133,    76,   486,   472,    47,
       7,   571,   927,   904,   954,   563,   778,   528,   683,   576,
     510,   784,   976, -2153,   410,   986,   611,   603,   601,  1006,
   -2153, -2153, -2153,   -88, -2153,   731, -2153,   738, -2153, -2153,
     742, -2153,   744,   805, -2153,   781,     0,   792, -2153,   799,
   -2153, -2153, -2153, -2153, -2153,  1048, -2153,  1029, -2153,   809,
    1082, 10671, 10671, -2153, -2153,  1051,   295, -2153, -2153, -2153,
   -2153,  1073, 10671, 10671, 10671, -2153, -2153, -2153,  7906, -2153,
   -2153,   691, -2153, -2153, -2153,   699, -2153, -2153, -2153, -2153,
   -2153, -2153,  1100,   717,   745,   756,   762,   775,   793,   806,
     824,   844,   861,   863,   871,   889,   895,   903,   921,   929,
     947,   957,   975,   994,  1011,  1041,  1049,  1053,  1071,  1094,
    1096,  1122,  1124,  1128,  1129,  1130,  1131,  1133,  1137,  1138,
    1140,  1141,  1142,  1143,  1149,  1150,  1164,  1165,  1166,  1168,
    1183,  1184,  1185,  1189,  1190,  1194,  1195,  1196, -2153, -2153,
    1197,  1200,  1205,  1208,  1213,  1215,  1218,  1223,  1228,  1229,
    1230,  1231,  1232,  1234,  1236,  1239,  1246,  1254,  1255,  1256,
    1257,  1258,  1259,  1260,  1261,  1263,  1265,  1267,  1268,  1269,
    1270,  1271,  1272,  1273,  1274,  1276,  1288,  1289,  1290,  1291,
    1293,  1297,  1299,  1301,  1317,  1319,  1320, 10671, 13623,   -95,
   -2153,   765,   800,   907,    24,  1321,  1400,  1327,    17,  -178,
     773, -2153,  1375, -2153,  1375, -2153, -2153,  1395,  1412, -2153,
   -2153,  1432,  1494,   -45, -2153, -2153,   503,   588,   437,   697,
     449,   599,   703,  1460,  1326,  1481,    86, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153,   319, -2153,  1725,  1726, -2153,
   -2153, 13220,  1533,    64,  1729,  1540,  1457,  1736,    64, -2153,
   -2153,   399,  1738, -2153,  1548,   531,  1465, -2153,  1744,  1746,
     336,  1722, -2153,   205,  -142,    89,  1748,  1751,  1752,  1757,
    1758,  1759,  1768, -2153, -2153, -2153,  1786,  1798,  -179, -2153,
    1800,  -114, 13765, 13765, -2153,  1813, 10671, 10671,  1099,  1099,
    1809, 10671, 13093,   430,  1831,  1844,  1448, -2153, 10671,  7116,
   10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671,  1451,
   10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671,
   10671, 10671, 10671, 10671, 10671,  1452, 10671, 10671, 10671,  1453,
   10671, 10671, 10671, 10671, 10671, 10671,  8301, 10671, 10671, 10671,
   10671, 10671, 10671, 10671, 10671, 10671, 10671,  1455,  1456,  1458,
    1459,  1461, 10671, 10671,  1462,  1463,  1464, 10671, 10671,  1850,
    1466,  1467, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671,
   10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671,
   10671, 10671, 10671, 10671,  1468, 10671, 10671, 10671,  1469, 10671,
   10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671,  9187,
   -2153, 10671, 10671, 10671, 10671, 10671,    54,  1471,   832, 10671,
    7511, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671,
   10671, 10671, 10671, 10671, 10671, 10671,  1855, -2153,    89,  1866,
   10671,  1867,  1868,     1, -2153,   140, 10671,  1474,   402,  1870,
      89, -2153, -2153, -2153,   -21, -2153,    89,  1711,  1680, -2153,
    1872,  1879, -2153, -2153,  1880,  1607,  1845,  1846, -2153,  1883,
    1886,  1887,  1888,  1889,  1890, -2153,  1892,  1893,  1894,  1895,
   13220,  1896,  1655,  1898,  1899,  1900,  1901,  1902,  1525,  1903,
      29,   517,  1904, -2153, -2153, -2153,   508,  1510,  1514, -2153,
   -2153,  1515,  1515,  1515,  1515,  1515, -2153,  1515, -2153,  1516,
    1515,  1515,  1515,  1851, -2153,  1851, -2153,  1515,  1515,  1515,
    1517,  1851,  1515,  1851, -2153, -2153, -2153, -2153, -2153,  1519,
    1520,  1521, -2153,   129,  1916, 13220,  1917,  1924,  1926,  1534,
    1532, -2153,  -137,  1934,  1936,  1743,  1544, -2153, -2153, -2153,
    1755,  1905,  1940,  1756,  1668,  1948,    86,   302, -2153,   488,
   -2153, -2153,   138, -2153, 10671,  1761,    89,  -191,   601, -2153,
   -2153, -2153, -2153, -2153, -2153,     0, -2153,  1951,  1952,   -82,
   -2153,  1951,   -66, -2153,  1799, -2153,  1559, 13765, 13133,   448,
   -2153, 10671, 10671, -2153,  1562, -2153, 10671,  1720,   266, -2153,
   -2153, -2153,  9232,  8696,  2190,  2236,  2542,  9267,  9307,  9504,
    9582,  9613,  9662, -2153,  2588,  2894,  2940,  3246,  9702,  3292,
    3598,  3644,  9899,  9994, 10021,   607,  3950, 10057,  3996, -2153,
   10097, 10294, 10348, -2153, 13665,  4302,  4348,  4654,  4700,  8912,
    1564, 10384, 10411, 10452, 10492, 10689, 10743, 10774, 10801,  5006,
    5052,  5358, -2153, -2153, -2153, -2153, -2153, 10847,  5404,  1613,
    1616,  1617,   718,   796,  1572,  1621,  1623,  5710, 10887, 11070,
   11097, 11124, 11155, 11182, 11210, 11237,  5756,  6062,  6108,  6414,
    6459,  6823,  6850,  6897,   845, 11268, 11295, 11322,  7126, -2153,
    1016, 11349,  7205, -2153,  7232,  7259,  7292,  7324, 11376, 11403,
   11430,  7614,  7641,  7734, -2153,  1309,  6949,  7541, 13157, 13157,
   -2153,    34, -2153, -2153,  1733, 10671, 10671,  1578, 10671, 13699,
    1579,  1585,  1586, 10671,  1354,  1543,  1543,  1679,  1766,  1810,
     760,   760,   915,   915,   915,   915,   901,  1809,  1809,    87,
   -2153,  -191,  1849, -2153, -2153,  1590,   140,  1826,  1829,  1833,
   -2153,  1720,     1, 11460, -2153, -2153,    26,  -138,   773,  1680,
    1680,  1835,  1802,    89, -2153,  1838, -2153, -2153,   859,   -45,
    1805,  1806,   413, 13220, 13220,  2001, -2153,  1783, -2153, -2153,
   -2153,  1784,  1971, 13220,  2005,  1764,  1765, -2153, -2153, -2153,
   -2153, -2153, -2153,  2006, -2153,  2007, -2153, -2153,    64,    64,
    2008, -2153, -2153, -2153, -2153, -2153, -2153,  2011, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153,  2011, -2153, -2153,
   -2153,  2012,  2013,  2015,  1823,  1622,  1624, 10671,  1626,  1971,
   13220, 13220, 13220,  1814,    64,  -180,   154,   191,  1832,  2025,
     117,  2027,   667,  1906,   200,  2030,  2035,  1842, -2153, -2153,
    1947,  2045,   514, -2153,  1375, -2153,  2048, -2153, -2153, -2153,
     -54, 13765,  1990,  1877,  -191, -2153, -2153, -2153,  2041,  -171,
   -2153,   518,  1665, -2153,  -171,  1665,  1864, 10671, -2153, 10671,
   -2153, 10671, 13516, 13187,  1973,  7916,  1667,  1671, 10671, 10671,
   -2153, 10671, 13489,  1911,  1911, 10671, -2153, -2153, -2153, -2153,
   -2153, -2153, 10671, 10671, 10671, 10671, -2153, 10671, 10671, 10671,
   -2153, -2153, -2153, -2153, 10671, 10671, -2153, 10671, -2153, -2153,
   -2153, 13220, 13220, 10671, 10671, 10671,  2061, -2153,  1735,  1739,
    1740,  1741,  1742,  1750, -2153, -2153, -2153, 10671, 10671, 10671,
   -2153, 10671,  1682,  1689,  1691,  1753,  2088,  1767,  2089,  1771,
    1699,  1701, 10671, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, 10671, 10671, 10671, 10671, 10671, 10671, 10671, 10671, -2153,
   10671, -2153, -2153, -2153, 10671, -2153, 10671, -2153, 10671, 10671,
   10671, 10671, 10671, -2153, -2153, -2153, 10671, 10671, 10671, -2153,
   -2153, 10671,  1720, 13157, 13157,  1860, 13732, 10671, -2153, 10671,
   10671,  1720, -2153,  1961,    89,  2102,     1,  1966,  1966,  1966,
    1709, -2153,   142, 10671,  2106,  2115,  1761, -2153, -2153,    89,
   10671,   -23,    89, -2153, -2153, -2153,  2119,  2119,  1727,  1959,
    1962,  1737,  1971,  1971, 13220, -2153, -2153, 13186,  1971, -2153,
    2127,  2129, -2153, -2153,  1745,  1747,   524,   278,   870,   278,
     278, -2153,   595,   278,   278,   278,   870,   870,   278,   278,
     278,   597,   870,   278,   870,  1749,  1762,  1763,  2062, -2153,
   10671, 13765,   154,  1971,  1971,  1971,   645, -2153,  1769,  1775,
   -2153,  1776,  1777,  1778,  1780,   600, -2153,  1871,   154,  2138,
     259,  2082, -2153,  2004, -2153, -2153,   452,  1909,  1878,   154,
     270,  1953,  2145,  2146,  -123,  2148,  1785,  1991,    23,  1788,
    1789,  1992,  1790,   609, -2153,  2159,  1720, -2153, -2153,  2160,
     -29,  2157,  2161,  2164,  1793,   516, -2153,  1782, -2153,   167,
   10671,  1979, -2153,  9091,  2019,  2193, -2153, -2153,  2204,  9486,
    -162, -2153,  -162, -2153, -2153, 13765, 13543, -2153, 10671,  1828,
   10671, -2153, -2153,  9109,  1079, 11487, 10671, 10671,  1830,  1834,
   11514, 11545, 11573,  7943,  7978, 11600, 11627, 11658, 11685, 11712,
   11739,    51,    55, 11766, 11793,  8005,  1836,  1839,  1840,  1841,
    1848,  1856,  1874,  1155,  8032, 11820, 11850, -2153, -2153, -2153,
    1882,   615,  1884,   617,  1897, -2153, -2153, 11877,  8082,  8124,
    8325, 11904, 11934,  8387,  8414,  1186,  1251,  1283, 11963, 11990,
   12017, 12048, 12075, 12102,  8441,  8477,  8517,  1837,  1885, 10671,
    1720, 10671,  1206,  1720, 13765,  1720,  1891,  1720,  1907,  1908,
    2166,  2079,  -191, -2153, -2153,  2067,  1910,  1912,  1914, -2153,
    2228, 13765,  2213,    50,  1877, -2153, 13765, 10671,  1915, -2153,
   -2153,   -23, -2153,  1919,  -149, 10671,  1925,  1928,  2281, 13186,
   13186,  1971,  2046,  2282,  1929,  1930,  1931,  2239,  2289,  1937,
    2291,   126, -2153, -2153, -2153,  2137,  2139, -2153, 13186, -2153,
   -2153,  2080,   122, -2153,  2297, -2153, -2153,  2064,  2304, -2153,
    2319, -2153, -2153, -2153, -2153,  1938, 12129,   623, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,   652,   154,
    2334,  2338,  2339,  2342,  2346, -2153,  2347,  1954,   668,  1956,
    -127,   154, -2153,  1482,  2237, -2153, -2153, -2153, -2153, -2153,
    2351,  2090,  1960,   670,  2091,   154,  2355,   273,  2220,   514,
   -2153,   443, 10671,  1964,  1965,  1967,  2360,  2360,  1968,  2281,
     -16,   514, 13220, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
     516,   678,   516,   -26,   614,  1969, -2153,  1337,   189, -2153,
   -2153, 13765,  2109,  2349, -2153, -2153, 13765,   680, -2153,  2173,
   -2153, -2153, 13765,  2368, -2153, 10671, -2153, -2153, 10671, -2153,
   12156, 12989, -2153, -2153, -2153, -2153, -2153, 10671, 10671, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, 10671,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, 10671, 10671,
   -2153, -2153,  2022,  2022,  2022, -2153,  2024,  1134, -2153,  2029,
    1136, -2153,  2022,  2022, -2153, 10671, 10671, 10671, -2153, -2153,
   10671, 10671, -2153, 10671, -2153, 10671, -2153, 10671, -2153, -2153,
   -2153, -2153, -2153, -2153, 10671, 10671, 10671, -2153, -2153,  1977,
    1982,  1206,  1983,  1984, -2153,  1987, -2153, -2153, 10671, 10671,
    1761,  1961, -2153,  2387,  2387,  2387,  1994, 10671, 10671,  2390,
    1979, 13765,  2360, -2153,  2395,  2398, 12183,  2397,  2402, -2153,
     746, -2153, -2153, 13186, -2153, -2153,  2403, 10671,  2408,  2363,
     -35, 10671, -2153, -2153, -2153, -2153, -2153, -2153,  2018,  2020,
    2034, 10671, -2153, -2153, -2153,   645,  2356, -2153,  2021,  2417,
   -2153,   870, -2153,   870,   870, 10671, -2153, -2153,  2364, -2153,
     748,  2434,  2040,  2042,  2043,  2044, -2153,   154, -2153,   154,
    2047,  2049,   750,  1918, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153,  2222, -2153,  2051,  2055,  2165,
     154, -2153,  2056,   752,  2057,  2177,   154,  2184,   757,  2059,
    2284,  2293,  2072, 12210,  2397,  2360,  2360, -2153,   759,   764,
    2402,   794,   -12, -2153, -2153,  1971,   825, -2153, -2153, -2153,
   -2153,  2455, -2153, -2153,   167, 10671, 10671, -2153, -2153,  2060,
   -2153,  9881, -2153, 10276,  2073,  2373,  1979,  2075, 12240, 12267,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   12294, 12323, 12353,  2022,  2022,  2022,  2022,  2022,  2022,  1754,
   12380,  2411,  2277,  2277,  2277,  2022,  2081,  2078,  2084,  2022,
    2087,  2093,  2094,  2022,  2277,  2277, 12407, 12438, 12465, 12492,
   12519,  8715, 12546, 12573,  8778,  8823,  8872, -2153, -2153, -2153,
   -2153, -2153, 13570,   177, 13765,  1877,  2079, -2153,   847,   849,
     851,  2483, 13765, 13765,  2473, -2153,   854, -2153,  2451,  2477,
   -2153,   856, -2153,   858, -2153,  2493, -2153,   890, 12600,   892,
    2100,  2101,  2335, -2153, 12630,  2103,  2104,  2105, 12657,   665,
   -2153,  2270, -2153, -2153, 12684, -2153,  2622, -2153, -2153,  2107,
   -2153, -2153, -2153,  2497,   995,   997,   154,  2501, -2153, -2153,
    2974,  3326,  3678,  4030,  4382,  4734,  2446,  2504, 10671,  2430,
   -2153,   999,   154, -2153,   154,  2116,  1001,  2376,   -16, 10671,
    2117,  2118,  2281, -2153,  1007,  1012,  1018, -2153,  2513, -2153,
    1020, -2153,   159,  2120,  2515,  2457,  2461, -2153,  1356, -2153,
     614, -2153, 13765, 13765,  2522,  2523, -2153, 13765, -2153, 13765,
    9486,  2130, -2153, -2153, -2153, -2153, -2153, -2153, -2153,  2277,
    2277,  2277,  2277,  2277,  2277, -2153, 10671, -2153,  2526,  2470,
    2136,  2140,  2141,  2277, -2153,  2185,  2187,  2277, -2153,  2192,
    2198,  2277,  2151,  2152, -2153, -2153, -2153, -2153, -2153, 10671,
   -2153, -2153,  2538,  2554,  2572, -2153,  2365, 10671, -2153,  2440,
    1761, -2153,  2578, -2153, -2153,  2186, 10671, -2153, -2153,  2313,
    2378,  2580, -2153,  2583, -2153, -2153,  2582,  1363, -2153,  2585,
   10671, 10671, -2153, -2153, -2153, -2153, -2153, -2153,  2528, -2153,
    5086, -2153, -2153,  5438, -2153,  2314,  2199, -2153, -2153,  1026,
    2434, -2153,  2546,  2474,  2475,  2467,  2361, -2153, -2153, 12712,
    2244, -2153,  1030,  1032,   154, -2153,  2246,   313, -2153, 12743,
    2397,  2402,  1034,  2429, -2153, -2153, -2153, -2153, -2153,  2639,
    2642,    18,   -69,  2442, -2153, -2153,  2627,  2254,  1038,  2651,
    2555,  2257,  2259,  2260,  2261,  2262,  2263, 12770, -2153,  2264,
    2661, -2153, -2153, -2153,  2272,  2022,  2278,  2280,  2276,  2022,
    2283,  2290,  2288, -2153, -2153, 12797,  2295,  2279,  2298, -2153,
   13570,   -63,  2520,  1877, -2153, -2153, 13765, -2153,  2686, -2153,
   -2153,  2296, -2153, -2153,  2303, 12828, 12855, -2153,  5790, -2153,
   -2153,  2305, -2153, -2153, -2153,  2307, -2153, -2153, -2153, -2153,
   -2153,  6142, -2153, 10671, -2153, -2153,  1044,  2698, -2153,  1054,
    1056, -2153,  2703, -2153,  2309,  2705,  2706,  2315,  2316,  2317,
   10671,  2707, -2153,  1058,   -34, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153,  2708,   614,  2318, -2153,  2277, -2153, -2153,
   -2153,  2277, -2153, -2153, -2153, -2153, -2153,  2711,  2712, -2153,
    2488,  2489,  2360, -2153, -2153,  2324, -2153, -2153,  1404, -2153,
    6494, -2153,  2719,  2314, -2153, 12882, -2153,  2326,  2518, -2153,
    1067, -2153, -2153, -2153,  2723,  2724,  2728, 13765,  2713, -2153,
    2729, -2153, -2153, -2153, -2153,  2731,  2344,  2022,  2022,  2345,
    2022,  2022,  2352,  2354,  2557,  2565,  2358,  2752, -2153, -2153,
   -2153,  2740,  1068, -2153, -2153, -2153,  2521,  2762,  2764,  2752,
    2370,  2371,  2375, 10671, -2153,  2531,   614, -2153,  2277,  2277,
   -2153,  2277,  2277, -2153, -2153, -2153, -2153, -2153,  1072,  2771,
   -2153,  2719,  2386,  1078,  2392,  1081,  2393,  2562, -2153, 13765,
    2523, -2153,  2394,  2396,  2399,  2400, -2153,  2790, -2153, -2153,
    2791,  2792,  2752,  2752, -2153,  2574,  2795,  2254, -2153, -2153,
   -2153, -2153,    72, -2153,  2406,  2409,  1085,  1097,   478,  2802,
    1105, -2153, -2153,   -50,  2656,   560,   -36, -2153,  2752, -2153,
   -2153,  2714,  2537, -2153,  2574, -2153, -2153,    63, -2153, -2153,
   -2153,     5,   373,  1108,   478,   478,  2635, -2153, -2153, -2153,
   -2153, -2153, -2153,   377, -2153, -2153, -2153,   492, -2153,  2560,
   -2153, -2153, -2153, -2153,   478,    45,  2616,  2624,  2631,  2634,
    2821,  2822, -2153, -2153
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2153,  2725,   -96, -2153, -2153, -2153, -2153,  -951,  1580, -2153,
    1734, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,  1852,  2436,
   -2153,  -239,  -655,  1277, -2153, -1461, -2153,   950, -1370, -2153,
   -1769, -2153, -1115, -2153,  1031, -1340, -2153, -2153, -1433, -2153,
   -2153,  2310,  -296,  -302,  2294,  -540, -2153, -2153,  -309, -2153,
   -2153,   654, -2153, -2153, -2153,  1492,  -835,   408,   -51, -2153,
   -2153, -2153,  2718,  2181, -2153,  2176, -2153,   772,   612, -2153,
     542, -1170, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -2153, -2153,  2292, -2153,  1985,  1731, -2153, -2153, -2153, -2153,
   -2153, -2153, -2153, -2153, -2153, -1321, -2153,  -932, -2153, -2153,
   -2153, -2153, -2153,   536,   549,  2768,  2469, -2153,  1920, -2153,
     874,  2188, -2153, -2153, -2153, -2153, -2153, -2153, -2153, -2153,
   -1206,  1403, -2153, -2153, -2153, -2153,   473, -2153, -2153, -2153,
   -2153,   908, -2153,   512, -2153,  1428,  1417, -1732, -1735, -2152,
   -1401, -1436, -2153, -1123,   453,   157,   -72,  -888,  -432,  1955,
   -1197, -2153, -2153, -2153,  2716, -2153,  -347, -2153,  1943,  1264,
   -1149, -2153, -2153, -2153, -2153,  2274, -2153, -2153, -2153, -2153,
   -2153,  2511, -2153, -2153, -1559, -2153
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -740
static const yytype_int16 yytable[] =
{
     298,  1344,  1397,  1813,  1580,   561,   548,  1440,   543,  1359,
    1360,   646,   965,  1801,  1799,  1378,   862,  1111,  1418,  1461,
     304,  1895,    92,  1809,  1156,  1157,  1244,   510,  1234,  1433,
    1162,   948,  1164,  1218,   892,  -739,  1972,  1234,  1591,  1592,
    1089,   538,  1241,  1911,  1243,  1219,  1113,  2365,   375,  2396,
     337,   338,   339,   340,   341,   342,  2261,  1614,  1455,  1964,
     810,   677,   549,   566,   539,   392,   393,   635,  1970,   547,
    1578,  2371,   811,   667,   383,   536,   398,   399,   400,  2380,
     636,  1220,   402,   664,  2011,  2012,  1810,   925,  1178,  1221,
    2353,   925,   304,   949,    53,  2022,  2023,   511,   512,   513,
     514,   515,   516,   517,   588,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   116,   535,   666,  2195,   681,    54,  1585,   935,
    1603,  1604,  1605,  1606,   847,  2197,   664,  2315,   948,  1222,
    1317,  1640,   957,   510,   321,  -329,   347,   924,   882,  1896,
     134,   317,   318,  1853,  1854,   848,   859,  1180,    87,    16,
    1973,  2378,  1864,  1865,  2108,   925,  1912,  2230,  1191,  2354,
    1463,   319,  1464,  1616,  1347,    16,   324,  1192,  1444,  2109,
    2346,  2347,  1617,    88,   305,  1974,  1103,  1445,  1223,   972,
     306,   536,  1817,   559,   860,  2231,   325,  2381,  1607,  2198,
     949,   509,  1116,   929,   117,   975,  2373,   926,   550,   348,
     384,  1179,  2379,   567,   637,  2382,  1975,  1818,   678,  2366,
    1456,   550,  2372,  1224,  2262,  -739,  1913,  1090,  1235,  2397,
    2121,  2122,  2123,  2124,  2125,  2126,   841,  1478,  1593,  1630,
     343,    93,   927,  1348,  2134,  2383,    55,   812,  2138,   852,
    1584,  1642,  2142,  1803,  1806,  2355,   305,   376,    16,   638,
     936,  1115,   306,   322,  1641,  1783,  2196,  1992,   849,  2356,
     589,  1334,  1906,  1643,  1439,   118,   511,   512,   513,   514,
     515,   516,   517,   678,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   687,   535,   135,   540,   688,   893,   320,  1479,  1232,
    1480,   376,   698,   702,   704,   705,   706,   707,   708,   709,
     710,   711,   712,  1121,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,  1976,
     730,   731,   732,  1225,   734,   735,   736,   737,   738,   739,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,  1972,  1965,  1966,   964,  2189,   757,   758,  1559,  2190,
    1811,   762,   763,   813,   958,   959,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   787,   788,   307,   790,
     791,   792,   988,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   364,   308,   805,   806,   807,   808,   809,
     542,  2035,  1114,   819,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   838,   839,
     973,  1132,  1133,   976,   298,   344,  1579,  2384,  2266,  1505,
     853,  1138,  2269,  1506,  2036,  1885,   948,  1187,   987,  1608,
    1609,  1610,   590,   591,   592,   593,  1198,  1934,  1921,  1935,
     307,  -367,   660,  1999,  2000,  2001,  2002,  2003,  2004,   664,
    1926,  1181,  1182,  1183,  1184,  2013,   308,  1102,   163,  2017,
    2390,  1128,  1425,  2021,   136,   365,  2361,   139,  1173,  1174,
    1175,  1621,   141,  1623,  1624,   144,   647,   146,   573,   148,
    1974,   337,   338,   339,   340,   341,   342,  1940,   949,  2114,
     578,  1789,   894,  1611,   326,  1420,  2102,   334,  1941,  2322,
    2323,   355,  2324,  2325,   653,   128,  1434,  1385,    56,  1785,
     122,  1975,   161,    57,   125,  2039,    73,  1129,  1942,   359,
    1106,  1144,  1145,   162,   690,   691,   648,   100,  1386,  1426,
      85,   327,  1943,    91,    75,  2385,   366,    98,   961,   360,
    2391,  1944,   980,   981,   569,  2354,  2037,  1790,    86,  1345,
     895,   661,  1351,  2386,    89,  1205,   328,   570,  1188,  1271,
    1272,   571,  1206,    90,   329,   982,   983,  1199,   164,   368,
     985,   371,   580,  1218,  -367,  2392,   330,   992,    76,  1427,
    1951,  1945,  1110,  2387,  1130,  1219,  1956,   511,   512,   513,
     514,   515,   516,   517,    77,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,    97,   535,  1791,  1216,   102,   137,  1207,   101,
     140,  1220,  1208,   950,   574,   142,  1421,   649,   145,  1221,
     147,  2355,   149,  1809,  1976,   989,   579,  1435,   129,  1209,
    1786,    78,   572,   331,  1131,  2356,   103,  1571,  1210,   105,
     335,   109,  1978,   581,   356,  2393,   130,   654,    79,  2229,
      80,   395,   396,  1428,   332,   106,    81,  2368,   951,   952,
     575,   343,  1361,  1628,  1792,   692,   582,  1398,   131,  1222,
    1429,  1399,  1629,  -507,   107,  1211,  2068,   595,   596,  1093,
    1094,    82,  1096,   692,   108,  2069,  1810,   509,   511,   512,
     513,   514,   515,   516,   517,   132,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,  2264,   535,   333,  -507,   110,  1223,  1400,
    2369,  2098,  1401,   114,  -507,  2217,  2079,   111,   576,  2221,
     113,  2070,   913,   115,   583,  1212,  2073,  1402,   918,   119,
     920,   577,  2092,   120,  2093,   121,  -507,   584,   528,   529,
     530,   531,   532,   533,   534,  2370,   535,  1403,   123,  2276,
     855,   550,  1332,  1340,   124,  1404,   511,   512,   513,   514,
     515,   516,   517,  2234,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,  1171,   535,  1149,  1150,  2321,  1153,  1154,  1155,   126,
      83,   138,  1158,  1159,  1160,   815,   816,  1163,   817,   551,
     156,   818,   349,  1318,   157,   511,   512,   513,   514,   515,
     516,   517,  1329,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     143,   535,   158,  1245,   159,  1246,   955,   956,   150,   150,
    1194,  1195,  1253,  1254,  1405,  1255,  1406,  2298,  2299,  1260,
    2301,  2302,   301,  -511,  1123,  1124,  1261,  1262,  1263,  1264,
     165,  1265,  1266,  1267,   315,  1407,  1237,  1238,  1268,  1269,
    2168,  1270,  1383,  1384,  2186,  2153,   552,  1273,  1274,  1275,
     350,   151,   151,  2348,   533,   534,  -335,   535,  2181,   152,
     302,  1283,  1284,  1285,   153,  1286,  -511,   532,   533,   534,
     553,   535,  1387,  1388,  -511,   351,  1297,   352,  2374,  2375,
     353,   154,   303,   554,   357,  1298,  1299,  1300,  1301,  1302,
    1303,  1304,  1305,   358,  1306,   354,  -511,  1453,  1307,   363,
    1308,   362,  1309,  1310,  1311,  1312,  1313,  2394,   555,   367,
    1314,  1315,  1316,  1389,  1390,  1391,  1390,   371,  1415,  1416,
     369,  1322,   381,  1324,  1324,  1013,  1014,  1450,  1451,   373,
    -508,   556,   377,  1526,  1527,  1529,  1530,  1341,  2240,   378,
    1805,  1627,  1416,   379,  1346,   380,   511,   512,   513,   514,
     515,   516,   517,   389,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   388,   535,  -508,   390,   902,   903,   904,   905,    92,
     906,  -508,   382,   908,   909,   910,  1638,  1416,  1781,  1416,
     914,   915,   916,   386,  1396,   919,  1807,  1462,  1822,  1823,
     387,  1560,   397,  -508,  1562,   391,  1563,   404,  1565,   511,
     512,   513,   514,   515,   516,   517,   405,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   407,   535,  1045,  1046,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,  1467,   535,   406,  1471,  1857,  1858,
    1861,  1862,   408,  1476,  1904,  1905,  1927,  1416,  1938,  1416,
    1953,  1416,  1482,   409,   985,  1958,  1451,  1967,  1968,   410,
    1490,  1491,  1969,  1968,   541,   511,   512,   513,   514,   515,
     516,   517,   411,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     412,   535,  1971,  1905,  1047,  1048,   511,   512,   513,   514,
     515,   516,   517,   413,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   414,   535,  1979,  1462,  1561,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   415,   535,  1069,  1070,  2041,  2042,  2043,  2042,  2044,
    2042,  1581,  2047,  1968,  2050,  2051,  2052,  2053,   416,  1586,
     417,   511,   512,   513,   514,   515,   516,   517,   418,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   419,   535,  2055,  2056,
    2058,  2059,   420,   511,   512,   513,   514,   515,   516,   517,
     421,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   422,   535,
     512,   513,   514,   515,   516,   517,   423,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   424,   535,  1793,   511,   512,   513,
     514,   515,   516,   517,   425,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   426,   535,  1362,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,  1828,
     535,   427,  1829,  2077,  1416,  2078,  1416,  2091,  1416,  2095,
    1416,  1840,  1841,   545,  1364,  2103,  2051,  1365,   428,  1366,
    2104,  1968,  1367,  1842,  1075,  1076,  2105,  1968,  2107,  2053,
    2162,  2163,  1849,  1850,  2174,  1416,   559,  1368,  2184,  1416,
    2185,  1416,  2191,  1905,  1369,  1370,  2202,  1823,   429,  1866,
    1867,  1868,  2246,  1416,  1869,  1870,   430,  1871,   562,  1872,
     431,  1873,  2248,  2051,  2249,  2053,  2259,  2260,  1874,  1875,
    1876,  2278,  2279,  2288,  2289,   563,  2310,  2311,   432,  1371,
    2326,  2327,  1882,  1884,  2331,  2332,   564,  1487,  1488,  2334,
    2327,  1892,  1893,  2359,  2327,  1644,  1645,  1646,  1647,  1648,
    1649,   433,  1650,   434,  1651,  2360,  2327,   565,  1652,  1653,
    1654,  1908,  1655,  2363,  2364,  1914,  2388,  2327,  1656,  1657,
    1658,  1659,  1660,  1117,  1118,  1918,  1337,  1338,  1815,   435,
    1373,   436,  1661,  1889,  1890,   437,   438,   439,   440,  1924,
     441,   585,  1662,  1663,   442,   443,  1664,   444,   445,   446,
     447,  1665,  1666,  1667,  1668,  1669,   448,   449,  1670,  1374,
    1671,  1672,  1673,  1517,  1518,  1674,  1675,  1375,  1676,  1677,
    1678,   450,   451,   452,  1679,   453,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  1680,   535,
     454,   455,   456,  1681,  1542,  1543,   457,   458,  1682,  1683,
    1684,   459,   460,   461,   462,  1685,  1686,   463,  1687,  1688,
    1689,  1690,   464,   586,  1691,   465,  1692,  1693,  1694,  1695,
     466,  1696,   467,  1697,  1698,   468,  1699,  1376,  1700,  1701,
     469,  1702,  1703,  1704,  1705,   470,   471,   472,   473,   474,
    1706,   475,  1707,   476,  1708,  1709,   477,  1710,  1711,  1712,
    1713,  1714,  1715,   478,  1716,  1717,  1718,  1719,  1720,  1544,
    1545,   479,   480,   481,   482,   483,   484,   485,   486,  1721,
     487,  1722,   488,  1723,   489,   490,   491,   492,   493,   494,
     495,   496,  1724,   497,  1725,  1726,  1727,  1728,  1729,  1730,
    1731,  1546,  1547,  1732,  1733,   498,   499,   500,   501,  1734,
     502,  1735,  1736,  1737,   503,  1738,   504,  1739,   505,  1740,
    1741,  1742,  1743,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   506,   535,   507,   508,   544,  1982,
    1983,  1744,  1745,  1746,   546,  1987,   587,  1989,   597,   598,
     634,  1747,   642,  1748,  1749,  1750,  1816,   643,   644,   645,
    1751,   651,  1752,  1753,  1754,   652,   655,   657,  1755,   658,
     663,   668,  1756,  1757,   669,   670,  1758,  1759,  1760,  1761,
     671,   672,   673,  1762,   511,   512,   513,   514,   515,   516,
     517,   674,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   675,
     535,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   676,   535,   680,  1763,  1764,  1765,  1766,  1767,   511,
     512,   513,   514,   515,   516,   517,   683,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   693,   535,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   535,   694,   695,   713,
     729,   733,  2089,   752,   753,   764,   754,   755,   840,   756,
     759,   760,   761,  2099,   765,   766,   789,   793,   814,   842,
     844,   846,   854,   856,   863,   866,   864,  1768,  1769,  1770,
    1771,  1772,   867,  1773,   321,   868,   872,   870,   871,   873,
     874,   875,   876,   877,  1476,   878,   879,   880,   881,   883,
     884,   885,   886,   887,   890,   889,   888,   898,   891,   896,
    2127,   899,   900,   907,   917,   911,   921,   922,   923,   928,
     930,  1644,  1645,  1646,  1647,  1648,  1649,   931,  1650,   932,
    1651,   934,   933,  2145,  1652,  1653,  1654,   937,  1655,   938,
     939,  2150,   940,   944,  1656,  1657,  1658,  1659,  1660,   946,
    2156,   947,   941,   945,   968,   970,   942,   978,  1661,   962,
     984,    16,  1028,  1042,  2165,  2166,  1043,  1044,  1662,  1663,
    1049,  1050,  1664,  1051,   -83,  1095,  1098,  1665,  1666,  1667,
    1668,  1669,  1099,  1100,  1670,  1104,  1671,  1672,  1673,  1105,
    1107,  1674,  1675,  1108,  1676,  1677,  1678,  1109,  1119,  1120,
    1679,  1122,  1126,  1127,  1134,  1135,  1136,   925,  1139,  1140,
    1141,  1142,  1143,  1146,  1680,  1151,  1168,  1165,  1166,  1681,
    1167,  1170,  1169,  1172,  1682,  1683,  1684,  1176,  1190,  1189,
    1193,  1685,  1686,  1200,  1687,  1688,  1689,  1690,  1201,  1202,
    1691,  1203,  1939,  1693,  1694,  1695,  1196,  1696,  1204,  1697,
    1698,  1217,  1699,  1229,  1700,  1701,  1230,  1702,  1703,  1704,
    1705,  1233,  1239,  1234,  1249,  1276,  1706,  1251,  1707,  1252,
    1708,  1709,  1257,  1710,  1711,  1712,  1713,  1714,  1715,  1287,
    1716,  1717,  1718,  1719,  1720,  1277,  1288,  2245,  1289,  1278,
    1279,  1280,  1281,  1291,  1293,  1721,  1295,  1722,  1296,  1723,
    1282,   -85,  1330,  1290,  2257,  1333,  1335,  1339,  1724,  1342,
    1725,  1726,  1727,  1728,  1729,  1730,  1731,  1292,  1343,  1732,
    1733,  1294,  1352,  1356,  1355,  1734,  1357,  1735,  1736,  1737,
    1379,  1738,  1380,  1739,  1358,  1740,  1741,  1742,  1743,  1417,
    1395,  1419,  1422,  1381,  1424,  1382,  1432,  1392,  1437,  1438,
    1436,  1441,  2005,  2006,  1430,  1443,  1448,  1744,  1745,  1746,
    1393,  1394,  1452,  1457,  1454,  1458,  1409,  1747,  1459,  1748,
    1749,  1750,  1410,  1411,  1412,  1413,  1751,  1414,  1752,  1753,
    1754,  1462,  1442,  1472,  1755,  1446,  1447,  1449,  1756,  1757,
    1460,  1468,  1758,  1759,  1760,  1761,  1473,  2319,   977,  1762,
     511,   512,   513,   514,   515,   516,   517,  1474,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  1483,   535,  1569,  1492,  1568,
    1572,  1576,  1493,  1577,  1510,  1557,  1511,  1512,  1513,  1594,
    1763,  1764,  1765,  1766,  1767,  1514,   511,   512,   513,   514,
     515,   516,   517,  1515,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,  1516,   535,  1644,  1645,  1646,  1647,  1648,  1649,  1525,
    1650,  1528,  1651,  1558,  1589,  1595,  1652,  1653,  1654,  1564,
    1655,  1599,  1600,  1615,  1531,  1602,  1656,  1657,  1658,  1659,
    1660,  1612,  1618,  1613,  1619,  1566,  1567,  1573,  1620,  1574,
    1661,  1575,  1582,  1768,  1769,  1770,  1771,  1772,  1584,  1773,
    1662,  1663,  1587,  1622,  1664,  1588,  1596,  1597,  1598,  1665,
    1666,  1667,  1668,  1669,  1601,  1625,  1670,  1631,  1671,  1672,
    1673,  1632,  1633,  1674,  1675,  1634,  1676,  1677,  1678,  1635,
    1636,  1637,  1679,  1639,  1776,  1775,  1778,  1780,  1784,  1782,
    1787,  1794,  1795,  1797,  1796,  1800,  1680,  1820,  1814,  1821,
    1825,  1681,  1827,  1851,  1856,  1877,  1682,  1683,  1684,  1860,
    1878,  1879,  1880,  1685,  1686,  1881,  1687,  1688,  1689,  1690,
    1887,  1891,  1691,  1894,  2071,  1693,  1694,  1695,  1897,  1696,
    1900,  1697,  1698,  1898,  1699,  1902,  1700,  1701,  1907,  1702,
    1703,  1704,  1705,  1909,  1910,  1915,  1920,  1916,  1706,  1922,
    1707,  1923,  1708,  1709,  1925,  1710,  1711,  1712,  1713,  1714,
    1715,  1917,  1716,  1717,  1718,  1719,  1720,  1928,  1930,  1946,
    1931,  1932,  1949,  1933,  1936,  1955,  1937,  1721,  1960,  1722,
    1947,  1723,  1948,  1952,  1954,  1957,  1959,  1961,  1980,  1984,
    1724,  1991,  1725,  1726,  1727,  1728,  1729,  1730,  1731,  1962,
    1990,  1732,  1733,  1993,  2008,  2009,  2015,  1734,  2014,  1735,
    1736,  1737,  2016,  1738,  2018,  1739,  2045,  1740,  1741,  1742,
    1743,  2019,  2020,  2046,  2048,  2049,  2054,  2060,  2061,  2062,
    2076,  2064,  2065,  2066,  2080,  2075,  2087,  2088,  2090,  1744,
    1745,  1746,  2096,  2094,  2100,  2101,  2106,  2110,  2111,  1747,
    2112,  1748,  1749,  1750,  2113,  2115,  2116,  2119,  1751,  2128,
    1752,  1753,  1754,  2130,  2131,  2136,  1755,  2137,  2132,  2133,
    1756,  1757,  2140,  2146,  1758,  1759,  1760,  1761,  2141,  2143,
    2144,  1762,   511,   512,   513,   514,   515,   516,   517,  2147,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,  2148,   535,  2149,
    2151,  2154,  2157,  2159,  2155,  2158,  2160,  2161,  2167,   993,
    2164,  2171,  1763,  1764,  1765,  1766,  1767,  2173,   511,   512,
     513,   514,   515,   516,   517,  2177,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,  2176,   535,  1644,  1645,  1646,  1647,  1648,
    1649,  2178,  1650,  2179,  1651,   994,  2192,  2180,  1652,  1653,
    1654,  2183,  1655,  2187,  2193,  2194,  2199,  2200,  1656,  1657,
    1658,  1659,  1660,  2201,  2203,  2206,  2204,  2207,  2208,  2209,
    2210,  2211,  1661,  2213,  2214,  1768,  1769,  1770,  1771,  1772,
    2216,  1773,  1662,  1663,  2220,  2218,  1664,  2219,  2227,  2232,
    2222,  1665,  1666,  1667,  1668,  1669,  2224,  2223,  1670,  2235,
    1671,  1672,  1673,  2226,  2236,  1674,  1675,  2228,  1676,  1677,
    1678,  2237,  2242,  2247,  1679,  2243,  2250,  2251,  2252,  2253,
    2258,  2263,  2254,  2255,  2256,  2272,  2273,  2265,  1680,  2274,
    2275,  2277,  2281,  1681,  2286,  2287,  2290,  2291,  1682,  1683,
    1684,  2292,  2294,  2293,  2296,  1685,  1686,  2305,  1687,  1688,
    1689,  1690,  2297,  2300,  1691,  2306,  2074,  1693,  1694,  1695,
    2303,  1696,  2304,  1697,  1698,  2307,  1699,  1968,  1700,  1701,
    2309,  1702,  1703,  1704,  1705,  2313,  2312,  2314,  2316,  2317,
    1706,  2320,  1707,  2318,  1708,  1709,  2328,  1710,  1711,  1712,
    1713,  1714,  1715,  2330,  1716,  1717,  1718,  1719,  1720,  2333,
    2335,  2336,  2338,  2343,  2339,  2345,  2344,  2340,  2341,  1721,
    2352,  1722,  2349,  1723,  2357,  2362,  2358,  2367,  2376,  2389,
    2395,  2365,  1724,  2398,  1725,  1726,  1727,  1728,  1729,  1730,
    1731,  2399,  2400,  1732,  1733,  2401,  2402,  2403,   316,  1734,
    1484,  1735,  1736,  1737,  1328,  1738,  2040,  1739,   689,  1740,
    1741,  1742,  1743,  1583,   858,  1981,  1259,   374,  1886,   966,
     843,   967,  2175,  2329,  1125,  2284,  2337,   869,  1354,   160,
     682,  1744,  1745,  1746,  2118,  1808,  2097,  1788,  1804,   974,
     897,  1747,  1161,  1748,  1749,  1750,  2377,  1177,   656,  1919,
    1751,   394,  1752,  1753,  1754,     0,     0,     0,  1755,     0,
       0,     0,  1756,  1757,     0,  1242,  1758,  1759,  1760,  1761,
       0,     0,     0,  1762,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   995,     0,     0,  1763,  1764,  1765,  1766,  1767,     0,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,  1644,  1645,  1646,
    1647,  1648,  1649,     0,  1650,     0,  1651,  1002,     0,     0,
    1652,  1653,  1654,     0,  1655,     0,     0,     0,     0,     0,
    1656,  1657,  1658,  1659,  1660,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1661,     0,     0,  1768,  1769,  1770,
    1771,  1772,     0,  1773,  1662,  1663,     0,     0,  1664,     0,
       0,     0,     0,  1665,  1666,  1667,  1668,  1669,     0,     0,
    1670,     0,  1671,  1672,  1673,     0,     0,  1674,  1675,     0,
    1676,  1677,  1678,     0,     0,     0,  1679,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1680,     0,     0,     0,     0,  1681,     0,     0,     0,     0,
    1682,  1683,  1684,     0,     0,     0,     0,  1685,  1686,     0,
    1687,  1688,  1689,  1690,     0,     0,  1691,     0,  2081,  1693,
    1694,  1695,     0,  1696,     0,  1697,  1698,     0,  1699,     0,
    1700,  1701,     0,  1702,  1703,  1704,  1705,     0,     0,     0,
       0,     0,  1706,     0,  1707,     0,  1708,  1709,     0,  1710,
    1711,  1712,  1713,  1714,  1715,     0,  1716,  1717,  1718,  1719,
    1720,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1721,     0,  1722,     0,  1723,     0,     0,     0,     0,
       0,     0,     0,     0,  1724,     0,  1725,  1726,  1727,  1728,
    1729,  1730,  1731,     0,     0,  1732,  1733,     0,     0,     0,
       0,  1734,     0,  1735,  1736,  1737,     0,  1738,     0,  1739,
       0,  1740,  1741,  1742,  1743,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1744,  1745,  1746,     0,     0,     0,     0,
       0,     0,     0,  1747,     0,  1748,  1749,  1750,     0,     0,
       0,     0,  1751,     0,  1752,  1753,  1754,     0,     0,     0,
    1755,     0,     0,     0,  1756,  1757,     0,     0,  1758,  1759,
    1760,  1761,     0,     0,     0,  1762,   511,   512,   513,   514,
     515,   516,   517,     0,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,     0,   535,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1003,     0,     0,  1763,  1764,  1765,  1766,
    1767,     0,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,     0,  1651,  1004,
       0,     0,  1652,  1653,  1654,     0,  1655,     0,     0,     0,
       0,     0,  1656,  1657,  1658,  1659,  1660,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1661,     0,     0,  1768,
    1769,  1770,  1771,  1772,     0,  1773,  1662,  1663,     0,     0,
    1664,     0,     0,     0,     0,  1665,  1666,  1667,  1668,  1669,
       0,     0,  1670,     0,  1671,  1672,  1673,     0,     0,  1674,
    1675,     0,  1676,  1677,  1678,     0,     0,     0,  1679,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1680,     0,     0,     0,     0,  1681,     0,     0,
       0,     0,  1682,  1683,  1684,     0,     0,     0,     0,  1685,
    1686,     0,  1687,  1688,  1689,  1690,     0,     0,  1691,     0,
    2082,  1693,  1694,  1695,     0,  1696,     0,  1697,  1698,     0,
    1699,     0,  1700,  1701,     0,  1702,  1703,  1704,  1705,     0,
       0,     0,     0,     0,  1706,     0,  1707,     0,  1708,  1709,
       0,  1710,  1711,  1712,  1713,  1714,  1715,     0,  1716,  1717,
    1718,  1719,  1720,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1721,     0,  1722,     0,  1723,     0,     0,
       0,     0,     0,     0,     0,     0,  1724,     0,  1725,  1726,
    1727,  1728,  1729,  1730,  1731,     0,     0,  1732,  1733,     0,
       0,     0,     0,  1734,     0,  1735,  1736,  1737,     0,  1738,
       0,  1739,     0,  1740,  1741,  1742,  1743,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1744,  1745,  1746,     0,     0,
       0,     0,     0,     0,     0,  1747,     0,  1748,  1749,  1750,
       0,     0,     0,     0,  1751,     0,  1752,  1753,  1754,     0,
       0,     0,  1755,     0,     0,     0,  1756,  1757,     0,     0,
    1758,  1759,  1760,  1761,     0,     0,     0,  1762,   511,   512,
     513,   514,   515,   516,   517,     0,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,     0,   535,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1005,     0,     0,  1763,  1764,
    1765,  1766,  1767,     0,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,  1644,  1645,  1646,  1647,  1648,  1649,     0,  1650,     0,
    1651,  1007,     0,     0,  1652,  1653,  1654,     0,  1655,     0,
       0,     0,     0,     0,  1656,  1657,  1658,  1659,  1660,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1661,     0,
       0,  1768,  1769,  1770,  1771,  1772,     0,  1773,  1662,  1663,
       0,     0,  1664,     0,     0,     0,     0,  1665,  1666,  1667,
    1668,  1669,     0,     0,  1670,     0,  1671,  1672,  1673,     0,
       0,  1674,  1675,     0,  1676,  1677,  1678,     0,     0,     0,
    1679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1680,     0,     0,     0,     0,  1681,
       0,     0,     0,     0,  1682,  1683,  1684,     0,     0,     0,
       0,  1685,  1686,     0,  1687,  1688,  1689,  1690,     0,     0,
    1691,     0,  2083,  1693,  1694,  1695,     0,  1696,     0,  1697,
    1698,     0,  1699,     0,  1700,  1701,     0,  1702,  1703,  1704,
    1705,     0,     0,     0,     0,     0,  1706,     0,  1707,     0,
    1708,  1709,     0,  1710,  1711,  1712,  1713,  1714,  1715,     0,
    1716,  1717,  1718,  1719,  1720,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1721,     0,  1722,     0,  1723,
       0,     0,     0,     0,     0,     0,     0,     0,  1724,     0,
    1725,  1726,  1727,  1728,  1729,  1730,  1731,     0,     0,  1732,
    1733,     0,     0,     0,     0,  1734,     0,  1735,  1736,  1737,
       0,  1738,     0,  1739,     0,  1740,  1741,  1742,  1743,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1744,  1745,  1746,
       0,     0,     0,     0,     0,     0,     0,  1747,     0,  1748,
    1749,  1750,     0,     0,     0,     0,  1751,     0,  1752,  1753,
    1754,     0,     0,     0,  1755,     0,     0,     0,  1756,  1757,
       0,     0,  1758,  1759,  1760,  1761,     0,     0,     0,  1762,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1008,     0,     0,
    1763,  1764,  1765,  1766,  1767,     0,   511,   512,   513,   514,
     515,   516,   517,     0,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,     0,   535,  1644,  1645,  1646,  1647,  1648,  1649,     0,
    1650,     0,  1651,  1009,     0,     0,  1652,  1653,  1654,     0,
    1655,     0,     0,     0,     0,     0,  1656,  1657,  1658,  1659,
    1660,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1661,     0,     0,  1768,  1769,  1770,  1771,  1772,     0,  1773,
    1662,  1663,     0,     0,  1664,     0,     0,     0,     0,  1665,
    1666,  1667,  1668,  1669,     0,     0,  1670,     0,  1671,  1672,
    1673,     0,     0,  1674,  1675,     0,  1676,  1677,  1678,     0,
       0,     0,  1679,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1680,     0,     0,     0,
       0,  1681,     0,     0,     0,     0,  1682,  1683,  1684,     0,
       0,     0,     0,  1685,  1686,     0,  1687,  1688,  1689,  1690,
       0,     0,  1691,     0,  2084,  1693,  1694,  1695,     0,  1696,
       0,  1697,  1698,     0,  1699,     0,  1700,  1701,     0,  1702,
    1703,  1704,  1705,     0,     0,     0,     0,     0,  1706,     0,
    1707,     0,  1708,  1709,     0,  1710,  1711,  1712,  1713,  1714,
    1715,     0,  1716,  1717,  1718,  1719,  1720,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1721,     0,  1722,
       0,  1723,     0,     0,     0,     0,     0,     0,     0,     0,
    1724,     0,  1725,  1726,  1727,  1728,  1729,  1730,  1731,     0,
       0,  1732,  1733,     0,     0,     0,     0,  1734,     0,  1735,
    1736,  1737,     0,  1738,     0,  1739,     0,  1740,  1741,  1742,
    1743,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1744,
    1745,  1746,     0,     0,     0,     0,     0,     0,     0,  1747,
       0,  1748,  1749,  1750,     0,     0,     0,     0,  1751,     0,
    1752,  1753,  1754,     0,     0,     0,  1755,     0,     0,     0,
    1756,  1757,     0,     0,  1758,  1759,  1760,  1761,     0,     0,
       0,  1762,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1015,
       0,     0,  1763,  1764,  1765,  1766,  1767,     0,   511,   512,
     513,   514,   515,   516,   517,     0,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,     0,   535,  1644,  1645,  1646,  1647,  1648,
    1649,     0,  1650,     0,  1651,  1017,     0,     0,  1652,  1653,
    1654,     0,  1655,     0,     0,     0,     0,     0,  1656,  1657,
    1658,  1659,  1660,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1661,     0,     0,  1768,  1769,  1770,  1771,  1772,
       0,  1773,  1662,  1663,     0,     0,  1664,     0,     0,     0,
       0,  1665,  1666,  1667,  1668,  1669,     0,     0,  1670,     0,
    1671,  1672,  1673,     0,     0,  1674,  1675,     0,  1676,  1677,
    1678,     0,     0,     0,  1679,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1680,     0,
       0,     0,     0,  1681,     0,     0,     0,     0,  1682,  1683,
    1684,     0,     0,     0,     0,  1685,  1686,     0,  1687,  1688,
    1689,  1690,     0,     0,  1691,     0,  2085,  1693,  1694,  1695,
       0,  1696,     0,  1697,  1698,     0,  1699,     0,  1700,  1701,
       0,  1702,  1703,  1704,  1705,     0,     0,     0,     0,     0,
    1706,     0,  1707,     0,  1708,  1709,     0,  1710,  1711,  1712,
    1713,  1714,  1715,     0,  1716,  1717,  1718,  1719,  1720,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1721,
       0,  1722,     0,  1723,     0,     0,     0,     0,     0,     0,
       0,     0,  1724,     0,  1725,  1726,  1727,  1728,  1729,  1730,
    1731,     0,     0,  1732,  1733,     0,     0,     0,     0,  1734,
       0,  1735,  1736,  1737,     0,  1738,     0,  1739,     0,  1740,
    1741,  1742,  1743,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1744,  1745,  1746,     0,     0,     0,     0,     0,     0,
       0,  1747,     0,  1748,  1749,  1750,     0,     0,     0,     0,
    1751,     0,  1752,  1753,  1754,     0,     0,     0,  1755,     0,
       0,     0,  1756,  1757,     0,     0,  1758,  1759,  1760,  1761,
       0,     0,     0,  1762,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1022,     0,     0,  1763,  1764,  1765,  1766,  1767,     0,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,  1644,  1645,  1646,
    1647,  1648,  1649,     0,  1650,     0,  1651,  1023,     0,     0,
    1652,  1653,  1654,     0,  1655,     0,     0,     0,     0,     0,
    1656,  1657,  1658,  1659,  1660,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1661,     0,     0,  1768,  1769,  1770,
    1771,  1772,     0,  1773,  1662,  1663,     0,     0,  1664,     0,
       0,     0,     0,  1665,  1666,  1667,  1668,  1669,     0,     0,
    1670,     0,  1671,  1672,  1673,     0,     0,  1674,  1675,     0,
    1676,  1677,  1678,     0,     0,     0,  1679,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1680,     0,     0,     0,     0,  1681,     0,     0,     0,     0,
    1682,  1683,  1684,     0,     0,     0,     0,  1685,  1686,     0,
    1687,  1688,  1689,  1690,     0,     0,  1691,     0,  2086,  1693,
    1694,  1695,     0,  1696,     0,  1697,  1698,     0,  1699,     0,
    1700,  1701,     0,  1702,  1703,  1704,  1705,     0,     0,     0,
       0,     0,  1706,     0,  1707,     0,  1708,  1709,     0,  1710,
    1711,  1712,  1713,  1714,  1715,     0,  1716,  1717,  1718,  1719,
    1720,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1721,     0,  1722,     0,  1723,     0,     0,     0,     0,
       0,     0,     0,     0,  1724,     0,  1725,  1726,  1727,  1728,
    1729,  1730,  1731,     0,     0,  1732,  1733,     0,     0,     0,
       0,  1734,     0,  1735,  1736,  1737,     0,  1738,     0,  1739,
       0,  1740,  1741,  1742,  1743,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1744,  1745,  1746,     0,     0,     0,     0,
       0,     0,     0,  1747,     0,  1748,  1749,  1750,     0,     0,
       0,     0,  1751,     0,  1752,  1753,  1754,     0,     0,     0,
    1755,     0,     0,     0,  1756,  1757,     0,     0,  1758,  1759,
    1760,  1761,     0,     0,     0,  1762,   511,   512,   513,   514,
     515,   516,   517,     0,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,     0,   535,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1024,     0,     0,  1763,  1764,  1765,  1766,
    1767,     0,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,     0,  1651,  1025,
       0,     0,  1652,  1653,  1654,     0,  1655,     0,     0,     0,
       0,     0,  1656,  1657,  1658,  1659,  1660,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1661,     0,     0,  1768,
    1769,  1770,  1771,  1772,     0,  1773,  1662,  1663,     0,     0,
    1664,     0,     0,     0,     0,  1665,  1666,  1667,  1668,  1669,
       0,     0,  1670,     0,  1671,  1672,  1673,     0,     0,  1674,
    1675,     0,  1676,  1677,  1678,     0,     0,     0,  1679,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1680,     0,     0,     0,     0,  1681,     0,     0,
       0,     0,  1682,  1683,  1684,     0,     0,     0,     0,  1685,
    1686,     0,  1687,  1688,  1689,  1690,     0,     0,  1691,     0,
    2169,  1693,  1694,  1695,     0,  1696,     0,  1697,  1698,     0,
    1699,     0,  1700,  1701,     0,  1702,  1703,  1704,  1705,     0,
       0,     0,     0,     0,  1706,     0,  1707,     0,  1708,  1709,
       0,  1710,  1711,  1712,  1713,  1714,  1715,     0,  1716,  1717,
    1718,  1719,  1720,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1721,     0,  1722,     0,  1723,     0,     0,
       0,     0,     0,     0,     0,     0,  1724,     0,  1725,  1726,
    1727,  1728,  1729,  1730,  1731,     0,     0,  1732,  1733,     0,
       0,     0,     0,  1734,     0,  1735,  1736,  1737,     0,  1738,
       0,  1739,     0,  1740,  1741,  1742,  1743,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1744,  1745,  1746,     0,     0,
       0,     0,     0,     0,     0,  1747,     0,  1748,  1749,  1750,
       0,     0,     0,     0,  1751,     0,  1752,  1753,  1754,     0,
       0,     0,  1755,     0,     0,     0,  1756,  1757,     0,     0,
    1758,  1759,  1760,  1761,     0,     0,     0,  1762,   511,   512,
     513,   514,   515,   516,   517,     0,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,     0,   535,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1037,     0,     0,  1763,  1764,
    1765,  1766,  1767,     0,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,  1644,  1645,  1646,  1647,  1648,  1649,     0,  1650,     0,
    1651,  1038,     0,     0,  1652,  1653,  1654,     0,  1655,     0,
       0,     0,     0,     0,  1656,  1657,  1658,  1659,  1660,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1661,     0,
       0,  1768,  1769,  1770,  1771,  1772,     0,  1773,  1662,  1663,
       0,     0,  1664,     0,     0,     0,     0,  1665,  1666,  1667,
    1668,  1669,     0,     0,  1670,     0,  1671,  1672,  1673,     0,
       0,  1674,  1675,     0,  1676,  1677,  1678,     0,     0,     0,
    1679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1680,     0,     0,     0,     0,  1681,
       0,     0,     0,     0,  1682,  1683,  1684,     0,     0,     0,
       0,  1685,  1686,     0,  1687,  1688,  1689,  1690,     0,     0,
    1691,     0,  2170,  1693,  1694,  1695,     0,  1696,     0,  1697,
    1698,     0,  1699,     0,  1700,  1701,     0,  1702,  1703,  1704,
    1705,     0,     0,     0,     0,     0,  1706,     0,  1707,     0,
    1708,  1709,     0,  1710,  1711,  1712,  1713,  1714,  1715,     0,
    1716,  1717,  1718,  1719,  1720,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1721,     0,  1722,     0,  1723,
       0,     0,     0,     0,     0,     0,     0,     0,  1724,     0,
    1725,  1726,  1727,  1728,  1729,  1730,  1731,     0,     0,  1732,
    1733,     0,     0,     0,     0,  1734,     0,  1735,  1736,  1737,
       0,  1738,     0,  1739,     0,  1740,  1741,  1742,  1743,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1744,  1745,  1746,
       0,     0,     0,     0,     0,     0,     0,  1747,     0,  1748,
    1749,  1750,     0,     0,     0,     0,  1751,     0,  1752,  1753,
    1754,     0,     0,     0,  1755,     0,     0,     0,  1756,  1757,
       0,     0,  1758,  1759,  1760,  1761,     0,     0,     0,  1762,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1039,     0,     0,
    1763,  1764,  1765,  1766,  1767,     0,   511,   512,   513,   514,
     515,   516,   517,     0,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,     0,   535,  1644,  1645,  1646,  1647,  1648,  1649,     0,
    1650,     0,  1651,  1041,     0,     0,  1652,  1653,  1654,     0,
    1655,     0,     0,     0,     0,     0,  1656,  1657,  1658,  1659,
    1660,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1661,     0,     0,  1768,  1769,  1770,  1771,  1772,     0,  1773,
    1662,  1663,     0,     0,  1664,     0,     0,     0,     0,  1665,
    1666,  1667,  1668,  1669,     0,     0,  1670,     0,  1671,  1672,
    1673,     0,     0,  1674,  1675,     0,  1676,  1677,  1678,     0,
       0,     0,  1679,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1680,     0,     0,     0,
       0,  1681,     0,     0,     0,     0,  1682,  1683,  1684,     0,
       0,     0,     0,  1685,  1686,     0,  1687,  1688,  1689,  1690,
       0,     0,  1691,     0,  2241,  1693,  1694,  1695,     0,  1696,
       0,  1697,  1698,     0,  1699,     0,  1700,  1701,     0,  1702,
    1703,  1704,  1705,     0,     0,     0,     0,     0,  1706,     0,
    1707,     0,  1708,  1709,     0,  1710,  1711,  1712,  1713,  1714,
    1715,     0,  1716,  1717,  1718,  1719,  1720,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1721,     0,  1722,
       0,  1723,     0,     0,     0,     0,     0,     0,     0,     0,
    1724,     0,  1725,  1726,  1727,  1728,  1729,  1730,  1731,     0,
       0,  1732,  1733,     0,     0,     0,     0,  1734,     0,  1735,
    1736,  1737,     0,  1738,     0,  1739,     0,  1740,  1741,  1742,
    1743,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1744,
    1745,  1746,     0,     0,     0,     0,     0,     0,     0,  1747,
       0,  1748,  1749,  1750,     0,     0,     0,     0,  1751,     0,
    1752,  1753,  1754,     0,     0,     0,  1755,     0,     0,     0,
    1756,  1757,     0,     0,  1758,  1759,  1760,  1761,     0,     0,
       0,  1762,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1052,
       0,     0,  1763,  1764,  1765,  1766,  1767,     0,   511,   512,
     513,   514,   515,   516,   517,     0,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,     0,   535,  1644,  1645,  1646,  1647,  1648,
    1649,     0,  1650,     0,  1651,  1061,     0,     0,  1652,  1653,
    1654,     0,  1655,     0,     0,     0,     0,     0,  1656,  1657,
    1658,  1659,  1660,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1661,     0,     0,  1768,  1769,  1770,  1771,  1772,
       0,  1773,  1662,  1663,     0,     0,  1664,     0,     0,     0,
       0,  1665,  1666,  1667,  1668,  1669,     0,     0,  1670,     0,
    1671,  1672,  1673,     0,     0,  1674,  1675,     0,  1676,  1677,
    1678,     0,     0,     0,  1679,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1680,     0,
       0,     0,     0,  1681,     0,     0,     0,     0,  1682,  1683,
    1684,     0,     0,     0,     0,  1685,  1686,     0,  1687,  1688,
    1689,  1690,     0,     0,  1691,     0,  2244,  1693,  1694,  1695,
       0,  1696,     0,  1697,  1698,     0,  1699,     0,  1700,  1701,
       0,  1702,  1703,  1704,  1705,     0,     0,     0,     0,     0,
    1706,     0,  1707,     0,  1708,  1709,     0,  1710,  1711,  1712,
    1713,  1714,  1715,     0,  1716,  1717,  1718,  1719,  1720,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1721,
       0,  1722,     0,  1723,     0,     0,     0,     0,     0,     0,
       0,     0,  1724,     0,  1725,  1726,  1727,  1728,  1729,  1730,
    1731,     0,     0,  1732,  1733,     0,     0,     0,     0,  1734,
       0,  1735,  1736,  1737,     0,  1738,     0,  1739,     0,  1740,
    1741,  1742,  1743,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1744,  1745,  1746,     0,     0,     0,     0,     0,     0,
       0,  1747,     0,  1748,  1749,  1750,     0,     0,     0,     0,
    1751,     0,  1752,  1753,  1754,     0,     0,     0,  1755,     0,
       0,     0,  1756,  1757,     0,     0,  1758,  1759,  1760,  1761,
       0,     0,     0,  1762,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1062,     0,     0,  1763,  1764,  1765,  1766,  1767,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,     0,   535,     0,  1644,  1645,  1646,
    1647,  1648,  1649,     0,  1650,     0,  1651,  1063,     0,     0,
    1652,  1653,  1654,     0,  1655,     0,     0,     0,     0,     0,
    1656,  1657,  1658,  1659,  1660,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1661,     0,     0,  1768,  1769,  1770,
    1771,  1772,     0,  1773,  1662,  1663,     0,     0,  1664,     0,
       0,     0,     0,  1665,  1666,  1667,  1668,  1669,     0,     0,
    1670,     0,  1671,  1672,  1673,     0,     0,  1674,  1675,     0,
    1676,  1677,  1678,     0,     0,     0,  1679,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1680,     0,     0,     0,     0,  1681,     0,     0,     0,     0,
    1682,  1683,  1684,     0,     0,     0,     0,  1685,  1686,     0,
    1687,  1688,  1689,  1690,     0,     0,  1691,     0,  2280,  1693,
    1694,  1695,     0,  1696,     0,  1697,  1698,     0,  1699,     0,
    1700,  1701,     0,  1702,  1703,  1704,  1705,     0,     0,     0,
       0,     0,  1706,     0,  1707,     0,  1708,  1709,     0,  1710,
    1711,  1712,  1713,  1714,  1715,     0,  1716,  1717,  1718,  1719,
    1720,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1721,     0,  1722,     0,  1723,     0,     0,     0,     0,
       0,     0,     0,     0,  1724,     0,  1725,  1726,  1727,  1728,
    1729,  1730,  1731,     0,     0,  1732,  1733,     0,     0,     0,
       0,  1734,     0,  1735,  1736,  1737,     0,  1738,     0,  1739,
       0,  1740,  1741,  1742,  1743,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
       0,     0,     0,  1744,  1745,  1746,     0,     0,   172,   173,
       0,     0,     0,  1747,     0,  1748,  1749,  1750,   174,   175,
       0,     0,  1751,     0,  1752,  1753,  1754,     0,     0,     0,
    1755,   176,     0,     0,  1756,  1757,     0,     0,  1758,  1759,
    1760,  1761,     0,     0,     0,  1762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,     0,     0,   178,     0,
       0,   179,   180,     0,     0,     0,     0,     0,     0,     0,
     181,     0,     0,  1064,     0,     0,  1763,  1764,  1765,  1766,
    1767,     0,     0,     0,     0,     0,     0,   182,     0,     0,
       0,   183,     0,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  1065,   535,
     511,   512,   513,   514,   515,   516,   517,   184,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,     0,     0,  1768,
    1769,  1770,  1771,  1772,     0,  1773,     0,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,   511,   512,   513,
     514,   515,   516,   517,   186,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   187,   188,     0,     0,
       0,     0,     0,     0,   189,   190,     0,     0,     0,   191,
       0,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   192,   535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   280,   281,   282,     0,     0,     0,
       0,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,     0,   294,   295,   296,     0,     0,   297,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,   511,   512,   513,   514,
     515,   516,   517,   174,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,     0,   535,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   699,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,   178,     0,     0,   179,   180,     0,     0,
       0,     0,     0,     0,     0,   181,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   511,   512,   513,   514,   515,
     516,   517,  1066,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
       0,   535,   511,   512,   513,   514,   515,   516,   517,  1067,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   700,   535,  1068,     0,     0,   185,
       0,     0,   511,   512,   513,   514,   515,   516,   517,   186,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,   511,   512,   513,   514,   515,   516,
     517,   187,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     701,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,     0,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   280,
     281,   282,     0,     0,     0,     0,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,     0,   294,   295,
     296,     0,     0,   297,   166,   167,   168,   169,   170,   171,
       0,     0,     0,     0,     0,  1074,     0,     0,   172,   173,
       0,     0,     0,     0,     0,     0,     0,     0,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   820,     0,     0,   514,   515,   516,   517,   821,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,     0,   535,     0,     0,
       0,     0,     0,   177,     0,     0,     0,     0,   178,     0,
       0,   179,   180,     0,     0,     0,     0,     0,     0,     0,
     181,     0,     0,     0,  1078,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   511,   512,   513,   514,   515,   516,
     517,  1079,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,   511,   512,   513,   514,   515,   516,   517,  1080,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,     0,   535,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1081,     0,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1082,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   187,     0,     0,     0,
       0,     0,     0,   822,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   280,   281,   282,     0,     0,     0,
       0,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,     0,   294,   295,   296,     0,     0,   823,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,   511,   512,   513,   514,
     515,   516,   517,   174,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,     0,   535,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   177,   535,
       0,     0,     0,   178,     0,     0,   179,   180,   511,   512,
     513,   514,   515,   516,   517,   181,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,  1086,   535,   511,   512,   513,   514,   515,
     516,   517,     0,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
    1087,   535,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
       0,     0,   511,   512,   513,   514,   515,   516,   517,   186,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   187,     0,  1088,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,     0,     0,     0,     0,     0,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,     0,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   280,
     281,   282,     0,     0,     0,     0,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,     0,   294,   295,
     296,     0,     0,   297,   166,   167,   168,   169,   170,   171,
       0,     0,     0,     0,     0,  1250,     0,     0,   172,   173,
       0,     0,     0,     0,     0,     0,     0,     0,   174,   740,
       0,     0,     0,     0,     0,   511,   512,   513,   514,   515,
     516,   517,  1497,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
       0,   535,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,     0,  1498,   178,     0,
       0,   179,   180,     0,     0,     0,     0,     0,     0,     0,
     181,     0,     0,     0,     0,     0,     0,   511,   512,   513,
     514,   515,   516,   517,  1509,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,   511,   512,   513,   514,   515,   516,
     517,  1519,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,   511,   512,   513,   514,   515,   516,   517,     0,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,     0,   535,     0,     0,
       0,  1535,     0,     0,   185,     0,     0,   511,   512,   513,
     514,   515,   516,   517,   186,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1536,     0,     0,   187,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   280,   281,   282,     0,     0,     0,
       0,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,     0,   294,   295,   296,     0,     0,   297,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
       0,     0,     0,   174,  1537,   511,   512,   513,   514,   515,
     516,   517,     0,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
       0,   535,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,   178,     0,     0,   179,   180,     0,     0,
       0,     0,     0,     0,     0,   181,  1540,     0,   511,   512,
     513,   514,   515,   516,   517,     0,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,  1541,   535,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   991,   511,   512,   513,   514,   515,   516,   517,
    1554,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,     0,   535,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1555,     0,     0,   185,
       0,     0,   511,   512,   513,   514,   515,   516,   517,   186,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,     0,  1556,     0,     0,     0,
       0,   187,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,     0,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   280,
     281,   282,     0,     0,     0,     0,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,     0,   294,   295,
     296,     0,     0,   297,   166,   167,   168,   169,   170,   171,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
       0,     0,     0,     0,  2029,     0,     0,     0,   174,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,     0,   535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,     0,     0,   178,     0,
       0,   179,   180,     0,     0,     0,     0,  2032,     0,     0,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   511,   512,   513,
     514,   515,   516,   517,  1470,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,  2033,   535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1026,     0,     0,     0,     0,     0,     0,
       0,     0,   511,   512,   513,   514,   515,   516,   517,  1485,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,  2034,     0,     0,   185,     0,     0,   511,   512,   513,
     514,   515,   516,   517,   186,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,     0,     0,
    1027,     0,     0,     0,     0,     0,   187,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   280,   281,   282,     0,     0,     0,
       0,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,     0,   294,   295,   296,     0,     0,   297,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,  1486,     0,     0,
       0,     0,     0,   174,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,   178,     0,     0,   179,   180,     0,     0,
       0,     0,     0,     0,     0,   181,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   804,     0,     0,     0,     0,
       0,     0,   511,   512,   513,   514,   515,   516,   517,  1475,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,   511,   512,   513,   514,   515,   516,   517,
     990,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,     0,   535,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   996,     0,     0,     0,   185,
       0,     0,   511,   512,   513,   514,   515,   516,   517,   186,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,   997,     0,     0,     0,     0,
       0,   187,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,     0,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   280,
     281,   282,     0,     0,     0,     0,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,     0,   294,   295,
     296,     0,     0,   297,   166,   167,   168,   169,   170,   171,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
       0,     0,   998,     0,     0,     0,     0,     0,   174,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,     0,   535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,     0,     0,   178,     0,
       0,   179,   180,     0,     0,     0,     0,     0,     0,     0,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     999,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1986,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   511,   512,   513,   514,   515,   516,
     517,  1000,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,   511,   512,   513,   514,   515,   516,   517,     0,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,     0,   535,     0,     0,
    1001,     0,     0,     0,   185,     0,     0,   511,   512,   513,
     514,   515,   516,   517,   186,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,     0,     0,
    1006,     0,     0,     0,     0,     0,   187,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   280,   281,   282,     0,     0,     0,
       0,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,     0,   294,   295,   296,     0,     0,   297,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,  1010,     0,     0,
       0,     0,     0,   174,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,   178,     0,     0,   179,   180,   511,   512,
     513,   514,   515,   516,   517,   181,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,     0,   535,     0,     0,     0,     0,  1988,
       0,     0,  1011,     0,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,  1012,
     535,   511,   512,   513,   514,   515,   516,   517,     0,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,     0,   535,     0,     0,
       0,     0,     0,     0,     0,  1016,     0,     0,     0,   185,
       0,     0,   511,   512,   513,   514,   515,   516,   517,   186,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,  1018,     0,     0,     0,     0,
       0,   187,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,     0,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   280,
     281,   282,     0,     0,     0,     0,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,     0,   294,   295,
     296,     0,     0,   297,   166,   167,   168,   169,   170,   171,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
       0,     0,  1019,     0,     0,     0,     0,     0,   174,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,     0,   535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,  1020,     0,   178,     0,
       0,   179,   180,   511,   512,   513,   514,   515,   516,   517,
     181,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,     0,   535,
       0,     0,  1029,     0,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,  1030,
     535,   511,   512,   513,   514,   515,   516,   517,     0,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,     0,   535,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1031,     0,     0,     0,   185,     0,     0,   511,   512,   513,
     514,   515,   516,   517,   186,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,     0,     0,
    1032,     0,     0,     0,     0,     0,   187,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   280,   281,   282,     0,     0,     0,
       0,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,     0,   294,   295,   296,     0,     0,   297,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     511,   512,   513,   514,   515,   516,   517,  1033,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,   511,   512,   513,   514,   515,   516,
     517,  1034,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,     0,     0,   511,   512,   513,   514,   515,
     516,   517,  1035,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
       0,   535,   511,   512,   513,   514,   515,   516,   517,  1036,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  1040,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,     0,     0,   511,   512,
     513,   514,   515,   516,   517,  1053,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,     0,   535,   511,   512,   513,   514,   515,
     516,   517,     0,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
       0,   535,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,     0,   535,   511,   512,   513,   514,
     515,   516,   517,     0,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,     0,   535,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,     0,   535,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,     0,  1054,     0,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  1055,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,  1056,   535,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,  1057,     0,   511,   512,   513,   514,   515,
     516,   517,     0,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
    1058,   535,     0,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  1059,   535,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  1060,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,  1071,     0,   511,   512,
     513,   514,   515,   516,   517,     0,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,  1072,   535,   511,   512,   513,   514,   515,
     516,   517,     0,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
    1073,   535,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,  1077,   535,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,  1083,   535,   511,   512,   513,   514,
     515,   516,   517,     0,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,  1084,   535,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  1085,   535,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,     0,  1112,     0,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  1489,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,  1494,   535,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,     0,  1495,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,  1496,     0,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  1499,   535,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  1500,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,  1501,     0,   511,   512,
     513,   514,   515,   516,   517,     0,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,  1502,   535,   511,   512,   513,   514,   515,
     516,   517,     0,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
    1503,   535,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,  1504,   535,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,  1507,   535,   511,   512,   513,   514,
     515,   516,   517,     0,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,  1508,   535,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  1520,   535,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,     0,  1521,     0,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  1534,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,  1538,   535,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,     0,  1539,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,     0,   535,
       0,  1548,     0,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  1549,   535,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  1550,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,     0,  1551,     0,   511,   512,
     513,   514,   515,   516,   517,     0,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,  1552,   535,   511,   512,   513,   514,   515,
     516,   517,     0,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
    1553,   535,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,  1626,   535,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,  1830,   535,   511,   512,   513,   514,
     515,   516,   517,     0,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,  1899,   535,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  1963,   535,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,     0,  1994,     0,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  1995,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,  1996,   535,   511,   512,   513,   514,   515,   516,
     517,     0,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,     0,
     535,  1997,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,  1998,     0,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  2007,   535,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,  2024,   535,   511,   512,   513,
     514,   515,   516,   517,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,    58,  2025,     0,   511,   512,
     513,   514,   515,   516,   517,     0,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,  2026,   535,   511,   512,   513,   514,   515,
     516,   517,     0,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
    2027,   535,   511,   512,   513,   514,   515,   516,   517,     0,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,  2028,   535,     0,
      59,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2030,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    62,     0,     0,     0,     0,     0,
       0,  2031,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2057,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,     0,   535,     0,    64,  2063,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,    66,     0,     0,     0,
       0,     0,    67,     0,     0,  2067,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2072,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,  1831,  1832,     0,     0,     0,  1833,     0,
    1834,     0,     0,   511,   512,   513,   514,   515,   516,   517,
    2182,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,     0,   535,
       0,     0,     0,  1835,  1836,     0,  1837,     0,     0,     0,
       0,  2188,     0,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,  2212,   535,
    -740,  -740,  -740,  -740,     0,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,  2225,    71,   511,   512,   513,
     514,   515,   516,   517,  1362,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   535,     0,  1363,  2238,     1,     0,     0,
       0,     2,     0,     0,  1364,     0,     0,  1365,     0,  1366,
       0,     0,  1367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2239,     0,     0,     0,  1368,     3,     0,
       0,     0,     0,     4,  1369,  1370,     0,  1838,  1839,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
    2285,   599,   600,     0,   601,     0,   602,   603,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     7,  1371,
       0,     0,   604,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1372,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   605,   606,   607,   608,     0,     0,
       0,     0,     0,   609,     0,     0,     0,     8,     0,     0,
    1373,     0,   610,     0,     0,     0,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,     0,     0,   401,     0,
       0,     0,   611,     0,     0,     0,     0,     0,     0,  1374,
     612,     0,     0,     0,     0,     0,   979,  1375,     0,     0,
       0,     0,     0,     0,     0,   613,    12,     0,    13,     0,
       0,     0,   614,     0,     0,   615,    14,     0,   616,   617,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   618,     0,     0,     0,     0,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
    1248,     0,     0,     0,     0,    17,     0,  1376,    18,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,   619,
     620,     0,     0,   621,   622,     0,     0,     0,     0,   623,
       0,   624,     0,     0,     0,     0,   625,   626,     0,     0,
       0,     0,   627,     0,   628,     0,     0,     0,     0,     0,
     629,     0,   630,   631,     0,     0,     0,     0,   632,   511,
     512,   513,   514,   515,   516,   517,     0,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,     0,   535,   511,   512,   513,   514,
     515,   516,   517,     0,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,     0,   535,   511,   512,   513,   514,   515,   516,   517,
       0,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,     0,   535,
     511,   512,   513,   514,   515,   516,   517,     0,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,     0,   535,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1809,
       0,     0,     0,     0,     0,  1256,   510,     0,     0,     0,
       0,     0,     0,   511,   512,   513,   514,   515,   516,   517,
    1247,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,     0,   535,
       0,     0,     0,     0,     0,     0,     0,  1481,     0,     0,
       0,     0,     0,     0,   536,   511,   512,   513,   514,   515,
     516,   517,  1810,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
       0,   535,     0,     0,     0,     0,     0,     0,     0,   511,
     512,   513,   514,   515,   516,   517,  1021,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,     0,   535,     0,     0,     0,     0,
       0,     0,   511,   512,   513,   514,   515,   516,   517,  1097,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,     0,   535,     0,
       0,     0,     0,     0,     0,   511,   512,   513,   514,   515,
     516,   517,  1321,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
       0,   535
};

static const yytype_int16 yycheck[] =
{
      96,  1116,  1172,  1464,  1344,   314,   308,  1204,   304,  1132,
    1133,   358,   667,  1449,  1447,  1138,   556,   852,  1188,  1225,
       3,  1580,     8,    49,   912,   913,   977,     3,   199,  1199,
     918,   154,   920,    87,     5,    51,    48,   199,  1359,  1360,
       6,   136,   974,    78,   976,    99,    20,    97,   136,     4,
       3,     4,     5,     6,     7,     8,    90,  1378,    87,  1794,
       6,   240,   240,   108,   159,   161,   162,     3,  1800,   308,
      20,   107,    18,   375,    74,    51,   172,   173,   174,    74,
      16,   135,   178,   274,  1853,  1854,   112,    36,   268,   143,
      18,    36,     3,   216,   219,  1864,  1865,    10,    11,    12,
      13,    14,    15,    16,    18,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     3,    36,   266,   107,   240,   252,   277,   266,
       4,     5,     6,     7,   133,   204,   274,  2289,   154,   193,
    1091,   268,     4,     3,   277,     3,   139,    18,   580,  1582,
       3,    54,    55,  1523,  1524,   154,   177,     3,     3,   241,
     172,    98,  1532,  1533,     5,    36,   201,   230,    51,    97,
       3,    74,     5,    51,   197,   241,   100,    60,   155,    20,
    2332,  2333,    60,    28,   167,   197,   841,   164,   242,   271,
     173,    51,     3,    51,   215,   258,   120,   192,    72,   268,
     216,   297,   857,   635,    85,   271,  2358,    78,   399,   202,
     210,   391,   149,   258,   150,   210,   228,    28,   397,   269,
     249,   399,   258,   277,   258,   241,   261,   193,   399,   184,
    1999,  2000,  2001,  2002,  2003,  2004,   538,   399,  1361,  1409,
     193,   227,   113,   266,  2013,   240,   371,   193,  2017,   545,
     399,  1421,  2021,  1450,  1460,   183,   167,   399,   241,   195,
     397,   399,   173,   396,   391,  1435,   248,  1826,   267,   197,
     184,  1106,  1593,  1422,   397,   156,    10,    11,    12,    13,
      14,    15,    16,   397,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   397,    36,   156,   399,   401,   277,   210,  1240,   964,
    1242,   399,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   863,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   351,
     436,   437,   438,   397,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,    48,  1795,  1796,   666,  2100,   462,   463,  1319,  2101,
     396,   467,   468,   319,   236,   237,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   381,   495,
     496,   497,   136,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,     3,   397,   511,   512,   513,   514,   515,
     396,  1882,   396,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     679,   873,   874,   682,   540,   398,   396,    74,  2217,   398,
     546,   883,  2221,   398,   277,  1570,   154,   266,   697,   333,
     334,   335,   376,   377,   378,   379,   266,  1637,  1617,  1639,
     381,   266,   136,  1843,  1844,  1845,  1846,  1847,  1848,   274,
    1629,   327,   328,   329,   330,  1855,   397,   400,     3,  1859,
     113,    78,    40,  1863,     3,    85,    18,     3,   930,   931,
     932,  1389,     3,  1391,  1392,     3,   107,     3,    71,     3,
     197,     3,     4,     5,     6,     7,     8,  1666,   216,  1980,
      71,    78,     5,   397,    38,   266,  1962,    55,  1677,  2298,
    2299,     3,  2301,  2302,     3,     3,   266,   259,   252,   266,
      67,   228,     9,     3,    71,  1885,     3,   134,  1697,    39,
     846,   898,   899,    20,   124,   125,   157,     3,   280,   107,
       3,    75,  1711,    14,    95,   192,   156,    18,   664,    59,
     193,  1720,   124,   125,    71,    97,   399,   134,     3,  1119,
      63,   245,  1122,   210,   252,    71,   100,    84,   397,  1021,
    1022,     3,    78,   252,   108,   691,   692,   397,   113,   126,
     696,   396,     3,    87,   399,   113,   120,   703,   139,   157,
    1780,  1760,   851,   240,   201,    99,  1786,    10,    11,    12,
      13,    14,    15,    16,   155,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   252,    36,   201,   954,     0,   156,   134,    95,
     156,   135,   138,   351,   217,   156,   397,   258,   156,   143,
     156,   183,   156,    49,   351,   399,   217,   397,   136,   155,
     397,   202,    84,   187,   261,   197,   395,  1332,   164,     3,
     208,   397,  1805,    84,   156,   193,   154,   156,   219,  2150,
     221,   396,   397,   241,   208,     3,   227,   137,   396,   397,
       3,   193,  1134,    51,   261,   275,     3,    62,   176,   193,
     258,    66,    60,   103,     3,   201,    51,   398,   399,   815,
     816,   252,   818,   275,     3,    60,   112,   823,    10,    11,
      12,    13,    14,    15,    16,   203,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,  2214,    36,   269,   146,   216,   242,   114,
     200,  1958,   117,   155,   154,  2135,  1936,   156,    71,  2139,
       3,  1920,   615,     3,    71,   261,  1925,   132,   621,     3,
     623,    84,  1952,     3,  1954,     3,   176,    84,    28,    29,
      30,    31,    32,    33,    34,   235,    36,   152,   246,  2232,
     398,   399,  1104,  1112,   155,   160,    10,    11,    12,    13,
      14,    15,    16,  2153,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   927,    36,   905,   906,  2296,   908,   909,   910,   252,
     371,     3,   914,   915,   916,    13,    14,   919,    16,    76,
     171,    19,   281,  1092,   399,    10,    11,    12,    13,    14,
      15,    16,  1101,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    36,     3,   979,     3,   981,   398,   399,   103,   103,
     223,   224,   988,   989,   249,   991,   251,  2267,  2268,   995,
    2270,  2271,     3,   103,    45,    46,  1002,  1003,  1004,  1005,
     399,  1007,  1008,  1009,     3,   270,   398,   399,  1014,  1015,
    2069,  1017,   398,   399,  2094,  2040,   153,  1023,  1024,  1025,
       3,   146,   146,  2334,    33,    34,   163,    36,  2087,   154,
     154,  1037,  1038,  1039,   159,  1041,   146,    32,    33,    34,
     177,    36,    82,    83,   154,    51,  1052,     3,  2359,  2360,
     397,   176,   176,   190,   281,  1061,  1062,  1063,  1064,  1065,
    1066,  1067,  1068,   397,  1070,   197,   176,  1216,  1074,     3,
    1076,   197,  1078,  1079,  1080,  1081,  1082,  2388,   215,     3,
    1086,  1087,  1088,   398,   399,   398,   399,   396,   398,   399,
     397,  1097,   197,  1099,  1100,   398,   399,   398,   399,     3,
     103,   238,   281,   398,   399,   398,   399,  1113,  2167,   281,
    1452,   398,   399,   281,  1120,   281,    10,    11,    12,    13,
      14,    15,    16,     4,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     3,    36,   146,   245,   602,   603,   604,   605,     8,
     607,   154,   281,   610,   611,   612,   398,   399,   398,   399,
     617,   618,   619,   281,  1170,   622,   398,   399,   398,   399,
     281,  1320,     9,   176,  1323,     3,  1325,   396,  1327,    10,
      11,    12,    13,    14,    15,    16,   397,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   397,    36,   398,   399,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,  1230,    36,    36,  1233,     4,     5,
       4,     5,   397,  1239,   398,   399,   398,   399,   398,   399,
     398,   399,  1248,   397,  1250,   398,   399,   398,   399,   397,
    1256,  1257,   398,   399,   399,    10,    11,    12,    13,    14,
      15,    16,   397,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     397,    36,   398,   399,   398,   399,    10,    11,    12,    13,
      14,    15,    16,   397,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   397,    36,   398,   399,  1321,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   397,    36,   398,   399,   398,   399,   398,   399,   398,
     399,  1347,   398,   399,   398,   399,   398,   399,   397,  1355,
     397,    10,    11,    12,    13,    14,    15,    16,   397,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   397,    36,   398,   399,
     398,   399,   397,    10,    11,    12,    13,    14,    15,    16,
     397,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   397,    36,
      11,    12,    13,    14,    15,    16,   397,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   397,    36,  1442,    10,    11,    12,
      13,    14,    15,    16,   397,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   397,    36,    18,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  1485,
      36,   397,  1488,   398,   399,   398,   399,   398,   399,   398,
     399,  1497,  1498,     3,    48,   398,   399,    51,   397,    53,
     398,   399,    56,  1509,   398,   399,   398,   399,   398,   399,
      57,    58,  1518,  1519,   398,   399,    51,    71,   398,   399,
     398,   399,   398,   399,    78,    79,   398,   399,   397,  1535,
    1536,  1537,   398,   399,  1540,  1541,   397,  1543,    53,  1545,
     397,  1547,   398,   399,   398,   399,   398,   399,  1554,  1555,
    1556,    57,    58,   396,   397,    53,   398,   399,   397,   113,
     398,   399,  1568,  1569,   396,   397,    44,   398,   399,   398,
     399,  1577,  1578,   398,   399,     3,     4,     5,     6,     7,
       8,   397,    10,   397,    12,   398,   399,     3,    16,    17,
      18,  1597,    20,   398,   399,  1601,   398,   399,    26,    27,
      28,    29,    30,   859,   860,  1611,  1108,  1109,   181,   397,
     164,   397,    40,  1574,  1575,   397,   397,   397,   397,  1625,
     397,    71,    50,    51,   397,   397,    54,   397,   397,   397,
     397,    59,    60,    61,    62,    63,   397,   397,    66,   193,
      68,    69,    70,   398,   399,    73,    74,   201,    76,    77,
      78,   397,   397,   397,    82,   397,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    96,    36,
     397,   397,   397,   101,   398,   399,   397,   397,   106,   107,
     108,   397,   397,   397,   397,   113,   114,   397,   116,   117,
     118,   119,   397,   277,   122,   397,   124,   125,   126,   127,
     397,   129,   397,   131,   132,   397,   134,   261,   136,   137,
     397,   139,   140,   141,   142,   397,   397,   397,   397,   397,
     148,   397,   150,   397,   152,   153,   397,   155,   156,   157,
     158,   159,   160,   397,   162,   163,   164,   165,   166,   398,
     399,   397,   397,   397,   397,   397,   397,   397,   397,   177,
     397,   179,   397,   181,   397,   397,   397,   397,   397,   397,
     397,   397,   190,   397,   192,   193,   194,   195,   196,   197,
     198,   398,   399,   201,   202,   397,   397,   397,   397,   207,
     397,   209,   210,   211,   397,   213,   397,   215,   397,   217,
     218,   219,   220,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   397,    36,   397,   397,   397,  1815,
    1816,   239,   240,   241,   397,  1821,   245,  1823,     3,     3,
     197,   249,     3,   251,   252,   253,   399,   197,   281,     3,
     258,     3,   260,   261,   262,   197,   281,     3,   266,     3,
      28,     3,   270,   271,     3,     3,   274,   275,   276,   277,
       3,     3,     3,   281,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     3,
      36,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     3,    36,     3,   322,   323,   324,   325,   326,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     3,    36,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    36,    36,     3,   400,   398,
     398,   398,  1948,   398,   398,     5,   398,   398,     3,   398,
     398,   398,   398,  1959,   398,   398,   398,   398,   397,     3,
       3,     3,   398,     3,   163,     3,   196,   395,   396,   397,
     398,   399,     3,   401,   277,     5,     3,    42,    42,     3,
       3,     3,     3,     3,  1990,     3,     3,     3,     3,     3,
     245,     3,     3,     3,   379,     3,     5,   397,     5,     5,
    2006,   397,   397,   397,   397,    64,   397,   397,   397,     3,
       3,     3,     4,     5,     6,     7,     8,     3,    10,     3,
      12,   399,   398,  2029,    16,    17,    18,     3,    20,     3,
     197,  2037,   398,     3,    26,    27,    28,    29,    30,   281,
    2046,     3,   197,   197,     3,     3,    51,   398,    40,   198,
     398,   241,   398,   350,  2060,  2061,   350,   350,    50,    51,
     398,   350,    54,   350,   241,   397,   397,    59,    60,    61,
      62,    63,   397,   397,    66,   136,    68,    69,    70,   399,
     164,    73,    74,   164,    76,    77,    78,   164,   163,   197,
      82,   163,   197,   197,     3,   222,   222,    36,     3,   245,
     245,     5,     5,     5,    96,     4,   193,     5,     5,   101,
       5,   397,   400,   397,   106,   107,   108,   213,     3,   197,
       3,   113,   114,     3,   116,   117,   118,   119,     3,   197,
     122,    94,   124,   125,   126,   127,   140,   129,     3,   131,
     132,     3,   134,    63,   136,   137,   179,   139,   140,   141,
     142,    20,   397,   199,    91,     4,   148,   400,   150,   398,
     152,   153,   161,   155,   156,   157,   158,   159,   160,   397,
     162,   163,   164,   165,   166,   350,   397,  2183,   397,   350,
     350,   350,   350,     5,     5,   177,   397,   179,   397,   181,
     350,   241,   141,   350,  2200,     3,   140,   398,   190,     3,
     192,   193,   194,   195,   196,   197,   198,   350,     3,   201,
     202,   350,     3,   164,   397,   207,   164,   209,   210,   211,
       3,   213,     3,   215,   397,   217,   218,   219,   220,   268,
      78,     3,    60,   398,   140,   398,   268,   398,     3,     3,
     197,     3,   398,   399,   245,   164,   164,   239,   240,   241,
     398,   398,     3,     6,     4,     4,   397,   249,     4,   251,
     252,   253,   397,   397,   397,   397,   258,   397,   260,   261,
     262,   399,   397,   164,   266,   397,   397,   397,   270,   271,
     397,   212,   274,   275,   276,   277,     3,  2293,   399,   281,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   397,    36,   148,   398,    63,
     163,     3,   398,    20,   398,   398,   397,   397,   397,   193,
     322,   323,   324,   325,   326,   397,    10,    11,    12,    13,
      14,    15,    16,   397,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   397,    36,     3,     4,     5,     6,     7,     8,   397,
      10,   397,    12,   398,     3,     3,    16,    17,    18,   398,
      20,    52,     3,   213,   397,     4,    26,    27,    28,    29,
      30,   164,     5,   164,   240,   398,   398,   397,     4,   397,
      40,   397,   397,   395,   396,   397,   398,   399,   399,   401,
      50,    51,   397,     4,    54,   397,   397,   397,   397,    59,
      60,    61,    62,    63,   397,   397,    66,     3,    68,    69,
      70,     3,     3,    73,    74,     3,    76,    77,    78,     3,
       3,   397,    82,   397,     3,   118,   266,   397,     3,   268,
     140,   397,   397,     3,   397,   397,    96,   258,   399,    20,
     197,   101,     4,   351,   350,   398,   106,   107,   108,   350,
     398,   398,   398,   113,   114,   398,   116,   117,   118,   119,
       3,   397,   122,     3,   124,   125,   126,   127,     3,   129,
       3,   131,   132,     5,   134,     3,   136,   137,     5,   139,
     140,   141,   142,     5,    51,   397,    60,   397,   148,   398,
     150,     4,   152,   153,    60,   155,   156,   157,   158,   159,
     160,   397,   162,   163,   164,   165,   166,     3,   398,   217,
     398,   398,   277,   399,   397,   268,   397,   177,   164,   179,
     399,   181,   397,   397,   397,   271,   397,   164,     3,   399,
     190,    88,   192,   193,   194,   195,   196,   197,   198,   397,
     397,   201,   202,   398,    63,   198,   398,   207,   397,   209,
     210,   211,   398,   213,   397,   215,     3,   217,   218,   219,
     220,   398,   398,    20,    43,    18,     3,   397,   397,   164,
       3,   398,   398,   398,     3,   398,    60,     3,    78,   239,
     240,   241,   136,   397,   397,   397,     3,   397,     3,   249,
      63,   251,   252,   253,    63,     3,     3,   397,   258,     3,
     260,   261,   262,    63,   398,   350,   266,   350,   398,   398,
     270,   271,   350,     5,   274,   275,   276,   277,   350,   398,
     398,   281,    10,    11,    12,    13,    14,    15,    16,     5,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     5,    36,   214,
     140,     3,   269,     3,   398,   207,     3,     5,    60,   399,
       5,   277,   322,   323,   324,   325,   326,   398,    10,    11,
      12,    13,    14,    15,    16,   131,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    77,    36,     3,     4,     5,     6,     7,
       8,   156,    10,   166,    12,   399,   207,   276,    16,    17,
      18,   397,    20,   397,     5,     3,   204,    20,    26,    27,
      28,    29,    30,   399,     3,   398,   101,   398,   398,   398,
     398,   398,    40,   399,     3,   395,   396,   397,   398,   399,
     398,   401,    50,    51,   398,   397,    54,   397,   399,   159,
     397,    59,    60,    61,    62,    63,   398,   397,    66,     3,
      68,    69,    70,   398,   398,    73,    74,   399,    76,    77,
      78,   398,   397,     5,    82,   398,     3,   398,     3,     3,
       3,     3,   397,   397,   397,     4,     4,   399,    96,   231,
     231,   397,     3,   101,   398,   207,     3,     3,   106,   107,
     108,     3,     3,    20,     3,   113,   114,   180,   116,   117,
     118,   119,   398,   398,   122,   180,   124,   125,   126,   127,
     398,   129,   398,   131,   132,     3,   134,   399,   136,   137,
      20,   139,   140,   141,   142,     3,   245,     3,   398,   398,
     148,   240,   150,   398,   152,   153,     5,   155,   156,   157,
     158,   159,   160,   397,   162,   163,   164,   165,   166,   397,
     397,   229,   398,     3,   398,     3,     5,   398,   398,   177,
       5,   179,   228,   181,   398,     3,   397,   151,   271,   174,
     250,    97,   190,   197,   192,   193,   194,   195,   196,   197,
     198,   197,   191,   201,   202,   191,     5,     5,   103,   207,
    1250,   209,   210,   211,  1100,   213,  1886,   215,   402,   217,
     218,   219,   220,  1351,   550,  1814,   994,   129,  1571,   668,
     540,   675,  2080,  2311,   869,  2243,  2320,   565,  1127,    91,
     391,   239,   240,   241,  1990,  1462,  1958,  1439,  1451,   681,
     596,   249,   917,   251,   252,   253,  2364,   934,   367,  1615,
     258,   165,   260,   261,   262,    -1,    -1,    -1,   266,    -1,
      -1,    -1,   270,   271,    -1,   975,   274,   275,   276,   277,
      -1,    -1,    -1,   281,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   399,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,   399,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   395,   396,   397,
     398,   399,    -1,   401,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   399,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,   399,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   395,
     396,   397,   398,   399,    -1,   401,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,   399,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   395,   396,   397,   398,   399,    -1,   401,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,
     322,   323,   324,   325,   326,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,   399,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   395,   396,   397,   398,   399,    -1,   401,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   399,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,   399,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   395,   396,   397,   398,   399,
      -1,   401,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
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
      -1,   399,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,   399,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   395,   396,   397,
     398,   399,    -1,   401,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   399,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,   399,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   395,
     396,   397,   398,   399,    -1,   401,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,   399,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   395,   396,   397,   398,   399,    -1,   401,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,
     322,   323,   324,   325,   326,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,   399,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   395,   396,   397,   398,   399,    -1,   401,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   399,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,   399,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   395,   396,   397,   398,   399,
      -1,   401,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
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
      -1,   399,    -1,    -1,   322,   323,   324,   325,   326,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,   399,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   395,   396,   397,
     398,   399,    -1,   401,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,   239,   240,   241,    -1,    -1,    17,    18,
      -1,    -1,    -1,   249,    -1,   251,   252,   253,    27,    28,
      -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,    -1,
     266,    40,    -1,    -1,   270,   271,    -1,    -1,   274,   275,
     276,   277,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,   399,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   399,    36,
      10,    11,    12,    13,    14,    15,    16,   146,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,   395,
     396,   397,   398,   399,    -1,   401,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,   226,    -1,    -1,
      -1,    -1,    -1,    -1,   233,   234,    -1,    -1,    -1,   238,
      -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
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
     389,   390,    -1,   392,   393,   394,    -1,    -1,   397,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    10,    11,    12,    13,
      14,    15,    16,    27,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   399,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   399,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   178,    36,   399,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   225,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,
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
     394,    -1,    -1,   397,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    13,    14,    15,    16,    47,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,   399,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   399,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   399,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   399,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   399,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    -1,   232,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
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
     389,   390,    -1,   392,   393,   394,    -1,    -1,   397,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    10,    11,    12,    13,
      14,    15,    16,    27,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    72,    36,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   399,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     399,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,   399,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   275,    -1,    -1,    -1,    -1,    -1,   281,   282,   283,
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
     394,    -1,    -1,   397,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   399,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,   399,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   399,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   399,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,   399,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   399,    -1,    -1,   225,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
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
     389,   390,    -1,   392,   393,   394,    -1,    -1,   397,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,   399,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,   399,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   399,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    10,    11,    12,    13,    14,    15,    16,
     399,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,    -1,
      -1,   225,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
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
     394,    -1,    -1,   397,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,   399,    -1,    -1,    -1,    27,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,   399,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   113,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   399,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   140,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,   399,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
     398,    -1,    -1,    -1,    -1,    -1,   225,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
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
     389,   390,    -1,   392,   393,   394,    -1,    -1,   397,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,   398,    -1,    -1,
      -1,    -1,    -1,    27,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   113,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     398,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,
      -1,   225,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
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
     394,    -1,    -1,   397,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,   398,    -1,    -1,    -1,    -1,    -1,    27,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   398,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
     398,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
     398,    -1,    -1,    -1,    -1,    -1,   225,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
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
     389,   390,    -1,   392,   393,   394,    -1,    -1,   397,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,   398,    -1,    -1,
      -1,    -1,    -1,    27,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   398,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   398,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,
      -1,   225,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
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
     394,    -1,    -1,   397,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,   398,    -1,    -1,    -1,    -1,    -1,    27,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,   398,    -1,    77,    -1,
      -1,    80,    81,    10,    11,    12,    13,    14,    15,    16,
      89,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,   398,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   398,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     398,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
     398,    -1,    -1,    -1,    -1,    -1,   225,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
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
     389,   390,    -1,   392,   393,   394,    -1,    -1,   397,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   398,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   398,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   398,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   398,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   398,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   398,    18,    19,    20,    21,
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
      30,    31,    32,    33,    34,    -1,    36,    -1,   398,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   398,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   398,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,   398,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     398,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   398,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   398,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,   398,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   398,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     398,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   398,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   398,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   398,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   398,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   398,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   398,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   398,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,   398,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,   398,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   398,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   398,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,   398,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   398,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     398,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   398,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   398,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   398,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   398,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   398,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   398,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   398,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,   398,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,   398,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   398,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   398,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,   398,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   398,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     398,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   398,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   398,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   398,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   398,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   398,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   398,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   398,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,   398,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,   398,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   398,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   398,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,   398,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   398,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     398,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   398,    36,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,    -1,    -1,    -1,    -1,    -1,
      -1,   398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   398,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,   202,   398,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,   221,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,   398,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   398,    -1,    -1,    -1,   261,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,    -1,
     111,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     398,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,   144,   145,    -1,   147,    -1,    -1,    -1,
      -1,   398,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   398,    36,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,   398,   371,    10,    11,    12,
      13,    14,    15,    16,    18,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    39,   398,    37,    -1,    -1,
      -1,    41,    -1,    -1,    48,    -1,    -1,    51,    -1,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   398,    -1,    -1,    -1,    71,    68,    -1,
      -1,    -1,    -1,    73,    78,    79,    -1,   278,   279,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
     398,    61,    62,    -1,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   113,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,   157,    -1,    -1,
     164,    -1,   132,    -1,    -1,    -1,    -1,    -1,   168,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,   193,
     160,    -1,    -1,    -1,    -1,    -1,   253,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,   206,    -1,   208,    -1,
      -1,    -1,   182,    -1,    -1,   185,   216,    -1,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
     240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,   255,    -1,   261,   258,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,   239,
     240,    -1,    -1,   243,   244,    -1,    -1,    -1,    -1,   249,
      -1,   251,    -1,    -1,    -1,    -1,   256,   257,    -1,    -1,
      -1,    -1,   262,    -1,   264,    -1,    -1,    -1,    -1,    -1,
     270,    -1,   272,   273,    -1,    -1,    -1,    -1,   278,    10,
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
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,   136,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     124,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    10,    11,    12,    13,    14,
      15,    16,   112,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    51,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    50,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    50,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     403,   442,   443,   482,   486,   488,   495,   496,   499,   500,
     501,   502,   503,   505,   508,   515,   516,   518,   534,   535,
     544,   547,   549,   550,   551,   574,   577,   584,   585,   588,
     591,   592,   595,   219,   252,   371,   252,     3,    10,    95,
     102,   138,   139,   155,   202,   219,   221,   227,   246,   247,
     261,   371,   556,     3,   483,    95,   139,   155,   202,   219,
     221,   227,   252,   371,   526,     3,     3,     3,    28,   252,
     252,   526,     8,   227,   575,   576,   461,   252,   526,   545,
       3,    95,     0,   395,   498,     3,     3,     3,     3,   397,
     216,   156,   548,     3,   155,     3,     3,    85,   156,     3,
       3,     3,   548,   246,   155,   548,   252,   536,     3,   136,
     154,   176,   203,   484,     3,   156,     3,   156,     3,     3,
     156,     3,   156,     3,     3,   156,     3,   156,     3,   156,
     103,   146,   154,   159,   176,   527,   171,   399,     3,     3,
     527,     9,    20,     3,   113,   399,     3,     4,     5,     6,
       7,     8,    17,    18,    27,    28,    40,    72,    77,    80,
      81,    89,   106,   110,   146,   183,   193,   225,   226,   233,
     234,   238,   263,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   320,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   372,
     373,   374,   375,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   392,   393,   394,   397,   404,   462,
     463,     3,   154,   176,     3,   167,   173,   381,   397,   465,
     466,   467,   468,   471,   481,     3,   403,    54,    55,    74,
     210,   277,   396,   504,   100,   120,    38,    75,   100,   108,
     120,   187,   208,   269,    55,   208,   593,     3,     4,     5,
       6,     7,     8,   193,   398,   586,   587,   139,   202,   281,
       3,    51,     3,   397,   197,     3,   156,   281,   397,    39,
      59,   589,   197,     3,     3,    85,   156,     3,   548,   397,
     537,   396,   485,     3,   484,   136,   399,   281,   281,   281,
     281,   197,   281,    74,   210,   487,   281,   281,     3,     4,
     245,     3,   404,   404,   576,   396,   397,     9,   404,   404,
     404,   275,   404,   441,   396,   397,    36,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   404,
       3,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    36,    51,   464,   136,   159,
     399,   399,   396,   464,   397,     3,   397,   443,   465,   240,
     399,    76,   153,   177,   190,   215,   238,   472,   474,    51,
     470,   470,    53,    53,    44,     3,   108,   258,   506,    71,
      84,     3,    84,    71,   217,     3,    71,    84,    71,   217,
       3,    84,     3,    71,    84,    71,   277,   245,    18,   184,
     376,   377,   378,   379,   594,   398,   399,     3,     3,    61,
      62,    64,    66,    67,    82,   114,   115,   116,   117,   123,
     132,   152,   160,   175,   182,   185,   188,   189,   205,   239,
     240,   243,   244,   249,   251,   256,   257,   262,   264,   270,
     272,   273,   278,   570,   197,     3,    16,   150,   195,   578,
     579,   580,     3,   197,   281,     3,   578,   107,   157,   258,
     590,     3,   197,     3,   156,   281,   593,     3,     3,   538,
     136,   245,   539,    28,   274,   444,   266,   465,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   240,   397,   528,
       3,   240,   528,     3,   404,   409,   413,   404,   404,   441,
     124,   125,   275,     3,     3,   400,   411,   418,   404,    65,
     178,   254,   404,   439,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   398,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   398,
     404,   404,   404,   398,   404,   404,   404,   404,   404,   404,
      28,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   398,   398,   398,   398,   398,   404,   404,   398,
     398,   398,   404,   404,     5,   398,   398,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   398,
     404,   404,   404,   398,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   398,   404,   404,   404,   404,   404,
       6,    18,   193,   319,   397,    13,    14,    16,    19,   404,
      40,    47,   232,   397,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
       3,   465,     3,   463,     3,   497,     3,   133,   154,   267,
     478,   469,   464,   404,   398,   398,     3,   546,   466,   177,
     215,   475,   467,   163,   196,   473,     3,     3,     5,   504,
      42,    42,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,   570,     3,   245,     3,     3,     3,     5,     3,
     379,     5,     5,   277,     5,    63,     5,   587,   397,   397,
     397,   566,   566,   566,   566,   566,   566,   397,   566,   566,
     566,    64,   567,   567,   566,   566,   566,   397,   567,   566,
     567,   397,   397,   397,    18,    36,    78,   113,     3,   570,
       3,     3,     3,   398,   399,   266,   397,     3,     3,   197,
     398,   197,    51,   509,     3,   197,   281,     3,   154,   216,
     351,   396,   397,   572,   573,   398,   399,     4,   236,   237,
     540,   404,   198,   454,   465,   444,   485,   487,     3,   533,
       3,   529,   271,   443,   533,   271,   443,   399,   398,   253,
     124,   125,   404,   404,   398,   404,   410,   443,   136,   399,
     398,   136,   404,   399,   399,   399,   398,   398,   398,   398,
     398,   398,   399,   399,   399,   399,   398,   399,   399,   399,
     398,   398,   398,   398,   399,   399,   398,   399,   398,   398,
     398,    51,   399,   399,   399,   399,   321,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   399,   399,   399,
     398,   399,   350,   350,   350,   398,   399,   398,   399,   398,
     350,   350,   399,   398,   398,   398,   398,   398,   398,   398,
     398,   399,   399,   399,   399,   399,   399,   399,   399,   398,
     399,   398,   398,   398,   399,   398,   399,   398,   399,   399,
     399,   399,   399,   398,   398,   398,   399,   399,   399,     6,
     193,   414,   416,   404,   404,   397,   404,    50,   397,   397,
     397,   405,   400,   444,   136,   399,   464,   164,   164,   164,
     443,   478,   398,    20,   396,   399,   444,   473,   473,   163,
     197,   467,   163,    45,    46,   506,   197,   197,    78,   134,
     201,   261,   570,   570,     3,   222,   222,   565,   570,     3,
     245,   245,     5,     5,   578,   578,     5,   568,   569,   568,
     568,     4,   571,   568,   568,   568,   569,   569,   568,   568,
     568,   571,   569,   568,   569,     5,     5,     5,   193,   400,
     397,   404,   397,   570,   570,   570,   213,   580,   268,   391,
       3,   327,   328,   329,   330,   493,   494,   266,   397,   197,
       3,    51,    60,     3,   223,   224,   140,   510,   266,   397,
       3,     3,   197,    94,     3,    71,    78,   134,   138,   155,
     164,   201,   261,   557,   558,   564,   470,     3,    87,    99,
     135,   143,   193,   242,   277,   397,   541,   542,   543,    63,
     179,   457,   444,    20,   199,   399,   519,   398,   399,   397,
     530,   519,   530,   519,   409,   404,   404,   124,   253,    91,
     399,   400,   398,   404,   404,   404,   136,   161,   440,   440,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   570,   570,   404,   404,   404,     4,   350,   350,   350,
     350,   350,   350,   404,   404,   404,   404,   397,   397,   397,
     350,     5,   350,     5,   350,   397,   397,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   409,   443,   415,
     417,    50,   404,   408,   404,   406,   412,   407,   412,   443,
     141,   445,   465,     3,   478,   140,   479,   479,   479,   398,
     470,   404,     3,     3,   454,   467,   404,   197,   266,   476,
     477,   467,     3,   507,   507,   397,   164,   164,   397,   565,
     565,   570,    18,    39,    48,    51,    53,    56,    71,    78,
      79,   113,   130,   164,   193,   201,   261,   517,   565,     3,
       3,   398,   398,   398,   399,   259,   280,    82,    83,   398,
     399,   398,   398,   398,   398,    78,   404,   493,    62,    66,
     114,   117,   132,   152,   160,   249,   251,   270,   581,   397,
     397,   397,   397,   397,   397,   398,   399,   268,   493,     3,
     266,   397,    60,   582,   140,    40,   107,   157,   241,   258,
     245,   511,   268,   493,   266,   397,   197,     3,     3,   397,
     572,     3,   397,   164,   155,   164,   397,   397,   164,   397,
     398,   399,     3,   443,     4,    87,   249,     6,     4,     4,
     397,   542,   399,     3,     5,   455,   456,   404,   212,   596,
     113,   404,   164,     3,     3,   113,   404,   532,   399,   519,
     519,   124,   404,   397,   410,   140,   398,   398,   399,   398,
     404,   404,   398,   398,   398,   398,   398,   399,   399,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   399,
     398,   397,   397,   397,   397,   397,   397,   398,   399,   399,
     398,   398,   419,   420,   421,   397,   398,   399,   397,   398,
     399,   397,   437,   438,   398,   399,   399,   399,   398,   398,
     399,   399,   398,   399,   398,   399,   398,   399,   398,   398,
     398,   398,   398,   398,   399,   399,   399,   398,   398,   409,
     443,   404,   443,   443,   398,   443,   398,   398,    63,   148,
     449,   444,   163,   397,   397,   397,     3,    20,    20,   396,
     457,   404,   397,   477,   399,   277,   404,   397,   397,     3,
     563,   517,   517,   565,   193,     3,   397,   397,   397,    52,
       3,   397,     4,     4,     5,     6,     7,    72,   333,   334,
     335,   397,   164,   164,   517,   213,    51,    60,     5,   240,
       4,   569,     4,   569,   569,   397,   398,   398,    51,    60,
     493,     3,     3,     3,     3,     3,     3,   397,   398,   397,
     268,   391,   493,   582,     3,     4,     5,     6,     7,     8,
      10,    12,    16,    17,    18,    20,    26,    27,    28,    29,
      30,    40,    50,    51,    54,    59,    60,    61,    62,    63,
      66,    68,    69,    70,    73,    74,    76,    77,    78,    82,
      96,   101,   106,   107,   108,   113,   114,   116,   117,   118,
     119,   122,   124,   125,   126,   127,   129,   131,   132,   134,
     136,   137,   139,   140,   141,   142,   148,   150,   152,   153,
     155,   156,   157,   158,   159,   160,   162,   163,   164,   165,
     166,   177,   179,   181,   190,   192,   193,   194,   195,   196,
     197,   198,   201,   202,   207,   209,   210,   211,   213,   215,
     217,   218,   219,   220,   239,   240,   241,   249,   251,   252,
     253,   258,   260,   261,   262,   266,   270,   271,   274,   275,
     276,   277,   281,   322,   323,   324,   325,   326,   395,   396,
     397,   398,   399,   401,   583,   118,     3,   512,   266,   513,
     397,   398,   268,   493,     3,   266,   397,   140,   557,    78,
     134,   201,   261,   404,   397,   397,   397,     3,   460,   460,
     397,   563,   553,   572,   558,   570,   542,   398,   543,    49,
     112,   396,   447,   447,   399,   181,   399,     3,    28,   597,
     258,    20,   398,   399,   531,   197,   521,     4,   404,   404,
     398,   104,   105,   109,   111,   144,   145,   147,   278,   279,
     404,   404,   404,   423,   424,   422,   425,   426,   427,   404,
     404,   351,   450,   450,   450,   428,   350,     4,     5,   432,
     350,     4,     5,   436,   450,   450,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   398,   398,   398,
     398,   398,   404,   446,   404,   454,   445,     3,   480,   480,
     480,   397,   404,   404,     3,   596,   460,     3,     5,   398,
       3,   560,     3,   559,   398,   399,   517,     5,   404,     5,
      51,    78,   201,   261,   404,   397,   397,   397,   404,   581,
      60,   582,   398,     4,   404,    60,   582,   398,     3,   489,
     398,   398,   398,   399,   493,   493,   397,   397,   398,   124,
     582,   582,   582,   582,   582,   582,   217,   399,   397,   277,
     514,   493,   397,   398,   397,   268,   493,   271,   398,   397,
     164,   164,   397,   398,   560,   460,   460,   398,   399,   398,
     559,   398,    48,   172,   197,   228,   351,   552,   565,   398,
       3,   456,   404,   404,   399,   520,   113,   404,   113,   404,
     397,    88,   596,   398,   398,   398,   398,   398,   398,   450,
     450,   450,   450,   450,   450,   398,   399,   398,    63,   198,
     452,   452,   452,   450,   397,   398,   398,   450,   397,   398,
     398,   450,   452,   452,   398,   398,   398,   398,   398,   399,
     398,   398,   399,   399,   399,   447,   277,   399,   448,   457,
     449,   398,   399,   398,   398,     3,    20,   398,    43,    18,
     398,   399,   398,   399,     3,   398,   399,   398,   398,   399,
     397,   397,   164,   398,   398,   398,   398,   398,    51,    60,
     582,   124,   398,   582,   124,   398,     3,   398,   398,   493,
       3,   124,   124,   124,   124,   124,   124,    60,     3,   404,
      78,   398,   493,   493,   397,   398,   136,   553,   572,   404,
     397,   397,   563,   398,   398,   398,     3,   398,     5,    20,
     397,     3,    63,    63,   447,     3,     3,   525,   532,   397,
     522,   452,   452,   452,   452,   452,   452,   404,     3,   451,
      63,   398,   398,   398,   452,   429,   350,   350,   452,   433,
     350,   350,   452,   398,   398,   404,     5,     5,     5,   214,
     404,   140,   458,   454,     3,   398,   404,   269,   207,     3,
       3,     5,    57,    58,     5,   404,   404,    60,   582,   124,
     124,   277,   490,   398,   398,   489,    77,   131,   156,   166,
     276,   582,   398,   397,   398,   398,   493,   397,   398,   560,
     559,   398,   207,     5,     3,   107,   248,   204,   268,   204,
      20,   399,   398,     3,   101,   523,   398,   398,   398,   398,
     398,   398,   398,   399,     3,   453,   398,   450,   397,   397,
     398,   450,   397,   397,   398,   398,   398,   399,   399,   447,
     230,   258,   159,   459,   457,     3,   398,   398,   398,   398,
     582,   124,   397,   398,   124,   404,   398,     5,   398,   398,
       3,   398,     3,     3,   397,   397,   397,   404,     3,   398,
     399,    90,   258,     3,   447,   399,   452,   430,   431,   452,
     434,   435,     4,     4,   231,   231,   460,   397,    57,    58,
     124,     3,   491,   492,   490,   398,   398,   207,   396,   397,
       3,     3,     3,    20,     3,   524,     3,   398,   450,   450,
     398,   450,   450,   398,   398,   180,   180,     3,   561,    20,
     398,   399,   245,     3,     3,   561,   398,   398,   398,   404,
     240,   447,   452,   452,   452,   452,   398,   399,     5,   492,
     397,   396,   397,   397,   398,   397,   229,   525,   398,   398,
     398,   398,   562,     3,     5,     3,   561,   561,   562,   228,
     554,   555,     5,    18,    97,   183,   197,   398,   397,   398,
     398,    18,     3,   398,   399,    97,   269,   151,   137,   200,
     235,   107,   258,   561,   562,   562,   271,   555,    98,   149,
      74,   192,   210,   240,    74,   192,   210,   240,   398,   174,
     113,   193,   113,   193,   562,   250,     4,   184,   197,   197,
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
#line 491 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 497 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 498 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 500 "parser/evoparser.y"
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
#line 513 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 515 "parser/evoparser.y"
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
#line 543 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 551 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 559 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 565 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 572 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 573 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 574 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 575 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 576 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 577 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 578 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 579 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 580 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 581 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 582 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 583 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 584 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 585 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 586 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 587 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 588 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 589 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 590 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 592 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 597 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 598 "parser/evoparser.y"
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
#line 606 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 607 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 608 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 609 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 610 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 611 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 616 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 618 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 621 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 622 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 623 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 624 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 625 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 628 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 629 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 633 "parser/evoparser.y"
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
#line 642 "parser/evoparser.y"
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
#line 660 "parser/evoparser.y"
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
#line 669 "parser/evoparser.y"
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
#line 688 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 689 "parser/evoparser.y"
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
#line 749 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 758 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 764 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 769 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 771 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 773 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 778 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 783 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 791 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 66:
#line 793 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 67:
#line 795 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 68:
#line 797 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 69:
#line 799 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 70:
#line 801 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 71:
#line 803 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 72:
#line 805 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 73:
#line 807 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 74:
#line 809 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 75:
#line 816 "parser/evoparser.y"
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

  case 76:
#line 827 "parser/evoparser.y"
    {
        /* Diagnostic sibling — same arg shape, returns strategy string. */
        emit("CALL 5 HNSW_HYBRID_EXPLAIN %d %s", (yyvsp[(9) - (12)].intval), (yyvsp[(11) - (12)].strval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_HYBRID_EXPLAIN, (yyvsp[(3) - (12)].exprval), (yyvsp[(5) - (12)].exprval), (yyvsp[(7) - (12)].exprval), "HNSW_HYBRID_EXPLAIN");
        if (n) { n->val.intval = (yyvsp[(9) - (12)].intval); n->subquery_sql = strdup((yyvsp[(11) - (12)].strval)); }
        free((yyvsp[(11) - (12)].strval));
        (yyval.exprval) = n;
    ;}
    break;

  case 77:
#line 837 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 79:
#line 841 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 80:
#line 841 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 81:
#line 842 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 82:
#line 842 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 83:
#line 843 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 84:
#line 844 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 85:
#line 851 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 86:
#line 852 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 87:
#line 859 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 88:
#line 860 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 89:
#line 870 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 90:
#line 874 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 91:
#line 875 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 92:
#line 876 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 877 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 878 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 879 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 880 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 97:
#line 881 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 885 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 99:
#line 886 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 100:
#line 887 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 101:
#line 888 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 102:
#line 889 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 103:
#line 890 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 104:
#line 892 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 893 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 106:
#line 894 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 107:
#line 895 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 108:
#line 896 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 109:
#line 897 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 110:
#line 898 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 111:
#line 899 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 112:
#line 900 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 901 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 114:
#line 902 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 115:
#line 903 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 116:
#line 905 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 117:
#line 906 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 118:
#line 907 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 119:
#line 908 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 120:
#line 909 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 121:
#line 910 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 122:
#line 911 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 123:
#line 912 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 124:
#line 913 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 125:
#line 914 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 126:
#line 915 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 127:
#line 916 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 128:
#line 917 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 129:
#line 918 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 130:
#line 919 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 131:
#line 920 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 132:
#line 922 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 133:
#line 923 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 134:
#line 924 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 135:
#line 925 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 136:
#line 926 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 137:
#line 927 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 138:
#line 930 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 139:
#line 931 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 140:
#line 932 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 933 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 142:
#line 934 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 143:
#line 935 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 144:
#line 936 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 145:
#line 937 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 146:
#line 938 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 939 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 940 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 149:
#line 941 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 150:
#line 942 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 151:
#line 943 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 152:
#line 944 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 153:
#line 945 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 154:
#line 946 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 155:
#line 947 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 156:
#line 948 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 157:
#line 949 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 158:
#line 950 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 159:
#line 951 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 160:
#line 952 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 161:
#line 953 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 162:
#line 954 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 163:
#line 955 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 164:
#line 956 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 165:
#line 957 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 166:
#line 958 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 167:
#line 959 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 168:
#line 960 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 169:
#line 961 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 170:
#line 962 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 171:
#line 963 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 172:
#line 965 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 173:
#line 966 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 174:
#line 967 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 175:
#line 968 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 176:
#line 969 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 177:
#line 970 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 178:
#line 971 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 179:
#line 972 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 180:
#line 974 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 181:
#line 975 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 182:
#line 976 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 183:
#line 977 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 184:
#line 978 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 185:
#line 979 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 186:
#line 980 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 187:
#line 981 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 188:
#line 982 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 189:
#line 983 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 190:
#line 984 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 191:
#line 985 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 192:
#line 986 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 193:
#line 987 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 194:
#line 988 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 195:
#line 989 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 196:
#line 990 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 197:
#line 991 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 198:
#line 992 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 199:
#line 993 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 200:
#line 994 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 201:
#line 995 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 202:
#line 997 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 203:
#line 998 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 204:
#line 999 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 205:
#line 1000 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 206:
#line 1001 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 207:
#line 1003 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 208:
#line 1004 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 209:
#line 1006 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 210:
#line 1007 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 211:
#line 1008 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 212:
#line 1010 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 213:
#line 1011 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 214:
#line 1012 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 215:
#line 1013 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 216:
#line 1020 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 217:
#line 1027 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 218:
#line 1034 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 219:
#line 1038 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 220:
#line 1042 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 221:
#line 1046 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1050 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 223:
#line 1054 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 224:
#line 1060 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 225:
#line 1061 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 226:
#line 1062 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 227:
#line 1066 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 228:
#line 1072 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 229:
#line 1078 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 230:
#line 1079 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 231:
#line 1080 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 232:
#line 1081 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 233:
#line 1082 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1083 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 235:
#line 1084 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 236:
#line 1085 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 237:
#line 1086 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 238:
#line 1090 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 239:
#line 1092 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 240:
#line 1094 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 241:
#line 1096 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 242:
#line 1100 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 243:
#line 1108 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 244:
#line 1118 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 245:
#line 1119 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 246:
#line 1122 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 247:
#line 1123 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 248:
#line 1127 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 249:
#line 1135 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 250:
#line 1143 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 251:
#line 1151 "parser/evoparser.y"
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

  case 252:
#line 1165 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 253:
#line 1174 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 254:
#line 1179 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 255:
#line 1192 "parser/evoparser.y"
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

  case 257:
#line 1205 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1207 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 260:
#line 1210 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 261:
#line 1217 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 262:
#line 1225 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 263:
#line 1226 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1227 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 265:
#line 1230 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1231 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1235 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 271:
#line 1244 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 272:
#line 1246 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 275:
#line 1254 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 276:
#line 1256 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 281:
#line 1268 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 282:
#line 1274 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 283:
#line 1281 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 284:
#line 1289 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 285:
#line 1290 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 286:
#line 1291 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 287:
#line 1292 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 288:
#line 1295 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 289:
#line 1296 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 290:
#line 1297 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 291:
#line 1298 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 292:
#line 1299 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 294:
#line 1303 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 295:
#line 1306 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 296:
#line 1307 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 297:
#line 1310 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 298:
#line 1311 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 299:
#line 1312 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 300:
#line 1313 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 301:
#line 1314 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 302:
#line 1315 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 303:
#line 1316 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 304:
#line 1317 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 305:
#line 1318 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 306:
#line 1321 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 307:
#line 1322 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 308:
#line 1324 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 309:
#line 1332 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 310:
#line 1337 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 311:
#line 1338 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 312:
#line 1339 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 313:
#line 1342 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 314:
#line 1343 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 317:
#line 1352 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 318:
#line 1360 "parser/evoparser.y"
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

  case 319:
#line 1369 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 320:
#line 1370 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 321:
#line 1372 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 322:
#line 1381 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 323:
#line 1386 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 324:
#line 1392 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 325:
#line 1399 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 326:
#line 1403 "parser/evoparser.y"
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

  case 327:
#line 1423 "parser/evoparser.y"
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

  case 330:
#line 1449 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 331:
#line 1451 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 332:
#line 1453 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 333:
#line 1455 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 334:
#line 1457 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 335:
#line 1460 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 336:
#line 1461 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 337:
#line 1462 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 338:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1466 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 340:
#line 1469 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 341:
#line 1470 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 342:
#line 1473 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 343:
#line 1474 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 344:
#line 1475 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 347:
#line 1482 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 348:
#line 1483 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 349:
#line 1488 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 350:
#line 1490 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 351:
#line 1492 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 353:
#line 1496 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1497 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 355:
#line 1500 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 356:
#line 1501 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 357:
#line 1504 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 358:
#line 1509 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 359:
#line 1519 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 360:
#line 1526 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 361:
#line 1527 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 362:
#line 1528 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 363:
#line 1529 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 364:
#line 1534 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 365:
#line 1538 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 366:
#line 1540 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 369:
#line 1546 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1551 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 371:
#line 1558 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 372:
#line 1565 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 374:
#line 1577 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 375:
#line 1578 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 376:
#line 1583 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 377:
#line 1590 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 378:
#line 1597 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 379:
#line 1605 "parser/evoparser.y"
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

  case 380:
#line 1615 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 381:
#line 1623 "parser/evoparser.y"
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

  case 382:
#line 1633 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 383:
#line 1641 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 384:
#line 1650 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 385:
#line 1659 "parser/evoparser.y"
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

  case 386:
#line 1669 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 387:
#line 1677 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 388:
#line 1686 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 389:
#line 1695 "parser/evoparser.y"
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

  case 390:
#line 1705 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 391:
#line 1714 "parser/evoparser.y"
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

  case 392:
#line 1731 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 393:
#line 1739 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX IF NOT EXISTS %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval), (yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval));
        free((yyvsp[(5) - (14)].strval)); free((yyvsp[(7) - (14)].strval)); free((yyvsp[(11) - (14)].strval));
    ;}
    break;

  case 394:
#line 1750 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 395:
#line 1752 "parser/evoparser.y"
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

  case 396:
#line 1765 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 397:
#line 1766 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 398:
#line 1769 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 399:
#line 1771 "parser/evoparser.y"
    {
        int lm = ((yyvsp[(1) - (3)].intval) >> 16) & 0xFFFF, le = (yyvsp[(1) - (3)].intval) & 0xFFFF;
        int rm = ((yyvsp[(3) - (3)].intval) >> 16) & 0xFFFF, re = (yyvsp[(3) - (3)].intval) & 0xFFFF;
        /* Later entries override earlier ones; 0 means "not set in this item". */
        int m  = rm ? rm : lm;
        int ef = re ? re : le;
        (yyval.intval) = (m << 16) | ef;
    ;}
    break;

  case 400:
#line 1783 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 401:
#line 1793 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 402:
#line 1798 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 403:
#line 1803 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 404:
#line 1809 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 405:
#line 1816 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 406:
#line 1823 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 407:
#line 1830 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 408:
#line 1840 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 409:
#line 1847 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1856 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 411:
#line 1863 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 412:
#line 1869 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 413:
#line 1877 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 414:
#line 1883 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 416:
#line 1891 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 417:
#line 1892 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 418:
#line 1893 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 419:
#line 1894 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 420:
#line 1910 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 421:
#line 1911 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 422:
#line 1912 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 423:
#line 1916 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 424:
#line 1922 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 425:
#line 1933 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 426:
#line 1939 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 427:
#line 1946 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 428:
#line 1952 "parser/evoparser.y"
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

  case 429:
#line 1968 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 430:
#line 1975 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 431:
#line 1984 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 432:
#line 1992 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 433:
#line 1998 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 435:
#line 2015 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 436:
#line 2019 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 437:
#line 2028 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 439:
#line 2043 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 440:
#line 2047 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 441:
#line 2052 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 442:
#line 2059 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 443:
#line 2064 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 444:
#line 2071 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 445:
#line 2075 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 446:
#line 2076 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 447:
#line 2082 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 448:
#line 2091 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 449:
#line 2092 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 450:
#line 2093 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 451:
#line 2097 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 452:
#line 2098 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 453:
#line 2099 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 454:
#line 2100 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 455:
#line 2101 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 456:
#line 2102 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 459:
#line 2111 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 460:
#line 2112 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 462:
#line 2117 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 464:
#line 2122 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 465:
#line 2127 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 466:
#line 2136 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 467:
#line 2142 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 468:
#line 2148 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 469:
#line 2155 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 470:
#line 2161 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 471:
#line 2168 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 472:
#line 2174 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 473:
#line 2180 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 474:
#line 2186 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 475:
#line 2192 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 476:
#line 2198 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 477:
#line 2204 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 478:
#line 2210 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 479:
#line 2216 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 480:
#line 2222 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 481:
#line 2228 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 482:
#line 2234 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 483:
#line 2240 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 484:
#line 2246 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 485:
#line 2252 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 486:
#line 2258 "parser/evoparser.y"
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

  case 487:
#line 2271 "parser/evoparser.y"
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

  case 488:
#line 2282 "parser/evoparser.y"
    { ;}
    break;

  case 489:
#line 2283 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 490:
#line 2284 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 491:
#line 2288 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 492:
#line 2296 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 493:
#line 2302 "parser/evoparser.y"
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

  case 495:
#line 2315 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 496:
#line 2315 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 499:
#line 2323 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 500:
#line 2324 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 501:
#line 2325 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 502:
#line 2329 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 503:
#line 2330 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 504:
#line 2331 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 505:
#line 2335 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 506:
#line 2343 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 507:
#line 2352 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 508:
#line 2353 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 509:
#line 2354 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 510:
#line 2355 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 511:
#line 2356 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 515:
#line 2363 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 516:
#line 2367 "parser/evoparser.y"
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

  case 517:
#line 2377 "parser/evoparser.y"
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

  case 518:
#line 2389 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 519:
#line 2390 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 520:
#line 2390 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 521:
#line 2393 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 522:
#line 2394 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 523:
#line 2395 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 524:
#line 2396 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 525:
#line 2400 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 526:
#line 2403 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 527:
#line 2404 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 528:
#line 2405 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 529:
#line 2406 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 530:
#line 2412 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 531:
#line 2418 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 532:
#line 2423 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 533:
#line 2428 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 534:
#line 2432 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 535:
#line 2436 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 536:
#line 2438 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 539:
#line 2444 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 540:
#line 2445 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 541:
#line 2449 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 542:
#line 2450 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 543:
#line 2454 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 544:
#line 2455 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 545:
#line 2456 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 552:
#line 2471 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 553:
#line 2472 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 554:
#line 2473 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 555:
#line 2474 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 556:
#line 2475 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 557:
#line 2476 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 558:
#line 2477 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 559:
#line 2478 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 560:
#line 2483 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 561:
#line 2492 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 562:
#line 2499 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 563:
#line 2500 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 564:
#line 2501 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 565:
#line 2506 "parser/evoparser.y"
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

  case 566:
#line 2517 "parser/evoparser.y"
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

  case 567:
#line 2529 "parser/evoparser.y"
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

  case 568:
#line 2540 "parser/evoparser.y"
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

  case 569:
#line 2555 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 570:
#line 2559 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 571:
#line 2563 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 572:
#line 2564 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 573:
#line 2569 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 574:
#line 2571 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 575:
#line 2573 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 576:
#line 2575 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 577:
#line 2578 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 578:
#line 2579 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 579:
#line 2585 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 580:
#line 2590 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 581:
#line 2592 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 582:
#line 2594 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 583:
#line 2596 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 584:
#line 2598 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 585:
#line 2602 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 586:
#line 2606 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 587:
#line 2607 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 588:
#line 2612 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 589:
#line 2622 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 591:
#line 2635 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 592:
#line 2643 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 593:
#line 2651 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 595:
#line 2659 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 596:
#line 2660 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 597:
#line 2661 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 598:
#line 2662 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 599:
#line 2664 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 600:
#line 2666 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 601:
#line 2668 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 604:
#line 2676 "parser/evoparser.y"
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

  case 605:
#line 2691 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 606:
#line 2699 "parser/evoparser.y"
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

  case 607:
#line 2713 "parser/evoparser.y"
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

  case 608:
#line 2727 "parser/evoparser.y"
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

  case 609:
#line 2741 "parser/evoparser.y"
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

  case 610:
#line 2753 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 611:
#line 2754 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 612:
#line 2755 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 613:
#line 2758 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 614:
#line 2759 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 615:
#line 2762 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 616:
#line 2763 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 617:
#line 2764 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 618:
#line 2765 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 619:
#line 2766 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 620:
#line 2767 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 621:
#line 2768 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 622:
#line 2769 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 623:
#line 2771 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 624:
#line 2773 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 625:
#line 2775 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 626:
#line 2777 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 627:
#line 2779 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 628:
#line 2781 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 629:
#line 2784 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 630:
#line 2785 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 631:
#line 2788 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 632:
#line 2789 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 633:
#line 2792 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 634:
#line 2793 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 636:
#line 2797 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 637:
#line 2798 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 638:
#line 2799 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 639:
#line 2800 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 640:
#line 2801 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 641:
#line 2802 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 642:
#line 2803 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 643:
#line 2804 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 644:
#line 2805 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 645:
#line 2806 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 646:
#line 2807 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 647:
#line 2808 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 648:
#line 2809 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 649:
#line 2810 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 650:
#line 2811 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 651:
#line 2812 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 652:
#line 2813 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 653:
#line 2816 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 654:
#line 2817 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 655:
#line 2820 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 656:
#line 2822 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 657:
#line 2830 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 658:
#line 2831 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 660:
#line 2833 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 661:
#line 2834 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 662:
#line 2835 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 663:
#line 2836 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 664:
#line 2837 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 665:
#line 2838 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 666:
#line 2839 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 667:
#line 2840 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 668:
#line 2841 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 669:
#line 2848 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 670:
#line 2849 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 671:
#line 2850 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 672:
#line 2851 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 673:
#line 2852 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 674:
#line 2853 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 675:
#line 2854 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 676:
#line 2855 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 677:
#line 2856 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 678:
#line 2857 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 679:
#line 2858 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 680:
#line 2859 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 681:
#line 2860 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 682:
#line 2861 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 683:
#line 2862 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 684:
#line 2863 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 685:
#line 2864 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 686:
#line 2865 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 687:
#line 2866 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 688:
#line 2867 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 689:
#line 2868 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 690:
#line 2871 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 691:
#line 2872 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 692:
#line 2873 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 693:
#line 2876 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 694:
#line 2877 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 695:
#line 2880 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 696:
#line 2881 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 697:
#line 2882 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 699:
#line 2886 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 700:
#line 2887 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 701:
#line 2891 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 702:
#line 2892 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 703:
#line 2893 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 704:
#line 2894 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 705:
#line 2895 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 706:
#line 2896 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 707:
#line 2897 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 708:
#line 2898 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 709:
#line 2899 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 710:
#line 2900 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 711:
#line 2901 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 712:
#line 2902 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 713:
#line 2903 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 714:
#line 2904 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 715:
#line 2905 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 716:
#line 2906 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 717:
#line 2907 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 718:
#line 2908 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 719:
#line 2909 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 720:
#line 2910 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 721:
#line 2911 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 722:
#line 2912 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 723:
#line 2913 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 724:
#line 2914 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 725:
#line 2915 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 726:
#line 2916 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 727:
#line 2917 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 728:
#line 2918 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 729:
#line 2919 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 730:
#line 2920 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 731:
#line 2921 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 732:
#line 2922 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 733:
#line 2923 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 734:
#line 2924 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 735:
#line 2925 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 736:
#line 2928 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 737:
#line 2929 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 738:
#line 2933 "parser/evoparser.y"
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

  case 739:
#line 2945 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 740:
#line 2946 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 741:
#line 2947 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 742:
#line 2951 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 743:
#line 2954 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 744:
#line 2955 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 748:
#line 2959 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 749:
#line 2960 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 750:
#line 2968 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 751:
#line 2973 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 752:
#line 2979 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 753:
#line 2985 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 754:
#line 2992 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 755:
#line 2999 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 756:
#line 3005 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 757:
#line 3011 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 758:
#line 3018 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 763:
#line 3034 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 764:
#line 3035 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 765:
#line 3036 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 766:
#line 3037 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 767:
#line 3040 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 768:
#line 3041 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 769:
#line 3042 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 770:
#line 3043 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 771:
#line 3044 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 772:
#line 3045 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 773:
#line 3046 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 774:
#line 3047 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 775:
#line 3048 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 776:
#line 3049 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 785:
#line 3066 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 786:
#line 3067 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 907:
#line 3085 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 908:
#line 3092 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 909:
#line 3097 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 910:
#line 3103 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 911:
#line 3109 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 912:
#line 3115 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 913:
#line 3126 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 914:
#line 3131 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 915:
#line 3137 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 918:
#line 3148 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 919:
#line 3149 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 920:
#line 3150 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 921:
#line 3151 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 922:
#line 3152 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 923:
#line 3153 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 924:
#line 3154 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 925:
#line 3161 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 926:
#line 3166 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 927:
#line 3173 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 928:
#line 3174 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 929:
#line 3177 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 930:
#line 3178 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 931:
#line 3179 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 932:
#line 3182 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 933:
#line 3187 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 934:
#line 3193 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 935:
#line 3202 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 936:
#line 3210 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 937:
#line 3220 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 938:
#line 3225 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 941:
#line 3238 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 942:
#line 3239 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 943:
#line 3240 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 944:
#line 3241 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 945:
#line 3242 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 946:
#line 3243 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 947:
#line 3244 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 948:
#line 3245 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 949:
#line 3248 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 950:
#line 3253 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 951:
#line 3259 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 952:
#line 3269 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 953:
#line 3276 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 954:
#line 3283 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 955:
#line 3291 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 957:
#line 3301 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 959:
#line 3305 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 960:
#line 3306 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11594 "parser/evoparser.tab.c"
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


#line 3309 "parser/evoparser.y"

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
